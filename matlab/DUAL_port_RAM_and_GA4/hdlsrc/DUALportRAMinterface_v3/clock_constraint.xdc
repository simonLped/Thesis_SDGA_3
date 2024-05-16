## Define the primary onboard clock on pin U18 with a period of 20 ns (50 MHz)
create_clock -name clk_pl_lol -period 20.0 [get_ports clk_pl_lol]

# Set the location and I/O standard for the primary clock pin
set_property PACKAGE_PIN U18 [get_ports clk_pl_lol]
set_property IOSTANDARD LVCMOS33 [get_ports clk_pl_lol]

# Define the generated 10 MHz clock from the PLL clocking wizard
#create_generated_clock -name clk_slow_lol -source [get_ports clk_pl_lol] -period 100.0 [get_pins clk_slow_lol]
#create_generated_clock -name clk_20MHz -source [get_ports clk_pl_lol] -period 50.0 [get_pins clk_slow_lol]
#create_generated_clock -name clk_slow_lol -source [get_ports clk_pl_lol] -divide_by 5 [get_pins clk_slow_lol]

create_generated_clock -name clk_slow_lol -source [get_ports clk_pl_lol] -divide_by 5 [get_pins clk_wiz_0_i/clk_out1]
#create_generated_clock -name clk_slow_lol -source [get_ports clk_pl_lol] -multiply_by 2 -divide_by 5 [get_pins clk_wiz_0_i/clk_out1]



