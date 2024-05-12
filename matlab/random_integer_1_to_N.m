function out = random_integer_1_to_N(clk,N)

numBits = ceil(log2(N + 1));
decimal = 0;
p = 0;
while decimal < 1 || decimal > N
    % Generate a 4-bit binary number as a string
%     binaryString = strcat(num2str(randi([0, 1])), num2str(randi([0, 1])), num2str(randi([0, 1])), num2str(randi([0, 1])));
    binaryString = strrep(num2str(random_binary_string(clk+p, numBits)), ' ', ''); %two random bits in string format
                          
    % Convert the binary string to a decimal number
    decimal = bin2dec(binaryString);
    out = decimal;
    p = p + 1;
end