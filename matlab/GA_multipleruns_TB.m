% ranges precalculated from randomly generated coefficients in the range
% +-20% leading to a finaly filter with the following ranges


a2_mu = -1.974624718442099;
a3_mu = 1.030055437167981;
a4_mu = -0.038192752867068;
b2_mu = -1.995889982453819;
b3_mu = 1.023326662727021;
b4_mu = -0.023966748912686;

a2_std = 0.011227327145146;
a3_std = 0.005957673498240;
a4_std = 0.004303939628342;
b2_std = 0.006755693011715;
b3_std = 0.006429794980971;
b4_std = 1.540174014469709e-04;



a2_range = [-2.00, -1.95];
a3_range = [1.018, 1.0392];
a4_range = [-0.048, -0.032];

b2_range = [-2.01, -1.984];
b3_range = [1.012, 1.032];
% b4_range = [-0.0242, -0.0237];
b4_range = [-0.024, -0.024];
WL = 64;
FL = 32;


runs = 100;
optimum_individual_saved = zeros(runs, 6);
for save_index=1:runs
    tic; % start timer to check code speed
    % input signal
    t_vector = linspace(0, simulation_time, time_steps+1); 
    inputSignal = GAout';
    
    % initial population
    band_lower = 1;
    band_upper = 66;
    populationSize = 4;
    initial_population = zeros(populationSize, 6); % one row = one individual

    for i=1:populationSize  


        % initial_population(i,1) = double(fi(b2_range(1) + (b2_range(2) - b2_range(1))*rand, true, WL, FL));
        % initial_population(i,2) = double(fi(b3_range(1) + (b3_range(2) - b3_range(1))*rand, true, WL, FL));
        % initial_population(i,3) = double(fi(b4_range(1) + (b4_range(2) - b4_range(1))*rand, true, WL, FL));
        % 
        % initial_population(i,4) = double(fi(a2_range(1) + (a2_range(2) - a2_range(1))*rand, true, WL, FL));
        % initial_population(i,5) = double(fi(a3_range(1) + (a3_range(2) - a3_range(1))*rand, true, WL, FL));
        % initial_population(i,6) = double(fi(a4_range(1) + (a4_range(2) - a4_range(1))*rand, true, WL, FL));

        initial_population(i,1) = double(fi(b2_std * randn(1, 1) + b2_mu, true, WL, FL));
        initial_population(i,2) = double(fi(b3_std * randn(1, 1) + b3_mu, true, WL, FL));
        initial_population(i,3) = double(fi(b4_std * randn(1, 1) + b4_mu, true, WL, FL));
        initial_population(i,4) = double(fi(a2_std * randn(1, 1) + a2_mu, true, WL, FL));
        initial_population(i,5) = double(fi(a3_std * randn(1, 1) + a3_mu, true, WL, FL));
        initial_population(i,6) = double(fi(a4_std * randn(1, 1) + a4_mu, true, WL, FL));
    end
    
    scores_initial = population_score(initial_population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper, Digital_Comp_v2);
    % sorted scores from initial population
    sorted_initial_scores = sortrows(scores_initial, 2);
    
    % Next generation
    scores = zeros(size(sorted_initial_scores));

    Generations = 10;
    method = 1:4; % R=1, C=2, M=3
    W_method = [0.25 0.25 0.25 0.25];
    % W_method = [0.33 0.33 0.34];

    % W_method = [0.25 0.25 0.25];
    % W = populationSize:-1:1;
    W = ones(1,populationSize);
    sorted_prev_scores = sorted_initial_scores;
    prev_population = initial_population;
    
    next = 0; %flag for crossover
    
    for j=1:Generations
        population = zeros(size(prev_population));
        for i=1:populationSize
            selected_method = randsample(method, 1, true, W_method);
            clk = i;
            if i == 1 % Elite
                elite_index_1 = sorted_prev_scores(1,1);
                population(1,:) = prev_population(elite_index_1,:);
            % elseif i == 2 % Elite 2
            %     elite_index_2 = sorted_prev_scores(2,1);
            %     population(2,:) = prev_population(elite_index_2,:);
            % elseif i == 3 % Elite 3
            %     elite_index_3 = sorted_prev_scores(3,1);
            %     population(3,:) = prev_population(elite_index_3,:);

            elseif selected_method == 1 % Replication
                    % sample_index =  randsample(1:populationSize,1,true,W);
                    sample_index = i;
                    % sample_index = 1;

                    population(i,:) = prev_population(sample_index,:);

            elseif selected_method == 4 % New Individual

                % population(i,1) = double(fi(b2_range(1) + (b2_range(2) - b2_range(1))*rand, true, WL, FL));
                % population(i,2) = double(fi(b3_range(1) + (b3_range(2) - b3_range(1))*rand, true, WL, FL));
                % population(i,3) = double(fi(b4_range(1) + (b4_range(2) - b4_range(1))*rand, true, WL, FL));
                % 
                % population(i,4) = double(fi(a2_range(1) + (a2_range(2) - a2_range(1))*rand, true, WL, FL));
                % population(i,5) = double(fi(a3_range(1) + (a3_range(2) - a3_range(1))*rand, true, WL, FL));
                % population(i,6) = double(fi(a4_range(1) + (a4_range(2) - a4_range(1))*rand, true, WL, FL));

                population(i,1) = double(fi(b2_std * randn(1, 1) + b2_mu, true, WL, FL));
                population(i,2) = double(fi(b3_std * randn(1, 1) + b3_mu, true, WL, FL));
                population(i,3) = double(fi(b4_std * randn(1, 1) + b4_mu, true, WL, FL));
                population(i,4) = double(fi(a2_std * randn(1, 1) + a2_mu, true, WL, FL));
                population(i,5) = double(fi(a3_std * randn(1, 1) + a3_mu, true, WL, FL));
                population(i,6) = double(fi(a4_std * randn(1, 1) + a4_mu, true, WL, FL));

            elseif selected_method == 3 % Mutation
                % sample_index =  randsample(1:populationSize,1,true,W);
                sample_index = i;
                % sample_index = 1;
                population(i,:) = prev_population(sample_index,:);
                random_gene = randi([1, 6]);

                % LUT
                if random_gene == 1 
                    % population(i,1) = double(fi(b2_range(1) + (b2_range(2) - b2_range(1))*rand, true, WL, FL));
                    population(i,1) = double(fi(b2_std * randn(1, 1) + b2_mu, true, WL, FL));
                elseif random_gene == 2
                    % population(i,2) = double(fi(b3_range(1) + (b3_range(2) - b3_range(1))*rand, true, WL, FL));
                    population(i,2) = double(fi(b3_std * randn(1, 1) + b3_mu, true, WL, FL));
                elseif random_gene == 3
                    % population(i,3) = double(fi(b4_range(1) + (b4_range(2) - b4_range(1))*rand, true, WL, FL));
                    population(i,3) = double(fi(b4_std * randn(1, 1) + b4_mu, true, WL, FL));
                elseif random_gene == 4
                    % population(i,4) = double(fi(a2_range(1) + (a2_range(2) - a2_range(1))*rand, true, WL, FL));
                    population(i,4) = double(fi(a2_std * randn(1, 1) + a2_mu, true, WL, FL));
                elseif random_gene == 5
                    % population(i,5) = double(fi(a3_range(1) + (a3_range(2) - a3_range(1))*rand, true, WL, FL));
                    population(i,5) = double(fi(a3_std * randn(1, 1) + a3_mu, true, WL, FL));
                elseif random_gene == 6
                    % population(i,6) = double(fi(a4_range(1) + (a4_range(2) - a4_range(1))*rand, true, WL, FL));
                    population(i,6) = double(fi(a4_std * randn(1, 1) + a4_mu, true, WL, FL));
                end

                % LUT
                % if random_gene == 1 
                %     population(i,1) = double(fi(b2_range(1) + (b2_range(2) - b2_range(1))*rand, true, WL, FL));
                %     % population(i,1) = b2_std * randn(1, 1) + b2_mu;
                % elseif random_gene == 2
                %     population(i,2) = double(fi(b3_range(1) + (b3_range(2) - b3_range(1))*rand, true, WL, FL));
                %     % population(i,2) = b3_std * randn(1, 1) + b3_mu;
                % elseif random_gene == 3
                %     population(i,3) = double(fi(b4_range(1) + (b4_range(2) - b4_range(1))*rand, true, WL, FL));
                %     % population(i,3) = b4_std * randn(1, 1) + b4_mu;
                % elseif random_gene == 4
                %     population(i,4) = double(fi(a2_range(1) + (a2_range(2) - a2_range(1))*rand, true, WL, FL));
                %     % population(i,4) = a2_std * randn(1, 1) + a2_mu;
                % elseif random_gene == 5
                %     population(i,5) = double(fi(a3_range(1) + (a3_range(2) - a3_range(1))*rand, true, WL, FL));
                %     % population(i,5) = a3_std * randn(1, 1) + a3_mu;
                % elseif random_gene == 6
                %     population(i,6) = double(fi(a4_range(1) + (a4_range(2) - a4_range(1))*rand, true, WL, FL));
                %     % population(i,6) = a4_std * randn(1, 1) + a4_mu;
                % end


            elseif selected_method == 2 % Crossover

                % sample_index_1 =  randsample(1:populationSize,1,true,W);
                sample_index_1 = i;
                % sample_index = 1;

                individual_1 = prev_population(sample_index_1,:);

                sample_index_2 =  randsample(1:populationSize,1,true,W);
                individual_2 = prev_population(sample_index_2,:);
                
                random_gene = randi([1, 6]);
                individual_1_new = [individual_2(1:random_gene), individual_1(random_gene+1:6)];
                
                % new_individual = zeros(1,6);
                % for c=1:6
                %     cross_flag = randi([0 1]);
                %     if cross_flag == 1
                %         new_individual(c) = individual_2(c);
                %     else
                %         new_individual(c) = individual_1(c);
                %     end
                % end

                population(i,:) = individual_1_new;

            end
        
        end
        
        % Evaluate new population
        
        [scores] = population_score(population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper, Digital_Comp_v2);
        
        sorted_prev_scores = sortrows(scores, 2);

        disp(sorted_prev_scores)
        disp(j)
        prev_population = population;
    
    end
    
    
    
    
    elapsedTime = toc; % Capture elapsed time without printing
    fprintf('Elapsed Time PSD: %.2f seconds\n', elapsedTime);
    
    optimum_index = sorted_prev_scores(1,1);
    optimum_individual_saved(save_index, :) = prev_population(optimum_index,:);
    disp(save_index)
