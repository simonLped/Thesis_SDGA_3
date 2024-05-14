
band_lower = 8;
band_upper = 493;
% band_upper = 31;

figure(2)
% semilogx(f,amp_SD2, 'g-', 'DisplayName', 'SD2');

semilogx(f,matched_amp, 'b-', 'DisplayName', 'M2-0 FPGA simulation');
hold on
% semilogx(f,matched_amp, 'r-', 'DisplayName', 'M2-0 ideal');

powerInBand_matched_ = matched_amp(band_lower:band_upper);
vec = powerInBand_matched_;
[maxValue, maxIndex] = max(vec);

% Set the maximum value to minus infinity to exclude it
vec(maxIndex) = -inf;
secondMax = max(vec);
powerInBand_matched = max(vec);


semilogx(f,powerInBand_matched*ones(1,length(f)), 'k--');
textString_matched = [num2str(powerInBand_matched, '%0.1f')]; % Concatenating string with variable
text(160, powerInBand_matched+5, textString_matched, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable


signal_max = max(matched_amp);
textString_matched = ['  ', num2str(signal_max, '%0.1f')];
text(160, signal_max, textString_matched, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable


% powerInBand_SD2_ = amp_SD2(band_lower:band_upper);
% vec = powerInBand_SD2_;
% [maxValue, maxIndex] = max(vec);
% 
% % Set the maximum value to minus infinity to exclude it
% vec(maxIndex) = -inf;
% secondMax = max(vec);
% powerInBand_SD2 = max(vec);


% semilogx(f,powerInBand_SD2*ones(1,length(f)), 'k--');
% textString_SD2 = [num2str(powerInBand_SD2, '%0.0f')]; % Concatenating string with variable
% text(2, powerInBand_SD2+5, textString_SD2, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable
% 
% 
% 
% 
% signal_max2 = max(amp_SD2);
% textString_matched = [num2str(signal_max2, '%0.2f')];
% text(150+150, signal_max2, textString_matched, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable

% legend('SD2','MASH2-0',  'FontSize', 12)

% title('PSD of FPGA Simulation', 'FontSize', 12);
xlabel('frequency [Hz]', 'FontSize', 14)
ylabel('Amplitude [dB]', 'FontSize', 14)
ylim([-160 0]);
xlim([32 1400]);

hold off