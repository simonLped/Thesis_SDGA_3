
% F = 50000000;
F = Fs;
Fs = 133332;
% Ts=1/Fs;
Ts = 1/F;

% N=64*1024;			% Samples number
% F_resolution = Fs/N;
% Finput=F_resolution*128;



simin = [t_vector', bitstream1];

simin2 = [t_vector', GAout];



%% 
SD2_ = fft(bitstream1(2+Ntransient:1+4096+Ntransient))/4096;
M20_ = fft(bitstream(2+Ntransient:1+4096+Ntransient))/4096;
M20_simulink = fft(out.bitstream_M20_simple_test2(9013+2048-0:9013+4096+2048-1-0),4096)/4096;


semilogx(20*log10(abs(out.bitstream_M20_simple_test(37890+10:37889+2048+10)/4096)))
hold on
% semilogx(20*log10(abs(M20_simulink(1:2048))))
% semilogx(20*log10(abs(M20_(1:2048))))
% semilogx(20*log10(abs(SD2_(1:2048))))
hold off

%%

plot(out.bitstream_M20_simple_test2(9013+2048-0:9013+4096+2048-1-0), '-r')
hold on
plot(bitstream(2+Ntransient:1+4096+Ntransient), '--b')
hold off

%%
close all
offset = 100;
valid1 = out.bitstream_M20_simple_test1_valid;
wave = out.bitstream_M20_simple_test2;
% simulink_wave_fft = out.bitstream_M20_simple_test;

yy2=bitstream(2+Ntransient:1+NFFT+Ntransient)'; %MASH2-0
M20_ = fft(bitstream(2+Ntransient:1+4096+Ntransient))/4096;
Y2 = fft(yy2,NFFT);
amp2 = 10*log10((abs(Y2(1:NFFT/2+1)./NFFT).^2));

% test scoring
k = floor(log2(real(Y2).^2 + imag(Y2).^2));
nose_score_ideal = sum(k(4096-64:4096))




valid_interval = valid1(1:22144);
wave_pure_ = wave(1:22144);
wave_pure_ = wave_pure_.*valid_interval;
wave_pure = wave_pure_(wave_pure_~=0);
wave_pure_fft = fft((wave_pure))/4096;


k2 = floor(log2(real(wave_pure_fft).^2 + imag(wave_pure_fft).^2));
noise_score = sum(k2(4096-64:4096))



semilogx(f,20*log10(abs(wave_pure_fft(1:2049))), '-b')
hold on
semilogx(f,amp2, 'r-');
hold off

%%

plot(yy2, '-r')
hold on

plot(wave_pure, '-b')
hold off

test = wave_pure == yy2;

%%

FFT_out = out.fft_out;
FFT_out_valid = out.fft_out_valid;

FFT_valid_interval = FFT_out_valid(1:40000);
FFT_pure_ = FFT_out(1:40000);
FFT_pure_ = FFT_pure_.*FFT_valid_interval;
FFT_pure = FFT_pure_(FFT_pure_~=0);

k3 = floor(log2(real(FFT_pure).^2 + imag(FFT_pure).^2));

% stairs(k3(4096-63:4096))

score_sum = zeros(1,64);

for i = 2:66
    score_sum(i) = sum(k3(1:i));
end
plot(score_sum)


%%
clc
logsout_allscores = out.logsout;
scores_logged = logsout_allscores.getElement(3).Values;
elite_score = logsout_allscores.getElement(2).Values;

figure(1)
plot(scores_logged)
figure(2)
plot(elite_score)
