// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\alpha8bit_PE8.v
// Created: 2024-05-04 07:38:48
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: alpha8bit_PE8
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer/64bitmsb_finder/8bit_PE8
// Hierarchy Level: 4
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module alpha8bit_PE8
          (D7,
           D6,
           D5,
           D4,
           D3,
           D2,
           D1,
           D0,
           data2,
           valid);


  input   D7;  // ufix1
  input   D6;  // ufix1
  input   D5;  // ufix1
  input   D4;  // ufix1
  input   D3;  // ufix1
  input   D2;  // ufix1
  input   D1;  // ufix1
  input   D0;  // ufix1
  output  [4:0] data2;  // ufix5
  output  valid;


  wire Logical_Operator_out1;
  wire Logical_Operator10_out1;
  wire Logical_Operator1_out1;
  wire Logical_Operator11_out1;
  wire Logical_Operator3_out1;
  wire Logical_Operator12_out1;
  wire Logical_Operator2_out1;
  wire Logical_Operator13_out1;
  wire Logical_Operator17_out1;
  wire Logical_Operator4_out1;
  wire Logical_Operator7_out1;
  wire Logical_Operator14_out1;
  wire Logical_Operator5_out1;
  wire Logical_Operator8_out1;
  wire Logical_Operator15_out1;
  wire Logical_Operator18_out1;
  wire Logical_Operator6_out1;
  wire Logical_Operator9_out1;
  wire Logical_Operator16_out1;
  wire Logical_Operator19_out1;
  wire Logical_Operator21_out1;
  wire Logical_Operator20_out1;
  wire Logical_Operator22_out1;
  wire Logical_Operator23_out1;
  wire switch_compare_1;
  wire [3:0] Switch_out1;  // ufix4
  wire [2:0] y;  // ufix3
  wire [4:0] Add_out1;  // ufix5


  assign Logical_Operator_out1 =  ~ D7;



  assign Logical_Operator10_out1 =  ~ Logical_Operator_out1;



  assign Logical_Operator1_out1 =  ~ (Logical_Operator_out1 & D6);



  assign Logical_Operator11_out1 =  ~ Logical_Operator1_out1;



  assign Logical_Operator3_out1 =  ~ (D5 & (Logical_Operator1_out1 & Logical_Operator_out1));



  assign Logical_Operator12_out1 =  ~ Logical_Operator3_out1;



  assign Logical_Operator2_out1 =  ~ (D4 & (Logical_Operator_out1 & (Logical_Operator3_out1 & Logical_Operator1_out1)));



  assign Logical_Operator13_out1 =  ~ Logical_Operator2_out1;



  assign Logical_Operator17_out1 = Logical_Operator13_out1 | (Logical_Operator12_out1 | (Logical_Operator10_out1 | Logical_Operator11_out1));



  assign Logical_Operator4_out1 = Logical_Operator_out1 & (Logical_Operator3_out1 & Logical_Operator1_out1);



  assign Logical_Operator7_out1 =  ~ (D3 & (Logical_Operator4_out1 & Logical_Operator2_out1));



  assign Logical_Operator14_out1 =  ~ Logical_Operator7_out1;



  assign Logical_Operator5_out1 = Logical_Operator_out1 & (Logical_Operator3_out1 & Logical_Operator1_out1);



  assign Logical_Operator8_out1 =  ~ (D2 & (Logical_Operator7_out1 & (Logical_Operator5_out1 & Logical_Operator2_out1)));



  assign Logical_Operator15_out1 =  ~ Logical_Operator8_out1;



  assign Logical_Operator18_out1 = Logical_Operator15_out1 | (Logical_Operator14_out1 | (Logical_Operator10_out1 | Logical_Operator11_out1));



  assign Logical_Operator6_out1 = Logical_Operator2_out1 & (Logical_Operator_out1 & (Logical_Operator3_out1 & Logical_Operator1_out1));



  assign Logical_Operator9_out1 =  ~ (D1 & (Logical_Operator8_out1 & (Logical_Operator6_out1 & Logical_Operator7_out1)));



  assign Logical_Operator16_out1 =  ~ Logical_Operator9_out1;



  assign Logical_Operator19_out1 = Logical_Operator14_out1 | (Logical_Operator16_out1 | (Logical_Operator10_out1 | Logical_Operator12_out1));



  assign Logical_Operator21_out1 =  ~ (Logical_Operator19_out1 & (Logical_Operator17_out1 & Logical_Operator18_out1));



  assign Logical_Operator20_out1 = Logical_Operator19_out1 | (Logical_Operator18_out1 | (Logical_Operator17_out1 | D0));



  assign Logical_Operator22_out1 =  ~ Logical_Operator20_out1;



  assign Logical_Operator23_out1 = Logical_Operator21_out1 & Logical_Operator22_out1;



  assign switch_compare_1 = Logical_Operator23_out1 > 1'b0;



  assign Switch_out1 = (switch_compare_1 == 1'b0 ? 4'b0001 :
              4'b0000);



  assign y = {Logical_Operator17_out1, Logical_Operator18_out1, Logical_Operator19_out1};



  assign Add_out1 = ({1'b0, Switch_out1}) + ({2'b0, y});



  assign data2 = Add_out1;

  assign valid = Logical_Operator20_out1;

endmodule  // alpha8bit_PE8

