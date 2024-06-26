// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA4\hdlsrc\DUALportRAMinterface_v3\individual3.v
// Created: 2024-05-15 10:45:59
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: individual3
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual3
// Hierarchy Level: 4
// Model version: 1.52
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module individual3
          (clk,
           reset_x,
           enb,
           reg_in,
           reg_in1,
           reg_in2,
           reg_in3,
           reg_in4,
           reg_in5,
           reg_in6,
           enable,
           score,
           a2,
           a3,
           a4,
           b2,
           b3,
           b4);


  input   clk;
  input   reset_x;
  input   enb;
  input   signed [32:0] reg_in;  // sfix33_En15
  input   signed [32:0] reg_in1;  // sfix33_En15
  input   signed [32:0] reg_in2;  // sfix33_En15
  input   signed [32:0] reg_in3;  // sfix33_En15
  input   signed [32:0] reg_in4;  // sfix33_En15
  input   signed [32:0] reg_in5;  // sfix33_En15
  input   signed [32:0] reg_in6;  // sfix33_En15
  input   enable;
  output  signed [32:0] score;  // sfix33_En15
  output  signed [32:0] a2;  // sfix33_En15
  output  signed [32:0] a3;  // sfix33_En15
  output  signed [32:0] a4;  // sfix33_En15
  output  signed [32:0] b2;  // sfix33_En15
  output  signed [32:0] b3;  // sfix33_En15
  output  signed [32:0] b4;  // sfix33_En15


  wire signed [32:0] Subsystem_out1;  // sfix33_En15
  wire signed [32:0] Subsystem1_out1;  // sfix33_En15
  wire signed [32:0] Subsystem2_out1;  // sfix33_En15
  wire signed [32:0] Subsystem3_out1;  // sfix33_En15
  wire signed [32:0] Subsystem4_out1;  // sfix33_En15
  wire signed [32:0] Subsystem5_out1;  // sfix33_En15
  wire signed [32:0] Subsystem6_out1;  // sfix33_En15


  Subsystem_block u_Subsystem (.clk(clk),
                               .reset_x(reset_x),
                               .enb(enb),
                               .reg_in(reg_in),  // sfix33_En15
                               .enable(enable),
                               .reg_out(Subsystem_out1)  // sfix33_En15
                               );

  assign score = Subsystem_out1;

  Subsystem1 u_Subsystem1 (.clk(clk),
                           .reset_x(reset_x),
                           .enb(enb),
                           .reg_in(reg_in1),  // sfix33_En15
                           .enable(enable),
                           .reg_out(Subsystem1_out1)  // sfix33_En15
                           );

  assign a2 = Subsystem1_out1;

  Subsystem2 u_Subsystem2 (.clk(clk),
                           .reset_x(reset_x),
                           .enb(enb),
                           .reg_in(reg_in2),  // sfix33_En15
                           .enable(enable),
                           .reg_out(Subsystem2_out1)  // sfix33_En15
                           );

  assign a3 = Subsystem2_out1;

  Subsystem3 u_Subsystem3 (.clk(clk),
                           .reset_x(reset_x),
                           .enb(enb),
                           .reg_in(reg_in3),  // sfix33_En15
                           .enable(enable),
                           .reg_out(Subsystem3_out1)  // sfix33_En15
                           );

  assign a4 = Subsystem3_out1;

  Subsystem4 u_Subsystem4 (.clk(clk),
                           .reset_x(reset_x),
                           .enb(enb),
                           .reg_in(reg_in4),  // sfix33_En15
                           .enable(enable),
                           .reg_out(Subsystem4_out1)  // sfix33_En15
                           );

  assign b2 = Subsystem4_out1;

  Subsystem5 u_Subsystem5 (.clk(clk),
                           .reset_x(reset_x),
                           .enb(enb),
                           .reg_in(reg_in5),  // sfix33_En15
                           .enable(enable),
                           .reg_out(Subsystem5_out1)  // sfix33_En15
                           );

  assign b3 = Subsystem5_out1;

  Subsystem6 u_Subsystem6 (.clk(clk),
                           .reset_x(reset_x),
                           .enb(enb),
                           .reg_in(reg_in6),  // sfix33_En15
                           .enable(enable),
                           .reg_out(Subsystem6_out1)  // sfix33_En15
                           );

  assign b4 = Subsystem6_out1;

endmodule  // individual3

