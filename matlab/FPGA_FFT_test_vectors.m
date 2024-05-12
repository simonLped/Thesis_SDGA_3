% columnData = load('fft_512_input.txt');

testdata = [2.4492935982947064e-16
0.7431448254773946
0.9945218953682734
0.587785252292473
-0.20791169081775931
-0.8660254037844386
-0.9510565162951535
-0.4067366430758007
0.40673664307579993
0.9510565162951535
0.866025403784439
0.20791169081776062
-0.587785252292473
-0.9945218953682733
-0.7431448254773951
-2.4492935982947064e-16];




% Open a text file for writing
fileID = fopen('binary_data.txt', 'w');

% Check if the file was opened successfully
if fileID == -1
    error('Failed to open the file for writing.');
end



correct_fft_real = real(fft(testdata))
% Example floating-point number
% binary_testdata = zeros(length(testdata), 1);
for i = 1:length(testdata)

    num = testdata(i);
    numSingle = single(num);
    binaryStr = dec2bin(typecast(numSingle, 'uint32'), 32);
    fprintf(fileID, '%s\n', binaryStr);
    

    disp(binaryStr);

end
% Save array to ASCII text file
% save('decimal_data.txt', 'binary_testdata', '-ascii');
fclose(fileID);

%%
% testload = load('output_binary.txt');



% Open the file for reading
fileID = fopen('output_binary.txt', 'r');

% Read the data as strings into a cell array
dataCellArray = textscan(fileID, '%s');

% Close the file
fclose(fileID);

% Convert the cell array to a string array (if you're using MATLAB R2016b or later)
binaryStrings = string(dataCellArray{1});

for i=1:length(binaryStrings)
% Convert the binary string to a uint32 number
    binaryUint = uint32(bin2dec(binaryStrings(i)));
    
    % Use typecast to reinterpret the uint32 bits as a single-precision float
    floatNum = typecast(binaryUint, 'single');
    disp(floatNum) % everything is multiplied by minus
end







