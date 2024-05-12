function [scores] = population_score_c2d(input_population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper)
%outputs scores with row index



populationSize = size(input_population,1);
scores = zeros(populationSize,2);
scores(:,1) = 1:populationSize; %first column is index
for i=1:populationSize
    m_GA = input_population(i,1);
    b_GA = input_population(i,2);
    k_GA = input_population(i,3);
    Kpo_GA = input_population(i,4);
    AA_GA = input_population(i,5);
    Vfeedback_GA = input_population(i,6);
    d0_GA = input_population(i,7);
    
    epsilon = 8.854e-12;
    Kfb_GA=0.5*epsilon*AA_GA*(Vfeedback_GA^2)/(d0_GA^2);
    Digital_Comp_v2 = c2d(Comp,Ts);

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
    Y3 = abs(Y3(1:NFFT/2+1));

    % 
    % a1 = 1; % Convert ln to log2
    % a2 = -1/2;
    
    % Normalize x to fall within [1, 2) for this approximation
    k = floor(log2(Y3)); % equivalent to finding the MSB
    % xNormalized = Y3 ./ (2.^k);
    
    % Apply the quadratic approximation
    % PSD1 = k + a1 .* (xNormalized - 1) + a2 .* (xNormalized - 1).^2;
    % PSD1 = k + a1 .* (xNormalized - 1);
    PSD1 = k;






    % PSD1 = (abs(Y3(1:NFFT/2+1)));
    % PSD1 = abs(Y3(1:NFFT/2+1))*10000;
    % PSD1 = 1/((abs(Y3(1:NFFT/2+1)))).^2;
%     PSD1 = log10((abs(Y3(1:NFFT/2+1))));

%     N_new = 1024*4;
%     Y3 = fft(yy2_2,N_new)/N_new;
%     PSD1 = 10*log10((abs(Y3(1:N_new/2+1)).^2));
    
    
    % Calculate noise score = cost function to be minimized
    noise_score = sum(PSD1(band_lower:band_upper));
%     noise_score = mean(PSD1(2:64));
%     noise_score = PSD1(129);
%     noise_score = (PSD1(800) + PSD1(100) + PSD1(50) + PSD1(200) + PSD1(400) )/5;
%     noise_score = PSD1(385)*0.2 + PSD1(641)*0.4 + PSD1(897)*0.15 + PSD1(1153)*0.15;
%     noise_score = sum(abs(yy2_2_LPF).^2) / N;

%     Fs = 131072;
%     signal_power_IM1 = freq_analysis(yy2_2, N, 512, Fs);
%     signal_power_IM2 = freq_analysis(yy2_2, N, 768, Fs);
%     signal_power_IM3 = freq_analysis(yy2_2, N, 1024, Fs);
%     signal_power_IM4 = freq_analysis(yy2_2, N, 1280, Fs);
%     noise_score = (signal_power_IM1 + signal_power_IM2 + signal_power_IM3 + signal_power_IM4)/4;
    
    if isnan(noise_score)
        noise_score = 1;
    end
    scores(i,2) = noise_score;

end