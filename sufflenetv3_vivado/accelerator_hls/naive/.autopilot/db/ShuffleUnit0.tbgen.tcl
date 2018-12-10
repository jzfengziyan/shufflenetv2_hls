set moduleName ShuffleUnit0
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {ShuffleUnit0}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_r float 32 regular {array 12288 { 1 1 } 1 1 }  }
	{ conv1_weight float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ conv1_bias float 32 regular {array 24 { 1 3 } 1 1 }  }
	{ conv2_weight float 32 regular {array 216 { 1 3 } 1 1 }  }
	{ conv2_bias float 32 regular {array 24 { 1 3 } 1 1 }  }
	{ conv3_weight float 32 regular {array 576 { 1 3 } 1 1 }  }
	{ conv3_bias float 32 regular {array 24 { 1 3 } 1 1 }  }
	{ output_r float 32 regular {array 12288 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv1_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv1_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv2_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv2_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv3_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv3_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "output_r", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 34
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_r_address0 sc_out sc_lv 14 signal 0 } 
	{ input_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_r_q0 sc_in sc_lv 32 signal 0 } 
	{ input_r_address1 sc_out sc_lv 14 signal 0 } 
	{ input_r_ce1 sc_out sc_logic 1 signal 0 } 
	{ input_r_q1 sc_in sc_lv 32 signal 0 } 
	{ conv1_weight_address0 sc_out sc_lv 10 signal 1 } 
	{ conv1_weight_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv1_weight_q0 sc_in sc_lv 32 signal 1 } 
	{ conv1_bias_address0 sc_out sc_lv 5 signal 2 } 
	{ conv1_bias_ce0 sc_out sc_logic 1 signal 2 } 
	{ conv1_bias_q0 sc_in sc_lv 32 signal 2 } 
	{ conv2_weight_address0 sc_out sc_lv 8 signal 3 } 
	{ conv2_weight_ce0 sc_out sc_logic 1 signal 3 } 
	{ conv2_weight_q0 sc_in sc_lv 32 signal 3 } 
	{ conv2_bias_address0 sc_out sc_lv 5 signal 4 } 
	{ conv2_bias_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv2_bias_q0 sc_in sc_lv 32 signal 4 } 
	{ conv3_weight_address0 sc_out sc_lv 10 signal 5 } 
	{ conv3_weight_ce0 sc_out sc_logic 1 signal 5 } 
	{ conv3_weight_q0 sc_in sc_lv 32 signal 5 } 
	{ conv3_bias_address0 sc_out sc_lv 5 signal 6 } 
	{ conv3_bias_ce0 sc_out sc_logic 1 signal 6 } 
	{ conv3_bias_q0 sc_in sc_lv 32 signal 6 } 
	{ output_r_address0 sc_out sc_lv 14 signal 7 } 
	{ output_r_ce0 sc_out sc_logic 1 signal 7 } 
	{ output_r_we0 sc_out sc_logic 1 signal 7 } 
	{ output_r_d0 sc_out sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "input_r", "role": "address0" }} , 
 	{ "name": "input_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "ce0" }} , 
 	{ "name": "input_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "q0" }} , 
 	{ "name": "input_r_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "input_r", "role": "address1" }} , 
 	{ "name": "input_r_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_r", "role": "ce1" }} , 
 	{ "name": "input_r_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_r", "role": "q1" }} , 
 	{ "name": "conv1_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv1_weight", "role": "address0" }} , 
 	{ "name": "conv1_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_weight", "role": "ce0" }} , 
 	{ "name": "conv1_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1_weight", "role": "q0" }} , 
 	{ "name": "conv1_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "conv1_bias", "role": "address0" }} , 
 	{ "name": "conv1_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_bias", "role": "ce0" }} , 
 	{ "name": "conv1_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1_bias", "role": "q0" }} , 
 	{ "name": "conv2_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv2_weight", "role": "address0" }} , 
 	{ "name": "conv2_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2_weight", "role": "ce0" }} , 
 	{ "name": "conv2_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2_weight", "role": "q0" }} , 
 	{ "name": "conv2_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "conv2_bias", "role": "address0" }} , 
 	{ "name": "conv2_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2_bias", "role": "ce0" }} , 
 	{ "name": "conv2_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2_bias", "role": "q0" }} , 
 	{ "name": "conv3_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv3_weight", "role": "address0" }} , 
 	{ "name": "conv3_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3_weight", "role": "ce0" }} , 
 	{ "name": "conv3_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv3_weight", "role": "q0" }} , 
 	{ "name": "conv3_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "conv3_bias", "role": "address0" }} , 
 	{ "name": "conv3_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3_bias", "role": "ce0" }} , 
 	{ "name": "conv3_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv3_bias", "role": "q0" }} , 
 	{ "name": "output_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "output_r", "role": "address0" }} , 
 	{ "name": "output_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "ce0" }} , 
 	{ "name": "output_r_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_r", "role": "we0" }} , 
 	{ "name": "output_r_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_r", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "9", "13"],
		"CDFG" : "ShuffleUnit0",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_401"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_1612_fu_411"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_1612_fu_411"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_2415_fu_423"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "weight"}]},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "bias"}]},
			{"Name" : "conv2_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_401", "Port" : "weight"}]},
			{"Name" : "conv2_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_401", "Port" : "bias"}]},
			{"Name" : "conv3_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "weight"}]},
			{"Name" : "conv3_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "9", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "bias"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_shuffle_2415_fu_423", "Port" : "output_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.left_part_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.right_part_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2_output_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3_output_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_401", "Parent" : "0", "Child" : ["7", "8"],
		"CDFG" : "subconv_3x3_16_no_re",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_401.ShuffleNetV2_faddbkb_x_U45", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_401.ShuffleNetV2_fmulcud_x_U46", "Parent" : "6"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_1612_fu_411", "Parent" : "0", "Child" : ["10", "11", "12"],
		"CDFG" : "subconv_1x1_1612",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_1612_fu_411.ShuffleNetV2_faddbkb_x_U21", "Parent" : "9"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_1612_fu_411.ShuffleNetV2_fmulcud_x_U22", "Parent" : "9"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_1612_fu_411.ShuffleNetV2_fcmpdEe_x_U23", "Parent" : "9"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_2415_fu_423", "Parent" : "0",
		"CDFG" : "shuffle_2415",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "right_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	ShuffleUnit0 {
		input_r {Type I LastRead 19 FirstWrite -1}
		conv1_weight {Type I LastRead 4 FirstWrite -1}
		conv1_bias {Type I LastRead 4 FirstWrite -1}
		conv2_weight {Type I LastRead 6 FirstWrite -1}
		conv2_bias {Type I LastRead 4 FirstWrite -1}
		conv3_weight {Type I LastRead 4 FirstWrite -1}
		conv3_bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	subconv_3x3_16_no_re {
		input_0 {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_1612 {
		input_0 {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 12}}
	shuffle_2415 {
		left_0 {Type I LastRead 3 FirstWrite -1}
		right_0 {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "4197156", "Max" : "4197156"}
	, {"Name" : "Interval", "Min" : "4197156", "Max" : "4197156"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_r { ap_memory {  { input_r_address0 mem_address 1 14 }  { input_r_ce0 mem_ce 1 1 }  { input_r_q0 mem_dout 0 32 }  { input_r_address1 mem_address 1 14 }  { input_r_ce1 mem_ce 1 1 }  { input_r_q1 mem_dout 0 32 } } }
	conv1_weight { ap_memory {  { conv1_weight_address0 mem_address 1 10 }  { conv1_weight_ce0 mem_ce 1 1 }  { conv1_weight_q0 mem_dout 0 32 } } }
	conv1_bias { ap_memory {  { conv1_bias_address0 mem_address 1 5 }  { conv1_bias_ce0 mem_ce 1 1 }  { conv1_bias_q0 mem_dout 0 32 } } }
	conv2_weight { ap_memory {  { conv2_weight_address0 mem_address 1 8 }  { conv2_weight_ce0 mem_ce 1 1 }  { conv2_weight_q0 mem_dout 0 32 } } }
	conv2_bias { ap_memory {  { conv2_bias_address0 mem_address 1 5 }  { conv2_bias_ce0 mem_ce 1 1 }  { conv2_bias_q0 mem_dout 0 32 } } }
	conv3_weight { ap_memory {  { conv3_weight_address0 mem_address 1 10 }  { conv3_weight_ce0 mem_ce 1 1 }  { conv3_weight_q0 mem_dout 0 32 } } }
	conv3_bias { ap_memory {  { conv3_bias_address0 mem_address 1 5 }  { conv3_bias_ce0 mem_ce 1 1 }  { conv3_bias_q0 mem_dout 0 32 } } }
	output_r { ap_memory {  { output_r_address0 mem_address 1 14 }  { output_r_ce0 mem_ce 1 1 }  { output_r_we0 mem_we 1 1 }  { output_r_d0 mem_din 1 32 } } }
}
