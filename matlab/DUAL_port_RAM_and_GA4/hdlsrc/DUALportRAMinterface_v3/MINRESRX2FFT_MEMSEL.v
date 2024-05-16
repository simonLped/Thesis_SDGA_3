// -------------------------------------------------------------
// 
// File Name: DUAL_port_RAM_and_GA4\hdlsrc\DUALportRAMinterface_v3\MINRESRX2FFT_MEMSEL.v
// Created: 2024-05-15 10:45:59
// 
// Generated by MATLAB 24.1, HDL Coder 24.1, and Simulink 24.1
// 
// -------------------------------------------------------------


// -------------------------------------------------------------
// 
// Module: MINRESRX2FFT_MEMSEL
// Source Path: DUALportRAMinterface_v3/PL/integration_block1/FFT/MINRESRX2FFT_MEMSEL
// Hierarchy Level: 3
// Model version: 1.52
// 
// -------------------------------------------------------------

`timescale 1 ns / 1 ns

module MINRESRX2FFT_MEMSEL
          (clk,
           reset_x,
           enb,
           btfOut1_re,
           btfOut1_im,
           btfOut2_re,
           btfOut2_im,
           btfOut_vld,
           stage,
           initIC,
           syncReset,
           stgOut1_re,
           stgOut1_im,
           stgOut2_re,
           stgOut2_im,
           stgOut_vld);


  input   clk;
  input   reset_x;
  input   enb;
  input   signed [27:0] btfOut1_re;  // sfix28_En14
  input   signed [27:0] btfOut1_im;  // sfix28_En14
  input   signed [27:0] btfOut2_re;  // sfix28_En14
  input   signed [27:0] btfOut2_im;  // sfix28_En14
  input   btfOut_vld;
  input   [3:0] stage;  // ufix4
  input   initIC;
  input   syncReset;
  output  signed [27:0] stgOut1_re;  // sfix28_En14
  output  signed [27:0] stgOut1_im;  // sfix28_En14
  output  signed [27:0] stgOut2_re;  // sfix28_En14
  output  signed [27:0] stgOut2_im;  // sfix28_En14
  output  stgOut_vld;


  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut1Reg_re;  // sfix28
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut1Reg_im;  // sfix28
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut2Reg_re;  // sfix28
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut2Reg_im;  // sfix28
  reg  MINRESRX2FFTMEMSEL_stgOutReg_vld;
  reg [10:0] MINRESRX2FFTMEMSEL_cnt;  // ufix11
  reg [10:0] MINRESRX2FFTMEMSEL_cntMax;  // ufix11
  reg  MINRESRX2FFTMEMSEL_muxSel;
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut1Reg_re_next;  // sfix28_En14
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut1Reg_im_next;  // sfix28_En14
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut2Reg_re_next;  // sfix28_En14
  reg signed [27:0] MINRESRX2FFTMEMSEL_stgOut2Reg_im_next;  // sfix28_En14
  reg  MINRESRX2FFTMEMSEL_stgOutReg_vld_next;
  reg [10:0] MINRESRX2FFTMEMSEL_cnt_next;  // ufix11
  reg [10:0] MINRESRX2FFTMEMSEL_cntMax_next;  // ufix11
  reg  MINRESRX2FFTMEMSEL_muxSel_next;
  reg signed [27:0] stgOut1_re_1;  // sfix28_En14
  reg signed [27:0] stgOut1_im_1;  // sfix28_En14
  reg signed [27:0] stgOut2_re_1;  // sfix28_En14
  reg signed [27:0] stgOut2_im_1;  // sfix28_En14
  reg  stgOut_vld_1;


  // MINRESRX2FFTMEMSEL
  always @(posedge clk)
    begin : MINRESRX2FFTMEMSEL_process
      if (reset_x == 1'b0) begin
        MINRESRX2FFTMEMSEL_stgOut1Reg_re <= 28'sb0000000000000000000000000000;
        MINRESRX2FFTMEMSEL_stgOut1Reg_im <= 28'sb0000000000000000000000000000;
        MINRESRX2FFTMEMSEL_stgOut2Reg_re <= 28'sb0000000000000000000000000000;
        MINRESRX2FFTMEMSEL_stgOut2Reg_im <= 28'sb0000000000000000000000000000;
        MINRESRX2FFTMEMSEL_cnt <= 11'b00000000000;
        MINRESRX2FFTMEMSEL_cntMax <= 11'b00000000000;
        MINRESRX2FFTMEMSEL_muxSel <= 1'b0;
        MINRESRX2FFTMEMSEL_stgOutReg_vld <= 1'b0;
      end
      else begin
        if (enb) begin
          if (syncReset == 1'b1) begin
            MINRESRX2FFTMEMSEL_stgOut1Reg_re <= 28'sb0000000000000000000000000000;
            MINRESRX2FFTMEMSEL_stgOut1Reg_im <= 28'sb0000000000000000000000000000;
            MINRESRX2FFTMEMSEL_stgOut2Reg_re <= 28'sb0000000000000000000000000000;
            MINRESRX2FFTMEMSEL_stgOut2Reg_im <= 28'sb0000000000000000000000000000;
            MINRESRX2FFTMEMSEL_cnt <= 11'b00000000000;
            MINRESRX2FFTMEMSEL_cntMax <= 11'b00000000000;
            MINRESRX2FFTMEMSEL_muxSel <= 1'b0;
            MINRESRX2FFTMEMSEL_stgOutReg_vld <= 1'b0;
          end
          else begin
            MINRESRX2FFTMEMSEL_stgOut1Reg_re <= MINRESRX2FFTMEMSEL_stgOut1Reg_re_next;
            MINRESRX2FFTMEMSEL_stgOut1Reg_im <= MINRESRX2FFTMEMSEL_stgOut1Reg_im_next;
            MINRESRX2FFTMEMSEL_stgOut2Reg_re <= MINRESRX2FFTMEMSEL_stgOut2Reg_re_next;
            MINRESRX2FFTMEMSEL_stgOut2Reg_im <= MINRESRX2FFTMEMSEL_stgOut2Reg_im_next;
            MINRESRX2FFTMEMSEL_stgOutReg_vld <= MINRESRX2FFTMEMSEL_stgOutReg_vld_next;
            MINRESRX2FFTMEMSEL_cnt <= MINRESRX2FFTMEMSEL_cnt_next;
            MINRESRX2FFTMEMSEL_cntMax <= MINRESRX2FFTMEMSEL_cntMax_next;
            MINRESRX2FFTMEMSEL_muxSel <= MINRESRX2FFTMEMSEL_muxSel_next;
          end
        end
      end
    end

  always @(MINRESRX2FFTMEMSEL_cnt, MINRESRX2FFTMEMSEL_cntMax, MINRESRX2FFTMEMSEL_muxSel,
       MINRESRX2FFTMEMSEL_stgOut1Reg_im, MINRESRX2FFTMEMSEL_stgOut1Reg_re,
       MINRESRX2FFTMEMSEL_stgOut2Reg_im, MINRESRX2FFTMEMSEL_stgOut2Reg_re,
       MINRESRX2FFTMEMSEL_stgOutReg_vld, btfOut1_im, btfOut1_re, btfOut2_im,
       btfOut2_re, btfOut_vld, initIC, stage) begin
    MINRESRX2FFTMEMSEL_cnt_next = MINRESRX2FFTMEMSEL_cnt;
    MINRESRX2FFTMEMSEL_cntMax_next = MINRESRX2FFTMEMSEL_cntMax;
    MINRESRX2FFTMEMSEL_muxSel_next = MINRESRX2FFTMEMSEL_muxSel;
    if (MINRESRX2FFTMEMSEL_muxSel) begin
      MINRESRX2FFTMEMSEL_stgOut1Reg_re_next = btfOut2_re;
      MINRESRX2FFTMEMSEL_stgOut1Reg_im_next = btfOut2_im;
      MINRESRX2FFTMEMSEL_stgOut2Reg_re_next = btfOut1_re;
      MINRESRX2FFTMEMSEL_stgOut2Reg_im_next = btfOut1_im;
    end
    else begin
      MINRESRX2FFTMEMSEL_stgOut1Reg_re_next = btfOut1_re;
      MINRESRX2FFTMEMSEL_stgOut1Reg_im_next = btfOut1_im;
      MINRESRX2FFTMEMSEL_stgOut2Reg_re_next = btfOut2_re;
      MINRESRX2FFTMEMSEL_stgOut2Reg_im_next = btfOut2_im;
    end
    if (initIC) begin
      MINRESRX2FFTMEMSEL_cnt_next = 11'b00000000000;
      MINRESRX2FFTMEMSEL_muxSel_next = 1'b0;
      case ( stage)
        4'b0000 :
          begin
            MINRESRX2FFTMEMSEL_cntMax_next = 11'b01111111111;
          end
        4'b1011 :
          begin
            MINRESRX2FFTMEMSEL_cntMax_next = 11'b11111111111;
          end
        default :
          begin
            MINRESRX2FFTMEMSEL_cntMax_next = MINRESRX2FFTMEMSEL_cntMax >> 8'd1;
          end
      endcase
    end
    else if (btfOut_vld) begin
      if (MINRESRX2FFTMEMSEL_cnt == MINRESRX2FFTMEMSEL_cntMax) begin
        MINRESRX2FFTMEMSEL_cnt_next = 11'b00000000000;
        MINRESRX2FFTMEMSEL_muxSel_next =  ! MINRESRX2FFTMEMSEL_muxSel;
      end
      else begin
        MINRESRX2FFTMEMSEL_cnt_next = MINRESRX2FFTMEMSEL_cnt + 11'b00000000001;
      end
    end
    MINRESRX2FFTMEMSEL_stgOutReg_vld_next = btfOut_vld;
    stgOut1_re_1 = MINRESRX2FFTMEMSEL_stgOut1Reg_re;
    stgOut1_im_1 = MINRESRX2FFTMEMSEL_stgOut1Reg_im;
    stgOut2_re_1 = MINRESRX2FFTMEMSEL_stgOut2Reg_re;
    stgOut2_im_1 = MINRESRX2FFTMEMSEL_stgOut2Reg_im;
    stgOut_vld_1 = MINRESRX2FFTMEMSEL_stgOutReg_vld;
  end



  assign stgOut1_re = stgOut1_re_1;

  assign stgOut1_im = stgOut1_im_1;

  assign stgOut2_re = stgOut2_re_1;

  assign stgOut2_im = stgOut2_im_1;

  assign stgOut_vld = stgOut_vld_1;

endmodule  // MINRESRX2FFT_MEMSEL
