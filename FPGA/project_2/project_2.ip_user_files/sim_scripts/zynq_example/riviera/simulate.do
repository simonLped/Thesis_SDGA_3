transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+zynq_example  -L xilinx_vip -L xpm -L axi_infrastructure_v1_1_0 -L axi_vip_v1_1_14 -L processing_system7_vip_v1_0_16 -L xil_defaultlib -L lib_cdc_v1_0_2 -L proc_sys_reset_v5_0_13 -L generic_baseblocks_v2_1_0 -L axi_register_slice_v2_1_28 -L fifo_generator_v13_2_8 -L axi_data_fifo_v2_1_27 -L axi_crossbar_v2_1_29 -L axi_lite_ipif_v3_0_4 -L interrupt_control_v3_1_4 -L axi_gpio_v2_0_30 -L axi_bram_ctrl_v4_1_8 -L blk_mem_gen_v8_4_6 -L axi_protocol_converter_v2_1_28 -L xilinx_vip -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.zynq_example xil_defaultlib.glbl

do {zynq_example.udo}

run 1000ns

endsim

quit -force