end


%% test to check PSD is ok
% fprintf('Best Score: %.4f \n', sorted_prev_scores(1,2));
% optimum_index = sorted_prev_scores(1,1);
% optimum_individual = prev_population(optimum_index,:);
PhaseLag = 30;

[amp_test_PSD, yy_MASH20, extra_amp_plot] = testPSD(optimum_individual_saved(6,:),inputSignal, t_vector, bitstream1, matched_amp, band_lower, band_upper,N, PhaseLag,Ts, Ntransient, Fs, Digital_Comp_v2);
% [amp_test_PSD, yy_MASH20, extra_amp_plot] = testPSD(optimum_individual_saved(1,:),inputSignal, t_vector, bitstream1, amp_SD2, band_lower, band_upper,N, PhaseLag,Ts, Ntransient, Fs, Digital_Comp_v2);


%% multiple plots
% [amp_test_PSD, yy_MASH20, SD2_reference] = testPSD(optimum_individual_saved(1,:),inputSignal, t_vector, bitstream1, amp_SD2, band_lower, band_upper,N, PhaseLag,Ts, Ntransient, Fs, Digital_Comp_v2);



completed_runs = 100;
amp_test_PSD_matrix = zeros(N/2+1,completed_runs);
for i=1:completed_runs
    figure(1)
    [amp_test_PSD_matrix(:,i), yy_MASH20, extra_amp_plot] = testPSD(optimum_individual_saved(i,:),inputSignal, t_vector, bitstream1, matched_amp, band_lower, band_upper,N, PhaseLag, Ts, Ntransient, Fs, Digital_Comp_v2);
