// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\Subsystem1_block.v
// Created: 2024-05-04 07:38:49
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Subsystem1_block
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/GA_main/coefficent_array/individual2/Subsystem1
// Hierarchy Level: 5
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Subsystem1_block
          (clk,
           reset_x,
           enb,
           reg_in,
           enable,
           reg_out);


  input   clk;
  input   reset_x;
  input   enb;
  input   signed [32:0] reg_in;  // sfix33_En15
  input   enable;
  output  signed [32:0] reg_out;  // sfix33_En15


  wire switch_compare_1;
  reg signed [32:0] Delay_out1;  // sfix33_En15
  wire signed [32:0] Switch_out1;  // sfix33_En15


  assign switch_compare_1 = enable > 1'b0;



  assign Switch_out1 = (switch_compare_1 == 1'b0 ? Delay_out1 :
              reg_in);



  always @(posedge clk)
    begin : Delay_process
      if (reset_x == 1'b0) begin
        Delay_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay_out1 <= Switch_out1;
        end
      end
    end



  assign reg_out = Delay_out1;

endmodule  // Subsystem1_block

