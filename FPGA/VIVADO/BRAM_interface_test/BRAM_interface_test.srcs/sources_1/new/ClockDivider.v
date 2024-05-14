`timescale 1ns / 1ps

// 20 000x slower clock
module ClockDivider(
    input clk_in,        // Input clock
    output reg clk_out = 0  // Output clock, initialized to 0, toggles at a much reduced frequency
);

reg [14:0] count = 0;  // 15-bit counter to handle count up to 20000

always @(posedge clk_in) begin
    if (count >= 9999) begin
        clk_out <= ~clk_out;  // Toggle the output clock
        count <= 0;           // Reset the counter
    end else begin
        count <= count + 1;   // Increment the counter
    end
end

endmodule






//// 2x slower clock
//module ClockDivider(
//    input clk_in,        // Input clock
//    output reg clk_out   // Output clock, toggles at half the frequency of clk_in
//);

//// Counter to toggle the output clock
//reg toggle;

//// Toggle logic without reset
//always @(posedge clk_in) begin
//    toggle <= ~toggle;  // Toggle the flip-flop on every clock edge
//    if (toggle)         // Change the output clock only on every second tick
//        clk_out <= ~clk_out;
//    else
//        clk_out <= clk_out;
//end

//endmodule