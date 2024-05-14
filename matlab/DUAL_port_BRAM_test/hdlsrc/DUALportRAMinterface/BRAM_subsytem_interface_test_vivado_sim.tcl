create_project vivado_sim C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/ -part xc7z010clg400-1 -force
source C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/BRAM_subsytem_interface_test_tb_compile.tcl
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/GPIO.dat
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/PL_done_expected.dat
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/bram_addr_expected.dat
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/bram_din_expected.dat
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/bram_en_expected.dat
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/ga_done.dat
update_compile_order -fileset sim_1
source C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_BRAM_test/hdlsrc/DUALportRAMinterface/BRAM_subsytem_interface_test_tb_sim.tcl
