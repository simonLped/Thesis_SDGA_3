clc
x = 0.00000000010000000;
% This function approximates log2 of a positive number x.

% Normalize x to fall within [1, 2)
k = floor(log2(x));    % Find the nearest power of 2.
xNormalized = x / (2^k); % Normalize x to the interval [1, 2).

% Simple linear approximation within [1, 2): log2(x) = a * (x - 1)
% For this example, let's assume a = 1 based on the simple model P_1(x) = a_0 + a_1(x-1),
% and for simplicity, consider a linear function that crosses (1,0) and (2,1), which gives us a_1 = 1.
a_1 = 1;
log2Approx = k + a_1 * (xNormalized - 1);


% Example usage

fprintf('Approximate log2(%f) = %f\n', x, log2Approx);
fprintf('real log2(%f) = %f\n', x, log2(x));
disp(log2Approx/log2(x))