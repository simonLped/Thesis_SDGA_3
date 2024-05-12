// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\HDL_FIFO1.v
// Created: 2024-05-04 07:38:49
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: HDL_FIFO1
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3/HDL_FIFO1
// Hierarchy Level: 3
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module HDL_FIFO1
          (clk,
           reset_x,
           enb,
           In,
           Push,
           Pop,
           Out,
           Full);


  input   clk;
  input   reset_x;
  input   enb;
  input   signed [15:0] In;  // sfix16_En14
  input   Push;
  input   Pop;
  output  signed [15:0] Out;  // sfix16_En14
  output  Full;  // ufix1


  reg [12:0] fifo_front_indx;  // ufix13
  reg [12:0] fifo_front_dir;  // ufix13
  reg [12:0] fifo_back_indx;  // ufix13
  reg [12:0] fifo_back_dir;  // ufix13
  reg [12:0] fifo_sample_count;  // ufix13
  wire [12:0] fifo_front_indx_next;  // ufix13
  wire [12:0] fifo_front_dir_next;  // ufix13
  wire [12:0] fifo_back_indx_next;  // ufix13
  wire [12:0] fifo_back_dir_next;  // ufix13
  wire [12:0] fifo_sample_count_next;  // ufix13
  wire fifo_out3;
  wire fifo_out4;
  wire fifo_write_enable;
  wire fifo_read_enable;
  wire [12:0] fifo_front_indx_temp;  // ufix13
  wire [12:0] fifo_back_indx_temp;  // ufix13
  wire [12:0] w_waddr;  // ufix13
  wire w_we;  // ufix1
  wire [12:0] w_raddr;  // ufix13
  wire w_empty;  // ufix1
  wire [12:0] w_num;  // ufix13
  wire w_cz;
  wire w_mux1;  // ufix1
  reg  w_d1;  // ufix1
  wire signed [15:0] w_waddr_1;  // sfix16_En14
  reg signed [15:0] w_d2;  // sfix16_En14
  wire signed [15:0] w_out;  // sfix16_En14


  // FIFO logic controller
  // us2: Upsample by 1, Sample offset 0 
  // us3: Upsample by 1, Sample offset 0 
  always @(posedge clk)
    begin : fifo_process
      if (reset_x == 1'b0) begin
        fifo_front_indx <= 13'b0000000000000;
        fifo_front_dir <= 13'b0000000000001;
        fifo_back_indx <= 13'b0000000000000;
        fifo_back_dir <= 13'b0000000000001;
        fifo_sample_count <= 13'b0000000000000;
      end
      else begin
        if (enb) begin
          fifo_front_indx <= fifo_front_indx_next;
          fifo_front_dir <= fifo_front_dir_next;
          fifo_back_indx <= fifo_back_indx_next;
          fifo_back_dir <= fifo_back_dir_next;
          fifo_sample_count <= fifo_sample_count_next;
        end
      end
    end

  assign fifo_out4 = fifo_sample_count == 13'b1100000000001;
  assign fifo_out3 = fifo_sample_count == 13'b0000000000000;
  assign fifo_write_enable = Push && (Pop || ( ! fifo_out4));
  assign fifo_read_enable = Pop && ( ! fifo_out3);
  assign fifo_front_indx_temp = (fifo_read_enable ? fifo_front_indx + fifo_front_dir :
              fifo_front_indx);
  assign fifo_front_dir_next = (fifo_front_indx_temp == 13'b1100000000000 ? 13'b0100000000000 :
              13'b0000000000001);
  assign fifo_back_indx_temp = (fifo_write_enable ? fifo_back_indx + fifo_back_dir :
              fifo_back_indx);
  assign fifo_back_dir_next = (fifo_back_indx_temp == 13'b1100000000000 ? 13'b0100000000000 :
              13'b0000000000001);
  assign fifo_sample_count_next = (fifo_write_enable && ( ! fifo_read_enable) ? fifo_sample_count + 13'b0000000000001 :
              (( ! fifo_write_enable) && fifo_read_enable ? fifo_sample_count + 13'b1111111111111 :
              fifo_sample_count));
  assign w_waddr = fifo_back_indx;
  assign w_we = fifo_write_enable;
  assign w_raddr = fifo_front_indx;
  assign w_empty = fifo_out3;
  assign Full = fifo_out4;
  assign w_num = fifo_sample_count;
  assign fifo_front_indx_next = fifo_front_indx_temp;
  assign fifo_back_indx_next = fifo_back_indx_temp;



  assign w_cz = w_num > 13'b0000000000000;



  assign w_mux1 = (w_cz == 1'b0 ? 1'b0 :
              Pop);



  always @(posedge clk)
    begin : f_d1_process
      if (reset_x == 1'b0) begin
        w_d1 <= 1'b0;
      end
      else begin
        if (enb) begin
          w_d1 <= w_mux1;
        end
      end
    end



  // us1: Upsample by 1, Sample offset 0 
  SimpleDualPortRAM_generic_block #(.AddrWidth(13),
                                    .DataWidth(16)
                                    )
                                  u_HDL_FIFO1_ram (.clk(clk),
                                                   .enb(enb),
                                                   .wr_din(In),
                                                   .wr_addr(w_waddr),
                                                   .wr_en(w_we),  // ufix1
                                                   .rd_addr(w_raddr),
                                                   .dout(w_waddr_1)
                                                   );

  always @(posedge clk)
    begin : f_d2_process
      if (reset_x == 1'b0) begin
        w_d2 <= 16'sb0000000000000000;
      end
      else begin
        if (enb && w_d1) begin
          w_d2 <= w_waddr_1;
        end
      end
    end



  assign w_out = (w_d1 == 1'b0 ? w_d2 :
              w_waddr_1);



  assign Out = w_out;

endmodule  // HDL_FIFO1
