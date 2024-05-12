function [output_amp, yy_MASH20, extra_amp_plot] = testPSD(optimum_individual,inputSignal, t_vector, bitstream1, extra_amp_plot, band_lower, band_upper,N, PhaseLag, Ts, Ntransient, Fs, Digital_Comp_v2)

b2 = optimum_individual(1);
b3 = optimum_individual(2);
b4 = optimum_individual(3);
a2 = optimum_individual(4);
a3 = optimum_individual(5);
a4 = optimum_individual(6);  


D2_GA= tf([1 b2 b3 b4],[1 a2 a3 a4],Ts);

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