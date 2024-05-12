function [scores] = population_score(input_population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper, Digital_Comp_v2)
%outputs scores with row index



populationSize = size(input_population,1);
scores = zeros(populationSize,2);
scores(:,1) = 1:populationSize; %first column is index
for i=1:populationSize


    b2 = input_population(i,1);
    b3 = input_population(i,2);
    b4 = input_population(i,3);
    a2 = input_population(i,4);
    a3 = input_population(i,5);
    a4 = input_population(i,6);  

    D2_GA= tf([1 b2 b3 b4],[1 a2 a3 a4],Ts);
    
    % Signal after filter D2
    [response] = lsim(D2_GA, inputSignal, t_vector);
    yy2_2 = bitstream1 - response;
    yy2_2=yy2_2(2+Ntransient:1+N+Ntransient)';
    % offset = 0;
    % [response] = lsim(D2_GA, inputSignal(end-N-Ntransient+offset:end), t_vector(end-N-Ntransient+offset:end));
    % yy2_2 = bitstream1(end-N-Ntransient+offset:end) - response;
    % yy2_2=yy2_2(end-N+1:end)';
    

    NFFT = 2^nextpow2(N);
    % Y3 = fft(yy2_2,NFFT)/N;
    Y3 = fft(yy2_2,NFFT);
    k = floor(log2(real(Y3).^2 + imag(Y3).^2));
    % PSD1 = log2((abs(Y3(1:NFFT/2+1))));
    % Y3 = abs(Y3(1:NFFT/2+1));
    % k = floor(log2(Y3)); % equivalent to finding the MSB
    
    PSD1 = k;
    % noise_score = sum(PSD1(band_lower:band_upper));
    noise_score = sum(PSD1(band_lower:8)) + sum(PSD1(9:band_upper));
    % instead of making priority encoder... just sum every other bit is
    % easier in HW
    % noise_score = 0;
    % for lol=band_lower:band_upper
    %     if mod(lol, 2) == 0 
    %         noise_score = noise_score + PSD1(lol);
    %     end
    % end
    
   
    
    if isnan(noise_score)
        noise_score = 1;
    end
    scores(i,2) = noise_score;

end