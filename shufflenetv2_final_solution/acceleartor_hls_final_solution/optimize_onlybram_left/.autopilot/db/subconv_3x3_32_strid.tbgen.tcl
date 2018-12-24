set moduleName subconv_3x3_32_strid
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {subconv_3x3_32_strid}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_0_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_1_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_2_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_3_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_4_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_5_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_6_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_7_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_8_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_9_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_10_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_11_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_12_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_13_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_14_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_15_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_16_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_17_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_18_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_19_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_20_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_21_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_22_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ input_23_V int 8 regular {array 1156 { 1 3 } 1 1 }  }
	{ weight_V int 8 regular {array 216 { 1 3 } 1 1 }  }
	{ bias_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ output_V int 8 regular {array 7776 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_7_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_8_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_9_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_10_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_11_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_12_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_13_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_14_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_15_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_16_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_17_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_18_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_19_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_20_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_21_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_22_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "input_23_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 88
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_0_V_address0 sc_out sc_lv 11 signal 0 } 
	{ input_0_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_0_V_q0 sc_in sc_lv 8 signal 0 } 
	{ input_1_V_address0 sc_out sc_lv 11 signal 1 } 
	{ input_1_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_1_V_q0 sc_in sc_lv 8 signal 1 } 
	{ input_2_V_address0 sc_out sc_lv 11 signal 2 } 
	{ input_2_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ input_2_V_q0 sc_in sc_lv 8 signal 2 } 
	{ input_3_V_address0 sc_out sc_lv 11 signal 3 } 
	{ input_3_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ input_3_V_q0 sc_in sc_lv 8 signal 3 } 
	{ input_4_V_address0 sc_out sc_lv 11 signal 4 } 
	{ input_4_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_4_V_q0 sc_in sc_lv 8 signal 4 } 
	{ input_5_V_address0 sc_out sc_lv 11 signal 5 } 
	{ input_5_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ input_5_V_q0 sc_in sc_lv 8 signal 5 } 
	{ input_6_V_address0 sc_out sc_lv 11 signal 6 } 
	{ input_6_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ input_6_V_q0 sc_in sc_lv 8 signal 6 } 
	{ input_7_V_address0 sc_out sc_lv 11 signal 7 } 
	{ input_7_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ input_7_V_q0 sc_in sc_lv 8 signal 7 } 
	{ input_8_V_address0 sc_out sc_lv 11 signal 8 } 
	{ input_8_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ input_8_V_q0 sc_in sc_lv 8 signal 8 } 
	{ input_9_V_address0 sc_out sc_lv 11 signal 9 } 
	{ input_9_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ input_9_V_q0 sc_in sc_lv 8 signal 9 } 
	{ input_10_V_address0 sc_out sc_lv 11 signal 10 } 
	{ input_10_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ input_10_V_q0 sc_in sc_lv 8 signal 10 } 
	{ input_11_V_address0 sc_out sc_lv 11 signal 11 } 
	{ input_11_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ input_11_V_q0 sc_in sc_lv 8 signal 11 } 
	{ input_12_V_address0 sc_out sc_lv 11 signal 12 } 
	{ input_12_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ input_12_V_q0 sc_in sc_lv 8 signal 12 } 
	{ input_13_V_address0 sc_out sc_lv 11 signal 13 } 
	{ input_13_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ input_13_V_q0 sc_in sc_lv 8 signal 13 } 
	{ input_14_V_address0 sc_out sc_lv 11 signal 14 } 
	{ input_14_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ input_14_V_q0 sc_in sc_lv 8 signal 14 } 
	{ input_15_V_address0 sc_out sc_lv 11 signal 15 } 
	{ input_15_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ input_15_V_q0 sc_in sc_lv 8 signal 15 } 
	{ input_16_V_address0 sc_out sc_lv 11 signal 16 } 
	{ input_16_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ input_16_V_q0 sc_in sc_lv 8 signal 16 } 
	{ input_17_V_address0 sc_out sc_lv 11 signal 17 } 
	{ input_17_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ input_17_V_q0 sc_in sc_lv 8 signal 17 } 
	{ input_18_V_address0 sc_out sc_lv 11 signal 18 } 
	{ input_18_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ input_18_V_q0 sc_in sc_lv 8 signal 18 } 
	{ input_19_V_address0 sc_out sc_lv 11 signal 19 } 
	{ input_19_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ input_19_V_q0 sc_in sc_lv 8 signal 19 } 
	{ input_20_V_address0 sc_out sc_lv 11 signal 20 } 
	{ input_20_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ input_20_V_q0 sc_in sc_lv 8 signal 20 } 
	{ input_21_V_address0 sc_out sc_lv 11 signal 21 } 
	{ input_21_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ input_21_V_q0 sc_in sc_lv 8 signal 21 } 
	{ input_22_V_address0 sc_out sc_lv 11 signal 22 } 
	{ input_22_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ input_22_V_q0 sc_in sc_lv 8 signal 22 } 
	{ input_23_V_address0 sc_out sc_lv 11 signal 23 } 
	{ input_23_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ input_23_V_q0 sc_in sc_lv 8 signal 23 } 
	{ weight_V_address0 sc_out sc_lv 8 signal 24 } 
	{ weight_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ weight_V_q0 sc_in sc_lv 8 signal 24 } 
	{ bias_V_address0 sc_out sc_lv 5 signal 25 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 25 } 
	{ output_V_address0 sc_out sc_lv 13 signal 26 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ output_V_we0 sc_out sc_logic 1 signal 26 } 
	{ output_V_d0 sc_out sc_lv 8 signal 26 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_0_V", "role": "address0" }} , 
 	{ "name": "input_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_0_V", "role": "ce0" }} , 
 	{ "name": "input_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_0_V", "role": "q0" }} , 
 	{ "name": "input_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_1_V", "role": "address0" }} , 
 	{ "name": "input_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_1_V", "role": "ce0" }} , 
 	{ "name": "input_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_1_V", "role": "q0" }} , 
 	{ "name": "input_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_2_V", "role": "address0" }} , 
 	{ "name": "input_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_2_V", "role": "ce0" }} , 
 	{ "name": "input_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_2_V", "role": "q0" }} , 
 	{ "name": "input_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_3_V", "role": "address0" }} , 
 	{ "name": "input_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_3_V", "role": "ce0" }} , 
 	{ "name": "input_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_3_V", "role": "q0" }} , 
 	{ "name": "input_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_4_V", "role": "address0" }} , 
 	{ "name": "input_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_4_V", "role": "ce0" }} , 
 	{ "name": "input_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_4_V", "role": "q0" }} , 
 	{ "name": "input_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_5_V", "role": "address0" }} , 
 	{ "name": "input_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_5_V", "role": "ce0" }} , 
 	{ "name": "input_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_5_V", "role": "q0" }} , 
 	{ "name": "input_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_6_V", "role": "address0" }} , 
 	{ "name": "input_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_6_V", "role": "ce0" }} , 
 	{ "name": "input_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_6_V", "role": "q0" }} , 
 	{ "name": "input_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_7_V", "role": "address0" }} , 
 	{ "name": "input_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_7_V", "role": "ce0" }} , 
 	{ "name": "input_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_7_V", "role": "q0" }} , 
 	{ "name": "input_8_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_8_V", "role": "address0" }} , 
 	{ "name": "input_8_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_8_V", "role": "ce0" }} , 
 	{ "name": "input_8_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_8_V", "role": "q0" }} , 
 	{ "name": "input_9_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_9_V", "role": "address0" }} , 
 	{ "name": "input_9_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_9_V", "role": "ce0" }} , 
 	{ "name": "input_9_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_9_V", "role": "q0" }} , 
 	{ "name": "input_10_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_10_V", "role": "address0" }} , 
 	{ "name": "input_10_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_10_V", "role": "ce0" }} , 
 	{ "name": "input_10_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_10_V", "role": "q0" }} , 
 	{ "name": "input_11_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_11_V", "role": "address0" }} , 
 	{ "name": "input_11_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_11_V", "role": "ce0" }} , 
 	{ "name": "input_11_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_11_V", "role": "q0" }} , 
 	{ "name": "input_12_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_12_V", "role": "address0" }} , 
 	{ "name": "input_12_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_12_V", "role": "ce0" }} , 
 	{ "name": "input_12_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_12_V", "role": "q0" }} , 
 	{ "name": "input_13_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_13_V", "role": "address0" }} , 
 	{ "name": "input_13_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_13_V", "role": "ce0" }} , 
 	{ "name": "input_13_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_13_V", "role": "q0" }} , 
 	{ "name": "input_14_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_14_V", "role": "address0" }} , 
 	{ "name": "input_14_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_14_V", "role": "ce0" }} , 
 	{ "name": "input_14_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_14_V", "role": "q0" }} , 
 	{ "name": "input_15_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_15_V", "role": "address0" }} , 
 	{ "name": "input_15_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_15_V", "role": "ce0" }} , 
 	{ "name": "input_15_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_15_V", "role": "q0" }} , 
 	{ "name": "input_16_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_16_V", "role": "address0" }} , 
 	{ "name": "input_16_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_16_V", "role": "ce0" }} , 
 	{ "name": "input_16_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_16_V", "role": "q0" }} , 
 	{ "name": "input_17_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_17_V", "role": "address0" }} , 
 	{ "name": "input_17_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_17_V", "role": "ce0" }} , 
 	{ "name": "input_17_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_17_V", "role": "q0" }} , 
 	{ "name": "input_18_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_18_V", "role": "address0" }} , 
 	{ "name": "input_18_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_18_V", "role": "ce0" }} , 
 	{ "name": "input_18_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_18_V", "role": "q0" }} , 
 	{ "name": "input_19_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_19_V", "role": "address0" }} , 
 	{ "name": "input_19_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_19_V", "role": "ce0" }} , 
 	{ "name": "input_19_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_19_V", "role": "q0" }} , 
 	{ "name": "input_20_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_20_V", "role": "address0" }} , 
 	{ "name": "input_20_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_20_V", "role": "ce0" }} , 
 	{ "name": "input_20_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_20_V", "role": "q0" }} , 
 	{ "name": "input_21_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_21_V", "role": "address0" }} , 
 	{ "name": "input_21_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_21_V", "role": "ce0" }} , 
 	{ "name": "input_21_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_21_V", "role": "q0" }} , 
 	{ "name": "input_22_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_22_V", "role": "address0" }} , 
 	{ "name": "input_22_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_22_V", "role": "ce0" }} , 
 	{ "name": "input_22_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_22_V", "role": "q0" }} , 
 	{ "name": "input_23_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "input_23_V", "role": "address0" }} , 
 	{ "name": "input_23_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_23_V", "role": "ce0" }} , 
 	{ "name": "input_23_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_23_V", "role": "q0" }} , 
 	{ "name": "weight_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_V", "role": "address0" }} , 
 	{ "name": "weight_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ce0" }} , 
 	{ "name": "weight_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_V", "role": "q0" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "subconv_3x3_32_strid",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_Aem_x_U110", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	subconv_3x3_32_strid {
		input_0_V {Type I LastRead 5 FirstWrite -1}
		input_1_V {Type I LastRead 5 FirstWrite -1}
		input_2_V {Type I LastRead 5 FirstWrite -1}
		input_3_V {Type I LastRead 5 FirstWrite -1}
		input_4_V {Type I LastRead 5 FirstWrite -1}
		input_5_V {Type I LastRead 5 FirstWrite -1}
		input_6_V {Type I LastRead 5 FirstWrite -1}
		input_7_V {Type I LastRead 5 FirstWrite -1}
		input_8_V {Type I LastRead 5 FirstWrite -1}
		input_9_V {Type I LastRead 5 FirstWrite -1}
		input_10_V {Type I LastRead 5 FirstWrite -1}
		input_11_V {Type I LastRead 5 FirstWrite -1}
		input_12_V {Type I LastRead 5 FirstWrite -1}
		input_13_V {Type I LastRead 5 FirstWrite -1}
		input_14_V {Type I LastRead 5 FirstWrite -1}
		input_15_V {Type I LastRead 5 FirstWrite -1}
		input_16_V {Type I LastRead 5 FirstWrite -1}
		input_17_V {Type I LastRead 5 FirstWrite -1}
		input_18_V {Type I LastRead 5 FirstWrite -1}
		input_19_V {Type I LastRead 5 FirstWrite -1}
		input_20_V {Type I LastRead 5 FirstWrite -1}
		input_21_V {Type I LastRead 5 FirstWrite -1}
		input_22_V {Type I LastRead 5 FirstWrite -1}
		input_23_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "394033", "Max" : "394033"}
	, {"Name" : "Interval", "Min" : "394033", "Max" : "394033"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_0_V { ap_memory {  { input_0_V_address0 mem_address 1 11 }  { input_0_V_ce0 mem_ce 1 1 }  { input_0_V_q0 mem_dout 0 8 } } }
	input_1_V { ap_memory {  { input_1_V_address0 mem_address 1 11 }  { input_1_V_ce0 mem_ce 1 1 }  { input_1_V_q0 mem_dout 0 8 } } }
	input_2_V { ap_memory {  { input_2_V_address0 mem_address 1 11 }  { input_2_V_ce0 mem_ce 1 1 }  { input_2_V_q0 mem_dout 0 8 } } }
	input_3_V { ap_memory {  { input_3_V_address0 mem_address 1 11 }  { input_3_V_ce0 mem_ce 1 1 }  { input_3_V_q0 mem_dout 0 8 } } }
	input_4_V { ap_memory {  { input_4_V_address0 mem_address 1 11 }  { input_4_V_ce0 mem_ce 1 1 }  { input_4_V_q0 mem_dout 0 8 } } }
	input_5_V { ap_memory {  { input_5_V_address0 mem_address 1 11 }  { input_5_V_ce0 mem_ce 1 1 }  { input_5_V_q0 mem_dout 0 8 } } }
	input_6_V { ap_memory {  { input_6_V_address0 mem_address 1 11 }  { input_6_V_ce0 mem_ce 1 1 }  { input_6_V_q0 mem_dout 0 8 } } }
	input_7_V { ap_memory {  { input_7_V_address0 mem_address 1 11 }  { input_7_V_ce0 mem_ce 1 1 }  { input_7_V_q0 mem_dout 0 8 } } }
	input_8_V { ap_memory {  { input_8_V_address0 mem_address 1 11 }  { input_8_V_ce0 mem_ce 1 1 }  { input_8_V_q0 mem_dout 0 8 } } }
	input_9_V { ap_memory {  { input_9_V_address0 mem_address 1 11 }  { input_9_V_ce0 mem_ce 1 1 }  { input_9_V_q0 mem_dout 0 8 } } }
	input_10_V { ap_memory {  { input_10_V_address0 mem_address 1 11 }  { input_10_V_ce0 mem_ce 1 1 }  { input_10_V_q0 mem_dout 0 8 } } }
	input_11_V { ap_memory {  { input_11_V_address0 mem_address 1 11 }  { input_11_V_ce0 mem_ce 1 1 }  { input_11_V_q0 mem_dout 0 8 } } }
	input_12_V { ap_memory {  { input_12_V_address0 mem_address 1 11 }  { input_12_V_ce0 mem_ce 1 1 }  { input_12_V_q0 mem_dout 0 8 } } }
	input_13_V { ap_memory {  { input_13_V_address0 mem_address 1 11 }  { input_13_V_ce0 mem_ce 1 1 }  { input_13_V_q0 mem_dout 0 8 } } }
	input_14_V { ap_memory {  { input_14_V_address0 mem_address 1 11 }  { input_14_V_ce0 mem_ce 1 1 }  { input_14_V_q0 mem_dout 0 8 } } }
	input_15_V { ap_memory {  { input_15_V_address0 mem_address 1 11 }  { input_15_V_ce0 mem_ce 1 1 }  { input_15_V_q0 mem_dout 0 8 } } }
	input_16_V { ap_memory {  { input_16_V_address0 mem_address 1 11 }  { input_16_V_ce0 mem_ce 1 1 }  { input_16_V_q0 mem_dout 0 8 } } }
	input_17_V { ap_memory {  { input_17_V_address0 mem_address 1 11 }  { input_17_V_ce0 mem_ce 1 1 }  { input_17_V_q0 mem_dout 0 8 } } }
	input_18_V { ap_memory {  { input_18_V_address0 mem_address 1 11 }  { input_18_V_ce0 mem_ce 1 1 }  { input_18_V_q0 mem_dout 0 8 } } }
	input_19_V { ap_memory {  { input_19_V_address0 mem_address 1 11 }  { input_19_V_ce0 mem_ce 1 1 }  { input_19_V_q0 mem_dout 0 8 } } }
	input_20_V { ap_memory {  { input_20_V_address0 mem_address 1 11 }  { input_20_V_ce0 mem_ce 1 1 }  { input_20_V_q0 mem_dout 0 8 } } }
	input_21_V { ap_memory {  { input_21_V_address0 mem_address 1 11 }  { input_21_V_ce0 mem_ce 1 1 }  { input_21_V_q0 mem_dout 0 8 } } }
	input_22_V { ap_memory {  { input_22_V_address0 mem_address 1 11 }  { input_22_V_ce0 mem_ce 1 1 }  { input_22_V_q0 mem_dout 0 8 } } }
	input_23_V { ap_memory {  { input_23_V_address0 mem_address 1 11 }  { input_23_V_ce0 mem_ce 1 1 }  { input_23_V_q0 mem_dout 0 8 } } }
	weight_V { ap_memory {  { weight_V_address0 mem_address 1 8 }  { weight_V_ce0 mem_ce 1 1 }  { weight_V_q0 mem_dout 0 8 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 5 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	output_V { ap_memory {  { output_V_address0 mem_address 1 13 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 8 } } }
}
