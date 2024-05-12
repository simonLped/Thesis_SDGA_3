function random_number_interval = rndinterval(scale_precision_bits, range, bits_fi_range, frac_bits_fi_range, clk)

numBits = scale_precision_bits; %accuracy of random interval from 0 to 1
% maxValue = 8.0596e+05;% 20% range
maxValue = range; %20%error range one side and rand bit used for sign to
% maxValue = 1;
maxValue_fi = fi(maxValue, 1, bits_fi_range, frac_bits_fi_range);
% fprintf('MaxValue error: %.64f \n', abs(maxValue- double(maxValue_fi))/maxValue);

% randomBits = randi([0, 1], [1, numBits]); % these can be generated with the Jakov method
randomBits = random_binary_string(clk, numBits);
binaryFraction = randomBits * (2.^-(1:numBits))'; % 8 bits after comma

binaryFraction_fi = fi(binaryFraction, 1, numBits+1, numBits); % 9 because 1 sign bit, 8 cus 8 fraction bits
% fprintf('binaryFraction error: %.64f \n', abs(double(binaryFraction_fi)- binaryFraction)/binaryFraction);
randomValue = binaryFraction_fi * maxValue_fi;
% randomValue_correct = binaryFraction * maxValue;
% fprintf('RandomValue error: %.64f \n', abs(double(randomValue)- randomValue_correct)/randomValue_correct);
% disp(randomValue)
% disp(randomValue_correct)
% fprintf('percent of maxValue: %.64f \n', abs(double(randomValue)/double(maxValue_fi)));

random_number_interval = randomValue;
% randomBits_str = strrep(num2str(randomBits), ' ', '');
% disp(['String: ', randomBits_str]);
% Convert binary fraction to decimal
