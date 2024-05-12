% weighted linear probability
% Idea: each iteration draw random bit, if 0 choose current position, if 1
% go to next position

function ind =  linear_probability(size_list, fraction_precision, clk)

% clk = randi([0,100]);
% clk = 1;
% 
% fraction_precision = 8;
% size_list = 10;


randomBits = random_binary_string(clk, fraction_precision);
binaryFraction = randomBits * (2.^-(1:fraction_precision))'; % 8 bits after comma



populationSize = size_list;

W = populationSize:-1:1;
W_sum = sum(W);
W_norm = W/W_sum;

random_fraction = binaryFraction;


W_thresholds = cumsum(W_norm);


ind = 1;
while (random_fraction > W_thresholds(ind)) && (ind < populationSize)
    ind = ind + 1;
end


