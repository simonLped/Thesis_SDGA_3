// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\modimpl_ntwk_block3.v
// Created: 2024-05-04 07:38:48
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: modimpl_ntwk_block3
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/Subsystem/b3_random/modimpl_ntwk
// Hierarchy Level: 4
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module modimpl_ntwk_block3
          (clk,
           reset_x,
           enb,
           X,
           validIn,
           Y,
           validOut);


  input   clk;
  input   reset_x;
  input   enb;
  input   [10:0] X;  // ufix11_En11
  input   validIn;
  output  [52:0] Y;  // ufix53_En59
  output  validOut;


  reg [10:0] multiply_and_extract_fraction_xReg0;  // ufix11
  reg [10:0] multiply_and_extract_fraction_xReg1;  // ufix11
  reg [70:0] multiply_and_extract_fraction_invReg0;  // ufix71
  reg [74:0] multiply_and_extract_fraction_fracReg;  // ufix75
  reg [52:0] multiply_and_extract_fraction_outReg;  // ufix53
  wire [74:0] multiply_and_extract_fraction_fracReg_next;  // ufix75_En75
  wire [52:0] multiply_and_extract_fraction_outReg_next;  // ufix53_En59
  wire [127:0] multiply_and_extract_fraction_mul_temp;  // ufix128_En134
  wire [81:0] multiply_and_extract_fraction_mul_temp_1;  // ufix82_En75


  // cgireml component
  always @(posedge clk)
    begin : multiply_and_extract_fraction_process
      if (reset_x == 1'b0) begin
        multiply_and_extract_fraction_xReg0 <= 11'b00000000000;
        multiply_and_extract_fraction_xReg1 <= 11'b00000000000;
        multiply_and_extract_fraction_invReg0 <= 71'h000000000000000000;
        multiply_and_extract_fraction_fracReg <= 75'h0000000000000000000;
        multiply_and_extract_fraction_outReg <= 53'h00000000000000;
      end
      else begin
        if (enb) begin
          multiply_and_extract_fraction_fracReg <= multiply_and_extract_fraction_fracReg_next;
          multiply_and_extract_fraction_outReg <= multiply_and_extract_fraction_outReg_next;
          multiply_and_extract_fraction_xReg0 <= X;
          multiply_and_extract_fraction_xReg1 <= multiply_and_extract_fraction_xReg0;
          multiply_and_extract_fraction_invReg0 <= 71'h63FFFFFFFFFFFF6A01;
        end
      end
    end

  assign Y = multiply_and_extract_fraction_outReg;
  assign multiply_and_extract_fraction_mul_temp = multiply_and_extract_fraction_fracReg * 53'h147AE147AE147B;
  assign multiply_and_extract_fraction_outReg_next = multiply_and_extract_fraction_mul_temp[127:75];
  assign multiply_and_extract_fraction_mul_temp_1 = multiply_and_extract_fraction_xReg1 * multiply_and_extract_fraction_invReg0;
  assign multiply_and_extract_fraction_fracReg_next = multiply_and_extract_fraction_mul_temp_1[74:0];



  assign validOut = 1'b0;



endmodule  // modimpl_ntwk_block3

