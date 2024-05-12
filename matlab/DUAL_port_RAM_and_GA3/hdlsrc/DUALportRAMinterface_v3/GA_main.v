// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\GA_main.v
// Created: 2024-05-04 07:38:49
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: GA_main
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/GA_main
// Hierarchy Level: 2
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module GA_main
          (clk,
           reset_x,
           enb,
           start_ga,
           score_result,
           random_gene,
           random_method,
           b2rnd,
           b3rnd,
           b4rnd,
           a2rnd,
           a3rnd,
           a4rnd,
           tb_random_sample,
           FIFO_full,
           score_done,
           elite_individual_0,
           elite_individual_1,
           elite_individual_2,
           elite_individual_3,
           elite_individual_4,
           elite_individual_5,
           elite_individual_6,
           ga_done,
           individual_to_d2_0,
           individual_to_d2_1,
           individual_to_d2_2,
           individual_to_d2_3,
           individual_to_d2_4,
           individual_to_d2_5,
           individual_to_d2_6,
           FIFO_out_en,
           load_fifo);


  input   clk;
  input   reset_x;
  input   enb;
  input   start_ga;
  input   signed [32:0] score_result;  // sfix33_En15
  input   [2:0] random_gene;  // ufix3
  input   [2:0] random_method;  // ufix3
  input   signed [17:0] b2rnd;  // sfix18_En15
  input   signed [17:0] b3rnd;  // sfix18_En15
  input   signed [17:0] b4rnd;  // sfix18_En15
  input   signed [17:0] a2rnd;  // sfix18_En15
  input   signed [17:0] a3rnd;  // sfix18_En15
  input   signed [17:0] a4rnd;  // sfix18_En15
  input   [3:0] tb_random_sample;  // ufix4
  input   FIFO_full;
  input   score_done;
  output  signed [32:0] elite_individual_0;  // sfix33_En15
  output  signed [32:0] elite_individual_1;  // sfix33_En15
  output  signed [32:0] elite_individual_2;  // sfix33_En15
  output  signed [32:0] elite_individual_3;  // sfix33_En15
  output  signed [32:0] elite_individual_4;  // sfix33_En15
  output  signed [32:0] elite_individual_5;  // sfix33_En15
  output  signed [32:0] elite_individual_6;  // sfix33_En15
  output  ga_done;
  output  signed [32:0] individual_to_d2_0;  // sfix33_En15
  output  signed [32:0] individual_to_d2_1;  // sfix33_En15
  output  signed [32:0] individual_to_d2_2;  // sfix33_En15
  output  signed [32:0] individual_to_d2_3;  // sfix33_En15
  output  signed [32:0] individual_to_d2_4;  // sfix33_En15
  output  signed [32:0] individual_to_d2_5;  // sfix33_En15
  output  signed [32:0] individual_to_d2_6;  // sfix33_En15
  output  FIFO_out_en;
  output  load_fifo;


  wire signed [32:0] Data_Type_Conversion3_out1;  // sfix33_En15
  wire signed [32:0] Data_Type_Conversion4_out1;  // sfix33_En15
  wire signed [32:0] Data_Type_Conversion5_out1;  // sfix33_En15
  wire signed [32:0] Data_Type_Conversion6_out1;  // sfix33_En15
  wire signed [32:0] Data_Type_Conversion7_out1;  // sfix33_En15
  wire signed [32:0] Data_Type_Conversion1_out1;  // sfix33_En15
  wire Constant6_out1;
  wire slave_output;
  wire slave_output_1;
  wire switch_compare_1;
  wire [3:0] index_counter_out1;  // ufix4
  wire [3:0] Switch_out1;  // ufix4
  wire slave_input;
  wire slave_input_1;
  wire switch_compare_1_1;
  wire [3:0] Switch1_out1;  // ufix4
  wire signed [32:0] coefficent_array_out1_6;  // sfix33_En15
  reg signed [32:0] Delay5_out1;  // sfix33_En15
  wire [1:0] a4_method;  // ufix2
  wire [1:0] a4_method_1;  // ufix2
  wire signed [32:0] Multiport_Switch7_out1;  // sfix33_En15
  wire signed [32:0] coefficent_array_out1_5;  // sfix33_En15
  reg signed [32:0] Delay4_out1;  // sfix33_En15
  wire [1:0] a3_method;  // ufix2
  wire [1:0] a3_method_1;  // ufix2
  wire signed [32:0] Multiport_Switch6_out1;  // sfix33_En15
  wire signed [32:0] coefficent_array_out1_4;  // sfix33_En15
  reg signed [32:0] Delay3_out1;  // sfix33_En15
  wire [1:0] a2_method;  // ufix2
  wire [1:0] a2_method_1;  // ufix2
  wire signed [32:0] Multiport_Switch5_out1;  // sfix33_En15
  wire signed [32:0] coefficent_array_out1_3;  // sfix33_En15
  reg signed [32:0] Delay2_out1;  // sfix33_En15
  wire [1:0] b4_method;  // ufix2
  wire [1:0] b4_method_1;  // ufix2
  wire signed [32:0] Multiport_Switch4_out1;  // sfix33_En15
  wire signed [32:0] coefficent_array_out1_2;  // sfix33_En15
  reg signed [32:0] Delay1_out1;  // sfix33_En15
  wire [1:0] b3_method;  // ufix2
  wire [1:0] b3_method_1;  // ufix2
  wire signed [32:0] Multiport_Switch3_out1;  // sfix33_En15
  wire signed [32:0] coefficent_array_out1_1;  // sfix33_En15
  reg signed [32:0] Delay_out1;  // sfix33_En15
  wire [1:0] b2_method;  // ufix2
  wire [1:0] b2_method_1;  // ufix2
  wire signed [32:0] Multiport_Switch1_out1;  // sfix33_En15
  wire [1:0] master_output;  // ufix2
  wire [1:0] master_output_1;  // ufix2
  wire [3:0] Multiport_Switch2_out1;  // ufix4
  wire master_sort;
  wire master_sort_1;
  reg  Delay7_out1;
  wire generation_reset;
  wire generation_reset_1;
  wire generation_increment;
  wire generation_increment_1;
  wire [15:0] generation_counter_out1;  // uint16
  wire index_reset;
  wire index_reset_1;
  wire index_increment;
  wire index_increment_1;
  wire sort_done;
  wire GA_done_1;
  wire master_input;
  wire FIFO_out_en_1;
  wire master_input_1;
  wire switch_compare_1_2;
  wire [3:0] Switch2_out1;  // ufix4
  wire signed [32:0] coefficent_array1_out1_1;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out1_2;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out1_3;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out1_4;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out1_5;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out1_6;  // sfix33_En15
  wire signed [32:0] coefficent_array_out1_0;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out1_0;  // sfix33_En15
  wire sort_donedeadOutdeadOut;
  wire signed [32:0] coefficent_array1_out3_0;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out3_1;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out3_2;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out3_3;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out3_4;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out3_5;  // sfix33_En15
  wire signed [32:0] coefficent_array1_out3_6;  // sfix33_En15
  reg  Delay6_out1;
  wire Logical_Operator_out1;
  wire Logical_Operator1_out1;


  assign Data_Type_Conversion3_out1 = {{15{b2rnd[17]}}, b2rnd};



  assign Data_Type_Conversion4_out1 = {{15{b3rnd[17]}}, b3rnd};



  assign Data_Type_Conversion5_out1 = {{15{b4rnd[17]}}, b4rnd};



  assign Data_Type_Conversion6_out1 = {{15{a2rnd[17]}}, a2rnd};



  assign Data_Type_Conversion7_out1 = {{15{a3rnd[17]}}, a3rnd};



  assign Data_Type_Conversion1_out1 = {{15{a4rnd[17]}}, a4rnd};



  assign Constant6_out1 = 1'b0;



  assign slave_output_1 = slave_output;

  assign switch_compare_1 = slave_output_1 > 1'b0;



  assign Switch_out1 = (switch_compare_1 == 1'b0 ? 4'b0000 :
              index_counter_out1);



  assign slave_input_1 = slave_input;

  assign switch_compare_1_1 = slave_input_1 > 1'b0;



  assign Switch1_out1 = (switch_compare_1_1 == 1'b0 ? 4'b0000 :
              index_counter_out1);



  always @(posedge clk)
    begin : Delay5_process
      if (reset_x == 1'b0) begin
        Delay5_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay5_out1 <= coefficent_array_out1_6;
        end
      end
    end



  assign a4_method_1 = a4_method;

  assign Multiport_Switch7_out1 = (a4_method_1 == 2'b01 ? Data_Type_Conversion1_out1 :
              (a4_method_1 == 2'b10 ? Delay5_out1 :
              coefficent_array_out1_6));



  always @(posedge clk)
    begin : Delay4_process
      if (reset_x == 1'b0) begin
        Delay4_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay4_out1 <= coefficent_array_out1_5;
        end
      end
    end



  assign a3_method_1 = a3_method;

  assign Multiport_Switch6_out1 = (a3_method_1 == 2'b01 ? Data_Type_Conversion7_out1 :
              (a3_method_1 == 2'b10 ? Delay4_out1 :
              coefficent_array_out1_5));



  always @(posedge clk)
    begin : Delay3_process
      if (reset_x == 1'b0) begin
        Delay3_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay3_out1 <= coefficent_array_out1_4;
        end
      end
    end



  assign a2_method_1 = a2_method;

  assign Multiport_Switch5_out1 = (a2_method_1 == 2'b01 ? Data_Type_Conversion6_out1 :
              (a2_method_1 == 2'b10 ? Delay3_out1 :
              coefficent_array_out1_4));



  always @(posedge clk)
    begin : Delay2_process
      if (reset_x == 1'b0) begin
        Delay2_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay2_out1 <= coefficent_array_out1_3;
        end
      end
    end



  assign b4_method_1 = b4_method;

  assign Multiport_Switch4_out1 = (b4_method_1 == 2'b01 ? Data_Type_Conversion5_out1 :
              (b4_method_1 == 2'b10 ? Delay2_out1 :
              coefficent_array_out1_3));



  always @(posedge clk)
    begin : Delay1_process
      if (reset_x == 1'b0) begin
        Delay1_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay1_out1 <= coefficent_array_out1_2;
        end
      end
    end



  assign b3_method_1 = b3_method;

  assign Multiport_Switch3_out1 = (b3_method_1 == 2'b01 ? Data_Type_Conversion4_out1 :
              (b3_method_1 == 2'b10 ? Delay1_out1 :
              coefficent_array_out1_2));



  always @(posedge clk)
    begin : Delay_process
      if (reset_x == 1'b0) begin
        Delay_out1 <= 33'sh000000000;
      end
      else begin
        if (enb) begin
          Delay_out1 <= coefficent_array_out1_1;
        end
      end
    end



  assign b2_method_1 = b2_method;

  assign Multiport_Switch1_out1 = (b2_method_1 == 2'b01 ? Data_Type_Conversion3_out1 :
              (b2_method_1 == 2'b10 ? Delay_out1 :
              coefficent_array_out1_1));



  assign master_output_1 = master_output;

  assign Multiport_Switch2_out1 = (master_output_1 == 2'b01 ? index_counter_out1 :
              (master_output_1 == 2'b10 ? tb_random_sample :
              4'b0000));



  assign master_sort_1 = master_sort;

  always @(posedge clk)
    begin : Delay7_process
      if (reset_x == 1'b0) begin
        Delay7_out1 <= 1'b0;
      end
      else begin
        if (enb) begin
          Delay7_out1 <= master_sort_1;
        end
      end
    end



  assign generation_reset_1 = generation_reset;

  assign generation_increment_1 = generation_increment;

  generation_counter u_generation_counter (.clk(clk),
                                           .reset_x(reset_x),
                                           .enb(enb),
                                           .In1(generation_increment_1),
                                           .In2(generation_reset_1),
                                           .Out1(generation_counter_out1)  // uint16
                                           );

  assign index_reset_1 = index_reset;

  assign index_increment_1 = index_increment;

  index_counter u_index_counter (.clk(clk),
                                 .reset_x(reset_x),
                                 .enb(enb),
                                 .In1(index_increment_1),
                                 .In2(index_reset_1),
                                 .index_counter_1(index_counter_out1)  // ufix4
                                 );

  Chart u_Chart (.clk(clk),
                 .reset_x(reset_x),
                 .enb(enb),
                 .sort_done(sort_done),
                 .start_GA(start_ga),
                 .score_done(score_done),
                 .FIFO_full(FIFO_full),
                 .random_gene(random_gene),  // ufix3
                 .selected_method(random_method),  // ufix3
                 .sample_index(index_counter_out1),  // ufix4
                 .generation_counter(generation_counter_out1),  // uint16
                 .GA_done(GA_done_1),
                 .index_reset(index_reset),
                 .index_increment(index_increment),
                 .a2_method(a2_method),  // ufix2
                 .a3_method(a3_method),  // ufix2
                 .a4_method(a4_method),  // ufix2
                 .b4_method(b4_method),  // ufix2
                 .b2_method(b2_method),  // ufix2
                 .b3_method(b3_method),  // ufix2
                 .slave_input(slave_input),
                 .slave_output(slave_output),
                 .master_input(master_input),
                 .generation_increment(generation_increment),
                 .generation_reset(generation_reset),
                 .master_output(master_output),  // ufix2
                 .master_sort(master_sort),
                 .FIFO_out_en(FIFO_out_en_1),
                 .load_fifo(load_fifo)
                 );

  assign master_input_1 = master_input;

  assign switch_compare_1_2 = master_input_1 > 1'b0;



  assign Switch2_out1 = (switch_compare_1_2 == 1'b0 ? 4'b0000 :
              index_counter_out1);



  coefficent_array u_coefficent_array (.clk(clk),
                                       .reset_x(reset_x),
                                       .enb(enb),
                                       .individual_in_0(score_result),  // sfix33_En15
                                       .individual_in_1(coefficent_array1_out1_1),  // sfix33_En15
                                       .individual_in_2(coefficent_array1_out1_2),  // sfix33_En15
                                       .individual_in_3(coefficent_array1_out1_3),  // sfix33_En15
                                       .individual_in_4(coefficent_array1_out1_4),  // sfix33_En15
                                       .individual_in_5(coefficent_array1_out1_5),  // sfix33_En15
                                       .individual_in_6(coefficent_array1_out1_6),  // sfix33_En15
                                       .chose_input(Switch2_out1),  // ufix4
                                       .start_sorting(Delay7_out1),
                                       .chose_output(Multiport_Switch2_out1),  // ufix4
                                       .individual_out_0(coefficent_array_out1_0),  // sfix33_En15
                                       .individual_out_1(coefficent_array_out1_1),  // sfix33_En15
                                       .individual_out_2(coefficent_array_out1_2),  // sfix33_En15
                                       .individual_out_3(coefficent_array_out1_3),  // sfix33_En15
                                       .individual_out_4(coefficent_array_out1_4),  // sfix33_En15
                                       .individual_out_5(coefficent_array_out1_5),  // sfix33_En15
                                       .individual_out_6(coefficent_array_out1_6),  // sfix33_En15
                                       .sort_done(sort_done)
                                       );

  coefficent_array1 u_coefficent_array1 (.clk(clk),
                                         .reset_x(reset_x),
                                         .enb(enb),
                                         .individual_in_0(coefficent_array_out1_0),  // sfix33_En15
                                         .individual_in_1(Multiport_Switch1_out1),  // sfix33_En15
                                         .individual_in_2(Multiport_Switch3_out1),  // sfix33_En15
                                         .individual_in_3(Multiport_Switch4_out1),  // sfix33_En15
                                         .individual_in_4(Multiport_Switch5_out1),  // sfix33_En15
                                         .individual_in_5(Multiport_Switch6_out1),  // sfix33_En15
                                         .individual_in_6(Multiport_Switch7_out1),  // sfix33_En15
                                         .chose_input(Switch1_out1),  // ufix4
                                         .start_sorting(Constant6_out1),
                                         .chose_output(Switch_out1),  // ufix4
                                         .individual_out_0(coefficent_array1_out1_0),  // sfix33_En15
                                         .individual_out_1(coefficent_array1_out1_1),  // sfix33_En15
                                         .individual_out_2(coefficent_array1_out1_2),  // sfix33_En15
                                         .individual_out_3(coefficent_array1_out1_3),  // sfix33_En15
                                         .individual_out_4(coefficent_array1_out1_4),  // sfix33_En15
                                         .individual_out_5(coefficent_array1_out1_5),  // sfix33_En15
                                         .individual_out_6(coefficent_array1_out1_6),  // sfix33_En15
                                         .sort_done(sort_donedeadOutdeadOut),
                                         .elite_individual_0(coefficent_array1_out3_0),  // sfix33_En15
                                         .elite_individual_1(coefficent_array1_out3_1),  // sfix33_En15
                                         .elite_individual_2(coefficent_array1_out3_2),  // sfix33_En15
                                         .elite_individual_3(coefficent_array1_out3_3),  // sfix33_En15
                                         .elite_individual_4(coefficent_array1_out3_4),  // sfix33_En15
                                         .elite_individual_5(coefficent_array1_out3_5),  // sfix33_En15
                                         .elite_individual_6(coefficent_array1_out3_6)  // sfix33_En15
                                         );

  assign elite_individual_0 = coefficent_array1_out3_0;

  assign elite_individual_1 = coefficent_array1_out3_1;

  assign elite_individual_2 = coefficent_array1_out3_2;

  assign elite_individual_3 = coefficent_array1_out3_3;

  assign elite_individual_4 = coefficent_array1_out3_4;

  assign elite_individual_5 = coefficent_array1_out3_5;

  assign elite_individual_6 = coefficent_array1_out3_6;

  assign ga_done = GA_done_1;

  assign individual_to_d2_0 = coefficent_array1_out1_0;

  assign individual_to_d2_1 = coefficent_array1_out1_1;

  assign individual_to_d2_2 = coefficent_array1_out1_2;

  assign individual_to_d2_3 = coefficent_array1_out1_3;

  assign individual_to_d2_4 = coefficent_array1_out1_4;

  assign individual_to_d2_5 = coefficent_array1_out1_5;

  assign individual_to_d2_6 = coefficent_array1_out1_6;

  always @(posedge clk)
    begin : Delay6_process
      if (reset_x == 1'b0) begin
        Delay6_out1 <= 1'b0;
      end
      else begin
        if (enb) begin
          Delay6_out1 <= FIFO_out_en_1;
        end
      end
    end



  assign Logical_Operator_out1 = Delay6_out1 & FIFO_out_en_1;



  assign Logical_Operator1_out1 = Logical_Operator_out1 ^ FIFO_out_en_1;



  assign FIFO_out_en = Logical_Operator1_out1;

endmodule  // GA_main

