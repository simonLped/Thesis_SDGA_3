

runs = 100;
optimum_individual_saved = zeros(runs, 7);
for save_index=1:runs
    tic; % start timer to check code speed
    % input signal
    t_vector = linspace(0, simulation_time, time_steps+1); % 
    inputSignal = GAout';
    
    % Initial production error (RUN ONLY ONCE => input into GA to be optimized)
    % mismatch_upper_limit = 1.2;
    % mismatch_lower_limit = 0.80;
    % rand_range = mismatch_upper_limit - mismatch_lower_limit;
    
    mismatch = 0.2;
    
    
    % initial population
    band_lower = 1;
    band_upper = 64;
    populationSize = 30;
    initial_population = zeros(populationSize, 7); % one row = one individual
    for i=1:populationSize
    %     initial_population(i,1) = m*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,2) = b*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,3) = k*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,4) = Kpo*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,5) = Kbst*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,6) = Kq1*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,7) = Kfb*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,8) = KS*(mismatch_lower_limit + rand_range*rand);
    %     initial_population(i,9) = KR*(mismatch_lower_limit + rand_range*rand);
    
    %     Kfb=0.5*epsilon*AA*(Vfeedback^2)/(d0^2);
        initial_population(i,1) = m_design + random_pos_or_neg(i*save_index)*double(rndinterval(8, m_design*mismatch, 64, 32, i*2*save_index)); % m +- random number in 20% range
        initial_population(i,2) = b_design + random_pos_or_neg(i*2*save_index)*double(rndinterval(8, b_design*mismatch, 64, 32, i*3*save_index));
        initial_population(i,3) = k_design + random_pos_or_neg(i*3*save_index)*double(rndinterval(8, k_design*mismatch, 64, 32, i*2*save_index));
        initial_population(i,4) = Kpo_design + random_pos_or_neg(i*4*save_index)*double(rndinterval(8, Kpo_design*mismatch, 64, 32, i*4*save_index));
    
        initial_population(i,5) = AA_design + random_pos_or_neg(i*7*save_index)*double(rndinterval(8, AA_design*mismatch, 64, 32, i*5*save_index));
        initial_population(i,6) = Vfeedback_design + random_pos_or_neg(i*7*save_index)*double(rndinterval(8, Vfeedback_design*mismatch, 64, 32, i*6*save_index));
        initial_population(i,7) = d0_design + random_pos_or_neg(i*7*save_index)*double(rndinterval(8, d0_design*mismatch, 64, 32, i*7*save_index));
    
    end
    
    scores_initial = population_score_c2d(initial_population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper);
    % sorted scores from initial population
    sorted_initial_scores = sortrows(scores_initial, 2);
    
    % Next generation
    scores = zeros(size(sorted_initial_scores));

    Generations = 64;
    method = 1:4; % R=1, C=2, M=3
    W_method = [0.25 0.25 0.25 0.25]; % Weights: higher numbers have higher probability
    W = populationSize:-1:1;
    sorted_prev_scores = sorted_initial_scores;
    prev_population = initial_population;
    
    next = 0; %flag for crossover
    
    for j=1:Generations
        population = zeros(size(prev_population));
        for i=1:populationSize
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
    
            
            elseif next == 0
                % selected_method = randsample(method, 1, true, W_method);
                selected_method = randsample(method, 1, true, W_method);
    %             selected_method = random_integer_1_to_3(i+j); % Randomly choose method (easier to make in HW)
