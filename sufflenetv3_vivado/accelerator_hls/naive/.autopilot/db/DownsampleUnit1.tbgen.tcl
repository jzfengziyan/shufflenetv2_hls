set moduleName DownsampleUnit1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {DownsampleUnit1}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv1r_weight float 32 regular {array 2304 { 1 3 } 1 1 }  }
	{ conv1r_bias float 32 regular {array 48 { 1 3 } 1 1 }  }
	{ conv2r_weight float 32 regular {array 432 { 1 3 } 1 1 }  }
	{ conv2r_bias float 32 regular {array 48 { 1 3 } 1 1 }  }
	{ conv3r_weight float 32 regular {array 2304 { 1 3 } 1 1 }  }
	{ conv3r_bias float 32 regular {array 48 { 1 3 } 1 1 }  }
	{ conv1l_weight float 32 regular {array 432 { 1 3 } 1 1 }  }
	{ conv1l_bias float 32 regular {array 48 { 1 3 } 1 1 }  }
	{ conv2l_weight float 32 regular {array 2304 { 1 3 } 1 1 }  }
	{ conv2l_bias float 32 regular {array 48 { 1 3 } 1 1 }  }
	{ shuffleunit0_2_outpu float 32 regular {array 12288 { 1 3 } 1 1 } {global 0}  }
	{ downsampleunit1_outp float 32 regular {array 6144 { 0 3 } 0 1 } {global 1}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "conv1r_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv1r_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv2r_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv2r_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv3r_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv3r_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv1l_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv1l_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv2l_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "conv2l_bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "shuffleunit0_2_outpu", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "shuffleunit0_2_output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 47,"step" : 1},{"low" : 0,"up" : 15,"step" : 1},{"low" : 0,"up" : 15,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "downsampleunit1_outp", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "downsampleunit1_output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 95,"step" : 1},{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 7,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 43
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ conv1r_weight_address0 sc_out sc_lv 12 signal 0 } 
	{ conv1r_weight_ce0 sc_out sc_logic 1 signal 0 } 
	{ conv1r_weight_q0 sc_in sc_lv 32 signal 0 } 
	{ conv1r_bias_address0 sc_out sc_lv 6 signal 1 } 
	{ conv1r_bias_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv1r_bias_q0 sc_in sc_lv 32 signal 1 } 
	{ conv2r_weight_address0 sc_out sc_lv 9 signal 2 } 
	{ conv2r_weight_ce0 sc_out sc_logic 1 signal 2 } 
	{ conv2r_weight_q0 sc_in sc_lv 32 signal 2 } 
	{ conv2r_bias_address0 sc_out sc_lv 6 signal 3 } 
	{ conv2r_bias_ce0 sc_out sc_logic 1 signal 3 } 
	{ conv2r_bias_q0 sc_in sc_lv 32 signal 3 } 
	{ conv3r_weight_address0 sc_out sc_lv 12 signal 4 } 
	{ conv3r_weight_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv3r_weight_q0 sc_in sc_lv 32 signal 4 } 
	{ conv3r_bias_address0 sc_out sc_lv 6 signal 5 } 
	{ conv3r_bias_ce0 sc_out sc_logic 1 signal 5 } 
	{ conv3r_bias_q0 sc_in sc_lv 32 signal 5 } 
	{ conv1l_weight_address0 sc_out sc_lv 9 signal 6 } 
	{ conv1l_weight_ce0 sc_out sc_logic 1 signal 6 } 
	{ conv1l_weight_q0 sc_in sc_lv 32 signal 6 } 
	{ conv1l_bias_address0 sc_out sc_lv 6 signal 7 } 
	{ conv1l_bias_ce0 sc_out sc_logic 1 signal 7 } 
	{ conv1l_bias_q0 sc_in sc_lv 32 signal 7 } 
	{ conv2l_weight_address0 sc_out sc_lv 12 signal 8 } 
	{ conv2l_weight_ce0 sc_out sc_logic 1 signal 8 } 
	{ conv2l_weight_q0 sc_in sc_lv 32 signal 8 } 
	{ conv2l_bias_address0 sc_out sc_lv 6 signal 9 } 
	{ conv2l_bias_ce0 sc_out sc_logic 1 signal 9 } 
	{ conv2l_bias_q0 sc_in sc_lv 32 signal 9 } 
	{ shuffleunit0_2_outpu_address0 sc_out sc_lv 14 signal 10 } 
	{ shuffleunit0_2_outpu_ce0 sc_out sc_logic 1 signal 10 } 
	{ shuffleunit0_2_outpu_q0 sc_in sc_lv 32 signal 10 } 
	{ downsampleunit1_outp_address0 sc_out sc_lv 13 signal 11 } 
	{ downsampleunit1_outp_ce0 sc_out sc_logic 1 signal 11 } 
	{ downsampleunit1_outp_we0 sc_out sc_logic 1 signal 11 } 
	{ downsampleunit1_outp_d0 sc_out sc_lv 32 signal 11 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "conv1r_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv1r_weight", "role": "address0" }} , 
 	{ "name": "conv1r_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1r_weight", "role": "ce0" }} , 
 	{ "name": "conv1r_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1r_weight", "role": "q0" }} , 
 	{ "name": "conv1r_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "conv1r_bias", "role": "address0" }} , 
 	{ "name": "conv1r_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1r_bias", "role": "ce0" }} , 
 	{ "name": "conv1r_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1r_bias", "role": "q0" }} , 
 	{ "name": "conv2r_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "conv2r_weight", "role": "address0" }} , 
 	{ "name": "conv2r_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2r_weight", "role": "ce0" }} , 
 	{ "name": "conv2r_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2r_weight", "role": "q0" }} , 
 	{ "name": "conv2r_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "conv2r_bias", "role": "address0" }} , 
 	{ "name": "conv2r_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2r_bias", "role": "ce0" }} , 
 	{ "name": "conv2r_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2r_bias", "role": "q0" }} , 
 	{ "name": "conv3r_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv3r_weight", "role": "address0" }} , 
 	{ "name": "conv3r_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3r_weight", "role": "ce0" }} , 
 	{ "name": "conv3r_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv3r_weight", "role": "q0" }} , 
 	{ "name": "conv3r_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "conv3r_bias", "role": "address0" }} , 
 	{ "name": "conv3r_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3r_bias", "role": "ce0" }} , 
 	{ "name": "conv3r_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv3r_bias", "role": "q0" }} , 
 	{ "name": "conv1l_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "conv1l_weight", "role": "address0" }} , 
 	{ "name": "conv1l_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1l_weight", "role": "ce0" }} , 
 	{ "name": "conv1l_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1l_weight", "role": "q0" }} , 
 	{ "name": "conv1l_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "conv1l_bias", "role": "address0" }} , 
 	{ "name": "conv1l_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1l_bias", "role": "ce0" }} , 
 	{ "name": "conv1l_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1l_bias", "role": "q0" }} , 
 	{ "name": "conv2l_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "conv2l_weight", "role": "address0" }} , 
 	{ "name": "conv2l_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2l_weight", "role": "ce0" }} , 
 	{ "name": "conv2l_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2l_weight", "role": "q0" }} , 
 	{ "name": "conv2l_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":6, "type": "signal", "bundle":{"name": "conv2l_bias", "role": "address0" }} , 
 	{ "name": "conv2l_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2l_bias", "role": "ce0" }} , 
 	{ "name": "conv2l_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2l_bias", "role": "q0" }} , 
 	{ "name": "shuffleunit0_2_outpu_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "shuffleunit0_2_outpu", "role": "address0" }} , 
 	{ "name": "shuffleunit0_2_outpu_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffleunit0_2_outpu", "role": "ce0" }} , 
 	{ "name": "shuffleunit0_2_outpu_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffleunit0_2_outpu", "role": "q0" }} , 
 	{ "name": "downsampleunit1_outp_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "downsampleunit1_outp", "role": "address0" }} , 
 	{ "name": "downsampleunit1_outp_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "downsampleunit1_outp", "role": "ce0" }} , 
 	{ "name": "downsampleunit1_outp_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "downsampleunit1_outp", "role": "we0" }} , 
 	{ "name": "downsampleunit1_outp_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "downsampleunit1_outp", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "10", "13", "17"],
		"CDFG" : "DownsampleUnit1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p16_fu_335"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_89_fu_359"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_89_fu_359"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_4811_fu_371"}],
		"Port" : [
			{"Name" : "conv1r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_1x1_16p16_fu_335", "Port" : "weight"}]},
			{"Name" : "conv1r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_1x1_16p16_fu_335", "Port" : "bias"}]},
			{"Name" : "conv2r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "weight"}]},
			{"Name" : "conv2r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "bias"}]},
			{"Name" : "conv3r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "weight"}]},
			{"Name" : "conv3r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "bias"}]},
			{"Name" : "conv1l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "weight"}]},
			{"Name" : "conv1l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "bias"}]},
			{"Name" : "conv2l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "weight"}]},
			{"Name" : "conv2l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "13", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "bias"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_1x1_16p16_fu_335", "Port" : "shuffleunit0_2_outpu"},
					{"ID" : "10", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "input_r"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_shuffle_4811_fu_371", "Port" : "output_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1r_output_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2r_ourput_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3r_ourput_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1l_output_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2l_output_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p16_fu_335", "Parent" : "0", "Child" : ["7", "8", "9"],
		"CDFG" : "subconv_1x1_16p16",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p16_fu_335.ShuffleNetV2_faddbkb_x_U59", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p16_fu_335.ShuffleNetV2_fmulcud_x_U60", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p16_fu_335.ShuffleNetV2_fcmpdEe_x_U61", "Parent" : "6"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_346", "Parent" : "0", "Child" : ["11", "12"],
		"CDFG" : "subconv_3x3_16_strid",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_346.ShuffleNetV2_faddbkb_x_U66", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_346.ShuffleNetV2_fmulcud_x_U67", "Parent" : "10"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_89_fu_359", "Parent" : "0", "Child" : ["14", "15", "16"],
		"CDFG" : "subconv_1x1_89",
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
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_89_fu_359.ShuffleNetV2_faddbkb_x_U72", "Parent" : "13"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_89_fu_359.ShuffleNetV2_fmulcud_x_U73", "Parent" : "13"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_89_fu_359.ShuffleNetV2_fcmpdEe_x_U74", "Parent" : "13"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_4811_fu_371", "Parent" : "0",
		"CDFG" : "shuffle_4811",
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
	DownsampleUnit1 {
		conv1r_weight {Type I LastRead 4 FirstWrite -1}
		conv1r_bias {Type I LastRead 4 FirstWrite -1}
		conv2r_weight {Type I LastRead 6 FirstWrite -1}
		conv2r_bias {Type I LastRead 4 FirstWrite -1}
		conv3r_weight {Type I LastRead 4 FirstWrite -1}
		conv3r_bias {Type I LastRead 4 FirstWrite -1}
		conv1l_weight {Type I LastRead 6 FirstWrite -1}
		conv1l_bias {Type I LastRead 4 FirstWrite -1}
		conv2l_weight {Type I LastRead 4 FirstWrite -1}
		conv2l_bias {Type I LastRead 4 FirstWrite -1}
		shuffleunit0_2_outpu {Type I LastRead 6 FirstWrite -1}
		downsampleunit1_outp {Type O LastRead -1 FirstWrite 4}}
	subconv_1x1_16p16 {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}
		shuffleunit0_2_outpu {Type I LastRead 4 FirstWrite -1}}
	subconv_3x3_16_strid {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_89 {
		input_0 {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 12}}
	shuffle_4811 {
		left_0 {Type I LastRead 3 FirstWrite -1}
		right_0 {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10339646", "Max" : "10339646"}
	, {"Name" : "Interval", "Min" : "10339646", "Max" : "10339646"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv1r_weight { ap_memory {  { conv1r_weight_address0 mem_address 1 12 }  { conv1r_weight_ce0 mem_ce 1 1 }  { conv1r_weight_q0 mem_dout 0 32 } } }
	conv1r_bias { ap_memory {  { conv1r_bias_address0 mem_address 1 6 }  { conv1r_bias_ce0 mem_ce 1 1 }  { conv1r_bias_q0 mem_dout 0 32 } } }
	conv2r_weight { ap_memory {  { conv2r_weight_address0 mem_address 1 9 }  { conv2r_weight_ce0 mem_ce 1 1 }  { conv2r_weight_q0 mem_dout 0 32 } } }
	conv2r_bias { ap_memory {  { conv2r_bias_address0 mem_address 1 6 }  { conv2r_bias_ce0 mem_ce 1 1 }  { conv2r_bias_q0 mem_dout 0 32 } } }
	conv3r_weight { ap_memory {  { conv3r_weight_address0 mem_address 1 12 }  { conv3r_weight_ce0 mem_ce 1 1 }  { conv3r_weight_q0 mem_dout 0 32 } } }
	conv3r_bias { ap_memory {  { conv3r_bias_address0 mem_address 1 6 }  { conv3r_bias_ce0 mem_ce 1 1 }  { conv3r_bias_q0 mem_dout 0 32 } } }
	conv1l_weight { ap_memory {  { conv1l_weight_address0 mem_address 1 9 }  { conv1l_weight_ce0 mem_ce 1 1 }  { conv1l_weight_q0 mem_dout 0 32 } } }
	conv1l_bias { ap_memory {  { conv1l_bias_address0 mem_address 1 6 }  { conv1l_bias_ce0 mem_ce 1 1 }  { conv1l_bias_q0 mem_dout 0 32 } } }
	conv2l_weight { ap_memory {  { conv2l_weight_address0 mem_address 1 12 }  { conv2l_weight_ce0 mem_ce 1 1 }  { conv2l_weight_q0 mem_dout 0 32 } } }
	conv2l_bias { ap_memory {  { conv2l_bias_address0 mem_address 1 6 }  { conv2l_bias_ce0 mem_ce 1 1 }  { conv2l_bias_q0 mem_dout 0 32 } } }
	shuffleunit0_2_outpu { ap_memory {  { shuffleunit0_2_outpu_address0 mem_address 1 14 }  { shuffleunit0_2_outpu_ce0 mem_ce 1 1 }  { shuffleunit0_2_outpu_q0 mem_dout 0 32 } } }
	downsampleunit1_outp { ap_memory {  { downsampleunit1_outp_address0 mem_address 1 13 }  { downsampleunit1_outp_ce0 mem_ce 1 1 }  { downsampleunit1_outp_we0 mem_we 1 1 }  { downsampleunit1_outp_d0 mem_din 1 32 } } }
}
