set C_TypeInfoList {{ 
"ShuffleNetV2" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"image": [[], {"array": [ {"array": [ {"scalar": "float"}, [3,32,32]]}, [1]]}] }, {"conv1_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [3,3,3]]}, [24]]}] }, {"shuffle_conv_3x3": [[], {"array": [ {"array": [ {"scalar": "float"}, [1,3,3]]}, [1080]]}] }, {"shuffle_conv_1x1": [[], {"array": [ {"array": [ {"scalar": "float"}, [24,1,1]]}, [5496]]}] }, {"conv_last_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [192,1,1]]}, [512]]}] }, {"fc_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [512]]}, [10]]}] }, {"bias": [[], {"array": [ {"scalar": "float"}, [3618]]}] }, {"fc_output": [[], {"array": [ {"scalar": "float"}, [1000]]}] }],["0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40"],""],
 "0": [ "weights_96_96_1x1", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "1": [ "weights_96_1_3x3", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "2": [ "weights_48_48_1x1", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "3": [ "weights_48_1_3x3", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "4": [ "weights_24_24_1x1", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "5": [ "weights_24_1_3x3", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "6": [ "shuffleunit2_2_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "7": [ "shuffleunit2_1_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "8": [ "shuffleunit2_0_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "9": [ "shuffleunit1_7_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "10": [ "shuffleunit1_6_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "11": [ "shuffleunit1_5_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "12": [ "shuffleunit1_4_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "13": [ "shuffleunit1_3_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "14": [ "shuffleunit1_2_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "15": [ "shuffleunit1_1_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "16": [ "shuffleunit1_0_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "17": [ "shuffleunit0_2_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "18": [ "shuffleunit0_1_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "19": [ "shuffleunit0_0_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "20": [ "fc_bias", [[], {"array": [ {"scalar": "float"}, [10]]}],""],
 "21": [ "downsampleunit2_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "22": [ "downsampleunit1_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "23": [ "downsampleunit0_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "24": [ "conv_last_output", [[], {"array": [ {"scalar": "float"}, [1,512,4,4]]}],""],
 "25": [ "conv_last_bias", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "26": [ "conv1_output", [[], {"array": [ {"scalar": "float"}, [1,24,32,32]]}],""],
 "27": [ "conv1_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "28": [ "buffer1_1_96_4x4", [[], {"array": [ {"scalar": "float"}, [1,96,4,4]]}],""],
 "29": [ "buffer1_1_48_8x8", [[], {"array": [ {"scalar": "float"}, [1,48,8,8]]}],""],
 "30": [ "buffer1_1_24_16x16", [[], {"array": [ {"scalar": "float"}, [1,24,16,16]]}],""],
 "31": [ "buffer0_1_96_4x4", [[], {"array": [ {"scalar": "float"}, [1,96,4,4]]}],""],
 "32": [ "buffer0_1_48_8x8", [[], {"array": [ {"scalar": "float"}, [1,48,8,8]]}],""],
 "33": [ "buffer0_1_24_16x16", [[], {"array": [ {"scalar": "float"}, [1,24,16,16]]}],""],
 "34": [ "bias_96", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "35": [ "bias_48", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "36": [ "bias_24", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "37": [ "avgpool_output", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "38": [ "ShuffleConvs_2_DownsampleUnit__conv1r_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "39": [ "ShuffleConvs_1_DownsampleUnit__conv1r_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "40": [ "ShuffleConvs_0_DownsampleUnit__conv1r_output", [[], {"array": [ {"scalar": "float"}, [1,24,32,32]]}],""]
}}
set moduleName ShuffleNetV2
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {ShuffleNetV2}
set C_modelType { void 0 }
set C_modelArgList {
	{ image_r float 32 regular {array 3072 { 1 3 } 1 1 }  }
	{ conv1_weight float 32 regular {array 648 { 1 3 } 1 1 }  }
	{ shuffle_conv_3x3 float 32 regular {array 9720 { 1 3 } 1 1 }  }
	{ shuffle_conv_1x1 float 32 regular {array 131904 { 1 3 } 1 1 }  }
	{ conv_last_weight float 32 regular {array 98304 { 1 3 } 1 1 }  }
	{ fc_weight float 32 regular {array 5120 { 1 3 } 1 1 }  }
	{ bias float 32 regular {array 3618 { 1 3 } 1 1 }  }
	{ fc_output float 32 regular {array 1000 { 0 3 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "image_r", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "image","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 31,"step" : 1},{"low" : 0,"up" : 31,"step" : 1}]}]}]} , 
 	{ "Name" : "conv1_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "conv1_weight","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 23,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "shuffle_conv_3x3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "shuffle_conv_3x3","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1079,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]}]}]} , 
 	{ "Name" : "shuffle_conv_1x1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "shuffle_conv_1x1","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 5495,"step" : 1},{"low" : 0,"up" : 23,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "conv_last_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "conv_last_weight","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 511,"step" : 1},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_weight", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fc_weight","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 511,"step" : 1}]}]}]} , 
 	{ "Name" : "bias", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "bias","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 3617,"step" : 1}]}]}]} , 
 	{ "Name" : "fc_output", "interface" : "memory", "bitwidth" : 32, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "fc_output","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 999,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 31
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ image_r_address0 sc_out sc_lv 12 signal 0 } 
	{ image_r_ce0 sc_out sc_logic 1 signal 0 } 
	{ image_r_q0 sc_in sc_lv 32 signal 0 } 
	{ conv1_weight_address0 sc_out sc_lv 10 signal 1 } 
	{ conv1_weight_ce0 sc_out sc_logic 1 signal 1 } 
	{ conv1_weight_q0 sc_in sc_lv 32 signal 1 } 
	{ shuffle_conv_3x3_address0 sc_out sc_lv 14 signal 2 } 
	{ shuffle_conv_3x3_ce0 sc_out sc_logic 1 signal 2 } 
	{ shuffle_conv_3x3_q0 sc_in sc_lv 32 signal 2 } 
	{ shuffle_conv_1x1_address0 sc_out sc_lv 18 signal 3 } 
	{ shuffle_conv_1x1_ce0 sc_out sc_logic 1 signal 3 } 
	{ shuffle_conv_1x1_q0 sc_in sc_lv 32 signal 3 } 
	{ conv_last_weight_address0 sc_out sc_lv 17 signal 4 } 
	{ conv_last_weight_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv_last_weight_q0 sc_in sc_lv 32 signal 4 } 
	{ fc_weight_address0 sc_out sc_lv 13 signal 5 } 
	{ fc_weight_ce0 sc_out sc_logic 1 signal 5 } 
	{ fc_weight_q0 sc_in sc_lv 32 signal 5 } 
	{ bias_address0 sc_out sc_lv 12 signal 6 } 
	{ bias_ce0 sc_out sc_logic 1 signal 6 } 
	{ bias_q0 sc_in sc_lv 32 signal 6 } 
	{ fc_output_address0 sc_out sc_lv 10 signal 7 } 
	{ fc_output_ce0 sc_out sc_logic 1 signal 7 } 
	{ fc_output_we0 sc_out sc_logic 1 signal 7 } 
	{ fc_output_d0 sc_out sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "image_r_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "image_r", "role": "address0" }} , 
 	{ "name": "image_r_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "image_r", "role": "ce0" }} , 
 	{ "name": "image_r_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "image_r", "role": "q0" }} , 
 	{ "name": "conv1_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv1_weight", "role": "address0" }} , 
 	{ "name": "conv1_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_weight", "role": "ce0" }} , 
 	{ "name": "conv1_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1_weight", "role": "q0" }} , 
 	{ "name": "shuffle_conv_3x3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "shuffle_conv_3x3", "role": "address0" }} , 
 	{ "name": "shuffle_conv_3x3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffle_conv_3x3", "role": "ce0" }} , 
 	{ "name": "shuffle_conv_3x3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffle_conv_3x3", "role": "q0" }} , 
 	{ "name": "shuffle_conv_1x1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "address0" }} , 
 	{ "name": "shuffle_conv_1x1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "ce0" }} , 
 	{ "name": "shuffle_conv_1x1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "q0" }} , 
 	{ "name": "conv_last_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "conv_last_weight", "role": "address0" }} , 
 	{ "name": "conv_last_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_weight", "role": "ce0" }} , 
 	{ "name": "conv_last_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_last_weight", "role": "q0" }} , 
 	{ "name": "fc_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "fc_weight", "role": "address0" }} , 
 	{ "name": "fc_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_weight", "role": "ce0" }} , 
 	{ "name": "fc_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_weight", "role": "q0" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "fc_output_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fc_output", "role": "address0" }} , 
 	{ "name": "fc_output_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_output", "role": "ce0" }} , 
 	{ "name": "fc_output_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_output", "role": "we0" }} , 
 	{ "name": "fc_output_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_output", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "46", "50", "54", "58", "62", "65", "68", "72", "75", "78", "82", "85", "88", "92", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_fu_7042"},
			{"State" : "ap_ST_fsm_state697", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_7054"},
			{"State" : "ap_ST_fsm_state524", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_fu_7066"},
			{"State" : "ap_ST_fsm_state138", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_fu_7078"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_fu_7090"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102"},
			{"State" : "ap_ST_fsm_state36", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115"},
			{"State" : "ap_ST_fsm_state89", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115"},
			{"State" : "ap_ST_fsm_state117", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115"},
			{"State" : "ap_ST_fsm_state546", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state570", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state586", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state608", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state627", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state649", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state668", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state690", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_fu_7127"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139"},
			{"State" : "ap_ST_fsm_state174", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139"},
			{"State" : "ap_ST_fsm_state212", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state253", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state294", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state335", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state376", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state417", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state458", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state499", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152"},
			{"State" : "ap_ST_fsm_state160", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state184", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state200", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state222", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state263", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state282", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state304", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state323", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state345", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state364", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state386", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state405", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state427", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state446", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state468", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state487", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state509", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_fu_7164"},
			{"State" : "ap_ST_fsm_state536", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176"},
			{"State" : "ap_ST_fsm_state560", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176"},
			{"State" : "ap_ST_fsm_state598", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189"},
			{"State" : "ap_ST_fsm_state639", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189"},
			{"State" : "ap_ST_fsm_state680", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state54", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state67", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state95", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state110", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state123", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_fu_7201"},
			{"State" : "ap_ST_fsm_state699", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_7213"},
			{"State" : "ap_ST_fsm_state72", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_fu_7221"},
			{"State" : "ap_ST_fsm_state100", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_fu_7221"},
			{"State" : "ap_ST_fsm_state128", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_fu_7221"},
			{"State" : "ap_ST_fsm_state227", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state268", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state309", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state350", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state391", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state432", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state473", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state514", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_fu_7233"},
			{"State" : "ap_ST_fsm_state613", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_fu_7250"},
			{"State" : "ap_ST_fsm_state654", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_fu_7250"},
			{"State" : "ap_ST_fsm_state695", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_fu_7250"},
			{"State" : "ap_ST_fsm_state29", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_fu_7262"},
			{"State" : "ap_ST_fsm_state44", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_fu_7270"},
			{"State" : "ap_ST_fsm_state162", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_fu_7278"},
			{"State" : "ap_ST_fsm_state186", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_fu_7286"},
			{"State" : "ap_ST_fsm_state548", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_fu_7294"},
			{"State" : "ap_ST_fsm_state572", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_fu_7302"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_conv1_fu_7042", "Port" : "input_r"}]},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_conv1_fu_7042", "Port" : "weight"}]},
			{"Name" : "shuffle_conv_3x3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffle_conv_1x1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_conv_last_fu_7054", "Port" : "weight"}]},
			{"Name" : "fc_weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_output", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "42", "SubInstance" : "grp_conv1_fu_7042", "Port" : "bias"}]},
			{"Name" : "conv_last_bias", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_conv_last_fu_7054", "Port" : "bias"}]},
			{"Name" : "fc_bias", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_32_fu_7090", "Port" : "conv1_output"},
					{"ID" : "42", "SubInstance" : "grp_conv1_fu_7042", "Port" : "output_r"},
					{"ID" : "62", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102", "Port" : "input_r"}]},
			{"Name" : "weights_24_24_1x1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "88", "SubInstance" : "grp_subconv_1x1_16_fu_7201", "Port" : "weight"},
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_32_fu_7090", "Port" : "weight"}]},
			{"Name" : "bias_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115", "Port" : "bias"},
					{"ID" : "88", "SubInstance" : "grp_subconv_1x1_16_fu_7201", "Port" : "bias"},
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_32_fu_7090", "Port" : "bias"},
					{"ID" : "62", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_32_fu_7090", "Port" : "ShuffleConvs_0_Downs"},
					{"ID" : "62", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102", "Port" : "input_r"}]},
			{"Name" : "weights_24_1_3x3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115", "Port" : "weight"},
					{"ID" : "62", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102", "Port" : "weight"}]},
			{"Name" : "buffer0_1_24_16x16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115", "Port" : "output_r"},
					{"ID" : "88", "SubInstance" : "grp_subconv_1x1_16_fu_7201", "Port" : "input_r"},
					{"ID" : "95", "SubInstance" : "grp_shuffle_24_fu_7221", "Port" : "left_r"},
					{"ID" : "62", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7102", "Port" : "output_r"}]},
			{"Name" : "buffer1_1_24_16x16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_shuffle_24_l_fu_7262", "Port" : "left_r"},
					{"ID" : "99", "SubInstance" : "grp_shuffle_24_r_fu_7270", "Port" : "right_r"},
					{"ID" : "65", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7115", "Port" : "input_r"},
					{"ID" : "88", "SubInstance" : "grp_subconv_1x1_16_fu_7201", "Port" : "output_r"},
					{"ID" : "95", "SubInstance" : "grp_shuffle_24_fu_7221", "Port" : "buffer1_1_24_16x16"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_shuffle_24_l_fu_7262", "Port" : "output_r"},
					{"ID" : "99", "SubInstance" : "grp_shuffle_24_r_fu_7270", "Port" : "output_r"}]},
			{"Name" : "shuffleunit0_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "95", "SubInstance" : "grp_shuffle_24_fu_7221", "Port" : "output_r"}]},
			{"Name" : "shuffleunit0_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "95", "SubInstance" : "grp_shuffle_24_fu_7221", "Port" : "output_r"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139", "Port" : "input_r"},
					{"ID" : "54", "SubInstance" : "grp_subconv_1x1_16p_fu_7078", "Port" : "shuffleunit0_2_outpu"},
					{"ID" : "95", "SubInstance" : "grp_shuffle_24_fu_7221", "Port" : "output_r"}]},
			{"Name" : "weights_48_48_1x1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_subconv_1x1_8_fu_7164", "Port" : "weight"},
					{"ID" : "54", "SubInstance" : "grp_subconv_1x1_16p_fu_7078", "Port" : "weight"}]},
			{"Name" : "bias_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_subconv_1x1_8_fu_7164", "Port" : "bias"},
					{"ID" : "72", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139", "Port" : "bias"},
					{"ID" : "54", "SubInstance" : "grp_subconv_1x1_16p_fu_7078", "Port" : "bias"},
					{"ID" : "75", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139", "Port" : "input_r"},
					{"ID" : "54", "SubInstance" : "grp_subconv_1x1_16p_fu_7078", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "weights_48_1_3x3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139", "Port" : "weight"},
					{"ID" : "75", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152", "Port" : "weight"}]},
			{"Name" : "buffer0_1_48_8x8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_subconv_1x1_8_fu_7164", "Port" : "input_r"},
					{"ID" : "72", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7139", "Port" : "output_r"},
					{"ID" : "75", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152", "Port" : "output_r"},
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "left_r"}]},
			{"Name" : "buffer1_1_48_8x8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "78", "SubInstance" : "grp_subconv_1x1_8_fu_7164", "Port" : "output_r"},
					{"ID" : "100", "SubInstance" : "grp_shuffle_48_l_fu_7278", "Port" : "left_r"},
					{"ID" : "101", "SubInstance" : "grp_shuffle_48_r_fu_7286", "Port" : "right_r"},
					{"ID" : "75", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7152", "Port" : "input_r"},
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "buffer1_1_48_8x8"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "100", "SubInstance" : "grp_shuffle_48_l_fu_7278", "Port" : "output_r"},
					{"ID" : "101", "SubInstance" : "grp_shuffle_48_r_fu_7286", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_3_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_4_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_5_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_6_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_subconv_1x1_8p_fu_7066", "Port" : "shuffleunit1_7_outpu"},
					{"ID" : "82", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176", "Port" : "input_r"},
					{"ID" : "96", "SubInstance" : "grp_shuffle_48_fu_7233", "Port" : "output_r"}]},
			{"Name" : "weights_96_96_1x1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_subconv_1x1_8p_fu_7066", "Port" : "weight"},
					{"ID" : "68", "SubInstance" : "grp_subconv_1x1_4_fu_7127", "Port" : "weight"}]},
			{"Name" : "bias_96", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_subconv_1x1_8p_fu_7066", "Port" : "bias"},
					{"ID" : "82", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176", "Port" : "bias"},
					{"ID" : "85", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189", "Port" : "bias"},
					{"ID" : "68", "SubInstance" : "grp_subconv_1x1_4_fu_7127", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_subconv_1x1_8p_fu_7066", "Port" : "ShuffleConvs_2_Downs"},
					{"ID" : "82", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176", "Port" : "input_r"}]},
			{"Name" : "weights_96_1_3x3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "82", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176", "Port" : "weight"},
					{"ID" : "85", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189", "Port" : "weight"}]},
			{"Name" : "buffer0_1_96_4x4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_96_fu_7250", "Port" : "left_r"},
					{"ID" : "82", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7176", "Port" : "output_r"},
					{"ID" : "85", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189", "Port" : "output_r"},
					{"ID" : "68", "SubInstance" : "grp_subconv_1x1_4_fu_7127", "Port" : "input_r"}]},
			{"Name" : "buffer1_1_96_4x4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_96_fu_7250", "Port" : "buffer1_1_96_4x4"},
					{"ID" : "102", "SubInstance" : "grp_shuffle_96_l_fu_7294", "Port" : "left_r"},
					{"ID" : "103", "SubInstance" : "grp_shuffle_96_r_fu_7302", "Port" : "right_r"},
					{"ID" : "85", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7189", "Port" : "input_r"},
					{"ID" : "68", "SubInstance" : "grp_subconv_1x1_4_fu_7127", "Port" : "output_r"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "102", "SubInstance" : "grp_shuffle_96_l_fu_7294", "Port" : "output_r"},
					{"ID" : "103", "SubInstance" : "grp_shuffle_96_r_fu_7302", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_96_fu_7250", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_96_fu_7250", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_96_fu_7250", "Port" : "output_r"},
					{"ID" : "46", "SubInstance" : "grp_conv_last_fu_7054", "Port" : "shuffleunit2_2_outpu"}]},
			{"Name" : "conv_last_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "46", "SubInstance" : "grp_conv_last_fu_7054", "Port" : "output_r"},
					{"ID" : "92", "SubInstance" : "grp_avgpool_fu_7213", "Port" : "conv_last_output"}]},
			{"Name" : "avgpool_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "92", "SubInstance" : "grp_avgpool_fu_7213", "Port" : "output_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit0_outp_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_0_outpu_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_1_outpu_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_2_outpu_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit1_outp_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_0_outpu_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_1_outpu_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_2_outpu_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_3_outpu_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_4_outpu_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_5_outpu_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_6_outpu_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_7_outpu_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit2_outp_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_0_outpu_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_1_outpu_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_7042", "Parent" : "0", "Child" : ["43", "44", "45"],
		"CDFG" : "conv1",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_7042.ShuffleNetV2_faddbkb_U1", "Parent" : "42"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_7042.ShuffleNetV2_fmulcud_U2", "Parent" : "42"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_7042.ShuffleNetV2_fcmpdEe_U3", "Parent" : "42"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7054", "Parent" : "0", "Child" : ["47", "48", "49"],
		"CDFG" : "conv_last",
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
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7054.ShuffleNetV2_faddbkb_x_U107", "Parent" : "46"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7054.ShuffleNetV2_fmulcud_x_U108", "Parent" : "46"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7054.ShuffleNetV2_fcmpdEe_x_U109", "Parent" : "46"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_fu_7066", "Parent" : "0", "Child" : ["51", "52", "53"],
		"CDFG" : "subconv_1x1_8p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_fu_7066.ShuffleNetV2_faddbkb_x_U74", "Parent" : "50"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_fu_7066.ShuffleNetV2_fmulcud_x_U75", "Parent" : "50"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_fu_7066.ShuffleNetV2_fcmpdEe_x_U76", "Parent" : "50"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_fu_7078", "Parent" : "0", "Child" : ["55", "56", "57"],
		"CDFG" : "subconv_1x1_16p",
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
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_fu_7078.ShuffleNetV2_faddbkb_x_U41", "Parent" : "54"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_fu_7078.ShuffleNetV2_fmulcud_x_U42", "Parent" : "54"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_fu_7078.ShuffleNetV2_fcmpdEe_x_U43", "Parent" : "54"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_fu_7090", "Parent" : "0", "Child" : ["59", "60", "61"],
		"CDFG" : "subconv_1x1_32",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_fu_7090.ShuffleNetV2_faddbkb_x_U8", "Parent" : "58"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_fu_7090.ShuffleNetV2_fmulcud_x_U9", "Parent" : "58"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_fu_7090.ShuffleNetV2_fcmpdEe_x_U10", "Parent" : "58"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_7102", "Parent" : "0", "Child" : ["63", "64"],
		"CDFG" : "subconv_3x3_32_strid",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_7102.ShuffleNetV2_faddbkb_x_U15", "Parent" : "62"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_7102.ShuffleNetV2_fmulcud_x_U16", "Parent" : "62"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_7115", "Parent" : "0", "Child" : ["66", "67"],
		"CDFG" : "subconv_3x3_16_no_re",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_7115.ShuffleNetV2_faddbkb_x_U32", "Parent" : "65"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_7115.ShuffleNetV2_fmulcud_x_U33", "Parent" : "65"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_fu_7127", "Parent" : "0", "Child" : ["69", "70", "71"],
		"CDFG" : "subconv_1x1_4",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_fu_7127.ShuffleNetV2_faddbkb_x_U87", "Parent" : "68"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_fu_7127.ShuffleNetV2_fmulcud_x_U88", "Parent" : "68"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_fu_7127.ShuffleNetV2_fcmpdEe_x_U89", "Parent" : "68"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_7139", "Parent" : "0", "Child" : ["73", "74"],
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_7139.ShuffleNetV2_faddbkb_x_U48", "Parent" : "72"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_7139.ShuffleNetV2_fmulcud_x_U49", "Parent" : "72"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_7152", "Parent" : "0", "Child" : ["76", "77"],
		"CDFG" : "subconv_3x3_8_no_rel",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_7152.ShuffleNetV2_faddbkb_x_U65", "Parent" : "75"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_7152.ShuffleNetV2_fmulcud_x_U66", "Parent" : "75"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_fu_7164", "Parent" : "0", "Child" : ["79", "80", "81"],
		"CDFG" : "subconv_1x1_8",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_fu_7164.ShuffleNetV2_faddbkb_x_U54", "Parent" : "78"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_fu_7164.ShuffleNetV2_fmulcud_x_U55", "Parent" : "78"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_fu_7164.ShuffleNetV2_fcmpdEe_x_U56", "Parent" : "78"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_7176", "Parent" : "0", "Child" : ["83", "84"],
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_7176.ShuffleNetV2_faddbkb_x_U81", "Parent" : "82"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_7176.ShuffleNetV2_fmulcud_x_U82", "Parent" : "82"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_7189", "Parent" : "0", "Child" : ["86", "87"],
		"CDFG" : "subconv_3x3_4_no_rel",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_7189.ShuffleNetV2_faddbkb_x_U98", "Parent" : "85"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_7189.ShuffleNetV2_fmulcud_x_U99", "Parent" : "85"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_fu_7201", "Parent" : "0", "Child" : ["89", "90", "91"],
		"CDFG" : "subconv_1x1_16",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_fu_7201.ShuffleNetV2_faddbkb_x_U21", "Parent" : "88"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_fu_7201.ShuffleNetV2_fmulcud_x_U22", "Parent" : "88"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_fu_7201.ShuffleNetV2_fcmpdEe_x_U23", "Parent" : "88"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_7213", "Parent" : "0", "Child" : ["93", "94"],
		"CDFG" : "avgpool",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_last_output", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_7213.ShuffleNetV2_faddbkb_x_U114", "Parent" : "92"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_7213.ShuffleNetV2_fmulcud_x_U115", "Parent" : "92"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_fu_7221", "Parent" : "0",
		"CDFG" : "shuffle_24",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_fu_7233", "Parent" : "0",
		"CDFG" : "shuffle_48",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_fu_7250", "Parent" : "0",
		"CDFG" : "shuffle_96",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_fu_7262", "Parent" : "0",
		"CDFG" : "shuffle_24_l",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_fu_7270", "Parent" : "0",
		"CDFG" : "shuffle_24_r",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_fu_7278", "Parent" : "0",
		"CDFG" : "shuffle_48_l",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_fu_7286", "Parent" : "0",
		"CDFG" : "shuffle_48_r",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_fu_7294", "Parent" : "0",
		"CDFG" : "shuffle_96_l",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_fu_7302", "Parent" : "0",
		"CDFG" : "shuffle_96_r",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_faddbkb_x_U118", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_fmulcud_x_U119", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		image_r {Type I LastRead 7 FirstWrite -1}
		conv1_weight {Type I LastRead 7 FirstWrite -1}
		shuffle_conv_3x3 {Type I LastRead 227 FirstWrite -1}
		shuffle_conv_1x1 {Type I LastRead 228 FirstWrite -1}
		conv_last_weight {Type I LastRead 4 FirstWrite -1}
		fc_weight {Type I LastRead 235 FirstWrite -1}
		bias {Type I LastRead 228 FirstWrite -1}
		fc_output {Type O LastRead -1 FirstWrite 242}
		conv1_bias {Type IO LastRead -1 FirstWrite -1}
		conv_last_bias {Type IO LastRead -1 FirstWrite -1}
		fc_bias {Type IO LastRead -1 FirstWrite -1}
		conv1_output {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1 {Type IO LastRead -1 FirstWrite -1}
		bias_24 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_24_1_3x3 {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_24_16x16 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16 {Type IO LastRead -1 FirstWrite -1}
		downsampleunit0_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_2_outpu {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1 {Type IO LastRead -1 FirstWrite -1}
		bias_48 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_48_1_3x3 {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_48_8x8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8 {Type IO LastRead -1 FirstWrite -1}
		downsampleunit1_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_3_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_4_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_5_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_6_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_7_outpu {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1 {Type IO LastRead -1 FirstWrite -1}
		bias_96 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_96_1_3x3 {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_96_4x4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4 {Type IO LastRead -1 FirstWrite -1}
		downsampleunit2_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu {Type IO LastRead -1 FirstWrite -1}
		conv_last_output {Type IO LastRead -1 FirstWrite -1}
		avgpool_output {Type IO LastRead -1 FirstWrite -1}}
	conv1 {
		input_r {Type I LastRead 7 FirstWrite -1}
		weight {Type I LastRead 7 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	conv_last {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}
		shuffleunit2_2_outpu {Type I LastRead 4 FirstWrite -1}}
	subconv_1x1_8p {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		shuffleunit1_7_outpu {Type I LastRead 4 FirstWrite -1}
		ShuffleConvs_2_Downs {Type O LastRead -1 FirstWrite 12}}
	subconv_1x1_16p {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		shuffleunit0_2_outpu {Type I LastRead 4 FirstWrite -1}
		ShuffleConvs_1_Downs {Type O LastRead -1 FirstWrite 12}}
	subconv_1x1_32 {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		conv1_output {Type I LastRead 4 FirstWrite -1}
		ShuffleConvs_0_Downs {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_32_strid {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_3x3_16_no_re {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_4 {
		input_r {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_16_strid {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_3x3_8_no_rel {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_8 {
		input_r {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_8_stride {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_3x3_4_no_rel {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_16 {
		input_r {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	avgpool {
		output_r {Type O LastRead -1 FirstWrite 6}
		conv_last_output {Type I LastRead 3 FirstWrite -1}}
	shuffle_24 {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}
		buffer1_1_24_16x16 {Type I LastRead 3 FirstWrite -1}}
	shuffle_48 {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}
		buffer1_1_48_8x8 {Type I LastRead 3 FirstWrite -1}}
	shuffle_96 {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}
		buffer1_1_96_4x4 {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_l {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_24_r {
		right_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_48_l {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_48_r {
		right_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_96_l {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_96_r {
		right_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "112083832", "Max" : "112083832"}
	, {"Name" : "Interval", "Min" : "112083833", "Max" : "112083833"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_r { ap_memory {  { image_r_address0 mem_address 1 12 }  { image_r_ce0 mem_ce 1 1 }  { image_r_q0 mem_dout 0 32 } } }
	conv1_weight { ap_memory {  { conv1_weight_address0 mem_address 1 10 }  { conv1_weight_ce0 mem_ce 1 1 }  { conv1_weight_q0 mem_dout 0 32 } } }
	shuffle_conv_3x3 { ap_memory {  { shuffle_conv_3x3_address0 mem_address 1 14 }  { shuffle_conv_3x3_ce0 mem_ce 1 1 }  { shuffle_conv_3x3_q0 mem_dout 0 32 } } }
	shuffle_conv_1x1 { ap_memory {  { shuffle_conv_1x1_address0 mem_address 1 18 }  { shuffle_conv_1x1_ce0 mem_ce 1 1 }  { shuffle_conv_1x1_q0 mem_dout 0 32 } } }
	conv_last_weight { ap_memory {  { conv_last_weight_address0 mem_address 1 17 }  { conv_last_weight_ce0 mem_ce 1 1 }  { conv_last_weight_q0 mem_dout 0 32 } } }
	fc_weight { ap_memory {  { fc_weight_address0 mem_address 1 13 }  { fc_weight_ce0 mem_ce 1 1 }  { fc_weight_q0 mem_dout 0 32 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 12 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 32 } } }
	fc_output { ap_memory {  { fc_output_address0 mem_address 1 10 }  { fc_output_ce0 mem_ce 1 1 }  { fc_output_we0 mem_we 1 1 }  { fc_output_d0 mem_din 1 32 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
