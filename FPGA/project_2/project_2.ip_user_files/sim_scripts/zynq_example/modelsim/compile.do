vlib modelsim_lib/work
vlib modelsim_lib/msim

vlib modelsim_lib/msim/xilinx_vip
vlib modelsim_lib/msim/xpm
vlib modelsim_lib/msim/axi_infrastructure_v1_1_0
vlib modelsim_lib/msim/axi_vip_v1_1_14
vlib modelsim_lib/msim/processing_system7_vip_v1_0_16
vlib modelsim_lib/msim/xil_defaultlib
vlib modelsim_lib/msim/lib_cdc_v1_0_2
vlib modelsim_lib/msim/proc_sys_reset_v5_0_13
vlib modelsim_lib/msim/generic_baseblocks_v2_1_0
vlib modelsim_lib/msim/axi_register_slice_v2_1_28
vlib modelsim_lib/msim/fifo_generator_v13_2_8
vlib modelsim_lib/msim/axi_data_fifo_v2_1_27
vlib modelsim_lib/msim/axi_crossbar_v2_1_29
vlib modelsim_lib/msim/axi_lite_ipif_v3_0_4
vlib modelsim_lib/msim/interrupt_control_v3_1_4
vlib modelsim_lib/msim/axi_gpio_v2_0_30
vlib modelsim_lib/msim/axi_bram_ctrl_v4_1_8
vlib modelsim_lib/msim/blk_mem_gen_v8_4_6
vlib modelsim_lib/msim/axi_protocol_converter_v2_1_28

vmap xilinx_vip modelsim_lib/msim/xilinx_vip
vmap xpm modelsim_lib/msim/xpm
vmap axi_infrastructure_v1_1_0 modelsim_lib/msim/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_14 modelsim_lib/msim/axi_vip_v1_1_14
vmap processing_system7_vip_v1_0_16 modelsim_lib/msim/processing_system7_vip_v1_0_16
vmap xil_defaultlib modelsim_lib/msim/xil_defaultlib
vmap lib_cdc_v1_0_2 modelsim_lib/msim/lib_cdc_v1_0_2
vmap proc_sys_reset_v5_0_13 modelsim_lib/msim/proc_sys_reset_v5_0_13
vmap generic_baseblocks_v2_1_0 modelsim_lib/msim/generic_baseblocks_v2_1_0
vmap axi_register_slice_v2_1_28 modelsim_lib/msim/axi_register_slice_v2_1_28
vmap fifo_generator_v13_2_8 modelsim_lib/msim/fifo_generator_v13_2_8
vmap axi_data_fifo_v2_1_27 modelsim_lib/msim/axi_data_fifo_v2_1_27
vmap axi_crossbar_v2_1_29 modelsim_lib/msim/axi_crossbar_v2_1_29
vmap axi_lite_ipif_v3_0_4 modelsim_lib/msim/axi_lite_ipif_v3_0_4
vmap interrupt_control_v3_1_4 modelsim_lib/msim/interrupt_control_v3_1_4
vmap axi_gpio_v2_0_30 modelsim_lib/msim/axi_gpio_v2_0_30
vmap axi_bram_ctrl_v4_1_8 modelsim_lib/msim/axi_bram_ctrl_v4_1_8
vmap blk_mem_gen_v8_4_6 modelsim_lib/msim/blk_mem_gen_v8_4_6
vmap axi_protocol_converter_v2_1_28 modelsim_lib/msim/axi_protocol_converter_v2_1_28

vlog -work xilinx_vip  -incr -mfcu  -sv -L axi_vip_v1_1_14 -L processing_system7_vip_v1_0_16 -L xilinx_vip "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/axi_vip_if.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/clk_vip_if.sv" \
"C:/Xilinx/Vivado/2023.1/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xpm  -incr -mfcu  -sv -L axi_vip_v1_1_14 -L processing_system7_vip_v1_0_16 -L xilinx_vip "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"C:/Xilinx/Vivado/2023.1/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
"C:/Xilinx/Vivado/2023.1/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \

vcom -work xpm  -93  \
"C:/Xilinx/Vivado/2023.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_14  -incr -mfcu  -sv -L axi_vip_v1_1_14 -L processing_system7_vip_v1_0_16 -L xilinx_vip "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ed63/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_16  -incr -mfcu  -sv -L axi_vip_v1_1_14 -L processing_system7_vip_v1_0_16 -L xilinx_vip "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../bd/zynq_example/ip/zynq_example_processing_system7_0_0/sim/zynq_example_processing_system7_0_0.v" \

vcom -work lib_cdc_v1_0_2  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \

vcom -work proc_sys_reset_v5_0_13  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/zynq_example/ip/zynq_example_proc_sys_reset_0_0/sim/zynq_example_proc_sys_reset_0_0.vhd" \

vlog -work generic_baseblocks_v2_1_0  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_28  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/87d1/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work fifo_generator_v13_2_8  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/c97d/simulation/fifo_generator_vlog_beh.v" \

vcom -work fifo_generator_v13_2_8  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/c97d/hdl/fifo_generator_v13_2_rfs.vhd" \

vlog -work fifo_generator_v13_2_8  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/c97d/hdl/fifo_generator_v13_2_rfs.v" \

vlog -work axi_data_fifo_v2_1_27  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/fab7/hdl/axi_data_fifo_v2_1_vl_rfs.v" \

vlog -work axi_crossbar_v2_1_29  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/f8f3/hdl/axi_crossbar_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../bd/zynq_example/ip/zynq_example_xbar_0/sim/zynq_example_xbar_0.v" \

vcom -work axi_lite_ipif_v3_0_4  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \

vcom -work interrupt_control_v3_1_4  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \

vcom -work axi_gpio_v2_0_30  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/18b7/hdl/axi_gpio_v2_0_vh_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/zynq_example/ip/zynq_example_axi_gpio_0_0/sim/zynq_example_axi_gpio_0_0.vhd" \

vcom -work axi_bram_ctrl_v4_1_8  -93  \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/85f5/hdl/axi_bram_ctrl_v4_1_rfs.vhd" \

vcom -work xil_defaultlib  -93  \
"../../../bd/zynq_example/ip/zynq_example_axi_bram_ctrl_0_0/sim/zynq_example_axi_bram_ctrl_0_0.vhd" \

vlog -work blk_mem_gen_v8_4_6  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/bb55/simulation/blk_mem_gen_v8_4.v" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../bd/zynq_example/ip/zynq_example_blk_mem_gen_0_0/sim/zynq_example_blk_mem_gen_0_0.v" \
"../../../bd/zynq_example/sim/zynq_example.v" \

vlog -work axi_protocol_converter_v2_1_28  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/8c02/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -mfcu  "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/ec67/hdl" "+incdir+../../../../project_2.gen/sources_1/bd/zynq_example/ipshared/aed8/hdl" "+incdir+C:/Xilinx/Vivado/2023.1/data/xilinx_vip/include" \
"../../../bd/zynq_example/ip/zynq_example_auto_pc_1/sim/zynq_example_auto_pc_1.v" \
"../../../bd/zynq_example/ip/zynq_example_auto_pc_0/sim/zynq_example_auto_pc_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

