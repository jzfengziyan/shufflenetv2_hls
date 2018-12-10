set moduleName DownsampleUnit2
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {DownsampleUnit2}
set C_modelType { void 0 }
set C_modelArgList {
	{ conv1r_weight float 32 regular {array 9216 { 1 3 } 1 1 }  }
	{ conv1r_bias float 32 regular {array 96 { 1 3 } 1 1 }  }
	{ conv2r_weight float 32 regular {array 864 { 1 3 } 1 1 }  }
	{ conv2r_bias float 32 regular {array 96 { 1 3 } 1 1 }  }
	{ conv3r_weight float 32 regular {array 9216 { 1 3 } 1 1 }  }
	{ conv3r_bias float 32 regular {array 96 { 1 3 } 1 1 }  }
	{ conv1l_weight float 32 regular {array 864 { 1 3 } 1 1 }  }
	{ conv1l_bias float 32 regular {array 96 { 1 3 } 1 1 }  }
	{ conv2l_weight float 32 regular {array 9216 { 1 3 } 1 1 }  }
	{ conv2l_bias float 32 regular {array 96 { 1 3 } 1 1 }  }
	{ shuffleunit1_7_outpu float 32 regular {array 6144 { 1 3 } 1 1 } {global 0}  }
	{ downsampleunit2_outp float 32 regular {array 3072 { 0 3 } 0 1 } {global 1}  }
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
 	{ "Name" : "shuffleunit1_7_outpu", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "shuffleunit1_7_output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 95,"step" : 1},{"low" : 0,"up" : 7,"step" : 1},{"low" : 0,"up" : 7,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "downsampleunit2_outp", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "downsampleunit2_output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 43
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ conv1r_weight_address0 sc_out sc_lv 14 signal 0 } 
	{ conv1r_weight_ce0 sc_out sc_logic 1 signal 0 } 
	{ conv1r_weight_q0 sc_in sc_lv 32 signal 0 } 
	{ conv1r_bias_address0 sc_out sc_lv 7 signal 1 } 
	{ conv1r_bias_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv1r_bias_q0 sc_in sc_lv 32 signal 1 } 
	{ conv2r_weight_address0 sc_out sc_lv 10 signal 2 } 
	{ conv2r_weight_ce0 sc_out sc_logic 1 signal 2 } 
	{ conv2r_weight_q0 sc_in sc_lv 32 signal 2 } 
	{ conv2r_bias_address0 sc_out sc_lv 7 signal 3 } 
	{ conv2r_bias_ce0 sc_out sc_logic 1 signal 3 } 
	{ conv2r_bias_q0 sc_in sc_lv 32 signal 3 } 
	{ conv3r_weight_address0 sc_out sc_lv 14 signal 4 } 
	{ conv3r_weight_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv3r_weight_q0 sc_in sc_lv 32 signal 4 } 
	{ conv3r_bias_address0 sc_out sc_lv 7 signal 5 } 
	{ conv3r_bias_ce0 sc_out sc_logic 1 signal 5 } 
	{ conv3r_bias_q0 sc_in sc_lv 32 signal 5 } 
	{ conv1l_weight_address0 sc_out sc_lv 10 signal 6 } 
	{ conv1l_weight_ce0 sc_out sc_logic 1 signal 6 } 
	{ conv1l_weight_q0 sc_in sc_lv 32 signal 6 } 
	{ conv1l_bias_address0 sc_out sc_lv 7 signal 7 } 
	{ conv1l_bias_ce0 sc_out sc_logic 1 signal 7 } 
	{ conv1l_bias_q0 sc_in sc_lv 32 signal 7 } 
	{ conv2l_weight_address0 sc_out sc_lv 14 signal 8 } 
	{ conv2l_weight_ce0 sc_out sc_logic 1 signal 8 } 
	{ conv2l_weight_q0 sc_in sc_lv 32 signal 8 } 
	{ conv2l_bias_address0 sc_out sc_lv 7 signal 9 } 
	{ conv2l_bias_ce0 sc_out sc_logic 1 signal 9 } 
	{ conv2l_bias_q0 sc_in sc_lv 32 signal 9 } 
	{ shuffleunit1_7_outpu_address0 sc_out sc_lv 13 signal 10 } 
	{ shuffleunit1_7_outpu_ce0 sc_out sc_logic 1 signal 10 } 
	{ shuffleunit1_7_outpu_q0 sc_in sc_lv 32 signal 10 } 
	{ downsampleunit2_outp_address0 sc_out sc_lv 12 signal 11 } 
	{ downsampleunit2_outp_ce0 sc_out sc_logic 1 signal 11 } 
	{ downsampleunit2_outp_we0 sc_out sc_logic 1 signal 11 } 
	{ downsampleunit2_outp_d0 sc_out sc_lv 32 signal 11 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "conv1r_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "conv1r_weight", "role": "address0" }} , 
 	{ "name": "conv1r_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1r_weight", "role": "ce0" }} , 
 	{ "name": "conv1r_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1r_weight", "role": "q0" }} , 
 	{ "name": "conv1r_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "conv1r_bias", "role": "address0" }} , 
 	{ "name": "conv1r_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1r_bias", "role": "ce0" }} , 
 	{ "name": "conv1r_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1r_bias", "role": "q0" }} , 
 	{ "name": "conv2r_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv2r_weight", "role": "address0" }} , 
 	{ "name": "conv2r_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2r_weight", "role": "ce0" }} , 
 	{ "name": "conv2r_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2r_weight", "role": "q0" }} , 
 	{ "name": "conv2r_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "conv2r_bias", "role": "address0" }} , 
 	{ "name": "conv2r_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2r_bias", "role": "ce0" }} , 
 	{ "name": "conv2r_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2r_bias", "role": "q0" }} , 
 	{ "name": "conv3r_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "conv3r_weight", "role": "address0" }} , 
 	{ "name": "conv3r_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3r_weight", "role": "ce0" }} , 
 	{ "name": "conv3r_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv3r_weight", "role": "q0" }} , 
 	{ "name": "conv3r_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "conv3r_bias", "role": "address0" }} , 
 	{ "name": "conv3r_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv3r_bias", "role": "ce0" }} , 
 	{ "name": "conv3r_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv3r_bias", "role": "q0" }} , 
 	{ "name": "conv1l_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv1l_weight", "role": "address0" }} , 
 	{ "name": "conv1l_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1l_weight", "role": "ce0" }} , 
 	{ "name": "conv1l_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1l_weight", "role": "q0" }} , 
 	{ "name": "conv1l_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "conv1l_bias", "role": "address0" }} , 
 	{ "name": "conv1l_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1l_bias", "role": "ce0" }} , 
 	{ "name": "conv1l_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1l_bias", "role": "q0" }} , 
 	{ "name": "conv2l_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "conv2l_weight", "role": "address0" }} , 
 	{ "name": "conv2l_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2l_weight", "role": "ce0" }} , 
 	{ "name": "conv2l_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2l_weight", "role": "q0" }} , 
 	{ "name": "conv2l_bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "conv2l_bias", "role": "address0" }} , 
 	{ "name": "conv2l_bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv2l_bias", "role": "ce0" }} , 
 	{ "name": "conv2l_bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv2l_bias", "role": "q0" }} , 
 	{ "name": "shuffleunit1_7_outpu_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "shuffleunit1_7_outpu", "role": "address0" }} , 
 	{ "name": "shuffleunit1_7_outpu_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffleunit1_7_outpu", "role": "ce0" }} , 
 	{ "name": "shuffleunit1_7_outpu_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffleunit1_7_outpu", "role": "q0" }} , 
 	{ "name": "downsampleunit2_outp_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "downsampleunit2_outp", "role": "address0" }} , 
 	{ "name": "downsampleunit2_outp_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "downsampleunit2_outp", "role": "ce0" }} , 
 	{ "name": "downsampleunit2_outp_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "downsampleunit2_outp", "role": "we0" }} , 
 	{ "name": "downsampleunit2_outp_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "downsampleunit2_outp", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "10", "14", "17"],
		"CDFG" : "DownsampleUnit2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p20_fu_335"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_419_fu_346"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_419_fu_346"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_9621_fu_371"}],
		"Port" : [
			{"Name" : "conv1r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_1x1_8p20_fu_335", "Port" : "weight"}]},
			{"Name" : "conv1r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "6", "SubInstance" : "grp_subconv_1x1_8p20_fu_335", "Port" : "bias"}]},
			{"Name" : "conv2r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "weight"}]},
			{"Name" : "conv2r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "bias"}]},
			{"Name" : "conv3r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "weight"}]},
			{"Name" : "conv3r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "bias"}]},
			{"Name" : "conv1l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "weight"}]},
			{"Name" : "conv1l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "bias"}]},
			{"Name" : "conv2l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "weight"}]},
			{"Name" : "conv2l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "10", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "bias"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "14", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "input_r"},
					{"ID" : "6", "SubInstance" : "grp_subconv_1x1_8p20_fu_335", "Port" : "shuffleunit1_7_outpu"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "17", "SubInstance" : "grp_shuffle_9621_fu_371", "Port" : "output_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1r_output_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2r_ourput_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv3r_ourput_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1l_output_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv2l_output_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p20_fu_335", "Parent" : "0", "Child" : ["7", "8", "9"],
		"CDFG" : "subconv_1x1_8p20",
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
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p20_fu_335.ShuffleNetV2_faddbkb_x_U110", "Parent" : "6"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p20_fu_335.ShuffleNetV2_fmulcud_x_U111", "Parent" : "6"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p20_fu_335.ShuffleNetV2_fcmpdEe_x_U112", "Parent" : "6"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_419_fu_346", "Parent" : "0", "Child" : ["11", "12", "13"],
		"CDFG" : "subconv_1x1_419",
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
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_419_fu_346.ShuffleNetV2_faddbkb_x_U123", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_419_fu_346.ShuffleNetV2_fmulcud_x_U124", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_419_fu_346.ShuffleNetV2_fcmpdEe_x_U125", "Parent" : "10"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_358", "Parent" : "0", "Child" : ["15", "16"],
		"CDFG" : "subconv_3x3_8_stride",
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
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_358.ShuffleNetV2_faddbkb_x_U117", "Parent" : "14"},
	{"ID" : "16", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_358.ShuffleNetV2_fmulcud_x_U118", "Parent" : "14"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_9621_fu_371", "Parent" : "0",
		"CDFG" : "shuffle_9621",
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
	DownsampleUnit2 {
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
		shuffleunit1_7_outpu {Type I LastRead 6 FirstWrite -1}
		downsampleunit2_outp {Type O LastRead -1 FirstWrite 4}}
	subconv_1x1_8p20 {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}
		shuffleunit1_7_outpu {Type I LastRead 4 FirstWrite -1}}
	subconv_1x1_419 {
		input_0 {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_8_stride {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 11}}
	shuffle_9621 {
		left_0 {Type I LastRead 3 FirstWrite -1}
		right_0 {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10040942", "Max" : "10040942"}
	, {"Name" : "Interval", "Min" : "10040942", "Max" : "10040942"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	conv1r_weight { ap_memory {  { conv1r_weight_address0 mem_address 1 14 }  { conv1r_weight_ce0 mem_ce 1 1 }  { conv1r_weight_q0 mem_dout 0 32 } } }
	conv1r_bias { ap_memory {  { conv1r_bias_address0 mem_address 1 7 }  { conv1r_bias_ce0 mem_ce 1 1 }  { conv1r_bias_q0 mem_dout 0 32 } } }
	conv2r_weight { ap_memory {  { conv2r_weight_address0 mem_address 1 10 }  { conv2r_weight_ce0 mem_ce 1 1 }  { conv2r_weight_q0 mem_dout 0 32 } } }
	conv2r_bias { ap_memory {  { conv2r_bias_address0 mem_address 1 7 }  { conv2r_bias_ce0 mem_ce 1 1 }  { conv2r_bias_q0 mem_dout 0 32 } } }
	conv3r_weight { ap_memory {  { conv3r_weight_address0 mem_address 1 14 }  { conv3r_weight_ce0 mem_ce 1 1 }  { conv3r_weight_q0 mem_dout 0 32 } } }
	conv3r_bias { ap_memory {  { conv3r_bias_address0 mem_address 1 7 }  { conv3r_bias_ce0 mem_ce 1 1 }  { conv3r_bias_q0 mem_dout 0 32 } } }
	conv1l_weight { ap_memory {  { conv1l_weight_address0 mem_address 1 10 }  { conv1l_weight_ce0 mem_ce 1 1 }  { conv1l_weight_q0 mem_dout 0 32 } } }
	conv1l_bias { ap_memory {  { conv1l_bias_address0 mem_address 1 7 }  { conv1l_bias_ce0 mem_ce 1 1 }  { conv1l_bias_q0 mem_dout 0 32 } } }
	conv2l_weight { ap_memory {  { conv2l_weight_address0 mem_address 1 14 }  { conv2l_weight_ce0 mem_ce 1 1 }  { conv2l_weight_q0 mem_dout 0 32 } } }
	conv2l_bias { ap_memory {  { conv2l_bias_address0 mem_address 1 7 }  { conv2l_bias_ce0 mem_ce 1 1 }  { conv2l_bias_q0 mem_dout 0 32 } } }
	shuffleunit1_7_outpu { ap_memory {  { shuffleunit1_7_outpu_address0 mem_address 1 13 }  { shuffleunit1_7_outpu_ce0 mem_ce 1 1 }  { shuffleunit1_7_outpu_q0 mem_dout 0 32 } } }
	downsampleunit2_outp { ap_memory {  { downsampleunit2_outp_address0 mem_address 1 12 }  { downsampleunit2_outp_ce0 mem_ce 1 1 }  { downsampleunit2_outp_we0 mem_we 1 1 }  { downsampleunit2_outp_d0 mem_din 1 32 } } }
}
