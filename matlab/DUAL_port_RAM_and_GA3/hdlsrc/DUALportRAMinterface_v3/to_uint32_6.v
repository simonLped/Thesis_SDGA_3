// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\to_uint32_6.v
// Created: 2024-05-04 07:38:50
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: to_uint32_6
// Source Path: DUALportRAMinterface_v3/PL/to_uint32_6
// Hierarchy Level: 1
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module to_uint32_6
          (u_port,
           Out1);


  input   signed [32:0] u_port;  // sfix33_En15
  output  [31:0] Out1;  // uint32


  wire signed [32:0] Bit_Shift2_out1;  // sfix33_En15
  wire Data_Type_Conversion2_out1;  // ufix1
  wire signed [32:0] Bit_Shift21_out1;  // sfix33_En15
  wire Data_Type_Conversion13_out1;  // ufix1
  wire Data_Type_Conversion12_out1;  // ufix1
  wire signed [32:0] Bit_Shift19_out1;  // sfix33_En15
  wire Data_Type_Conversion36_out1;  // ufix1
  wire signed [32:0] Bit_Shift26_out1;  // sfix33_En15
  wire Data_Type_Conversion35_out1;  // ufix1
  wire signed [32:0] Bit_Shift27_out1;  // sfix33_En15
  wire Data_Type_Conversion34_out1;  // ufix1
  wire signed [32:0] Bit_Shift28_out1;  // sfix33_En15
  wire Data_Type_Conversion26_out1;  // ufix1
  wire signed [32:0] Bit_Shift29_out1;  // sfix33_En15
  wire Data_Type_Conversion16_out1;  // ufix1
  wire signed [32:0] Bit_Shift30_out1;  // sfix33_En15
  wire Data_Type_Conversion15_out1;  // ufix1
  wire signed [32:0] Bit_Shift31_out1;  // sfix33_En15
  wire Data_Type_Conversion43_out1;  // ufix1
  wire signed [32:0] Bit_Shift32_out1;  // sfix33_En15
  wire Data_Type_Conversion14_out1;  // ufix1
  wire signed [32:0] Bit_Shift33_out1;  // sfix33_En15
  wire Data_Type_Conversion42_out1;  // ufix1
  wire signed [32:0] Bit_Shift20_out1;  // sfix33_En15
  wire Data_Type_Conversion41_out1;  // ufix1
  wire signed [32:0] Bit_Shift22_out1;  // sfix33_En15
  wire Data_Type_Conversion40_out1;  // ufix1
  wire signed [32:0] Bit_Shift23_out1;  // sfix33_En15
  wire Data_Type_Conversion39_out1;  // ufix1
  wire signed [32:0] Bit_Shift24_out1;  // sfix33_En15
  wire Data_Type_Conversion38_out1;  // ufix1
  wire signed [32:0] Bit_Shift25_out1;  // sfix33_En15
  wire Data_Type_Conversion37_out1;  // ufix1
  wire signed [32:0] Bit_Shift1_out1;  // sfix33_En15
  wire Data_Type_Conversion1_out1;  // ufix1
  wire [17:0] y;  // ufix18
  wire [31:0] Data_Type_Conversion44_out1;  // uint32


  assign Bit_Shift2_out1 = u_port >> 8'd16;



  assign Data_Type_Conversion2_out1 = Bit_Shift2_out1[15];



  assign Bit_Shift21_out1 = u_port >> 8'd1;



  assign Data_Type_Conversion13_out1 = Bit_Shift21_out1[15];



  assign Data_Type_Conversion12_out1 = u_port[15];



  assign Bit_Shift19_out1 = u_port <<< 8'd1;



  assign Data_Type_Conversion36_out1 = Bit_Shift19_out1[15];



  assign Bit_Shift26_out1 = u_port <<< 8'd2;



  assign Data_Type_Conversion35_out1 = Bit_Shift26_out1[15];



  assign Bit_Shift27_out1 = u_port <<< 8'd3;



  assign Data_Type_Conversion34_out1 = Bit_Shift27_out1[15];



  assign Bit_Shift28_out1 = u_port <<< 8'd4;



  assign Data_Type_Conversion26_out1 = Bit_Shift28_out1[15];



  assign Bit_Shift29_out1 = u_port <<< 8'd5;



  assign Data_Type_Conversion16_out1 = Bit_Shift29_out1[15];



  assign Bit_Shift30_out1 = u_port <<< 8'd6;



  assign Data_Type_Conversion15_out1 = Bit_Shift30_out1[15];



  assign Bit_Shift31_out1 = u_port <<< 8'd7;



  assign Data_Type_Conversion43_out1 = Bit_Shift31_out1[15];



  assign Bit_Shift32_out1 = u_port <<< 8'd8;



  assign Data_Type_Conversion14_out1 = Bit_Shift32_out1[15];



  assign Bit_Shift33_out1 = u_port <<< 8'd9;



  assign Data_Type_Conversion42_out1 = Bit_Shift33_out1[15];



  assign Bit_Shift20_out1 = u_port <<< 8'd10;



  assign Data_Type_Conversion41_out1 = Bit_Shift20_out1[15];



  assign Bit_Shift22_out1 = u_port <<< 8'd11;



  assign Data_Type_Conversion40_out1 = Bit_Shift22_out1[15];



  assign Bit_Shift23_out1 = u_port <<< 8'd12;



  assign Data_Type_Conversion39_out1 = Bit_Shift23_out1[15];



  assign Bit_Shift24_out1 = u_port <<< 8'd13;



  assign Data_Type_Conversion38_out1 = Bit_Shift24_out1[15];



  assign Bit_Shift25_out1 = u_port <<< 8'd14;



  assign Data_Type_Conversion37_out1 = Bit_Shift25_out1[15];



  assign Bit_Shift1_out1 = u_port <<< 8'd15;



  assign Data_Type_Conversion1_out1 = Bit_Shift1_out1[15];



  assign y = {Data_Type_Conversion2_out1, Data_Type_Conversion13_out1, Data_Type_Conversion12_out1, Data_Type_Conversion36_out1, Data_Type_Conversion35_out1, Data_Type_Conversion34_out1, Data_Type_Conversion26_out1, Data_Type_Conversion16_out1, Data_Type_Conversion15_out1, Data_Type_Conversion43_out1, Data_Type_Conversion14_out1, Data_Type_Conversion42_out1, Data_Type_Conversion41_out1, Data_Type_Conversion40_out1, Data_Type_Conversion39_out1, Data_Type_Conversion38_out1, Data_Type_Conversion37_out1, Data_Type_Conversion1_out1};



  assign Data_Type_Conversion44_out1 = {14'b0, y};



  assign Out1 = Data_Type_Conversion44_out1;

endmodule  // to_uint32_6
