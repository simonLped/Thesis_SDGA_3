// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\FIFO_system3.v
// Created: 2024-05-04 07:38:49
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: FIFO_system3
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/FIFO_system3
// Hierarchy Level: 2
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module FIFO_system3
          (clk,
           reset_x,
           enb,
           data_in,
           enable_output,
           load_fifo,
           data_out,
           data_valid,
           reset_fft,
           FIFO_full);


  input   clk;
  input   reset_x;
  input   enb;
  input   signed [15:0] data_in;  // sfix16_En14
  input   enable_output;
  input   load_fifo;
  output  signed [15:0] data_out;  // sfix16_En14
  output  data_valid;
  output  reset_fft;
  output  FIFO_full;


  wire [12:0] Constant4_out1_dtc;  // ufix13
  reg [12:0] Delay1_out1;  // ufix13
  wire [12:0] Add1_out1;  // ufix13
  wire [12:0] Switch1_out1;  // ufix13
  wire Chart1_out1;
  wire Chart3_out1;
  wire Chart2_out1;
  wire Logical_Operator_out1;
  wire HDL_FIFO1_out2;
  wire signed [15:0] HDL_FIFO1_out1;  // sfix16_En14
  wire signed [15:0] Switch3_out1;  // sfix16_En14
  wire Logical_Operator5_out1;
  wire Logical_Operator3_out1;
  reg  Delay3_out1;
  wire Logical_Operator6_out1;


  assign Constant4_out1_dtc = 13'b0000000000000;



  assign Add1_out1 = Delay1_out1 + 13'b0000000000001;



  always @(posedge clk)
    begin : Delay1_process
      if (reset_x == 1'b0) begin
        Delay1_out1 <= 13'b0000000000000;
      end
      else begin
        if (enb) begin
          Delay1_out1 <= Switch1_out1;
        end
      end
    end



  Chart1 u_Chart1 (.clk(clk),
                   .reset_x(reset_x),
                   .enb(enb),
                   .counter(Delay1_out1),  // ufix13
                   .en_out(enable_output),
                   .enable_counter(Chart1_out1)
                   );

  assign Switch1_out1 = (Chart1_out1 == 1'b0 ? Constant4_out1_dtc :
              Add1_out1);



  Chart3 u_Chart3 (.clk(clk),
                   .reset_x(reset_x),
                   .enb(enb),
                   .counter(Switch1_out1),  // ufix13
                   .enable_pop(Chart3_out1)
                   );

  assign Logical_Operator_out1 = Chart2_out1 | Chart3_out1;



  Chart2 u_Chart2 (.clk(clk),
                   .reset_x(reset_x),
                   .enb(enb),
                   .load_FIFO1(load_fifo),
                   .full(HDL_FIFO1_out2),
                   .enable_push(Chart2_out1)
                   );

  assign Switch3_out1 = (Chart2_out1 == 1'b0 ? HDL_FIFO1_out1 :
              data_in);



  HDL_FIFO1 u_HDL_FIFO1 (.clk(clk),
                         .reset_x(reset_x),
                         .enb(enb),
                         .In(Switch3_out1),  // sfix16_En14
                         .Push(Logical_Operator_out1),
                         .Pop(Chart3_out1),
                         .Out(HDL_FIFO1_out1),  // sfix16_En14
                         .Full(HDL_FIFO1_out2)
                         );

  assign data_out = HDL_FIFO1_out1;

  assign Logical_Operator5_out1 = 1'b0;



  assign data_valid = Logical_Operator5_out1;

  assign Logical_Operator3_out1 = 1'b0;



  assign reset_fft = Logical_Operator3_out1;

  always @(posedge clk)
    begin : Delay3_process
      if (reset_x == 1'b0) begin
        Delay3_out1 <= 1'b0;
      end
      else begin
        if (enb) begin
          Delay3_out1 <= HDL_FIFO1_out2;
        end
      end
    end



  assign Logical_Operator6_out1 = HDL_FIFO1_out2 ^ Delay3_out1;



  assign FIFO_full = Logical_Operator6_out1;

endmodule  // FIFO_system3

