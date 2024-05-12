

`timescale 1 ns / 1 ns

module subsystem
          (clk,
           rst,
           GPIO,
           BRAM_din,
           BRAM_dout,
           BRAM_addr,
           BRAM_clk,
           BRAM_en,
           BRAM_rst,
           BRAM_we
           );
   
   input	 clk; 
   input	 rst; 
   input     GPIO;
  
   output [31:0] BRAM_addr;
   output	     BRAM_clk;
   output [31:0] BRAM_din;
   input [31:0]	 BRAM_dout;
   output	 BRAM_en;
   output	 BRAM_rst;
   output [3:0]	 BRAM_we;

  wire counter_reset;
  wire counter_reset_1;
  wire [15:0] index_counter_out1;  // uint16
  wire counter_increment;
  wire write_enable;
  wire counter_increment_1;
  wire [31:0] Constant11_out1;  // uint32
  wire [31:0] Constant10_out1;  // uint32
  wire [31:0] Constant1_out1;  // uint32
  wire [31:0] Constant2_out1;  // uint32
  wire [31:0] Constant6_out1;  // uint32
  wire [31:0] Constant7_out1;  // uint32
  wire [31:0] Constant8_out1;  // uint32
  wire [31:0] Constant9_out1;  // uint32
  wire [31:0] Constant15_out1;  // uint32
  wire [31:0] Multiport_Switch_out1;  // uint32
  wire write_enable_1;
  wire clk_enable;
  wire ga_done;
  wire reset;
  
  assign reset = rst;
  assign ga_done = 1'b1;  
  assign BRAM_rst = reset;
  assign BRAM_clk = clk;
  assign clk_enable = 1'b1;

  
  assign counter_reset_1 = counter_reset;

  Chart u_Chart (.clk(clk),
                 .reset_x(reset),
                 .enb(clk_enable),
                 .GA_done(ga_done),
                 .GPIO(GPIO),
                 .counter(index_counter_out1),  // uint16
                 .counter_increment(counter_increment),
                 .counter_reset(counter_reset),
                 .write_enable(write_enable)
                 );

  assign counter_increment_1 = counter_increment;

  index_counter u_index_counter (.clk(clk),
                                 .reset_x(reset),
                                 .enb(clk_enable),
                                 .In1(counter_increment_1),
                                 .In2(counter_reset_1),
                                 .index_counter_1(index_counter_out1)  // uint16
                                 );

  assign Constant11_out1 = 32'b00000000000000000000000000000010;
  assign Constant10_out1 = 32'b00000000000000000000000000001100;
  assign Constant1_out1 = 32'b00000000000000000000000000001001;
  assign Constant2_out1 = 32'b00000000000000000000000000000100;
  assign Constant6_out1 = 32'b00000000000000000000000000000110;
  assign Constant7_out1 = 32'b00000000000000000000000000001101;
  assign Constant8_out1 = 32'b00000000000000000000000000000111;
  assign Constant9_out1 =  32'b00000000000000000000000000000101;
  assign Constant15_out1 = 32'b00000000000000000000000001000101;


  assign Multiport_Switch_out1 = (index_counter_out1 == 16'b0000000000000000 ? Constant11_out1 :
              (index_counter_out1 == 16'b0000000000000001 ? Constant10_out1 :
              (index_counter_out1 == 16'b0000000000000010 ? Constant1_out1 :
              (index_counter_out1 == 16'b0000000000000011 ? Constant2_out1 :
              (index_counter_out1 == 16'b0000000000000100 ? Constant6_out1 :
              (index_counter_out1 == 16'b0000000000000101 ? Constant7_out1 :
              (index_counter_out1 == 16'b0000000000000110 ? Constant8_out1 :
              (index_counter_out1 == 16'b0000000000000111 ? Constant9_out1 :
              Constant15_out1))))))));



  assign BRAM_din = Multiport_Switch_out1;

  assign BRAM_addr = {16'b0, index_counter_out1} << 2;

  assign write_enable_1 = write_enable;

  assign BRAM_en = write_enable_1;
//  assign BRAM_en = 1'b1;
//  assign BRAM_we = 4'b1111;
  assign BRAM_we =  {4{write_enable_1}};
  

endmodule  // subsystem

