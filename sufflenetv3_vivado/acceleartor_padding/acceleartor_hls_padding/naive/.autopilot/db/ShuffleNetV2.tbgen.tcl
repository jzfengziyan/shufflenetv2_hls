set C_TypeInfoList {{ 
"ShuffleNetV2" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"image": [[], {"array": [ {"array": [ {"scalar": "float"}, [3,32,32]]}, [1]]}] }, {"conv1_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [3,3,3]]}, [24]]}] }, {"shuffle_conv_3x3": [[], {"array": [ {"array": [ {"scalar": "float"}, [1,3,3]]}, [1080]]}] }, {"shuffle_conv_1x1": [[], {"array": [ {"array": [ {"scalar": "float"}, [24,1,1]]}, [5496]]}] }, {"conv_last_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [192,1,1]]}, [512]]}] }, {"fc_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [512]]}, [10]]}] }, {"bias": [[], {"array": [ {"scalar": "float"}, [3618]]}] }, {"fc_output": [[], {"array": [ {"scalar": "float"}, [1000]]}] }],["0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42"],""],
 "0": [ "weights_96_96_1x1", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "1": [ "weights_96_1_3x3", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "2": [ "weights_48_48_1x1", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "3": [ "weights_48_1_3x3", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "4": [ "weights_24_24_1x1", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "5": [ "weights_24_1_3x3", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "6": [ "shuffleunit2_2_output_p", [[], {"array": [ {"scalar": "float"}, [1,192,6,6]]}],""],
 "7": [ "shuffleunit2_2_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "8": [ "shuffleunit2_1_output_p", [[], {"array": [ {"scalar": "float"}, [1,192,6,6]]}],""],
 "9": [ "shuffleunit2_0_output_p", [[], {"array": [ {"scalar": "float"}, [1,192,6,6]]}],""],
 "10": [ "shuffleunit1_7_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "11": [ "shuffleunit1_6_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "12": [ "shuffleunit1_5_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "13": [ "shuffleunit1_4_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "14": [ "shuffleunit1_3_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "15": [ "shuffleunit1_2_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "16": [ "shuffleunit1_1_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "17": [ "shuffleunit1_0_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "18": [ "shuffleunit0_2_output_p", [[], {"array": [ {"scalar": "float"}, [1,48,18,18]]}],""],
 "19": [ "shuffleunit0_1_output_p", [[], {"array": [ {"scalar": "float"}, [1,48,18,18]]}],""],
 "20": [ "shuffleunit0_0_output_p", [[], {"array": [ {"scalar": "float"}, [1,48,18,18]]}],""],
 "21": [ "image_p", [[], {"array": [ {"scalar": "float"}, [1,3,34,34]]}],""],
 "22": [ "fc_bias", [[], {"array": [ {"scalar": "float"}, [10]]}],""],
 "23": [ "downsampleunit2_output_p", [[], {"array": [ {"scalar": "float"}, [1,192,6,6]]}],""],
 "24": [ "downsampleunit1_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "25": [ "downsampleunit0_output_p", [[], {"array": [ {"scalar": "float"}, [1,48,18,18]]}],""],
 "26": [ "conv_last_output", [[], {"array": [ {"scalar": "float"}, [1,512,4,4]]}],""],
 "27": [ "conv_last_bias", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "28": [ "conv1_output_p", [[], {"array": [ {"scalar": "float"}, [1,24,34,34]]}],""],
 "29": [ "conv1_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "30": [ "buffer1_1_96_4x4_p", [[], {"array": [ {"scalar": "float"}, [1,96,6,6]]}],""],
 "31": [ "buffer1_1_48_8x8_p", [[], {"array": [ {"scalar": "float"}, [1,48,10,10]]}],""],
 "32": [ "buffer1_1_24_16x16_p", [[], {"array": [ {"scalar": "float"}, [1,24,18,18]]}],""],
 "33": [ "buffer0_1_96_4x4_p", [[], {"array": [ {"scalar": "float"}, [1,96,6,6]]}],""],
 "34": [ "buffer0_1_48_8x8_p", [[], {"array": [ {"scalar": "float"}, [1,48,10,10]]}],""],
 "35": [ "buffer0_1_24_16x16_p", [[], {"array": [ {"scalar": "float"}, [1,24,18,18]]}],""],
 "36": [ "bias_96", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "37": [ "bias_48", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "38": [ "bias_24", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "39": [ "avgpool_output", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "40": [ "ShuffleConvs_2_DownsampleUnit__conv1r_output_p", [[], {"array": [ {"scalar": "float"}, [1,96,10,10]]}],""],
 "41": [ "ShuffleConvs_1_DownsampleUnit__conv1r_output_p", [[], {"array": [ {"scalar": "float"}, [1,48,18,18]]}],""],
 "42": [ "ShuffleConvs_0_DownsampleUnit__conv1r_output_p", [[], {"array": [ {"scalar": "float"}, [1,24,34,34]]}],""]
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "48", "52", "56", "60", "64", "67", "70", "74", "77", "81", "84", "87", "90", "94", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_7194"},
			{"State" : "ap_ST_fsm_state550", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state574", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state590", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state612", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state631", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state653", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state672", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state694", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206"},
			{"State" : "ap_ST_fsm_state528", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_7218"},
			{"State" : "ap_ST_fsm_state142", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_7230"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_7242"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254"},
			{"State" : "ap_ST_fsm_state540", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267"},
			{"State" : "ap_ST_fsm_state564", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267"},
			{"State" : "ap_ST_fsm_state704", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_7280"},
			{"State" : "ap_ST_fsm_state154", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292"},
			{"State" : "ap_ST_fsm_state178", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292"},
			{"State" : "ap_ST_fsm_state164", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state188", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state204", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state226", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state245", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state267", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state286", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state308", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state327", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state349", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state390", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state409", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state431", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state450", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state472", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state491", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state513", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305"},
			{"State" : "ap_ST_fsm_state602", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317"},
			{"State" : "ap_ST_fsm_state643", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317"},
			{"State" : "ap_ST_fsm_state684", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317"},
			{"State" : "ap_ST_fsm_state216", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state257", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state298", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state339", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state380", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state421", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state462", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state503", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329"},
			{"State" : "ap_ST_fsm_state65", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341"},
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341"},
			{"State" : "ap_ST_fsm_state121", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341"},
			{"State" : "ap_ST_fsm_state31", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state46", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state58", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state71", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state86", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state99", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state114", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353"},
			{"State" : "ap_ST_fsm_state706", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_7365"},
			{"State" : "ap_ST_fsm_state76", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_7373"},
			{"State" : "ap_ST_fsm_state104", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_7373"},
			{"State" : "ap_ST_fsm_state132", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_7373"},
			{"State" : "ap_ST_fsm_state617", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_7385"},
			{"State" : "ap_ST_fsm_state658", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_7385"},
			{"State" : "ap_ST_fsm_state699", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_7385"},
			{"State" : "ap_ST_fsm_state231", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state272", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state313", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state354", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state395", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state436", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state477", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state518", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_7397"},
			{"State" : "ap_ST_fsm_state33", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_7414"},
			{"State" : "ap_ST_fsm_state48", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_7422"},
			{"State" : "ap_ST_fsm_state552", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_7430"},
			{"State" : "ap_ST_fsm_state576", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_7438"},
			{"State" : "ap_ST_fsm_state166", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_7446"},
			{"State" : "ap_ST_fsm_state190", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_7454"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "grp_conv1_p_fu_7194", "Port" : "weight"}]},
			{"Name" : "shuffle_conv_3x3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffle_conv_1x1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_conv_last_fu_7280", "Port" : "weight"}]},
			{"Name" : "fc_weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_output", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "grp_conv1_p_fu_7194", "Port" : "bias"}]},
			{"Name" : "conv_last_bias", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_conv_last_fu_7280", "Port" : "bias"}]},
			{"Name" : "fc_bias", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "image_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "grp_conv1_p_fu_7194", "Port" : "input_r"}]},
			{"Name" : "conv1_output_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "grp_conv1_p_fu_7194", "Port" : "output_r"},
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_7242", "Port" : "conv1_output_p"},
					{"ID" : "64", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254", "Port" : "input_r"}]},
			{"Name" : "weights_24_24_1x1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_7242", "Port" : "weight"},
					{"ID" : "90", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353", "Port" : "weight"}]},
			{"Name" : "bias_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341", "Port" : "bias"},
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_7242", "Port" : "bias"},
					{"ID" : "90", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353", "Port" : "bias"},
					{"ID" : "64", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_7242", "Port" : "ShuffleConvs_0_Downs"},
					{"ID" : "64", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254", "Port" : "input_r"}]},
			{"Name" : "weights_24_1_3x3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341", "Port" : "weight"},
					{"ID" : "64", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254", "Port" : "weight"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341", "Port" : "output_r"},
					{"ID" : "97", "SubInstance" : "grp_shuffle_24_p_fu_7373", "Port" : "left_r"},
					{"ID" : "90", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353", "Port" : "input_r"},
					{"ID" : "64", "SubInstance" : "grp_subconv_3x3_32_strid_fu_7254", "Port" : "output_r"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "87", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_7341", "Port" : "input_r"},
					{"ID" : "97", "SubInstance" : "grp_shuffle_24_p_fu_7373", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "100", "SubInstance" : "grp_shuffle_24_l_p_fu_7414", "Port" : "left_r"},
					{"ID" : "101", "SubInstance" : "grp_shuffle_24_r_p_fu_7422", "Port" : "right_r"},
					{"ID" : "90", "SubInstance" : "grp_subconv_1x1_16_p_fu_7353", "Port" : "output_r"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "100", "SubInstance" : "grp_shuffle_24_l_p_fu_7414", "Port" : "output_r"},
					{"ID" : "101", "SubInstance" : "grp_shuffle_24_r_p_fu_7422", "Port" : "output_r"}]},
			{"Name" : "shuffleunit0_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_24_p_fu_7373", "Port" : "output_r"}]},
			{"Name" : "shuffleunit0_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_24_p_fu_7373", "Port" : "output_r"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_shuffle_24_p_fu_7373", "Port" : "output_r"},
					{"ID" : "74", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292", "Port" : "input_r"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_16p_p_fu_7230", "Port" : "shuffleunit0_2_outpu"}]},
			{"Name" : "weights_48_48_1x1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "77", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305", "Port" : "weight"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_16p_p_fu_7230", "Port" : "weight"}]},
			{"Name" : "bias_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329", "Port" : "bias"},
					{"ID" : "77", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305", "Port" : "bias"},
					{"ID" : "74", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292", "Port" : "bias"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_16p_p_fu_7230", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "74", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292", "Port" : "input_r"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_16p_p_fu_7230", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "weights_48_1_3x3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329", "Port" : "weight"},
					{"ID" : "74", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292", "Port" : "weight"}]},
			{"Name" : "buffer0_1_48_8x8_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "left_r"},
					{"ID" : "84", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329", "Port" : "output_r"},
					{"ID" : "77", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305", "Port" : "input_r"},
					{"ID" : "74", "SubInstance" : "grp_subconv_3x3_16_strid_fu_7292", "Port" : "output_r"}]},
			{"Name" : "buffer1_1_48_8x8_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "104", "SubInstance" : "grp_shuffle_48_l_p_fu_7446", "Port" : "left_r"},
					{"ID" : "105", "SubInstance" : "grp_shuffle_48_r_p_fu_7454", "Port" : "right_r"},
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "buffer1_1_48_8x8_p"},
					{"ID" : "84", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_7329", "Port" : "input_r"},
					{"ID" : "77", "SubInstance" : "grp_subconv_1x1_8_p_fu_7305", "Port" : "output_r"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "104", "SubInstance" : "grp_shuffle_48_l_p_fu_7446", "Port" : "output_r"},
					{"ID" : "105", "SubInstance" : "grp_shuffle_48_r_p_fu_7454", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_3_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_4_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_5_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_6_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267", "Port" : "input_r"},
					{"ID" : "99", "SubInstance" : "grp_shuffle_48_p_fu_7397", "Port" : "output_r"},
					{"ID" : "52", "SubInstance" : "grp_subconv_1x1_8p_p_fu_7218", "Port" : "shuffleunit1_7_outpu"}]},
			{"Name" : "weights_96_96_1x1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "48", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206", "Port" : "weight"},
					{"ID" : "52", "SubInstance" : "grp_subconv_1x1_8p_p_fu_7218", "Port" : "weight"}]},
			{"Name" : "bias_96", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "81", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317", "Port" : "bias"},
					{"ID" : "67", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267", "Port" : "bias"},
					{"ID" : "48", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206", "Port" : "bias"},
					{"ID" : "52", "SubInstance" : "grp_subconv_1x1_8p_p_fu_7218", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "67", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267", "Port" : "input_r"},
					{"ID" : "52", "SubInstance" : "grp_subconv_1x1_8p_p_fu_7218", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "weights_96_1_3x3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "81", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317", "Port" : "weight"},
					{"ID" : "67", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267", "Port" : "weight"}]},
			{"Name" : "buffer0_1_96_4x4_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "81", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317", "Port" : "output_r"},
					{"ID" : "67", "SubInstance" : "grp_subconv_3x3_8_stride_fu_7267", "Port" : "output_r"},
					{"ID" : "48", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206", "Port" : "input_r"},
					{"ID" : "98", "SubInstance" : "grp_shuffle_96_p_fu_7385", "Port" : "left_r"}]},
			{"Name" : "buffer1_1_96_4x4_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "81", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_7317", "Port" : "input_r"},
					{"ID" : "103", "SubInstance" : "grp_shuffle_96_r_p_fu_7438", "Port" : "right_r"},
					{"ID" : "48", "SubInstance" : "grp_subconv_1x1_4_p_fu_7206", "Port" : "output_r"},
					{"ID" : "98", "SubInstance" : "grp_shuffle_96_p_fu_7385", "Port" : "buffer1_1_96_4x4_p"},
					{"ID" : "102", "SubInstance" : "grp_shuffle_96_l_p_fu_7430", "Port" : "left_r"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "103", "SubInstance" : "grp_shuffle_96_r_p_fu_7438", "Port" : "output_r"},
					{"ID" : "102", "SubInstance" : "grp_shuffle_96_l_p_fu_7430", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_shuffle_96_p_fu_7385", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_shuffle_96_p_fu_7385", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "98", "SubInstance" : "grp_shuffle_96_p_fu_7385", "Port" : "output_r"}]},
			{"Name" : "shuffleunit2_2_outpu_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_conv_last_fu_7280", "Port" : "input_r"}]},
			{"Name" : "conv_last_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_conv_last_fu_7280", "Port" : "output_r"},
					{"ID" : "94", "SubInstance" : "grp_avgpool_fu_7365", "Port" : "conv_last_output"}]},
			{"Name" : "avgpool_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "94", "SubInstance" : "grp_avgpool_fu_7365", "Port" : "output_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_p_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit0_outp_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_0_outpu_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_1_outpu_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_2_outpu_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit1_outp_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_0_outpu_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_1_outpu_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_2_outpu_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_3_outpu_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_4_outpu_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_5_outpu_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_6_outpu_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_7_outpu_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit2_outp_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_0_outpu_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_1_outpu_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_1_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_7194", "Parent" : "0", "Child" : ["45", "46", "47"],
		"CDFG" : "conv1_p",
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
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_7194.ShuffleNetV2_faddbkb_U1", "Parent" : "44"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_7194.ShuffleNetV2_fmulcud_U2", "Parent" : "44"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_7194.ShuffleNetV2_fcmpdEe_U3", "Parent" : "44"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_7206", "Parent" : "0", "Child" : ["49", "50", "51"],
		"CDFG" : "subconv_1x1_4_p",
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
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_7206.ShuffleNetV2_faddbkb_x_U87", "Parent" : "48"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_7206.ShuffleNetV2_fmulcud_x_U88", "Parent" : "48"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_7206.ShuffleNetV2_fcmpdEe_x_U89", "Parent" : "48"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_7218", "Parent" : "0", "Child" : ["53", "54", "55"],
		"CDFG" : "subconv_1x1_8p_p",
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
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_7218.ShuffleNetV2_faddbkb_x_U74", "Parent" : "52"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_7218.ShuffleNetV2_fmulcud_x_U75", "Parent" : "52"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_7218.ShuffleNetV2_fcmpdEe_x_U76", "Parent" : "52"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_7230", "Parent" : "0", "Child" : ["57", "58", "59"],
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
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_7230.ShuffleNetV2_faddbkb_x_U41", "Parent" : "56"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_7230.ShuffleNetV2_fmulcud_x_U42", "Parent" : "56"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_7230.ShuffleNetV2_fcmpdEe_x_U43", "Parent" : "56"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_7242", "Parent" : "0", "Child" : ["61", "62", "63"],
		"CDFG" : "subconv_1x1_32_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_7242.ShuffleNetV2_faddbkb_x_U8", "Parent" : "60"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_7242.ShuffleNetV2_fmulcud_x_U9", "Parent" : "60"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_7242.ShuffleNetV2_fcmpdEe_x_U10", "Parent" : "60"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_7254", "Parent" : "0", "Child" : ["65", "66"],
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
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_7254.ShuffleNetV2_faddbkb_x_U15", "Parent" : "64"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_7254.ShuffleNetV2_fmulcud_x_U16", "Parent" : "64"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_7267", "Parent" : "0", "Child" : ["68", "69"],
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
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_7267.ShuffleNetV2_faddbkb_x_U81", "Parent" : "67"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_7267.ShuffleNetV2_fmulcud_x_U82", "Parent" : "67"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7280", "Parent" : "0", "Child" : ["71", "72", "73"],
		"CDFG" : "conv_last",
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
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7280.ShuffleNetV2_faddbkb_x_U107", "Parent" : "70"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7280.ShuffleNetV2_fmulcud_x_U108", "Parent" : "70"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_7280.ShuffleNetV2_fcmpdEe_x_U109", "Parent" : "70"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_7292", "Parent" : "0", "Child" : ["75", "76"],
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
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_7292.ShuffleNetV2_faddbkb_x_U48", "Parent" : "74"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_7292.ShuffleNetV2_fmulcud_x_U49", "Parent" : "74"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_7305", "Parent" : "0", "Child" : ["78", "79", "80"],
		"CDFG" : "subconv_1x1_8_p",
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
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_7305.ShuffleNetV2_faddbkb_x_U54", "Parent" : "77"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_7305.ShuffleNetV2_fmulcud_x_U55", "Parent" : "77"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_7305.ShuffleNetV2_fcmpdEe_x_U56", "Parent" : "77"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_7317", "Parent" : "0", "Child" : ["82", "83"],
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
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_7317.ShuffleNetV2_faddbkb_x_U98", "Parent" : "81"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_7317.ShuffleNetV2_fmulcud_x_U99", "Parent" : "81"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_7329", "Parent" : "0", "Child" : ["85", "86"],
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
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_7329.ShuffleNetV2_faddbkb_x_U65", "Parent" : "84"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_7329.ShuffleNetV2_fmulcud_x_U66", "Parent" : "84"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_7341", "Parent" : "0", "Child" : ["88", "89"],
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
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_7341.ShuffleNetV2_faddbkb_x_U32", "Parent" : "87"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_7341.ShuffleNetV2_fmulcud_x_U33", "Parent" : "87"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_7353", "Parent" : "0", "Child" : ["91", "92", "93"],
		"CDFG" : "subconv_1x1_16_p",
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
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_7353.ShuffleNetV2_faddbkb_x_U21", "Parent" : "90"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_7353.ShuffleNetV2_fmulcud_x_U22", "Parent" : "90"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_7353.ShuffleNetV2_fcmpdEe_x_U23", "Parent" : "90"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_7365", "Parent" : "0", "Child" : ["95", "96"],
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
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_7365.ShuffleNetV2_faddbkb_x_U114", "Parent" : "94"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_7365.ShuffleNetV2_fmulcud_x_U115", "Parent" : "94"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_7373", "Parent" : "0",
		"CDFG" : "shuffle_24_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_7385", "Parent" : "0",
		"CDFG" : "shuffle_96_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_7397", "Parent" : "0",
		"CDFG" : "shuffle_48_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_7414", "Parent" : "0",
		"CDFG" : "shuffle_24_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_7422", "Parent" : "0",
		"CDFG" : "shuffle_24_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_7430", "Parent" : "0",
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_7438", "Parent" : "0",
		"CDFG" : "shuffle_96_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_7446", "Parent" : "0",
		"CDFG" : "shuffle_48_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_7454", "Parent" : "0",
		"CDFG" : "shuffle_48_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_faddbkb_x_U118", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_fmulcud_x_U119", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		image_r {Type I LastRead 6 FirstWrite -1}
		conv1_weight {Type I LastRead 8 FirstWrite -1}
		shuffle_conv_3x3 {Type I LastRead 228 FirstWrite -1}
		shuffle_conv_1x1 {Type I LastRead 229 FirstWrite -1}
		conv_last_weight {Type I LastRead 4 FirstWrite -1}
		fc_weight {Type I LastRead 236 FirstWrite -1}
		bias {Type I LastRead 229 FirstWrite -1}
		fc_output {Type O LastRead -1 FirstWrite 243}
		conv1_bias {Type IO LastRead -1 FirstWrite -1}
		conv_last_bias {Type IO LastRead -1 FirstWrite -1}
		fc_bias {Type IO LastRead -1 FirstWrite -1}
		image_p {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1 {Type IO LastRead -1 FirstWrite -1}
		bias_24 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_24_1_3x3 {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		downsampleunit0_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_2_outpu {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1 {Type IO LastRead -1 FirstWrite -1}
		bias_48 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_48_1_3x3 {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_48_8x8_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p {Type IO LastRead -1 FirstWrite -1}
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
		buffer0_1_96_4x4_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p {Type IO LastRead -1 FirstWrite -1}
		downsampleunit2_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu_1 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output {Type IO LastRead -1 FirstWrite -1}
		avgpool_output {Type IO LastRead -1 FirstWrite -1}}
	conv1_p {
		input_r {Type I LastRead 8 FirstWrite -1}
		weight {Type I LastRead 8 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_1x1_4_p {
		input_r {Type I LastRead 5 FirstWrite -1}
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_1x1_8p_p {
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		shuffleunit1_7_outpu {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs {Type O LastRead -1 FirstWrite 12}}
	subconv_1x1_16p_p {
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		shuffleunit0_2_outpu {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs {Type O LastRead -1 FirstWrite 12}}
	subconv_1x1_32_p {
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		conv1_output_p {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_32_strid {
		input_r {Type I LastRead 5 FirstWrite -1}
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_3x3_8_stride {
		input_r {Type I LastRead 5 FirstWrite -1}
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	conv_last {
		input_r {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_16_strid {
		input_r {Type I LastRead 5 FirstWrite -1}
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_8_p {
		input_r {Type I LastRead 5 FirstWrite -1}
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_4_no_rel {
		input_r {Type I LastRead 7 FirstWrite -1}
		weight {Type I LastRead 7 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_3x3_8_no_rel {
		input_r {Type I LastRead 7 FirstWrite -1}
		weight {Type I LastRead 7 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_3x3_16_no_re {
		input_r {Type I LastRead 7 FirstWrite -1}
		weight {Type I LastRead 7 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_16_p {
		input_r {Type I LastRead 5 FirstWrite -1}
		weight {Type I LastRead 5 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	avgpool {
		output_r {Type O LastRead -1 FirstWrite 6}
		conv_last_output {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_p {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_p {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}
		buffer1_1_96_4x4_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_p {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}
		buffer1_1_48_8x8_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_l_p {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_24_r_p {
		right_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_96_l_p {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_96_r_p {
		right_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_48_l_p {
		left_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	shuffle_48_r_p {
		right_r {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "119200511", "Max" : "119200511"}
	, {"Name" : "Interval", "Min" : "119200512", "Max" : "119200512"}
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
