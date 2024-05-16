

`timescale 1 ns / 1 ns

module pulse_from_trigger
          (clk,
           reset_x,
           clk_enable,
           In1,
           Out1);


  input   clk;
  input   reset_x;
  input   clk_enable;
  input   In1;
  output  Out1;


  wire enb;
  reg  Delay1_out1;
  wire Logical_Operator_out1;
  wire Logical_Operator1_out1;


  assign enb = clk_enable;

  always @(posedge clk)
    begin : Delay1_process
      if (reset_x == 1'b0) begin
        Delay1_out1 <= 1'b0;
      end
      else begin
        if (enb) begin
          Delay1_out1 <= In1;
        end
      end
    end



  assign Logical_Operator_out1 = In1 & Delay1_out1;



  assign Logical_Operator1_out1 = In1 ^ Logical_Operator_out1;



  assign Out1 = Logical_Operator1_out1;

  assign ce_out = clk_enable;

endmodule  // pulse_from_trigger


