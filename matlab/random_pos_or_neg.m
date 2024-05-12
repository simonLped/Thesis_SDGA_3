function sign = random_pos_or_neg(clk)
% randomInt = randi([1, 2]);
randomInt = random_binary_string(clk, 1);

if randomInt == 0
    sign = 1;
else
    sign = -1;

end