%                 selected_method = random_integer_1_to_N(clk*4,4);
    
    %             fprintf('Selected method: %.2f \n', selected_method);
    %             sample_index = randsample(sorted_prev_scores(:,1), 1, true, W); %drawn a previous generation individual index
    
                if selected_method == 1 % Replication
                    % sample_index = randsample(sorted_prev_scores(:,1), 1, true, W); %drawn a previous generation individual index
                    sample_index = randi([1, populationSize], 1, 1);
    %                 sample_index = linear_probability(populationSize, 10, clk*2);
                    population(i,:) = prev_population(sample_index,:);
                    %scores should also transfer but to keep simple recompute...
                elseif selected_method == 4
                    population(i,1) = m_design + random_pos_or_neg(i*69)*double(rndinterval(8, m_design*mismatch, 64, 32, i*211)); % m +- random number in 20% range
                    population(i,2) = b_design + random_pos_or_neg(i*24)*double(rndinterval(8, b_design*mismatch, 64, 32, i*13));
                    population(i,3) = k_design + random_pos_or_neg(i*322)*double(rndinterval(8, k_design*mismatch, 64, 32, i*21));
                    population(i,4) = Kpo_design + random_pos_or_neg(i*43)*double(rndinterval(8, Kpo_design*mismatch, 64, 32, i*14));
                    
                
                    population(i,5) = AA_design + random_pos_or_neg(i*7)*double(rndinterval(8, AA_design*mismatch, 64, 32, i*5));
                    population(i,6) = Vfeedback_design + random_pos_or_neg(i*7)*double(rndinterval(8, Vfeedback_design*mismatch, 64, 32, i*5));
                    population(i,7) = d0_design + random_pos_or_neg(i*7)*double(rndinterval(8, d0_design*mismatch, 64, 32, i*5));
                
                    
        
                elseif selected_method == 3 % Mutation
                    % sample_index = randsample(sorted_prev_scores(:,1), 1, true, W);
                    sample_index = randi([1, populationSize], 1, 1);
    %                 sample_index = linear_probability(populationSize, 10, clk*2);
    %                 sample_index = randi([1, populationSize]);
    %                 sample_index = random_integer_1_to_N(clk,populationSize);
                    population(i,:) = prev_population(sample_index,:);
                    random_gene = randi([1, 7]);
    %                 random_gene = random_integer_1_to_9(i);
    %                 random_gene = random_integer_1_to_N(clk*2,11);
                    % LUT
                    if random_gene == 1 
                        random_gene_initial_value = m_design;
                    elseif random_gene == 2
                        random_gene_initial_value = b_design;
                    elseif random_gene == 3
                        random_gene_initial_value = k_design;
                    elseif random_gene == 4
                        random_gene_initial_value = Kpo_design;
                    
                    elseif random_gene == 5
                        random_gene_initial_value = AA_design;
                    elseif random_gene == 6
                        random_gene_initial_value = Vfeedback_design;
                    elseif random_gene == 7 
                        random_gene_initial_value = d0_design;
                    
                    end
    %                 population(i,random_gene) = population(i,random_gene)*(mismatch_lower_limit + rand_range*rand);
                    
                    population(i,random_gene) = random_gene_initial_value + random_pos_or_neg(i)*double(rndinterval(8, random_gene_initial_value*mismatch, 64, 32, j+i)); %random_gene_initial_value*mismatch does not need to be executed everytime
                    
                    random_gene = randi([1, 7]);
    %                 random_gene = random_integer_1_to_N(clk*3,11);
                    % LUT
                    if random_gene == 1 
                        random_gene_initial_value = m_design;
                    elseif random_gene == 2
                        random_gene_initial_value = b_design;
                    elseif random_gene == 3
                        random_gene_initial_value = k_design;
                    elseif random_gene == 4
                        random_gene_initial_value = Kpo_design;
                    elseif random_gene == 7
                        random_gene_initial_value = AA_design;
                    elseif random_gene == 8
                        random_gene_initial_value = Vfeedback_design;
                    elseif random_gene == 9
                        random_gene_initial_value = d0_design;
                    end
    
    
    
    %                 population(i,random_gene) = population(i,random_gene)*(mismatch_lower_limit + rand_range*rand);
                    population(i,random_gene) = random_gene_initial_value + random_pos_or_neg(i+1)*double(rndinterval(8, random_gene_initial_value*mismatch, 64, 32, j+i)); %random_gene_initial_value*mismatch does not need to be executed everytime
    
                    
                elseif selected_method == 2 && i ~= populationSize % Crossover
                    next = 1;
                    % sample_index_1 = randsample(sorted_prev_scores(:,1), 1, true, W);
                    sample_index_1 = randi([1, populationSize], 1, 1);
    %                 sample_index_1 = linear_probability(populationSize, 10, clk*2);
    %                 sample_index_1 = randi([1, populationSize]);
    %                 sample_index_1 = random_integer_1_to_N(clk,populationSize);
                    individual_1 = prev_population(sample_index_1,:);
    
                    % sample_index_2 = randsample(sorted_prev_scores(:,1), 1, true, W);
                    sample_index_2 = randi([1, populationSize], 1, 1);
    %                 sample_index_2 = linear_probability(populationSize, 10, clk*3);
    %                 sample_index_2 = randi([1, populationSize]);
    %                 sample_index_2 = random_integer_1_to_N(clk,populationSize);
                    individual_2 = prev_population(sample_index_2,:);
    
                    random_gene = randi([1, 7]);
    %                 random_gene = random_integer_1_to_N(clk,11);
                    individual_1_new = [individual_1(1:random_gene), individual_2(random_gene+1:7)];
                    individual_2_new = [individual_2(1:random_gene), individual_1(random_gene+1:7)];
    
    %                 individual_1_new = [individual_1(1:4), individual_2(5:9)];
    %                 individual_2_new = [individual_2(1:4), individual_1(5:9)];
    
    
    
                    population(i,:) = individual_1_new;
                    population(i+1,:) = individual_2_new;
        
                else % method = C && last index
                    next = 0;
                    % sample_index_1 = randsample(sorted_prev_scores(:,1), 1, true, W);
                    sample_index_1 = randi([1, populationSize], 1, 1);
                    % sample_index_2 = randsample(sorted_prev_scores(:,1), 1, true, W);
                    sample_index_2 = randi([1, populationSize], 1, 1);
    %                 sample_index_1 = linear_probability(populationSize, 10, clk*2);
    %                 sample_index_2 = linear_probability(populationSize, 10, clk*3);
    
    %                 sample_index_1 = randi([1, populationSize]);
    %                 sample_index_2 = randi([1, populationSize]);
    %                 sample_index_1 = random_integer_1_to_N(clk,populationSize);
    %                 sample_index_2 = random_integer_1_to_N(clk,populationSize);
    
                    individual_1 = prev_population(sample_index_1,:);
                    individual_2 = prev_population(sample_index_2,:);
                    random_gene = randi([1, 7]);
    %                 random_gene = random_integer_1_to_N(clk*2,11);
                    individual_1_new = [individual_1(1:random_gene), individual_2(random_gene+1:7)];
                    population(i,:) = individual_1_new;
                end
            else
                next = 0;
            end
        
        end
        
        % Evaluate new population
        
        [scores] = population_score_c2d(population, Comp, Ts, inputSignal, t_vector, bitstream1, Ntransient, N, band_lower, band_upper);
        
        sorted_prev_scores = sortrows(scores, 2);
    %     disp(sorted_prev_scores(1,2))
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
[amp_test_PSD, yy_MASH20] = testPSD_c2d(optimum_individual_saved(1,:),inputSignal, t_vector, bitstream1, matched_amp, band_lower, band_upper,N, PhaseLag);
% [amp_test_PSD, yy_MASH20] = testPSD(optimum_individual_saved(40,:),inputSignal, t_vector, bitstream1, amp_SD2, band_lower, band_upper,N, PhaseLag);


