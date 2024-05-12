
function plotPSD(timedomain_signal, N, Fs)

% Fs = sampling frequency
% N = number of samples / timesteps after the initial transient part


NFFT = 2^nextpow2(N);
Y = fft(timedomain_signal,NFFT)/N;
f = Fs/2*linspace(0,1,NFFT/2+1);

amp = 10*log10((abs(Y(1:NFFT/2+1)).^2));

semilogx(f,amp, 'b-'); % Create a logarithmic plot
title('PSD of MASH2-0 and SD2 output');
xlabel('frequency [Hz]')
ylabel('Amplitude [dB]')
ylim([-160 0]);

% If you want to estimate the average noise floor: %
% band_lower = 8;
% band_upper = 1024;
% powerInBand = mean(amp2(band_lower:band_upper)); %this is to be minimized with GA
% semilogx(f,powerInBand*ones(1,length(f)), 'k--');
% textString = ['avg noise floor M20: ', num2str(powerInBand)]; % Concatenating string with variable
% text(2, -20, textString, 'FontSize', 10); % Display text with variable
