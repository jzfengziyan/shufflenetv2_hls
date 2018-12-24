set moduleName shuffle_96_l_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {shuffle_96_l_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_V int 8 regular {array 6912 { 0 3 } 0 1 }  }
	{ buffer1_1_96_4x4_p_V_8 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_1 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_2 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_3 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_4 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_5 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_6 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
	{ buffer1_1_96_4x4_p_V_7 int 8 regular {array 432 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 88,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 89,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 90,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 91,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 92,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 93,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 94,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "buffer1_1_96_4x4_p_V_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "buffer1_1_96_4x4_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 95,"step" : 8},{"low" : 0,"up" : 5,"step" : 1},{"low" : 0,"up" : 5,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 34
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_V_address0 sc_out sc_lv 13 signal 0 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_V_we0 sc_out sc_logic 1 signal 0 } 
	{ output_V_d0 sc_out sc_lv 8 signal 0 } 
	{ buffer1_1_96_4x4_p_V_8_address0 sc_out sc_lv 9 signal 1 } 
	{ buffer1_1_96_4x4_p_V_8_ce0 sc_out sc_logic 1 signal 1 } 
	{ buffer1_1_96_4x4_p_V_8_q0 sc_in sc_lv 8 signal 1 } 
	{ buffer1_1_96_4x4_p_V_1_address0 sc_out sc_lv 9 signal 2 } 
	{ buffer1_1_96_4x4_p_V_1_ce0 sc_out sc_logic 1 signal 2 } 
	{ buffer1_1_96_4x4_p_V_1_q0 sc_in sc_lv 8 signal 2 } 
	{ buffer1_1_96_4x4_p_V_2_address0 sc_out sc_lv 9 signal 3 } 
	{ buffer1_1_96_4x4_p_V_2_ce0 sc_out sc_logic 1 signal 3 } 
	{ buffer1_1_96_4x4_p_V_2_q0 sc_in sc_lv 8 signal 3 } 
	{ buffer1_1_96_4x4_p_V_3_address0 sc_out sc_lv 9 signal 4 } 
	{ buffer1_1_96_4x4_p_V_3_ce0 sc_out sc_logic 1 signal 4 } 
	{ buffer1_1_96_4x4_p_V_3_q0 sc_in sc_lv 8 signal 4 } 
	{ buffer1_1_96_4x4_p_V_4_address0 sc_out sc_lv 9 signal 5 } 
	{ buffer1_1_96_4x4_p_V_4_ce0 sc_out sc_logic 1 signal 5 } 
	{ buffer1_1_96_4x4_p_V_4_q0 sc_in sc_lv 8 signal 5 } 
	{ buffer1_1_96_4x4_p_V_5_address0 sc_out sc_lv 9 signal 6 } 
	{ buffer1_1_96_4x4_p_V_5_ce0 sc_out sc_logic 1 signal 6 } 
	{ buffer1_1_96_4x4_p_V_5_q0 sc_in sc_lv 8 signal 6 } 
	{ buffer1_1_96_4x4_p_V_6_address0 sc_out sc_lv 9 signal 7 } 
	{ buffer1_1_96_4x4_p_V_6_ce0 sc_out sc_logic 1 signal 7 } 
	{ buffer1_1_96_4x4_p_V_6_q0 sc_in sc_lv 8 signal 7 } 
	{ buffer1_1_96_4x4_p_V_7_address0 sc_out sc_lv 9 signal 8 } 
	{ buffer1_1_96_4x4_p_V_7_ce0 sc_out sc_logic 1 signal 8 } 
	{ buffer1_1_96_4x4_p_V_7_q0 sc_in sc_lv 8 signal 8 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_8", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_8", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_8", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_1", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_1", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_1", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_2", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_2", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_2", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_3", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_3", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_3", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_4", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_4", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_4", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_5", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_5", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_5", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_6", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_6", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_6", "role": "q0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_7", "role": "address0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_7", "role": "ce0" }} , 
 	{ "name": "buffer1_1_96_4x4_p_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "buffer1_1_96_4x4_p_V_7", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_jbC_x_U309", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	shuffle_96_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "16513", "Max" : "23425"}
	, {"Name" : "Interval", "Min" : "16513", "Max" : "23425"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	output_V { ap_memory {  { output_V_address0 mem_address 1 13 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 8 } } }
	buffer1_1_96_4x4_p_V_8 { ap_memory {  { buffer1_1_96_4x4_p_V_8_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_8_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_8_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_1 { ap_memory {  { buffer1_1_96_4x4_p_V_1_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_1_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_1_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_2 { ap_memory {  { buffer1_1_96_4x4_p_V_2_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_2_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_2_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_3 { ap_memory {  { buffer1_1_96_4x4_p_V_3_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_3_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_3_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_4 { ap_memory {  { buffer1_1_96_4x4_p_V_4_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_4_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_4_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_5 { ap_memory {  { buffer1_1_96_4x4_p_V_5_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_5_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_5_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_6 { ap_memory {  { buffer1_1_96_4x4_p_V_6_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_6_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_6_q0 mem_dout 0 8 } } }
	buffer1_1_96_4x4_p_V_7 { ap_memory {  { buffer1_1_96_4x4_p_V_7_address0 mem_address 1 9 }  { buffer1_1_96_4x4_p_V_7_ce0 mem_ce 1 1 }  { buffer1_1_96_4x4_p_V_7_q0 mem_dout 0 8 } } }
}
