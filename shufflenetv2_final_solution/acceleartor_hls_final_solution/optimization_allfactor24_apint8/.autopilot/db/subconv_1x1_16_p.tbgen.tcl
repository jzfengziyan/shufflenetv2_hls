set moduleName subconv_1x1_16_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {subconv_1x1_16_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 8 regular {array 7776 { 1 3 } 1 1 }  }
	{ weight_0_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_1_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_2_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_3_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_4_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_5_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_6_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_7_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_8_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_9_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_10_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_11_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_12_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_13_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_14_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_15_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_16_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_17_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_18_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_19_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_20_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_21_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_22_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ weight_23_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ bias_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ buffer1_1_24_16x16_p_23 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_19 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_22 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_18 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_11 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_17 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_6 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_16 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_5 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_15 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_4 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_14 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_3 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_13 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_2 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_12 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_1 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_10 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_9 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_21 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_8 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_20 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
	{ buffer1_1_24_16x16_p_7 int 8 regular {array 324 { 2 0 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_7_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_8_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_9_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_10_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_11_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_12_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_13_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_14_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_15_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_16_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_17_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_18_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_19_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_20_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_21_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_22_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_23_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "buffer1_1_24_16x16_p_23", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_19", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_22", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_18", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_17", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_16", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_21", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_20", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 300
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_V_address0 sc_out sc_lv 13 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_q0 sc_in sc_lv 8 signal 0 } 
	{ weight_0_V_address0 sc_out sc_lv 5 signal 1 } 
	{ weight_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weight_0_V_q0 sc_in sc_lv 8 signal 1 } 
	{ weight_1_V_address0 sc_out sc_lv 5 signal 2 } 
	{ weight_1_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ weight_1_V_q0 sc_in sc_lv 8 signal 2 } 
	{ weight_2_V_address0 sc_out sc_lv 5 signal 3 } 
	{ weight_2_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ weight_2_V_q0 sc_in sc_lv 8 signal 3 } 
	{ weight_3_V_address0 sc_out sc_lv 5 signal 4 } 
	{ weight_3_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ weight_3_V_q0 sc_in sc_lv 8 signal 4 } 
	{ weight_4_V_address0 sc_out sc_lv 5 signal 5 } 
	{ weight_4_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ weight_4_V_q0 sc_in sc_lv 8 signal 5 } 
	{ weight_5_V_address0 sc_out sc_lv 5 signal 6 } 
	{ weight_5_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ weight_5_V_q0 sc_in sc_lv 8 signal 6 } 
	{ weight_6_V_address0 sc_out sc_lv 5 signal 7 } 
	{ weight_6_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ weight_6_V_q0 sc_in sc_lv 8 signal 7 } 
	{ weight_7_V_address0 sc_out sc_lv 5 signal 8 } 
	{ weight_7_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ weight_7_V_q0 sc_in sc_lv 8 signal 8 } 
	{ weight_8_V_address0 sc_out sc_lv 5 signal 9 } 
	{ weight_8_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ weight_8_V_q0 sc_in sc_lv 8 signal 9 } 
	{ weight_9_V_address0 sc_out sc_lv 5 signal 10 } 
	{ weight_9_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ weight_9_V_q0 sc_in sc_lv 8 signal 10 } 
	{ weight_10_V_address0 sc_out sc_lv 5 signal 11 } 
	{ weight_10_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ weight_10_V_q0 sc_in sc_lv 8 signal 11 } 
	{ weight_11_V_address0 sc_out sc_lv 5 signal 12 } 
	{ weight_11_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ weight_11_V_q0 sc_in sc_lv 8 signal 12 } 
	{ weight_12_V_address0 sc_out sc_lv 5 signal 13 } 
	{ weight_12_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ weight_12_V_q0 sc_in sc_lv 8 signal 13 } 
	{ weight_13_V_address0 sc_out sc_lv 5 signal 14 } 
	{ weight_13_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ weight_13_V_q0 sc_in sc_lv 8 signal 14 } 
	{ weight_14_V_address0 sc_out sc_lv 5 signal 15 } 
	{ weight_14_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ weight_14_V_q0 sc_in sc_lv 8 signal 15 } 
	{ weight_15_V_address0 sc_out sc_lv 5 signal 16 } 
	{ weight_15_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ weight_15_V_q0 sc_in sc_lv 8 signal 16 } 
	{ weight_16_V_address0 sc_out sc_lv 5 signal 17 } 
	{ weight_16_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ weight_16_V_q0 sc_in sc_lv 8 signal 17 } 
	{ weight_17_V_address0 sc_out sc_lv 5 signal 18 } 
	{ weight_17_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ weight_17_V_q0 sc_in sc_lv 8 signal 18 } 
	{ weight_18_V_address0 sc_out sc_lv 5 signal 19 } 
	{ weight_18_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ weight_18_V_q0 sc_in sc_lv 8 signal 19 } 
	{ weight_19_V_address0 sc_out sc_lv 5 signal 20 } 
	{ weight_19_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ weight_19_V_q0 sc_in sc_lv 8 signal 20 } 
	{ weight_20_V_address0 sc_out sc_lv 5 signal 21 } 
	{ weight_20_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ weight_20_V_q0 sc_in sc_lv 8 signal 21 } 
	{ weight_21_V_address0 sc_out sc_lv 5 signal 22 } 
	{ weight_21_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ weight_21_V_q0 sc_in sc_lv 8 signal 22 } 
	{ weight_22_V_address0 sc_out sc_lv 5 signal 23 } 
	{ weight_22_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ weight_22_V_q0 sc_in sc_lv 8 signal 23 } 
	{ weight_23_V_address0 sc_out sc_lv 5 signal 24 } 
	{ weight_23_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ weight_23_V_q0 sc_in sc_lv 8 signal 24 } 
	{ bias_V_address0 sc_out sc_lv 5 signal 25 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 25 } 
	{ buffer1_1_24_16x16_p_23_address0 sc_out sc_lv 9 signal 26 } 
	{ buffer1_1_24_16x16_p_23_ce0 sc_out sc_logic 1 signal 26 } 
	{ buffer1_1_24_16x16_p_23_we0 sc_out sc_logic 1 signal 26 } 
	{ buffer1_1_24_16x16_p_23_d0 sc_out sc_lv 8 signal 26 } 
	{ buffer1_1_24_16x16_p_23_q0 sc_in sc_lv 8 signal 26 } 
	{ buffer1_1_24_16x16_p_23_address1 sc_out sc_lv 9 signal 26 } 
	{ buffer1_1_24_16x16_p_23_ce1 sc_out sc_logic 1 signal 26 } 
	{ buffer1_1_24_16x16_p_23_we1 sc_out sc_logic 1 signal 26 } 
	{ buffer1_1_24_16x16_p_23_d1 sc_out sc_lv 8 signal 26 } 
	{ buffer1_1_24_16x16_p_19_address0 sc_out sc_lv 9 signal 27 } 
	{ buffer1_1_24_16x16_p_19_ce0 sc_out sc_logic 1 signal 27 } 
	{ buffer1_1_24_16x16_p_19_we0 sc_out sc_logic 1 signal 27 } 
	{ buffer1_1_24_16x16_p_19_d0 sc_out sc_lv 8 signal 27 } 
	{ buffer1_1_24_16x16_p_19_q0 sc_in sc_lv 8 signal 27 } 
	{ buffer1_1_24_16x16_p_19_address1 sc_out sc_lv 9 signal 27 } 
	{ buffer1_1_24_16x16_p_19_ce1 sc_out sc_logic 1 signal 27 } 
	{ buffer1_1_24_16x16_p_19_we1 sc_out sc_logic 1 signal 27 } 
	{ buffer1_1_24_16x16_p_19_d1 sc_out sc_lv 8 signal 27 } 
	{ buffer1_1_24_16x16_p_22_address0 sc_out sc_lv 9 signal 28 } 
	{ buffer1_1_24_16x16_p_22_ce0 sc_out sc_logic 1 signal 28 } 
	{ buffer1_1_24_16x16_p_22_we0 sc_out sc_logic 1 signal 28 } 
	{ buffer1_1_24_16x16_p_22_d0 sc_out sc_lv 8 signal 28 } 
	{ buffer1_1_24_16x16_p_22_q0 sc_in sc_lv 8 signal 28 } 
	{ buffer1_1_24_16x16_p_22_address1 sc_out sc_lv 9 signal 28 } 
	{ buffer1_1_24_16x16_p_22_ce1 sc_out sc_logic 1 signal 28 } 
	{ buffer1_1_24_16x16_p_22_we1 sc_out sc_logic 1 signal 28 } 
	{ buffer1_1_24_16x16_p_22_d1 sc_out sc_lv 8 signal 28 } 
	{ buffer1_1_24_16x16_p_18_address0 sc_out sc_lv 9 signal 29 } 
	{ buffer1_1_24_16x16_p_18_ce0 sc_out sc_logic 1 signal 29 } 
	{ buffer1_1_24_16x16_p_18_we0 sc_out sc_logic 1 signal 29 } 
	{ buffer1_1_24_16x16_p_18_d0 sc_out sc_lv 8 signal 29 } 
	{ buffer1_1_24_16x16_p_18_q0 sc_in sc_lv 8 signal 29 } 
	{ buffer1_1_24_16x16_p_18_address1 sc_out sc_lv 9 signal 29 } 
	{ buffer1_1_24_16x16_p_18_ce1 sc_out sc_logic 1 signal 29 } 
	{ buffer1_1_24_16x16_p_18_we1 sc_out sc_logic 1 signal 29 } 
	{ buffer1_1_24_16x16_p_18_d1 sc_out sc_lv 8 signal 29 } 
	{ buffer1_1_24_16x16_p_11_address0 sc_out sc_lv 9 signal 30 } 
	{ buffer1_1_24_16x16_p_11_ce0 sc_out sc_logic 1 signal 30 } 
	{ buffer1_1_24_16x16_p_11_we0 sc_out sc_logic 1 signal 30 } 
	{ buffer1_1_24_16x16_p_11_d0 sc_out sc_lv 8 signal 30 } 
	{ buffer1_1_24_16x16_p_11_q0 sc_in sc_lv 8 signal 30 } 
	{ buffer1_1_24_16x16_p_11_address1 sc_out sc_lv 9 signal 30 } 
	{ buffer1_1_24_16x16_p_11_ce1 sc_out sc_logic 1 signal 30 } 
	{ buffer1_1_24_16x16_p_11_we1 sc_out sc_logic 1 signal 30 } 
	{ buffer1_1_24_16x16_p_11_d1 sc_out sc_lv 8 signal 30 } 
	{ buffer1_1_24_16x16_p_17_address0 sc_out sc_lv 9 signal 31 } 
	{ buffer1_1_24_16x16_p_17_ce0 sc_out sc_logic 1 signal 31 } 
	{ buffer1_1_24_16x16_p_17_we0 sc_out sc_logic 1 signal 31 } 
	{ buffer1_1_24_16x16_p_17_d0 sc_out sc_lv 8 signal 31 } 
	{ buffer1_1_24_16x16_p_17_q0 sc_in sc_lv 8 signal 31 } 
	{ buffer1_1_24_16x16_p_17_address1 sc_out sc_lv 9 signal 31 } 
	{ buffer1_1_24_16x16_p_17_ce1 sc_out sc_logic 1 signal 31 } 
	{ buffer1_1_24_16x16_p_17_we1 sc_out sc_logic 1 signal 31 } 
	{ buffer1_1_24_16x16_p_17_d1 sc_out sc_lv 8 signal 31 } 
	{ buffer1_1_24_16x16_p_6_address0 sc_out sc_lv 9 signal 32 } 
	{ buffer1_1_24_16x16_p_6_ce0 sc_out sc_logic 1 signal 32 } 
	{ buffer1_1_24_16x16_p_6_we0 sc_out sc_logic 1 signal 32 } 
	{ buffer1_1_24_16x16_p_6_d0 sc_out sc_lv 8 signal 32 } 
	{ buffer1_1_24_16x16_p_6_q0 sc_in sc_lv 8 signal 32 } 
	{ buffer1_1_24_16x16_p_6_address1 sc_out sc_lv 9 signal 32 } 
	{ buffer1_1_24_16x16_p_6_ce1 sc_out sc_logic 1 signal 32 } 
	{ buffer1_1_24_16x16_p_6_we1 sc_out sc_logic 1 signal 32 } 
	{ buffer1_1_24_16x16_p_6_d1 sc_out sc_lv 8 signal 32 } 
	{ buffer1_1_24_16x16_p_16_address0 sc_out sc_lv 9 signal 33 } 
	{ buffer1_1_24_16x16_p_16_ce0 sc_out sc_logic 1 signal 33 } 
	{ buffer1_1_24_16x16_p_16_we0 sc_out sc_logic 1 signal 33 } 
	{ buffer1_1_24_16x16_p_16_d0 sc_out sc_lv 8 signal 33 } 
	{ buffer1_1_24_16x16_p_16_q0 sc_in sc_lv 8 signal 33 } 
	{ buffer1_1_24_16x16_p_16_address1 sc_out sc_lv 9 signal 33 } 
	{ buffer1_1_24_16x16_p_16_ce1 sc_out sc_logic 1 signal 33 } 
	{ buffer1_1_24_16x16_p_16_we1 sc_out sc_logic 1 signal 33 } 
	{ buffer1_1_24_16x16_p_16_d1 sc_out sc_lv 8 signal 33 } 
	{ buffer1_1_24_16x16_p_5_address0 sc_out sc_lv 9 signal 34 } 
	{ buffer1_1_24_16x16_p_5_ce0 sc_out sc_logic 1 signal 34 } 
	{ buffer1_1_24_16x16_p_5_we0 sc_out sc_logic 1 signal 34 } 
	{ buffer1_1_24_16x16_p_5_d0 sc_out sc_lv 8 signal 34 } 
	{ buffer1_1_24_16x16_p_5_q0 sc_in sc_lv 8 signal 34 } 
	{ buffer1_1_24_16x16_p_5_address1 sc_out sc_lv 9 signal 34 } 
	{ buffer1_1_24_16x16_p_5_ce1 sc_out sc_logic 1 signal 34 } 
	{ buffer1_1_24_16x16_p_5_we1 sc_out sc_logic 1 signal 34 } 
	{ buffer1_1_24_16x16_p_5_d1 sc_out sc_lv 8 signal 34 } 
	{ buffer1_1_24_16x16_p_15_address0 sc_out sc_lv 9 signal 35 } 
	{ buffer1_1_24_16x16_p_15_ce0 sc_out sc_logic 1 signal 35 } 
	{ buffer1_1_24_16x16_p_15_we0 sc_out sc_logic 1 signal 35 } 
	{ buffer1_1_24_16x16_p_15_d0 sc_out sc_lv 8 signal 35 } 
	{ buffer1_1_24_16x16_p_15_q0 sc_in sc_lv 8 signal 35 } 
	{ buffer1_1_24_16x16_p_15_address1 sc_out sc_lv 9 signal 35 } 
	{ buffer1_1_24_16x16_p_15_ce1 sc_out sc_logic 1 signal 35 } 
	{ buffer1_1_24_16x16_p_15_we1 sc_out sc_logic 1 signal 35 } 
	{ buffer1_1_24_16x16_p_15_d1 sc_out sc_lv 8 signal 35 } 
	{ buffer1_1_24_16x16_p_4_address0 sc_out sc_lv 9 signal 36 } 
	{ buffer1_1_24_16x16_p_4_ce0 sc_out sc_logic 1 signal 36 } 
	{ buffer1_1_24_16x16_p_4_we0 sc_out sc_logic 1 signal 36 } 
	{ buffer1_1_24_16x16_p_4_d0 sc_out sc_lv 8 signal 36 } 
	{ buffer1_1_24_16x16_p_4_q0 sc_in sc_lv 8 signal 36 } 
	{ buffer1_1_24_16x16_p_4_address1 sc_out sc_lv 9 signal 36 } 
	{ buffer1_1_24_16x16_p_4_ce1 sc_out sc_logic 1 signal 36 } 
	{ buffer1_1_24_16x16_p_4_we1 sc_out sc_logic 1 signal 36 } 
	{ buffer1_1_24_16x16_p_4_d1 sc_out sc_lv 8 signal 36 } 
	{ buffer1_1_24_16x16_p_14_address0 sc_out sc_lv 9 signal 37 } 
	{ buffer1_1_24_16x16_p_14_ce0 sc_out sc_logic 1 signal 37 } 
	{ buffer1_1_24_16x16_p_14_we0 sc_out sc_logic 1 signal 37 } 
	{ buffer1_1_24_16x16_p_14_d0 sc_out sc_lv 8 signal 37 } 
	{ buffer1_1_24_16x16_p_14_q0 sc_in sc_lv 8 signal 37 } 
	{ buffer1_1_24_16x16_p_14_address1 sc_out sc_lv 9 signal 37 } 
	{ buffer1_1_24_16x16_p_14_ce1 sc_out sc_logic 1 signal 37 } 
	{ buffer1_1_24_16x16_p_14_we1 sc_out sc_logic 1 signal 37 } 
	{ buffer1_1_24_16x16_p_14_d1 sc_out sc_lv 8 signal 37 } 
	{ buffer1_1_24_16x16_p_3_address0 sc_out sc_lv 9 signal 38 } 
	{ buffer1_1_24_16x16_p_3_ce0 sc_out sc_logic 1 signal 38 } 
	{ buffer1_1_24_16x16_p_3_we0 sc_out sc_logic 1 signal 38 } 
	{ buffer1_1_24_16x16_p_3_d0 sc_out sc_lv 8 signal 38 } 
	{ buffer1_1_24_16x16_p_3_q0 sc_in sc_lv 8 signal 38 } 
	{ buffer1_1_24_16x16_p_3_address1 sc_out sc_lv 9 signal 38 } 
	{ buffer1_1_24_16x16_p_3_ce1 sc_out sc_logic 1 signal 38 } 
	{ buffer1_1_24_16x16_p_3_we1 sc_out sc_logic 1 signal 38 } 
	{ buffer1_1_24_16x16_p_3_d1 sc_out sc_lv 8 signal 38 } 
	{ buffer1_1_24_16x16_p_13_address0 sc_out sc_lv 9 signal 39 } 
	{ buffer1_1_24_16x16_p_13_ce0 sc_out sc_logic 1 signal 39 } 
	{ buffer1_1_24_16x16_p_13_we0 sc_out sc_logic 1 signal 39 } 
	{ buffer1_1_24_16x16_p_13_d0 sc_out sc_lv 8 signal 39 } 
	{ buffer1_1_24_16x16_p_13_q0 sc_in sc_lv 8 signal 39 } 
	{ buffer1_1_24_16x16_p_13_address1 sc_out sc_lv 9 signal 39 } 
	{ buffer1_1_24_16x16_p_13_ce1 sc_out sc_logic 1 signal 39 } 
	{ buffer1_1_24_16x16_p_13_we1 sc_out sc_logic 1 signal 39 } 
	{ buffer1_1_24_16x16_p_13_d1 sc_out sc_lv 8 signal 39 } 
	{ buffer1_1_24_16x16_p_2_address0 sc_out sc_lv 9 signal 40 } 
	{ buffer1_1_24_16x16_p_2_ce0 sc_out sc_logic 1 signal 40 } 
	{ buffer1_1_24_16x16_p_2_we0 sc_out sc_logic 1 signal 40 } 
	{ buffer1_1_24_16x16_p_2_d0 sc_out sc_lv 8 signal 40 } 
	{ buffer1_1_24_16x16_p_2_q0 sc_in sc_lv 8 signal 40 } 
	{ buffer1_1_24_16x16_p_2_address1 sc_out sc_lv 9 signal 40 } 
	{ buffer1_1_24_16x16_p_2_ce1 sc_out sc_logic 1 signal 40 } 
	{ buffer1_1_24_16x16_p_2_we1 sc_out sc_logic 1 signal 40 } 
	{ buffer1_1_24_16x16_p_2_d1 sc_out sc_lv 8 signal 40 } 
	{ buffer1_1_24_16x16_p_12_address0 sc_out sc_lv 9 signal 41 } 
	{ buffer1_1_24_16x16_p_12_ce0 sc_out sc_logic 1 signal 41 } 
	{ buffer1_1_24_16x16_p_12_we0 sc_out sc_logic 1 signal 41 } 
	{ buffer1_1_24_16x16_p_12_d0 sc_out sc_lv 8 signal 41 } 
	{ buffer1_1_24_16x16_p_12_q0 sc_in sc_lv 8 signal 41 } 
	{ buffer1_1_24_16x16_p_12_address1 sc_out sc_lv 9 signal 41 } 
	{ buffer1_1_24_16x16_p_12_ce1 sc_out sc_logic 1 signal 41 } 
	{ buffer1_1_24_16x16_p_12_we1 sc_out sc_logic 1 signal 41 } 
	{ buffer1_1_24_16x16_p_12_d1 sc_out sc_lv 8 signal 41 } 
	{ buffer1_1_24_16x16_p_1_address0 sc_out sc_lv 9 signal 42 } 
	{ buffer1_1_24_16x16_p_1_ce0 sc_out sc_logic 1 signal 42 } 
	{ buffer1_1_24_16x16_p_1_we0 sc_out sc_logic 1 signal 42 } 
	{ buffer1_1_24_16x16_p_1_d0 sc_out sc_lv 8 signal 42 } 
	{ buffer1_1_24_16x16_p_1_q0 sc_in sc_lv 8 signal 42 } 
	{ buffer1_1_24_16x16_p_1_address1 sc_out sc_lv 9 signal 42 } 
	{ buffer1_1_24_16x16_p_1_ce1 sc_out sc_logic 1 signal 42 } 
	{ buffer1_1_24_16x16_p_1_we1 sc_out sc_logic 1 signal 42 } 
	{ buffer1_1_24_16x16_p_1_d1 sc_out sc_lv 8 signal 42 } 
	{ buffer1_1_24_16x16_p_10_address0 sc_out sc_lv 9 signal 43 } 
	{ buffer1_1_24_16x16_p_10_ce0 sc_out sc_logic 1 signal 43 } 
	{ buffer1_1_24_16x16_p_10_we0 sc_out sc_logic 1 signal 43 } 
	{ buffer1_1_24_16x16_p_10_d0 sc_out sc_lv 8 signal 43 } 
	{ buffer1_1_24_16x16_p_10_q0 sc_in sc_lv 8 signal 43 } 
	{ buffer1_1_24_16x16_p_10_address1 sc_out sc_lv 9 signal 43 } 
	{ buffer1_1_24_16x16_p_10_ce1 sc_out sc_logic 1 signal 43 } 
	{ buffer1_1_24_16x16_p_10_we1 sc_out sc_logic 1 signal 43 } 
	{ buffer1_1_24_16x16_p_10_d1 sc_out sc_lv 8 signal 43 } 
	{ buffer1_1_24_16x16_p_address0 sc_out sc_lv 9 signal 44 } 
	{ buffer1_1_24_16x16_p_ce0 sc_out sc_logic 1 signal 44 } 
	{ buffer1_1_24_16x16_p_we0 sc_out sc_logic 1 signal 44 } 
	{ buffer1_1_24_16x16_p_d0 sc_out sc_lv 8 signal 44 } 
	{ buffer1_1_24_16x16_p_q0 sc_in sc_lv 8 signal 44 } 
	{ buffer1_1_24_16x16_p_address1 sc_out sc_lv 9 signal 44 } 
	{ buffer1_1_24_16x16_p_ce1 sc_out sc_logic 1 signal 44 } 
	{ buffer1_1_24_16x16_p_we1 sc_out sc_logic 1 signal 44 } 
	{ buffer1_1_24_16x16_p_d1 sc_out sc_lv 8 signal 44 } 
	{ buffer1_1_24_16x16_p_9_address0 sc_out sc_lv 9 signal 45 } 
	{ buffer1_1_24_16x16_p_9_ce0 sc_out sc_logic 1 signal 45 } 
	{ buffer1_1_24_16x16_p_9_we0 sc_out sc_logic 1 signal 45 } 
	{ buffer1_1_24_16x16_p_9_d0 sc_out sc_lv 8 signal 45 } 
	{ buffer1_1_24_16x16_p_9_q0 sc_in sc_lv 8 signal 45 } 
	{ buffer1_1_24_16x16_p_9_address1 sc_out sc_lv 9 signal 45 } 
	{ buffer1_1_24_16x16_p_9_ce1 sc_out sc_logic 1 signal 45 } 
	{ buffer1_1_24_16x16_p_9_we1 sc_out sc_logic 1 signal 45 } 
	{ buffer1_1_24_16x16_p_9_d1 sc_out sc_lv 8 signal 45 } 
	{ buffer1_1_24_16x16_p_21_address0 sc_out sc_lv 9 signal 46 } 
	{ buffer1_1_24_16x16_p_21_ce0 sc_out sc_logic 1 signal 46 } 
	{ buffer1_1_24_16x16_p_21_we0 sc_out sc_logic 1 signal 46 } 
	{ buffer1_1_24_16x16_p_21_d0 sc_out sc_lv 8 signal 46 } 
	{ buffer1_1_24_16x16_p_21_q0 sc_in sc_lv 8 signal 46 } 
	{ buffer1_1_24_16x16_p_21_address1 sc_out sc_lv 9 signal 46 } 
	{ buffer1_1_24_16x16_p_21_ce1 sc_out sc_logic 1 signal 46 } 
	{ buffer1_1_24_16x16_p_21_we1 sc_out sc_logic 1 signal 46 } 
	{ buffer1_1_24_16x16_p_21_d1 sc_out sc_lv 8 signal 46 } 
	{ buffer1_1_24_16x16_p_8_address0 sc_out sc_lv 9 signal 47 } 
	{ buffer1_1_24_16x16_p_8_ce0 sc_out sc_logic 1 signal 47 } 
	{ buffer1_1_24_16x16_p_8_we0 sc_out sc_logic 1 signal 47 } 
	{ buffer1_1_24_16x16_p_8_d0 sc_out sc_lv 8 signal 47 } 
	{ buffer1_1_24_16x16_p_8_q0 sc_in sc_lv 8 signal 47 } 
	{ buffer1_1_24_16x16_p_8_address1 sc_out sc_lv 9 signal 47 } 
	{ buffer1_1_24_16x16_p_8_ce1 sc_out sc_logic 1 signal 47 } 
	{ buffer1_1_24_16x16_p_8_we1 sc_out sc_logic 1 signal 47 } 
	{ buffer1_1_24_16x16_p_8_d1 sc_out sc_lv 8 signal 47 } 
	{ buffer1_1_24_16x16_p_20_address0 sc_out sc_lv 9 signal 48 } 
	{ buffer1_1_24_16x16_p_20_ce0 sc_out sc_logic 1 signal 48 } 
	{ buffer1_1_24_16x16_p_20_we0 sc_out sc_logic 1 signal 48 } 
	{ buffer1_1_24_16x16_p_20_d0 sc_out sc_lv 8 signal 48 } 
	{ buffer1_1_24_16x16_p_20_q0 sc_in sc_lv 8 signal 48 } 
	{ buffer1_1_24_16x16_p_20_address1 sc_out sc_lv 9 signal 48 } 
	{ buffer1_1_24_16x16_p_20_ce1 sc_out sc_logic 1 signal 48 } 
	{ buffer1_1_24_16x16_p_20_we1 sc_out sc_logic 1 signal 48 } 
	{ buffer1_1_24_16x16_p_20_d1 sc_out sc_lv 8 signal 48 } 
	{ buffer1_1_24_16x16_p_7_address0 sc_out sc_lv 9 signal 49 } 
	{ buffer1_1_24_16x16_p_7_ce0 sc_out sc_logic 1 signal 49 } 
	{ buffer1_1_24_16x16_p_7_we0 sc_out sc_logic 1 signal 49 } 
	{ buffer1_1_24_16x16_p_7_d0 sc_out sc_lv 8 signal 49 } 
	{ buffer1_1_24_16x16_p_7_q0 sc_in sc_lv 8 signal 49 } 
	{ buffer1_1_24_16x16_p_7_address1 sc_out sc_lv 9 signal 49 } 
	{ buffer1_1_24_16x16_p_7_ce1 sc_out sc_logic 1 signal 49 } 
	{ buffer1_1_24_16x16_p_7_we1 sc_out sc_logic 1 signal 49 } 
	{ buffer1_1_24_16x16_p_7_d1 sc_out sc_lv 8 signal 49 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "weight_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_0_V", "role": "address0" }} , 
 	{ "name": "weight_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_0_V", "role": "ce0" }} , 
 	{ "name": "weight_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_0_V", "role": "q0" }} , 
 	{ "name": "weight_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_1_V", "role": "address0" }} , 
 	{ "name": "weight_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_1_V", "role": "ce0" }} , 
 	{ "name": "weight_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_1_V", "role": "q0" }} , 
 	{ "name": "weight_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_2_V", "role": "address0" }} , 
 	{ "name": "weight_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_2_V", "role": "ce0" }} , 
 	{ "name": "weight_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_2_V", "role": "q0" }} , 
 	{ "name": "weight_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_3_V", "role": "address0" }} , 
 	{ "name": "weight_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_3_V", "role": "ce0" }} , 
 	{ "name": "weight_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_3_V", "role": "q0" }} , 
 	{ "name": "weight_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_4_V", "role": "address0" }} , 
 	{ "name": "weight_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_4_V", "role": "ce0" }} , 
 	{ "name": "weight_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_4_V", "role": "q0" }} , 
 	{ "name": "weight_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_5_V", "role": "address0" }} , 
 	{ "name": "weight_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_5_V", "role": "ce0" }} , 
 	{ "name": "weight_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_5_V", "role": "q0" }} , 
 	{ "name": "weight_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_6_V", "role": "address0" }} , 
 	{ "name": "weight_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_6_V", "role": "ce0" }} , 
 	{ "name": "weight_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_6_V", "role": "q0" }} , 
 	{ "name": "weight_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_7_V", "role": "address0" }} , 
 	{ "name": "weight_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_7_V", "role": "ce0" }} , 
 	{ "name": "weight_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_7_V", "role": "q0" }} , 
 	{ "name": "weight_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_8_V", "role": "address0" }} , 
 	{ "name": "weight_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_8_V", "role": "ce0" }} , 
 	{ "name": "weight_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_8_V", "role": "q0" }} , 
 	{ "name": "weight_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_9_V", "role": "address0" }} , 
 	{ "name": "weight_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_9_V", "role": "ce0" }} , 
 	{ "name": "weight_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_9_V", "role": "q0" }} , 
 	{ "name": "weight_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_10_V", "role": "address0" }} , 
 	{ "name": "weight_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_10_V", "role": "ce0" }} , 
 	{ "name": "weight_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_10_V", "role": "q0" }} , 
 	{ "name": "weight_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_11_V", "role": "address0" }} , 
 	{ "name": "weight_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_11_V", "role": "ce0" }} , 
 	{ "name": "weight_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_11_V", "role": "q0" }} , 
 	{ "name": "weight_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_12_V", "role": "address0" }} , 
 	{ "name": "weight_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_12_V", "role": "ce0" }} , 
 	{ "name": "weight_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_12_V", "role": "q0" }} , 
 	{ "name": "weight_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_13_V", "role": "address0" }} , 
 	{ "name": "weight_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_13_V", "role": "ce0" }} , 
 	{ "name": "weight_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_13_V", "role": "q0" }} , 
 	{ "name": "weight_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_14_V", "role": "address0" }} , 
 	{ "name": "weight_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_14_V", "role": "ce0" }} , 
 	{ "name": "weight_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_14_V", "role": "q0" }} , 
 	{ "name": "weight_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_15_V", "role": "address0" }} , 
 	{ "name": "weight_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_15_V", "role": "ce0" }} , 
 	{ "name": "weight_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_15_V", "role": "q0" }} , 
 	{ "name": "weight_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_16_V", "role": "address0" }} , 
 	{ "name": "weight_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_16_V", "role": "ce0" }} , 
 	{ "name": "weight_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_16_V", "role": "q0" }} , 
 	{ "name": "weight_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_17_V", "role": "address0" }} , 
 	{ "name": "weight_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_17_V", "role": "ce0" }} , 
 	{ "name": "weight_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_17_V", "role": "q0" }} , 
 	{ "name": "weight_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_18_V", "role": "address0" }} , 
 	{ "name": "weight_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_18_V", "role": "ce0" }} , 
 	{ "name": "weight_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_18_V", "role": "q0" }} , 
 	{ "name": "weight_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_19_V", "role": "address0" }} , 
 	{ "name": "weight_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_19_V", "role": "ce0" }} , 
 	{ "name": "weight_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_19_V", "role": "q0" }} , 
 	{ "name": "weight_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_20_V", "role": "address0" }} , 
 	{ "name": "weight_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_20_V", "role": "ce0" }} , 
 	{ "name": "weight_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_20_V", "role": "q0" }} , 
 	{ "name": "weight_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_21_V", "role": "address0" }} , 
 	{ "name": "weight_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_21_V", "role": "ce0" }} , 
 	{ "name": "weight_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_21_V", "role": "q0" }} , 
 	{ "name": "weight_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_22_V", "role": "address0" }} , 
 	{ "name": "weight_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_22_V", "role": "ce0" }} , 
 	{ "name": "weight_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_22_V", "role": "q0" }} , 
 	{ "name": "weight_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "weight_23_V", "role": "address0" }} , 
 	{ "name": "weight_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_23_V", "role": "ce0" }} , 
 	{ "name": "weight_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_23_V", "role": "q0" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "d1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "we0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "address1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "ce1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "we1" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "5", "7", "9", "11", "13", "15", "17", "19", "21", "23", "25"],
		"CDFG" : "subconv_1x1_16_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1416", "Parent" : "0", "Child" : ["2"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1416.ShuffleNetV2_mul_dEe_U7", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1426", "Parent" : "0", "Child" : ["4"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1426.ShuffleNetV2_mul_dEe_U7", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1436", "Parent" : "0", "Child" : ["6"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1436.ShuffleNetV2_mul_dEe_U7", "Parent" : "5"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1446", "Parent" : "0", "Child" : ["8"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1446.ShuffleNetV2_mul_dEe_U7", "Parent" : "7"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1456", "Parent" : "0", "Child" : ["10"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1456.ShuffleNetV2_mul_dEe_U7", "Parent" : "9"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1466", "Parent" : "0", "Child" : ["12"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1466.ShuffleNetV2_mul_dEe_U7", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1476", "Parent" : "0", "Child" : ["14"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1476.ShuffleNetV2_mul_dEe_U7", "Parent" : "13"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1486", "Parent" : "0", "Child" : ["16"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1486.ShuffleNetV2_mul_dEe_U7", "Parent" : "15"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1496", "Parent" : "0", "Child" : ["18"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1496.ShuffleNetV2_mul_dEe_U7", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1506", "Parent" : "0", "Child" : ["20"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1506.ShuffleNetV2_mul_dEe_U7", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1516", "Parent" : "0", "Child" : ["22"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1516.ShuffleNetV2_mul_dEe_U7", "Parent" : "21"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1526", "Parent" : "0", "Child" : ["24"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1526.ShuffleNetV2_mul_dEe_U7", "Parent" : "23"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_eOg_x_U91", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	subconv_1x1_16_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 6 FirstWrite -1}
		weight_1_V {Type I LastRead 6 FirstWrite -1}
		weight_2_V {Type I LastRead 6 FirstWrite -1}
		weight_3_V {Type I LastRead 6 FirstWrite -1}
		weight_4_V {Type I LastRead 6 FirstWrite -1}
		weight_5_V {Type I LastRead 6 FirstWrite -1}
		weight_6_V {Type I LastRead 6 FirstWrite -1}
		weight_7_V {Type I LastRead 6 FirstWrite -1}
		weight_8_V {Type I LastRead 6 FirstWrite -1}
		weight_9_V {Type I LastRead 6 FirstWrite -1}
		weight_10_V {Type I LastRead 6 FirstWrite -1}
		weight_11_V {Type I LastRead 6 FirstWrite -1}
		weight_12_V {Type I LastRead 6 FirstWrite -1}
		weight_13_V {Type I LastRead 6 FirstWrite -1}
		weight_14_V {Type I LastRead 6 FirstWrite -1}
		weight_15_V {Type I LastRead 6 FirstWrite -1}
		weight_16_V {Type I LastRead 6 FirstWrite -1}
		weight_17_V {Type I LastRead 6 FirstWrite -1}
		weight_18_V {Type I LastRead 6 FirstWrite -1}
		weight_19_V {Type I LastRead 6 FirstWrite -1}
		weight_20_V {Type I LastRead 6 FirstWrite -1}
		weight_21_V {Type I LastRead 6 FirstWrite -1}
		weight_22_V {Type I LastRead 6 FirstWrite -1}
		weight_23_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_24_16x16_p_23 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_19 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_22 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_18 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_11 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_17 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_6 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_16 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_5 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_15 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_4 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_14 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_3 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_13 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_2 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_12 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_1 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_10 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_9 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_21 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_8 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_20 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_7 {Type IO LastRead 8 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "49704", "Max" : "49704"}
	, {"Name" : "Interval", "Min" : "49704", "Max" : "49704"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 13 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 8 } } }
	weight_0_V { ap_memory {  { weight_0_V_address0 mem_address 1 5 }  { weight_0_V_ce0 mem_ce 1 1 }  { weight_0_V_q0 mem_dout 0 8 } } }
	weight_1_V { ap_memory {  { weight_1_V_address0 mem_address 1 5 }  { weight_1_V_ce0 mem_ce 1 1 }  { weight_1_V_q0 mem_dout 0 8 } } }
	weight_2_V { ap_memory {  { weight_2_V_address0 mem_address 1 5 }  { weight_2_V_ce0 mem_ce 1 1 }  { weight_2_V_q0 mem_dout 0 8 } } }
	weight_3_V { ap_memory {  { weight_3_V_address0 mem_address 1 5 }  { weight_3_V_ce0 mem_ce 1 1 }  { weight_3_V_q0 mem_dout 0 8 } } }
	weight_4_V { ap_memory {  { weight_4_V_address0 mem_address 1 5 }  { weight_4_V_ce0 mem_ce 1 1 }  { weight_4_V_q0 mem_dout 0 8 } } }
	weight_5_V { ap_memory {  { weight_5_V_address0 mem_address 1 5 }  { weight_5_V_ce0 mem_ce 1 1 }  { weight_5_V_q0 mem_dout 0 8 } } }
	weight_6_V { ap_memory {  { weight_6_V_address0 mem_address 1 5 }  { weight_6_V_ce0 mem_ce 1 1 }  { weight_6_V_q0 mem_dout 0 8 } } }
	weight_7_V { ap_memory {  { weight_7_V_address0 mem_address 1 5 }  { weight_7_V_ce0 mem_ce 1 1 }  { weight_7_V_q0 mem_dout 0 8 } } }
	weight_8_V { ap_memory {  { weight_8_V_address0 mem_address 1 5 }  { weight_8_V_ce0 mem_ce 1 1 }  { weight_8_V_q0 mem_dout 0 8 } } }
	weight_9_V { ap_memory {  { weight_9_V_address0 mem_address 1 5 }  { weight_9_V_ce0 mem_ce 1 1 }  { weight_9_V_q0 mem_dout 0 8 } } }
	weight_10_V { ap_memory {  { weight_10_V_address0 mem_address 1 5 }  { weight_10_V_ce0 mem_ce 1 1 }  { weight_10_V_q0 mem_dout 0 8 } } }
	weight_11_V { ap_memory {  { weight_11_V_address0 mem_address 1 5 }  { weight_11_V_ce0 mem_ce 1 1 }  { weight_11_V_q0 mem_dout 0 8 } } }
	weight_12_V { ap_memory {  { weight_12_V_address0 mem_address 1 5 }  { weight_12_V_ce0 mem_ce 1 1 }  { weight_12_V_q0 mem_dout 0 8 } } }
	weight_13_V { ap_memory {  { weight_13_V_address0 mem_address 1 5 }  { weight_13_V_ce0 mem_ce 1 1 }  { weight_13_V_q0 mem_dout 0 8 } } }
	weight_14_V { ap_memory {  { weight_14_V_address0 mem_address 1 5 }  { weight_14_V_ce0 mem_ce 1 1 }  { weight_14_V_q0 mem_dout 0 8 } } }
	weight_15_V { ap_memory {  { weight_15_V_address0 mem_address 1 5 }  { weight_15_V_ce0 mem_ce 1 1 }  { weight_15_V_q0 mem_dout 0 8 } } }
	weight_16_V { ap_memory {  { weight_16_V_address0 mem_address 1 5 }  { weight_16_V_ce0 mem_ce 1 1 }  { weight_16_V_q0 mem_dout 0 8 } } }
	weight_17_V { ap_memory {  { weight_17_V_address0 mem_address 1 5 }  { weight_17_V_ce0 mem_ce 1 1 }  { weight_17_V_q0 mem_dout 0 8 } } }
	weight_18_V { ap_memory {  { weight_18_V_address0 mem_address 1 5 }  { weight_18_V_ce0 mem_ce 1 1 }  { weight_18_V_q0 mem_dout 0 8 } } }
	weight_19_V { ap_memory {  { weight_19_V_address0 mem_address 1 5 }  { weight_19_V_ce0 mem_ce 1 1 }  { weight_19_V_q0 mem_dout 0 8 } } }
	weight_20_V { ap_memory {  { weight_20_V_address0 mem_address 1 5 }  { weight_20_V_ce0 mem_ce 1 1 }  { weight_20_V_q0 mem_dout 0 8 } } }
	weight_21_V { ap_memory {  { weight_21_V_address0 mem_address 1 5 }  { weight_21_V_ce0 mem_ce 1 1 }  { weight_21_V_q0 mem_dout 0 8 } } }
	weight_22_V { ap_memory {  { weight_22_V_address0 mem_address 1 5 }  { weight_22_V_ce0 mem_ce 1 1 }  { weight_22_V_q0 mem_dout 0 8 } } }
	weight_23_V { ap_memory {  { weight_23_V_address0 mem_address 1 5 }  { weight_23_V_ce0 mem_ce 1 1 }  { weight_23_V_q0 mem_dout 0 8 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 5 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_23 { ap_memory {  { buffer1_1_24_16x16_p_23_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_23_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_23_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_23_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_23_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_23_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_23_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_23_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_23_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_19 { ap_memory {  { buffer1_1_24_16x16_p_19_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_19_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_19_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_19_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_19_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_19_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_19_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_19_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_19_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_22 { ap_memory {  { buffer1_1_24_16x16_p_22_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_22_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_22_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_22_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_22_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_22_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_22_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_22_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_22_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_18 { ap_memory {  { buffer1_1_24_16x16_p_18_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_18_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_18_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_18_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_18_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_18_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_18_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_18_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_18_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_11 { ap_memory {  { buffer1_1_24_16x16_p_11_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_11_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_11_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_11_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_11_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_11_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_11_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_11_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_11_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_17 { ap_memory {  { buffer1_1_24_16x16_p_17_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_17_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_17_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_17_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_17_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_17_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_17_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_17_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_17_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_6 { ap_memory {  { buffer1_1_24_16x16_p_6_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_6_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_6_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_6_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_6_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_6_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_6_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_6_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_6_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_16 { ap_memory {  { buffer1_1_24_16x16_p_16_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_16_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_16_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_16_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_16_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_16_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_16_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_16_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_16_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_5 { ap_memory {  { buffer1_1_24_16x16_p_5_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_5_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_5_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_5_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_5_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_5_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_5_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_5_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_5_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_15 { ap_memory {  { buffer1_1_24_16x16_p_15_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_15_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_15_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_15_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_15_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_15_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_15_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_15_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_15_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_4 { ap_memory {  { buffer1_1_24_16x16_p_4_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_4_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_4_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_4_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_4_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_4_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_4_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_4_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_4_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_14 { ap_memory {  { buffer1_1_24_16x16_p_14_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_14_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_14_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_14_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_14_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_14_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_14_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_14_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_14_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_3 { ap_memory {  { buffer1_1_24_16x16_p_3_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_3_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_3_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_3_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_3_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_3_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_3_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_3_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_3_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_13 { ap_memory {  { buffer1_1_24_16x16_p_13_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_13_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_13_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_13_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_13_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_13_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_13_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_13_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_13_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_2 { ap_memory {  { buffer1_1_24_16x16_p_2_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_2_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_2_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_2_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_2_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_2_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_2_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_2_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_2_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_12 { ap_memory {  { buffer1_1_24_16x16_p_12_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_12_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_12_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_12_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_12_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_12_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_12_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_12_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_12_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_1 { ap_memory {  { buffer1_1_24_16x16_p_1_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_1_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_1_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_1_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_1_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_1_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_1_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_1_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_1_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_10 { ap_memory {  { buffer1_1_24_16x16_p_10_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_10_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_10_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_10_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_10_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_10_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_10_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_10_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_10_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p { ap_memory {  { buffer1_1_24_16x16_p_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_9 { ap_memory {  { buffer1_1_24_16x16_p_9_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_9_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_9_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_9_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_9_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_9_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_9_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_9_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_9_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_21 { ap_memory {  { buffer1_1_24_16x16_p_21_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_21_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_21_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_21_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_21_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_21_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_21_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_21_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_21_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_8 { ap_memory {  { buffer1_1_24_16x16_p_8_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_8_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_8_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_8_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_8_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_8_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_8_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_8_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_8_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_20 { ap_memory {  { buffer1_1_24_16x16_p_20_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_20_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_20_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_20_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_20_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_20_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_20_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_20_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_20_d1 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_7 { ap_memory {  { buffer1_1_24_16x16_p_7_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_7_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_7_we0 mem_we 1 1 }  { buffer1_1_24_16x16_p_7_d0 mem_din 1 8 }  { buffer1_1_24_16x16_p_7_q0 mem_dout 0 8 }  { buffer1_1_24_16x16_p_7_address1 mem_address 1 9 }  { buffer1_1_24_16x16_p_7_ce1 mem_ce 1 1 }  { buffer1_1_24_16x16_p_7_we1 mem_we 1 1 }  { buffer1_1_24_16x16_p_7_d1 mem_din 1 8 } } }
}
