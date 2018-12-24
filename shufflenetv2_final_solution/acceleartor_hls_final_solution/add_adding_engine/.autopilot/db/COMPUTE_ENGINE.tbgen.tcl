set moduleName COMPUTE_ENGINE
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {COMPUTE_ENGINE}
set C_modelType { int 8 }
set C_modelArgList {
	{ w0_V int 8 regular  }
	{ b0_V int 8 regular  }
	{ w1_V int 8 regular  }
	{ b1_V int 8 regular  }
	{ w2_V int 8 regular  }
	{ b2_V int 8 regular  }
	{ w3_V int 8 regular  }
	{ b3_V int 8 regular  }
	{ w4_V int 8 regular  }
	{ b4_V int 8 regular  }
	{ w5_V int 8 regular  }
	{ b5_V int 8 regular  }
	{ w6_V int 8 regular  }
	{ b6_V int 8 regular  }
	{ w7_V int 8 regular  }
	{ b7_V int 8 regular  }
	{ w8_V int 8 regular  }
	{ b8_V int 8 regular  }
	{ w9_V int 8 regular  }
	{ b9_V int 8 regular  }
	{ w10_V int 8 regular  }
	{ b10_V int 8 regular  }
	{ w11_V int 8 regular  }
	{ b11_V int 8 regular  }
	{ w12_V int 8 regular  }
	{ b12_V int 8 regular  }
	{ w13_V int 8 regular  }
	{ b13_V int 8 regular  }
	{ w14_V int 8 regular  }
	{ b14_V int 8 regular  }
	{ w15_V int 8 regular  }
	{ b15_V int 8 regular  }
	{ w16_V int 8 regular  }
	{ b16_V int 8 regular  }
	{ w17_V int 8 regular  }
	{ b17_V int 8 regular  }
	{ w18_V int 8 regular  }
	{ b18_V int 8 regular  }
	{ w19_V int 8 regular  }
	{ b19_V int 8 regular  }
	{ w20_V int 8 regular  }
	{ b20_V int 8 regular  }
	{ w21_V int 8 regular  }
	{ b21_V int 8 regular  }
	{ w22_V int 8 regular  }
	{ b22_V int 8 regular  }
	{ w23_V int 8 regular  }
	{ b23_V int 8 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "w0_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b0_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w1_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b1_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w2_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b2_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w3_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b3_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w4_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b4_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w5_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b5_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w6_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b6_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w7_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b7_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w8_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b8_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w9_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b9_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w10_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b10_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w11_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b11_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w12_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b12_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w13_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b13_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w14_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b14_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w15_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b15_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w16_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b16_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w17_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b17_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w18_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b18_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w19_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b19_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w20_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b20_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w21_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b21_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w22_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b22_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "w23_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "b23_V", "interface" : "wire", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 8} ]}
