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
	{ conv_last_weight_V int 32 regular {axi_slave 0}  }
	{ fc_weight_V int 32 regular {axi_slave 0}  }
	{ bias_V int 32 regular {axi_slave 0}  }
	{ fc_output_V int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "DATA_INPUT_OUTPUT", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "image.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "image_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 31,"step" : 1},{"low" : 0,"up" : 31,"step" : 1}]},{"cName": "fc_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "fc_output_V","bundle": "AXILiteS"},"direction": "WRITEONLY","cArray": [{"low" : 0,"up" : 999,"step" : 1}]}]}]} , 
 	{ "Name" : "DATA_OTHER_WEIGHTS", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv1_weight_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 23,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]},{"cName": "conv_last_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "conv_last_weight_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 511,"step" : 1},{"low" : 0,"up" : 191,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]},{"cName": "fc_weight.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "fc_weight_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 511,"step" : 1}]}]}]} , 
 	{ "Name" : "p3X3_1X1_WEIGHTS", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "shuffle_conv_3x3.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "shuffle_conv_3x3_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 1079,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 2,"step" : 1},{"low" : 0,"up" : 2,"step" : 1}]},{"cName": "shuffle_conv_1x1.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "shuffle_conv_1x1_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 5495,"step" : 1},{"low" : 0,"up" : 23,"step" : 1},{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "DATA_BIAS", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "bias.V","cData": "int8","bit_use": { "low": 0,"up": 7},"offset": { "type": "dynamic","port_name": "bias_V","bundle": "AXILiteS"},"direction": "READONLY","cArray": [{"low" : 0,"up" : 3617,"step" : 1}]}]}]} , 
 	{ "Name" : "image_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "conv1_weight_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "shuffle_conv_3x3_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "shuffle_conv_1x1_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "conv_last_weight_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "fc_weight_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "bias_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":72}, "offset_end" : {"in":79}} , 
 	{ "Name" : "fc_output_V", "interface" : "axi_slave", "bundle":"CTL","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "offset" : {"in":80}, "offset_end" : {"in":87}} , 
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
	{ s_axi_CTL_AWADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_CTL_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CTL_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CTL_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CTL_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CTL_ARADDR sc_in sc_lv 7 signal -1 } 
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
	{ "name": "s_axi_CTL_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "CTL", "role": "AWADDR" },"address":[{"name":"ShuffleNetV2","role":"start","value":"0","valid_bit":"0"},{"name":"ShuffleNetV2","role":"continue","value":"0","valid_bit":"4"},{"name":"ShuffleNetV2","role":"auto_start","value":"0","valid_bit":"7"},{"name":"image_V","role":"data","value":"24"},{"name":"conv1_weight_V","role":"data","value":"32"},{"name":"shuffle_conv_3x3_V","role":"data","value":"40"},{"name":"shuffle_conv_1x1_V","role":"data","value":"48"},{"name":"conv_last_weight_V","role":"data","value":"56"},{"name":"fc_weight_V","role":"data","value":"64"},{"name":"bias_V","role":"data","value":"72"},{"name":"fc_output_V","role":"data","value":"80"}] },
	{ "name": "s_axi_CTL_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "AWVALID" } },
	{ "name": "s_axi_CTL_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "AWREADY" } },
	{ "name": "s_axi_CTL_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "WVALID" } },
	{ "name": "s_axi_CTL_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CTL", "role": "WREADY" } },
	{ "name": "s_axi_CTL_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CTL", "role": "WDATA" } },
	{ "name": "s_axi_CTL_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CTL", "role": "WSTRB" } },
	{ "name": "s_axi_CTL_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "CTL", "role": "ARADDR" },"address":[{"name":"ShuffleNetV2","role":"start","value":"0","valid_bit":"0"},{"name":"ShuffleNetV2","role":"done","value":"0","valid_bit":"1"},{"name":"ShuffleNetV2","role":"idle","value":"0","valid_bit":"2"},{"name":"ShuffleNetV2","role":"ready","value":"0","valid_bit":"3"},{"name":"ShuffleNetV2","role":"auto_start","value":"0","valid_bit":"7"},{"name":"return","role":"data","value":"16"}] },
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "301", "329", "381", "397", "423", "449", "459", "461", "463", "465", "467", "469", "471", "473", "476", "479", "480", "481", "482", "485", "488", "490", "493", "496", "498", "500", "502", "503", "504", "505", "506", "507", "508", "509", "510", "511", "512", "513", "514", "515", "516", "517", "518", "519", "520", "521", "522", "523", "524", "525", "526", "527", "528", "529", "530", "531", "532", "533", "534", "535", "536", "537", "538", "539", "540", "541", "542", "543", "544", "545", "546", "547", "548", "549", "550", "551", "552", "553", "554", "555", "556", "557", "558"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state1363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1423", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1459", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1517", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1556", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1614", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1653", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1710", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650"},
			{"State" : "ap_ST_fsm_state1305", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754"},
			{"State" : "ap_ST_fsm_state454", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state513", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state548", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state605", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state643", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state700", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state738", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state795", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state833", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state890", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state928", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state985", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state1023", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state1080", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state1118", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state1175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state1213", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state1270", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858"},
			{"State" : "ap_ST_fsm_state397", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state148", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state248", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170"},
			{"State" : "ap_ST_fsm_state1720", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_14274"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_14301"},
			{"State" : "ap_ST_fsm_state1487", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314"},
			{"State" : "ap_ST_fsm_state1584", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314"},
			{"State" : "ap_ST_fsm_state1681", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314"},
			{"State" : "ap_ST_fsm_state1333", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372"},
			{"State" : "ap_ST_fsm_state425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430"},
			{"State" : "ap_ST_fsm_state576", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state671", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state766", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state861", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state956", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state1051", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state1146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state1241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604"},
			{"State" : "ap_ST_fsm_state269", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604"},
			{"State" : "ap_ST_fsm_state342", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604"},
			{"State" : "ap_ST_fsm_state1522", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_14662"},
			{"State" : "ap_ST_fsm_state1619", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_14662"},
			{"State" : "ap_ST_fsm_state1715", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_14662"},
			{"State" : "ap_ST_fsm_state610", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state705", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state800", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state895", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state990", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state1085", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state1180", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state1275", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14718"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_14774"},
			{"State" : "ap_ST_fsm_state1393", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14786"},
			{"State" : "ap_ST_fsm_state484", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14798"},
			{"State" : "ap_ST_fsm_state1365", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_14810"},
			{"State" : "ap_ST_fsm_state1425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_14864"},
			{"State" : "ap_ST_fsm_state223", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_14918"},
			{"State" : "ap_ST_fsm_state295", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_14918"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_14918"},
			{"State" : "ap_ST_fsm_state456", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_14974"},
			{"State" : "ap_ST_fsm_state515", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_15028"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_15082"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_15136"},
			{"State" : "ap_ST_fsm_state1722", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_15190"},
			{"State" : "ap_ST_fsm_state1724", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc_fu_15212"}],
		"Port" : [
			{"Name" : "DATA_INPUT_OUTPUT", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "502", "SubInstance" : "grp_fc_fu_15212", "Port" : "output_V"}]},
			{"Name" : "DATA_OTHER_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "459", "SubInstance" : "grp_conv1_p_fu_14301", "Port" : "weight_V"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "weight_V"},
					{"ID" : "502", "SubInstance" : "grp_fc_fu_15212", "Port" : "weight_V"}]},
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
			{"Name" : "conv_last_weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "fc_weight_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "fc_output_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "conv1_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "459", "SubInstance" : "grp_conv1_p_fu_14301", "Port" : "bias_V"}]},
			{"Name" : "conv_last_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "bias_V"}]},
			{"Name" : "fc_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "502", "SubInstance" : "grp_fc_fu_15212", "Port" : "bias_V"}]},
			{"Name" : "image_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "459", "SubInstance" : "grp_conv1_p_fu_14301", "Port" : "input_V"}]},
			{"Name" : "conv1_output_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "459", "SubInstance" : "grp_conv1_p_fu_14301", "Port" : "output_V"},
					{"ID" : "479", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_14774", "Port" : "conv1_output_p_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "input_V"}]},
			{"Name" : "bias_24_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "bias_V"},
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "bias_V"},
					{"ID" : "479", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_14774", "Port" : "bias_V"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "bias_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_0_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_23"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_23"}]},
			{"Name" : "ShuffleConvs_0_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_19"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_19"}]},
			{"Name" : "ShuffleConvs_0_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_22"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_22"}]},
			{"Name" : "ShuffleConvs_0_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_18"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_18"}]},
			{"Name" : "ShuffleConvs_0_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_11"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_11"}]},
			{"Name" : "ShuffleConvs_0_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_17"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_17"}]},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_6"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_6"}]},
			{"Name" : "ShuffleConvs_0_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_16"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_16"}]},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_5"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_5"}]},
			{"Name" : "ShuffleConvs_0_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_15"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_15"}]},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_4"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_4"}]},
			{"Name" : "ShuffleConvs_0_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_14"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_14"}]},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_3"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_3"}]},
			{"Name" : "ShuffleConvs_0_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_13"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_13"}]},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_2"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_2"}]},
			{"Name" : "ShuffleConvs_0_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_12"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_12"}]},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_1"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_1"}]},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_10"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_10"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs"}]},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_9"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_9"}]},
			{"Name" : "ShuffleConvs_0_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_21"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_21"}]},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_8"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_8"}]},
			{"Name" : "ShuffleConvs_0_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_20"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_20"}]},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "ShuffleConvs_0_Downs_7"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "ShuffleConvs_0_Downs_7"}]},
			{"Name" : "weights_24_24_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_0_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_0_V"}]},
			{"Name" : "weights_24_24_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_1_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_1_V"}]},
			{"Name" : "weights_24_24_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_2_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_2_V"}]},
			{"Name" : "weights_24_24_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_3_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_3_V"}]},
			{"Name" : "weights_24_24_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_4_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_4_V"}]},
			{"Name" : "weights_24_24_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_5_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_5_V"}]},
			{"Name" : "weights_24_24_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_6_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_6_V"}]},
			{"Name" : "weights_24_24_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_7_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_7_V"}]},
			{"Name" : "weights_24_24_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_8_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_8_V"}]},
			{"Name" : "weights_24_24_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_9_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_9_V"}]},
			{"Name" : "weights_24_24_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_10_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_10_V"}]},
			{"Name" : "weights_24_24_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_11_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_11_V"}]},
			{"Name" : "weights_24_24_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_12_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_12_V"}]},
			{"Name" : "weights_24_24_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_13_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_13_V"}]},
			{"Name" : "weights_24_24_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_14_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_14_V"}]},
			{"Name" : "weights_24_24_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_15_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_15_V"}]},
			{"Name" : "weights_24_24_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_16_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_16_V"}]},
			{"Name" : "weights_24_24_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_17_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_17_V"}]},
			{"Name" : "weights_24_24_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_18_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_18_V"}]},
			{"Name" : "weights_24_24_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_19_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_19_V"}]},
			{"Name" : "weights_24_24_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_20_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_20_V"}]},
			{"Name" : "weights_24_24_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_21_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_21_V"}]},
			{"Name" : "weights_24_24_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_22_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_22_V"}]},
			{"Name" : "weights_24_24_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "weight_23_V"},
					{"ID" : "397", "SubInstance" : "grp_subconv_1x1_32_p_fu_14066", "Port" : "weight_23_V"}]},
			{"Name" : "weights_24_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "weight_V"},
					{"ID" : "479", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_14774", "Port" : "weight_V"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "input_V"},
					{"ID" : "469", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14546", "Port" : "output_V"},
					{"ID" : "479", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_14774", "Port" : "output_V"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "output_V"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "left_V"}]},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_23"}]},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_19"}]},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_22"}]},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_18"}]},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_11"}]},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_17"}]},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_6"}]},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_16"}]},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_5"}]},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_15"}]},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_4"}]},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_14"}]},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_3"}]},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_13"}]},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_2"}]},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_12"}]},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_1"}]},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_10"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p"}]},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_9"}]},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_21"}]},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_8"}]},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_20"}]},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "423", "SubInstance" : "grp_subconv_1x1_16_p_fu_14170", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "471", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14604", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "buffer1_1_24_16x16_p_7"}]},
			{"Name" : "feature_buffer_48x18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "481", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14798", "Port" : "input_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "input_V"},
					{"ID" : "496", "SubInstance" : "grp_shuffle_24_l_p_fu_15082", "Port" : "output_V"},
					{"ID" : "498", "SubInstance" : "grp_shuffle_24_r_p_fu_15136", "Port" : "output_V"},
					{"ID" : "488", "SubInstance" : "grp_shuffle_24_p_fu_14918", "Port" : "output_V"}]},
			{"Name" : "bias_48_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "bias_V"},
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "bias_V"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "bias_V"},
					{"ID" : "481", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14798", "Port" : "bias_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_23"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_23"}]},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_22"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_22"}]},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_11"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_11"}]},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_6"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_6"}]},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_5"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_5"}]},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_4"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_4"}]},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_3"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_3"}]},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_2"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_2"}]},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_1"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_1"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_21"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_21"}]},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_20"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_20"}]},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_19"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_19"}]},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_18"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_18"}]},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_17"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_17"}]},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_16"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_16"}]},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_15"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_15"}]},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_14"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_14"}]},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_13"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_13"}]},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_12"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_12"}]},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_10"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_10"}]},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_9"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_9"}]},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_8"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_8"}]},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "ShuffleConvs_1_Downs_7"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "ShuffleConvs_1_Downs_7"}]},
			{"Name" : "weights_48_48_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_0_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_0_V"}]},
			{"Name" : "weights_48_48_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_1_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_1_V"}]},
			{"Name" : "weights_48_48_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_2_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_2_V"}]},
			{"Name" : "weights_48_48_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_3_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_3_V"}]},
			{"Name" : "weights_48_48_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_4_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_4_V"}]},
			{"Name" : "weights_48_48_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_5_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_5_V"}]},
			{"Name" : "weights_48_48_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_6_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_6_V"}]},
			{"Name" : "weights_48_48_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_7_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_7_V"}]},
			{"Name" : "weights_48_48_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_8_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_8_V"}]},
			{"Name" : "weights_48_48_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_9_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_9_V"}]},
			{"Name" : "weights_48_48_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_10_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_10_V"}]},
			{"Name" : "weights_48_48_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_11_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_11_V"}]},
			{"Name" : "weights_48_48_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_12_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_12_V"}]},
			{"Name" : "weights_48_48_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_13_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_13_V"}]},
			{"Name" : "weights_48_48_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_14_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_14_V"}]},
			{"Name" : "weights_48_48_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_15_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_15_V"}]},
			{"Name" : "weights_48_48_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_16_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_16_V"}]},
			{"Name" : "weights_48_48_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_17_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_17_V"}]},
			{"Name" : "weights_48_48_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_18_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_18_V"}]},
			{"Name" : "weights_48_48_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_19_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_19_V"}]},
			{"Name" : "weights_48_48_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_20_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_20_V"}]},
			{"Name" : "weights_48_48_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_21_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_21_V"}]},
			{"Name" : "weights_48_48_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_22_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_22_V"}]},
			{"Name" : "weights_48_48_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "weight_23_V"},
					{"ID" : "381", "SubInstance" : "grp_subconv_1x1_16p_p_fu_13962", "Port" : "weight_23_V"}]},
			{"Name" : "weights_48_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "weight_V"},
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "weight_V"},
					{"ID" : "481", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14798", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "465", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14430", "Port" : "output_V"},
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "output_V"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "input_V"},
					{"ID" : "481", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14798", "Port" : "output_V"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "left_V"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_24"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_1"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_2"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_3"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_4"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_5"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_6"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_7"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_8"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_9"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_10"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_11"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_12"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_13"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_14"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_15"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_16"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_17"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_18"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_19"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_20"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_21"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_22"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "467", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14488", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "329", "SubInstance" : "grp_subconv_1x1_8_p_fu_13858", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "buffer1_1_48_8x8_p_V_23"}]},
			{"Name" : "feature_buffer_96x10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "input_V"},
					{"ID" : "480", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14786", "Port" : "input_V"},
					{"ID" : "476", "SubInstance" : "grp_shuffle_48_p_fu_14718", "Port" : "output_V"},
					{"ID" : "490", "SubInstance" : "grp_shuffle_48_l_p_fu_14974", "Port" : "output_V"},
					{"ID" : "493", "SubInstance" : "grp_shuffle_48_r_p_fu_15028", "Port" : "output_V"}]},
			{"Name" : "bias_96_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "bias_V"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "bias_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "bias_V"},
					{"ID" : "480", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14786", "Port" : "bias_V"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_23"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_23"}]},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_22"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_22"}]},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_11"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_11"}]},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_6"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_6"}]},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_5"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_5"}]},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_4"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_4"}]},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_3"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_3"}]},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_2"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_2"}]},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_1"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_1"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_21"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_21"}]},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_20"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_20"}]},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_19"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_19"}]},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_18"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_18"}]},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_17"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_17"}]},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_16"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_16"}]},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_15"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_15"}]},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_14"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_14"}]},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_13"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_13"}]},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_12"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_12"}]},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_10"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_10"}]},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_9"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_9"}]},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_8"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_8"}]},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "ShuffleConvs_2_Downs_7"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "ShuffleConvs_2_Downs_7"}]},
			{"Name" : "weights_96_96_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_0_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_0_V"}]},
			{"Name" : "weights_96_96_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_1_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_1_V"}]},
			{"Name" : "weights_96_96_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_2_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_2_V"}]},
			{"Name" : "weights_96_96_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_3_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_3_V"}]},
			{"Name" : "weights_96_96_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_4_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_4_V"}]},
			{"Name" : "weights_96_96_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_5_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_5_V"}]},
			{"Name" : "weights_96_96_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_6_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_6_V"}]},
			{"Name" : "weights_96_96_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_7_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_7_V"}]},
			{"Name" : "weights_96_96_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_8_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_8_V"}]},
			{"Name" : "weights_96_96_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_9_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_9_V"}]},
			{"Name" : "weights_96_96_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_10_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_10_V"}]},
			{"Name" : "weights_96_96_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_11_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_11_V"}]},
			{"Name" : "weights_96_96_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_12_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_12_V"}]},
			{"Name" : "weights_96_96_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_13_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_13_V"}]},
			{"Name" : "weights_96_96_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_14_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_14_V"}]},
			{"Name" : "weights_96_96_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_15_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_15_V"}]},
			{"Name" : "weights_96_96_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_16_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_16_V"}]},
			{"Name" : "weights_96_96_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_17_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_17_V"}]},
			{"Name" : "weights_96_96_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_18_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_18_V"}]},
			{"Name" : "weights_96_96_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_19_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_19_V"}]},
			{"Name" : "weights_96_96_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_20_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_20_V"}]},
			{"Name" : "weights_96_96_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_21_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_21_V"}]},
			{"Name" : "weights_96_96_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_22_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_22_V"}]},
			{"Name" : "weights_96_96_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "weight_23_V"},
					{"ID" : "301", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13754", "Port" : "weight_23_V"}]},
			{"Name" : "weights_96_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "weight_V"},
					{"ID" : "480", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14786", "Port" : "weight_V"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "input_V"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "output_V"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "left_V"},
					{"ID" : "480", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14786", "Port" : "output_V"},
					{"ID" : "463", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14372", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_24"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_1"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_2"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_3"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_4"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_5"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_6"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_7"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_8"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_9"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_10"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_11"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_12"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_13"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_14"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_15"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_16"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_17"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_18"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_19"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_20"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_21"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_22"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "249", "SubInstance" : "grp_subconv_1x1_4_p_fu_13650", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "461", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14314", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "buffer1_1_96_4x4_p_V_23"}]},
			{"Name" : "feature_buffer_192x6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "473", "SubInstance" : "grp_shuffle_96_p_fu_14662", "Port" : "output_V"},
					{"ID" : "485", "SubInstance" : "grp_shuffle_96_r_p_fu_14864", "Port" : "output_V"},
					{"ID" : "482", "SubInstance" : "grp_shuffle_96_l_p_fu_14810", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "input_V"}]},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_0"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_0"}]},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_1"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_1"}]},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_2"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_2"}]},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_3"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_3"}]},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_4"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_4"}]},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_5"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_5"}]},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_6"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_6"}]},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "conv_last_output_V_7"},
					{"ID" : "449", "SubInstance" : "grp_conv_last_fu_14274", "Port" : "conv_last_output_V_7"}]},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "500", "SubInstance" : "grp_avgpool_fu_15190", "Port" : "output_V"},
					{"ID" : "502", "SubInstance" : "grp_fc_fu_15212", "Port" : "avgpool_output_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_p_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_23_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_19_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_22_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_18_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_11_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_17_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_6_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_16_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_5_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_15_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_4_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_14_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_3_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_13_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_2_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_12_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_1_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_10_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_9_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_21_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_8_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_20_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_7_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_23_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_19_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_22_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_18_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_11_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_17_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_6_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_16_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_5_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_15_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_4_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_14_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_3_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_13_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_2_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_12_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_1_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_10_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_9_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_21_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_8_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_20_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_7_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_48x18_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_V_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_23_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_22_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_11_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_6_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_5_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_4_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_3_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_2_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_1_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_21_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_20_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_19_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_18_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_17_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_16_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_15_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_14_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_13_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_12_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_10_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_9_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_8_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_7_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_24_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_1_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_2_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_3_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_4_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_5_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_6_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_7_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_8_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_9_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_10_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_11_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_12_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_13_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_14_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_15_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_16_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_17_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_18_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_19_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_20_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_21_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_22_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_23_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_96x10_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_V_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_23_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_22_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_11_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_6_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_5_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_4_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_3_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_2_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_1_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_21_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_20_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_19_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_18_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_17_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_16_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_15_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_14_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_13_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_12_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_10_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_9_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_8_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_7_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_24_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_1_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_2_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_3_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_4_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_5_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_6_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_7_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_8_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_9_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_10_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_11_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_12_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_13_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_14_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_15_U", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_16_U", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_17_U", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_18_U", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_19_U", "Parent" : "0"},
	{"ID" : "229", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_20_U", "Parent" : "0"},
	{"ID" : "230", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_21_U", "Parent" : "0"},
	{"ID" : "231", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_22_U", "Parent" : "0"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_23_U", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_192x6_U", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_0_U", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_1_U", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_2_U", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_3_U", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_4_U", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_5_U", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_6_U", "Parent" : "0"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_7_U", "Parent" : "0"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_V_U", "Parent" : "0"},
	{"ID" : "244", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_CTL_s_axi_U", "Parent" : "0"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_INPUT_OUTPUT_m_axi_U", "Parent" : "0"},
	{"ID" : "246", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_OTHER_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "247", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_p3X3_1X1_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "248", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_BIAS_m_axi_U", "Parent" : "0"},
	{"ID" : "249", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650", "Parent" : "0", "Child" : ["250", "252", "254", "256", "258", "260", "262", "264", "266", "268", "270", "272", "274", "276", "278", "280", "282", "284", "286", "288", "290", "292", "294", "296", "298", "299", "300"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "IO"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "250", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2675", "Parent" : "249", "Child" : ["251"],
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
	{"ID" : "251", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2675.ShuffleNetV2_mul_cud_U6", "Parent" : "250"},
	{"ID" : "252", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2682", "Parent" : "249", "Child" : ["253"],
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
	{"ID" : "253", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2682.ShuffleNetV2_mul_cud_U6", "Parent" : "252"},
	{"ID" : "254", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2689", "Parent" : "249", "Child" : ["255"],
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
	{"ID" : "255", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2689.ShuffleNetV2_mul_cud_U6", "Parent" : "254"},
	{"ID" : "256", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2696", "Parent" : "249", "Child" : ["257"],
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
	{"ID" : "257", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2696.ShuffleNetV2_mul_cud_U6", "Parent" : "256"},
	{"ID" : "258", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2703", "Parent" : "249", "Child" : ["259"],
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
	{"ID" : "259", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2703.ShuffleNetV2_mul_cud_U6", "Parent" : "258"},
	{"ID" : "260", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2710", "Parent" : "249", "Child" : ["261"],
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
	{"ID" : "261", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2710.ShuffleNetV2_mul_cud_U6", "Parent" : "260"},
	{"ID" : "262", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2717", "Parent" : "249", "Child" : ["263"],
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
	{"ID" : "263", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2717.ShuffleNetV2_mul_cud_U6", "Parent" : "262"},
	{"ID" : "264", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2724", "Parent" : "249", "Child" : ["265"],
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
	{"ID" : "265", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2724.ShuffleNetV2_mul_cud_U6", "Parent" : "264"},
	{"ID" : "266", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2731", "Parent" : "249", "Child" : ["267"],
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
	{"ID" : "267", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2731.ShuffleNetV2_mul_cud_U6", "Parent" : "266"},
	{"ID" : "268", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2738", "Parent" : "249", "Child" : ["269"],
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
	{"ID" : "269", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2738.ShuffleNetV2_mul_cud_U6", "Parent" : "268"},
	{"ID" : "270", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2745", "Parent" : "249", "Child" : ["271"],
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
	{"ID" : "271", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2745.ShuffleNetV2_mul_cud_U6", "Parent" : "270"},
	{"ID" : "272", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2752", "Parent" : "249", "Child" : ["273"],
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
	{"ID" : "273", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2752.ShuffleNetV2_mul_cud_U6", "Parent" : "272"},
	{"ID" : "274", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2759", "Parent" : "249", "Child" : ["275"],
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
	{"ID" : "275", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2759.ShuffleNetV2_mul_cud_U6", "Parent" : "274"},
	{"ID" : "276", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2766", "Parent" : "249", "Child" : ["277"],
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
	{"ID" : "277", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2766.ShuffleNetV2_mul_cud_U6", "Parent" : "276"},
	{"ID" : "278", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2773", "Parent" : "249", "Child" : ["279"],
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
	{"ID" : "279", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2773.ShuffleNetV2_mul_cud_U6", "Parent" : "278"},
	{"ID" : "280", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2780", "Parent" : "249", "Child" : ["281"],
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
	{"ID" : "281", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2780.ShuffleNetV2_mul_cud_U6", "Parent" : "280"},
	{"ID" : "282", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2787", "Parent" : "249", "Child" : ["283"],
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
	{"ID" : "283", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2787.ShuffleNetV2_mul_cud_U6", "Parent" : "282"},
	{"ID" : "284", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2794", "Parent" : "249", "Child" : ["285"],
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
	{"ID" : "285", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2794.ShuffleNetV2_mul_cud_U6", "Parent" : "284"},
	{"ID" : "286", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2801", "Parent" : "249", "Child" : ["287"],
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
	{"ID" : "287", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2801.ShuffleNetV2_mul_cud_U6", "Parent" : "286"},
	{"ID" : "288", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2808", "Parent" : "249", "Child" : ["289"],
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
	{"ID" : "289", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2808.ShuffleNetV2_mul_cud_U6", "Parent" : "288"},
	{"ID" : "290", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2815", "Parent" : "249", "Child" : ["291"],
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
	{"ID" : "291", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2815.ShuffleNetV2_mul_cud_U6", "Parent" : "290"},
	{"ID" : "292", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2822", "Parent" : "249", "Child" : ["293"],
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
	{"ID" : "293", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2822.ShuffleNetV2_mul_cud_U6", "Parent" : "292"},
	{"ID" : "294", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2829", "Parent" : "249", "Child" : ["295"],
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
	{"ID" : "295", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2829.ShuffleNetV2_mul_cud_U6", "Parent" : "294"},
	{"ID" : "296", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2836", "Parent" : "249", "Child" : ["297"],
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
	{"ID" : "297", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.grp_MUL_DP_fu_2836.ShuffleNetV2_mul_cud_U6", "Parent" : "296"},
	{"ID" : "298", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.ShuffleNetV2_uremibs_x_U580", "Parent" : "249"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.ShuffleNetV2_uremjbC_x_U581", "Parent" : "249"},
	{"ID" : "300", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13650.ShuffleNetV2_mux_fYi_x_U582", "Parent" : "249"},
	{"ID" : "301", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754", "Parent" : "0", "Child" : ["302", "304", "306", "308", "310", "312", "314", "316", "318", "320", "322", "324", "326", "327", "328"],
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
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "302", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2756", "Parent" : "301", "Child" : ["303"],
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
	{"ID" : "303", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2756.ShuffleNetV2_mul_cud_U6", "Parent" : "302"},
	{"ID" : "304", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2763", "Parent" : "301", "Child" : ["305"],
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
	{"ID" : "305", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2763.ShuffleNetV2_mul_cud_U6", "Parent" : "304"},
	{"ID" : "306", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2770", "Parent" : "301", "Child" : ["307"],
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
	{"ID" : "307", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2770.ShuffleNetV2_mul_cud_U6", "Parent" : "306"},
	{"ID" : "308", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2777", "Parent" : "301", "Child" : ["309"],
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
	{"ID" : "309", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2777.ShuffleNetV2_mul_cud_U6", "Parent" : "308"},
	{"ID" : "310", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2784", "Parent" : "301", "Child" : ["311"],
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
	{"ID" : "311", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2784.ShuffleNetV2_mul_cud_U6", "Parent" : "310"},
	{"ID" : "312", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2791", "Parent" : "301", "Child" : ["313"],
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
	{"ID" : "313", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2791.ShuffleNetV2_mul_cud_U6", "Parent" : "312"},
	{"ID" : "314", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2798", "Parent" : "301", "Child" : ["315"],
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
	{"ID" : "315", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2798.ShuffleNetV2_mul_cud_U6", "Parent" : "314"},
	{"ID" : "316", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2805", "Parent" : "301", "Child" : ["317"],
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
	{"ID" : "317", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2805.ShuffleNetV2_mul_cud_U6", "Parent" : "316"},
	{"ID" : "318", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2812", "Parent" : "301", "Child" : ["319"],
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
	{"ID" : "319", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2812.ShuffleNetV2_mul_cud_U6", "Parent" : "318"},
	{"ID" : "320", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2819", "Parent" : "301", "Child" : ["321"],
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
	{"ID" : "321", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2819.ShuffleNetV2_mul_cud_U6", "Parent" : "320"},
	{"ID" : "322", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2826", "Parent" : "301", "Child" : ["323"],
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
	{"ID" : "323", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2826.ShuffleNetV2_mul_cud_U6", "Parent" : "322"},
	{"ID" : "324", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2833", "Parent" : "301", "Child" : ["325"],
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
	{"ID" : "325", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.grp_MUL_DP_fu_2833.ShuffleNetV2_mul_cud_U6", "Parent" : "324"},
	{"ID" : "326", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.ShuffleNetV2_uremibs_U499", "Parent" : "301"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.ShuffleNetV2_uremjbC_U500", "Parent" : "301"},
	{"ID" : "328", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13754.ShuffleNetV2_mux_fYi_x_U501", "Parent" : "301"},
	{"ID" : "329", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858", "Parent" : "0", "Child" : ["330", "332", "334", "336", "338", "340", "342", "344", "346", "348", "350", "352", "354", "356", "358", "360", "362", "364", "366", "368", "370", "372", "374", "376", "378", "379", "380"],
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
	{"ID" : "330", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1878", "Parent" : "329", "Child" : ["331"],
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
	{"ID" : "331", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1878.ShuffleNetV2_mul_cud_U6", "Parent" : "330"},
	{"ID" : "332", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1887", "Parent" : "329", "Child" : ["333"],
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
	{"ID" : "333", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1887.ShuffleNetV2_mul_cud_U6", "Parent" : "332"},
	{"ID" : "334", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1896", "Parent" : "329", "Child" : ["335"],
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
	{"ID" : "335", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1896.ShuffleNetV2_mul_cud_U6", "Parent" : "334"},
	{"ID" : "336", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1905", "Parent" : "329", "Child" : ["337"],
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
	{"ID" : "337", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1905.ShuffleNetV2_mul_cud_U6", "Parent" : "336"},
	{"ID" : "338", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1914", "Parent" : "329", "Child" : ["339"],
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
	{"ID" : "339", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1914.ShuffleNetV2_mul_cud_U6", "Parent" : "338"},
	{"ID" : "340", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1923", "Parent" : "329", "Child" : ["341"],
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
	{"ID" : "341", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1923.ShuffleNetV2_mul_cud_U6", "Parent" : "340"},
	{"ID" : "342", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1932", "Parent" : "329", "Child" : ["343"],
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
	{"ID" : "343", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1932.ShuffleNetV2_mul_cud_U6", "Parent" : "342"},
	{"ID" : "344", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1941", "Parent" : "329", "Child" : ["345"],
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
	{"ID" : "345", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1941.ShuffleNetV2_mul_cud_U6", "Parent" : "344"},
	{"ID" : "346", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1950", "Parent" : "329", "Child" : ["347"],
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
	{"ID" : "347", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1950.ShuffleNetV2_mul_cud_U6", "Parent" : "346"},
	{"ID" : "348", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1959", "Parent" : "329", "Child" : ["349"],
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
	{"ID" : "349", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1959.ShuffleNetV2_mul_cud_U6", "Parent" : "348"},
	{"ID" : "350", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1968", "Parent" : "329", "Child" : ["351"],
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
	{"ID" : "351", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1968.ShuffleNetV2_mul_cud_U6", "Parent" : "350"},
	{"ID" : "352", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1977", "Parent" : "329", "Child" : ["353"],
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
	{"ID" : "353", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1977.ShuffleNetV2_mul_cud_U6", "Parent" : "352"},
	{"ID" : "354", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1986", "Parent" : "329", "Child" : ["355"],
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
	{"ID" : "355", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1986.ShuffleNetV2_mul_cud_U6", "Parent" : "354"},
	{"ID" : "356", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1995", "Parent" : "329", "Child" : ["357"],
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
	{"ID" : "357", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_1995.ShuffleNetV2_mul_cud_U6", "Parent" : "356"},
	{"ID" : "358", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2004", "Parent" : "329", "Child" : ["359"],
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
	{"ID" : "359", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2004.ShuffleNetV2_mul_cud_U6", "Parent" : "358"},
	{"ID" : "360", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2013", "Parent" : "329", "Child" : ["361"],
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
	{"ID" : "361", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2013.ShuffleNetV2_mul_cud_U6", "Parent" : "360"},
	{"ID" : "362", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2022", "Parent" : "329", "Child" : ["363"],
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
	{"ID" : "363", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2022.ShuffleNetV2_mul_cud_U6", "Parent" : "362"},
	{"ID" : "364", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2031", "Parent" : "329", "Child" : ["365"],
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
	{"ID" : "365", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2031.ShuffleNetV2_mul_cud_U6", "Parent" : "364"},
	{"ID" : "366", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2040", "Parent" : "329", "Child" : ["367"],
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
	{"ID" : "367", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2040.ShuffleNetV2_mul_cud_U6", "Parent" : "366"},
	{"ID" : "368", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2049", "Parent" : "329", "Child" : ["369"],
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
	{"ID" : "369", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2049.ShuffleNetV2_mul_cud_U6", "Parent" : "368"},
	{"ID" : "370", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2058", "Parent" : "329", "Child" : ["371"],
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
	{"ID" : "371", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2058.ShuffleNetV2_mul_cud_U6", "Parent" : "370"},
	{"ID" : "372", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2067", "Parent" : "329", "Child" : ["373"],
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
	{"ID" : "373", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2067.ShuffleNetV2_mul_cud_U6", "Parent" : "372"},
	{"ID" : "374", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2076", "Parent" : "329", "Child" : ["375"],
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
	{"ID" : "375", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2076.ShuffleNetV2_mul_cud_U6", "Parent" : "374"},
	{"ID" : "376", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2085", "Parent" : "329", "Child" : ["377"],
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
	{"ID" : "377", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.grp_MUL_DP_fu_2085.ShuffleNetV2_mul_cud_U6", "Parent" : "376"},
	{"ID" : "378", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.ShuffleNetV2_uremeOg_x_U332", "Parent" : "329"},
	{"ID" : "379", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.ShuffleNetV2_uremeOg_x_U333", "Parent" : "329"},
	{"ID" : "380", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13858.ShuffleNetV2_mux_fYi_x_U334", "Parent" : "329"},
	{"ID" : "381", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962", "Parent" : "0", "Child" : ["382", "384", "386", "388", "390", "392", "394", "395", "396"],
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
	{"ID" : "382", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2011", "Parent" : "381", "Child" : ["383"],
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
	{"ID" : "383", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2011.ShuffleNetV2_mul_cud_U6", "Parent" : "382"},
	{"ID" : "384", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2020", "Parent" : "381", "Child" : ["385"],
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
	{"ID" : "385", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2020.ShuffleNetV2_mul_cud_U6", "Parent" : "384"},
	{"ID" : "386", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2029", "Parent" : "381", "Child" : ["387"],
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
	{"ID" : "387", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2029.ShuffleNetV2_mul_cud_U6", "Parent" : "386"},
	{"ID" : "388", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2038", "Parent" : "381", "Child" : ["389"],
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
	{"ID" : "389", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2038.ShuffleNetV2_mul_cud_U6", "Parent" : "388"},
	{"ID" : "390", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2047", "Parent" : "381", "Child" : ["391"],
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
	{"ID" : "391", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2047.ShuffleNetV2_mul_cud_U6", "Parent" : "390"},
	{"ID" : "392", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2056", "Parent" : "381", "Child" : ["393"],
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
	{"ID" : "393", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.grp_MUL_DP_fu_2056.ShuffleNetV2_mul_cud_U6", "Parent" : "392"},
	{"ID" : "394", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.ShuffleNetV2_uremeOg_U251", "Parent" : "381"},
	{"ID" : "395", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.ShuffleNetV2_uremeOg_U252", "Parent" : "381"},
	{"ID" : "396", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_13962.ShuffleNetV2_mux_fYi_U253", "Parent" : "381"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066", "Parent" : "0", "Child" : ["398", "400", "402", "404", "406", "408", "410", "412", "414", "416", "418", "420", "422"],
		"CDFG" : "subconv_1x1_32_p",
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
	{"ID" : "398", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1458", "Parent" : "397", "Child" : ["399"],
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
	{"ID" : "399", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1458.ShuffleNetV2_mul_cud_U6", "Parent" : "398"},
	{"ID" : "400", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1468", "Parent" : "397", "Child" : ["401"],
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
	{"ID" : "401", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1468.ShuffleNetV2_mul_cud_U6", "Parent" : "400"},
	{"ID" : "402", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1478", "Parent" : "397", "Child" : ["403"],
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
	{"ID" : "403", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1478.ShuffleNetV2_mul_cud_U6", "Parent" : "402"},
	{"ID" : "404", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1488", "Parent" : "397", "Child" : ["405"],
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
	{"ID" : "405", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1488.ShuffleNetV2_mul_cud_U6", "Parent" : "404"},
	{"ID" : "406", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1498", "Parent" : "397", "Child" : ["407"],
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
	{"ID" : "407", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1498.ShuffleNetV2_mul_cud_U6", "Parent" : "406"},
	{"ID" : "408", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1508", "Parent" : "397", "Child" : ["409"],
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
	{"ID" : "409", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1508.ShuffleNetV2_mul_cud_U6", "Parent" : "408"},
	{"ID" : "410", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1518", "Parent" : "397", "Child" : ["411"],
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
	{"ID" : "411", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1518.ShuffleNetV2_mul_cud_U6", "Parent" : "410"},
	{"ID" : "412", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1528", "Parent" : "397", "Child" : ["413"],
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
	{"ID" : "413", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1528.ShuffleNetV2_mul_cud_U6", "Parent" : "412"},
	{"ID" : "414", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1538", "Parent" : "397", "Child" : ["415"],
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
	{"ID" : "415", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1538.ShuffleNetV2_mul_cud_U6", "Parent" : "414"},
	{"ID" : "416", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1548", "Parent" : "397", "Child" : ["417"],
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
	{"ID" : "417", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1548.ShuffleNetV2_mul_cud_U6", "Parent" : "416"},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1558", "Parent" : "397", "Child" : ["419"],
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
	{"ID" : "419", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1558.ShuffleNetV2_mul_cud_U6", "Parent" : "418"},
	{"ID" : "420", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1568", "Parent" : "397", "Child" : ["421"],
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
	{"ID" : "421", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.grp_MUL_DP_fu_1568.ShuffleNetV2_mul_cud_U6", "Parent" : "420"},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14066.ShuffleNetV2_mux_dEe_U10", "Parent" : "397"},
	{"ID" : "423", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170", "Parent" : "0", "Child" : ["424", "426", "428", "430", "432", "434", "436", "438", "440", "442", "444", "446", "448"],
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
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1452", "Parent" : "423", "Child" : ["425"],
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
	{"ID" : "425", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1452.ShuffleNetV2_mul_cud_U6", "Parent" : "424"},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1462", "Parent" : "423", "Child" : ["427"],
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
	{"ID" : "427", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1462.ShuffleNetV2_mul_cud_U6", "Parent" : "426"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1472", "Parent" : "423", "Child" : ["429"],
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
	{"ID" : "429", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1472.ShuffleNetV2_mul_cud_U6", "Parent" : "428"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1482", "Parent" : "423", "Child" : ["431"],
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
	{"ID" : "431", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1482.ShuffleNetV2_mul_cud_U6", "Parent" : "430"},
	{"ID" : "432", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1492", "Parent" : "423", "Child" : ["433"],
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
	{"ID" : "433", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1492.ShuffleNetV2_mul_cud_U6", "Parent" : "432"},
	{"ID" : "434", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1502", "Parent" : "423", "Child" : ["435"],
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
	{"ID" : "435", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1502.ShuffleNetV2_mul_cud_U6", "Parent" : "434"},
	{"ID" : "436", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1512", "Parent" : "423", "Child" : ["437"],
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
	{"ID" : "437", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1512.ShuffleNetV2_mul_cud_U6", "Parent" : "436"},
	{"ID" : "438", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1522", "Parent" : "423", "Child" : ["439"],
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
	{"ID" : "439", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1522.ShuffleNetV2_mul_cud_U6", "Parent" : "438"},
	{"ID" : "440", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1532", "Parent" : "423", "Child" : ["441"],
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
	{"ID" : "441", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1532.ShuffleNetV2_mul_cud_U6", "Parent" : "440"},
	{"ID" : "442", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1542", "Parent" : "423", "Child" : ["443"],
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
	{"ID" : "443", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1542.ShuffleNetV2_mul_cud_U6", "Parent" : "442"},
	{"ID" : "444", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1552", "Parent" : "423", "Child" : ["445"],
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
	{"ID" : "445", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1552.ShuffleNetV2_mul_cud_U6", "Parent" : "444"},
	{"ID" : "446", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1562", "Parent" : "423", "Child" : ["447"],
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
	{"ID" : "447", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.grp_MUL_DP_fu_1562.ShuffleNetV2_mul_cud_U6", "Parent" : "446"},
	{"ID" : "448", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14170.ShuffleNetV2_mux_dEe_x_U89", "Parent" : "423"},
	{"ID" : "449", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274", "Parent" : "0", "Child" : ["450", "451", "452", "453", "454", "455", "456", "457", "458"],
		"CDFG" : "conv_last",
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
			{"Name" : "conv_last_weight_V9", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "450", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_0_0_0_U", "Parent" : "449"},
	{"ID" : "451", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_1_0_0_U", "Parent" : "449"},
	{"ID" : "452", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_2_0_0_U", "Parent" : "449"},
	{"ID" : "453", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_3_0_0_U", "Parent" : "449"},
	{"ID" : "454", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_4_0_0_U", "Parent" : "449"},
	{"ID" : "455", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_5_0_0_U", "Parent" : "449"},
	{"ID" : "456", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_6_0_0_U", "Parent" : "449"},
	{"ID" : "457", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.weight_temp_7_0_0_U", "Parent" : "449"},
	{"ID" : "458", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14274.ShuffleNetV2_mux_udo_U747", "Parent" : "449"},
	{"ID" : "459", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14301", "Parent" : "0", "Child" : ["460"],
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
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "460", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14301.weight_temp_V_U", "Parent" : "459"},
	{"ID" : "461", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_14314", "Parent" : "0", "Child" : ["462"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "462", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_14314.ShuffleNetV2_mux_fYi_x_U691", "Parent" : "461"},
	{"ID" : "463", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_14372", "Parent" : "0", "Child" : ["464"],
		"CDFG" : "subconv_3x3_8_stride",
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
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "464", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_14372.ShuffleNetV2_mux_fYi_x_U552", "Parent" : "463"},
	{"ID" : "465", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_14430", "Parent" : "0", "Child" : ["466"],
		"CDFG" : "subconv_3x3_16_strid",
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
	{"ID" : "466", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_14430.ShuffleNetV2_mux_fYi_x_U304", "Parent" : "465"},
	{"ID" : "467", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_14488", "Parent" : "0", "Child" : ["468"],
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
	{"ID" : "468", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_14488.ShuffleNetV2_mux_fYi_x_U443", "Parent" : "467"},
	{"ID" : "469", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_14546", "Parent" : "0", "Child" : ["470"],
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
	{"ID" : "470", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_14546.ShuffleNetV2_mux_dEe_x_U61", "Parent" : "469"},
	{"ID" : "471", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_14604", "Parent" : "0", "Child" : ["472"],
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
	{"ID" : "472", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_14604.ShuffleNetV2_mux_dEe_x_U196", "Parent" : "471"},
	{"ID" : "473", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_14662", "Parent" : "0", "Child" : ["474", "475"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "474", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_14662.ShuffleNetV2_uremkbM_x_U719", "Parent" : "473"},
	{"ID" : "475", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_14662.ShuffleNetV2_mux_lbW_x_U720", "Parent" : "473"},
	{"ID" : "476", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_14718", "Parent" : "0", "Child" : ["477", "478"],
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
	{"ID" : "477", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_14718.ShuffleNetV2_uremg8j_x_U471", "Parent" : "476"},
	{"ID" : "478", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_14718.ShuffleNetV2_mux_hbi_x_U472", "Parent" : "476"},
	{"ID" : "479", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_1_fu_14774", "Parent" : "0",
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
			{"Name" : "conv1_output_p_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "480", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_14786", "Parent" : "0",
		"CDFG" : "subconv_3x3_8_stride_1",
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
	{"ID" : "481", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_14798", "Parent" : "0",
		"CDFG" : "subconv_3x3_16_strid_1",
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
	{"ID" : "482", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_14810", "Parent" : "0", "Child" : ["483", "484"],
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "483", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_14810.ShuffleNetV2_uremkbM_U633", "Parent" : "482"},
	{"ID" : "484", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_14810.ShuffleNetV2_mux_lbW_U634", "Parent" : "482"},
	{"ID" : "485", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_14864", "Parent" : "0", "Child" : ["486", "487"],
		"CDFG" : "shuffle_96_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "486", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_14864.ShuffleNetV2_uremkbM_x_U664", "Parent" : "485"},
	{"ID" : "487", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_14864.ShuffleNetV2_mux_lbW_x_U665", "Parent" : "485"},
	{"ID" : "488", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_14918", "Parent" : "0", "Child" : ["489"],
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
	{"ID" : "489", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_14918.ShuffleNetV2_mux_dEe_x_U224", "Parent" : "488"},
	{"ID" : "490", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_14974", "Parent" : "0", "Child" : ["491", "492"],
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
	{"ID" : "491", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_14974.ShuffleNetV2_uremg8j_U385", "Parent" : "490"},
	{"ID" : "492", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_14974.ShuffleNetV2_mux_hbi_U386", "Parent" : "490"},
	{"ID" : "493", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_15028", "Parent" : "0", "Child" : ["494", "495"],
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
	{"ID" : "494", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_15028.ShuffleNetV2_uremg8j_x_U416", "Parent" : "493"},
	{"ID" : "495", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_15028.ShuffleNetV2_mux_hbi_x_U417", "Parent" : "493"},
	{"ID" : "496", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_15082", "Parent" : "0", "Child" : ["497"],
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
	{"ID" : "497", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_15082.ShuffleNetV2_mux_dEe_x_U140", "Parent" : "496"},
	{"ID" : "498", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_15136", "Parent" : "0", "Child" : ["499"],
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
	{"ID" : "499", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_15136.ShuffleNetV2_mux_dEe_x_U170", "Parent" : "498"},
	{"ID" : "500", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_15190", "Parent" : "0", "Child" : ["501"],
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
	{"ID" : "501", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_15190.ShuffleNetV2_mux_udo_x_U761", "Parent" : "500"},
	{"ID" : "502", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_15212", "Parent" : "0",
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
			{"Name" : "fc_weight_V11", "Type" : "None", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "MAXI", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "output_V_blk_n_AW", "Type" : "RtlSignal"},
					{"Name" : "output_V_blk_n_W", "Type" : "RtlSignal"},
					{"Name" : "output_V_blk_n_B", "Type" : "RtlSignal"}]},
			{"Name" : "fc_output_V15", "Type" : "None", "Direction" : "I"},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "503", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U777", "Parent" : "0"},
	{"ID" : "504", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U778", "Parent" : "0"},
	{"ID" : "505", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U779", "Parent" : "0"},
	{"ID" : "506", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U780", "Parent" : "0"},
	{"ID" : "507", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U781", "Parent" : "0"},
	{"ID" : "508", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U782", "Parent" : "0"},
	{"ID" : "509", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U783", "Parent" : "0"},
	{"ID" : "510", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U784", "Parent" : "0"},
	{"ID" : "511", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U785", "Parent" : "0"},
	{"ID" : "512", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U786", "Parent" : "0"},
	{"ID" : "513", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U787", "Parent" : "0"},
	{"ID" : "514", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U788", "Parent" : "0"},
	{"ID" : "515", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U789", "Parent" : "0"},
	{"ID" : "516", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U790", "Parent" : "0"},
	{"ID" : "517", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U791", "Parent" : "0"},
	{"ID" : "518", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U792", "Parent" : "0"},
	{"ID" : "519", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U793", "Parent" : "0"},
	{"ID" : "520", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U794", "Parent" : "0"},
	{"ID" : "521", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremeqQ_U795", "Parent" : "0"},
	{"ID" : "522", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U796", "Parent" : "0"},
	{"ID" : "523", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U797", "Parent" : "0"},
	{"ID" : "524", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U798", "Parent" : "0"},
	{"ID" : "525", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U799", "Parent" : "0"},
	{"ID" : "526", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U800", "Parent" : "0"},
	{"ID" : "527", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U801", "Parent" : "0"},
	{"ID" : "528", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U802", "Parent" : "0"},
	{"ID" : "529", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U803", "Parent" : "0"},
	{"ID" : "530", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremerQ_U804", "Parent" : "0"},
	{"ID" : "531", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U805", "Parent" : "0"},
	{"ID" : "532", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U806", "Parent" : "0"},
	{"ID" : "533", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U807", "Parent" : "0"},
	{"ID" : "534", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U808", "Parent" : "0"},
	{"ID" : "535", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U809", "Parent" : "0"},
	{"ID" : "536", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U810", "Parent" : "0"},
	{"ID" : "537", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U811", "Parent" : "0"},
	{"ID" : "538", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U812", "Parent" : "0"},
	{"ID" : "539", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U813", "Parent" : "0"},
	{"ID" : "540", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U814", "Parent" : "0"},
	{"ID" : "541", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U815", "Parent" : "0"},
	{"ID" : "542", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U816", "Parent" : "0"},
	{"ID" : "543", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U817", "Parent" : "0"},
	{"ID" : "544", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U818", "Parent" : "0"},
	{"ID" : "545", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U819", "Parent" : "0"},
	{"ID" : "546", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U820", "Parent" : "0"},
	{"ID" : "547", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U821", "Parent" : "0"},
	{"ID" : "548", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U822", "Parent" : "0"},
	{"ID" : "549", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_esQ_U823", "Parent" : "0"},
	{"ID" : "550", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U824", "Parent" : "0"},
	{"ID" : "551", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U825", "Parent" : "0"},
	{"ID" : "552", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U826", "Parent" : "0"},
	{"ID" : "553", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U827", "Parent" : "0"},
	{"ID" : "554", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U828", "Parent" : "0"},
	{"ID" : "555", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U829", "Parent" : "0"},
	{"ID" : "556", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U830", "Parent" : "0"},
	{"ID" : "557", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U831", "Parent" : "0"},
	{"ID" : "558", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_etR_U832", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		DATA_INPUT_OUTPUT {Type IO LastRead 34 FirstWrite 12}
		DATA_OTHER_WEIGHTS {Type I LastRead 12 FirstWrite -1}
		p3X3_1X1_WEIGHTS {Type I LastRead 338 FirstWrite -1}
		DATA_BIAS {Type I LastRead 335 FirstWrite -1}
		image_V {Type I LastRead 0 FirstWrite -1}
		conv1_weight_V {Type I LastRead 0 FirstWrite -1}
		shuffle_conv_3x3_V {Type I LastRead 0 FirstWrite -1}
		shuffle_conv_1x1_V {Type I LastRead 0 FirstWrite -1}
		conv_last_weight_V {Type I LastRead 0 FirstWrite -1}
		fc_weight_V {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 0 FirstWrite -1}
		fc_output_V {Type I LastRead 0 FirstWrite -1}
		conv1_bias_V {Type IO LastRead -1 FirstWrite -1}
		conv_last_bias_V {Type IO LastRead -1 FirstWrite -1}
		fc_bias_V {Type IO LastRead -1 FirstWrite -1}
		image_p_V {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V {Type IO LastRead -1 FirstWrite -1}
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
		ShuffleConvs_2_Downs_23 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_16 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_14 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_12 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type IO LastRead -1 FirstWrite -1}
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
		weights_96_96_1x1_V_12 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_13 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_14 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_15 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_16 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_17 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_18 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_19 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_20 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_21 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_22 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_23 {Type IO LastRead -1 FirstWrite -1}
		weights_96_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_96_4x4_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type IO LastRead -1 FirstWrite -1}
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
		buffer1_1_96_4x4_p_V_12 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type IO LastRead -1 FirstWrite -1}
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
	subconv_1x1_4_p {
		input_V {Type I LastRead 7 FirstWrite -1}
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
		bias_V {Type I LastRead 11 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_9 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_10 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_11 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_12 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_13 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_14 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_15 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_16 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_17 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_18 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_19 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_20 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_21 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_22 {Type IO LastRead 16 FirstWrite 12}
		buffer1_1_96_4x4_p_V_23 {Type IO LastRead 16 FirstWrite 12}}
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
	subconv_1x1_8p_p {
		input_V {Type I LastRead 9 FirstWrite -1}
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
		weight_12_V {Type I LastRead 9 FirstWrite -1}
		weight_13_V {Type I LastRead 9 FirstWrite -1}
		weight_14_V {Type I LastRead 9 FirstWrite -1}
		weight_15_V {Type I LastRead 9 FirstWrite -1}
		weight_16_V {Type I LastRead 9 FirstWrite -1}
		weight_17_V {Type I LastRead 9 FirstWrite -1}
		weight_18_V {Type I LastRead 9 FirstWrite -1}
		weight_19_V {Type I LastRead 9 FirstWrite -1}
		weight_20_V {Type I LastRead 9 FirstWrite -1}
		weight_21_V {Type I LastRead 9 FirstWrite -1}
		weight_22_V {Type I LastRead 9 FirstWrite -1}
		weight_23_V {Type I LastRead 9 FirstWrite -1}
		bias_V {Type I LastRead 11 FirstWrite -1}
		ShuffleConvs_2_Downs_23 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_22 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_11 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_6 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_5 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_4 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_3 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_2 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_1 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_21 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_20 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_19 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_18 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_17 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_16 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_15 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_14 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_13 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_12 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_10 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_9 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_8 {Type IO LastRead 18 FirstWrite 12}
		ShuffleConvs_2_Downs_7 {Type IO LastRead 18 FirstWrite 12}}
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
	subconv_1x1_16p_p {
		input_V {Type I LastRead 9 FirstWrite -1}
		weight_0_V {Type I LastRead 8 FirstWrite -1}
		weight_1_V {Type I LastRead 8 FirstWrite -1}
		weight_2_V {Type I LastRead 8 FirstWrite -1}
		weight_3_V {Type I LastRead 8 FirstWrite -1}
		weight_4_V {Type I LastRead 8 FirstWrite -1}
		weight_5_V {Type I LastRead 8 FirstWrite -1}
		weight_6_V {Type I LastRead 9 FirstWrite -1}
		weight_7_V {Type I LastRead 9 FirstWrite -1}
		weight_8_V {Type I LastRead 9 FirstWrite -1}
		weight_9_V {Type I LastRead 9 FirstWrite -1}
		weight_10_V {Type I LastRead 9 FirstWrite -1}
		weight_11_V {Type I LastRead 9 FirstWrite -1}
		weight_12_V {Type I LastRead 10 FirstWrite -1}
		weight_13_V {Type I LastRead 10 FirstWrite -1}
		weight_14_V {Type I LastRead 10 FirstWrite -1}
		weight_15_V {Type I LastRead 10 FirstWrite -1}
		weight_16_V {Type I LastRead 10 FirstWrite -1}
		weight_17_V {Type I LastRead 10 FirstWrite -1}
		weight_18_V {Type I LastRead 11 FirstWrite -1}
		weight_19_V {Type I LastRead 11 FirstWrite -1}
		weight_20_V {Type I LastRead 11 FirstWrite -1}
		weight_21_V {Type I LastRead 11 FirstWrite -1}
		weight_22_V {Type I LastRead 11 FirstWrite -1}
		weight_23_V {Type I LastRead 11 FirstWrite -1}
		bias_V {Type I LastRead 10 FirstWrite -1}
		ShuffleConvs_1_Downs_23 {Type IO LastRead 16 FirstWrite 11}
		ShuffleConvs_1_Downs_22 {Type IO LastRead 16 FirstWrite 11}
		ShuffleConvs_1_Downs_11 {Type IO LastRead 16 FirstWrite 11}
		ShuffleConvs_1_Downs_6 {Type IO LastRead 16 FirstWrite 11}
		ShuffleConvs_1_Downs_5 {Type IO LastRead 16 FirstWrite 11}
		ShuffleConvs_1_Downs_4 {Type IO LastRead 16 FirstWrite 11}
		ShuffleConvs_1_Downs_3 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_2 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_1 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_21 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_20 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_19 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_18 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_17 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_16 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_15 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_14 {Type IO LastRead 17 FirstWrite 11}
		ShuffleConvs_1_Downs_13 {Type IO LastRead 18 FirstWrite 11}
		ShuffleConvs_1_Downs_12 {Type IO LastRead 18 FirstWrite 11}
		ShuffleConvs_1_Downs_10 {Type IO LastRead 18 FirstWrite 11}
		ShuffleConvs_1_Downs_9 {Type IO LastRead 18 FirstWrite 11}
		ShuffleConvs_1_Downs_8 {Type IO LastRead 18 FirstWrite 11}
		ShuffleConvs_1_Downs_7 {Type IO LastRead 18 FirstWrite 11}}
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
		ShuffleConvs_0_Downs_23 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_19 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_22 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_18 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_11 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_17 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_6 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_16 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_5 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_15 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_4 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_14 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_3 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_13 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_2 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_12 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_1 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_10 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_9 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_21 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_8 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_20 {Type IO LastRead 9 FirstWrite 3}
		ShuffleConvs_0_Downs_7 {Type IO LastRead 9 FirstWrite 3}}
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
		input_V {Type I LastRead 8 FirstWrite -1}
		weight_V {Type I LastRead 10 FirstWrite -1}
		conv_last_weight_V9 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		conv_last_output_V_0 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_1 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_2 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_3 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_4 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_5 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_6 {Type IO LastRead 9 FirstWrite 5}
		conv_last_output_V_7 {Type IO LastRead 9 FirstWrite 5}}
	conv1_p {
		input_V {Type I LastRead 11 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		conv1_weight_V3 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type IO LastRead 12 FirstWrite 5}}
	subconv_3x3_4_no_rel {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 7 FirstWrite -1}
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
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 7 FirstWrite -1}}
	subconv_3x3_8_stride {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		ShuffleConvs_2_Downs_23 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_22 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_21 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_20 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_19 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_18 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_17 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_16 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_15 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_14 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_13 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_12 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_16_strid {
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
	subconv_3x3_32_strid {
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
	shuffle_96_p {
		left_V {Type I LastRead 13 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 15}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 13 FirstWrite -1}
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
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 13 FirstWrite -1}}
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
	subconv_3x3_32_strid_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		conv1_output_p_V {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_8_stride_1 {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	subconv_3x3_16_strid_1 {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	shuffle_96_l_p {
		output_V {Type O LastRead -1 FirstWrite 15}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 13 FirstWrite -1}
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
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 13 FirstWrite -1}}
	shuffle_96_r_p {
		output_V {Type O LastRead -1 FirstWrite 15}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 13 FirstWrite -1}
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
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 13 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 13 FirstWrite -1}}
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
		fc_weight_V11 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 9 FirstWrite -1}
		output_V {Type O LastRead 1 FirstWrite 12}
		fc_output_V15 {Type I LastRead 0 FirstWrite -1}
		avgpool_output_V {Type I LastRead 9 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "17361440", "Max" : "17425568"}
	, {"Name" : "Interval", "Min" : "17361441", "Max" : "17425569"}
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
