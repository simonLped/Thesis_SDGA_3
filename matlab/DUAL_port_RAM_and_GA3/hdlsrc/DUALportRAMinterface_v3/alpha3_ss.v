// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\alpha3_ss.v
// Created: 2024-05-04 07:38:48
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: alpha3_ss
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/Subsystem/16bLFSR/3_ss
// Hierarchy Level: 4
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module alpha3_ss
          (clk,
           reset_x,
           enb,
           reg_in,
           reg_out);


  input   clk;
  input   reset_x;
  input   enb;
  input   reg_in;
  output  reg_out;


  reg  Delay_out1;


  always @(posedge clk)
    begin : Delay_process
      if (reset_x == 1'b0) begin
        Delay_out1 <= 1'b0;
      end
      else begin
        if (enb) begin
          Delay_out1 <= reg_in;
        end
      end
    end



  assign reg_out = Delay_out1;

endmodule  // alpha3_ss