end


average_optimized = mean(amp_test_PSD_matrix,2);

figure(2)
semilogx(f,amp_SD2, 'g-', 'DisplayName', 'SD2');
hold on
semilogx(f,average_optimized, 'b-', 'DisplayName', 'M2-0 GA');
semilogx(f,matched_amp, 'r-', 'DisplayName', 'M2-0 ideal');


powerInBand_avg = mean(average_optimized(band_lower:band_upper));
semilogx(f,powerInBand_avg*ones(1,length(f)), 'k--');
textString_avg = [num2str(powerInBand_avg, '%0.0f')]; % Concatenating string with variable
text(50, powerInBand_avg+5, textString_avg, 'FontSize', 10); % Display text with variable

powerInBand_matched = mean(matched_amp(band_lower:band_upper));
semilogx(f,powerInBand_matched*ones(1,length(f)), 'k--');
textString_matched = [num2str(powerInBand_matched, '%0.0f')]; % Concatenating string with variable
text(50, powerInBand_matched+5, textString_matched, 'FontSize', 10); % Display text with variable

powerInBand_SD2 = mean(amp_SD2(band_lower:band_upper));
semilogx(f,powerInBand_SD2*ones(1,length(f)), 'k--');
textString_SD2 = [num2str(powerInBand_SD2, '%0.0f')]; % Concatenating string with variable
text(50, powerInBand_SD2+5, textString_SD2, 'FontSize', 10); % Display text with variable
legend('SD2','M2-0 GA','M2-0 ideal')

title('PSD comparing SD2, M2-0 GA (no ZOH) and M2-0 ideal');
xlabel('frequency [Hz]')
ylabel('Amplitude [dB]')
ylim([-160 0]);

hold off






% 
% figure(2)
% semilogx(f,mean(amp_test_PSD_matrix,2), 'b-');
% hold on
% semilogx(f,extra_amp_plot, 'r-');
% semilogx(f,amp_SD2, 'g-');
% hold off


% figure(2)
% semilogx(f,amp_SD2, 'g-');
% hold on
% semilogx(f,mean(amp_test_PSD_matrix,2), 'b-');
% semilogx(f,matched_amp, 'r-');
% legend('SD2','M2-0 GA','M2-0 ideal')
% 
% hold off

%% custom


optimum_individual = [-1.988968322519213, 1.016708665760234, -0.02405537897720933, -1.9798163089435548, 1.038833265658468, -0.03982383129186928];
[amp_test_PSD, yy_MASH20, extra_amp_plot] = testPSD(optimum_individual,inputSignal, t_vector, bitstream1, matched_amp, band_lower, band_upper,N, PhaseLag,Ts, Ntransient, Fs, Digital_Comp_v2);


hold on
semilogx(f,extra_amp_plot, 'r-');
semilogx(f,SD2_reference, 'g-');
hold off