// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.1 (win64) Build 3865809 Sun May  7 15:05:29 MDT 2023
// Date        : Wed Apr 24 16:06:02 2024
// Host        : DESKTOP-4RDNORI running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               c:/Users/Simon/Documents/VIVADO_projects/project_2/project_2.gen/sources_1/bd/zynq_example/ip/zynq_example_blk_mem_gen_0_0/zynq_example_blk_mem_gen_0_0_sim_netlist.v
// Design      : zynq_example_blk_mem_gen_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z010clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "zynq_example_blk_mem_gen_0_0,blk_mem_gen_v8_4_6,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_6,Vivado 2023.1" *) 
(* NotValidForBitStream *)
module zynq_example_blk_mem_gen_0_0
   (clka,
    rsta,
    ena,
    wea,
    addra,
    dina,
    douta,
    rsta_busy);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE BRAM_CTRL, READ_WRITE_MODE READ_WRITE, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA RST" *) input rsta;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA WE" *) input [3:0]wea;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [31:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DIN" *) input [31:0]dina;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [31:0]douta;
  output rsta_busy;

  wire [31:0]addra;
  wire clka;
  wire [31:0]dina;
  wire [31:0]douta;
  wire ena;
  wire rsta;
  wire rsta_busy;
  wire [3:0]wea;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_rstb_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_dbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_sbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire [31:0]NLW_U0_doutb_UNCONNECTED;
  wire [31:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [31:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [31:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "32" *) 
  (* C_ADDRB_WIDTH = "32" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "8" *) 
  (* C_COMMON_CLK = "0" *) 
  (* C_COUNT_18K_BRAM = "0" *) 
  (* C_COUNT_36K_BRAM = "2" *) 
  (* C_CTRL_ECC_ALGO = "NONE" *) 
  (* C_DEFAULT_DATA = "0" *) 
  (* C_DISABLE_WARN_BHV_COLL = "0" *) 
  (* C_DISABLE_WARN_BHV_RANGE = "0" *) 
  (* C_ELABORATION_DIR = "./" *) 
  (* C_ENABLE_32BIT_ADDRESS = "1" *) 
  (* C_EN_DEEPSLEEP_PIN = "0" *) 
  (* C_EN_ECC_PIPE = "0" *) 
  (* C_EN_RDADDRA_CHG = "0" *) 
  (* C_EN_RDADDRB_CHG = "0" *) 
  (* C_EN_SAFETY_CKT = "1" *) 
  (* C_EN_SHUTDOWN_PIN = "0" *) 
  (* C_EN_SLEEP_PIN = "0" *) 
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     5.3746 mW" *) 
  (* C_FAMILY = "zynq" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_ENA = "1" *) 
  (* C_HAS_ENB = "0" *) 
  (* C_HAS_INJECTERR = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_REGCEA = "0" *) 
  (* C_HAS_REGCEB = "0" *) 
  (* C_HAS_RSTA = "1" *) 
  (* C_HAS_RSTB = "0" *) 
  (* C_HAS_SOFTECC_INPUT_REGS_A = "0" *) 
  (* C_HAS_SOFTECC_OUTPUT_REGS_B = "0" *) 
  (* C_INITA_VAL = "0" *) 
  (* C_INITB_VAL = "0" *) 
  (* C_INIT_FILE = "NONE" *) 
  (* C_INIT_FILE_NAME = "no_coe_file_loaded" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "0" *) 
  (* C_MEM_TYPE = "0" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "2048" *) 
  (* C_READ_DEPTH_B = "2048" *) 
  (* C_READ_LATENCY_A = "1" *) 
  (* C_READ_LATENCY_B = "1" *) 
  (* C_READ_WIDTH_A = "32" *) 
  (* C_READ_WIDTH_B = "32" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "1" *) 
  (* C_USE_BYTE_WEA = "1" *) 
  (* C_USE_BYTE_WEB = "1" *) 
  (* C_USE_DEFAULT_DATA = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "4" *) 
  (* C_WEB_WIDTH = "4" *) 
  (* C_WRITE_DEPTH_A = "2048" *) 
  (* C_WRITE_DEPTH_B = "2048" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "32" *) 
  (* C_WRITE_WIDTH_B = "32" *) 
  (* C_XDEVICEFAMILY = "zynq" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  zynq_example_blk_mem_gen_0_0_blk_mem_gen_v8_4_6 U0
       (.addra({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,addra[12:2],1'b0,1'b0}),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina(dina),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[31:0]),
        .eccpipece(1'b0),
        .ena(ena),
        .enb(1'b0),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[31:0]),
        .regcea(1'b0),
        .regceb(1'b0),
        .rsta(rsta),
        .rsta_busy(rsta_busy),
        .rstb(1'b0),
        .rstb_busy(NLW_U0_rstb_busy_UNCONNECTED),
        .s_aclk(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_dbiterr(NLW_U0_s_axi_dbiterr_UNCONNECTED),
        .s_axi_injectdbiterr(1'b0),
        .s_axi_injectsbiterr(1'b0),
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[31:0]),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[31:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(wea),
        .web({1'b0,1'b0,1'b0,1'b0}));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2023.1"
`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
aMT3usC6uizzcwnzOCX4OsS16Ob+YxFcsGovFpFklbnaIaD1S0lVdxenTwHPp6ByIEi+ehwr6Rgg
z/3AlTheI5NFTM8ihiMA18/wmUxI7EbaftJACA1LykUKCuj5myy0T+DACuv3sGYIZS38TZTZnnBC
FGAlvTZmRWs+JzneH3o=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
lR9ZerhYSAb39nzEkeYvhnwEs5t9y/+yTDf8KuoUtR1BGeHZq8pA/YxtjzQLtaOW1R1IQUb0FtSI
e3CYAb7WHYbIjcpw3vKHvW1SqcGn9CMGa556CYKmD2oF12Kow8xRaFvMSBUVxX7HsHxNWnRd+PU1
+C0YayU2KFIY/7Yl6cZ5luAzhw/6SW3PFYUIyyqWy5MCIXweHOwQR2IpQEdlDur5nluN7i7BeB+i
fxwwHh8TU/g7T4mhZFkiTuBKdLAtQOjxWxzqTMxgcuAjlTylY16FgMFOASdvvSbqBZJjbxMdVloU
rYjS8O/8rWktv8GXcaIdBJ2BRj01q7jsChsbwA==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
Qvl63GHz9mq2xOB7elt/vAQ7URLGdD1Lkcz7f3Wtw31dwjjjbP62Ny/Jr6OmBIheWlgejx38qxAT
TrHiiEyjKmGcnPn1Tn2n+cH4RAxCbOFnCI9n6+YsYMTe9JkplGhGGr39SkFgJz0I2IKpPsuqTjCj
rhf49TAryNMQeRpREJA=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
MA+9Ro+dh339m0iZrkKbqTKN8gQ5xkxN/SPCfhkOn+5jjgCTS5IOKLHil+HsZDjX333ebxnornwG
MOBxyEdFfLM8SA+bs2r41J/j0af2VVMmCM3hOh8JmZxB4X9Jg/glegNCbvwzqxMbOQNEy+zt7j5t
TFVD82RtPFmYVVYZZyll/WvAA+0aVpyjzLCIM1GznFky0RWLv65Wp4MJJnNRRrtG3muMznVO/u2s
tACsJ9jzv9M0IlMYjYH9BixhG6cZX02I4LEXXaPkhdOINlMMhsbArXtc9NphzmS4bY1/1yF1D6YD
EKLyS2Sr3HDl0O/lefN+jvfG8iKuVl55PNNrVQ==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
wpMTg7STjFkUDhOqdNPa0FHXTnHQgKmhvqDv+rRVBvMiQ8O7u8oj7ibITq3o+jugJsMJ60B410gQ
JFTcqCJKYmYJvqi8rPLLOYDmFG6ZLP/Ixr3n62IyIaCeDltBahi3yV009QN0X+iuzuFCL+Y7g9ff
IvAgyBly+Z3Itv2H9EJMZPMl17Sa7IkgjmWqzVXIKNMKn0iDVYsQw6ZgzQDYQ8N8IvTIEggU3/lh
6Nf0hV0ev3qOv/2P+4w0U766Ux3yLuzPJSI7bKm3/ip9NjhOytxOiKKqVXhKG8dzbbuS5u3EE/eq
q6YxkL7gpvNltVqqBnJB6vHSyWrD6+MqsCtR9A==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2022_10", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Q7Q4SSp70lxFryaopuic9VVP/Ire0pSsPEIMYdURBAczC7ShkuYeV02U7L3BlAiyBE4vBKcwYSQd
cWiaj8sVP7q4kxoRHKxLV1R5PIO6l4DsLWE2E+1MLyUPME0w5KTular/oX8EPCJ5n/8VCtW7x4Vf
dpeyki1/IAPJkAyi3zVZKHzgKhEwnZaZZtZYuMWoPZMt4V38sAcE42Raf+7yfFWG5HO74JY6iEnW
gJeRk58K+avB/XLF2/j2RQZfjTYizrprT2tUMBK6e7DRWZZtk8AOcsMhUikev44IFGNbNXjP8BXC
0J3y3P7pCFT6l+saU83nRwi/H25fSA34diJtNw==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
a/8ooC+s+6nfvfa1+oBhsvYWLJjFgp83DI1kNyOi5Am+ugPbGRmgGZudfyo6yw6Yd5gGbLm5aToQ
5G4cGF5HaXD5TU6A0ZZFMTIbzFLE76JMjjIxX8JcaJIZpSmrXqlru8l5gDINUEAmwUY3mRQnjcGJ
0Z+kMRH8iAEF+gEviPiFZSBbJeOPqivIS217kimQJX3BeNbNPQTP+GUidcRywpGMh5avxtA0kDRO
F9SoCSyTm9hr2v9hsK1IUAYQLb7n2/R+z5YNKNzt1oN4qgJH1wZfdI8if2K8+ohyOdnxrrgJOWdj
cOqr7cGqEOYfBMTIQeHVZzb7NGWVN+9B8XSUaQ==

`pragma protect key_keyowner="Atrenta", key_keyname="ATR-SG-RSA-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=384)
`pragma protect key_block
FLPvOUNRWNW2GU+FEGmt2XWthOT5bY/31DRbol2cUmEGNF6b2XzpCosNKGx/o2n6sQvGP39KRFCs
nJu0ihe2dUGee9nEZZUcpwPjnEfXVI3yJaRVYy8iL+rm59lXq0jX4sjAPieDvv8shgAnoXLTZGlq
K+2c1JhaHt+nFi27TDrYar/+P8nP1MhocOS7BjzCvSs0foEXj92/qD+71Sm/LqGr8cjlH2qTJJ8B
ynxoH6iT+bksVA2VbtPT9o6h1kJ/zwP4wcsL9l+qSlJhd4GI11JPux26DlNyIi41WmufQcfiT0PB
r6O9+0E9lV9ODwKdjaxfZRK29rjKeq2yr0jWhMV38XKKqHAJli7MIypGRXcCo+u89H87KgYt+ebw
s3foIqCe0JKR57WzI8VD6XdNtOL8eBxK539oemx4vkE0cGYECZKYru6A2hPeZOYDD5eyWSUlQl1R
EciK49WM8HnssyRVcmE6di6bISMbVi0TZG/v98bz+9UZa8DtqMVYH0tz

`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="CDS_RSA_KEY_VER_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
fphquQOeFuqByo36Gh2C1zEC1J6u9swSMbMzsKldIvLm+SZ6/hr/N8KJ/G2vBABzX6UtbVuP1ZXx
AxdftP4Aqis1B3Bs6989aQG9eo0SOHA7r6aFLtFb3qoD5Pvqw4aVNU4z4EtTpFpn/jCWD21lKROf
q5X32HRfFq1jwqod+9vIbUNRRzz5y9VHvXfacZlxDazSPmcCF4hxB1KqWqT44KmYVkDedgkgnYgb
ZGidHnTb3W7C8tSqC9ac4kNJCL429QndtddweESJNlpX+65pt9Irok9pkOodwoj0QScswOIFjhBZ
/GrzZLQcFWiD3gXRU4DazzxQnGdRH4qEIRWziw==

`pragma protect key_keyowner="Synplicity", key_keyname="SYNP15_1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
1lUYYHPCt1BUJOvcBbgMU2GSQiqfxItz4ntieMaenjrtsE9SLwaU6xB0tBl8Atw5yP/RRNww1kX/
9uZbTz5He3r9mPVt+mGxB4N3f9BbCrQRb4USVPgKO/+vWUfMQERGklScy0+fz75WuxH74CjRUoDI
8iyssb2cUNnfDe13jIoI8gM1w4w/Pkxkmb6Mef53QMxacHAWEZeytcH3fuL/adO263D8P90U3XJv
vBXJmbjkRVi9qzjBzfMxuOy2KbZaZgR3BLzaffIfFnMwg/Rb8sGls5pQsZv5jL2wk3+Bj3OXBYdd
pDyjGoalJBzObKzd/t15kNHwY4FXYFcZLQPncw==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-PREC-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
YRmSEzaa2WFVvMH1BwWc1TIUpVbzSEIP0VbI6n0sEgct/X4PiTfMQmK1jBVCaISIzwBxscKQwZOt
mb/nmINGg6I7ih39LSbBMtx6cdCUiyaLkPeRbqfyPpKhvnUIFmdKVvTd1dYzxeOeuDnhSVaBaAcN
3lngSg7lIbmhLIGjC29yQrBTiLArbVZi6IRGronMK51e3UrYa6GspsznhiuRcXjEb4bHKrJ2CM5Z
BUwA+E9949sQgyOagFZbLVle2ESbwBaoxcAPn2gxfRHlT0leqyLgUGDZLsfArzGzw9BTGzyEG2TR
XOrKFNYRfMXMrnGsBM7acIelY4LdAMgsKgDH/A==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 52864)
`pragma protect data_block
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
nprx3msNFzfSwccTBk4yXqO6vWEJqwofAw==
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
