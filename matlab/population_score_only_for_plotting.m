function [Y3] = population_score_only_for_plotting(input_population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper, Digital_Comp_v2)
%outputs scores with row index



% m_GA = input_population(1);
% b_GA = input_population(2);
% k_GA = input_population(3);
% Kpo_GA = input_population(4);
% AA_GA = input_population(5);
% Vfeedback_GA = input_population(6);
% d0_GA = input_population(7);
% 
% epsilon = 8.854e-12;
% Kfb_GA=0.5*epsilon*AA_GA*(Vfeedback_GA^2)/(d0_GA^2);
% Digital_Comp_v2 = c2d(Comp,Ts);


m_GA = input_population(1);
b_GA = input_population(2);
k_GA = input_population(3);
Kpo_GA = input_population(4);
Kfb_GA = input_population(5);


% Filter D2
sysC=tf(1, [m_GA b_GA k_GA]);
Mz_GA=c2d(sysC,Ts); %MzCz_GA=c2d(sysC,Ts , 'zoh');
D1=tf([1],[1],Ts);
%     NTF1=minreal(1/(1+Mz_GA*Kpo_GA*Kbst_GA*Kq1_GA*Kfb_GA));
NTF1=minreal(1/(1+Mz_GA*Digital_Comp_v2*Kpo_GA*Kfb_GA));
%     D2_GA=minreal(D1*NTF1/(NTF1*(KS_GA-KR_GA/Kq1_GA)+KR_GA/Kq1_GA));
D2_GA=minreal(D1*NTF1);

% Signal after filter D2

% 
% [response] = lsim(D2_GA, inputSignal, t_vector);
% yy2_2 = bitstream1 - response;
% yy2_2=yy2_2(2+Ntransient:1+N+Ntransient)';

offset = 0;

[response] = lsim(D2_GA, inputSignal(end-N-Ntransient+offset:end), t_vector(end-N-Ntransient+offset:end));
yy2_2 = bitstream1(end-N-Ntransient+offset:end) - response;
yy2_2=yy2_2(end-N+1:end)';




NFFT = 2^nextpow2(N);
Y3 = fft(yy2_2,NFFT)/N;
% PSD1 = log2((abs(Y3(1:NFFT/2+1))));
Y3 = 20*log10(abs(Y3(1:NFFT/2+1)));

