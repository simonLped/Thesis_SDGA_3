
Data_start = 6625176;
Data = squeeze(out.logsout{1}.Values.Data);
Data_cut = Data(Data_start+1:Data_start+6);

%%

% Define an example uint32 signal value
uint32_signal = uint32(Data_cut(1));  % Large example value

% Step 1: Convert uint32 to unsigned fixed-point, fixdt(0,47,15)
fi_unsigned = fi(uint32_signal, 0, 47, 15);  % '0' for unsigned, 47 total bits, 15 fractional bits

% Display the initial fixed-point value
fprintf('Initial Fixed-Point Value (fixdt(0,47,15)):\n');
fprintf('Decimal: %f\n', double(fi_unsigned));
fprintf('Binary: %s\n\n', bin(fi_unsigned));

% Step 2: Perform a 15-bit right logical shift
shifted_fi_unsigned = bitsrl(fi_unsigned, 15);  % Using bitsrl to ensure it's a logical shift

% Display the shifted value
fprintf('Value after 15-bit Logical Right Shift:\n');
fprintf('Decimal: %f\n', double(shifted_fi_unsigned));
fprintf('Binary: %s\n\n', bin(shifted_fi_unsigned));

% Step 3: Convert to signed fixed-point, fixdt(1,18,15)
fi_signed = fi(double(shifted_fi_unsigned), 1, 18, 15);  % '1' for signed

% Display the final fixed-point value
fprintf('Converted Fixed-Point Value (fixdt(1,18,15)):\n');
fprintf('Decimal: %f\n', double(fi_signed));
fprintf('Binary: %s\n', bin(fi_signed));