%% multiple plots



completed_runs = 2;
amp_test_PSD_matrix = zeros(N/2+1,completed_runs);
for i=1:completed_runs
    figure(1)
    % [amp_test_PSD_matrix(:,i), yy_MASH20, extra_amp_plot] = testPSD_c2d(optimum_individual_saved(i,:),inputSignal, t_vector, bitstream1, matched_amp, band_lower, band_upper,N, PhaseLag, Ts, Ntransient, Fs, Digital_Comp_v2);
    [amp_test_PSD_matrix(:,i), yy_MASH20] = testPSD_c2d(optimum_individual_saved(i,:),inputSignal, t_vector, bitstream1, matched_amp, band_lower, band_upper,N, PhaseLag);

end


average_optimized = mean(amp_test_PSD_matrix,2);

figure(2)
semilogx(f,amp_SD2, 'g-', 'DisplayName', 'SD2');
hold on
semilogx(f,average_optimized, 'b-', 'DisplayName', 'M2-0 GA');
semilogx(f,matched_amp, 'r-', 'DisplayName', 'M2-0 ideal');
% legend('SD2','M2-0 GA','M2-0 ideal')
% legend()


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

title('PSD comparing SD2, M2-0 GA and M2-0 ideal');
xlabel('frequency [Hz]')
ylabel('Amplitude [dB]')
ylim([-160 0]);

hold off


