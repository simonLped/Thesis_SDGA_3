// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\modimpl_ntwk_block1.v
// Created: 2024-05-04 07:38:48
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: modimpl_ntwk_block1
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/Subsystem/a4_random/modimpl_ntwk
// Hierarchy Level: 4
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module modimpl_ntwk_block1
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
  output  [50:0] Y;  // ufix51_En57
  output  validOut;


  reg [10:0] multiply_and_extract_fraction_xReg0;  // ufix11
  reg [10:0] multiply_and_extract_fraction_xReg1;  // ufix11
  reg [68:0] multiply_and_extract_fraction_invReg0;  // ufix69
  reg [72:0] multiply_and_extract_fraction_fracReg;  // ufix73
  reg [50:0] multiply_and_extract_fraction_outReg;  // ufix51
  wire [72:0] multiply_and_extract_fraction_fracReg_next;  // ufix73_En73
  wire [50:0] multiply_and_extract_fraction_outReg_next;  // ufix51_En57
  wire [123:0] multiply_and_extract_fraction_mul_temp;  // ufix124_En130
  wire [79:0] multiply_and_extract_fraction_mul_temp_1;  // ufix80_En73


  // cgireml component
  always @(posedge clk)
    begin : multiply_and_extract_fraction_process
      if (reset_x == 1'b0) begin
        multiply_and_extract_fraction_xReg0 <= 11'b00000000000;
        multiply_and_extract_fraction_xReg1 <= 11'b00000000000;
        multiply_and_extract_fraction_invReg0 <= 69'h000000000000000000;
        multiply_and_extract_fraction_fracReg <= 73'h0000000000000000000;
        multiply_and_extract_fraction_outReg <= 51'h0000000000000;
      end
      else begin
        if (enb) begin
          multiply_and_extract_fraction_fracReg <= multiply_and_extract_fraction_fracReg_next;
          multiply_and_extract_fraction_outReg <= multiply_and_extract_fraction_outReg_next;
          multiply_and_extract_fraction_xReg0 <= X;
          multiply_and_extract_fraction_xReg1 <= multiply_and_extract_fraction_xReg0;
          multiply_and_extract_fraction_invReg0 <= 69'h1F3FFFFFFFFFFFD121;
        end
      end
    end

  assign Y = multiply_and_extract_fraction_outReg;
  assign multiply_and_extract_fraction_mul_temp = multiply_and_extract_fraction_fracReg * 51'h4189374BC6A7F;
  assign multiply_and_extract_fraction_outReg_next = multiply_and_extract_fraction_mul_temp[123:73];
  assign multiply_and_extract_fraction_mul_temp_1 = multiply_and_extract_fraction_xReg1 * multiply_and_extract_fraction_invReg0;
  assign multiply_and_extract_fraction_fracReg_next = multiply_and_extract_fraction_mul_temp_1[72:0];



  assign validOut = 1'b0;



endmodule  // modimpl_ntwk_block1

