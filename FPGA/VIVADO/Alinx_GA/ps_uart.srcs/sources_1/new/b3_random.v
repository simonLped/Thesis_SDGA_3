// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA4\hdlsrc\DUALportRAMinterface_v3\b3_random.v
// Created: 2024-05-15 10:45:59
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: b3_random
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/Subsystem/b3_random
// Hierarchy Level: 3
// Model version: 1.52
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module b3_random
          (clk,
           reset_x,
           enb,
           In1,
           In2,
           Out1);


  input   clk;
  input   reset_x;
  input   enb;
  input   [15:0] In1;  // uint16
  input   In2;
  output  signed [17:0] Out1;  // sfix18_En15


  wire switch_compare_1;
  wire [31:0] Data_Type_Conversion10_out1;  // ufix32_En16
  wire [31:0] Bit_Shift3_out1;  // ufix32_En16
  wire [10:0] Data_Type_Conversion9_out1;  // ufix11_En11
  wire Constant_out1deadIn;
  wire [52:0] Modulo_by_Constant_HDL_Optimized_out1;  // ufix53_En59
  wire Modulo_by_Constant_HDL_Optimized_out2deadOut;
  wire signed [17:0] Data_Type_Conversion11_out1;  // sfix18_En15
  wire signed [17:0] Constant3_out1;  // sfix18_En15
  wire signed [17:0] Add7_out1;  // sfix18_En15
  wire signed [17:0] Add6_out1;  // sfix18_En15
  wire signed [17:0] Switch3_out1;  // sfix18_En15


  assign switch_compare_1 = In2 > 1'b0;



  assign Data_Type_Conversion10_out1 = {In1, 16'b0000000000000000};



  assign Bit_Shift3_out1 = Data_Type_Conversion10_out1 >> 8'd22;



  assign Data_Type_Conversion9_out1 = (Bit_Shift3_out1[31:16] != 16'b0000000000000000 ? 11'b11111111111 :
              Bit_Shift3_out1[15:5]);



  assign Constant_out1deadIn = 1'b0;



  modimpl_ntwk_block3 u_mod_by_constant (.clk(clk),
                                         .reset_x(reset_x),
                                         .enb(enb),
                                         .X(Data_Type_Conversion9_out1),  // ufix11_En11
                                         .validIn(Constant_out1deadIn),
                                         .Y(Modulo_by_Constant_HDL_Optimized_out1),  // ufix53_En59
                                         .validOut(Modulo_by_Constant_HDL_Optimized_out2deadOut)
                                         );

  assign Data_Type_Conversion11_out1 = {9'b0, Modulo_by_Constant_HDL_Optimized_out1[52:44]};



  assign Constant3_out1 = 18'sb001000001011010001;



  assign Add7_out1 = Data_Type_Conversion11_out1 + Constant3_out1;



  assign Add6_out1 = Constant3_out1 - Data_Type_Conversion11_out1;



  assign Switch3_out1 = (switch_compare_1 == 1'b0 ? Add7_out1 :
              Add6_out1);



  assign Out1 = Switch3_out1;

endmodule  // b3_random

