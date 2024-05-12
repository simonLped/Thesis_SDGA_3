fs = 133332; % Sampling frequency (Hz)
fc = 1000; % Cutoff frequency (Hz)
order = 4; % Order of the filter
Wn = fc/(fs/2); % Normalized cutoff frequency
[b, a] = butter(order, Wn, 'low');

y = filter(b, a, yy2); % Filtered signal
figure;
subplot(2,1,1);
plot(yy2);
title('Original Signal');
xlabel('Time (seconds)');
ylabel('Amplitude');

subplot(2,1,2);
plot(y);
title('Filtered Signal');
xlabel('Time (seconds)');
ylabel('Amplitude');
