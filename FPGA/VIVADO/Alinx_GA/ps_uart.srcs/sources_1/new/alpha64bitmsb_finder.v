// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA4\hdlsrc\DUALportRAMinterface_v3\alpha64bitmsb_finder.v
// Created: 2024-05-15 10:45:59
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: alpha64bitmsb_finder
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/accumulator_scorer/64bitmsb_finder
// Hierarchy Level: 3
// Model version: 1.52
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module alpha64bitmsb_finder
          (u_port,
           out1);


  input   signed [63:0] u_port;  // sfix64_En32
  output  signed [5:0] out1;  // sfix6


  wire signed [64:0] Abs_y;  // sfix65_En32
  wire signed [64:0] Abs_cast;  // sfix65_En32
  wire signed [63:0] Abs_out1;  // sfix64_En32
  wire signed [63:0] Bit_Shift33_out1;  // sfix64_En32
  wire Data_Type_Conversion20_out1;  // ufix1
  wire signed [63:0] Bit_Shift34_out1;  // sfix64_En32
  wire Data_Type_Conversion21_out1;  // ufix1
  wire signed [63:0] Bit_Shift35_out1;  // sfix64_En32
  wire Data_Type_Conversion22_out1;  // ufix1
  wire signed [63:0] Bit_Shift36_out1;  // sfix64_En32
  wire Data_Type_Conversion23_out1;  // ufix1
  wire signed [63:0] Bit_Shift37_out1;  // sfix64_En32
  wire Data_Type_Conversion24_out1;  // ufix1
  wire signed [63:0] Bit_Shift38_out1;  // sfix64_En32
  wire Data_Type_Conversion31_out1;  // ufix1
  wire signed [63:0] Bit_Shift39_out1;  // sfix64_En32
  wire Data_Type_Conversion32_out1;  // ufix1
  wire [4:0] alpha8bit_PE1_out1;  // ufix5
  wire alpha8bit_PE1_out2;
  wire signed [63:0] Bit_Shift18_out1;  // sfix64_En32
  wire Data_Type_Conversion12_out1;  // ufix1
  wire signed [63:0] Bit_Shift19_out1;  // sfix64_En32
  wire Data_Type_Conversion13_out1;  // ufix1
  wire signed [63:0] Bit_Shift20_out1;  // sfix64_En32
  wire Data_Type_Conversion14_out1;  // ufix1
  wire signed [63:0] Bit_Shift21_out1;  // sfix64_En32
  wire Data_Type_Conversion15_out1;  // ufix1
  wire signed [63:0] Bit_Shift22_out1;  // sfix64_En32
  wire Data_Type_Conversion16_out1;  // ufix1
  wire signed [63:0] Bit_Shift23_out1;  // sfix64_En32
  wire Data_Type_Conversion17_out1;  // ufix1
  wire signed [63:0] Bit_Shift30_out1;  // sfix64_En32
  wire Data_Type_Conversion18_out1;  // ufix1
  wire signed [63:0] Bit_Shift31_out1;  // sfix64_En32
  wire Data_Type_Conversion3_out1;  // ufix1
  wire [4:0] alpha8bit_PE2_out1;  // ufix5
  wire alpha8bit_PE2_out2;
  wire signed [63:0] Bit_Shift2_out1;  // sfix64_En32
  wire Data_Type_Conversion2_out1;  // ufix1
  wire signed [63:0] Bit_Shift3_out1;  // sfix64_En32
  wire Data_Type_Conversion25_out1;  // ufix1
  wire signed [63:0] Bit_Shift4_out1;  // sfix64_En32
  wire Data_Type_Conversion26_out1;  // ufix1
  wire signed [63:0] Bit_Shift5_out1;  // sfix64_En32
  wire Data_Type_Conversion27_out1;  // ufix1
  wire signed [63:0] Bit_Shift6_out1;  // sfix64_En32
  wire Data_Type_Conversion28_out1;  // ufix1
  wire signed [63:0] Bit_Shift7_out1;  // sfix64_En32
  wire Data_Type_Conversion29_out1;  // ufix1
  wire signed [63:0] Bit_Shift8_out1;  // sfix64_En32
  wire Data_Type_Conversion30_out1;  // ufix1
  wire signed [63:0] Bit_Shift9_out1;  // sfix64_En32
  wire Data_Type_Conversion1_out1;  // ufix1
  wire [4:0] alpha8bit_PE3_out1;  // ufix5
  wire alpha8bit_PE3_out2;
  wire signed [63:0] Bit_Shift10_out1;  // sfix64_En32
  wire Data_Type_Conversion5_out1;  // ufix1
  wire signed [63:0] Bit_Shift11_out1;  // sfix64_En32
  wire Data_Type_Conversion6_out1;  // ufix1
  wire signed [63:0] Bit_Shift12_out1;  // sfix64_En32
  wire Data_Type_Conversion7_out1;  // ufix1
  wire signed [63:0] Bit_Shift13_out1;  // sfix64_En32
  wire Data_Type_Conversion8_out1;  // ufix1
  wire signed [63:0] Bit_Shift14_out1;  // sfix64_En32
  wire Data_Type_Conversion9_out1;  // ufix1
  wire signed [63:0] Bit_Shift15_out1;  // sfix64_En32
  wire Data_Type_Conversion10_out1;  // ufix1
  wire signed [63:0] Bit_Shift16_out1;  // sfix64_En32
  wire Data_Type_Conversion11_out1;  // ufix1
  wire Data_Type_Conversion4_out1;  // ufix1
  wire [4:0] alpha8bit_PE4_out1;  // ufix5
  wire alpha8bit_PE4_out2;
  wire signed [63:0] Bit_Shift1_out1;  // sfix64_En32
  wire Data_Type_Conversion35_out1;  // ufix1
  wire signed [63:0] Bit_Shift24_out1;  // sfix64_En32
  wire Data_Type_Conversion36_out1;  // ufix1
  wire signed [63:0] Bit_Shift25_out1;  // sfix64_En32
  wire Data_Type_Conversion37_out1;  // ufix1
  wire signed [63:0] Bit_Shift26_out1;  // sfix64_En32
  wire Data_Type_Conversion38_out1;  // ufix1
  wire signed [63:0] Bit_Shift27_out1;  // sfix64_En32
  wire Data_Type_Conversion39_out1;  // ufix1
  wire signed [63:0] Bit_Shift28_out1;  // sfix64_En32
  wire Data_Type_Conversion19_out1;  // ufix1
  wire signed [63:0] Bit_Shift29_out1;  // sfix64_En32
  wire Data_Type_Conversion33_out1;  // ufix1
  wire signed [63:0] Bit_Shift32_out1;  // sfix64_En32
  wire Data_Type_Conversion34_out1;  // ufix1
  wire [4:0] alpha8bit_PE5_out1;  // ufix5
  wire alpha8bit_PE5_out2;
  wire signed [63:0] Bit_Shift40_out1;  // sfix64_En32
  wire Data_Type_Conversion43_out1;  // ufix1
  wire signed [63:0] Bit_Shift41_out1;  // sfix64_En32
  wire Data_Type_Conversion44_out1;  // ufix1
  wire signed [63:0] Bit_Shift42_out1;  // sfix64_En32
  wire Data_Type_Conversion45_out1;  // ufix1
  wire signed [63:0] Bit_Shift43_out1;  // sfix64_En32
  wire Data_Type_Conversion46_out1;  // ufix1
  wire signed [63:0] Bit_Shift44_out1;  // sfix64_En32
  wire Data_Type_Conversion47_out1;  // ufix1
  wire signed [63:0] Bit_Shift45_out1;  // sfix64_En32
  wire Data_Type_Conversion40_out1;  // ufix1
  wire signed [63:0] Bit_Shift46_out1;  // sfix64_En32
  wire Data_Type_Conversion41_out1;  // ufix1
  wire signed [63:0] Bit_Shift47_out1;  // sfix64_En32
  wire Data_Type_Conversion42_out1;  // ufix1
  wire [4:0] alpha8bit_PE6_out1;  // ufix5
  wire alpha8bit_PE6_out2;
  wire signed [63:0] Bit_Shift48_out1;  // sfix64_En32
  wire Data_Type_Conversion51_out1;  // ufix1
  wire signed [63:0] Bit_Shift49_out1;  // sfix64_En32
  wire Data_Type_Conversion52_out1;  // ufix1
  wire signed [63:0] Bit_Shift50_out1;  // sfix64_En32
  wire Data_Type_Conversion53_out1;  // ufix1
  wire signed [63:0] Bit_Shift51_out1;  // sfix64_En32
  wire Data_Type_Conversion54_out1;  // ufix1
  wire signed [63:0] Bit_Shift52_out1;  // sfix64_En32
  wire Data_Type_Conversion55_out1;  // ufix1
  wire signed [63:0] Bit_Shift53_out1;  // sfix64_En32
  wire Data_Type_Conversion48_out1;  // ufix1
  wire signed [63:0] Bit_Shift54_out1;  // sfix64_En32
  wire Data_Type_Conversion49_out1;  // ufix1
  wire signed [63:0] Bit_Shift55_out1;  // sfix64_En32
  wire Data_Type_Conversion50_out1;  // ufix1
  wire [4:0] alpha8bit_PE7_out1;  // ufix5
  wire alpha8bit_PE7_out2;
  wire signed [63:0] Bit_Shift56_out1;  // sfix64_En32
  wire Data_Type_Conversion59_out1;  // ufix1
  wire signed [63:0] Bit_Shift57_out1;  // sfix64_En32
  wire Data_Type_Conversion60_out1;  // ufix1
  wire signed [63:0] Bit_Shift58_out1;  // sfix64_En32
  wire Data_Type_Conversion61_out1;  // ufix1
  wire signed [63:0] Bit_Shift59_out1;  // sfix64_En32
  wire Data_Type_Conversion62_out1;  // ufix1
  wire signed [63:0] Bit_Shift60_out1;  // sfix64_En32
  wire Data_Type_Conversion63_out1;  // ufix1
  wire signed [63:0] Bit_Shift61_out1;  // sfix64_En32
  wire Data_Type_Conversion56_out1;  // ufix1
  wire signed [63:0] Bit_Shift62_out1;  // sfix64_En32
  wire Data_Type_Conversion57_out1;  // ufix1
  wire signed [63:0] Bit_Shift63_out1;  // sfix64_En32
  wire Data_Type_Conversion58_out1;  // ufix1
  wire [4:0] alpha8bit_PE8_out1;  // ufix5
  wire alpha8bit_PE8_out2;
  wire [4:0] alpha8bit_PE10_out1;  // ufix5
  wire alpha8bit_PE10_out2deadOutdeadOut;
  wire signed [5:0] Constant20_out1;  // sfix6
  wire signed [5:0] Constant21_out1;  // sfix6
  wire signed [5:0] Constant22_out1;  // sfix6
  wire signed [5:0] Constant23_out1;  // sfix6
  wire signed [5:0] Constant24_out1;  // sfix6
  wire signed [5:0] Constant25_out1;  // sfix6
  wire signed [5:0] Constant26_out1;  // sfix6
  wire signed [5:0] Constant27_out1;  // sfix6
  wire signed [5:0] Multiport_Switch2_out1;  // sfix6
  wire signed [5:0] Constant10_out1;  // sfix6
  wire signed [5:0] Constant11_out1;  // sfix6
  wire signed [5:0] Constant12_out1;  // sfix6
  wire signed [5:0] Constant13_out1;  // sfix6
  wire signed [5:0] Constant14_out1;  // sfix6
  wire signed [5:0] Constant15_out1;  // sfix6
  wire signed [5:0] Constant16_out1;  // sfix6
  wire signed [5:0] Constant17_out1;  // sfix6
  wire signed [5:0] Constant18_out1;  // sfix6
  wire signed [5:0] Multiport_Switch1_out1;  // sfix6
  wire signed [5:0] Constant1_out1;  // sfix6
  wire signed [5:0] Constant2_out1;  // sfix6
  wire signed [5:0] Constant3_out1;  // sfix6
  wire signed [5:0] Constant4_out1;  // sfix6
  wire signed [5:0] Constant5_out1;  // sfix6
  wire signed [5:0] Constant6_out1;  // sfix6
  wire signed [5:0] Constant7_out1;  // sfix6
  wire signed [5:0] Constant8_out1;  // sfix6
  wire signed [5:0] Constant9_out1;  // sfix6
  wire signed [5:0] Multiport_Switch_out1;  // sfix6
  wire signed [5:0] Constant19_out1;  // sfix6
  wire signed [5:0] Constant65_out1;  // sfix6
  wire signed [5:0] Constant66_out1;  // sfix6
  wire signed [5:0] Constant67_out1;  // sfix6
  wire signed [5:0] Constant68_out1;  // sfix6
  wire signed [5:0] Constant69_out1;  // sfix6
  wire signed [5:0] Constant70_out1;  // sfix6
  wire signed [5:0] Constant71_out1;  // sfix6
  wire signed [5:0] Constant72_out1;  // sfix6
  wire signed [5:0] Multiport_Switch8_out1;  // sfix6
  wire signed [5:0] Constant28_out1;  // sfix6
  wire signed [5:0] Constant29_out1;  // sfix6
  wire signed [5:0] Constant30_out1;  // sfix6
  wire signed [5:0] Constant31_out1;  // sfix6
  wire signed [5:0] Constant32_out1;  // sfix6
  wire signed [5:0] Constant33_out1;  // sfix6
  wire signed [5:0] Constant34_out1;  // sfix6
  wire signed [5:0] Constant35_out1;  // sfix6
  wire signed [5:0] Constant36_out1;  // sfix6
  wire signed [5:0] Multiport_Switch4_out1;  // sfix6
  wire signed [5:0] Constant37_out1;  // sfix6
  wire signed [5:0] Constant38_out1;  // sfix6
  wire signed [5:0] Constant39_out1;  // sfix6
  wire signed [5:0] Constant40_out1;  // sfix6
  wire signed [5:0] Constant41_out1;  // sfix6
  wire signed [5:0] Constant42_out1;  // sfix6
  wire signed [5:0] Constant43_out1;  // sfix6
  wire signed [5:0] Constant44_out1;  // sfix6
  wire signed [5:0] Constant45_out1;  // sfix6
  wire signed [5:0] Multiport_Switch5_out1;  // sfix6
  wire signed [5:0] Constant46_out1;  // sfix6
  wire signed [5:0] Constant47_out1;  // sfix6
  wire signed [5:0] Constant48_out1;  // sfix6
  wire signed [5:0] Constant49_out1;  // sfix6
  wire signed [5:0] Constant50_out1;  // sfix6
  wire signed [5:0] Constant51_out1;  // sfix6
  wire signed [5:0] Constant52_out1;  // sfix6
  wire signed [5:0] Constant53_out1;  // sfix6
  wire signed [5:0] Constant54_out1;  // sfix6
  wire signed [5:0] Multiport_Switch6_out1;  // sfix6
  wire signed [5:0] Constant55_out1;  // sfix6
  wire signed [5:0] Constant56_out1;  // sfix6
  wire signed [5:0] Constant57_out1;  // sfix6
  wire signed [5:0] Constant58_out1;  // sfix6
  wire signed [5:0] Constant59_out1;  // sfix6
  wire signed [5:0] Constant60_out1;  // sfix6
  wire signed [5:0] Constant61_out1;  // sfix6
  wire signed [5:0] Constant62_out1;  // sfix6
  wire signed [5:0] Constant63_out1;  // sfix6
  wire signed [5:0] Multiport_Switch7_out1;  // sfix6
  wire signed [5:0] Constant64_out1;  // sfix6
  wire signed [5:0] Multiport_Switch3_out1;  // sfix6


  assign Abs_cast = {u_port[63], u_port};
  assign Abs_y = (u_port < 64'sh0000000000000000 ?  - (Abs_cast) :
              {u_port[63], u_port});
  assign Abs_out1 = Abs_y[63:0];



  assign Bit_Shift33_out1 = Abs_out1 >> 8'd30;



  assign Data_Type_Conversion20_out1 = Bit_Shift33_out1[32];



  assign Bit_Shift34_out1 = Abs_out1 >> 8'd29;



  assign Data_Type_Conversion21_out1 = Bit_Shift34_out1[32];



  assign Bit_Shift35_out1 = Abs_out1 >> 8'd28;



  assign Data_Type_Conversion22_out1 = Bit_Shift35_out1[32];



  assign Bit_Shift36_out1 = Abs_out1 >> 8'd27;



  assign Data_Type_Conversion23_out1 = Bit_Shift36_out1[32];



  assign Bit_Shift37_out1 = Abs_out1 >> 8'd26;



  assign Data_Type_Conversion24_out1 = Bit_Shift37_out1[32];



  assign Bit_Shift38_out1 = Abs_out1 >> 8'd25;



  assign Data_Type_Conversion31_out1 = Bit_Shift38_out1[32];



  assign Bit_Shift39_out1 = Abs_out1 >> 8'd24;



  assign Data_Type_Conversion32_out1 = Bit_Shift39_out1[32];



  alpha8bit_PE1 u_8bit_PE1 (.D6(Data_Type_Conversion20_out1),  // ufix1
                            .D5(Data_Type_Conversion21_out1),  // ufix1
                            .D4(Data_Type_Conversion22_out1),  // ufix1
                            .D3(Data_Type_Conversion23_out1),  // ufix1
                            .D2(Data_Type_Conversion24_out1),  // ufix1
                            .D1(Data_Type_Conversion31_out1),  // ufix1
                            .D0(Data_Type_Conversion32_out1),  // ufix1
                            .data2(alpha8bit_PE1_out1),  // ufix5
                            .valid(alpha8bit_PE1_out2)
                            );

  assign Bit_Shift18_out1 = Abs_out1 >> 8'd23;



  assign Data_Type_Conversion12_out1 = Bit_Shift18_out1[32];



  assign Bit_Shift19_out1 = Abs_out1 >> 8'd22;



  assign Data_Type_Conversion13_out1 = Bit_Shift19_out1[32];



  assign Bit_Shift20_out1 = Abs_out1 >> 8'd21;



  assign Data_Type_Conversion14_out1 = Bit_Shift20_out1[32];



  assign Bit_Shift21_out1 = Abs_out1 >> 8'd20;



  assign Data_Type_Conversion15_out1 = Bit_Shift21_out1[32];



  assign Bit_Shift22_out1 = Abs_out1 >> 8'd19;



  assign Data_Type_Conversion16_out1 = Bit_Shift22_out1[32];



  assign Bit_Shift23_out1 = Abs_out1 >> 8'd18;



  assign Data_Type_Conversion17_out1 = Bit_Shift23_out1[32];



  assign Bit_Shift30_out1 = Abs_out1 >> 8'd17;



  assign Data_Type_Conversion18_out1 = Bit_Shift30_out1[32];



  assign Bit_Shift31_out1 = Abs_out1 >> 8'd16;



  assign Data_Type_Conversion3_out1 = Bit_Shift31_out1[32];



  alpha8bit_PE2 u_8bit_PE2 (.D7(Data_Type_Conversion12_out1),  // ufix1
                            .D6(Data_Type_Conversion13_out1),  // ufix1
                            .D5(Data_Type_Conversion14_out1),  // ufix1
                            .D4(Data_Type_Conversion15_out1),  // ufix1
                            .D3(Data_Type_Conversion16_out1),  // ufix1
                            .D2(Data_Type_Conversion17_out1),  // ufix1
                            .D1(Data_Type_Conversion18_out1),  // ufix1
                            .D0(Data_Type_Conversion3_out1),  // ufix1
                            .data2(alpha8bit_PE2_out1),  // ufix5
                            .valid(alpha8bit_PE2_out2)
                            );

  assign Bit_Shift2_out1 = Abs_out1 >> 8'd15;



  assign Data_Type_Conversion2_out1 = Bit_Shift2_out1[32];



  assign Bit_Shift3_out1 = Abs_out1 >> 8'd14;



  assign Data_Type_Conversion25_out1 = Bit_Shift3_out1[32];



  assign Bit_Shift4_out1 = Abs_out1 >> 8'd13;



  assign Data_Type_Conversion26_out1 = Bit_Shift4_out1[32];



  assign Bit_Shift5_out1 = Abs_out1 >> 8'd12;



  assign Data_Type_Conversion27_out1 = Bit_Shift5_out1[32];



  assign Bit_Shift6_out1 = Abs_out1 >> 8'd11;



  assign Data_Type_Conversion28_out1 = Bit_Shift6_out1[32];



  assign Bit_Shift7_out1 = Abs_out1 >> 8'd10;



  assign Data_Type_Conversion29_out1 = Bit_Shift7_out1[32];



  assign Bit_Shift8_out1 = Abs_out1 >> 8'd9;



  assign Data_Type_Conversion30_out1 = Bit_Shift8_out1[32];



  assign Bit_Shift9_out1 = Abs_out1 >> 8'd8;



  assign Data_Type_Conversion1_out1 = Bit_Shift9_out1[32];



  alpha8bit_PE3 u_8bit_PE3 (.D7(Data_Type_Conversion2_out1),  // ufix1
                            .D6(Data_Type_Conversion25_out1),  // ufix1
                            .D5(Data_Type_Conversion26_out1),  // ufix1
                            .D4(Data_Type_Conversion27_out1),  // ufix1
                            .D3(Data_Type_Conversion28_out1),  // ufix1
                            .D2(Data_Type_Conversion29_out1),  // ufix1
                            .D1(Data_Type_Conversion30_out1),  // ufix1
                            .D0(Data_Type_Conversion1_out1),  // ufix1
                            .data2(alpha8bit_PE3_out1),  // ufix5
                            .valid(alpha8bit_PE3_out2)
                            );

  assign Bit_Shift10_out1 = Abs_out1 >> 8'd7;



  assign Data_Type_Conversion5_out1 = Bit_Shift10_out1[32];



  assign Bit_Shift11_out1 = Abs_out1 >> 8'd6;



  assign Data_Type_Conversion6_out1 = Bit_Shift11_out1[32];



  assign Bit_Shift12_out1 = Abs_out1 >> 8'd5;



  assign Data_Type_Conversion7_out1 = Bit_Shift12_out1[32];



  assign Bit_Shift13_out1 = Abs_out1 >> 8'd4;



  assign Data_Type_Conversion8_out1 = Bit_Shift13_out1[32];



  assign Bit_Shift14_out1 = Abs_out1 >> 8'd3;



  assign Data_Type_Conversion9_out1 = Bit_Shift14_out1[32];



  assign Bit_Shift15_out1 = Abs_out1 >> 8'd2;



  assign Data_Type_Conversion10_out1 = Bit_Shift15_out1[32];



  assign Bit_Shift16_out1 = Abs_out1 >> 8'd1;



  assign Data_Type_Conversion11_out1 = Bit_Shift16_out1[32];



  assign Data_Type_Conversion4_out1 = Abs_out1[32];



  alpha8bit_PE4 u_8bit_PE4 (.D7(Data_Type_Conversion5_out1),  // ufix1
                            .D6(Data_Type_Conversion6_out1),  // ufix1
                            .D5(Data_Type_Conversion7_out1),  // ufix1
                            .D4(Data_Type_Conversion8_out1),  // ufix1
                            .D3(Data_Type_Conversion9_out1),  // ufix1
                            .D2(Data_Type_Conversion10_out1),  // ufix1
                            .D1(Data_Type_Conversion11_out1),  // ufix1
                            .D0(Data_Type_Conversion4_out1),  // ufix1
                            .data2(alpha8bit_PE4_out1),  // ufix5
                            .valid(alpha8bit_PE4_out2)
                            );

  assign Bit_Shift1_out1 = Abs_out1 <<< 8'd1;



  assign Data_Type_Conversion35_out1 = Bit_Shift1_out1[32];



  assign Bit_Shift24_out1 = Abs_out1 <<< 8'd2;



  assign Data_Type_Conversion36_out1 = Bit_Shift24_out1[32];



  assign Bit_Shift25_out1 = Abs_out1 <<< 8'd3;



  assign Data_Type_Conversion37_out1 = Bit_Shift25_out1[32];



  assign Bit_Shift26_out1 = Abs_out1 <<< 8'd4;



  assign Data_Type_Conversion38_out1 = Bit_Shift26_out1[32];



  assign Bit_Shift27_out1 = Abs_out1 <<< 8'd5;



  assign Data_Type_Conversion39_out1 = Bit_Shift27_out1[32];



  assign Bit_Shift28_out1 = Abs_out1 <<< 8'd6;



  assign Data_Type_Conversion19_out1 = Bit_Shift28_out1[32];



  assign Bit_Shift29_out1 = Abs_out1 <<< 8'd7;



  assign Data_Type_Conversion33_out1 = Bit_Shift29_out1[32];



  assign Bit_Shift32_out1 = Abs_out1 <<< 8'd8;



  assign Data_Type_Conversion34_out1 = Bit_Shift32_out1[32];



  alpha8bit_PE5 u_8bit_PE5 (.D7(Data_Type_Conversion35_out1),  // ufix1
                            .D6(Data_Type_Conversion36_out1),  // ufix1
                            .D5(Data_Type_Conversion37_out1),  // ufix1
                            .D4(Data_Type_Conversion38_out1),  // ufix1
                            .D3(Data_Type_Conversion39_out1),  // ufix1
                            .D2(Data_Type_Conversion19_out1),  // ufix1
                            .D1(Data_Type_Conversion33_out1),  // ufix1
                            .D0(Data_Type_Conversion34_out1),  // ufix1
                            .data2(alpha8bit_PE5_out1),  // ufix5
                            .valid(alpha8bit_PE5_out2)
                            );

  assign Bit_Shift40_out1 = Abs_out1 <<< 8'd9;



  assign Data_Type_Conversion43_out1 = Bit_Shift40_out1[32];



  assign Bit_Shift41_out1 = Abs_out1 <<< 8'd10;



  assign Data_Type_Conversion44_out1 = Bit_Shift41_out1[32];



  assign Bit_Shift42_out1 = Abs_out1 <<< 8'd11;



  assign Data_Type_Conversion45_out1 = Bit_Shift42_out1[32];



  assign Bit_Shift43_out1 = Abs_out1 <<< 8'd12;



  assign Data_Type_Conversion46_out1 = Bit_Shift43_out1[32];



  assign Bit_Shift44_out1 = Abs_out1 <<< 8'd13;



  assign Data_Type_Conversion47_out1 = Bit_Shift44_out1[32];



  assign Bit_Shift45_out1 = Abs_out1 <<< 8'd14;



  assign Data_Type_Conversion40_out1 = Bit_Shift45_out1[32];



  assign Bit_Shift46_out1 = Abs_out1 <<< 8'd15;



  assign Data_Type_Conversion41_out1 = Bit_Shift46_out1[32];



  assign Bit_Shift47_out1 = Abs_out1 <<< 8'd16;



  assign Data_Type_Conversion42_out1 = Bit_Shift47_out1[32];



  alpha8bit_PE6 u_8bit_PE6 (.D7(Data_Type_Conversion43_out1),  // ufix1
                            .D6(Data_Type_Conversion44_out1),  // ufix1
                            .D5(Data_Type_Conversion45_out1),  // ufix1
                            .D4(Data_Type_Conversion46_out1),  // ufix1
                            .D3(Data_Type_Conversion47_out1),  // ufix1
                            .D2(Data_Type_Conversion40_out1),  // ufix1
                            .D1(Data_Type_Conversion41_out1),  // ufix1
                            .D0(Data_Type_Conversion42_out1),  // ufix1
                            .data2(alpha8bit_PE6_out1),  // ufix5
                            .valid(alpha8bit_PE6_out2)
                            );

  assign Bit_Shift48_out1 = Abs_out1 <<< 8'd17;



  assign Data_Type_Conversion51_out1 = Bit_Shift48_out1[32];



  assign Bit_Shift49_out1 = Abs_out1 <<< 8'd18;



  assign Data_Type_Conversion52_out1 = Bit_Shift49_out1[32];



  assign Bit_Shift50_out1 = Abs_out1 <<< 8'd19;



  assign Data_Type_Conversion53_out1 = Bit_Shift50_out1[32];



  assign Bit_Shift51_out1 = Abs_out1 <<< 8'd20;



  assign Data_Type_Conversion54_out1 = Bit_Shift51_out1[32];



  assign Bit_Shift52_out1 = Abs_out1 <<< 8'd21;



  assign Data_Type_Conversion55_out1 = Bit_Shift52_out1[32];



  assign Bit_Shift53_out1 = Abs_out1 <<< 8'd22;



  assign Data_Type_Conversion48_out1 = Bit_Shift53_out1[32];



  assign Bit_Shift54_out1 = Abs_out1 <<< 8'd23;



  assign Data_Type_Conversion49_out1 = Bit_Shift54_out1[32];



  assign Bit_Shift55_out1 = Abs_out1 <<< 8'd24;



  assign Data_Type_Conversion50_out1 = Bit_Shift55_out1[32];



  alpha8bit_PE7 u_8bit_PE7 (.D7(Data_Type_Conversion51_out1),  // ufix1
                            .D6(Data_Type_Conversion52_out1),  // ufix1
                            .D5(Data_Type_Conversion53_out1),  // ufix1
                            .D4(Data_Type_Conversion54_out1),  // ufix1
                            .D3(Data_Type_Conversion55_out1),  // ufix1
                            .D2(Data_Type_Conversion48_out1),  // ufix1
                            .D1(Data_Type_Conversion49_out1),  // ufix1
                            .D0(Data_Type_Conversion50_out1),  // ufix1
                            .data2(alpha8bit_PE7_out1),  // ufix5
                            .valid(alpha8bit_PE7_out2)
                            );

  assign Bit_Shift56_out1 = Abs_out1 <<< 8'd25;



  assign Data_Type_Conversion59_out1 = Bit_Shift56_out1[32];



  assign Bit_Shift57_out1 = Abs_out1 <<< 8'd26;



  assign Data_Type_Conversion60_out1 = Bit_Shift57_out1[32];



  assign Bit_Shift58_out1 = Abs_out1 <<< 8'd27;



  assign Data_Type_Conversion61_out1 = Bit_Shift58_out1[32];



  assign Bit_Shift59_out1 = Abs_out1 <<< 8'd28;



  assign Data_Type_Conversion62_out1 = Bit_Shift59_out1[32];



  assign Bit_Shift60_out1 = Abs_out1 <<< 8'd29;



  assign Data_Type_Conversion63_out1 = Bit_Shift60_out1[32];



  assign Bit_Shift61_out1 = Abs_out1 <<< 8'd30;



  assign Data_Type_Conversion56_out1 = Bit_Shift61_out1[32];



  assign Bit_Shift62_out1 = Abs_out1 <<< 8'd31;



  assign Data_Type_Conversion57_out1 = Bit_Shift62_out1[32];



  assign Bit_Shift63_out1 = Abs_out1 <<< 8'd32;



  assign Data_Type_Conversion58_out1 = Bit_Shift63_out1[32];



  alpha8bit_PE8 u_8bit_PE8 (.D7(Data_Type_Conversion59_out1),  // ufix1
                            .D6(Data_Type_Conversion60_out1),  // ufix1
                            .D5(Data_Type_Conversion61_out1),  // ufix1
                            .D4(Data_Type_Conversion62_out1),  // ufix1
                            .D3(Data_Type_Conversion63_out1),  // ufix1
                            .D2(Data_Type_Conversion56_out1),  // ufix1
                            .D1(Data_Type_Conversion57_out1),  // ufix1
                            .D0(Data_Type_Conversion58_out1),  // ufix1
                            .data2(alpha8bit_PE8_out1),  // ufix5
                            .valid(alpha8bit_PE8_out2)
                            );

  alpha8bit_PE10 u_8bit_PE10 (.D7(alpha8bit_PE1_out2),
                              .D6(alpha8bit_PE2_out2),
                              .D5(alpha8bit_PE3_out2),
                              .D4(alpha8bit_PE4_out2),
                              .D3(alpha8bit_PE5_out2),
                              .D2(alpha8bit_PE6_out2),
                              .D1(alpha8bit_PE7_out2),
                              .D0(alpha8bit_PE8_out2),
                              .data2(alpha8bit_PE10_out1),  // ufix5
                              .valid(alpha8bit_PE10_out2deadOutdeadOut)
                              );

  assign Constant20_out1 = 6'sb011110;



  assign Constant21_out1 = 6'sb011101;



  assign Constant22_out1 = 6'sb011100;



  assign Constant23_out1 = 6'sb011011;



  assign Constant24_out1 = 6'sb011010;



  assign Constant25_out1 = 6'sb011001;



  assign Constant26_out1 = 6'sb011000;



  assign Constant27_out1 = 6'sb000000;



  assign Multiport_Switch2_out1 = (alpha8bit_PE1_out1 == 5'b00111 ? Constant20_out1 :
              (alpha8bit_PE1_out1 == 5'b00110 ? Constant21_out1 :
              (alpha8bit_PE1_out1 == 5'b00101 ? Constant22_out1 :
              (alpha8bit_PE1_out1 == 5'b00100 ? Constant23_out1 :
              (alpha8bit_PE1_out1 == 5'b00011 ? Constant24_out1 :
              (alpha8bit_PE1_out1 == 5'b00010 ? Constant25_out1 :
              (alpha8bit_PE1_out1 == 5'b00001 ? Constant26_out1 :
              Constant27_out1)))))));



  assign Constant10_out1 = 6'sb010111;



  assign Constant11_out1 = 6'sb010110;



  assign Constant12_out1 = 6'sb010101;



  assign Constant13_out1 = 6'sb010100;



  assign Constant14_out1 = 6'sb010011;



  assign Constant15_out1 = 6'sb010010;



  assign Constant16_out1 = 6'sb010001;



  assign Constant17_out1 = 6'sb010000;



  assign Constant18_out1 = 6'sb000000;



  assign Multiport_Switch1_out1 = (alpha8bit_PE2_out1 == 5'b01000 ? Constant10_out1 :
              (alpha8bit_PE2_out1 == 5'b00111 ? Constant11_out1 :
              (alpha8bit_PE2_out1 == 5'b00110 ? Constant12_out1 :
              (alpha8bit_PE2_out1 == 5'b00101 ? Constant13_out1 :
              (alpha8bit_PE2_out1 == 5'b00100 ? Constant14_out1 :
              (alpha8bit_PE2_out1 == 5'b00011 ? Constant15_out1 :
              (alpha8bit_PE2_out1 == 5'b00010 ? Constant16_out1 :
              (alpha8bit_PE2_out1 == 5'b00001 ? Constant17_out1 :
              Constant18_out1))))))));



  assign Constant1_out1 = 6'sb001111;



  assign Constant2_out1 = 6'sb001110;



  assign Constant3_out1 = 6'sb001101;



  assign Constant4_out1 = 6'sb001100;



  assign Constant5_out1 = 6'sb001011;



  assign Constant6_out1 = 6'sb001010;



  assign Constant7_out1 = 6'sb001001;



  assign Constant8_out1 = 6'sb001000;



  assign Constant9_out1 = 6'sb000000;



  assign Multiport_Switch_out1 = (alpha8bit_PE3_out1 == 5'b01000 ? Constant1_out1 :
              (alpha8bit_PE3_out1 == 5'b00111 ? Constant2_out1 :
              (alpha8bit_PE3_out1 == 5'b00110 ? Constant3_out1 :
              (alpha8bit_PE3_out1 == 5'b00101 ? Constant4_out1 :
              (alpha8bit_PE3_out1 == 5'b00100 ? Constant5_out1 :
              (alpha8bit_PE3_out1 == 5'b00011 ? Constant6_out1 :
              (alpha8bit_PE3_out1 == 5'b00010 ? Constant7_out1 :
              (alpha8bit_PE3_out1 == 5'b00001 ? Constant8_out1 :
              Constant9_out1))))))));



  assign Constant19_out1 = 6'sb000111;



  assign Constant65_out1 = 6'sb000110;



  assign Constant66_out1 = 6'sb000101;



  assign Constant67_out1 = 6'sb000100;



  assign Constant68_out1 = 6'sb000011;



  assign Constant69_out1 = 6'sb000010;



  assign Constant70_out1 = 6'sb000001;



  assign Constant71_out1 = 6'sb000000;



  assign Constant72_out1 = 6'sb000000;



  assign Multiport_Switch8_out1 = (alpha8bit_PE4_out1 == 5'b01000 ? Constant19_out1 :
              (alpha8bit_PE4_out1 == 5'b00111 ? Constant65_out1 :
              (alpha8bit_PE4_out1 == 5'b00110 ? Constant66_out1 :
              (alpha8bit_PE4_out1 == 5'b00101 ? Constant67_out1 :
              (alpha8bit_PE4_out1 == 5'b00100 ? Constant68_out1 :
              (alpha8bit_PE4_out1 == 5'b00011 ? Constant69_out1 :
              (alpha8bit_PE4_out1 == 5'b00010 ? Constant70_out1 :
              (alpha8bit_PE4_out1 == 5'b00001 ? Constant71_out1 :
              Constant72_out1))))))));



  assign Constant28_out1 = 6'sb111111;



  assign Constant29_out1 = 6'sb111110;



  assign Constant30_out1 = 6'sb111101;



  assign Constant31_out1 = 6'sb111100;



  assign Constant32_out1 = 6'sb111011;



  assign Constant33_out1 = 6'sb111010;



  assign Constant34_out1 = 6'sb111001;



  assign Constant35_out1 = 6'sb111000;



  assign Constant36_out1 = 6'sb000000;



  assign Multiport_Switch4_out1 = (alpha8bit_PE5_out1 == 5'b01000 ? Constant28_out1 :
              (alpha8bit_PE5_out1 == 5'b00111 ? Constant29_out1 :
              (alpha8bit_PE5_out1 == 5'b00110 ? Constant30_out1 :
              (alpha8bit_PE5_out1 == 5'b00101 ? Constant31_out1 :
              (alpha8bit_PE5_out1 == 5'b00100 ? Constant32_out1 :
              (alpha8bit_PE5_out1 == 5'b00011 ? Constant33_out1 :
              (alpha8bit_PE5_out1 == 5'b00010 ? Constant34_out1 :
              (alpha8bit_PE5_out1 == 5'b00001 ? Constant35_out1 :
              Constant36_out1))))))));



  assign Constant37_out1 = 6'sb110111;



  assign Constant38_out1 = 6'sb110110;



  assign Constant39_out1 = 6'sb110101;



  assign Constant40_out1 = 6'sb110100;



  assign Constant41_out1 = 6'sb110011;



  assign Constant42_out1 = 6'sb110010;



  assign Constant43_out1 = 6'sb110001;



  assign Constant44_out1 = 6'sb110000;



  assign Constant45_out1 = 6'sb000000;



  assign Multiport_Switch5_out1 = (alpha8bit_PE6_out1 == 5'b01000 ? Constant37_out1 :
              (alpha8bit_PE6_out1 == 5'b00111 ? Constant38_out1 :
              (alpha8bit_PE6_out1 == 5'b00110 ? Constant39_out1 :
              (alpha8bit_PE6_out1 == 5'b00101 ? Constant40_out1 :
              (alpha8bit_PE6_out1 == 5'b00100 ? Constant41_out1 :
              (alpha8bit_PE6_out1 == 5'b00011 ? Constant42_out1 :
              (alpha8bit_PE6_out1 == 5'b00010 ? Constant43_out1 :
              (alpha8bit_PE6_out1 == 5'b00001 ? Constant44_out1 :
              Constant45_out1))))))));



  assign Constant46_out1 = 6'sb101111;



  assign Constant47_out1 = 6'sb101110;



  assign Constant48_out1 = 6'sb101101;



  assign Constant49_out1 = 6'sb101100;



  assign Constant50_out1 = 6'sb101011;



  assign Constant51_out1 = 6'sb101010;



  assign Constant52_out1 = 6'sb101001;



  assign Constant53_out1 = 6'sb101000;



  assign Constant54_out1 = 6'sb000000;



  assign Multiport_Switch6_out1 = (alpha8bit_PE7_out1 == 5'b01000 ? Constant46_out1 :
              (alpha8bit_PE7_out1 == 5'b00111 ? Constant47_out1 :
              (alpha8bit_PE7_out1 == 5'b00110 ? Constant48_out1 :
              (alpha8bit_PE7_out1 == 5'b00101 ? Constant49_out1 :
              (alpha8bit_PE7_out1 == 5'b00100 ? Constant50_out1 :
              (alpha8bit_PE7_out1 == 5'b00011 ? Constant51_out1 :
              (alpha8bit_PE7_out1 == 5'b00010 ? Constant52_out1 :
              (alpha8bit_PE7_out1 == 5'b00001 ? Constant53_out1 :
              Constant54_out1))))))));



  assign Constant55_out1 = 6'sb100111;



  assign Constant56_out1 = 6'sb100110;



  assign Constant57_out1 = 6'sb100101;



  assign Constant58_out1 = 6'sb100100;



  assign Constant59_out1 = 6'sb100011;



  assign Constant60_out1 = 6'sb100010;



  assign Constant61_out1 = 6'sb100001;



  assign Constant62_out1 = 6'sb100000;



  assign Constant63_out1 = 6'sb000000;



  assign Multiport_Switch7_out1 = (alpha8bit_PE8_out1 == 5'b01000 ? Constant55_out1 :
              (alpha8bit_PE8_out1 == 5'b00111 ? Constant56_out1 :
              (alpha8bit_PE8_out1 == 5'b00110 ? Constant57_out1 :
              (alpha8bit_PE8_out1 == 5'b00101 ? Constant58_out1 :
              (alpha8bit_PE8_out1 == 5'b00100 ? Constant59_out1 :
              (alpha8bit_PE8_out1 == 5'b00011 ? Constant60_out1 :
              (alpha8bit_PE8_out1 == 5'b00010 ? Constant61_out1 :
              (alpha8bit_PE8_out1 == 5'b00001 ? Constant62_out1 :
              Constant63_out1))))))));



  assign Constant64_out1 = 6'sb000000;



  assign Multiport_Switch3_out1 = (alpha8bit_PE10_out1 == 5'b01000 ? Multiport_Switch2_out1 :
              (alpha8bit_PE10_out1 == 5'b00111 ? Multiport_Switch1_out1 :
              (alpha8bit_PE10_out1 == 5'b00110 ? Multiport_Switch_out1 :
              (alpha8bit_PE10_out1 == 5'b00101 ? Multiport_Switch8_out1 :
              (alpha8bit_PE10_out1 == 5'b00100 ? Multiport_Switch4_out1 :
              (alpha8bit_PE10_out1 == 5'b00011 ? Multiport_Switch5_out1 :
              (alpha8bit_PE10_out1 == 5'b00010 ? Multiport_Switch6_out1 :
              (alpha8bit_PE10_out1 == 5'b00001 ? Multiport_Switch7_out1 :
              Constant64_out1))))))));



  assign out1 = Multiport_Switch3_out1;

endmodule  // alpha64bitmsb_finder
