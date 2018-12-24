set moduleName subconv_1x1_32_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {subconv_1x1_32_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ weight_0_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_1_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_2_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_3_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_4_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_5_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_6_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ weight_7_V int 8 regular {array 72 { 1 1 } 1 1 }  }
	{ bias_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ output_V int 8 regular {array 27744 { 2 3 } 1 1 }  }
	{ conv1_output_p_V_0 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_1 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_2 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_3 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_4 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_5 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_6 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
	{ conv1_output_p_V_7 int 8 regular {array 3468 { 1 1 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "weight_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_7_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE"} , 
 	{ "Name" : "conv1_output_p_V_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 16,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 17,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 18,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 19,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 20,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 21,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 22,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 23,"step" : 8},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 110
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ weight_0_V_address0 sc_out sc_lv 7 signal 0 } 
	{ weight_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ weight_0_V_q0 sc_in sc_lv 8 signal 0 } 
	{ weight_0_V_address1 sc_out sc_lv 7 signal 0 } 
	{ weight_0_V_ce1 sc_out sc_logic 1 signal 0 } 
	{ weight_0_V_q1 sc_in sc_lv 8 signal 0 } 
	{ weight_1_V_address0 sc_out sc_lv 7 signal 1 } 
	{ weight_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ weight_1_V_q0 sc_in sc_lv 8 signal 1 } 
	{ weight_1_V_address1 sc_out sc_lv 7 signal 1 } 
	{ weight_1_V_ce1 sc_out sc_logic 1 signal 1 } 
	{ weight_1_V_q1 sc_in sc_lv 8 signal 1 } 
	{ weight_2_V_address0 sc_out sc_lv 7 signal 2 } 
	{ weight_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ weight_2_V_q0 sc_in sc_lv 8 signal 2 } 
	{ weight_2_V_address1 sc_out sc_lv 7 signal 2 } 
	{ weight_2_V_ce1 sc_out sc_logic 1 signal 2 } 
	{ weight_2_V_q1 sc_in sc_lv 8 signal 2 } 
	{ weight_3_V_address0 sc_out sc_lv 7 signal 3 } 
	{ weight_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ weight_3_V_q0 sc_in sc_lv 8 signal 3 } 
	{ weight_3_V_address1 sc_out sc_lv 7 signal 3 } 
	{ weight_3_V_ce1 sc_out sc_logic 1 signal 3 } 
	{ weight_3_V_q1 sc_in sc_lv 8 signal 3 } 
	{ weight_4_V_address0 sc_out sc_lv 7 signal 4 } 
	{ weight_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ weight_4_V_q0 sc_in sc_lv 8 signal 4 } 
	{ weight_4_V_address1 sc_out sc_lv 7 signal 4 } 
	{ weight_4_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ weight_4_V_q1 sc_in sc_lv 8 signal 4 } 
	{ weight_5_V_address0 sc_out sc_lv 7 signal 5 } 
	{ weight_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ weight_5_V_q0 sc_in sc_lv 8 signal 5 } 
	{ weight_5_V_address1 sc_out sc_lv 7 signal 5 } 
	{ weight_5_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ weight_5_V_q1 sc_in sc_lv 8 signal 5 } 
	{ weight_6_V_address0 sc_out sc_lv 7 signal 6 } 
	{ weight_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ weight_6_V_q0 sc_in sc_lv 8 signal 6 } 
	{ weight_6_V_address1 sc_out sc_lv 7 signal 6 } 
	{ weight_6_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ weight_6_V_q1 sc_in sc_lv 8 signal 6 } 
	{ weight_7_V_address0 sc_out sc_lv 7 signal 7 } 
	{ weight_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ weight_7_V_q0 sc_in sc_lv 8 signal 7 } 
	{ weight_7_V_address1 sc_out sc_lv 7 signal 7 } 
	{ weight_7_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ weight_7_V_q1 sc_in sc_lv 8 signal 7 } 
	{ bias_V_address0 sc_out sc_lv 5 signal 8 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 8 } 
	{ output_V_address0 sc_out sc_lv 15 signal 9 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ output_V_we0 sc_out sc_logic 1 signal 9 } 
	{ output_V_d0 sc_out sc_lv 8 signal 9 } 
	{ output_V_q0 sc_in sc_lv 8 signal 9 } 
	{ conv1_output_p_V_0_address0 sc_out sc_lv 12 signal 10 } 
	{ conv1_output_p_V_0_ce0 sc_out sc_logic 1 signal 10 } 
	{ conv1_output_p_V_0_q0 sc_in sc_lv 8 signal 10 } 
	{ conv1_output_p_V_0_address1 sc_out sc_lv 12 signal 10 } 
	{ conv1_output_p_V_0_ce1 sc_out sc_logic 1 signal 10 } 
	{ conv1_output_p_V_0_q1 sc_in sc_lv 8 signal 10 } 
	{ conv1_output_p_V_1_address0 sc_out sc_lv 12 signal 11 } 
	{ conv1_output_p_V_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ conv1_output_p_V_1_q0 sc_in sc_lv 8 signal 11 } 
	{ conv1_output_p_V_1_address1 sc_out sc_lv 12 signal 11 } 
	{ conv1_output_p_V_1_ce1 sc_out sc_logic 1 signal 11 } 
	{ conv1_output_p_V_1_q1 sc_in sc_lv 8 signal 11 } 
	{ conv1_output_p_V_2_address0 sc_out sc_lv 12 signal 12 } 
	{ conv1_output_p_V_2_ce0 sc_out sc_logic 1 signal 12 } 
	{ conv1_output_p_V_2_q0 sc_in sc_lv 8 signal 12 } 
	{ conv1_output_p_V_2_address1 sc_out sc_lv 12 signal 12 } 
	{ conv1_output_p_V_2_ce1 sc_out sc_logic 1 signal 12 } 
	{ conv1_output_p_V_2_q1 sc_in sc_lv 8 signal 12 } 
	{ conv1_output_p_V_3_address0 sc_out sc_lv 12 signal 13 } 
	{ conv1_output_p_V_3_ce0 sc_out sc_logic 1 signal 13 } 
	{ conv1_output_p_V_3_q0 sc_in sc_lv 8 signal 13 } 
	{ conv1_output_p_V_3_address1 sc_out sc_lv 12 signal 13 } 
	{ conv1_output_p_V_3_ce1 sc_out sc_logic 1 signal 13 } 
	{ conv1_output_p_V_3_q1 sc_in sc_lv 8 signal 13 } 
	{ conv1_output_p_V_4_address0 sc_out sc_lv 12 signal 14 } 
	{ conv1_output_p_V_4_ce0 sc_out sc_logic 1 signal 14 } 
	{ conv1_output_p_V_4_q0 sc_in sc_lv 8 signal 14 } 
	{ conv1_output_p_V_4_address1 sc_out sc_lv 12 signal 14 } 
	{ conv1_output_p_V_4_ce1 sc_out sc_logic 1 signal 14 } 
	{ conv1_output_p_V_4_q1 sc_in sc_lv 8 signal 14 } 
	{ conv1_output_p_V_5_address0 sc_out sc_lv 12 signal 15 } 
	{ conv1_output_p_V_5_ce0 sc_out sc_logic 1 signal 15 } 
	{ conv1_output_p_V_5_q0 sc_in sc_lv 8 signal 15 } 
	{ conv1_output_p_V_5_address1 sc_out sc_lv 12 signal 15 } 
	{ conv1_output_p_V_5_ce1 sc_out sc_logic 1 signal 15 } 
	{ conv1_output_p_V_5_q1 sc_in sc_lv 8 signal 15 } 
	{ conv1_output_p_V_6_address0 sc_out sc_lv 12 signal 16 } 
	{ conv1_output_p_V_6_ce0 sc_out sc_logic 1 signal 16 } 
	{ conv1_output_p_V_6_q0 sc_in sc_lv 8 signal 16 } 
	{ conv1_output_p_V_6_address1 sc_out sc_lv 12 signal 16 } 
	{ conv1_output_p_V_6_ce1 sc_out sc_logic 1 signal 16 } 
	{ conv1_output_p_V_6_q1 sc_in sc_lv 8 signal 16 } 
	{ conv1_output_p_V_7_address0 sc_out sc_lv 12 signal 17 } 
	{ conv1_output_p_V_7_ce0 sc_out sc_logic 1 signal 17 } 
	{ conv1_output_p_V_7_q0 sc_in sc_lv 8 signal 17 } 
	{ conv1_output_p_V_7_address1 sc_out sc_lv 12 signal 17 } 
	{ conv1_output_p_V_7_ce1 sc_out sc_logic 1 signal 17 } 
	{ conv1_output_p_V_7_q1 sc_in sc_lv 8 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "weight_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_0_V", "role": "address0" }} , 
 	{ "name": "weight_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_0_V", "role": "ce0" }} , 
 	{ "name": "weight_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_0_V", "role": "q0" }} , 
 	{ "name": "weight_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_0_V", "role": "address1" }} , 
 	{ "name": "weight_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_0_V", "role": "ce1" }} , 
 	{ "name": "weight_0_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_0_V", "role": "q1" }} , 
 	{ "name": "weight_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_1_V", "role": "address0" }} , 
 	{ "name": "weight_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_1_V", "role": "ce0" }} , 
 	{ "name": "weight_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_1_V", "role": "q0" }} , 
 	{ "name": "weight_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_1_V", "role": "address1" }} , 
 	{ "name": "weight_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_1_V", "role": "ce1" }} , 
 	{ "name": "weight_1_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_1_V", "role": "q1" }} , 
 	{ "name": "weight_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_2_V", "role": "address0" }} , 
 	{ "name": "weight_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_2_V", "role": "ce0" }} , 
 	{ "name": "weight_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_2_V", "role": "q0" }} , 
 	{ "name": "weight_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_2_V", "role": "address1" }} , 
 	{ "name": "weight_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_2_V", "role": "ce1" }} , 
 	{ "name": "weight_2_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_2_V", "role": "q1" }} , 
 	{ "name": "weight_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_3_V", "role": "address0" }} , 
 	{ "name": "weight_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_3_V", "role": "ce0" }} , 
 	{ "name": "weight_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_3_V", "role": "q0" }} , 
 	{ "name": "weight_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_3_V", "role": "address1" }} , 
 	{ "name": "weight_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_3_V", "role": "ce1" }} , 
 	{ "name": "weight_3_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_3_V", "role": "q1" }} , 
 	{ "name": "weight_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_4_V", "role": "address0" }} , 
 	{ "name": "weight_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_4_V", "role": "ce0" }} , 
 	{ "name": "weight_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_4_V", "role": "q0" }} , 
 	{ "name": "weight_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_4_V", "role": "address1" }} , 
 	{ "name": "weight_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_4_V", "role": "ce1" }} , 
 	{ "name": "weight_4_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_4_V", "role": "q1" }} , 
 	{ "name": "weight_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_5_V", "role": "address0" }} , 
 	{ "name": "weight_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_5_V", "role": "ce0" }} , 
 	{ "name": "weight_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_5_V", "role": "q0" }} , 
 	{ "name": "weight_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_5_V", "role": "address1" }} , 
 	{ "name": "weight_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_5_V", "role": "ce1" }} , 
 	{ "name": "weight_5_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_5_V", "role": "q1" }} , 
 	{ "name": "weight_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_6_V", "role": "address0" }} , 
 	{ "name": "weight_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_6_V", "role": "ce0" }} , 
 	{ "name": "weight_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_6_V", "role": "q0" }} , 
 	{ "name": "weight_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_6_V", "role": "address1" }} , 
 	{ "name": "weight_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_6_V", "role": "ce1" }} , 
 	{ "name": "weight_6_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_6_V", "role": "q1" }} , 
 	{ "name": "weight_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_7_V", "role": "address0" }} , 
 	{ "name": "weight_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_7_V", "role": "ce0" }} , 
 	{ "name": "weight_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_7_V", "role": "q0" }} , 
 	{ "name": "weight_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "weight_7_V", "role": "address1" }} , 
 	{ "name": "weight_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_7_V", "role": "ce1" }} , 
 	{ "name": "weight_7_V_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_7_V", "role": "q1" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "output_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_2_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_2_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_2_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_4_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_4_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_4_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_5_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_5_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_5_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_6_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_6_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_6_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "q1" }} , 
 	{ "name": "conv1_output_p_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_7_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "address1" }} , 
 	{ "name": "conv1_output_p_V_7_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "ce1" }} , 
 	{ "name": "conv1_output_p_V_7_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "subconv_1x1_32_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_COMPUTE_ENGINE_fu_2110"}],
		"Port" : [
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_COMPUTE_ENGINE_fu_2110", "Parent" : "0",
		"CDFG" : "COMPUTE_ENGINE",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "w0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b8_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b9_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w10_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b10_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w11_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b11_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w12_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b12_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w13_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b13_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w14_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b14_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w15_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b15_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w16_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b16_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w17_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b17_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w18_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b18_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w19_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b19_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w20_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b20_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w21_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b21_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w22_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b22_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w23_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b23_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_jbC_x_U64", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_jbC_x_U65", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	subconv_1x1_32_p {
		weight_0_V {Type I LastRead 16 FirstWrite -1}
		weight_1_V {Type I LastRead 16 FirstWrite -1}
		weight_2_V {Type I LastRead 16 FirstWrite -1}
		weight_3_V {Type I LastRead 16 FirstWrite -1}
		weight_4_V {Type I LastRead 16 FirstWrite -1}
		weight_5_V {Type I LastRead 16 FirstWrite -1}
		weight_6_V {Type I LastRead 16 FirstWrite -1}
		weight_7_V {Type I LastRead 16 FirstWrite -1}
		bias_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type IO LastRead 18 FirstWrite 4}
		conv1_output_p_V_0 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_1 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_2 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_3 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_4 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_5 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_6 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_7 {Type I LastRead 6 FirstWrite -1}}
	COMPUTE_ENGINE {
		w0_V {Type I LastRead 0 FirstWrite -1}
		b0_V {Type I LastRead 0 FirstWrite -1}
		w1_V {Type I LastRead 0 FirstWrite -1}
		b1_V {Type I LastRead 0 FirstWrite -1}
		w2_V {Type I LastRead 0 FirstWrite -1}
		b2_V {Type I LastRead 0 FirstWrite -1}
		w3_V {Type I LastRead 0 FirstWrite -1}
		b3_V {Type I LastRead 0 FirstWrite -1}
		w4_V {Type I LastRead 0 FirstWrite -1}
		b4_V {Type I LastRead 0 FirstWrite -1}
		w5_V {Type I LastRead 0 FirstWrite -1}
		b5_V {Type I LastRead 0 FirstWrite -1}
		w6_V {Type I LastRead 0 FirstWrite -1}
		b6_V {Type I LastRead 0 FirstWrite -1}
		w7_V {Type I LastRead 0 FirstWrite -1}
		b7_V {Type I LastRead 0 FirstWrite -1}
		w8_V {Type I LastRead 0 FirstWrite -1}
		b8_V {Type I LastRead 0 FirstWrite -1}
		w9_V {Type I LastRead 0 FirstWrite -1}
		b9_V {Type I LastRead 0 FirstWrite -1}
		w10_V {Type I LastRead 0 FirstWrite -1}
		b10_V {Type I LastRead 0 FirstWrite -1}
		w11_V {Type I LastRead 0 FirstWrite -1}
		b11_V {Type I LastRead 0 FirstWrite -1}
		w12_V {Type I LastRead 0 FirstWrite -1}
		b12_V {Type I LastRead 0 FirstWrite -1}
		w13_V {Type I LastRead 0 FirstWrite -1}
		b13_V {Type I LastRead 0 FirstWrite -1}
		w14_V {Type I LastRead 0 FirstWrite -1}
		b14_V {Type I LastRead 0 FirstWrite -1}
		w15_V {Type I LastRead 0 FirstWrite -1}
		b15_V {Type I LastRead 0 FirstWrite -1}
		w16_V {Type I LastRead 1 FirstWrite -1}
		b16_V {Type I LastRead 1 FirstWrite -1}
		w17_V {Type I LastRead 1 FirstWrite -1}
		b17_V {Type I LastRead 1 FirstWrite -1}
		w18_V {Type I LastRead 1 FirstWrite -1}
		b18_V {Type I LastRead 1 FirstWrite -1}
		w19_V {Type I LastRead 1 FirstWrite -1}
		b19_V {Type I LastRead 1 FirstWrite -1}
		w20_V {Type I LastRead 1 FirstWrite -1}
		b20_V {Type I LastRead 1 FirstWrite -1}
		w21_V {Type I LastRead 1 FirstWrite -1}
		b21_V {Type I LastRead 1 FirstWrite -1}
		w22_V {Type I LastRead 1 FirstWrite -1}
		b22_V {Type I LastRead 1 FirstWrite -1}
		w23_V {Type I LastRead 1 FirstWrite -1}
		b23_V {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "668835", "Max" : "668835"}
	, {"Name" : "Interval", "Min" : "668835", "Max" : "668835"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	weight_0_V { ap_memory {  { weight_0_V_address0 mem_address 1 7 }  { weight_0_V_ce0 mem_ce 1 1 }  { weight_0_V_q0 mem_dout 0 8 }  { weight_0_V_address1 mem_address 1 7 }  { weight_0_V_ce1 mem_ce 1 1 }  { weight_0_V_q1 mem_dout 0 8 } } }
	weight_1_V { ap_memory {  { weight_1_V_address0 mem_address 1 7 }  { weight_1_V_ce0 mem_ce 1 1 }  { weight_1_V_q0 mem_dout 0 8 }  { weight_1_V_address1 mem_address 1 7 }  { weight_1_V_ce1 mem_ce 1 1 }  { weight_1_V_q1 mem_dout 0 8 } } }
	weight_2_V { ap_memory {  { weight_2_V_address0 mem_address 1 7 }  { weight_2_V_ce0 mem_ce 1 1 }  { weight_2_V_q0 mem_dout 0 8 }  { weight_2_V_address1 mem_address 1 7 }  { weight_2_V_ce1 mem_ce 1 1 }  { weight_2_V_q1 mem_dout 0 8 } } }
	weight_3_V { ap_memory {  { weight_3_V_address0 mem_address 1 7 }  { weight_3_V_ce0 mem_ce 1 1 }  { weight_3_V_q0 mem_dout 0 8 }  { weight_3_V_address1 mem_address 1 7 }  { weight_3_V_ce1 mem_ce 1 1 }  { weight_3_V_q1 mem_dout 0 8 } } }
	weight_4_V { ap_memory {  { weight_4_V_address0 mem_address 1 7 }  { weight_4_V_ce0 mem_ce 1 1 }  { weight_4_V_q0 mem_dout 0 8 }  { weight_4_V_address1 mem_address 1 7 }  { weight_4_V_ce1 mem_ce 1 1 }  { weight_4_V_q1 mem_dout 0 8 } } }
	weight_5_V { ap_memory {  { weight_5_V_address0 mem_address 1 7 }  { weight_5_V_ce0 mem_ce 1 1 }  { weight_5_V_q0 mem_dout 0 8 }  { weight_5_V_address1 mem_address 1 7 }  { weight_5_V_ce1 mem_ce 1 1 }  { weight_5_V_q1 mem_dout 0 8 } } }
	weight_6_V { ap_memory {  { weight_6_V_address0 mem_address 1 7 }  { weight_6_V_ce0 mem_ce 1 1 }  { weight_6_V_q0 mem_dout 0 8 }  { weight_6_V_address1 mem_address 1 7 }  { weight_6_V_ce1 mem_ce 1 1 }  { weight_6_V_q1 mem_dout 0 8 } } }
	weight_7_V { ap_memory {  { weight_7_V_address0 mem_address 1 7 }  { weight_7_V_ce0 mem_ce 1 1 }  { weight_7_V_q0 mem_dout 0 8 }  { weight_7_V_address1 mem_address 1 7 }  { weight_7_V_ce1 mem_ce 1 1 }  { weight_7_V_q1 mem_dout 0 8 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 5 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	output_V { ap_memory {  { output_V_address0 mem_address 1 15 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 8 }  { output_V_q0 mem_dout 0 8 } } }
	conv1_output_p_V_0 { ap_memory {  { conv1_output_p_V_0_address0 mem_address 1 12 }  { conv1_output_p_V_0_ce0 mem_ce 1 1 }  { conv1_output_p_V_0_q0 mem_dout 0 8 }  { conv1_output_p_V_0_address1 mem_address 1 12 }  { conv1_output_p_V_0_ce1 mem_ce 1 1 }  { conv1_output_p_V_0_q1 mem_dout 0 8 } } }
	conv1_output_p_V_1 { ap_memory {  { conv1_output_p_V_1_address0 mem_address 1 12 }  { conv1_output_p_V_1_ce0 mem_ce 1 1 }  { conv1_output_p_V_1_q0 mem_dout 0 8 }  { conv1_output_p_V_1_address1 mem_address 1 12 }  { conv1_output_p_V_1_ce1 mem_ce 1 1 }  { conv1_output_p_V_1_q1 mem_dout 0 8 } } }
	conv1_output_p_V_2 { ap_memory {  { conv1_output_p_V_2_address0 mem_address 1 12 }  { conv1_output_p_V_2_ce0 mem_ce 1 1 }  { conv1_output_p_V_2_q0 mem_dout 0 8 }  { conv1_output_p_V_2_address1 mem_address 1 12 }  { conv1_output_p_V_2_ce1 mem_ce 1 1 }  { conv1_output_p_V_2_q1 mem_dout 0 8 } } }
	conv1_output_p_V_3 { ap_memory {  { conv1_output_p_V_3_address0 mem_address 1 12 }  { conv1_output_p_V_3_ce0 mem_ce 1 1 }  { conv1_output_p_V_3_q0 mem_dout 0 8 }  { conv1_output_p_V_3_address1 mem_address 1 12 }  { conv1_output_p_V_3_ce1 mem_ce 1 1 }  { conv1_output_p_V_3_q1 mem_dout 0 8 } } }
	conv1_output_p_V_4 { ap_memory {  { conv1_output_p_V_4_address0 mem_address 1 12 }  { conv1_output_p_V_4_ce0 mem_ce 1 1 }  { conv1_output_p_V_4_q0 mem_dout 0 8 }  { conv1_output_p_V_4_address1 mem_address 1 12 }  { conv1_output_p_V_4_ce1 mem_ce 1 1 }  { conv1_output_p_V_4_q1 mem_dout 0 8 } } }
	conv1_output_p_V_5 { ap_memory {  { conv1_output_p_V_5_address0 mem_address 1 12 }  { conv1_output_p_V_5_ce0 mem_ce 1 1 }  { conv1_output_p_V_5_q0 mem_dout 0 8 }  { conv1_output_p_V_5_address1 mem_address 1 12 }  { conv1_output_p_V_5_ce1 mem_ce 1 1 }  { conv1_output_p_V_5_q1 mem_dout 0 8 } } }
	conv1_output_p_V_6 { ap_memory {  { conv1_output_p_V_6_address0 mem_address 1 12 }  { conv1_output_p_V_6_ce0 mem_ce 1 1 }  { conv1_output_p_V_6_q0 mem_dout 0 8 }  { conv1_output_p_V_6_address1 mem_address 1 12 }  { conv1_output_p_V_6_ce1 mem_ce 1 1 }  { conv1_output_p_V_6_q1 mem_dout 0 8 } } }
	conv1_output_p_V_7 { ap_memory {  { conv1_output_p_V_7_address0 mem_address 1 12 }  { conv1_output_p_V_7_ce0 mem_ce 1 1 }  { conv1_output_p_V_7_q0 mem_dout 0 8 }  { conv1_output_p_V_7_address1 mem_address 1 12 }  { conv1_output_p_V_7_ce1 mem_ce 1 1 }  { conv1_output_p_V_7_q1 mem_dout 0 8 } } }
}