# RTL Port declarations: 
set portNum 55
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ w0_V sc_in sc_lv 8 signal 0 } 
	{ b0_V sc_in sc_lv 8 signal 1 } 
	{ w1_V sc_in sc_lv 8 signal 2 } 
	{ b1_V sc_in sc_lv 8 signal 3 } 
	{ w2_V sc_in sc_lv 8 signal 4 } 
	{ b2_V sc_in sc_lv 8 signal 5 } 
	{ w3_V sc_in sc_lv 8 signal 6 } 
	{ b3_V sc_in sc_lv 8 signal 7 } 
	{ w4_V sc_in sc_lv 8 signal 8 } 
	{ b4_V sc_in sc_lv 8 signal 9 } 
	{ w5_V sc_in sc_lv 8 signal 10 } 
	{ b5_V sc_in sc_lv 8 signal 11 } 
	{ w6_V sc_in sc_lv 8 signal 12 } 
	{ b6_V sc_in sc_lv 8 signal 13 } 
	{ w7_V sc_in sc_lv 8 signal 14 } 
	{ b7_V sc_in sc_lv 8 signal 15 } 
	{ w8_V sc_in sc_lv 8 signal 16 } 
	{ b8_V sc_in sc_lv 8 signal 17 } 
	{ w9_V sc_in sc_lv 8 signal 18 } 
	{ b9_V sc_in sc_lv 8 signal 19 } 
	{ w10_V sc_in sc_lv 8 signal 20 } 
	{ b10_V sc_in sc_lv 8 signal 21 } 
	{ w11_V sc_in sc_lv 8 signal 22 } 
	{ b11_V sc_in sc_lv 8 signal 23 } 
	{ w12_V sc_in sc_lv 8 signal 24 } 
	{ b12_V sc_in sc_lv 8 signal 25 } 
	{ w13_V sc_in sc_lv 8 signal 26 } 
	{ b13_V sc_in sc_lv 8 signal 27 } 
	{ w14_V sc_in sc_lv 8 signal 28 } 
	{ b14_V sc_in sc_lv 8 signal 29 } 
	{ w15_V sc_in sc_lv 8 signal 30 } 
	{ b15_V sc_in sc_lv 8 signal 31 } 
	{ w16_V sc_in sc_lv 8 signal 32 } 
	{ b16_V sc_in sc_lv 8 signal 33 } 
	{ w17_V sc_in sc_lv 8 signal 34 } 
	{ b17_V sc_in sc_lv 8 signal 35 } 
	{ w18_V sc_in sc_lv 8 signal 36 } 
	{ b18_V sc_in sc_lv 8 signal 37 } 
	{ w19_V sc_in sc_lv 8 signal 38 } 
	{ b19_V sc_in sc_lv 8 signal 39 } 
	{ w20_V sc_in sc_lv 8 signal 40 } 
	{ b20_V sc_in sc_lv 8 signal 41 } 
	{ w21_V sc_in sc_lv 8 signal 42 } 
	{ b21_V sc_in sc_lv 8 signal 43 } 
	{ w22_V sc_in sc_lv 8 signal 44 } 
	{ b22_V sc_in sc_lv 8 signal 45 } 
	{ w23_V sc_in sc_lv 8 signal 46 } 
	{ b23_V sc_in sc_lv 8 signal 47 } 
	{ ap_return sc_out sc_lv 8 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "w0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w0_V", "role": "default" }} , 
 	{ "name": "b0_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b0_V", "role": "default" }} , 
 	{ "name": "w1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w1_V", "role": "default" }} , 
 	{ "name": "b1_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b1_V", "role": "default" }} , 
 	{ "name": "w2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w2_V", "role": "default" }} , 
 	{ "name": "b2_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b2_V", "role": "default" }} , 
 	{ "name": "w3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w3_V", "role": "default" }} , 
 	{ "name": "b3_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b3_V", "role": "default" }} , 
 	{ "name": "w4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w4_V", "role": "default" }} , 
 	{ "name": "b4_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b4_V", "role": "default" }} , 
 	{ "name": "w5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w5_V", "role": "default" }} , 
 	{ "name": "b5_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b5_V", "role": "default" }} , 
 	{ "name": "w6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w6_V", "role": "default" }} , 
 	{ "name": "b6_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b6_V", "role": "default" }} , 
 	{ "name": "w7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w7_V", "role": "default" }} , 
 	{ "name": "b7_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b7_V", "role": "default" }} , 
 	{ "name": "w8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w8_V", "role": "default" }} , 
 	{ "name": "b8_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b8_V", "role": "default" }} , 
 	{ "name": "w9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w9_V", "role": "default" }} , 
 	{ "name": "b9_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b9_V", "role": "default" }} , 
 	{ "name": "w10_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w10_V", "role": "default" }} , 
 	{ "name": "b10_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b10_V", "role": "default" }} , 
 	{ "name": "w11_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w11_V", "role": "default" }} , 
 	{ "name": "b11_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b11_V", "role": "default" }} , 
 	{ "name": "w12_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w12_V", "role": "default" }} , 
 	{ "name": "b12_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b12_V", "role": "default" }} , 
 	{ "name": "w13_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w13_V", "role": "default" }} , 
 	{ "name": "b13_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b13_V", "role": "default" }} , 
 	{ "name": "w14_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w14_V", "role": "default" }} , 
 	{ "name": "b14_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b14_V", "role": "default" }} , 
 	{ "name": "w15_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w15_V", "role": "default" }} , 
 	{ "name": "b15_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b15_V", "role": "default" }} , 
 	{ "name": "w16_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w16_V", "role": "default" }} , 
 	{ "name": "b16_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b16_V", "role": "default" }} , 
 	{ "name": "w17_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w17_V", "role": "default" }} , 
 	{ "name": "b17_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b17_V", "role": "default" }} , 
 	{ "name": "w18_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w18_V", "role": "default" }} , 
 	{ "name": "b18_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b18_V", "role": "default" }} , 
 	{ "name": "w19_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w19_V", "role": "default" }} , 
 	{ "name": "b19_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b19_V", "role": "default" }} , 
 	{ "name": "w20_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w20_V", "role": "default" }} , 
 	{ "name": "b20_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b20_V", "role": "default" }} , 
 	{ "name": "w21_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w21_V", "role": "default" }} , 
 	{ "name": "b21_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b21_V", "role": "default" }} , 
 	{ "name": "w22_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w22_V", "role": "default" }} , 
 	{ "name": "b22_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b22_V", "role": "default" }} , 
 	{ "name": "w23_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "w23_V", "role": "default" }} , 
 	{ "name": "b23_V", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "b23_V", "role": "default" }} , 
 	{ "name": "ap_return", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ap_return", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
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
			{"Name" : "b23_V", "Type" : "None", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
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
	{"Name" : "Latency", "Min" : "6", "Max" : "6"}
	, {"Name" : "Interval", "Min" : "6", "Max" : "6"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	w0_V { ap_none {  { w0_V in_data 0 8 } } }
	b0_V { ap_none {  { b0_V in_data 0 8 } } }
	w1_V { ap_none {  { w1_V in_data 0 8 } } }
	b1_V { ap_none {  { b1_V in_data 0 8 } } }
	w2_V { ap_none {  { w2_V in_data 0 8 } } }
	b2_V { ap_none {  { b2_V in_data 0 8 } } }
	w3_V { ap_none {  { w3_V in_data 0 8 } } }
	b3_V { ap_none {  { b3_V in_data 0 8 } } }
	w4_V { ap_none {  { w4_V in_data 0 8 } } }
	b4_V { ap_none {  { b4_V in_data 0 8 } } }
	w5_V { ap_none {  { w5_V in_data 0 8 } } }
	b5_V { ap_none {  { b5_V in_data 0 8 } } }
	w6_V { ap_none {  { w6_V in_data 0 8 } } }
	b6_V { ap_none {  { b6_V in_data 0 8 } } }
	w7_V { ap_none {  { w7_V in_data 0 8 } } }
	b7_V { ap_none {  { b7_V in_data 0 8 } } }
	w8_V { ap_none {  { w8_V in_data 0 8 } } }
	b8_V { ap_none {  { b8_V in_data 0 8 } } }
	w9_V { ap_none {  { w9_V in_data 0 8 } } }
	b9_V { ap_none {  { b9_V in_data 0 8 } } }
	w10_V { ap_none {  { w10_V in_data 0 8 } } }
	b10_V { ap_none {  { b10_V in_data 0 8 } } }
	w11_V { ap_none {  { w11_V in_data 0 8 } } }
	b11_V { ap_none {  { b11_V in_data 0 8 } } }
	w12_V { ap_none {  { w12_V in_data 0 8 } } }
	b12_V { ap_none {  { b12_V in_data 0 8 } } }
	w13_V { ap_none {  { w13_V in_data 0 8 } } }
	b13_V { ap_none {  { b13_V in_data 0 8 } } }
	w14_V { ap_none {  { w14_V in_data 0 8 } } }
	b14_V { ap_none {  { b14_V in_data 0 8 } } }
	w15_V { ap_none {  { w15_V in_data 0 8 } } }
	b15_V { ap_none {  { b15_V in_data 0 8 } } }
	w16_V { ap_none {  { w16_V in_data 0 8 } } }
	b16_V { ap_none {  { b16_V in_data 0 8 } } }
	w17_V { ap_none {  { w17_V in_data 0 8 } } }
	b17_V { ap_none {  { b17_V in_data 0 8 } } }
	w18_V { ap_none {  { w18_V in_data 0 8 } } }
	b18_V { ap_none {  { b18_V in_data 0 8 } } }
	w19_V { ap_none {  { w19_V in_data 0 8 } } }
	b19_V { ap_none {  { b19_V in_data 0 8 } } }
	w20_V { ap_none {  { w20_V in_data 0 8 } } }
	b20_V { ap_none {  { b20_V in_data 0 8 } } }
	w21_V { ap_none {  { w21_V in_data 0 8 } } }
	b21_V { ap_none {  { b21_V in_data 0 8 } } }
	w22_V { ap_none {  { w22_V in_data 0 8 } } }
	b22_V { ap_none {  { b22_V in_data 0 8 } } }
	w23_V { ap_none {  { w23_V in_data 0 8 } } }
	b23_V { ap_none {  { b23_V in_data 0 8 } } }
}
