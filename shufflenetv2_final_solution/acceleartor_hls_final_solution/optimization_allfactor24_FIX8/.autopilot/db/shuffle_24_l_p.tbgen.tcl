set moduleName shuffle_24_l_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {shuffle_24_l_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_V int 8 regular {array 15552 { 0 3 } 0 1 }  }
	{ buffer1_1_24_16x16_p_23 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_22 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_11 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_6 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_5 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_4 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_3 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_2 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_1 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_21 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_20 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_19 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_18 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_17 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_16 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_15 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_14 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_13 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_12 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_10 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_9 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_8 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_24_16x16_p_7 int 8 regular {array 324 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "buffer1_1_24_16x16_p_23", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_22", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_21", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_20", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_19", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_18", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_17", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_16", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_24_16x16_p_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_24_16x16_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 82
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_V_address0 sc_out sc_lv 14 signal 0 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_V_we0 sc_out sc_logic 1 signal 0 } 
	{ output_V_d0 sc_out sc_lv 8 signal 0 } 
	{ buffer1_1_24_16x16_p_23_address0 sc_out sc_lv 9 signal 1 } 
	{ buffer1_1_24_16x16_p_23_ce0 sc_out sc_logic 1 signal 1 } 
	{ buffer1_1_24_16x16_p_23_q0 sc_in sc_lv 8 signal 1 } 
	{ buffer1_1_24_16x16_p_22_address0 sc_out sc_lv 9 signal 2 } 
	{ buffer1_1_24_16x16_p_22_ce0 sc_out sc_logic 1 signal 2 } 
	{ buffer1_1_24_16x16_p_22_q0 sc_in sc_lv 8 signal 2 } 
	{ buffer1_1_24_16x16_p_11_address0 sc_out sc_lv 9 signal 3 } 
	{ buffer1_1_24_16x16_p_11_ce0 sc_out sc_logic 1 signal 3 } 
	{ buffer1_1_24_16x16_p_11_q0 sc_in sc_lv 8 signal 3 } 
	{ buffer1_1_24_16x16_p_6_address0 sc_out sc_lv 9 signal 4 } 
	{ buffer1_1_24_16x16_p_6_ce0 sc_out sc_logic 1 signal 4 } 
	{ buffer1_1_24_16x16_p_6_q0 sc_in sc_lv 8 signal 4 } 
	{ buffer1_1_24_16x16_p_5_address0 sc_out sc_lv 9 signal 5 } 
	{ buffer1_1_24_16x16_p_5_ce0 sc_out sc_logic 1 signal 5 } 
	{ buffer1_1_24_16x16_p_5_q0 sc_in sc_lv 8 signal 5 } 
	{ buffer1_1_24_16x16_p_4_address0 sc_out sc_lv 9 signal 6 } 
	{ buffer1_1_24_16x16_p_4_ce0 sc_out sc_logic 1 signal 6 } 
	{ buffer1_1_24_16x16_p_4_q0 sc_in sc_lv 8 signal 6 } 
	{ buffer1_1_24_16x16_p_3_address0 sc_out sc_lv 9 signal 7 } 
	{ buffer1_1_24_16x16_p_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ buffer1_1_24_16x16_p_3_q0 sc_in sc_lv 8 signal 7 } 
	{ buffer1_1_24_16x16_p_2_address0 sc_out sc_lv 9 signal 8 } 
	{ buffer1_1_24_16x16_p_2_ce0 sc_out sc_logic 1 signal 8 } 
	{ buffer1_1_24_16x16_p_2_q0 sc_in sc_lv 8 signal 8 } 
	{ buffer1_1_24_16x16_p_1_address0 sc_out sc_lv 9 signal 9 } 
	{ buffer1_1_24_16x16_p_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ buffer1_1_24_16x16_p_1_q0 sc_in sc_lv 8 signal 9 } 
	{ buffer1_1_24_16x16_p_address0 sc_out sc_lv 9 signal 10 } 
	{ buffer1_1_24_16x16_p_ce0 sc_out sc_logic 1 signal 10 } 
	{ buffer1_1_24_16x16_p_q0 sc_in sc_lv 8 signal 10 } 
	{ buffer1_1_24_16x16_p_21_address0 sc_out sc_lv 9 signal 11 } 
	{ buffer1_1_24_16x16_p_21_ce0 sc_out sc_logic 1 signal 11 } 
	{ buffer1_1_24_16x16_p_21_q0 sc_in sc_lv 8 signal 11 } 
	{ buffer1_1_24_16x16_p_20_address0 sc_out sc_lv 9 signal 12 } 
	{ buffer1_1_24_16x16_p_20_ce0 sc_out sc_logic 1 signal 12 } 
	{ buffer1_1_24_16x16_p_20_q0 sc_in sc_lv 8 signal 12 } 
	{ buffer1_1_24_16x16_p_19_address0 sc_out sc_lv 9 signal 13 } 
	{ buffer1_1_24_16x16_p_19_ce0 sc_out sc_logic 1 signal 13 } 
	{ buffer1_1_24_16x16_p_19_q0 sc_in sc_lv 8 signal 13 } 
	{ buffer1_1_24_16x16_p_18_address0 sc_out sc_lv 9 signal 14 } 
	{ buffer1_1_24_16x16_p_18_ce0 sc_out sc_logic 1 signal 14 } 
	{ buffer1_1_24_16x16_p_18_q0 sc_in sc_lv 8 signal 14 } 
	{ buffer1_1_24_16x16_p_17_address0 sc_out sc_lv 9 signal 15 } 
	{ buffer1_1_24_16x16_p_17_ce0 sc_out sc_logic 1 signal 15 } 
	{ buffer1_1_24_16x16_p_17_q0 sc_in sc_lv 8 signal 15 } 
	{ buffer1_1_24_16x16_p_16_address0 sc_out sc_lv 9 signal 16 } 
	{ buffer1_1_24_16x16_p_16_ce0 sc_out sc_logic 1 signal 16 } 
	{ buffer1_1_24_16x16_p_16_q0 sc_in sc_lv 8 signal 16 } 
	{ buffer1_1_24_16x16_p_15_address0 sc_out sc_lv 9 signal 17 } 
	{ buffer1_1_24_16x16_p_15_ce0 sc_out sc_logic 1 signal 17 } 
	{ buffer1_1_24_16x16_p_15_q0 sc_in sc_lv 8 signal 17 } 
	{ buffer1_1_24_16x16_p_14_address0 sc_out sc_lv 9 signal 18 } 
	{ buffer1_1_24_16x16_p_14_ce0 sc_out sc_logic 1 signal 18 } 
	{ buffer1_1_24_16x16_p_14_q0 sc_in sc_lv 8 signal 18 } 
	{ buffer1_1_24_16x16_p_13_address0 sc_out sc_lv 9 signal 19 } 
	{ buffer1_1_24_16x16_p_13_ce0 sc_out sc_logic 1 signal 19 } 
	{ buffer1_1_24_16x16_p_13_q0 sc_in sc_lv 8 signal 19 } 
	{ buffer1_1_24_16x16_p_12_address0 sc_out sc_lv 9 signal 20 } 
	{ buffer1_1_24_16x16_p_12_ce0 sc_out sc_logic 1 signal 20 } 
	{ buffer1_1_24_16x16_p_12_q0 sc_in sc_lv 8 signal 20 } 
	{ buffer1_1_24_16x16_p_10_address0 sc_out sc_lv 9 signal 21 } 
	{ buffer1_1_24_16x16_p_10_ce0 sc_out sc_logic 1 signal 21 } 
	{ buffer1_1_24_16x16_p_10_q0 sc_in sc_lv 8 signal 21 } 
	{ buffer1_1_24_16x16_p_9_address0 sc_out sc_lv 9 signal 22 } 
	{ buffer1_1_24_16x16_p_9_ce0 sc_out sc_logic 1 signal 22 } 
	{ buffer1_1_24_16x16_p_9_q0 sc_in sc_lv 8 signal 22 } 
	{ buffer1_1_24_16x16_p_8_address0 sc_out sc_lv 9 signal 23 } 
	{ buffer1_1_24_16x16_p_8_ce0 sc_out sc_logic 1 signal 23 } 
	{ buffer1_1_24_16x16_p_8_q0 sc_in sc_lv 8 signal 23 } 
	{ buffer1_1_24_16x16_p_7_address0 sc_out sc_lv 9 signal 24 } 
	{ buffer1_1_24_16x16_p_7_ce0 sc_out sc_logic 1 signal 24 } 
	{ buffer1_1_24_16x16_p_7_q0 sc_in sc_lv 8 signal 24 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_23", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_22", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_11", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_6", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_5", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_4", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_3", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_2", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_1", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_21", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_20", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_19", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_18", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_17", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_16", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_15", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_14", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_13", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_12", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_10", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_9", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_8", "role": "q0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "address0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "ce0" }} , 
 	{ "name": "buffer1_1_24_16x16_p_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_24_16x16_p_7", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "shuffle_24_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_dEe_x_U140", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	shuffle_24_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "32929", "Max" : "48481"}
	, {"Name" : "Interval", "Min" : "32929", "Max" : "48481"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	output_V { ap_memory {  { output_V_address0 mem_address 1 14 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 8 } } }
	buffer1_1_24_16x16_p_23 { ap_memory {  { buffer1_1_24_16x16_p_23_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_23_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_23_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_22 { ap_memory {  { buffer1_1_24_16x16_p_22_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_22_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_22_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_11 { ap_memory {  { buffer1_1_24_16x16_p_11_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_11_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_11_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_6 { ap_memory {  { buffer1_1_24_16x16_p_6_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_6_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_6_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_5 { ap_memory {  { buffer1_1_24_16x16_p_5_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_5_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_5_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_4 { ap_memory {  { buffer1_1_24_16x16_p_4_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_4_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_4_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_3 { ap_memory {  { buffer1_1_24_16x16_p_3_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_3_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_3_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_2 { ap_memory {  { buffer1_1_24_16x16_p_2_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_2_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_2_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_1 { ap_memory {  { buffer1_1_24_16x16_p_1_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_1_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_1_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p { ap_memory {  { buffer1_1_24_16x16_p_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_21 { ap_memory {  { buffer1_1_24_16x16_p_21_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_21_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_21_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_20 { ap_memory {  { buffer1_1_24_16x16_p_20_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_20_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_20_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_19 { ap_memory {  { buffer1_1_24_16x16_p_19_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_19_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_19_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_18 { ap_memory {  { buffer1_1_24_16x16_p_18_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_18_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_18_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_17 { ap_memory {  { buffer1_1_24_16x16_p_17_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_17_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_17_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_16 { ap_memory {  { buffer1_1_24_16x16_p_16_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_16_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_16_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_15 { ap_memory {  { buffer1_1_24_16x16_p_15_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_15_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_15_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_14 { ap_memory {  { buffer1_1_24_16x16_p_14_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_14_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_14_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_13 { ap_memory {  { buffer1_1_24_16x16_p_13_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_13_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_13_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_12 { ap_memory {  { buffer1_1_24_16x16_p_12_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_12_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_12_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_10 { ap_memory {  { buffer1_1_24_16x16_p_10_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_10_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_10_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_9 { ap_memory {  { buffer1_1_24_16x16_p_9_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_9_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_9_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_8 { ap_memory {  { buffer1_1_24_16x16_p_8_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_8_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_8_q0 mem_dout 0 8 } } }
	buffer1_1_24_16x16_p_7 { ap_memory {  { buffer1_1_24_16x16_p_7_address0 mem_address 1 9 }  { buffer1_1_24_16x16_p_7_ce0 mem_ce 1 1 }  { buffer1_1_24_16x16_p_7_q0 mem_dout 0 8 } } }
}
