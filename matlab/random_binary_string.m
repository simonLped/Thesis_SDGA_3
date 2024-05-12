% Define the initial state (not all zeros)
function random_binary_list = random_binary_string(adjustable_numsteps, number_out_bits)


initialState = [1 zeros(1, 31)]; % Initial state with a leading '1'

% Define the number of steps to run the LFSR
numSteps = 32 + adjustable_numsteps; % Adjust as needed

% Initialize the state
state = initialState;

% Display initial state
% fprintf('Initial state: %s\n', num2str(state));

for step = 1:numSteps
    % Calculate the feedback bit (XOR of the taps: 32, 22, 2, and 1)
    feedbackBit = xor(xor(state(32), state(22)), xor(state(2), state(1)));
    
    % Shift the register to the right and insert the feedback bit at the left
    state = [feedbackBit, state(1:end-1)];
    
    % Display the current state (optional: comment out for faster execution on large numSteps)
    % fprintf('Step %03d: %s\n', step, num2str(state));
    
end
random_binary_list = state(end-number_out_bits+1:end);
% Display the final state after numSteps iterations
% fprintf('Final state after %d steps: %s\n', numSteps, num2str(state));


% binary_string = strrep(num2str(state), ' ', '');







