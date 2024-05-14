

mismatch_upper_limit = 1.0100000;
mismatch_lower_limit = 0.9900000;


input_population = zeros(100,5);
Y3_matrix = zeros(100,32769);

for i = 1:100
    input_population(i,1) = m*(mismatch_lower_limit + rand_range*rand);
    input_population(i,2) = b*(mismatch_lower_limit + rand_range*rand);
    input_population(i,3) = k*(mismatch_lower_limit + rand_range*rand);
    input_population(i,4) = Kpo*(mismatch_lower_limit + rand_range*rand);
    input_population(i,5) = Kfb*(mismatch_lower_limit + rand_range*rand);



    [Y3] = population_score_only_for_plotting(input_population(i,:), Comp, Ts, GAout', t_vector, bitstream1, Ntransient, N, band_lower, band_upper, Digital_Comp_v2);
    Y3_matrix(i,:) = Y3;
end

Y3_avg = mean(Y3_matrix, 1);

% figure(2)
% semilogx(f,Y3, 'b-', 'DisplayName', 'noisy');
% hold on
% semilogx(f,matched_amp, 'r-', 'DisplayName', 'M2-0 FPGA simulation');
% hold off


band_lower = 8;
band_upper = 493;


figure(2)
semilogx(f,Y3_avg, 'b-', 'DisplayName', 'noisy');
hold on
semilogx(f,matched_amp, 'r-', 'DisplayName', 'M2-0 FPGA simulation');
% semilogx(f,matched_amp, 'r-', 'DisplayName', 'M2-0 ideal');

powerInBand_matched_ = matched_amp(band_lower:band_upper);
vec = powerInBand_matched_;
[maxValue, maxIndex] = max(vec);

% Set the maximum value to minus infinity to exclude it
vec(maxIndex) = -inf;
secondMax = max(vec);
powerInBand_matched = max(vec);


semilogx(f,powerInBand_matched*ones(1,length(f)), 'k--');
textString_matched = [num2str(powerInBand_matched, '%0.0f')]; % Concatenating string with variable
text(2, powerInBand_matched+5, textString_matched, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable


signal_max = max(matched_amp);
textString_matched = [num2str(signal_max, '%0.2f')];
text(150-70, signal_max, textString_matched, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable


powerInBand_SD2_ = Y3_avg(band_lower:200);
vec = powerInBand_SD2_;
[maxValue, maxIndex] = max(vec);

% Set the maximum value to minus infinity to exclude it
vec(maxIndex) = -inf;
secondMax = max(vec);
powerInBand_SD2 = max(vec);


semilogx(f,powerInBand_SD2*ones(1,length(f)), 'k--');
textString_SD2 = [num2str(powerInBand_SD2, '%0.0f')]; % Concatenating string with variable
text(2, powerInBand_SD2+5, textString_SD2, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable




signal_max2 = max(amp_SD2);
textString_matched = [num2str(signal_max2, '%0.2f')];
text(150+150, signal_max2, textString_matched, 'FontSize', 12, 'FontWeight', 'bold'); % Display text with variable

legend('1% mismatch','matched',  'FontSize', 12)

% title('PSD of FPGA Simulation', 'FontSize', 12);
xlabel('frequency [Hz]', 'FontSize', 14)
ylabel('Amplitude [dB]', 'FontSize', 14)
ylim([-160 0]);

hold off