
t0=clock;
epsilon=8.854e-12;
x=0.9;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%% Production error range %%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
load("random_seed.mat")
rng(random_seed)
mismatch_upper_limit = 1.2000000;
mismatch_lower_limit = 0.8000000;
rand_range = mismatch_upper_limit - mismatch_lower_limit;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%% Designed parameters and production error %%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
tic; % Start timer to check simulation time
Vfeedback_design=12;
Vfeedback = Vfeedback_design*(mismatch_lower_limit + rand_range*rand);
m_design = 1.59e-6;
m = m_design*(mismatch_lower_limit + rand_range*rand);
b_design = 5.25e-3;
b = b_design*(mismatch_lower_limit + rand_range*rand);
k_design = 99;
k = k_design*(mismatch_lower_limit + rand_range*rand);
AA_design = 7.5e-6;
AA = AA_design*(mismatch_lower_limit + rand_range*rand);
d0_design = 4.5e-6;
d0 = d0_design*(mismatch_lower_limit + rand_range*rand); %d1=d0;
Kfb=0.5*epsilon*AA*(Vfeedback^2)/(d0^2);
Kpo_design=5e6; 
Kpo = Kpo_design*(mismatch_lower_limit + rand_range*rand);
% %%%%%%%%%%%%%%%%%%%%%
enoise=10e-9;
Lfactor=Vfeedback/d0;
Fn=sqrt(k/m)/2/pi;


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%% Frequency, sample time and simulation samples %%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% f_pll = 66666000;
bw=1024;				% Base-band (Band we want to filter to get rid of HF noise)
OSR=64;
% Fs=OSR*2*bw;		% Oversampling frequency
Fs = 133332;
Ts=1/Fs;
N=64*1024;			% Samples number
F_resolution = Fs/N;
Finput=F_resolution*128;
Ntransient=2048; % get into steady state: critical for PSD estimates

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%% Analog Compensator %%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

Fph=45400;
PhaseLag=30; % PhaseLag=56; PhaseLag=30; lol
WL=Fph*2*pi;
PhiMargin=PhaseLag*(pi/180);
alpha=(1+sin(PhiMargin))/(1-sin(PhiMargin));
zero=WL/sqrt(alpha);
pole=alpha*zero;
Comp=tf([1 zero],[1 pole]);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%% Digital Compensator %%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
Digital_Comp_v2 = c2d(Comp,Ts);
[Digital_Compv2_num,Digital_Compv2_den] = tfdata(Digital_Comp_v2);



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%% z domain TF of MEMS sensor %%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
load("perfect_individual.mat")
% optimum_individual = perfect_individual;
% optimum_individual = optimum_individual_saved(1,:);
optimum_individual = [-1.991149902343750 1.018585205078125 -0.023895263671875 -1.963287353515625 1.022735595703125 -0.045867919921875];
% optimum_individual = [-1.991149902343750 1.018585205078125 -0.023895263671875 -1.963287353515625 1.022735595703125 -0.045867919921875]
% optimum_individual = [-1.997192382812500 1.025177001953125 -0.023895263671875 -1.976837158203125 1.026031494140625 -0.034851074218750];
% optimum_individual = [-1.998657226562500 1.026397705078125 -0.023895263671875 -1.970733642578125 1.032623291015625 -0.046630859375000]
% optimum_individual = [-1.992614746093750 1.019561767578125 -0.023895263671875 -1.969635009765625 1.020782470703125 -0.038055419921875]
% optimum_individual = [-1.98675537109375 1.015655517578125 -0.023895263671875 -1.954498291015625 1.018341064453125 -0.042236328125];
% optimum_individual = [-1.997760164721495 1.025259437840370 -0.024013135339392 -1.980078665902602 1.030870245380145 -0.035852482977676]
% optimum_individual = [-1.996666061329383, 1.024022839434862, -0.023983395169819, -1.975960921287902, 1.030584643622775, -0.037841615487945]
% optimum_individual = [-1.99603271484375, 1.022979736328125, -0.02392578125, -1.9730224609375, 1.029571533203125, -0.039031982421875]
% optimum_individual = [-1.988968322519213, 1.016708665760234, -0.02405537897720933, -1.9798163089435548, 1.038833265658468, -0.03982383129186928];

