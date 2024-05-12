clc
close all
m_design = 1.59e-6;
b_design = 5.25e-3;
k_design = 99;
Kpo_design = 5000000;
Kfb_design = 2.361066666666666e-04;


runs = 10000;
b1 = zeros(1,runs);
b2 = zeros(1,runs);
b3 = zeros(1,runs);
b4 = zeros(1,runs);

a1 = zeros(1,runs);
a2 = zeros(1,runs);
a3 = zeros(1,runs);
a4 = zeros(1,runs);

% hold on
for i=1:runs

    m = m_design*(0.8 + (1.2 - 0.8) * rand);
    b = b_design*(0.8 + (1.2 - 0.8) * rand);
    k = k_design*(0.8 + (1.2 - 0.8) * rand);
    Kpo = Kpo_design*(0.8 + (1.2 - 0.8) * rand);
    Kfb = Kfb_design*(0.8 + (1.2 - 0.8) * rand);


    
    sysC=tf(1, [m b k]);
    Mz_run=c2d(sysC,Ts);

    D2_=minreal(1/(1+Mz_run*Digital_Comp_v2*Kpo*Kfb));
    
    [D2_num,D2_den] = tfdata(D2_);
    
    b1(i) = D2_num{1,1}(1);
    b2(i) = D2_num{1,1}(2);
    b3(i) = D2_num{1,1}(3);
    b4(i) = D2_num{1,1}(4);
    
    a1(i) = D2_den{1,1}(1);
    a2(i) = D2_den{1,1}(2);
    a3(i) = D2_den{1,1}(3);
    a4(i) = D2_den{1,1}(4);
    % bode(D2_)
end
% hold off
%%
figure;


subplot(2, 3, 1); % 2 rows, 3 cols, 1st position
plot(b2)
title('b2')
ylabel('Range')

subplot(2, 3, 2); % 2 rows, 3 cols, 1st position
plot(b3)
title('b3')


subplot(2, 3, 3); % 2 rows, 3 cols, 1st position
plot(b4)
title('b4')


subplot(2, 3, 4); % 2 rows, 3 cols, 1st position
plot(a2)
title('a2')
ylabel('Range')

subplot(2, 3, 5); % 2 rows, 3 cols, 1st position
plot(a3)
title('a3')
xlabel('Iteration')

subplot(2, 3, 6); % 2 rows, 3 cols, 1st position
plot(a4)
title('a4')



%%
figure(7)
hold on
plot(a1)
title('a1')
hold off

figure(8)
hold on
plot(b1)
title('b1')
hold off


%% normal distribution and data
data = b4;
mu = mean(data); % Mean of the distribution
sigma = std(data); % Standard deviation of the distribution

% Generate 1000 random numbers from a normal distribution
% data = normrnd(mu, sigma, 1000, 1);

% Plot the histogram of the data
figure;
histogram(data, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function

% Overlay the theoretical normal distribution
hold on;
x = linspace(min(data), max(data), 100);
y = normpdf(x, mu, sigma);
plot(x, y, 'r-', 'LineWidth', 2);
hold off;

% Enhance the plot
xlabel('Value');
ylabel('Probability Density');
title('Normal Distribution');
legend('Histogram', 'Theoretical PDF');

%%


% Plot the histogram of the data
figure;
subplot(2, 3, 1); % 2 rows, 3 cols, 1st position
histogram(b2, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function
% Overlay the theoretical normal distribution
hold on;
x = linspace(min(b2), max(b2), 100);
y = normpdf(x, mean(b2), std(b2));
plot(x, y, 'r-', 'LineWidth', 2);
hold off;
title('b2')
ylabel('Probability Density');

subplot(2, 3, 2); % 2 rows, 3 cols, 1st position
histogram(b3, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function
% Overlay the theoretical normal distribution
hold on;
x = linspace(min(b3), max(b3), 100);
y = normpdf(x, mean(b3), std(b3));
plot(x, y, 'r-', 'LineWidth', 2);
hold off;
title('b3')

subplot(2, 3, 3); % 2 rows, 3 cols, 1st position
histogram(b4, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function
% Overlay the theoretical normal distribution
hold on;
x = linspace(min(b4), max(b4), 100);
y = normpdf(x, mean(b4), std(b4));
plot(x, y, 'r-', 'LineWidth', 2);
hold off;
title('b4')

subplot(2, 3, 4); % 2 rows, 3 cols, 1st position
histogram(a2, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function
% Overlay the theoretical normal distribution
hold on;
x = linspace(min(a2), max(a2), 100);
y = normpdf(x, mean(a2), std(a2));
plot(x, y, 'r-', 'LineWidth', 2);
hold off;
title('a2')
ylabel('Probability Density');

subplot(2, 3, 5); % 2 rows, 3 cols, 1st position
histogram(a3, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function
% Overlay the theoretical normal distribution
hold on;
x = linspace(min(a3), max(a3), 100);
y = normpdf(x, mean(a3), std(a3));
plot(x, y, 'r-', 'LineWidth', 2);
hold off;
title('a3')
xlabel('Range');

subplot(2, 3, 6); % 2 rows, 3 cols, 1st position
histogram(a4, 30, 'Normalization', 'pdf'); % Normalize to show the probability density function
% Overlay the theoretical normal distribution
hold on;
x = linspace(min(a4), max(a4), 100);
y = normpdf(x, mean(a4), std(a4));
plot(x, y, 'r-', 'LineWidth', 2);
hold off;
title('a4')




% Enhance the plot
% xlabel('Range');
% ylabel('Probability Density');
% title('Distribution');
% % % legend('Histogram', 'Theoretical PDF');