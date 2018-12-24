set moduleName shuffle_48_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {shuffle_48_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ left_V int 8 regular {array 4800 { 1 3 } 1 1 }  }
	{ output_V int 8 regular {array 9600 { 0 3 } 0 1 }  }
	{ buffer1_1_48_8x8_p_V_24 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_1 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_2 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_3 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_4 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_5 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_6 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_7 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_8 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_9 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_10 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_11 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_12 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_13 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_14 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_15 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_16 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_17 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_18 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_19 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_20 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_21 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_22 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_48_8x8_p_V_23 int 8 regular {array 200 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "left_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_24", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 24,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 25,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 26,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 27,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 28,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 29,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 30,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 31,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 8,"up" : 32,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 9,"up" : 33,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 10,"up" : 34,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 11,"up" : 35,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 12,"up" : 36,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 13,"up" : 37,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 14,"up" : 38,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 15,"up" : 39,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_16", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 16,"up" : 40,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_17", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 17,"up" : 41,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_18", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 18,"up" : 42,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_19", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 19,"up" : 43,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_20", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 20,"up" : 44,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_21", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 21,"up" : 45,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_22", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 22,"up" : 46,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_48_8x8_p_V_23", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_48_8x8_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 23,"up" : 47,"step" : 24},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 85
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ left_V_address0 sc_out sc_lv 13 signal 0 } 
	{ left_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ left_V_q0 sc_in sc_lv 8 signal 0 } 
	{ output_V_address0 sc_out sc_lv 14 signal 1 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ output_V_we0 sc_out sc_logic 1 signal 1 } 
	{ output_V_d0 sc_out sc_lv 8 signal 1 } 
	{ buffer1_1_48_8x8_p_V_24_address0 sc_out sc_lv 8 signal 2 } 
	{ buffer1_1_48_8x8_p_V_24_ce0 sc_out sc_logic 1 signal 2 } 
	{ buffer1_1_48_8x8_p_V_24_q0 sc_in sc_lv 8 signal 2 } 
	{ buffer1_1_48_8x8_p_V_1_address0 sc_out sc_lv 8 signal 3 } 
	{ buffer1_1_48_8x8_p_V_1_ce0 sc_out sc_logic 1 signal 3 } 
	{ buffer1_1_48_8x8_p_V_1_q0 sc_in sc_lv 8 signal 3 } 
	{ buffer1_1_48_8x8_p_V_2_address0 sc_out sc_lv 8 signal 4 } 
	{ buffer1_1_48_8x8_p_V_2_ce0 sc_out sc_logic 1 signal 4 } 
	{ buffer1_1_48_8x8_p_V_2_q0 sc_in sc_lv 8 signal 4 } 
	{ buffer1_1_48_8x8_p_V_3_address0 sc_out sc_lv 8 signal 5 } 
	{ buffer1_1_48_8x8_p_V_3_ce0 sc_out sc_logic 1 signal 5 } 
	{ buffer1_1_48_8x8_p_V_3_q0 sc_in sc_lv 8 signal 5 } 
	{ buffer1_1_48_8x8_p_V_4_address0 sc_out sc_lv 8 signal 6 } 
	{ buffer1_1_48_8x8_p_V_4_ce0 sc_out sc_logic 1 signal 6 } 
	{ buffer1_1_48_8x8_p_V_4_q0 sc_in sc_lv 8 signal 6 } 
	{ buffer1_1_48_8x8_p_V_5_address0 sc_out sc_lv 8 signal 7 } 
	{ buffer1_1_48_8x8_p_V_5_ce0 sc_out sc_logic 1 signal 7 } 
	{ buffer1_1_48_8x8_p_V_5_q0 sc_in sc_lv 8 signal 7 } 
	{ buffer1_1_48_8x8_p_V_6_address0 sc_out sc_lv 8 signal 8 } 
	{ buffer1_1_48_8x8_p_V_6_ce0 sc_out sc_logic 1 signal 8 } 
	{ buffer1_1_48_8x8_p_V_6_q0 sc_in sc_lv 8 signal 8 } 
	{ buffer1_1_48_8x8_p_V_7_address0 sc_out sc_lv 8 signal 9 } 
	{ buffer1_1_48_8x8_p_V_7_ce0 sc_out sc_logic 1 signal 9 } 
	{ buffer1_1_48_8x8_p_V_7_q0 sc_in sc_lv 8 signal 9 } 
	{ buffer1_1_48_8x8_p_V_8_address0 sc_out sc_lv 8 signal 10 } 
	{ buffer1_1_48_8x8_p_V_8_ce0 sc_out sc_logic 1 signal 10 } 
	{ buffer1_1_48_8x8_p_V_8_q0 sc_in sc_lv 8 signal 10 } 
	{ buffer1_1_48_8x8_p_V_9_address0 sc_out sc_lv 8 signal 11 } 
	{ buffer1_1_48_8x8_p_V_9_ce0 sc_out sc_logic 1 signal 11 } 
	{ buffer1_1_48_8x8_p_V_9_q0 sc_in sc_lv 8 signal 11 } 
	{ buffer1_1_48_8x8_p_V_10_address0 sc_out sc_lv 8 signal 12 } 
	{ buffer1_1_48_8x8_p_V_10_ce0 sc_out sc_logic 1 signal 12 } 
	{ buffer1_1_48_8x8_p_V_10_q0 sc_in sc_lv 8 signal 12 } 
	{ buffer1_1_48_8x8_p_V_11_address0 sc_out sc_lv 8 signal 13 } 
	{ buffer1_1_48_8x8_p_V_11_ce0 sc_out sc_logic 1 signal 13 } 
	{ buffer1_1_48_8x8_p_V_11_q0 sc_in sc_lv 8 signal 13 } 
	{ buffer1_1_48_8x8_p_V_12_address0 sc_out sc_lv 8 signal 14 } 
	{ buffer1_1_48_8x8_p_V_12_ce0 sc_out sc_logic 1 signal 14 } 
	{ buffer1_1_48_8x8_p_V_12_q0 sc_in sc_lv 8 signal 14 } 
	{ buffer1_1_48_8x8_p_V_13_address0 sc_out sc_lv 8 signal 15 } 
	{ buffer1_1_48_8x8_p_V_13_ce0 sc_out sc_logic 1 signal 15 } 
	{ buffer1_1_48_8x8_p_V_13_q0 sc_in sc_lv 8 signal 15 } 
	{ buffer1_1_48_8x8_p_V_14_address0 sc_out sc_lv 8 signal 16 } 
	{ buffer1_1_48_8x8_p_V_14_ce0 sc_out sc_logic 1 signal 16 } 
	{ buffer1_1_48_8x8_p_V_14_q0 sc_in sc_lv 8 signal 16 } 
	{ buffer1_1_48_8x8_p_V_15_address0 sc_out sc_lv 8 signal 17 } 
	{ buffer1_1_48_8x8_p_V_15_ce0 sc_out sc_logic 1 signal 17 } 
	{ buffer1_1_48_8x8_p_V_15_q0 sc_in sc_lv 8 signal 17 } 
	{ buffer1_1_48_8x8_p_V_16_address0 sc_out sc_lv 8 signal 18 } 
	{ buffer1_1_48_8x8_p_V_16_ce0 sc_out sc_logic 1 signal 18 } 
	{ buffer1_1_48_8x8_p_V_16_q0 sc_in sc_lv 8 signal 18 } 
	{ buffer1_1_48_8x8_p_V_17_address0 sc_out sc_lv 8 signal 19 } 
	{ buffer1_1_48_8x8_p_V_17_ce0 sc_out sc_logic 1 signal 19 } 
	{ buffer1_1_48_8x8_p_V_17_q0 sc_in sc_lv 8 signal 19 } 
	{ buffer1_1_48_8x8_p_V_18_address0 sc_out sc_lv 8 signal 20 } 
	{ buffer1_1_48_8x8_p_V_18_ce0 sc_out sc_logic 1 signal 20 } 
	{ buffer1_1_48_8x8_p_V_18_q0 sc_in sc_lv 8 signal 20 } 
	{ buffer1_1_48_8x8_p_V_19_address0 sc_out sc_lv 8 signal 21 } 
	{ buffer1_1_48_8x8_p_V_19_ce0 sc_out sc_logic 1 signal 21 } 
	{ buffer1_1_48_8x8_p_V_19_q0 sc_in sc_lv 8 signal 21 } 
	{ buffer1_1_48_8x8_p_V_20_address0 sc_out sc_lv 8 signal 22 } 
	{ buffer1_1_48_8x8_p_V_20_ce0 sc_out sc_logic 1 signal 22 } 
	{ buffer1_1_48_8x8_p_V_20_q0 sc_in sc_lv 8 signal 22 } 
	{ buffer1_1_48_8x8_p_V_21_address0 sc_out sc_lv 8 signal 23 } 
	{ buffer1_1_48_8x8_p_V_21_ce0 sc_out sc_logic 1 signal 23 } 
	{ buffer1_1_48_8x8_p_V_21_q0 sc_in sc_lv 8 signal 23 } 
	{ buffer1_1_48_8x8_p_V_22_address0 sc_out sc_lv 8 signal 24 } 
	{ buffer1_1_48_8x8_p_V_22_ce0 sc_out sc_logic 1 signal 24 } 
	{ buffer1_1_48_8x8_p_V_22_q0 sc_in sc_lv 8 signal 24 } 
	{ buffer1_1_48_8x8_p_V_23_address0 sc_out sc_lv 8 signal 25 } 
	{ buffer1_1_48_8x8_p_V_23_ce0 sc_out sc_logic 1 signal 25 } 
	{ buffer1_1_48_8x8_p_V_23_q0 sc_in sc_lv 8 signal 25 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "left_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "left_V", "role": "address0" }} , 
 	{ "name": "left_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "left_V", "role": "ce0" }} , 
 	{ "name": "left_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "left_V", "role": "q0" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_24", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_24", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_24", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_1", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_1", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_1", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_2", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_2", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_2", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_3", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_3", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_3", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_4", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_4", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_4", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_5", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_5", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_5", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_6", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_6", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_6", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_7", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_7", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_7", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_8", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_8", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_8", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_9", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_9", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_9", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_10", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_10", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_10", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_11", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_11", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_11", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_12", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_12", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_12", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_13", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_13", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_13", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_14", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_14", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_14", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_15", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_15", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_15", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_16", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_16", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_16", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_17", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_17", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_17", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_18", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_18", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_18", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_19", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_19", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_19", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_20", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_20", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_20", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_21", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_21", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_21", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_22", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_22", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_22", "role": "q0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_23", "role": "address0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_23", "role": "ce0" }} , 
 	{ "name": "buffer1_1_48_8x8_p_V_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_48_8x8_p_V_23", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "shuffle_48_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremtde_x_U511", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_udo_x_U512", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	shuffle_48_p {
		left_V {Type I LastRead 12 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 14}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 12 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "31777", "Max" : "31777"}
	, {"Name" : "Interval", "Min" : "31777", "Max" : "31777"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	left_V { ap_memory {  { left_V_address0 mem_address 1 13 }  { left_V_ce0 mem_ce 1 1 }  { left_V_q0 mem_dout 0 8 } } }
	output_V { ap_memory {  { output_V_address0 mem_address 1 14 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 8 } } }
	buffer1_1_48_8x8_p_V_24 { ap_memory {  { buffer1_1_48_8x8_p_V_24_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_24_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_24_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_1 { ap_memory {  { buffer1_1_48_8x8_p_V_1_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_1_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_1_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_2 { ap_memory {  { buffer1_1_48_8x8_p_V_2_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_2_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_2_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_3 { ap_memory {  { buffer1_1_48_8x8_p_V_3_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_3_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_3_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_4 { ap_memory {  { buffer1_1_48_8x8_p_V_4_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_4_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_4_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_5 { ap_memory {  { buffer1_1_48_8x8_p_V_5_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_5_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_5_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_6 { ap_memory {  { buffer1_1_48_8x8_p_V_6_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_6_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_6_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_7 { ap_memory {  { buffer1_1_48_8x8_p_V_7_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_7_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_7_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_8 { ap_memory {  { buffer1_1_48_8x8_p_V_8_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_8_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_8_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_9 { ap_memory {  { buffer1_1_48_8x8_p_V_9_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_9_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_9_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_10 { ap_memory {  { buffer1_1_48_8x8_p_V_10_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_10_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_10_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_11 { ap_memory {  { buffer1_1_48_8x8_p_V_11_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_11_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_11_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_12 { ap_memory {  { buffer1_1_48_8x8_p_V_12_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_12_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_12_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_13 { ap_memory {  { buffer1_1_48_8x8_p_V_13_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_13_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_13_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_14 { ap_memory {  { buffer1_1_48_8x8_p_V_14_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_14_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_14_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_15 { ap_memory {  { buffer1_1_48_8x8_p_V_15_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_15_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_15_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_16 { ap_memory {  { buffer1_1_48_8x8_p_V_16_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_16_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_16_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_17 { ap_memory {  { buffer1_1_48_8x8_p_V_17_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_17_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_17_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_18 { ap_memory {  { buffer1_1_48_8x8_p_V_18_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_18_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_18_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_19 { ap_memory {  { buffer1_1_48_8x8_p_V_19_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_19_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_19_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_20 { ap_memory {  { buffer1_1_48_8x8_p_V_20_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_20_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_20_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_21 { ap_memory {  { buffer1_1_48_8x8_p_V_21_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_21_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_21_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_22 { ap_memory {  { buffer1_1_48_8x8_p_V_22_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_22_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_22_q0 mem_dout 0 8 } } }
	buffer1_1_48_8x8_p_V_23 { ap_memory {  { buffer1_1_48_8x8_p_V_23_address0 mem_address 1 8 }  { buffer1_1_48_8x8_p_V_23_ce0 mem_ce 1 1 }  { buffer1_1_48_8x8_p_V_23_q0 mem_dout 0 8 } } }
}
