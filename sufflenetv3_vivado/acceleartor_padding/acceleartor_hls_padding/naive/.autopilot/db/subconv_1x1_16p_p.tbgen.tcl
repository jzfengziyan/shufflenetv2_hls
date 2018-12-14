set moduleName subconv_1x1_16p_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {subconv_1x1_16p_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ weight float 32 regular {array 2304 { 1 3 } 1 1 }  }
	{ bias float 32 regular {array 48 { 1 3 } 1 1 }  }
	{ shuffleunit0_2_outpu float 32 regular {array 15552 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_1_Downs float 32 regular {array 15552 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "shuffleunit0_2_outpu", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "shuffleunit0_2_output_p","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 47,"step" : 1},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_1_Downs", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "ShuffleConvs_1_DownsampleUnit__conv1r_output_p","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 47,"step" : 1},{"low" : 0,"up" : 17,"step" : 1},{"low" : 0,"up" : 17,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 19
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ weight_address0 sc_out sc_lv 12 signal 0 } 
	{ weight_ce0 sc_out sc_logic 1 signal 0 } 
	{ weight_q0 sc_in sc_lv 32 signal 0 } 
	{ bias_address0 sc_out sc_lv 6 signal 1 } 
	{ bias_ce0 sc_out sc_logic 1 signal 1 } 
	{ bias_q0 sc_in sc_lv 32 signal 1 } 
	{ shuffleunit0_2_outpu_address0 sc_out sc_lv 14 signal 2 } 
	{ shuffleunit0_2_outpu_ce0 sc_out sc_logic 1 signal 2 } 
	{ shuffleunit0_2_outpu_q0 sc_in sc_lv 32 signal 2 } 
	{ ShuffleConvs_1_Downs_address0 sc_out sc_lv 14 signal 3 } 
	{ ShuffleConvs_1_Downs_ce0 sc_out sc_logic 1 signal 3 } 
	{ ShuffleConvs_1_Downs_we0 sc_out sc_logic 1 signal 3 } 
	{ ShuffleConvs_1_Downs_d0 sc_out sc_lv 32 signal 3 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "weight", "role": "address0" }} , 
 	{ "name": "weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight", "role": "ce0" }} , 
 	{ "name": "weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight", "role": "q0" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "shuffleunit0_2_outpu_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "shuffleunit0_2_outpu", "role": "address0" }} , 
 	{ "name": "shuffleunit0_2_outpu_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffleunit0_2_outpu", "role": "ce0" }} , 
 	{ "name": "shuffleunit0_2_outpu_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffleunit0_2_outpu", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_1_Downs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "ShuffleConvs_1_Downs", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_1_Downs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_1_Downs", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_1_Downs_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_1_Downs", "role": "we0" }} , 
 	{ "name": "ShuffleConvs_1_Downs_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ShuffleConvs_1_Downs", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3"],
		"CDFG" : "subconv_1x1_16p_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_faddbkb_x_U41", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_fmulcud_x_U42", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_fcmpdEe_x_U43", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	subconv_1x1_16p_p {
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		shuffleunit0_2_outpu {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs {Type O LastRead -1 FirstWrite 12}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "7202401", "Max" : "7202401"}
	, {"Name" : "Interval", "Min" : "7202401", "Max" : "7202401"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	weight { ap_memory {  { weight_address0 mem_address 1 12 }  { weight_ce0 mem_ce 1 1 }  { weight_q0 mem_dout 0 32 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 6 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 32 } } }
	shuffleunit0_2_outpu { ap_memory {  { shuffleunit0_2_outpu_address0 mem_address 1 14 }  { shuffleunit0_2_outpu_ce0 mem_ce 1 1 }  { shuffleunit0_2_outpu_q0 mem_dout 0 32 } } }
	ShuffleConvs_1_Downs { ap_memory {  { ShuffleConvs_1_Downs_address0 mem_address 1 14 }  { ShuffleConvs_1_Downs_ce0 mem_ce 1 1 }  { ShuffleConvs_1_Downs_we0 mem_we 1 1 }  { ShuffleConvs_1_Downs_d0 mem_din 1 32 } } }
}
