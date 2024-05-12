function [output_amp, yy_MASH20] = testPSD_c2d(optimum_individual,inputSignal, t_vector, bitstream1, extra_amp_plot, band_lower, band_upper,N, PhaseLag)


Ntransient=2048; % get into steady state: critical for PSD estimates
m_GA = optimum_individual(1);
b_GA = optimum_individual(2);
k_GA = optimum_individual(3);
Kpo_GA = optimum_individual(4);

AA_GA = optimum_individual(5);
Vfeedback_GA = optimum_individual(6);
d0_GA = optimum_individual(7);



epsilon = 8.854e-12;
Kfb_GA=0.5*epsilon*AA_GA*(Vfeedback_GA^2)/(d0_GA^2);


% upper_bits = 23;
% lower_bits = 23;
% total_bits = upper_bits + lower_bits;
% m_GA_fi = fi(m_GA, 1, total_bits, lower_bits);
% m_GA = double(m_GA_fi);
% b_GA_fi = fi(b_GA, 1, total_bits, lower_bits);
% b_GA = double(b_GA_fi);
% k_GA_fi = fi(k_GA, 1, total_bits, lower_bits);
% k_GA = double(k_GA_fi);
% Kpo_GA_fi = fi(Kpo_GA, 1, total_bits, lower_bits);
% Kpo_GA = double(Kpo_GA_fi);
% Kbst_GA_fi = fi(Kbst_GA, 1, total_bits, lower_bits);
% Kbst_GA = double(Kbst_GA_fi);
% Kq1_GA_fi = fi(Kq1_GA, 1, total_bits, lower_bits);
% Kq1_GA = double(Kq1_GA_fi);
% Kfb_GA_fi = fi(Kfb_GA, 1, total_bits, lower_bits);
% Kfb_GA = double(Kfb_GA_fi);
% KS_GA_fi = fi(KS_GA, 1, total_bits, lower_bits);
% KS_GA = double(KS_GA_fi);
% KR_GA_fi = fi(KR_GA, 1, total_bits, lower_bits);
% KR_GA = double(KR_GA_fi);

% N=64*1024;			% Samples numbers

% bw=1024;				% Base-band (Band we want to filter to get rid of HF noise)
% OSR=64;
% Fs=OSR*2*bw;		% Oversampling frequency
Fs = 133332;
Ts=1/Fs;

Fph=45400;
% PhaseLag=56;
% PhaseLag=50;
WL=Fph*2*pi;
PhiMargin=PhaseLag*(pi/180);
alpha=(1+sin(PhiMargin))/(1-sin(PhiMargin));
zero=WL/sqrt(alpha);
pole=alpha*zero;

Comp=tf([1 zero],[1 pole]);
Digital_Comp_v2 = c2d(Comp,Ts);
sysC=tf(1, [m_GA b_GA k_GA]);
Mz_GA=c2d(sysC,Ts);
D1=tf([1],[1],Ts);
NTF1=minreal(1/(1+Mz_GA*Digital_Comp_v2*Kpo_GA*Kfb_GA));
D2_GA=minreal(D1*NTF1);

% Signal after filter D2
[response] = lsim(D2_GA, inputSignal, t_vector);
% [response] = lsim(D2_GA, inputSignal);
yy2_2 = bitstream1 - response;
yy2_2 =yy2_2(2+Ntransient:1+N+Ntransient);
yy_MASH20 = yy2_2;

NFFT = 2^nextpow2(N);
Y3 = fft(yy2_2,NFFT)/N;
f = Fs/2*linspace(0,1,NFFT/2+1);

amp3 = 10*log10((abs(Y3(1:NFFT/2+1)).^2));
output_amp = amp3;
semilogx(f,amp3, 'b-'); % Create a logarithmic plot
xlabel('frequency [Hz]')
ylabel('Amplitude [dB]')
ylim([-160 0]);

hold on
semilogx(f,extra_amp_plot, 'r-');
powerInBand = mean(amp3(band_lower:band_upper)); %this is to be minimized with GA
powerInBand2 = mean(extra_amp_plot(band_lower:band_upper));
semilogx(f,powerInBand*ones(1,length(f)), 'k--');
semilogx(f,powerInBand2*ones(1,length(f)), 'k--');
% legend('SD2', 'MASH2-0', 'avg noise floor')
textString = ['avg noise floor M20 GA: ', num2str(powerInBand)]; % Concatenating string with variable
textString2 = ['avg noise floor M20 matched: ', num2str(powerInBand2)]; % Concatenating string with variable
text(2, -20, textString, 'FontSize', 10); % Display text with variable
text(2, -10, textString2, 'FontSize', 10); % Display text with variable
legend('M20 GA optimized', 'matched', 'avg noise floor')
hold off