// -------------------------------------------------------------
// 
// File Name: lead_comp_HF\hdlsrc\untitled\scaling_and_lead_comp_1M_Ts.v
// Created: 2024-05-21 11:17:58
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// 
// -- -------------------------------------------------------------
// -- Rate and Clocking Details
// -- -------------------------------------------------------------
// Model base rate: 0.2
// Target subsystem base rate: 0.2
// 
// 
// Clock Enable  Sample Time
// -- -------------------------------------------------------------
// ce_out        0.2
// -- -------------------------------------------------------------
// 
// 
// Output Signal                 Clock Enable  Sample Time
// -- -------------------------------------------------------------
// Out1                          ce_out        0.2
// -- -------------------------------------------------------------
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: scaling_and_lead_comp_1M_Ts
// Source Path: untitled/scaling_and_lead_comp_1M_Ts
// Hierarchy Level: 0
// Model version: 1.0
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module scaling_and_lead_comp_1M_Ts
          (clk,
           reset,
           clk_enable,
           In1,
           ce_out,
           Out1);


  input   clk;
  input   reset;
  input   clk_enable;
  input   signed [13:0] In1;  // sfix14_En12
  output  ce_out;
  output  signed [13:0] Out1;  // sfix14_En12


  wire enb;
  wire signed [27:0] counter_ADC_gain1_mul_temp;  // sfix28_En34
  wire signed [13:0] counter_ADC_gain1_out1;  // sfix14_En12
  wire signed [63:0] s_input_acc_cast;  // sfix64_En32
  wire signed [13:0] s_state_cast;  // sfix14_En12
  wire signed [77:0] nume_gain_b0_mul_temp;  // sfix78_En44
  wire signed [63:0] s_nume_gain_b0;  // sfix64_En32
  reg signed [13:0] s_state_out1_1;  // sfix14_En12
  wire signed [77:0] nume_gain1_mul_temp;  // sfix78_En44
  wire signed [63:0] s_nume_gain1;  // sfix64_En32
  wire signed [64:0] s_nume_acc1_add_cast;  // sfix65_En32
  wire signed [64:0] s_nume_acc1_add_cast_1;  // sfix65_En32
  wire signed [64:0] s_nume_acc1_add_temp;  // sfix65_En32
  wire signed [63:0] s_nume_acc_out1;  // sfix64_En32
  wire signed [13:0] s_output_cast;  // sfix14_En12


  assign counter_ADC_gain1_mul_temp = 14'sb01010000000000 * In1;
  assign counter_ADC_gain1_out1 = {{8{counter_ADC_gain1_mul_temp[27]}}, counter_ADC_gain1_mul_temp[27:22]};



  assign s_input_acc_cast = {{30{counter_ADC_gain1_out1[13]}}, {counter_ADC_gain1_out1, 20'b00000000000000000000}};



  assign s_state_cast = ((s_input_acc_cast[63] == 1'b0) && (s_input_acc_cast[62:33] != 30'b000000000000000000000000000000) ? 14'sb01111111111111 :
              ((s_input_acc_cast[63] == 1'b1) && (s_input_acc_cast[62:33] != 30'b111111111111111111111111111111) ? 14'sb10000000000000 :
              $signed(s_input_acc_cast[33:20])));



  assign enb = clk_enable;

  assign nume_gain_b0_mul_temp = 64'sh0000032000000000 * s_state_cast;
  assign s_nume_gain_b0 = ((nume_gain_b0_mul_temp[77] == 1'b0) && (nume_gain_b0_mul_temp[76:75] != 2'b00) ? 64'sh7FFFFFFFFFFFFFFF :
              ((nume_gain_b0_mul_temp[77] == 1'b1) && (nume_gain_b0_mul_temp[76:75] != 2'b11) ? 64'sh8000000000000000 :
              $signed(nume_gain_b0_mul_temp[75:12])));



  always @(posedge clk or negedge reset)
    begin : s_state_out1_process
      if (reset == 1'b0) begin
        s_state_out1_1 <= 14'sb00000000000000;
      end
      else begin
        if (enb) begin
          s_state_out1_1 <= s_state_cast;
        end
      end
    end



  assign nume_gain1_mul_temp = 64'shFFFFFCE800000000 * s_state_out1_1;
  assign s_nume_gain1 = ((nume_gain1_mul_temp[77] == 1'b0) && (nume_gain1_mul_temp[76:75] != 2'b00) ? 64'sh7FFFFFFFFFFFFFFF :
              ((nume_gain1_mul_temp[77] == 1'b1) && (nume_gain1_mul_temp[76:75] != 2'b11) ? 64'sh8000000000000000 :
              $signed(nume_gain1_mul_temp[75:12])));



  assign s_nume_acc1_add_cast = {s_nume_gain_b0[63], s_nume_gain_b0};
  assign s_nume_acc1_add_cast_1 = {s_nume_gain1[63], s_nume_gain1};
  assign s_nume_acc1_add_temp = s_nume_acc1_add_cast + s_nume_acc1_add_cast_1;
  assign s_nume_acc_out1 = ((s_nume_acc1_add_temp[64] == 1'b0) && (s_nume_acc1_add_temp[63] != 1'b0) ? 64'sh7FFFFFFFFFFFFFFF :
              ((s_nume_acc1_add_temp[64] == 1'b1) && (s_nume_acc1_add_temp[63] != 1'b1) ? 64'sh8000000000000000 :
              $signed(s_nume_acc1_add_temp[63:0])));



  assign s_output_cast = ((s_nume_acc_out1[63] == 1'b0) && (s_nume_acc_out1[62:33] != 30'b000000000000000000000000000000) ? 14'sb01111111111111 :
              ((s_nume_acc_out1[63] == 1'b1) && (s_nume_acc_out1[62:33] != 30'b111111111111111111111111111111) ? 14'sb10000000000000 :
              $signed(s_nume_acc_out1[33:20])));



  assign Out1 = s_output_cast;

  assign ce_out = clk_enable;

endmodule  // scaling_and_lead_comp_1M_Ts