b2 =  optimum_individual(1);
b3 =  optimum_individual(2);
b4 =  optimum_individual(3);
a2 =  optimum_individual(4);
a3 =  optimum_individual(5);
a4 =  optimum_individual(6);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%% D2 designed to cancel NTF from Q2 %%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
D1=tf([1],[1],Ts);
[D1num,D1den] = tfdata(D1);
D2= tf([1 b2 b3 b4],[1 a2 a3 a4],Ts);
[D2num,D2den] = tfdata(D2);

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

time_steps = N+Ntransient;
simulation_time = time_steps*Ts;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%% Signal injection as input %%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
t_vector = linspace(0, simulation_time, time_steps+1); % 
% load('test691.mat')
% simin = [t_vector', test691];
injected_signal = [t_vector', zeros(length(t_vector),1)];
inject_signal_enable = 0;
electronic_noise_enable = 1;
acceleration_enable = 1;
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%% Simulate float or fixed point %%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% sim('MASH20_Bader_HW', simulation_time);	% Starts Simulink simulation
% sim('MASH20_Bader_fixed_point', simulation_time);	% Starts Simulink simulation
% sim('MASH20_Bader_fixed_point2.slx', simulation_time);	% Starts Simulink simulation
sim('MASH20_Bader_fixed_point3.slx', simulation_time);	% Starts Simulink simulation
% sim('MASH20_Bader_Float64.mdl', simulation_time);	% Starts Simulink simulation

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%% Simulation outputs %%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

yy1=bitstream1(2+Ntransient:1+N+Ntransient)'; %SD2
yy2=bitstream(2+Ntransient:1+N+Ntransient)'; %MASH2-0

elapsedTime = toc; % Capture elapsed time without printing
fprintf('Elapsed Time simulink: %.2f seconds\n', elapsedTime);
tic;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%% plotting PSD %%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
figure(1)
NFFT = 2^nextpow2(N);
Y = fft(yy1,NFFT)/N;
f = Fs/2*linspace(0,1,NFFT/2+1);

amp = 10*log10((abs(Y(1:NFFT/2+1)).^2));
amp_SD2 = amp;

semilogx(f,amp, 'b-'); % Create a logarithmic plot
title('PSD of MASH2-0 and SD2 output');
xlabel('frequency [Hz]')
ylabel('Amplitude [dB]')
ylim([-160 0]);

% figure(2)
hold on
Y2 = fft(yy2,NFFT)/N;

amp2 = 10*log10((abs(Y2(1:NFFT/2+1)).^2));
matched_amp = amp2;

semilogx(f,amp2, 'r-'); % Create a logarithmic plot
xlabel('frequency [Hz]')
ylabel('Amplitude [dB]')
ylim([-160 0]);

band_lower = 8;
band_upper = 1024;
powerInBand = mean(amp2(band_lower:band_upper)); %this is to be minimized with GA
powerInBand2 = mean(amp(band_lower:band_upper));
semilogx(f,powerInBand*ones(1,length(f)), 'k--');
semilogx(f,powerInBand2*ones(1,length(f)), 'k--');
legend('SD2', 'MASH2-0', 'avg noise floor')
textString = ['avg noise floor M20: ', num2str(powerInBand)]; % Concatenating string with variable
textString2 = ['avg noise floor SD2: ', num2str(powerInBand2)]; % Concatenating string with variable
text(2, -20, textString, 'FontSize', 10); % Display text with variable
text(2, -10, textString2, 'FontSize', 10); % Display text with variable

%%%%%%%%%%%%%%%%%%% HD FOM %%%%%%%%%%%%%%%%%%%%
HD_FOM = amp_SD2(129) + matched_amp(385) + matched_amp(513) + matched_amp(769) + matched_amp(897) + matched_amp(1025) + matched_amp(1153) + matched_amp(1251);
HD_FOM = HD_FOM/8;
disp(HD_FOM)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

hold off

elapsedTime = toc; % Capture elapsed time without printing
fprintf('Elapsed Time PSD: %.2f seconds\n', elapsedTime);

% Assuming x is your signal vector
power_M20 = sum(abs(yy2).^2) / N;
power_SD2 = sum(abs(yy1).^2) / N;

