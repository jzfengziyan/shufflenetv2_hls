set moduleName subconv_1x1_8p_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {subconv_1x1_8p_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 8 regular {array 9600 { 1 3 } 1 1 }  }
	{ weight_0_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_1_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_2_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_3_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_4_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_5_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_6_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_7_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_8_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_9_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_10_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ weight_11_V int 8 regular {array 768 { 1 1 } 1 1 }  }
	{ bias_V int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ ShuffleConvs_2_Downs_11 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_10 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_7 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_6 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_5 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_4 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_3 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_2 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_1 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_9 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
	{ ShuffleConvs_2_Downs_8 int 8 regular {array 800 { 2 2 } 1 1 } {global 2}  }
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
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ShuffleConvs_2_Downs_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 84,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 85,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 86,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 87,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 88,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 89,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 90,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 91,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 8,"up" : 92,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 9,"up" : 93,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 10,"up" : 94,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 11,"up" : 95,"step" : 12},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 204
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_V_address0 sc_out sc_lv 14 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_q0 sc_in sc_lv 8 signal 0 } 
	{ weight_0_V_address0 sc_out sc_lv 10 signal 1 } 
	{ weight_0_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weight_0_V_q0 sc_in sc_lv 8 signal 1 } 
	{ weight_0_V_address1 sc_out sc_lv 10 signal 1 } 
	{ weight_0_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ weight_0_V_q1 sc_in sc_lv 8 signal 1 } 
	{ weight_1_V_address0 sc_out sc_lv 10 signal 2 } 
	{ weight_1_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ weight_1_V_q0 sc_in sc_lv 8 signal 2 } 
	{ weight_1_V_address1 sc_out sc_lv 10 signal 2 } 
	{ weight_1_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ weight_1_V_q1 sc_in sc_lv 8 signal 2 } 
	{ weight_2_V_address0 sc_out sc_lv 10 signal 3 } 
	{ weight_2_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ weight_2_V_q0 sc_in sc_lv 8 signal 3 } 
	{ weight_2_V_address1 sc_out sc_lv 10 signal 3 } 
	{ weight_2_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ weight_2_V_q1 sc_in sc_lv 8 signal 3 } 
	{ weight_3_V_address0 sc_out sc_lv 10 signal 4 } 
	{ weight_3_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ weight_3_V_q0 sc_in sc_lv 8 signal 4 } 
	{ weight_3_V_address1 sc_out sc_lv 10 signal 4 } 
	{ weight_3_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ weight_3_V_q1 sc_in sc_lv 8 signal 4 } 
	{ weight_4_V_address0 sc_out sc_lv 10 signal 5 } 
	{ weight_4_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ weight_4_V_q0 sc_in sc_lv 8 signal 5 } 
	{ weight_4_V_address1 sc_out sc_lv 10 signal 5 } 
	{ weight_4_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ weight_4_V_q1 sc_in sc_lv 8 signal 5 } 
	{ weight_5_V_address0 sc_out sc_lv 10 signal 6 } 
	{ weight_5_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ weight_5_V_q0 sc_in sc_lv 8 signal 6 } 
	{ weight_5_V_address1 sc_out sc_lv 10 signal 6 } 
	{ weight_5_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ weight_5_V_q1 sc_in sc_lv 8 signal 6 } 
	{ weight_6_V_address0 sc_out sc_lv 10 signal 7 } 
	{ weight_6_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ weight_6_V_q0 sc_in sc_lv 8 signal 7 } 
	{ weight_6_V_address1 sc_out sc_lv 10 signal 7 } 
	{ weight_6_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ weight_6_V_q1 sc_in sc_lv 8 signal 7 } 
	{ weight_7_V_address0 sc_out sc_lv 10 signal 8 } 
	{ weight_7_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ weight_7_V_q0 sc_in sc_lv 8 signal 8 } 
	{ weight_7_V_address1 sc_out sc_lv 10 signal 8 } 
	{ weight_7_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ weight_7_V_q1 sc_in sc_lv 8 signal 8 } 
	{ weight_8_V_address0 sc_out sc_lv 10 signal 9 } 
	{ weight_8_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ weight_8_V_q0 sc_in sc_lv 8 signal 9 } 
	{ weight_8_V_address1 sc_out sc_lv 10 signal 9 } 
	{ weight_8_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ weight_8_V_q1 sc_in sc_lv 8 signal 9 } 
	{ weight_9_V_address0 sc_out sc_lv 10 signal 10 } 
	{ weight_9_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ weight_9_V_q0 sc_in sc_lv 8 signal 10 } 
	{ weight_9_V_address1 sc_out sc_lv 10 signal 10 } 
	{ weight_9_V_ce1 sc_out sc_logic 1 signal 10 } 
	{ weight_9_V_q1 sc_in sc_lv 8 signal 10 } 
	{ weight_10_V_address0 sc_out sc_lv 10 signal 11 } 
	{ weight_10_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ weight_10_V_q0 sc_in sc_lv 8 signal 11 } 
	{ weight_10_V_address1 sc_out sc_lv 10 signal 11 } 
	{ weight_10_V_ce1 sc_out sc_logic 1 signal 11 } 
	{ weight_10_V_q1 sc_in sc_lv 8 signal 11 } 
	{ weight_11_V_address0 sc_out sc_lv 10 signal 12 } 
	{ weight_11_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ weight_11_V_q0 sc_in sc_lv 8 signal 12 } 
	{ weight_11_V_address1 sc_out sc_lv 10 signal 12 } 
	{ weight_11_V_ce1 sc_out sc_logic 1 signal 12 } 
	{ weight_11_V_q1 sc_in sc_lv 8 signal 12 } 
	{ bias_V_address0 sc_out sc_lv 7 signal 13 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 13 } 
	{ ShuffleConvs_2_Downs_11_address0 sc_out sc_lv 10 signal 14 } 
	{ ShuffleConvs_2_Downs_11_ce0 sc_out sc_logic 1 signal 14 } 
	{ ShuffleConvs_2_Downs_11_we0 sc_out sc_logic 1 signal 14 } 
	{ ShuffleConvs_2_Downs_11_d0 sc_out sc_lv 8 signal 14 } 
	{ ShuffleConvs_2_Downs_11_q0 sc_in sc_lv 8 signal 14 } 
	{ ShuffleConvs_2_Downs_11_address1 sc_out sc_lv 10 signal 14 } 
	{ ShuffleConvs_2_Downs_11_ce1 sc_out sc_logic 1 signal 14 } 
	{ ShuffleConvs_2_Downs_11_we1 sc_out sc_logic 1 signal 14 } 
	{ ShuffleConvs_2_Downs_11_d1 sc_out sc_lv 8 signal 14 } 
	{ ShuffleConvs_2_Downs_11_q1 sc_in sc_lv 8 signal 14 } 
	{ ShuffleConvs_2_Downs_10_address0 sc_out sc_lv 10 signal 15 } 
	{ ShuffleConvs_2_Downs_10_ce0 sc_out sc_logic 1 signal 15 } 
	{ ShuffleConvs_2_Downs_10_we0 sc_out sc_logic 1 signal 15 } 
	{ ShuffleConvs_2_Downs_10_d0 sc_out sc_lv 8 signal 15 } 
	{ ShuffleConvs_2_Downs_10_q0 sc_in sc_lv 8 signal 15 } 
	{ ShuffleConvs_2_Downs_10_address1 sc_out sc_lv 10 signal 15 } 
	{ ShuffleConvs_2_Downs_10_ce1 sc_out sc_logic 1 signal 15 } 
	{ ShuffleConvs_2_Downs_10_we1 sc_out sc_logic 1 signal 15 } 
	{ ShuffleConvs_2_Downs_10_d1 sc_out sc_lv 8 signal 15 } 
	{ ShuffleConvs_2_Downs_10_q1 sc_in sc_lv 8 signal 15 } 
	{ ShuffleConvs_2_Downs_7_address0 sc_out sc_lv 10 signal 16 } 
	{ ShuffleConvs_2_Downs_7_ce0 sc_out sc_logic 1 signal 16 } 
	{ ShuffleConvs_2_Downs_7_we0 sc_out sc_logic 1 signal 16 } 
	{ ShuffleConvs_2_Downs_7_d0 sc_out sc_lv 8 signal 16 } 
	{ ShuffleConvs_2_Downs_7_q0 sc_in sc_lv 8 signal 16 } 
	{ ShuffleConvs_2_Downs_7_address1 sc_out sc_lv 10 signal 16 } 
	{ ShuffleConvs_2_Downs_7_ce1 sc_out sc_logic 1 signal 16 } 
	{ ShuffleConvs_2_Downs_7_we1 sc_out sc_logic 1 signal 16 } 
	{ ShuffleConvs_2_Downs_7_d1 sc_out sc_lv 8 signal 16 } 
	{ ShuffleConvs_2_Downs_7_q1 sc_in sc_lv 8 signal 16 } 
	{ ShuffleConvs_2_Downs_6_address0 sc_out sc_lv 10 signal 17 } 
	{ ShuffleConvs_2_Downs_6_ce0 sc_out sc_logic 1 signal 17 } 
	{ ShuffleConvs_2_Downs_6_we0 sc_out sc_logic 1 signal 17 } 
	{ ShuffleConvs_2_Downs_6_d0 sc_out sc_lv 8 signal 17 } 
	{ ShuffleConvs_2_Downs_6_q0 sc_in sc_lv 8 signal 17 } 
	{ ShuffleConvs_2_Downs_6_address1 sc_out sc_lv 10 signal 17 } 
	{ ShuffleConvs_2_Downs_6_ce1 sc_out sc_logic 1 signal 17 } 
	{ ShuffleConvs_2_Downs_6_we1 sc_out sc_logic 1 signal 17 } 
	{ ShuffleConvs_2_Downs_6_d1 sc_out sc_lv 8 signal 17 } 
	{ ShuffleConvs_2_Downs_6_q1 sc_in sc_lv 8 signal 17 } 
	{ ShuffleConvs_2_Downs_5_address0 sc_out sc_lv 10 signal 18 } 
	{ ShuffleConvs_2_Downs_5_ce0 sc_out sc_logic 1 signal 18 } 
	{ ShuffleConvs_2_Downs_5_we0 sc_out sc_logic 1 signal 18 } 
	{ ShuffleConvs_2_Downs_5_d0 sc_out sc_lv 8 signal 18 } 
	{ ShuffleConvs_2_Downs_5_q0 sc_in sc_lv 8 signal 18 } 
	{ ShuffleConvs_2_Downs_5_address1 sc_out sc_lv 10 signal 18 } 
	{ ShuffleConvs_2_Downs_5_ce1 sc_out sc_logic 1 signal 18 } 
	{ ShuffleConvs_2_Downs_5_we1 sc_out sc_logic 1 signal 18 } 
	{ ShuffleConvs_2_Downs_5_d1 sc_out sc_lv 8 signal 18 } 
	{ ShuffleConvs_2_Downs_5_q1 sc_in sc_lv 8 signal 18 } 
	{ ShuffleConvs_2_Downs_4_address0 sc_out sc_lv 10 signal 19 } 
	{ ShuffleConvs_2_Downs_4_ce0 sc_out sc_logic 1 signal 19 } 
	{ ShuffleConvs_2_Downs_4_we0 sc_out sc_logic 1 signal 19 } 
	{ ShuffleConvs_2_Downs_4_d0 sc_out sc_lv 8 signal 19 } 
	{ ShuffleConvs_2_Downs_4_q0 sc_in sc_lv 8 signal 19 } 
	{ ShuffleConvs_2_Downs_4_address1 sc_out sc_lv 10 signal 19 } 
	{ ShuffleConvs_2_Downs_4_ce1 sc_out sc_logic 1 signal 19 } 
	{ ShuffleConvs_2_Downs_4_we1 sc_out sc_logic 1 signal 19 } 
	{ ShuffleConvs_2_Downs_4_d1 sc_out sc_lv 8 signal 19 } 
	{ ShuffleConvs_2_Downs_4_q1 sc_in sc_lv 8 signal 19 } 
	{ ShuffleConvs_2_Downs_3_address0 sc_out sc_lv 10 signal 20 } 
	{ ShuffleConvs_2_Downs_3_ce0 sc_out sc_logic 1 signal 20 } 
	{ ShuffleConvs_2_Downs_3_we0 sc_out sc_logic 1 signal 20 } 
	{ ShuffleConvs_2_Downs_3_d0 sc_out sc_lv 8 signal 20 } 
	{ ShuffleConvs_2_Downs_3_q0 sc_in sc_lv 8 signal 20 } 
	{ ShuffleConvs_2_Downs_3_address1 sc_out sc_lv 10 signal 20 } 
	{ ShuffleConvs_2_Downs_3_ce1 sc_out sc_logic 1 signal 20 } 
	{ ShuffleConvs_2_Downs_3_we1 sc_out sc_logic 1 signal 20 } 
	{ ShuffleConvs_2_Downs_3_d1 sc_out sc_lv 8 signal 20 } 
	{ ShuffleConvs_2_Downs_3_q1 sc_in sc_lv 8 signal 20 } 
	{ ShuffleConvs_2_Downs_2_address0 sc_out sc_lv 10 signal 21 } 
	{ ShuffleConvs_2_Downs_2_ce0 sc_out sc_logic 1 signal 21 } 
	{ ShuffleConvs_2_Downs_2_we0 sc_out sc_logic 1 signal 21 } 
	{ ShuffleConvs_2_Downs_2_d0 sc_out sc_lv 8 signal 21 } 
	{ ShuffleConvs_2_Downs_2_q0 sc_in sc_lv 8 signal 21 } 
	{ ShuffleConvs_2_Downs_2_address1 sc_out sc_lv 10 signal 21 } 
	{ ShuffleConvs_2_Downs_2_ce1 sc_out sc_logic 1 signal 21 } 
	{ ShuffleConvs_2_Downs_2_we1 sc_out sc_logic 1 signal 21 } 
	{ ShuffleConvs_2_Downs_2_d1 sc_out sc_lv 8 signal 21 } 
	{ ShuffleConvs_2_Downs_2_q1 sc_in sc_lv 8 signal 21 } 
	{ ShuffleConvs_2_Downs_1_address0 sc_out sc_lv 10 signal 22 } 
	{ ShuffleConvs_2_Downs_1_ce0 sc_out sc_logic 1 signal 22 } 
	{ ShuffleConvs_2_Downs_1_we0 sc_out sc_logic 1 signal 22 } 
	{ ShuffleConvs_2_Downs_1_d0 sc_out sc_lv 8 signal 22 } 
	{ ShuffleConvs_2_Downs_1_q0 sc_in sc_lv 8 signal 22 } 
	{ ShuffleConvs_2_Downs_1_address1 sc_out sc_lv 10 signal 22 } 
	{ ShuffleConvs_2_Downs_1_ce1 sc_out sc_logic 1 signal 22 } 
	{ ShuffleConvs_2_Downs_1_we1 sc_out sc_logic 1 signal 22 } 
	{ ShuffleConvs_2_Downs_1_d1 sc_out sc_lv 8 signal 22 } 
	{ ShuffleConvs_2_Downs_1_q1 sc_in sc_lv 8 signal 22 } 
	{ ShuffleConvs_2_Downs_address0 sc_out sc_lv 10 signal 23 } 
	{ ShuffleConvs_2_Downs_ce0 sc_out sc_logic 1 signal 23 } 
	{ ShuffleConvs_2_Downs_we0 sc_out sc_logic 1 signal 23 } 
	{ ShuffleConvs_2_Downs_d0 sc_out sc_lv 8 signal 23 } 
	{ ShuffleConvs_2_Downs_q0 sc_in sc_lv 8 signal 23 } 
	{ ShuffleConvs_2_Downs_address1 sc_out sc_lv 10 signal 23 } 
	{ ShuffleConvs_2_Downs_ce1 sc_out sc_logic 1 signal 23 } 
	{ ShuffleConvs_2_Downs_we1 sc_out sc_logic 1 signal 23 } 
	{ ShuffleConvs_2_Downs_d1 sc_out sc_lv 8 signal 23 } 
	{ ShuffleConvs_2_Downs_q1 sc_in sc_lv 8 signal 23 } 
	{ ShuffleConvs_2_Downs_9_address0 sc_out sc_lv 10 signal 24 } 
	{ ShuffleConvs_2_Downs_9_ce0 sc_out sc_logic 1 signal 24 } 
	{ ShuffleConvs_2_Downs_9_we0 sc_out sc_logic 1 signal 24 } 
	{ ShuffleConvs_2_Downs_9_d0 sc_out sc_lv 8 signal 24 } 
	{ ShuffleConvs_2_Downs_9_q0 sc_in sc_lv 8 signal 24 } 
	{ ShuffleConvs_2_Downs_9_address1 sc_out sc_lv 10 signal 24 } 
	{ ShuffleConvs_2_Downs_9_ce1 sc_out sc_logic 1 signal 24 } 
	{ ShuffleConvs_2_Downs_9_we1 sc_out sc_logic 1 signal 24 } 
	{ ShuffleConvs_2_Downs_9_d1 sc_out sc_lv 8 signal 24 } 
	{ ShuffleConvs_2_Downs_9_q1 sc_in sc_lv 8 signal 24 } 
	{ ShuffleConvs_2_Downs_8_address0 sc_out sc_lv 10 signal 25 } 
	{ ShuffleConvs_2_Downs_8_ce0 sc_out sc_logic 1 signal 25 } 
	{ ShuffleConvs_2_Downs_8_we0 sc_out sc_logic 1 signal 25 } 
	{ ShuffleConvs_2_Downs_8_d0 sc_out sc_lv 8 signal 25 } 
	{ ShuffleConvs_2_Downs_8_q0 sc_in sc_lv 8 signal 25 } 
	{ ShuffleConvs_2_Downs_8_address1 sc_out sc_lv 10 signal 25 } 
	{ ShuffleConvs_2_Downs_8_ce1 sc_out sc_logic 1 signal 25 } 
	{ ShuffleConvs_2_Downs_8_we1 sc_out sc_logic 1 signal 25 } 
	{ ShuffleConvs_2_Downs_8_d1 sc_out sc_lv 8 signal 25 } 
	{ ShuffleConvs_2_Downs_8_q1 sc_in sc_lv 8 signal 25 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "weight_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_0_V", "role": "address0" }} , 
 	{ "name": "weight_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_0_V", "role": "ce0" }} , 
 	{ "name": "weight_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_0_V", "role": "q0" }} , 
 	{ "name": "weight_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_0_V", "role": "address1" }} , 
 	{ "name": "weight_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_0_V", "role": "ce1" }} , 
 	{ "name": "weight_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_0_V", "role": "q1" }} , 
 	{ "name": "weight_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_1_V", "role": "address0" }} , 
 	{ "name": "weight_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_1_V", "role": "ce0" }} , 
 	{ "name": "weight_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_1_V", "role": "q0" }} , 
 	{ "name": "weight_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_1_V", "role": "address1" }} , 
 	{ "name": "weight_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_1_V", "role": "ce1" }} , 
 	{ "name": "weight_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_1_V", "role": "q1" }} , 
 	{ "name": "weight_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_2_V", "role": "address0" }} , 
 	{ "name": "weight_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_2_V", "role": "ce0" }} , 
 	{ "name": "weight_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_2_V", "role": "q0" }} , 
 	{ "name": "weight_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_2_V", "role": "address1" }} , 
 	{ "name": "weight_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_2_V", "role": "ce1" }} , 
 	{ "name": "weight_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_2_V", "role": "q1" }} , 
 	{ "name": "weight_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_3_V", "role": "address0" }} , 
 	{ "name": "weight_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_3_V", "role": "ce0" }} , 
 	{ "name": "weight_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_3_V", "role": "q0" }} , 
 	{ "name": "weight_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_3_V", "role": "address1" }} , 
 	{ "name": "weight_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_3_V", "role": "ce1" }} , 
 	{ "name": "weight_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_3_V", "role": "q1" }} , 
 	{ "name": "weight_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_4_V", "role": "address0" }} , 
 	{ "name": "weight_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_4_V", "role": "ce0" }} , 
 	{ "name": "weight_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_4_V", "role": "q0" }} , 
 	{ "name": "weight_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_4_V", "role": "address1" }} , 
 	{ "name": "weight_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_4_V", "role": "ce1" }} , 
 	{ "name": "weight_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_4_V", "role": "q1" }} , 
 	{ "name": "weight_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_5_V", "role": "address0" }} , 
 	{ "name": "weight_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_5_V", "role": "ce0" }} , 
 	{ "name": "weight_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_5_V", "role": "q0" }} , 
 	{ "name": "weight_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_5_V", "role": "address1" }} , 
 	{ "name": "weight_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_5_V", "role": "ce1" }} , 
 	{ "name": "weight_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_5_V", "role": "q1" }} , 
 	{ "name": "weight_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_6_V", "role": "address0" }} , 
 	{ "name": "weight_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_6_V", "role": "ce0" }} , 
 	{ "name": "weight_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_6_V", "role": "q0" }} , 
 	{ "name": "weight_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_6_V", "role": "address1" }} , 
 	{ "name": "weight_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_6_V", "role": "ce1" }} , 
 	{ "name": "weight_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_6_V", "role": "q1" }} , 
 	{ "name": "weight_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_7_V", "role": "address0" }} , 
 	{ "name": "weight_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_7_V", "role": "ce0" }} , 
 	{ "name": "weight_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_7_V", "role": "q0" }} , 
 	{ "name": "weight_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_7_V", "role": "address1" }} , 
 	{ "name": "weight_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_7_V", "role": "ce1" }} , 
 	{ "name": "weight_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_7_V", "role": "q1" }} , 
 	{ "name": "weight_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_8_V", "role": "address0" }} , 
 	{ "name": "weight_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_8_V", "role": "ce0" }} , 
 	{ "name": "weight_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_8_V", "role": "q0" }} , 
 	{ "name": "weight_8_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_8_V", "role": "address1" }} , 
 	{ "name": "weight_8_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_8_V", "role": "ce1" }} , 
 	{ "name": "weight_8_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_8_V", "role": "q1" }} , 
 	{ "name": "weight_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_9_V", "role": "address0" }} , 
 	{ "name": "weight_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_9_V", "role": "ce0" }} , 
 	{ "name": "weight_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_9_V", "role": "q0" }} , 
 	{ "name": "weight_9_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_9_V", "role": "address1" }} , 
 	{ "name": "weight_9_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_9_V", "role": "ce1" }} , 
 	{ "name": "weight_9_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_9_V", "role": "q1" }} , 
 	{ "name": "weight_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_10_V", "role": "address0" }} , 
 	{ "name": "weight_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_10_V", "role": "ce0" }} , 
 	{ "name": "weight_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_10_V", "role": "q0" }} , 
 	{ "name": "weight_10_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_10_V", "role": "address1" }} , 
 	{ "name": "weight_10_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_10_V", "role": "ce1" }} , 
 	{ "name": "weight_10_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_10_V", "role": "q1" }} , 
 	{ "name": "weight_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_11_V", "role": "address0" }} , 
 	{ "name": "weight_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_11_V", "role": "ce0" }} , 
 	{ "name": "weight_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_11_V", "role": "q0" }} , 
 	{ "name": "weight_11_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_11_V", "role": "address1" }} , 
 	{ "name": "weight_11_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_11_V", "role": "ce1" }} , 
 	{ "name": "weight_11_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_11_V", "role": "q1" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "q1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "address1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "ce1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "we1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "d1" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "3", "5", "7", "9", "11", "13", "15", "17", "19", "21", "23", "25", "26", "27"],
		"CDFG" : "subconv_1x1_8p_p",
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1198", "Parent" : "0", "Child" : ["2"],
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
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1198.ShuffleNetV2_mul_bkb_U0", "Parent" : "1"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1207", "Parent" : "0", "Child" : ["4"],
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
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1207.ShuffleNetV2_mul_bkb_U0", "Parent" : "3"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1216", "Parent" : "0", "Child" : ["6"],
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
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1216.ShuffleNetV2_mul_bkb_U0", "Parent" : "5"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1225", "Parent" : "0", "Child" : ["8"],
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
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1225.ShuffleNetV2_mul_bkb_U0", "Parent" : "7"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1234", "Parent" : "0", "Child" : ["10"],
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
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1234.ShuffleNetV2_mul_bkb_U0", "Parent" : "9"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1243", "Parent" : "0", "Child" : ["12"],
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
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1243.ShuffleNetV2_mul_bkb_U0", "Parent" : "11"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1252", "Parent" : "0", "Child" : ["14"],
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
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1252.ShuffleNetV2_mul_bkb_U0", "Parent" : "13"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1261", "Parent" : "0", "Child" : ["16"],
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
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1261.ShuffleNetV2_mul_bkb_U0", "Parent" : "15"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1270", "Parent" : "0", "Child" : ["18"],
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
	{"ID" : "18", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1270.ShuffleNetV2_mul_bkb_U0", "Parent" : "17"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1279", "Parent" : "0", "Child" : ["20"],
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
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1279.ShuffleNetV2_mul_bkb_U0", "Parent" : "19"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1288", "Parent" : "0", "Child" : ["22"],
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
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1288.ShuffleNetV2_mul_bkb_U0", "Parent" : "21"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1297", "Parent" : "0", "Child" : ["24"],
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
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1297.ShuffleNetV2_mul_bkb_U0", "Parent" : "23"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremvdy_U539", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremwdI_U540", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_pcA_x_U541", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	subconv_1x1_8p_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 8 FirstWrite -1}
		weight_1_V {Type I LastRead 8 FirstWrite -1}
		weight_2_V {Type I LastRead 8 FirstWrite -1}
		weight_3_V {Type I LastRead 8 FirstWrite -1}
		weight_4_V {Type I LastRead 8 FirstWrite -1}
		weight_5_V {Type I LastRead 8 FirstWrite -1}
		weight_6_V {Type I LastRead 8 FirstWrite -1}
		weight_7_V {Type I LastRead 8 FirstWrite -1}
		weight_8_V {Type I LastRead 8 FirstWrite -1}
		weight_9_V {Type I LastRead 8 FirstWrite -1}
		weight_10_V {Type I LastRead 8 FirstWrite -1}
		weight_11_V {Type I LastRead 8 FirstWrite -1}
		bias_V {Type I LastRead 11 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_10 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_7 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_6 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_5 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_4 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_3 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_2 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_1 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_9 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_8 {Type IO LastRead 14 FirstWrite 12}}
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
	{"Name" : "Latency", "Min" : "245929", "Max" : "245929"}
	, {"Name" : "Interval", "Min" : "245929", "Max" : "245929"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 14 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 8 } } }
	weight_0_V { ap_memory {  { weight_0_V_address0 mem_address 1 10 }  { weight_0_V_ce0 mem_ce 1 1 }  { weight_0_V_q0 mem_dout 0 8 }  { weight_0_V_address1 mem_address 1 10 }  { weight_0_V_ce1 mem_ce 1 1 }  { weight_0_V_q1 mem_dout 0 8 } } }
	weight_1_V { ap_memory {  { weight_1_V_address0 mem_address 1 10 }  { weight_1_V_ce0 mem_ce 1 1 }  { weight_1_V_q0 mem_dout 0 8 }  { weight_1_V_address1 mem_address 1 10 }  { weight_1_V_ce1 mem_ce 1 1 }  { weight_1_V_q1 mem_dout 0 8 } } }
	weight_2_V { ap_memory {  { weight_2_V_address0 mem_address 1 10 }  { weight_2_V_ce0 mem_ce 1 1 }  { weight_2_V_q0 mem_dout 0 8 }  { weight_2_V_address1 mem_address 1 10 }  { weight_2_V_ce1 mem_ce 1 1 }  { weight_2_V_q1 mem_dout 0 8 } } }
	weight_3_V { ap_memory {  { weight_3_V_address0 mem_address 1 10 }  { weight_3_V_ce0 mem_ce 1 1 }  { weight_3_V_q0 mem_dout 0 8 }  { weight_3_V_address1 mem_address 1 10 }  { weight_3_V_ce1 mem_ce 1 1 }  { weight_3_V_q1 mem_dout 0 8 } } }
	weight_4_V { ap_memory {  { weight_4_V_address0 mem_address 1 10 }  { weight_4_V_ce0 mem_ce 1 1 }  { weight_4_V_q0 mem_dout 0 8 }  { weight_4_V_address1 mem_address 1 10 }  { weight_4_V_ce1 mem_ce 1 1 }  { weight_4_V_q1 mem_dout 0 8 } } }
	weight_5_V { ap_memory {  { weight_5_V_address0 mem_address 1 10 }  { weight_5_V_ce0 mem_ce 1 1 }  { weight_5_V_q0 mem_dout 0 8 }  { weight_5_V_address1 mem_address 1 10 }  { weight_5_V_ce1 mem_ce 1 1 }  { weight_5_V_q1 mem_dout 0 8 } } }
	weight_6_V { ap_memory {  { weight_6_V_address0 mem_address 1 10 }  { weight_6_V_ce0 mem_ce 1 1 }  { weight_6_V_q0 mem_dout 0 8 }  { weight_6_V_address1 mem_address 1 10 }  { weight_6_V_ce1 mem_ce 1 1 }  { weight_6_V_q1 mem_dout 0 8 } } }
	weight_7_V { ap_memory {  { weight_7_V_address0 mem_address 1 10 }  { weight_7_V_ce0 mem_ce 1 1 }  { weight_7_V_q0 mem_dout 0 8 }  { weight_7_V_address1 mem_address 1 10 }  { weight_7_V_ce1 mem_ce 1 1 }  { weight_7_V_q1 mem_dout 0 8 } } }
	weight_8_V { ap_memory {  { weight_8_V_address0 mem_address 1 10 }  { weight_8_V_ce0 mem_ce 1 1 }  { weight_8_V_q0 mem_dout 0 8 }  { weight_8_V_address1 mem_address 1 10 }  { weight_8_V_ce1 mem_ce 1 1 }  { weight_8_V_q1 mem_dout 0 8 } } }
	weight_9_V { ap_memory {  { weight_9_V_address0 mem_address 1 10 }  { weight_9_V_ce0 mem_ce 1 1 }  { weight_9_V_q0 mem_dout 0 8 }  { weight_9_V_address1 mem_address 1 10 }  { weight_9_V_ce1 mem_ce 1 1 }  { weight_9_V_q1 mem_dout 0 8 } } }
	weight_10_V { ap_memory {  { weight_10_V_address0 mem_address 1 10 }  { weight_10_V_ce0 mem_ce 1 1 }  { weight_10_V_q0 mem_dout 0 8 }  { weight_10_V_address1 mem_address 1 10 }  { weight_10_V_ce1 mem_ce 1 1 }  { weight_10_V_q1 mem_dout 0 8 } } }
	weight_11_V { ap_memory {  { weight_11_V_address0 mem_address 1 10 }  { weight_11_V_ce0 mem_ce 1 1 }  { weight_11_V_q0 mem_dout 0 8 }  { weight_11_V_address1 mem_address 1 10 }  { weight_11_V_ce1 mem_ce 1 1 }  { weight_11_V_q1 mem_dout 0 8 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 7 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_11 { ap_memory {  { ShuffleConvs_2_Downs_11_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_11_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_11_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_11_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_11_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_11_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_11_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_11_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_11_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_11_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_10 { ap_memory {  { ShuffleConvs_2_Downs_10_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_10_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_10_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_10_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_10_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_10_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_10_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_10_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_10_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_10_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_7 { ap_memory {  { ShuffleConvs_2_Downs_7_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_7_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_7_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_7_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_7_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_7_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_7_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_7_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_7_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_7_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_6 { ap_memory {  { ShuffleConvs_2_Downs_6_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_6_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_6_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_6_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_6_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_6_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_6_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_6_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_6_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_6_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_5 { ap_memory {  { ShuffleConvs_2_Downs_5_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_5_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_5_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_5_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_5_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_5_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_5_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_5_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_5_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_5_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_4 { ap_memory {  { ShuffleConvs_2_Downs_4_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_4_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_4_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_4_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_4_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_4_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_4_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_4_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_4_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_4_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_3 { ap_memory {  { ShuffleConvs_2_Downs_3_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_3_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_3_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_3_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_3_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_3_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_3_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_3_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_3_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_3_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_2 { ap_memory {  { ShuffleConvs_2_Downs_2_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_2_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_2_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_2_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_2_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_2_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_2_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_2_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_2_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_2_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_1 { ap_memory {  { ShuffleConvs_2_Downs_1_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_1_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_1_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_1_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_1_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_1_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_1_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_1_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_1_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_1_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs { ap_memory {  { ShuffleConvs_2_Downs_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_9 { ap_memory {  { ShuffleConvs_2_Downs_9_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_9_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_9_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_9_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_9_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_9_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_9_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_9_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_9_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_9_q1 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_8 { ap_memory {  { ShuffleConvs_2_Downs_8_address0 mem_address 1 10 }  { ShuffleConvs_2_Downs_8_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_8_we0 mem_we 1 1 }  { ShuffleConvs_2_Downs_8_d0 mem_din 1 8 }  { ShuffleConvs_2_Downs_8_q0 mem_dout 0 8 }  { ShuffleConvs_2_Downs_8_address1 mem_address 1 10 }  { ShuffleConvs_2_Downs_8_ce1 mem_ce 1 1 }  { ShuffleConvs_2_Downs_8_we1 mem_we 1 1 }  { ShuffleConvs_2_Downs_8_d1 mem_din 1 8 }  { ShuffleConvs_2_Downs_8_q1 mem_dout 0 8 } } }
}