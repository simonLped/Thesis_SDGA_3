create_project vivado_sim C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_RAM_and_GA4/hdlsrc/DUALportRAMinterface_v3/ -part xc7z020clg400-2 -force
source C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_RAM_and_GA4/hdlsrc/DUALportRAMinterface_v3/PL_tb_compile.tcl
add_files -fileset sim_1 -norecurse C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_RAM_and_GA4/hdlsrc/DUALportRAMinterface_v3/bram_dout.dat
update_compile_order -fileset sim_1
source C:/Users/Simon/Documents/Thesis_SDGA_3/matlab/DUAL_port_RAM_and_GA4/hdlsrc/DUALportRAMinterface_v3/PL_tb_sim.tcl
