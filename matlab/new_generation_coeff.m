m_design = 1.59e-6;
b_design = 5.25e-3;
k_design = 99;
Kfb_design = 2.361066666666666e-04;
Kpo_design = 5e6; 


Fs = 133332;
Ts=1/Fs;
N=64*1024;			% Samples number
F_resolution = Fs/N;
Finput=F_resolution*128;
enable_FIFO_in = Ts*1;
enable_FIFO_out = Ts*9009;
% data_valid from block is one sample to early