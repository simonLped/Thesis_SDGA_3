% Number of uint16 elements
n = 8;

% Generate random uint16 array of length n
uint16Array = randi([0, 65535], n, 1, 'uint16');

% Initialize the output array with the correct size and type
outputArray = zeros(2*n, 1, 'uint8');

% Populate the output array with LSB and MSB from each uint16 element
for i = 1:n
    outputArray(2*i-1) = bitand(uint16Array(i), 255);      % Extract LSB (lower 8 bits)
    outputArray(2*i) = bitshift(uint16Array(i), -8);       % Extract MSB (upper 8 bits)
end

data = outputArray;



% % Number of 8-bit integers to generate
% numIntegers = 16;
% 
% % Generate random 8-bit integers (0 to 255)
% data = uint8(randi([0, 255], numIntegers, 1));

% Specify the file name
filename = 'output.bin';

% Open the file for writing ('w' for write, 'b' for binary)
fileID = fopen(filename, 'wb');

% Check if the file was opened successfully
if fileID == -1
    error('File could not be opened.');
end

% Write the data as 8-bit integers
fwrite(fileID, data, 'uint8');

% Close the file
fclose(fileID);

% Display a completion message
disp('Data written to binary file successfully.');