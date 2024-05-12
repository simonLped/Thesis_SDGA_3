// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA3\hdlsrc\DUALportRAMinterface_v3\Chart_block2.v
// Created: 2024-05-04 07:38:50
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: Chart_block2
// Source Path: DUALportRAMinterface_v3/PL/Chart
// Hierarchy Level: 1
// Model version: 1.38
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module Chart_block2
          (clk,
           reset_x,
           enb,
           GA_done,
           GPIO,
           counter,
           counter_increment,
           counter_reset,
           write_enable);

  // Default encoded enumeration values for type state_type_is_Chart4
  parameter state_type_is_Chart4_IN_PL_read_data = 3'd0, state_type_is_Chart4_IN_PL_write_data_back = 3'd1, state_type_is_Chart4_IN_initial_wait_state = 3'd2, state_type_is_Chart4_IN_reset_state = 3'd3, state_type_is_Chart4_IN_wait_for_GA_done = 3'd4;

  input   clk;
  input   reset_x;
  input   enb;
  input   GA_done;
  input   GPIO;
  input   [15:0] counter;  // uint16
  output  counter_increment;
  output  counter_reset;
  output  write_enable;


  reg  counter_increment_1;
  reg  counter_reset_1;
  reg  write_enable_1;
  reg [2:0] is_Chart;  // uint8
  reg [2:0] is_Chart_next;  // enum type state_type_is_Chart4 (5 enums)


  always @(posedge clk)
    begin : Chart_process
      if (reset_x == 1'b0) begin
        is_Chart <= state_type_is_Chart4_IN_initial_wait_state;
      end
      else begin
        if (enb) begin
          is_Chart <= is_Chart_next;
        end
      end
    end

  always @(GA_done, GPIO, counter, is_Chart) begin
    is_Chart_next = is_Chart;
    case ( is_Chart)
      state_type_is_Chart4_IN_PL_read_data :
        begin
          counter_increment_1 = 1'b1;
          counter_reset_1 = 1'b0;
          write_enable_1 = 1'b0;
          if (counter == 16'b0011000000000010) begin
            is_Chart_next = state_type_is_Chart4_IN_wait_for_GA_done;
            counter_increment_1 = 1'b0;
            counter_reset_1 = 1'b1;
            write_enable_1 = 1'b0;
          end
        end
      state_type_is_Chart4_IN_PL_write_data_back :
        begin
          counter_increment_1 = 1'b1;
          counter_reset_1 = 1'b0;
          write_enable_1 = 1'b1;
          if (counter == 16'b0000000000001000) begin
            is_Chart_next = state_type_is_Chart4_IN_reset_state;
            counter_increment_1 = 1'b0;
            counter_reset_1 = 1'b1;
            write_enable_1 = 1'b0;
          end
        end
      state_type_is_Chart4_IN_initial_wait_state :
        begin
          counter_increment_1 = 1'b0;
          counter_reset_1 = 1'b1;
          write_enable_1 = 1'b0;
          if (GPIO) begin
            is_Chart_next = state_type_is_Chart4_IN_PL_read_data;
            counter_increment_1 = 1'b1;
            counter_reset_1 = 1'b0;
            write_enable_1 = 1'b0;
          end
        end
      state_type_is_Chart4_IN_reset_state :
        begin
          is_Chart_next = state_type_is_Chart4_IN_initial_wait_state;
          counter_increment_1 = 1'b0;
          counter_reset_1 = 1'b1;
          write_enable_1 = 1'b0;
        end
      default :
        begin
          //case IN_wait_for_GA_done:
          counter_increment_1 = 1'b0;
          counter_reset_1 = 1'b1;
          write_enable_1 = 1'b0;
          if (GA_done) begin
            is_Chart_next = state_type_is_Chart4_IN_PL_write_data_back;
            counter_increment_1 = 1'b1;
            counter_reset_1 = 1'b0;
            write_enable_1 = 1'b1;
          end
        end
    endcase
  end



  assign counter_increment = counter_increment_1;

  assign counter_reset = counter_reset_1;

  assign write_enable = write_enable_1;

endmodule  // Chart_block2

