set C_TypeInfoList {{ 
"ShuffleNetV2" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"image": [[], {"array": [ {"array": ["0", [3,32,32]]}, [1]]}] }, {"conv1_weight": [[], {"array": [ {"array": ["0", [3,3,3]]}, [24]]}] }, {"shuffle_conv_3x3": [[], {"array": [ {"array": ["0", [1,3,3]]}, [1080]]}] }, {"shuffle_conv_1x1": [[], {"array": [ {"array": ["0", [24,1,1]]}, [5496]]}] }, {"conv_last_weight": [[], {"array": [ {"array": ["0", [192,1,1]]}, [512]]}] }, {"fc_weight": [[], {"array": [ {"array": ["0", [512]]}, [10]]}] }, {"bias": [[], {"array": ["0", [3618]]}] }, {"fc_output": [[], {"array": ["0", [1000]]}] }],["1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29"],""],
 "1": [ "weights_96_96_1x1", [[], {"array": ["0", [96,96,1,1]]}],""],
 "2": [ "weights_96_1_3x3", [[], {"array": ["0", [96,1,3,3]]}],""],
 "3": [ "weights_48_48_1x1", [[], {"array": ["0", [48,48,1,1]]}],""],
 "4": [ "weights_48_1_3x3", [[], {"array": ["0", [48,1,3,3]]}],""],
 "5": [ "weights_24_24_1x1", [[], {"array": ["0", [24,24,1,1]]}],""],
 "6": [ "weights_24_1_3x3", [[], {"array": ["0", [24,1,3,3]]}],""],
 "7": [ "shuffleunit2_2_output", [[], {"array": ["0", [1,192,4,4]]}],""],
 "8": [ "image_p", [[], {"array": ["0", [1,3,34,34]]}],""],
 "9": [ "feature_buffer_96x10x10", [[], {"array": ["0", [1,96,10,10]]}],""],
 "10": [ "feature_buffer_48x18x18", [[], {"array": ["0", [1,48,18,18]]}],""],
 "11": [ "feature_buffer_192x6x6", [[], {"array": ["0", [1,192,6,6]]}],""],
 "12": [ "fc_bias", [[], {"array": ["0", [10]]}],""],
 "13": [ "conv_last_output", [[], {"array": ["0", [1,512,4,4]]}],""],
 "14": [ "conv_last_bias", [[], {"array": ["0", [512]]}],""],
 "15": [ "conv1_output_p", [[], {"array": ["0", [1,24,34,34]]}],""],
 "16": [ "conv1_bias", [[], {"array": ["0", [24]]}],""],
 "17": [ "buffer1_1_96_4x4_p", [[], {"array": ["0", [1,96,6,6]]}],""],
 "18": [ "buffer1_1_48_8x8_p", [[], {"array": ["0", [1,48,10,10]]}],""],
 "19": [ "buffer1_1_24_16x16_p", [[], {"array": ["0", [1,24,18,18]]}],""],
 "20": [ "buffer0_1_96_4x4_p", [[], {"array": ["0", [1,96,6,6]]}],""],
 "21": [ "buffer0_1_48_8x8_p", [[], {"array": ["0", [1,48,10,10]]}],""],
 "22": [ "buffer0_1_24_16x16_p", [[], {"array": ["0", [1,24,18,18]]}],""],
 "23": [ "bias_96", [[], {"array": ["0", [96]]}],""],
 "24": [ "bias_48", [[], {"array": ["0", [48]]}],""],
 "25": [ "bias_24", [[], {"array": ["0", [24]]}],""],
 "26": [ "avgpool_output", [[], {"array": ["0", [512]]}],""],
 "27": [ "ShuffleConvs_2_DownsampleUnit__conv1r_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "28": [ "ShuffleConvs_1_DownsampleUnit__conv1r_output_p", [[], {"array": ["0", [1,48,18,18]]}],""],
 "29": [ "ShuffleConvs_0_DownsampleUnit__conv1r_output_p", [[], {"array": ["0", [1,24,34,34]]}],""], 
"0": [ "FIX_8", {"typedef": [[[],"30"],""]}], 
"30": [ "ap_fixed<8, 2, 0, 0, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 8}}],[[], {"scalar": { "int": 2}}],[[], {"scalar": { "31": 0}}],[[], {"scalar": { "32": 0}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"31": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"32": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}]
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
set C_modelType { int 32 }
set C_modelArgList {
	{ DATA_INPUT_OUTPUT int 8 regular {axi_master 2}  }
	{ DATA_OTHER_WEIGHTS int 8 regular {axi_master 0}  }
	{ p3X3_1X1_WEIGHTS int 8 regular {axi_master 0}  }
	{ DATA_BIAS int 8 regular {axi_master 0}  }
	{ image_V int 32 regular {axi_slave 0}  }
	{ conv1_weight_V int 32 regular {axi_slave 0}  }
	{ shuffle_conv_3x3_V int 32 regular {axi_slave 0}  }
	{ shuffle_conv_1x1_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_0_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_1_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_2_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_3_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_4_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_5_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_6_V int 32 regular {axi_slave 0}  }
	{ conv_last_weight_7_V int 32 regular {axi_slave 0}  }
	{ fc_weight_V int 32 regular {axi_slave 0}  }
	{ bias_V int 32 regular {axi_slave 0}  }
	{ fc_output_V int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "DATA_INPUT_OUTPUT", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "image.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "image_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 31,"step" : 1},{"low" : 0,"up" : 31,"step" : 1}]},{"cName": "fc_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "fc_output_V","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "DATA_OTHER_WEIGHTS", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv1_weight_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 23,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_0_V"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 504,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_1_V"},"direction": "READONLY","cArray": [{"low" : 1,"up" : 505,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_2_V"},"direction": "READONLY","cArray": [{"low" : 2,"up" : 506,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_3_V"},"direction": "READONLY","cArray": [{"low" : 3,"up" : 507,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_4_V"},"direction": "READONLY","cArray": [{"low" : 4,"up" : 508,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_5_V"},"direction": "READONLY","cArray": [{"low" : 5,"up" : 509,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_6_V"},"direction": "READONLY","cArray": [{"low" : 6,"up" : 510,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_7_V"},"direction": "READONLY","cArray": [{"low" : 7,"up" : 511,"step" : 8},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "fc_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "fc_weight_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 511,"step" : 1}]}]}]} , 
 	{ "Name" : "p3X3_1X1_WEIGHTS", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "shuffle_conv_3x3.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "shuffle_conv_3x3_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 1079,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]},{"cName": "shuffle_conv_1x1.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "shuffle_conv_1x1_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 5495,"step" : 1},{"low" : 0,"up" : 23,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "DATA_BIAS", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "bias.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "bias_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 3617,"step" : 1}]}]}]} , 
 	{ "Name" : "image_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "conv1_weight_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "shuffle_conv_3x3_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "shuffle_conv_1x1_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "conv_last_weight_0_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "conv_last_weight_1_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "conv_last_weight_2_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "conv_last_weight_3_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":80}, "offset_end" : {"in":87}} , 
 	{ "Name" : "conv_last_weight_4_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":88}, "offset_end" : {"in":95}} , 
 	{ "Name" : "conv_last_weight_5_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":96}, "offset_end" : {"in":103}} , 
 	{ "Name" : "conv_last_weight_6_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":104}, "offset_end" : {"in":111}} , 
 	{ "Name" : "conv_last_weight_7_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":112}, "offset_end" : {"in":119}} , 
 	{ "Name" : "fc_weight_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":120}, "offset_end" : {"in":127}} , 
 	{ "Name" : "bias_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":128}, "offset_end" : {"in":135}} , 
 	{ "Name" : "fc_output_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":136}, "offset_end" : {"in":143}} , 
 	{ "Name" : "ap_return", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "return","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 1,"step" : 0}]}]}], "offset" : {"out":16}} ]}
# RTL Port declarations: 
set portNum 200
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ m_axi_DATA_INPUT_OUTPUT_AWVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWID sc_out sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_AWUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WDATA sc_out sc_lv 32 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WSTRB sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WLAST sc_out sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WID sc_out sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_WUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARVALID sc_out sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARREADY sc_in sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARADDR sc_out sc_lv 32 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARID sc_out sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARLEN sc_out sc_lv 8 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARSIZE sc_out sc_lv 3 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARBURST sc_out sc_lv 2 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARLOCK sc_out sc_lv 2 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARCACHE sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARPROT sc_out sc_lv 3 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARQOS sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARREGION sc_out sc_lv 4 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_ARUSER sc_out sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RDATA sc_in sc_lv 32 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RLAST sc_in sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RID sc_in sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_RRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_BVALID sc_in sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_BREADY sc_out sc_logic 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_BRESP sc_in sc_lv 2 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_BID sc_in sc_lv 1 signal 0 } 
	{ m_axi_DATA_INPUT_OUTPUT_BUSER sc_in sc_lv 1 signal 0 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WDATA sc_out sc_lv 32 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WSTRB sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARLEN sc_out sc_lv 8 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RDATA sc_in sc_lv 32 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_DATA_OTHER_WEIGHTS_BUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWID sc_out sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_AWUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WDATA sc_out sc_lv 32 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WSTRB sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WLAST sc_out sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WID sc_out sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_WUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARVALID sc_out sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARREADY sc_in sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARADDR sc_out sc_lv 32 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARID sc_out sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARLEN sc_out sc_lv 8 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARSIZE sc_out sc_lv 3 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARBURST sc_out sc_lv 2 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARLOCK sc_out sc_lv 2 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARCACHE sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARPROT sc_out sc_lv 3 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARQOS sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARREGION sc_out sc_lv 4 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_ARUSER sc_out sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RDATA sc_in sc_lv 32 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RLAST sc_in sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RID sc_in sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_RRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_BVALID sc_in sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_BREADY sc_out sc_logic 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_BRESP sc_in sc_lv 2 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_BID sc_in sc_lv 1 signal 2 } 
	{ m_axi_p3X3_1X1_WEIGHTS_BUSER sc_in sc_lv 1 signal 2 } 
	{ m_axi_DATA_BIAS_AWVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_AWREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_AWADDR sc_out sc_lv 32 signal 3 } 
	{ m_axi_DATA_BIAS_AWID sc_out sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_AWLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_DATA_BIAS_AWSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_DATA_BIAS_AWBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_DATA_BIAS_AWLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_DATA_BIAS_AWCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_AWPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_DATA_BIAS_AWQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_AWREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_AWUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_WVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_WREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_WDATA sc_out sc_lv 32 signal 3 } 
	{ m_axi_DATA_BIAS_WSTRB sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_WLAST sc_out sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_WID sc_out sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_WUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_ARVALID sc_out sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_ARREADY sc_in sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_ARADDR sc_out sc_lv 32 signal 3 } 
	{ m_axi_DATA_BIAS_ARID sc_out sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_ARLEN sc_out sc_lv 8 signal 3 } 
	{ m_axi_DATA_BIAS_ARSIZE sc_out sc_lv 3 signal 3 } 
	{ m_axi_DATA_BIAS_ARBURST sc_out sc_lv 2 signal 3 } 
	{ m_axi_DATA_BIAS_ARLOCK sc_out sc_lv 2 signal 3 } 
	{ m_axi_DATA_BIAS_ARCACHE sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_ARPROT sc_out sc_lv 3 signal 3 } 
	{ m_axi_DATA_BIAS_ARQOS sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_ARREGION sc_out sc_lv 4 signal 3 } 
	{ m_axi_DATA_BIAS_ARUSER sc_out sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_RVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_RREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_RDATA sc_in sc_lv 32 signal 3 } 
	{ m_axi_DATA_BIAS_RLAST sc_in sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_RID sc_in sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_RUSER sc_in sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_RRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_DATA_BIAS_BVALID sc_in sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_BREADY sc_out sc_logic 1 signal 3 } 
	{ m_axi_DATA_BIAS_BRESP sc_in sc_lv 2 signal 3 } 
	{ m_axi_DATA_BIAS_BID sc_in sc_lv 1 signal 3 } 
	{ m_axi_DATA_BIAS_BUSER sc_in sc_lv 1 signal 3 } 
	{ s_axi_CTL_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_AWADDR sc_in sc_lv 8 signal -1 } 
	{ s_axi_CTL_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CTL_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CTL_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_ARADDR sc_in sc_lv 8 signal -1 } 
	{ s_axi_CTL_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CTL_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CTL_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CTL_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "CTL", "role": "AWADDR" },"address":[{"name":"ShuffleNetV2","role":"start","value":"0","valid_bit":"0"},{"name":"ShuffleNetV2","role":"continue","value":"0","valid_bit":"4"},{"name":"ShuffleNetV2","role":"auto_start","value":"0","valid_bit":"7"},{"name":"image_V","role":"data","value":"24"},{"name":"conv1_weight_V","role":"data","value":"32"},{"name":"shuffle_conv_3x3_V","role":"data","value":"40"},{"name":"shuffle_conv_1x1_V","role":"data","value":"48"},{"name":"conv_last_weight_0_V","role":"data","value":"56"},{"name":"conv_last_weight_1_V","role":"data","value":"64"},{"name":"conv_last_weight_2_V","role":"data","value":"72"},{"name":"conv_last_weight_3_V","role":"data","value":"80"},{"name":"conv_last_weight_4_V","role":"data","value":"88"},{"name":"conv_last_weight_5_V","role":"data","value":"96"},{"name":"conv_last_weight_6_V","role":"data","value":"104"},{"name":"conv_last_weight_7_V","role":"data","value":"112"},{"name":"fc_weight_V","role":"data","value":"120"},{"name":"bias_V","role":"data","value":"128"},{"name":"fc_output_V","role":"data","value":"136"}] },
	{ "name": "s_axi_CTL_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "AWVALID" } },
	{ "name": "s_axi_CTL_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "AWREADY" } },
	{ "name": "s_axi_CTL_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "WVALID" } },
	{ "name": "s_axi_CTL_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "WREADY" } },
	{ "name": "s_axi_CTL_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CTL", "role": "WDATA" } },
	{ "name": "s_axi_CTL_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CTL", "role": "WSTRB" } },
	{ "name": "s_axi_CTL_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "CTL", "role": "ARADDR" },"address":[{"name":"ShuffleNetV2","role":"start","value":"0","valid_bit":"0"},{"name":"ShuffleNetV2","role":"done","value":"0","valid_bit":"1"},{"name":"ShuffleNetV2","role":"idle","value":"0","valid_bit":"2"},{"name":"ShuffleNetV2","role":"ready","value":"0","valid_bit":"3"},{"name":"ShuffleNetV2","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
	{ "name": "s_axi_CTL_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "ARVALID" } },
	{ "name": "s_axi_CTL_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "ARREADY" } },
	{ "name": "s_axi_CTL_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "RVALID" } },
	{ "name": "s_axi_CTL_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "RREADY" } },
	{ "name": "s_axi_CTL_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CTL", "role": "RDATA" } },
	{ "name": "s_axi_CTL_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CTL", "role": "RRESP" } },
	{ "name": "s_axi_CTL_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "BVALID" } },
	{ "name": "s_axi_CTL_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "BREADY" } },
	{ "name": "s_axi_CTL_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CTL", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWVALID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWREADY" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWADDR" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWLEN" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWBURST" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWPROT" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWQOS" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWREGION" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "AWUSER" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WVALID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WREADY" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WDATA" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WSTRB" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WLAST" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "WUSER" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARVALID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARREADY" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARADDR" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARLEN" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARBURST" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARPROT" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARQOS" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARREGION" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "ARUSER" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RVALID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RREADY" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RDATA" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RLAST" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RUSER" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "RRESP" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "BVALID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "BREADY" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "BRESP" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "BID" }} , 
 	{ "name": "m_axi_DATA_INPUT_OUTPUT_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_INPUT_OUTPUT", "role": "BUSER" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWVALID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWREADY" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWADDR" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWLEN" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWBURST" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWPROT" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWQOS" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWREGION" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "AWUSER" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WVALID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WREADY" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WDATA" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WSTRB" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WLAST" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "WUSER" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARVALID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARREADY" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARADDR" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARLEN" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARBURST" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARPROT" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARQOS" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARREGION" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "ARUSER" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RVALID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RREADY" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RDATA" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RLAST" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RUSER" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "RRESP" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "BVALID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "BREADY" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "BRESP" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "BID" }} , 
 	{ "name": "m_axi_DATA_OTHER_WEIGHTS_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_OTHER_WEIGHTS", "role": "BUSER" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWVALID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWREADY" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWADDR" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWLEN" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWBURST" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWPROT" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWQOS" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWREGION" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "AWUSER" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WVALID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WREADY" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WDATA" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WSTRB" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WLAST" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "WUSER" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARVALID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARREADY" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARADDR" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARLEN" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARBURST" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARPROT" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARQOS" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARREGION" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "ARUSER" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RVALID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RREADY" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RDATA" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RLAST" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RUSER" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "RRESP" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "BVALID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "BREADY" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "BRESP" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "BID" }} , 
 	{ "name": "m_axi_p3X3_1X1_WEIGHTS_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "p3X3_1X1_WEIGHTS", "role": "BUSER" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWVALID" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWREADY" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWADDR" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWID" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWLEN" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWBURST" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWPROT" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWQOS" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWREGION" }} , 
 	{ "name": "m_axi_DATA_BIAS_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "AWUSER" }} , 
 	{ "name": "m_axi_DATA_BIAS_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WVALID" }} , 
 	{ "name": "m_axi_DATA_BIAS_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WREADY" }} , 
 	{ "name": "m_axi_DATA_BIAS_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WDATA" }} , 
 	{ "name": "m_axi_DATA_BIAS_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WSTRB" }} , 
 	{ "name": "m_axi_DATA_BIAS_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WLAST" }} , 
 	{ "name": "m_axi_DATA_BIAS_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WID" }} , 
 	{ "name": "m_axi_DATA_BIAS_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "WUSER" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARVALID" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARREADY" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARADDR" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARID" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARLEN" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARBURST" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARPROT" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARQOS" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARREGION" }} , 
 	{ "name": "m_axi_DATA_BIAS_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "ARUSER" }} , 
 	{ "name": "m_axi_DATA_BIAS_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RVALID" }} , 
 	{ "name": "m_axi_DATA_BIAS_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RREADY" }} , 
 	{ "name": "m_axi_DATA_BIAS_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RDATA" }} , 
 	{ "name": "m_axi_DATA_BIAS_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RLAST" }} , 
 	{ "name": "m_axi_DATA_BIAS_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RID" }} , 
 	{ "name": "m_axi_DATA_BIAS_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RUSER" }} , 
 	{ "name": "m_axi_DATA_BIAS_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "RRESP" }} , 
 	{ "name": "m_axi_DATA_BIAS_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "BVALID" }} , 
 	{ "name": "m_axi_DATA_BIAS_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "BREADY" }} , 
 	{ "name": "m_axi_DATA_BIAS_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "BRESP" }} , 
 	{ "name": "m_axi_DATA_BIAS_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "BID" }} , 
 	{ "name": "m_axi_DATA_BIAS_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "DATA_BIAS", "role": "BUSER" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "276", "328", "356", "397", "425", "453", "479", "483", "485", "487", "489", "491", "493", "495", "497", "500", "503", "504", "505", "507", "510", "513", "516", "519", "521", "523", "525", "526", "527", "528", "529", "530", "531", "532", "533", "534", "535", "536", "537", "538", "539", "540", "541", "542", "543", "544", "545", "546", "547", "548", "549", "550", "551", "552", "553", "554", "555", "556", "557", "558", "559", "560", "561", "562", "563", "564", "565", "566", "567", "568", "569", "570", "571", "572", "573", "574", "575", "576", "577", "578", "579", "580", "581"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state397", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744"},
			{"State" : "ap_ST_fsm_state454", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state513", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state548", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state605", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state643", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state700", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state738", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state795", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state833", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state890", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state928", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state985", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1023", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1080", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1118", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1213", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1270", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848"},
			{"State" : "ap_ST_fsm_state1363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1423", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1459", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1517", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1556", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1614", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1653", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state1710", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_13008"},
			{"State" : "ap_ST_fsm_state1305", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state148", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state248", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225"},
			{"State" : "ap_ST_fsm_state1720", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_13329"},
			{"State" : "ap_ST_fsm_state425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363"},
			{"State" : "ap_ST_fsm_state576", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state671", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state766", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state861", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state956", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state1051", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state1146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state1241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421"},
			{"State" : "ap_ST_fsm_state1487", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479"},
			{"State" : "ap_ST_fsm_state1584", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479"},
			{"State" : "ap_ST_fsm_state1681", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479"},
			{"State" : "ap_ST_fsm_state1333", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639"},
			{"State" : "ap_ST_fsm_state269", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639"},
			{"State" : "ap_ST_fsm_state342", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639"},
			{"State" : "ap_ST_fsm_state610", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state705", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state800", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state895", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state990", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state1085", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state1180", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state1275", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_13697"},
			{"State" : "ap_ST_fsm_state1522", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_13753"},
			{"State" : "ap_ST_fsm_state1619", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_13753"},
			{"State" : "ap_ST_fsm_state1715", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_13753"},
			{"State" : "ap_ST_fsm_state1393", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_13785"},
			{"State" : "ap_ST_fsm_state484", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_13797"},
			{"State" : "ap_ST_fsm_state223", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_13809"},
			{"State" : "ap_ST_fsm_state295", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_13809"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_13809"},
			{"State" : "ap_ST_fsm_state456", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_13865"},
			{"State" : "ap_ST_fsm_state515", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_13919"},
			{"State" : "ap_ST_fsm_state1365", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_13973"},
			{"State" : "ap_ST_fsm_state1425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_14003"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_14033"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_14087"},
			{"State" : "ap_ST_fsm_state1722", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_14141"},
			{"State" : "ap_ST_fsm_state1724", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc_fu_14163"}],
		"Port" : [
			{"Name" : "DATA_INPUT_OUTPUT", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "525", "SubInstance" : "grp_fc_fu_14163", "Port" : "output_V"}]},
			{"Name" : "DATA_OTHER_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "525", "SubInstance" : "grp_fc_fu_14163", "Port" : "weight_V"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "weight_0_V"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "weight_V"}]},
			{"Name" : "p3X3_1X1_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "p3X3_1X1_WEIGHTS_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "p3X3_1X1_WEIGHTS_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "DATA_BIAS", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "DATA_BIAS_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_BIAS_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "image_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv1_weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shuffle_conv_3x3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "shuffle_conv_1x1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_0_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_1_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_2_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_3_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_4_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_5_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_6_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_7_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "fc_weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "fc_output_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv1_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "bias_V"}]},
			{"Name" : "conv_last_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "bias_V"}]},
			{"Name" : "fc_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "525", "SubInstance" : "grp_fc_fu_14163", "Port" : "bias_V"}]},
			{"Name" : "image_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "input_V"}]},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_0"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_0"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_0"}]},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_1"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_1"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_1"}]},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_2"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_2"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_2"}]},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_3"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_3"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_3"}]},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_4"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_4"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_4"}]},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_5"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_5"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_5"}]},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_6"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_6"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_6"}]},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_7"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_7"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_7"}]},
			{"Name" : "conv1_output_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_8"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_8"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_8"}]},
			{"Name" : "conv1_output_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_9"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_9"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_9"}]},
			{"Name" : "conv1_output_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_10"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_10"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_10"}]},
			{"Name" : "conv1_output_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "conv1_output_p_V_11"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "conv1_output_p_V_11"},
					{"ID" : "356", "SubInstance" : "grp_conv1_p_fu_13008", "Port" : "conv1_output_p_V_11"}]},
			{"Name" : "bias_24_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "bias_V"},
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "bias_V"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "bias_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "bias_V"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_0_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_23"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_23"}]},
			{"Name" : "ShuffleConvs_0_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_19"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_19"}]},
			{"Name" : "ShuffleConvs_0_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_22"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_22"}]},
			{"Name" : "ShuffleConvs_0_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_18"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_18"}]},
			{"Name" : "ShuffleConvs_0_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_11"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_11"}]},
			{"Name" : "ShuffleConvs_0_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_17"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_17"}]},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_6"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_6"}]},
			{"Name" : "ShuffleConvs_0_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_16"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_16"}]},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_5"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_5"}]},
			{"Name" : "ShuffleConvs_0_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_15"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_15"}]},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_4"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_4"}]},
			{"Name" : "ShuffleConvs_0_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_14"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_14"}]},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_3"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_3"}]},
			{"Name" : "ShuffleConvs_0_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_13"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_13"}]},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_2"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_2"}]},
			{"Name" : "ShuffleConvs_0_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_12"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_12"}]},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_1"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_1"}]},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_10"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_10"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs"}]},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_9"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_9"}]},
			{"Name" : "ShuffleConvs_0_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_21"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_21"}]},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_8"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_8"}]},
			{"Name" : "ShuffleConvs_0_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_20"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_20"}]},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "ShuffleConvs_0_Downs_7"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "ShuffleConvs_0_Downs_7"}]},
			{"Name" : "weights_24_24_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_0_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_0_V"}]},
			{"Name" : "weights_24_24_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_1_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_1_V"}]},
			{"Name" : "weights_24_24_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_2_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_2_V"}]},
			{"Name" : "weights_24_24_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_3_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_3_V"}]},
			{"Name" : "weights_24_24_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_4_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_4_V"}]},
			{"Name" : "weights_24_24_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_5_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_5_V"}]},
			{"Name" : "weights_24_24_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_6_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_6_V"}]},
			{"Name" : "weights_24_24_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_7_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_7_V"}]},
			{"Name" : "weights_24_24_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_8_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_8_V"}]},
			{"Name" : "weights_24_24_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_9_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_9_V"}]},
			{"Name" : "weights_24_24_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_10_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_10_V"}]},
			{"Name" : "weights_24_24_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_11_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_11_V"}]},
			{"Name" : "weights_24_24_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_12_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_12_V"}]},
			{"Name" : "weights_24_24_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_13_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_13_V"}]},
			{"Name" : "weights_24_24_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_14_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_14_V"}]},
			{"Name" : "weights_24_24_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_15_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_15_V"}]},
			{"Name" : "weights_24_24_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_16_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_16_V"}]},
			{"Name" : "weights_24_24_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_17_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_17_V"}]},
			{"Name" : "weights_24_24_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_18_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_18_V"}]},
			{"Name" : "weights_24_24_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_19_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_19_V"}]},
			{"Name" : "weights_24_24_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_20_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_20_V"}]},
			{"Name" : "weights_24_24_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_21_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_21_V"}]},
			{"Name" : "weights_24_24_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_22_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_22_V"}]},
			{"Name" : "weights_24_24_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "weight_23_V"},
					{"ID" : "425", "SubInstance" : "grp_subconv_1x1_32_p_fu_13099", "Port" : "weight_23_V"}]},
			{"Name" : "weights_24_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "weight_V"},
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "weight_V"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "491", "SubInstance" : "grp_subconv_3x3_32_strid_fu_13547", "Port" : "output_V"},
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "left_V"},
					{"ID" : "493", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_13581", "Port" : "output_V"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "input_V"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_23"}]},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_19"}]},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_22"}]},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_18"}]},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_11"}]},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_17"}]},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_6"}]},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_16"}]},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_5"}]},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_15"}]},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_4"}]},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_14"}]},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_3"}]},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_13"}]},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_2"}]},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_12"}]},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_1"}]},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_10"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p"}]},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_9"}]},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_21"}]},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_8"}]},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_20"}]},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "453", "SubInstance" : "grp_subconv_1x1_16_p_fu_13225", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "495", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_13639", "Port" : "buffer1_1_24_16x16_p_7"}]},
			{"Name" : "feature_buffer_48x18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "505", "SubInstance" : "grp_shuffle_24_p_fu_13809", "Port" : "output_V"},
					{"ID" : "521", "SubInstance" : "grp_shuffle_24_r_p_fu_14087", "Port" : "output_V"},
					{"ID" : "504", "SubInstance" : "grp_subconv_3x3_16_strid_fu_13797", "Port" : "input_V"},
					{"ID" : "519", "SubInstance" : "grp_shuffle_24_l_p_fu_14033", "Port" : "output_V"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "input_V"}]},
			{"Name" : "bias_48_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "504", "SubInstance" : "grp_subconv_3x3_16_strid_fu_13797", "Port" : "bias_V"},
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "bias_V"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "bias_V"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "bias_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_23"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_23"}]},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_22"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_22"}]},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_11"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_11"}]},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_6"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_6"}]},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_5"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_5"}]},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_4"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_4"}]},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_3"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_3"}]},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_2"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_2"}]},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_1"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_1"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_21"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_21"}]},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_20"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_20"}]},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_19"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_19"}]},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_18"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_18"}]},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_17"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_17"}]},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_16"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_16"}]},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_15"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_15"}]},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_14"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_14"}]},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_13"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_13"}]},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_12"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_12"}]},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_10"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_10"}]},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_9"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_9"}]},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_8"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_8"}]},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "ShuffleConvs_1_Downs_7"},
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "ShuffleConvs_1_Downs_7"}]},
			{"Name" : "weights_48_48_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_0_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_0_V"}]},
			{"Name" : "weights_48_48_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_1_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_1_V"}]},
			{"Name" : "weights_48_48_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_2_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_2_V"}]},
			{"Name" : "weights_48_48_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_3_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_3_V"}]},
			{"Name" : "weights_48_48_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_4_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_4_V"}]},
			{"Name" : "weights_48_48_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_5_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_5_V"}]},
			{"Name" : "weights_48_48_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_6_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_6_V"}]},
			{"Name" : "weights_48_48_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_7_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_7_V"}]},
			{"Name" : "weights_48_48_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_8_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_8_V"}]},
			{"Name" : "weights_48_48_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_9_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_9_V"}]},
			{"Name" : "weights_48_48_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_10_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_10_V"}]},
			{"Name" : "weights_48_48_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_11_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_11_V"}]},
			{"Name" : "weights_48_48_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_12_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_12_V"}]},
			{"Name" : "weights_48_48_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_13_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_13_V"}]},
			{"Name" : "weights_48_48_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_14_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_14_V"}]},
			{"Name" : "weights_48_48_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_15_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_15_V"}]},
			{"Name" : "weights_48_48_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_16_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_16_V"}]},
			{"Name" : "weights_48_48_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_17_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_17_V"}]},
			{"Name" : "weights_48_48_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_18_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_18_V"}]},
			{"Name" : "weights_48_48_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_19_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_19_V"}]},
			{"Name" : "weights_48_48_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_20_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_20_V"}]},
			{"Name" : "weights_48_48_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_21_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_21_V"}]},
			{"Name" : "weights_48_48_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_22_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_22_V"}]},
			{"Name" : "weights_48_48_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "224", "SubInstance" : "grp_subconv_1x1_16p_p_fu_12744", "Port" : "weight_23_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "weight_23_V"}]},
			{"Name" : "weights_48_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "504", "SubInstance" : "grp_subconv_3x3_16_strid_fu_13797", "Port" : "weight_V"},
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "weight_V"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "504", "SubInstance" : "grp_subconv_3x3_16_strid_fu_13797", "Port" : "output_V"},
					{"ID" : "483", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_13363", "Port" : "output_V"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "left_V"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "output_V"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "input_V"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_24"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_1"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_2"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_3"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_4"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_5"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_6"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_7"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_8"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_9"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_10"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_11"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_12"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_13"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_14"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_15"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_16"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_17"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_18"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_19"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_20"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_21"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_22"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "485", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_13421", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "276", "SubInstance" : "grp_subconv_1x1_8_p_fu_12848", "Port" : "buffer1_1_48_8x8_p_V_23"}]},
			{"Name" : "feature_buffer_96x10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "503", "SubInstance" : "grp_subconv_3x3_8_stride_fu_13785", "Port" : "input_V"},
					{"ID" : "510", "SubInstance" : "grp_shuffle_48_r_p_fu_13919", "Port" : "output_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "input_V"},
					{"ID" : "497", "SubInstance" : "grp_shuffle_48_p_fu_13697", "Port" : "output_V"},
					{"ID" : "507", "SubInstance" : "grp_shuffle_48_l_p_fu_13865", "Port" : "output_V"}]},
			{"Name" : "bias_96_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "503", "SubInstance" : "grp_subconv_3x3_8_stride_fu_13785", "Port" : "bias_V"},
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "bias_V"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "bias_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "bias_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_11"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_11"}]},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_10"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_10"}]},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_7"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_7"}]},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_6"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_6"}]},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_5"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_5"}]},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_4"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_4"}]},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_3"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_3"}]},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_2"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_2"}]},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_1"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_1"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_9"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_9"}]},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "ShuffleConvs_2_Downs_8"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "ShuffleConvs_2_Downs_8"}]},
			{"Name" : "weights_96_96_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_0_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_0_V"}]},
			{"Name" : "weights_96_96_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_1_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_1_V"}]},
			{"Name" : "weights_96_96_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_2_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_2_V"}]},
			{"Name" : "weights_96_96_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_3_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_3_V"}]},
			{"Name" : "weights_96_96_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_4_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_4_V"}]},
			{"Name" : "weights_96_96_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_5_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_5_V"}]},
			{"Name" : "weights_96_96_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_6_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_6_V"}]},
			{"Name" : "weights_96_96_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_7_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_7_V"}]},
			{"Name" : "weights_96_96_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_8_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_8_V"}]},
			{"Name" : "weights_96_96_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_9_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_9_V"}]},
			{"Name" : "weights_96_96_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_10_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_10_V"}]},
			{"Name" : "weights_96_96_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13043", "Port" : "weight_11_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "weight_11_V"}]},
			{"Name" : "weights_96_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "503", "SubInstance" : "grp_subconv_3x3_8_stride_fu_13785", "Port" : "weight_V"},
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "weight_V"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "left_V"},
					{"ID" : "503", "SubInstance" : "grp_subconv_3x3_8_stride_fu_13785", "Port" : "output_V"},
					{"ID" : "489", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_13513", "Port" : "output_V"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "output_V"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "input_V"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_12"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_1"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_2"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_3"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_4"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_5"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_6"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_7"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_8"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_9"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_10"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "487", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_13479", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "328", "SubInstance" : "grp_subconv_1x1_4_p_fu_12952", "Port" : "buffer1_1_96_4x4_p_V_11"}]},
			{"Name" : "feature_buffer_192x6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_shuffle_96_p_fu_13753", "Port" : "output_V"},
					{"ID" : "513", "SubInstance" : "grp_shuffle_96_l_p_fu_13973", "Port" : "output_V"},
					{"ID" : "516", "SubInstance" : "grp_shuffle_96_r_p_fu_14003", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "input_V"}]},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_0"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_0"}]},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_1"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_1"}]},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_2"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_2"}]},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_3"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_3"}]},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_4"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_4"}]},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_5"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_5"}]},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_6"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_6"}]},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "conv_last_output_V_7"},
					{"ID" : "479", "SubInstance" : "grp_conv_last_fu_13329", "Port" : "conv_last_output_V_7"}]},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "525", "SubInstance" : "grp_fc_fu_14163", "Port" : "avgpool_output_V"},
					{"ID" : "523", "SubInstance" : "grp_avgpool_fu_14141", "Port" : "output_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_p_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_1_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_2_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_3_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_4_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_5_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_6_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_7_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_8_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_9_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_10_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_11_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_23_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_19_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_22_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_18_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_11_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_17_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_6_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_16_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_5_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_15_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_4_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_14_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_3_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_13_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_2_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_12_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_1_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_10_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_9_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_21_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_8_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_20_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_7_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_23_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_19_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_22_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_18_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_11_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_17_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_6_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_16_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_5_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_15_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_4_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_14_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_3_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_13_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_2_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_12_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_1_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_10_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_9_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_21_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_8_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_20_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_7_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_48x18_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_V_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_23_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_22_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_11_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_6_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_5_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_4_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_3_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_2_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_1_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_21_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_20_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_19_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_18_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_17_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_16_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_15_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_14_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_13_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_12_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_10_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_9_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_8_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_7_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_24_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_1_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_2_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_3_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_4_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_5_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_6_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_7_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_8_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_9_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_10_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_11_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_12_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_13_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_14_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_15_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_16_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_17_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_18_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_19_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_20_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_21_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_22_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_23_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_96x10_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_V_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_11_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_10_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_7_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_6_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_5_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_4_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_3_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_2_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_1_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_9_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_8_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_12_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_1_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_2_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_3_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_4_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_5_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_6_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_7_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_8_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_9_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_10_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_11_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_192x6_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_0_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_1_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_2_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_3_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_4_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_5_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_6_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_7_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_V_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_CTL_s_axi_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_INPUT_OUTPUT_m_axi_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_OTHER_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_p3X3_1X1_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_BIAS_m_axi_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744", "Parent" : "0", "Child" : ["225", "227", "229", "231", "233", "235", "237", "239", "241", "243", "245", "247", "249", "251", "253", "255", "257", "259", "261", "263", "265", "267", "269", "271", "273", "274", "275"],
		"CDFG" : "subconv_1x1_16p_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1885", "Parent" : "224", "Child" : ["226"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "226", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1885.ShuffleNetV2_mul_bkb_U0", "Parent" : "225"},
	{"ID" : "227", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1894", "Parent" : "224", "Child" : ["228"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "228", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1894.ShuffleNetV2_mul_bkb_U0", "Parent" : "227"},
	{"ID" : "229", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1903", "Parent" : "224", "Child" : ["230"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "230", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1903.ShuffleNetV2_mul_bkb_U0", "Parent" : "229"},
	{"ID" : "231", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1912", "Parent" : "224", "Child" : ["232"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "232", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1912.ShuffleNetV2_mul_bkb_U0", "Parent" : "231"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1921", "Parent" : "224", "Child" : ["234"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "234", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1921.ShuffleNetV2_mul_bkb_U0", "Parent" : "233"},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1930", "Parent" : "224", "Child" : ["236"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "236", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1930.ShuffleNetV2_mul_bkb_U0", "Parent" : "235"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1939", "Parent" : "224", "Child" : ["238"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "238", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1939.ShuffleNetV2_mul_bkb_U0", "Parent" : "237"},
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1948", "Parent" : "224", "Child" : ["240"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "240", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1948.ShuffleNetV2_mul_bkb_U0", "Parent" : "239"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1957", "Parent" : "224", "Child" : ["242"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "242", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1957.ShuffleNetV2_mul_bkb_U0", "Parent" : "241"},
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1966", "Parent" : "224", "Child" : ["244"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "244", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1966.ShuffleNetV2_mul_bkb_U0", "Parent" : "243"},
	{"ID" : "245", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1975", "Parent" : "224", "Child" : ["246"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "246", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1975.ShuffleNetV2_mul_bkb_U0", "Parent" : "245"},
	{"ID" : "247", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1984", "Parent" : "224", "Child" : ["248"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "248", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1984.ShuffleNetV2_mul_bkb_U0", "Parent" : "247"},
	{"ID" : "249", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1993", "Parent" : "224", "Child" : ["250"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "250", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_1993.ShuffleNetV2_mul_bkb_U0", "Parent" : "249"},
	{"ID" : "251", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2002", "Parent" : "224", "Child" : ["252"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "252", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2002.ShuffleNetV2_mul_bkb_U0", "Parent" : "251"},
	{"ID" : "253", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2011", "Parent" : "224", "Child" : ["254"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "254", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2011.ShuffleNetV2_mul_bkb_U0", "Parent" : "253"},
	{"ID" : "255", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2020", "Parent" : "224", "Child" : ["256"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "256", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2020.ShuffleNetV2_mul_bkb_U0", "Parent" : "255"},
	{"ID" : "257", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2029", "Parent" : "224", "Child" : ["258"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "258", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2029.ShuffleNetV2_mul_bkb_U0", "Parent" : "257"},
	{"ID" : "259", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2038", "Parent" : "224", "Child" : ["260"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "260", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2038.ShuffleNetV2_mul_bkb_U0", "Parent" : "259"},
	{"ID" : "261", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2047", "Parent" : "224", "Child" : ["262"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "262", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2047.ShuffleNetV2_mul_bkb_U0", "Parent" : "261"},
	{"ID" : "263", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2056", "Parent" : "224", "Child" : ["264"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "264", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2056.ShuffleNetV2_mul_bkb_U0", "Parent" : "263"},
	{"ID" : "265", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2065", "Parent" : "224", "Child" : ["266"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "266", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2065.ShuffleNetV2_mul_bkb_U0", "Parent" : "265"},
	{"ID" : "267", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2074", "Parent" : "224", "Child" : ["268"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "268", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2074.ShuffleNetV2_mul_bkb_U0", "Parent" : "267"},
	{"ID" : "269", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2083", "Parent" : "224", "Child" : ["270"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "270", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2083.ShuffleNetV2_mul_bkb_U0", "Parent" : "269"},
	{"ID" : "271", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2092", "Parent" : "224", "Child" : ["272"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "272", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.grp_MUL_DP_fu_2092.ShuffleNetV2_mul_bkb_U0", "Parent" : "271"},
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.ShuffleNetV2_uremrcU_U291", "Parent" : "224"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.ShuffleNetV2_uremrcU_U292", "Parent" : "224"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_12744.ShuffleNetV2_mux_sc4_U293", "Parent" : "224"},
	{"ID" : "276", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848", "Parent" : "0", "Child" : ["277", "279", "281", "283", "285", "287", "289", "291", "293", "295", "297", "299", "301", "303", "305", "307", "309", "311", "313", "315", "317", "319", "321", "323", "325", "326", "327"],
		"CDFG" : "subconv_1x1_8_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1878", "Parent" : "276", "Child" : ["278"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "278", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1878.ShuffleNetV2_mul_bkb_U0", "Parent" : "277"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1887", "Parent" : "276", "Child" : ["280"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "280", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1887.ShuffleNetV2_mul_bkb_U0", "Parent" : "279"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1896", "Parent" : "276", "Child" : ["282"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "282", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1896.ShuffleNetV2_mul_bkb_U0", "Parent" : "281"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1905", "Parent" : "276", "Child" : ["284"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "284", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1905.ShuffleNetV2_mul_bkb_U0", "Parent" : "283"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1914", "Parent" : "276", "Child" : ["286"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "286", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1914.ShuffleNetV2_mul_bkb_U0", "Parent" : "285"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1923", "Parent" : "276", "Child" : ["288"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "288", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1923.ShuffleNetV2_mul_bkb_U0", "Parent" : "287"},
	{"ID" : "289", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1932", "Parent" : "276", "Child" : ["290"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "290", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1932.ShuffleNetV2_mul_bkb_U0", "Parent" : "289"},
	{"ID" : "291", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1941", "Parent" : "276", "Child" : ["292"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "292", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1941.ShuffleNetV2_mul_bkb_U0", "Parent" : "291"},
	{"ID" : "293", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1950", "Parent" : "276", "Child" : ["294"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "294", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1950.ShuffleNetV2_mul_bkb_U0", "Parent" : "293"},
	{"ID" : "295", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1959", "Parent" : "276", "Child" : ["296"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "296", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1959.ShuffleNetV2_mul_bkb_U0", "Parent" : "295"},
	{"ID" : "297", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1968", "Parent" : "276", "Child" : ["298"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "298", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1968.ShuffleNetV2_mul_bkb_U0", "Parent" : "297"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1977", "Parent" : "276", "Child" : ["300"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "300", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1977.ShuffleNetV2_mul_bkb_U0", "Parent" : "299"},
	{"ID" : "301", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1986", "Parent" : "276", "Child" : ["302"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "302", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1986.ShuffleNetV2_mul_bkb_U0", "Parent" : "301"},
	{"ID" : "303", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1995", "Parent" : "276", "Child" : ["304"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "304", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_1995.ShuffleNetV2_mul_bkb_U0", "Parent" : "303"},
	{"ID" : "305", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2004", "Parent" : "276", "Child" : ["306"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "306", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2004.ShuffleNetV2_mul_bkb_U0", "Parent" : "305"},
	{"ID" : "307", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2013", "Parent" : "276", "Child" : ["308"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "308", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2013.ShuffleNetV2_mul_bkb_U0", "Parent" : "307"},
	{"ID" : "309", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2022", "Parent" : "276", "Child" : ["310"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "310", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2022.ShuffleNetV2_mul_bkb_U0", "Parent" : "309"},
	{"ID" : "311", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2031", "Parent" : "276", "Child" : ["312"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "312", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2031.ShuffleNetV2_mul_bkb_U0", "Parent" : "311"},
	{"ID" : "313", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2040", "Parent" : "276", "Child" : ["314"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "314", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2040.ShuffleNetV2_mul_bkb_U0", "Parent" : "313"},
	{"ID" : "315", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2049", "Parent" : "276", "Child" : ["316"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "316", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2049.ShuffleNetV2_mul_bkb_U0", "Parent" : "315"},
	{"ID" : "317", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2058", "Parent" : "276", "Child" : ["318"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "318", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2058.ShuffleNetV2_mul_bkb_U0", "Parent" : "317"},
	{"ID" : "319", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2067", "Parent" : "276", "Child" : ["320"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "320", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2067.ShuffleNetV2_mul_bkb_U0", "Parent" : "319"},
	{"ID" : "321", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2076", "Parent" : "276", "Child" : ["322"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "322", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2076.ShuffleNetV2_mul_bkb_U0", "Parent" : "321"},
	{"ID" : "323", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2085", "Parent" : "276", "Child" : ["324"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "324", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.grp_MUL_DP_fu_2085.ShuffleNetV2_mul_bkb_U0", "Parent" : "323"},
	{"ID" : "325", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.ShuffleNetV2_uremrcU_x_U372", "Parent" : "276"},
	{"ID" : "326", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.ShuffleNetV2_uremrcU_x_U373", "Parent" : "276"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_12848.ShuffleNetV2_mux_sc4_x_U374", "Parent" : "276"},
	{"ID" : "328", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952", "Parent" : "0", "Child" : ["329", "331", "333", "335", "337", "339", "341", "343", "345", "347", "349", "351", "353", "354", "355"],
		"CDFG" : "subconv_1x1_4_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1698", "Parent" : "328", "Child" : ["330"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "330", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1698.ShuffleNetV2_mul_bkb_U0", "Parent" : "329"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1705", "Parent" : "328", "Child" : ["332"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "332", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1705.ShuffleNetV2_mul_bkb_U0", "Parent" : "331"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1712", "Parent" : "328", "Child" : ["334"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "334", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1712.ShuffleNetV2_mul_bkb_U0", "Parent" : "333"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1719", "Parent" : "328", "Child" : ["336"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "336", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1719.ShuffleNetV2_mul_bkb_U0", "Parent" : "335"},
	{"ID" : "337", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1726", "Parent" : "328", "Child" : ["338"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "338", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1726.ShuffleNetV2_mul_bkb_U0", "Parent" : "337"},
	{"ID" : "339", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1733", "Parent" : "328", "Child" : ["340"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "340", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1733.ShuffleNetV2_mul_bkb_U0", "Parent" : "339"},
	{"ID" : "341", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1740", "Parent" : "328", "Child" : ["342"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "342", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1740.ShuffleNetV2_mul_bkb_U0", "Parent" : "341"},
	{"ID" : "343", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1747", "Parent" : "328", "Child" : ["344"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "344", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1747.ShuffleNetV2_mul_bkb_U0", "Parent" : "343"},
	{"ID" : "345", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1754", "Parent" : "328", "Child" : ["346"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "346", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1754.ShuffleNetV2_mul_bkb_U0", "Parent" : "345"},
	{"ID" : "347", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1761", "Parent" : "328", "Child" : ["348"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "348", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1761.ShuffleNetV2_mul_bkb_U0", "Parent" : "347"},
	{"ID" : "349", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1768", "Parent" : "328", "Child" : ["350"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "350", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1768.ShuffleNetV2_mul_bkb_U0", "Parent" : "349"},
	{"ID" : "351", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1775", "Parent" : "328", "Child" : ["352"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "352", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.grp_MUL_DP_fu_1775.ShuffleNetV2_mul_bkb_U0", "Parent" : "351"},
	{"ID" : "353", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.ShuffleNetV2_uremvdy_x_U584", "Parent" : "328"},
	{"ID" : "354", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.ShuffleNetV2_uremwdI_x_U585", "Parent" : "328"},
	{"ID" : "355", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_12952.ShuffleNetV2_mux_pcA_x_U586", "Parent" : "328"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008", "Parent" : "0", "Child" : ["357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "371", "373", "375", "377", "379", "381", "383", "385", "387", "389", "391", "393", "394", "395", "396"],
		"CDFG" : "conv1_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "weight_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "weight_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "conv1_weight_V3", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_11", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "357", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_0_V_U", "Parent" : "356"},
	{"ID" : "358", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_1_V_U", "Parent" : "356"},
	{"ID" : "359", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_2_V_U", "Parent" : "356"},
	{"ID" : "360", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_3_V_U", "Parent" : "356"},
	{"ID" : "361", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_4_V_U", "Parent" : "356"},
	{"ID" : "362", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_5_V_U", "Parent" : "356"},
	{"ID" : "363", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_6_V_U", "Parent" : "356"},
	{"ID" : "364", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_7_V_U", "Parent" : "356"},
	{"ID" : "365", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_8_V_U", "Parent" : "356"},
	{"ID" : "366", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_9_V_U", "Parent" : "356"},
	{"ID" : "367", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_10_V_U", "Parent" : "356"},
	{"ID" : "368", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.weight_temp_11_V_U", "Parent" : "356"},
	{"ID" : "369", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1343", "Parent" : "356", "Child" : ["370"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "370", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1343.ShuffleNetV2_mul_bkb_U0", "Parent" : "369"},
	{"ID" : "371", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1353", "Parent" : "356", "Child" : ["372"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "372", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1353.ShuffleNetV2_mul_bkb_U0", "Parent" : "371"},
	{"ID" : "373", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1363", "Parent" : "356", "Child" : ["374"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "374", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1363.ShuffleNetV2_mul_bkb_U0", "Parent" : "373"},
	{"ID" : "375", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1373", "Parent" : "356", "Child" : ["376"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "376", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1373.ShuffleNetV2_mul_bkb_U0", "Parent" : "375"},
	{"ID" : "377", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1383", "Parent" : "356", "Child" : ["378"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "378", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1383.ShuffleNetV2_mul_bkb_U0", "Parent" : "377"},
	{"ID" : "379", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1393", "Parent" : "356", "Child" : ["380"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "380", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1393.ShuffleNetV2_mul_bkb_U0", "Parent" : "379"},
	{"ID" : "381", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1403", "Parent" : "356", "Child" : ["382"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "382", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1403.ShuffleNetV2_mul_bkb_U0", "Parent" : "381"},
	{"ID" : "383", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1413", "Parent" : "356", "Child" : ["384"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "384", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1413.ShuffleNetV2_mul_bkb_U0", "Parent" : "383"},
	{"ID" : "385", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1423", "Parent" : "356", "Child" : ["386"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "386", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1423.ShuffleNetV2_mul_bkb_U0", "Parent" : "385"},
	{"ID" : "387", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1433", "Parent" : "356", "Child" : ["388"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "388", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1433.ShuffleNetV2_mul_bkb_U0", "Parent" : "387"},
	{"ID" : "389", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1443", "Parent" : "356", "Child" : ["390"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "390", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1443.ShuffleNetV2_mul_bkb_U0", "Parent" : "389"},
	{"ID" : "391", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1453", "Parent" : "356", "Child" : ["392"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "392", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.grp_MUL_DP_fu_1453.ShuffleNetV2_mul_bkb_U0", "Parent" : "391"},
	{"ID" : "393", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.ShuffleNetV2_uremocq_U4", "Parent" : "356"},
	{"ID" : "394", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.ShuffleNetV2_uremocq_U5", "Parent" : "356"},
	{"ID" : "395", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.ShuffleNetV2_uremocq_U6", "Parent" : "356"},
	{"ID" : "396", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_13008.ShuffleNetV2_mux_pcA_U7", "Parent" : "356"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043", "Parent" : "0", "Child" : ["398", "400", "402", "404", "406", "408", "410", "412", "414", "416", "418", "420", "422", "423", "424"],
		"CDFG" : "subconv_1x1_8p_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "398", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1198", "Parent" : "397", "Child" : ["399"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "399", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1198.ShuffleNetV2_mul_bkb_U0", "Parent" : "398"},
	{"ID" : "400", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1207", "Parent" : "397", "Child" : ["401"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "401", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1207.ShuffleNetV2_mul_bkb_U0", "Parent" : "400"},
	{"ID" : "402", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1216", "Parent" : "397", "Child" : ["403"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "403", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1216.ShuffleNetV2_mul_bkb_U0", "Parent" : "402"},
	{"ID" : "404", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1225", "Parent" : "397", "Child" : ["405"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "405", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1225.ShuffleNetV2_mul_bkb_U0", "Parent" : "404"},
	{"ID" : "406", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1234", "Parent" : "397", "Child" : ["407"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "407", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1234.ShuffleNetV2_mul_bkb_U0", "Parent" : "406"},
	{"ID" : "408", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1243", "Parent" : "397", "Child" : ["409"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "409", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1243.ShuffleNetV2_mul_bkb_U0", "Parent" : "408"},
	{"ID" : "410", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1252", "Parent" : "397", "Child" : ["411"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "411", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1252.ShuffleNetV2_mul_bkb_U0", "Parent" : "410"},
	{"ID" : "412", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1261", "Parent" : "397", "Child" : ["413"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "413", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1261.ShuffleNetV2_mul_bkb_U0", "Parent" : "412"},
	{"ID" : "414", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1270", "Parent" : "397", "Child" : ["415"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "415", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1270.ShuffleNetV2_mul_bkb_U0", "Parent" : "414"},
	{"ID" : "416", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1279", "Parent" : "397", "Child" : ["417"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "417", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1279.ShuffleNetV2_mul_bkb_U0", "Parent" : "416"},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1288", "Parent" : "397", "Child" : ["419"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "419", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1288.ShuffleNetV2_mul_bkb_U0", "Parent" : "418"},
	{"ID" : "420", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1297", "Parent" : "397", "Child" : ["421"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "421", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.grp_MUL_DP_fu_1297.ShuffleNetV2_mul_bkb_U0", "Parent" : "420"},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.ShuffleNetV2_uremvdy_U539", "Parent" : "397"},
	{"ID" : "423", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.ShuffleNetV2_uremwdI_U540", "Parent" : "397"},
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13043.ShuffleNetV2_mux_pcA_x_U541", "Parent" : "397"},
	{"ID" : "425", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099", "Parent" : "0", "Child" : ["426", "428", "430", "432", "434", "436", "438", "440", "442", "444", "446", "448", "450", "451", "452"],
		"CDFG" : "subconv_1x1_32_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1637", "Parent" : "425", "Child" : ["427"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "427", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1637.ShuffleNetV2_mul_bkb_U0", "Parent" : "426"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1646", "Parent" : "425", "Child" : ["429"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "429", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1646.ShuffleNetV2_mul_bkb_U0", "Parent" : "428"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1655", "Parent" : "425", "Child" : ["431"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "431", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1655.ShuffleNetV2_mul_bkb_U0", "Parent" : "430"},
	{"ID" : "432", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1664", "Parent" : "425", "Child" : ["433"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "433", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1664.ShuffleNetV2_mul_bkb_U0", "Parent" : "432"},
	{"ID" : "434", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1673", "Parent" : "425", "Child" : ["435"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "435", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1673.ShuffleNetV2_mul_bkb_U0", "Parent" : "434"},
	{"ID" : "436", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1682", "Parent" : "425", "Child" : ["437"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "437", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1682.ShuffleNetV2_mul_bkb_U0", "Parent" : "436"},
	{"ID" : "438", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1691", "Parent" : "425", "Child" : ["439"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "439", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1691.ShuffleNetV2_mul_bkb_U0", "Parent" : "438"},
	{"ID" : "440", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1700", "Parent" : "425", "Child" : ["441"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "441", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1700.ShuffleNetV2_mul_bkb_U0", "Parent" : "440"},
	{"ID" : "442", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1709", "Parent" : "425", "Child" : ["443"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "443", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1709.ShuffleNetV2_mul_bkb_U0", "Parent" : "442"},
	{"ID" : "444", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1718", "Parent" : "425", "Child" : ["445"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "445", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1718.ShuffleNetV2_mul_bkb_U0", "Parent" : "444"},
	{"ID" : "446", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1727", "Parent" : "425", "Child" : ["447"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "447", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1727.ShuffleNetV2_mul_bkb_U0", "Parent" : "446"},
	{"ID" : "448", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1736", "Parent" : "425", "Child" : ["449"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "449", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.grp_MUL_DP_fu_1736.ShuffleNetV2_mul_bkb_U0", "Parent" : "448"},
	{"ID" : "450", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.ShuffleNetV2_mux_pcA_x_U25", "Parent" : "425"},
	{"ID" : "451", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.ShuffleNetV2_mux_pcA_x_U26", "Parent" : "425"},
	{"ID" : "452", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_13099.ShuffleNetV2_mux_qcK_U27", "Parent" : "425"},
	{"ID" : "453", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225", "Parent" : "0", "Child" : ["454", "456", "458", "460", "462", "464", "466", "468", "470", "472", "474", "476", "478"],
		"CDFG" : "subconv_1x1_16_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "454", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1452", "Parent" : "453", "Child" : ["455"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "455", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1452.ShuffleNetV2_mul_bkb_U0", "Parent" : "454"},
	{"ID" : "456", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1462", "Parent" : "453", "Child" : ["457"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "457", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1462.ShuffleNetV2_mul_bkb_U0", "Parent" : "456"},
	{"ID" : "458", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1472", "Parent" : "453", "Child" : ["459"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "459", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1472.ShuffleNetV2_mul_bkb_U0", "Parent" : "458"},
	{"ID" : "460", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1482", "Parent" : "453", "Child" : ["461"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "461", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1482.ShuffleNetV2_mul_bkb_U0", "Parent" : "460"},
	{"ID" : "462", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1492", "Parent" : "453", "Child" : ["463"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "463", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1492.ShuffleNetV2_mul_bkb_U0", "Parent" : "462"},
	{"ID" : "464", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1502", "Parent" : "453", "Child" : ["465"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "465", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1502.ShuffleNetV2_mul_bkb_U0", "Parent" : "464"},
	{"ID" : "466", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1512", "Parent" : "453", "Child" : ["467"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "467", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1512.ShuffleNetV2_mul_bkb_U0", "Parent" : "466"},
	{"ID" : "468", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1522", "Parent" : "453", "Child" : ["469"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "469", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1522.ShuffleNetV2_mul_bkb_U0", "Parent" : "468"},
	{"ID" : "470", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1532", "Parent" : "453", "Child" : ["471"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "471", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1532.ShuffleNetV2_mul_bkb_U0", "Parent" : "470"},
	{"ID" : "472", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1542", "Parent" : "453", "Child" : ["473"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "473", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1542.ShuffleNetV2_mul_bkb_U0", "Parent" : "472"},
	{"ID" : "474", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1552", "Parent" : "453", "Child" : ["475"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "475", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1552.ShuffleNetV2_mul_bkb_U0", "Parent" : "474"},
	{"ID" : "476", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1562", "Parent" : "453", "Child" : ["477"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "477", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.grp_MUL_DP_fu_1562.ShuffleNetV2_mul_bkb_U0", "Parent" : "476"},
	{"ID" : "478", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_13225.ShuffleNetV2_mux_qcK_x_U117", "Parent" : "453"},
	{"ID" : "479", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_13329", "Parent" : "0", "Child" : ["480", "482"],
		"CDFG" : "conv_last",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_0_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "weight_0_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "weight_0_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "conv_last_weight_0_V9", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_1_V11", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_2_V13", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_3_V15", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_4_V17", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_5_V19", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_6_V21", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv_last_weight_7_V23", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "480", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_13329.grp_MUL_DP_fu_751", "Parent" : "479", "Child" : ["481"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "481", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_13329.grp_MUL_DP_fu_751.ShuffleNetV2_mul_bkb_U0", "Parent" : "480"},
	{"ID" : "482", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_13329.ShuffleNetV2_mux_zec_U679", "Parent" : "479"},
	{"ID" : "483", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_13363", "Parent" : "0", "Child" : ["484"],
		"CDFG" : "subconv_3x3_16_strid_1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "484", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_13363.ShuffleNetV2_mux_sc4_x_U344", "Parent" : "483"},
	{"ID" : "485", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_13421", "Parent" : "0", "Child" : ["486"],
		"CDFG" : "subconv_3x3_8_no_rel",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "486", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_13421.ShuffleNetV2_mux_sc4_x_U483", "Parent" : "485"},
	{"ID" : "487", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_13479", "Parent" : "0", "Child" : ["488"],
		"CDFG" : "subconv_3x3_4_no_rel",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "488", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_13479.ShuffleNetV2_mux_pcA_x_U647", "Parent" : "487"},
	{"ID" : "489", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_13513", "Parent" : "0", "Child" : ["490"],
		"CDFG" : "subconv_3x3_8_stride_1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "490", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_13513.ShuffleNetV2_mux_pcA_x_U568", "Parent" : "489"},
	{"ID" : "491", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_13547", "Parent" : "0", "Child" : ["492"],
		"CDFG" : "subconv_3x3_32_strid",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "492", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_13547.ShuffleNetV2_mux_pcA_x_U194", "Parent" : "491"},
	{"ID" : "493", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_1_fu_13581", "Parent" : "0", "Child" : ["494"],
		"CDFG" : "subconv_3x3_32_strid_1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ShuffleConvs_0_Downs_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "494", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_1_fu_13581.ShuffleNetV2_mux_qcK_x_U89", "Parent" : "493"},
	{"ID" : "495", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_13639", "Parent" : "0", "Child" : ["496"],
		"CDFG" : "subconv_3x3_16_no_re",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "496", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_13639.ShuffleNetV2_mux_qcK_x_U236", "Parent" : "495"},
	{"ID" : "497", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_13697", "Parent" : "0", "Child" : ["498", "499"],
		"CDFG" : "shuffle_48_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "498", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_13697.ShuffleNetV2_uremtde_x_U511", "Parent" : "497"},
	{"ID" : "499", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_13697.ShuffleNetV2_mux_udo_x_U512", "Parent" : "497"},
	{"ID" : "500", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_13753", "Parent" : "0", "Child" : ["501", "502"],
		"CDFG" : "shuffle_96_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "501", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_13753.ShuffleNetV2_uremxdS_x_U663", "Parent" : "500"},
	{"ID" : "502", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_13753.ShuffleNetV2_mux_yd2_x_U664", "Parent" : "500"},
	{"ID" : "503", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_13785", "Parent" : "0",
		"CDFG" : "subconv_3x3_8_stride",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "504", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_13797", "Parent" : "0",
		"CDFG" : "subconv_3x3_16_strid",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "505", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_13809", "Parent" : "0", "Child" : ["506"],
		"CDFG" : "shuffle_24_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "506", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_13809.ShuffleNetV2_mux_qcK_x_U264", "Parent" : "505"},
	{"ID" : "507", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_13865", "Parent" : "0", "Child" : ["508", "509"],
		"CDFG" : "shuffle_48_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "508", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_13865.ShuffleNetV2_uremtde_U425", "Parent" : "507"},
	{"ID" : "509", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_13865.ShuffleNetV2_mux_udo_U426", "Parent" : "507"},
	{"ID" : "510", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_13919", "Parent" : "0", "Child" : ["511", "512"],
		"CDFG" : "shuffle_48_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "511", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_13919.ShuffleNetV2_uremtde_x_U456", "Parent" : "510"},
	{"ID" : "512", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_13919.ShuffleNetV2_mux_udo_x_U457", "Parent" : "510"},
	{"ID" : "513", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_13973", "Parent" : "0", "Child" : ["514", "515"],
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "514", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_13973.ShuffleNetV2_uremxdS_U613", "Parent" : "513"},
	{"ID" : "515", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_13973.ShuffleNetV2_mux_yd2_U614", "Parent" : "513"},
	{"ID" : "516", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_14003", "Parent" : "0", "Child" : ["517", "518"],
		"CDFG" : "shuffle_96_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "517", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_14003.ShuffleNetV2_uremxdS_x_U632", "Parent" : "516"},
	{"ID" : "518", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_14003.ShuffleNetV2_mux_yd2_x_U633", "Parent" : "516"},
	{"ID" : "519", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_14033", "Parent" : "0", "Child" : ["520"],
		"CDFG" : "shuffle_24_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "520", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_14033.ShuffleNetV2_mux_qcK_x_U168", "Parent" : "519"},
	{"ID" : "521", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_14087", "Parent" : "0", "Child" : ["522"],
		"CDFG" : "shuffle_24_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "522", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_14087.ShuffleNetV2_mux_qcK_x_U210", "Parent" : "521"},
	{"ID" : "523", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_14141", "Parent" : "0", "Child" : ["524"],
		"CDFG" : "avgpool",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "524", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_14141.ShuffleNetV2_mux_zec_x_U699", "Parent" : "523"},
	{"ID" : "525", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_14163", "Parent" : "0",
		"CDFG" : "fc",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "MAXI", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "weight_V_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "weight_V_blk_n_R", "Type" : "RtlSignal"}]},
			{"Name" : "fc_weight_V25", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "output_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "output_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "output_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "fc_output_V29", "Type" : "None", "Direction" : "I"},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "526", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U715", "Parent" : "0"},
	{"ID" : "527", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U716", "Parent" : "0"},
	{"ID" : "528", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U717", "Parent" : "0"},
	{"ID" : "529", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U718", "Parent" : "0"},
	{"ID" : "530", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U719", "Parent" : "0"},
	{"ID" : "531", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U720", "Parent" : "0"},
	{"ID" : "532", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U721", "Parent" : "0"},
	{"ID" : "533", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U722", "Parent" : "0"},
	{"ID" : "534", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U723", "Parent" : "0"},
	{"ID" : "535", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U724", "Parent" : "0"},
	{"ID" : "536", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U725", "Parent" : "0"},
	{"ID" : "537", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U726", "Parent" : "0"},
	{"ID" : "538", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U727", "Parent" : "0"},
	{"ID" : "539", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U728", "Parent" : "0"},
	{"ID" : "540", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U729", "Parent" : "0"},
	{"ID" : "541", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U730", "Parent" : "0"},
	{"ID" : "542", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U731", "Parent" : "0"},
	{"ID" : "543", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U732", "Parent" : "0"},
	{"ID" : "544", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd6N_U733", "Parent" : "0"},
	{"ID" : "545", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U734", "Parent" : "0"},
	{"ID" : "546", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U735", "Parent" : "0"},
	{"ID" : "547", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U736", "Parent" : "0"},
	{"ID" : "548", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U737", "Parent" : "0"},
	{"ID" : "549", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U738", "Parent" : "0"},
	{"ID" : "550", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U739", "Parent" : "0"},
	{"ID" : "551", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U740", "Parent" : "0"},
	{"ID" : "552", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U741", "Parent" : "0"},
	{"ID" : "553", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremd7N_U742", "Parent" : "0"},
	{"ID" : "554", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U743", "Parent" : "0"},
	{"ID" : "555", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U744", "Parent" : "0"},
	{"ID" : "556", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U745", "Parent" : "0"},
	{"ID" : "557", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U746", "Parent" : "0"},
	{"ID" : "558", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U747", "Parent" : "0"},
	{"ID" : "559", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U748", "Parent" : "0"},
	{"ID" : "560", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U749", "Parent" : "0"},
	{"ID" : "561", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U750", "Parent" : "0"},
	{"ID" : "562", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U751", "Parent" : "0"},
	{"ID" : "563", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U752", "Parent" : "0"},
	{"ID" : "564", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U753", "Parent" : "0"},
	{"ID" : "565", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U754", "Parent" : "0"},
	{"ID" : "566", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U755", "Parent" : "0"},
	{"ID" : "567", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U756", "Parent" : "0"},
	{"ID" : "568", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U757", "Parent" : "0"},
	{"ID" : "569", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U758", "Parent" : "0"},
	{"ID" : "570", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U759", "Parent" : "0"},
	{"ID" : "571", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U760", "Parent" : "0"},
	{"ID" : "572", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d8N_U761", "Parent" : "0"},
	{"ID" : "573", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U762", "Parent" : "0"},
	{"ID" : "574", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U763", "Parent" : "0"},
	{"ID" : "575", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U764", "Parent" : "0"},
	{"ID" : "576", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U765", "Parent" : "0"},
	{"ID" : "577", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U766", "Parent" : "0"},
	{"ID" : "578", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U767", "Parent" : "0"},
	{"ID" : "579", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U768", "Parent" : "0"},
	{"ID" : "580", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U769", "Parent" : "0"},
	{"ID" : "581", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_d9N_U770", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		DATA_INPUT_OUTPUT {Type IO LastRead 34 FirstWrite 12}
		DATA_OTHER_WEIGHTS {Type I LastRead 29 FirstWrite -1}
		p3X3_1X1_WEIGHTS {Type I LastRead 338 FirstWrite -1}
		DATA_BIAS {Type I LastRead 335 FirstWrite -1}
		image_V {Type I LastRead 0 FirstWrite -1}
		conv1_weight_V {Type I LastRead 0 FirstWrite -1}
		shuffle_conv_3x3_V {Type I LastRead 0 FirstWrite -1}
		shuffle_conv_1x1_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_0_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_1_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_2_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_3_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_4_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_5_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_6_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_7_V {Type I LastRead 0 FirstWrite -1}
		fc_weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}
		fc_output_V {Type I LastRead 0 FirstWrite -1}
		conv1_bias_V {Type IO LastRead -1 FirstWrite -1}
		conv_last_bias_V {Type IO LastRead -1 FirstWrite -1}
		fc_bias_V {Type IO LastRead -1 FirstWrite -1}
		image_p_V {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_0 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_9 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_10 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_11 {Type IO LastRead -1 FirstWrite -1}
		bias_24_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_23 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_16 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_14 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_12 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_s {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_8 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_9 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_10 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_11 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_12 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_13 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_14 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_15 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_16 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_17 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_18 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_19 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_20 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_21 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_22 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_23 {Type IO LastRead -1 FirstWrite -1}
		weights_24_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_23 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_19 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_22 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_18 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_11 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_17 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_16 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_15 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_14 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_13 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_12 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_10 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_9 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_21 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_20 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type IO LastRead -1 FirstWrite -1}
		feature_buffer_48x18 {Type IO LastRead -1 FirstWrite -1}
		bias_48_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_23 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_16 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_14 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_12 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_s {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_8 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_9 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_10 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_11 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_12 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_13 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_14 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_15 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_16 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_17 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_18 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_19 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_20 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_21 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_22 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_23 {Type IO LastRead -1 FirstWrite -1}
		weights_48_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_48_8x8_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type IO LastRead -1 FirstWrite -1}
		feature_buffer_96x10 {Type IO LastRead -1 FirstWrite -1}
		bias_96_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_s {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_8 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_9 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_10 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_11 {Type IO LastRead -1 FirstWrite -1}
		weights_96_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_96_4x4_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type IO LastRead -1 FirstWrite -1}
		feature_buffer_192x6 {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_0 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_1 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_2 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_3 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_4 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_5 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_6 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_7 {Type IO LastRead -1 FirstWrite -1}
		avgpool_output_V {Type IO LastRead -1 FirstWrite -1}}
	subconv_1x1_16p_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 8 FirstWrite -1}
		weight_1_V {Type I LastRead 8 FirstWrite -1}
		weight_2_V {Type I LastRead 8 FirstWrite -1}
		weight_3_V {Type I LastRead 8 FirstWrite -1}
		weight_4_V {Type I LastRead 8 FirstWrite -1}
		weight_5_V {Type I LastRead 8 FirstWrite -1}
		weight_6_V {Type I LastRead 8 FirstWrite -1}
		weight_7_V {Type I LastRead 8 FirstWrite -1}
		weight_8_V {Type I LastRead 8 FirstWrite -1}
		weight_9_V {Type I LastRead 8 FirstWrite -1}
		weight_10_V {Type I LastRead 8 FirstWrite -1}
		weight_11_V {Type I LastRead 8 FirstWrite -1}
		weight_12_V {Type I LastRead 8 FirstWrite -1}
		weight_13_V {Type I LastRead 8 FirstWrite -1}
		weight_14_V {Type I LastRead 8 FirstWrite -1}
		weight_15_V {Type I LastRead 8 FirstWrite -1}
		weight_16_V {Type I LastRead 8 FirstWrite -1}
		weight_17_V {Type I LastRead 8 FirstWrite -1}
		weight_18_V {Type I LastRead 8 FirstWrite -1}
		weight_19_V {Type I LastRead 8 FirstWrite -1}
		weight_20_V {Type I LastRead 8 FirstWrite -1}
		weight_21_V {Type I LastRead 8 FirstWrite -1}
		weight_22_V {Type I LastRead 8 FirstWrite -1}
		weight_23_V {Type I LastRead 8 FirstWrite -1}
		bias_V {Type I LastRead 10 FirstWrite -1}
		ShuffleConvs_1_Downs_23 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_22 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_11 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_6 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_5 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_4 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_3 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_2 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_1 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_21 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_20 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_19 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_18 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_17 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_16 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_15 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_14 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_13 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_12 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_10 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_9 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_8 {Type IO LastRead 15 FirstWrite 11}
		ShuffleConvs_1_Downs_7 {Type IO LastRead 15 FirstWrite 11}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	subconv_1x1_8_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 8 FirstWrite -1}
		weight_1_V {Type I LastRead 8 FirstWrite -1}
		weight_2_V {Type I LastRead 8 FirstWrite -1}
		weight_3_V {Type I LastRead 8 FirstWrite -1}
		weight_4_V {Type I LastRead 8 FirstWrite -1}
		weight_5_V {Type I LastRead 8 FirstWrite -1}
		weight_6_V {Type I LastRead 8 FirstWrite -1}
		weight_7_V {Type I LastRead 8 FirstWrite -1}
		weight_8_V {Type I LastRead 8 FirstWrite -1}
		weight_9_V {Type I LastRead 8 FirstWrite -1}
		weight_10_V {Type I LastRead 8 FirstWrite -1}
		weight_11_V {Type I LastRead 8 FirstWrite -1}
		weight_12_V {Type I LastRead 8 FirstWrite -1}
		weight_13_V {Type I LastRead 8 FirstWrite -1}
		weight_14_V {Type I LastRead 8 FirstWrite -1}
		weight_15_V {Type I LastRead 8 FirstWrite -1}
		weight_16_V {Type I LastRead 8 FirstWrite -1}
		weight_17_V {Type I LastRead 8 FirstWrite -1}
		weight_18_V {Type I LastRead 8 FirstWrite -1}
		weight_19_V {Type I LastRead 8 FirstWrite -1}
		weight_20_V {Type I LastRead 8 FirstWrite -1}
		weight_21_V {Type I LastRead 8 FirstWrite -1}
		weight_22_V {Type I LastRead 8 FirstWrite -1}
		weight_23_V {Type I LastRead 8 FirstWrite -1}
		bias_V {Type I LastRead 10 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_1 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_2 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_3 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_4 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_5 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_6 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_7 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_8 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_9 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_10 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_11 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_12 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_13 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_14 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_15 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_16 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_17 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_18 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_19 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_20 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_21 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_22 {Type IO LastRead 15 FirstWrite 11}
		buffer1_1_48_8x8_p_V_23 {Type IO LastRead 15 FirstWrite 11}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	subconv_1x1_4_p {
		input_V {Type I LastRead 7 FirstWrite -1}
		weight_0_V {Type I LastRead 9 FirstWrite -1}
		weight_1_V {Type I LastRead 9 FirstWrite -1}
		weight_2_V {Type I LastRead 9 FirstWrite -1}
		weight_3_V {Type I LastRead 9 FirstWrite -1}
		weight_4_V {Type I LastRead 9 FirstWrite -1}
		weight_5_V {Type I LastRead 9 FirstWrite -1}
		weight_6_V {Type I LastRead 9 FirstWrite -1}
		weight_7_V {Type I LastRead 9 FirstWrite -1}
		weight_8_V {Type I LastRead 9 FirstWrite -1}
		weight_9_V {Type I LastRead 9 FirstWrite -1}
		weight_10_V {Type I LastRead 9 FirstWrite -1}
		weight_11_V {Type I LastRead 9 FirstWrite -1}
		bias_V {Type I LastRead 11 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_9 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_10 {Type IO LastRead 15 FirstWrite 12}
		buffer1_1_96_4x4_p_V_11 {Type IO LastRead 15 FirstWrite 12}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	conv1_p {
		input_V {Type I LastRead 10 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		conv1_weight_V3 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 10 FirstWrite -1}
		conv1_output_p_V_0 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_1 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_2 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_3 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_4 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_5 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_6 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_7 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_8 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_9 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_10 {Type IO LastRead 18 FirstWrite 11}
		conv1_output_p_V_11 {Type IO LastRead 18 FirstWrite 11}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	subconv_1x1_8p_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 8 FirstWrite -1}
		weight_1_V {Type I LastRead 8 FirstWrite -1}
		weight_2_V {Type I LastRead 8 FirstWrite -1}
		weight_3_V {Type I LastRead 8 FirstWrite -1}
		weight_4_V {Type I LastRead 8 FirstWrite -1}
		weight_5_V {Type I LastRead 8 FirstWrite -1}
		weight_6_V {Type I LastRead 8 FirstWrite -1}
		weight_7_V {Type I LastRead 8 FirstWrite -1}
		weight_8_V {Type I LastRead 8 FirstWrite -1}
		weight_9_V {Type I LastRead 8 FirstWrite -1}
		weight_10_V {Type I LastRead 8 FirstWrite -1}
		weight_11_V {Type I LastRead 8 FirstWrite -1}
		bias_V {Type I LastRead 11 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_10 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_7 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_6 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_5 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_4 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_3 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_2 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_1 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_9 {Type IO LastRead 14 FirstWrite 12}
		ShuffleConvs_2_Downs_8 {Type IO LastRead 14 FirstWrite 12}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	subconv_1x1_32_p {
		weight_0_V {Type I LastRead 7 FirstWrite -1}
		weight_1_V {Type I LastRead 7 FirstWrite -1}
		weight_2_V {Type I LastRead 7 FirstWrite -1}
		weight_3_V {Type I LastRead 7 FirstWrite -1}
		weight_4_V {Type I LastRead 7 FirstWrite -1}
		weight_5_V {Type I LastRead 7 FirstWrite -1}
		weight_6_V {Type I LastRead 7 FirstWrite -1}
		weight_7_V {Type I LastRead 7 FirstWrite -1}
		weight_8_V {Type I LastRead 7 FirstWrite -1}
		weight_9_V {Type I LastRead 7 FirstWrite -1}
		weight_10_V {Type I LastRead 7 FirstWrite -1}
		weight_11_V {Type I LastRead 7 FirstWrite -1}
		weight_12_V {Type I LastRead 7 FirstWrite -1}
		weight_13_V {Type I LastRead 7 FirstWrite -1}
		weight_14_V {Type I LastRead 7 FirstWrite -1}
		weight_15_V {Type I LastRead 7 FirstWrite -1}
		weight_16_V {Type I LastRead 7 FirstWrite -1}
		weight_17_V {Type I LastRead 7 FirstWrite -1}
		weight_18_V {Type I LastRead 7 FirstWrite -1}
		weight_19_V {Type I LastRead 7 FirstWrite -1}
		weight_20_V {Type I LastRead 7 FirstWrite -1}
		weight_21_V {Type I LastRead 7 FirstWrite -1}
		weight_22_V {Type I LastRead 7 FirstWrite -1}
		weight_23_V {Type I LastRead 7 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		conv1_output_p_V_0 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_1 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_2 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_3 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_4 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_5 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_6 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_7 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_8 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_9 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_10 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_11 {Type I LastRead 6 FirstWrite -1}
		ShuffleConvs_0_Downs_23 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_19 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_22 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_18 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_11 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_17 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_6 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_16 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_5 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_15 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_4 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_14 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_3 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_13 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_2 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_12 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_1 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_10 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_9 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_21 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_8 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_20 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_0_Downs_7 {Type IO LastRead 10 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	subconv_1x1_16_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 6 FirstWrite -1}
		weight_1_V {Type I LastRead 6 FirstWrite -1}
		weight_2_V {Type I LastRead 6 FirstWrite -1}
		weight_3_V {Type I LastRead 6 FirstWrite -1}
		weight_4_V {Type I LastRead 6 FirstWrite -1}
		weight_5_V {Type I LastRead 6 FirstWrite -1}
		weight_6_V {Type I LastRead 6 FirstWrite -1}
		weight_7_V {Type I LastRead 6 FirstWrite -1}
		weight_8_V {Type I LastRead 6 FirstWrite -1}
		weight_9_V {Type I LastRead 6 FirstWrite -1}
		weight_10_V {Type I LastRead 6 FirstWrite -1}
		weight_11_V {Type I LastRead 6 FirstWrite -1}
		weight_12_V {Type I LastRead 6 FirstWrite -1}
		weight_13_V {Type I LastRead 6 FirstWrite -1}
		weight_14_V {Type I LastRead 6 FirstWrite -1}
		weight_15_V {Type I LastRead 6 FirstWrite -1}
		weight_16_V {Type I LastRead 6 FirstWrite -1}
		weight_17_V {Type I LastRead 6 FirstWrite -1}
		weight_18_V {Type I LastRead 6 FirstWrite -1}
		weight_19_V {Type I LastRead 6 FirstWrite -1}
		weight_20_V {Type I LastRead 6 FirstWrite -1}
		weight_21_V {Type I LastRead 6 FirstWrite -1}
		weight_22_V {Type I LastRead 6 FirstWrite -1}
		weight_23_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_24_16x16_p_23 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_19 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_22 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_18 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_11 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_17 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_6 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_16 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_5 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_15 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_4 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_14 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_3 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_13 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_2 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_12 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_1 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_10 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_9 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_21 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_8 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_20 {Type IO LastRead 9 FirstWrite 3}
		buffer1_1_24_16x16_p_7 {Type IO LastRead 9 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	conv_last {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 29 FirstWrite -1}
		conv_last_weight_0_V9 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_1_V11 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_2_V13 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_3_V15 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_4_V17 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_5_V19 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_6_V21 {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_7_V23 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		conv_last_output_V_0 {Type IO LastRead 23 FirstWrite 3}
		conv_last_output_V_1 {Type IO LastRead 25 FirstWrite 3}
		conv_last_output_V_2 {Type IO LastRead 27 FirstWrite 3}
		conv_last_output_V_3 {Type IO LastRead 29 FirstWrite 3}
		conv_last_output_V_4 {Type IO LastRead 31 FirstWrite 3}
		conv_last_output_V_5 {Type IO LastRead 33 FirstWrite 3}
		conv_last_output_V_6 {Type IO LastRead 35 FirstWrite 3}
		conv_last_output_V_7 {Type IO LastRead 37 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
		w_V {Type I LastRead 0 FirstWrite -1}}
	subconv_3x3_16_strid_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		ShuffleConvs_1_Downs_23 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_22 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_11 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_21 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_20 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_19 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_18 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_17 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_16 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_15 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_14 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_13 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_12 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_10 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_9 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_8 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_8_no_rel {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 7 FirstWrite -1}}
	subconv_3x3_4_no_rel {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 7 FirstWrite -1}}
	subconv_3x3_8_stride_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		ShuffleConvs_2_Downs_11 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_32_strid {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		conv1_output_p_V_0 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_1 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_2 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_3 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_4 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_5 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_6 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_7 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_8 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_9 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_10 {Type I LastRead 5 FirstWrite -1}
		conv1_output_p_V_11 {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_32_strid_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		ShuffleConvs_0_Downs_23 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_22 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_11 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_21 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_20 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_19 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_18 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_17 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_16 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_15 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_14 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_13 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_12 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_10 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_9 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_8 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs_7 {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_16_no_re {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_24_16x16_p_23 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_22 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_11 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_21 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_20 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_19 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_18 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_17 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_16 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_15 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_14 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_13 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_12 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_10 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_9 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_8 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type I LastRead 6 FirstWrite -1}}
	shuffle_48_p {
		left_V {Type I LastRead 12 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 14}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 12 FirstWrite -1}}
	shuffle_96_p {
		left_V {Type I LastRead 13 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 15}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 13 FirstWrite -1}}
	subconv_3x3_8_stride {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	subconv_3x3_16_strid {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	shuffle_24_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_l_p {
		output_V {Type O LastRead -1 FirstWrite 14}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 12 FirstWrite -1}}
	shuffle_48_r_p {
		output_V {Type O LastRead -1 FirstWrite 14}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 12 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 12 FirstWrite -1}}
	shuffle_96_l_p {
		output_V {Type O LastRead -1 FirstWrite 15}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 13 FirstWrite -1}}
	shuffle_96_r_p {
		output_V {Type O LastRead -1 FirstWrite 15}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 13 FirstWrite -1}}
	shuffle_24_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_r_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}}
	avgpool {
		output_V {Type O LastRead -1 FirstWrite 3}
		conv_last_output_V_0 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_1 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_2 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_3 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_4 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_5 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_6 {Type I LastRead 3 FirstWrite -1}
		conv_last_output_V_7 {Type I LastRead 3 FirstWrite -1}}
	fc {
		weight_V {Type I LastRead 10 FirstWrite -1}
		fc_weight_V25 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 9 FirstWrite -1}
		output_V {Type O LastRead 1 FirstWrite 12}
		fc_output_V29 {Type I LastRead 0 FirstWrite -1}
		avgpool_output_V {Type I LastRead 9 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "14920202", "Max" : "14984330"}
	, {"Name" : "Interval", "Min" : "14920203", "Max" : "14984331"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	DATA_INPUT_OUTPUT { m_axi {  { m_axi_DATA_INPUT_OUTPUT_AWVALID VALID 1 1 }  { m_axi_DATA_INPUT_OUTPUT_AWREADY READY 0 1 }  { m_axi_DATA_INPUT_OUTPUT_AWADDR ADDR 1 32 }  { m_axi_DATA_INPUT_OUTPUT_AWID ID 1 1 }  { m_axi_DATA_INPUT_OUTPUT_AWLEN LEN 1 8 }  { m_axi_DATA_INPUT_OUTPUT_AWSIZE SIZE 1 3 }  { m_axi_DATA_INPUT_OUTPUT_AWBURST BURST 1 2 }  { m_axi_DATA_INPUT_OUTPUT_AWLOCK LOCK 1 2 }  { m_axi_DATA_INPUT_OUTPUT_AWCACHE CACHE 1 4 }  { m_axi_DATA_INPUT_OUTPUT_AWPROT PROT 1 3 }  { m_axi_DATA_INPUT_OUTPUT_AWQOS QOS 1 4 }  { m_axi_DATA_INPUT_OUTPUT_AWREGION REGION 1 4 }  { m_axi_DATA_INPUT_OUTPUT_AWUSER USER 1 1 }  { m_axi_DATA_INPUT_OUTPUT_WVALID VALID 1 1 }  { m_axi_DATA_INPUT_OUTPUT_WREADY READY 0 1 }  { m_axi_DATA_INPUT_OUTPUT_WDATA DATA 1 32 }  { m_axi_DATA_INPUT_OUTPUT_WSTRB STRB 1 4 }  { m_axi_DATA_INPUT_OUTPUT_WLAST LAST 1 1 }  { m_axi_DATA_INPUT_OUTPUT_WID ID 1 1 }  { m_axi_DATA_INPUT_OUTPUT_WUSER USER 1 1 }  { m_axi_DATA_INPUT_OUTPUT_ARVALID VALID 1 1 }  { m_axi_DATA_INPUT_OUTPUT_ARREADY READY 0 1 }  { m_axi_DATA_INPUT_OUTPUT_ARADDR ADDR 1 32 }  { m_axi_DATA_INPUT_OUTPUT_ARID ID 1 1 }  { m_axi_DATA_INPUT_OUTPUT_ARLEN LEN 1 8 }  { m_axi_DATA_INPUT_OUTPUT_ARSIZE SIZE 1 3 }  { m_axi_DATA_INPUT_OUTPUT_ARBURST BURST 1 2 }  { m_axi_DATA_INPUT_OUTPUT_ARLOCK LOCK 1 2 }  { m_axi_DATA_INPUT_OUTPUT_ARCACHE CACHE 1 4 }  { m_axi_DATA_INPUT_OUTPUT_ARPROT PROT 1 3 }  { m_axi_DATA_INPUT_OUTPUT_ARQOS QOS 1 4 }  { m_axi_DATA_INPUT_OUTPUT_ARREGION REGION 1 4 }  { m_axi_DATA_INPUT_OUTPUT_ARUSER USER 1 1 }  { m_axi_DATA_INPUT_OUTPUT_RVALID VALID 0 1 }  { m_axi_DATA_INPUT_OUTPUT_RREADY READY 1 1 }  { m_axi_DATA_INPUT_OUTPUT_RDATA DATA 0 32 }  { m_axi_DATA_INPUT_OUTPUT_RLAST LAST 0 1 }  { m_axi_DATA_INPUT_OUTPUT_RID ID 0 1 }  { m_axi_DATA_INPUT_OUTPUT_RUSER USER 0 1 }  { m_axi_DATA_INPUT_OUTPUT_RRESP RESP 0 2 }  { m_axi_DATA_INPUT_OUTPUT_BVALID VALID 0 1 }  { m_axi_DATA_INPUT_OUTPUT_BREADY READY 1 1 }  { m_axi_DATA_INPUT_OUTPUT_BRESP RESP 0 2 }  { m_axi_DATA_INPUT_OUTPUT_BID ID 0 1 }  { m_axi_DATA_INPUT_OUTPUT_BUSER USER 0 1 } } }
	DATA_OTHER_WEIGHTS { m_axi {  { m_axi_DATA_OTHER_WEIGHTS_AWVALID VALID 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_AWREADY READY 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_AWADDR ADDR 1 32 }  { m_axi_DATA_OTHER_WEIGHTS_AWID ID 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_AWLEN LEN 1 8 }  { m_axi_DATA_OTHER_WEIGHTS_AWSIZE SIZE 1 3 }  { m_axi_DATA_OTHER_WEIGHTS_AWBURST BURST 1 2 }  { m_axi_DATA_OTHER_WEIGHTS_AWLOCK LOCK 1 2 }  { m_axi_DATA_OTHER_WEIGHTS_AWCACHE CACHE 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_AWPROT PROT 1 3 }  { m_axi_DATA_OTHER_WEIGHTS_AWQOS QOS 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_AWREGION REGION 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_AWUSER USER 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_WVALID VALID 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_WREADY READY 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_WDATA DATA 1 32 }  { m_axi_DATA_OTHER_WEIGHTS_WSTRB STRB 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_WLAST LAST 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_WID ID 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_WUSER USER 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_ARVALID VALID 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_ARREADY READY 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_ARADDR ADDR 1 32 }  { m_axi_DATA_OTHER_WEIGHTS_ARID ID 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_ARLEN LEN 1 8 }  { m_axi_DATA_OTHER_WEIGHTS_ARSIZE SIZE 1 3 }  { m_axi_DATA_OTHER_WEIGHTS_ARBURST BURST 1 2 }  { m_axi_DATA_OTHER_WEIGHTS_ARLOCK LOCK 1 2 }  { m_axi_DATA_OTHER_WEIGHTS_ARCACHE CACHE 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_ARPROT PROT 1 3 }  { m_axi_DATA_OTHER_WEIGHTS_ARQOS QOS 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_ARREGION REGION 1 4 }  { m_axi_DATA_OTHER_WEIGHTS_ARUSER USER 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_RVALID VALID 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_RREADY READY 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_RDATA DATA 0 32 }  { m_axi_DATA_OTHER_WEIGHTS_RLAST LAST 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_RID ID 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_RUSER USER 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_RRESP RESP 0 2 }  { m_axi_DATA_OTHER_WEIGHTS_BVALID VALID 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_BREADY READY 1 1 }  { m_axi_DATA_OTHER_WEIGHTS_BRESP RESP 0 2 }  { m_axi_DATA_OTHER_WEIGHTS_BID ID 0 1 }  { m_axi_DATA_OTHER_WEIGHTS_BUSER USER 0 1 } } }
	p3X3_1X1_WEIGHTS { m_axi {  { m_axi_p3X3_1X1_WEIGHTS_AWVALID VALID 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_AWREADY READY 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_AWADDR ADDR 1 32 }  { m_axi_p3X3_1X1_WEIGHTS_AWID ID 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_AWLEN LEN 1 8 }  { m_axi_p3X3_1X1_WEIGHTS_AWSIZE SIZE 1 3 }  { m_axi_p3X3_1X1_WEIGHTS_AWBURST BURST 1 2 }  { m_axi_p3X3_1X1_WEIGHTS_AWLOCK LOCK 1 2 }  { m_axi_p3X3_1X1_WEIGHTS_AWCACHE CACHE 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_AWPROT PROT 1 3 }  { m_axi_p3X3_1X1_WEIGHTS_AWQOS QOS 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_AWREGION REGION 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_AWUSER USER 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_WVALID VALID 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_WREADY READY 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_WDATA DATA 1 32 }  { m_axi_p3X3_1X1_WEIGHTS_WSTRB STRB 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_WLAST LAST 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_WID ID 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_WUSER USER 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_ARVALID VALID 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_ARREADY READY 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_ARADDR ADDR 1 32 }  { m_axi_p3X3_1X1_WEIGHTS_ARID ID 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_ARLEN LEN 1 8 }  { m_axi_p3X3_1X1_WEIGHTS_ARSIZE SIZE 1 3 }  { m_axi_p3X3_1X1_WEIGHTS_ARBURST BURST 1 2 }  { m_axi_p3X3_1X1_WEIGHTS_ARLOCK LOCK 1 2 }  { m_axi_p3X3_1X1_WEIGHTS_ARCACHE CACHE 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_ARPROT PROT 1 3 }  { m_axi_p3X3_1X1_WEIGHTS_ARQOS QOS 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_ARREGION REGION 1 4 }  { m_axi_p3X3_1X1_WEIGHTS_ARUSER USER 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_RVALID VALID 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_RREADY READY 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_RDATA DATA 0 32 }  { m_axi_p3X3_1X1_WEIGHTS_RLAST LAST 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_RID ID 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_RUSER USER 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_RRESP RESP 0 2 }  { m_axi_p3X3_1X1_WEIGHTS_BVALID VALID 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_BREADY READY 1 1 }  { m_axi_p3X3_1X1_WEIGHTS_BRESP RESP 0 2 }  { m_axi_p3X3_1X1_WEIGHTS_BID ID 0 1 }  { m_axi_p3X3_1X1_WEIGHTS_BUSER USER 0 1 } } }
	DATA_BIAS { m_axi {  { m_axi_DATA_BIAS_AWVALID VALID 1 1 }  { m_axi_DATA_BIAS_AWREADY READY 0 1 }  { m_axi_DATA_BIAS_AWADDR ADDR 1 32 }  { m_axi_DATA_BIAS_AWID ID 1 1 }  { m_axi_DATA_BIAS_AWLEN LEN 1 8 }  { m_axi_DATA_BIAS_AWSIZE SIZE 1 3 }  { m_axi_DATA_BIAS_AWBURST BURST 1 2 }  { m_axi_DATA_BIAS_AWLOCK LOCK 1 2 }  { m_axi_DATA_BIAS_AWCACHE CACHE 1 4 }  { m_axi_DATA_BIAS_AWPROT PROT 1 3 }  { m_axi_DATA_BIAS_AWQOS QOS 1 4 }  { m_axi_DATA_BIAS_AWREGION REGION 1 4 }  { m_axi_DATA_BIAS_AWUSER USER 1 1 }  { m_axi_DATA_BIAS_WVALID VALID 1 1 }  { m_axi_DATA_BIAS_WREADY READY 0 1 }  { m_axi_DATA_BIAS_WDATA DATA 1 32 }  { m_axi_DATA_BIAS_WSTRB STRB 1 4 }  { m_axi_DATA_BIAS_WLAST LAST 1 1 }  { m_axi_DATA_BIAS_WID ID 1 1 }  { m_axi_DATA_BIAS_WUSER USER 1 1 }  { m_axi_DATA_BIAS_ARVALID VALID 1 1 }  { m_axi_DATA_BIAS_ARREADY READY 0 1 }  { m_axi_DATA_BIAS_ARADDR ADDR 1 32 }  { m_axi_DATA_BIAS_ARID ID 1 1 }  { m_axi_DATA_BIAS_ARLEN LEN 1 8 }  { m_axi_DATA_BIAS_ARSIZE SIZE 1 3 }  { m_axi_DATA_BIAS_ARBURST BURST 1 2 }  { m_axi_DATA_BIAS_ARLOCK LOCK 1 2 }  { m_axi_DATA_BIAS_ARCACHE CACHE 1 4 }  { m_axi_DATA_BIAS_ARPROT PROT 1 3 }  { m_axi_DATA_BIAS_ARQOS QOS 1 4 }  { m_axi_DATA_BIAS_ARREGION REGION 1 4 }  { m_axi_DATA_BIAS_ARUSER USER 1 1 }  { m_axi_DATA_BIAS_RVALID VALID 0 1 }  { m_axi_DATA_BIAS_RREADY READY 1 1 }  { m_axi_DATA_BIAS_RDATA DATA 0 32 }  { m_axi_DATA_BIAS_RLAST LAST 0 1 }  { m_axi_DATA_BIAS_RID ID 0 1 }  { m_axi_DATA_BIAS_RUSER USER 0 1 }  { m_axi_DATA_BIAS_RRESP RESP 0 2 }  { m_axi_DATA_BIAS_BVALID VALID 0 1 }  { m_axi_DATA_BIAS_BREADY READY 1 1 }  { m_axi_DATA_BIAS_BRESP RESP 0 2 }  { m_axi_DATA_BIAS_BID ID 0 1 }  { m_axi_DATA_BIAS_BUSER USER 0 1 } } }
}

set busDeadlockParameterList { 
	{ DATA_INPUT_OUTPUT { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ DATA_OTHER_WEIGHTS { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ p3X3_1X1_WEIGHTS { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
	{ DATA_BIAS { NUM_READ_OUTSTANDING 16 NUM_WRITE_OUTSTANDING 16 MAX_READ_BURST_LENGTH 16 MAX_WRITE_BURST_LENGTH 16 } } \
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
	{ DATA_INPUT_OUTPUT 1 }
	{ DATA_OTHER_WEIGHTS 1 }
	{ p3X3_1X1_WEIGHTS 1 }
	{ DATA_BIAS 1 }
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
	{ DATA_INPUT_OUTPUT 1 }
	{ DATA_OTHER_WEIGHTS 1 }
	{ p3X3_1X1_WEIGHTS 1 }
	{ DATA_BIAS 1 }
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
