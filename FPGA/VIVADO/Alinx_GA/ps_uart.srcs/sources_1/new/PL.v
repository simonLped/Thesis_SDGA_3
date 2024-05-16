

`timescale 1 ns / 1 ns

module PL
          (clk,
           reset_x,
           clk_enable,
           START_GA,
           bram_dout,
           bram_din,
           bram_addr,
           bram_en,
           bram_clk,
           PL_done,
           bram_we,
           bram_rst);


  input   clk;
  input   reset_x;
  input   clk_enable;
  input   START_GA;
  input   [31:0] bram_dout;  // uint32
  output  [31:0] bram_din;  // uint32
  output  [31:0] bram_addr;  // uint16
  output  bram_en;
  output  PL_done;
  output  [3:0] bram_we;  // ufix4
  output  bram_rst;
  output  bram_clk;


  wire enb;
  wire [29:0] Data_Type_Conversion8_out1;  // ufix30_En14
  wire [29:0] Bit_Shift18_out1;  // ufix30_En14
  wire signed [15:0] Data_Type_Conversion9_out1;  // sfix16_En14
  wire GA_done;
  wire signed [32:0] integration_block1_out2_0;  // sfix33_En15
  wire signed [32:0] integration_block1_out2_1;  // sfix33_En15
  wire signed [32:0] integration_block1_out2_2;  // sfix33_En15
  wire signed [32:0] integration_block1_out2_3;  // sfix33_En15
  wire signed [32:0] integration_block1_out2_4;  // sfix33_En15
  wire signed [32:0] integration_block1_out2_5;  // sfix33_En15
  wire signed [32:0] integration_block1_out2_6;  // sfix33_En15
  wire counter_reset;
  wire counter_reset_1;
  wire [31:0] index_counter_out1;  // uint16
  wire counter_increment;
  wire write_enable;
  wire counter_increment_1;
  wire [31:0] Data_Type_Conversion2_out1;  // uint32
  wire [31:0] to_uint32_1_out1;  // uint32
  wire [31:0] to_uint32_2_out1;  // uint32
  wire [31:0] to_uint32_3_out1;  // uint32
  wire [31:0] to_uint32_4_out1;  // uint32
  wire [31:0] to_uint32_5_out1;  // uint32
  wire [31:0] to_uint32_6_out1;  // uint32
  wire [31:0] Multiport_Switch_out1;  // uint32
  wire write_enable_1;
  reg  [15:0] Delay_reg;  // ufix1 [16] Delayed by 16 clock cycles
  wire Delay_out1;
  wire write_enable_2;
  wire [3:0] y;  // ufix4
  wire bram_read;

  
  assign bram_rst = ~reset_x;
  assign bram_clk = clk;
  
  
  assign Data_Type_Conversion8_out1 = {bram_dout[15:0], 14'b00000000000000};



  assign Bit_Shift18_out1 = Data_Type_Conversion8_out1 >> 8'd14;



  assign Data_Type_Conversion9_out1 = $signed(Bit_Shift18_out1[15:0]);



  integration_block1 u_integration_block1 (.clk(clk),
                                           .reset_x(reset_x),
                                           .enb(clk_enable),
                                           .data_in(Data_Type_Conversion9_out1),  // sfix16_En14
                                           .data_in1(Data_Type_Conversion9_out1),  // sfix16_En14
                                           .start_ga(START_GA),
                                           .ga_done(GA_done),
                                           .elite_individual_0(integration_block1_out2_0),  // sfix33_En15
                                           .elite_individual_1(integration_block1_out2_1),  // sfix33_En15
                                           .elite_individual_2(integration_block1_out2_2),  // sfix33_En15
                                           .elite_individual_3(integration_block1_out2_3),  // sfix33_En15
                                           .elite_individual_4(integration_block1_out2_4),  // sfix33_En15
                                           .elite_individual_5(integration_block1_out2_5),  // sfix33_En15
                                           .elite_individual_6(integration_block1_out2_6)  // sfix33_En15
                                           );

  assign counter_reset_1 = counter_reset;

  Chart_block2 u_Chart (.clk(clk),
                        .reset_x(reset_x),
                        .enb(clk_enable),
                        .GA_done(GA_done),
                        .GPIO(START_GA),
                        .counter(index_counter_out1),  // uint16
                        .counter_increment(counter_increment),
                        .counter_reset(counter_reset),
                        .bram_read(bram_read),
                        .write_enable(write_enable)
                        );

  assign counter_increment_1 = counter_increment;

  index_counter_block u_index_counter (.clk(clk),
                                       .reset_x(reset_x),
                                       .enb(clk_enable),
                                       .In1(counter_increment_1),
                                       .In2(counter_reset_1),
                                       .index_counter(index_counter_out1)  // uint16
                                       );

  assign Data_Type_Conversion2_out1 = {{14{integration_block1_out2_0[32]}}, integration_block1_out2_0[32:15]};



  to_uint32_1 u_to_uint32_1 (.u_port(integration_block1_out2_1),  // sfix33_En15
                             .Out1(to_uint32_1_out1)  // uint32
                             );

  to_uint32_2 u_to_uint32_2 (.u_port(integration_block1_out2_2),  // sfix33_En15
                             .Out1(to_uint32_2_out1)  // uint32
                             );

  to_uint32_3 u_to_uint32_3 (.u_port(integration_block1_out2_3),  // sfix33_En15
                             .Out1(to_uint32_3_out1)  // uint32
                             );

  to_uint32_4 u_to_uint32_4 (.u_port(integration_block1_out2_4),  // sfix33_En15
                             .Out1(to_uint32_4_out1)  // uint32
                             );

  to_uint32_5 u_to_uint32_5 (.u_port(integration_block1_out2_5),  // sfix33_En15
                             .Out1(to_uint32_5_out1)  // uint32
                             );

  to_uint32_6 u_to_uint32_6 (.u_port(integration_block1_out2_6),  // sfix33_En15
                             .Out1(to_uint32_6_out1)  // uint32
                             );

  assign Multiport_Switch_out1 = (index_counter_out1 == 32'b00000000000000000000000000000000 ? Data_Type_Conversion2_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000001 ? to_uint32_1_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000010 ? to_uint32_2_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000011 ? to_uint32_3_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000100 ? to_uint32_4_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000101 ? to_uint32_5_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000110 ? to_uint32_6_out1 :
              (index_counter_out1 == 32'b00000000000000000000000000000111 ? Data_Type_Conversion2_out1 :
              Data_Type_Conversion2_out1))))))));



  assign bram_din = Multiport_Switch_out1;

  assign bram_addr = index_counter_out1 << 2;

  assign write_enable_1 = write_enable;
  assign bram_en = write_enable_1 | bram_read;
//  assign bram_en = 1'b1;
  
  assign enb = clk_enable;

  always @(posedge clk)
    begin : Delay_process
      if (reset_x == 1'b0) begin
        Delay_reg <= {16{1'b0}};
      end
      else begin
        if (enb) begin
          Delay_reg[0] <= GA_done;
          Delay_reg[32'sd15:32'sd1] <= Delay_reg[32'sd14:32'sd0];
        end
      end
    end

  assign Delay_out1 = Delay_reg[15];



  assign PL_done = Delay_out1;

  assign write_enable_2 = write_enable;

  assign y = {write_enable_2, write_enable_2, write_enable_2, write_enable_2};



  assign bram_we = y;


endmodule  // PL

