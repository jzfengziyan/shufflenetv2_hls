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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "324", "352", "404", "420", "470", "498", "524", "534", "536", "538", "540", "542", "544", "546", "549", "552", "553", "554", "557", "560", "562", "565", "568", "570", "572", "574", "575", "576", "577", "578", "579", "580", "581", "582", "583", "584", "585", "586", "587", "588", "589", "590", "591", "592", "593", "594", "595", "596", "597", "598", "599", "600", "601", "602", "603", "604", "605", "606", "607", "608", "609", "610", "611", "612", "613", "614", "615", "616", "617", "618", "619", "620", "621", "622", "623", "624", "625", "626", "627", "628", "629", "630"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state1363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1423", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1459", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1517", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1556", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1614", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1653", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1710", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694"},
			{"State" : "ap_ST_fsm_state1305", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798"},
			{"State" : "ap_ST_fsm_state454", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state513", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state548", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state605", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state643", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state700", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state738", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state795", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state833", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state890", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state928", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state985", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state1023", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state1080", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state1118", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state1175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state1213", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state1270", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902"},
			{"State" : "ap_ST_fsm_state397", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_14110"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state148", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state248", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319"},
			{"State" : "ap_ST_fsm_state1720", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_14423"},
			{"State" : "ap_ST_fsm_state1487", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450"},
			{"State" : "ap_ST_fsm_state1584", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450"},
			{"State" : "ap_ST_fsm_state1681", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450"},
			{"State" : "ap_ST_fsm_state1333", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508"},
			{"State" : "ap_ST_fsm_state425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566"},
			{"State" : "ap_ST_fsm_state576", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state671", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state766", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state861", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state956", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state1051", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state1146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state1241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764"},
			{"State" : "ap_ST_fsm_state269", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764"},
			{"State" : "ap_ST_fsm_state342", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764"},
			{"State" : "ap_ST_fsm_state1522", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_14822"},
			{"State" : "ap_ST_fsm_state1619", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_14822"},
			{"State" : "ap_ST_fsm_state1715", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_14822"},
			{"State" : "ap_ST_fsm_state610", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state705", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state800", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state895", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state990", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state1085", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state1180", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state1275", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_14878"},
			{"State" : "ap_ST_fsm_state1393", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14934"},
			{"State" : "ap_ST_fsm_state484", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14946"},
			{"State" : "ap_ST_fsm_state1365", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_14958"},
			{"State" : "ap_ST_fsm_state1425", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_15012"},
			{"State" : "ap_ST_fsm_state223", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_15066"},
			{"State" : "ap_ST_fsm_state295", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_15066"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_15066"},
			{"State" : "ap_ST_fsm_state456", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_15122"},
			{"State" : "ap_ST_fsm_state515", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_15176"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_15230"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_15284"},
			{"State" : "ap_ST_fsm_state1722", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_15338"},
			{"State" : "ap_ST_fsm_state1724", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc_fu_15360"}],
		"Port" : [
			{"Name" : "DATA_INPUT_OUTPUT", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "574", "SubInstance" : "grp_fc_fu_15360", "Port" : "output_V"}]},
			{"Name" : "DATA_OTHER_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "574", "SubInstance" : "grp_fc_fu_15360", "Port" : "weight_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "weight_V"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "weight_V"}]},
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
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "bias_V"}]},
			{"Name" : "conv_last_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "bias_V"}]},
			{"Name" : "fc_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "574", "SubInstance" : "grp_fc_fu_15360", "Port" : "bias_V"}]},
			{"Name" : "image_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "input_V"}]},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_0_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_0"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_0"}]},
			{"Name" : "conv1_output_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_12_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_12"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_12"}]},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_1_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_1"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_1"}]},
			{"Name" : "conv1_output_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_13_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_13"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_13"}]},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_2_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_2"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_2"}]},
			{"Name" : "conv1_output_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_14_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_14"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_14"}]},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_3_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_3"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_3"}]},
			{"Name" : "conv1_output_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_15_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_15"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_15"}]},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_4_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_4"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_4"}]},
			{"Name" : "conv1_output_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_16_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_16"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_16"}]},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_5_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_5"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_5"}]},
			{"Name" : "conv1_output_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_17_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_17"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_17"}]},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_6_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_6"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_6"}]},
			{"Name" : "conv1_output_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_18_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_18"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_18"}]},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_7_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_7"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_7"}]},
			{"Name" : "conv1_output_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_19_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_19"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_19"}]},
			{"Name" : "conv1_output_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_8_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_8"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_8"}]},
			{"Name" : "conv1_output_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_20_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_20"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_20"}]},
			{"Name" : "conv1_output_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_9_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_9"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_9"}]},
			{"Name" : "conv1_output_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_21_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_21"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_21"}]},
			{"Name" : "conv1_output_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_10_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_10"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_10"}]},
			{"Name" : "conv1_output_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_22_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_22"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_22"}]},
			{"Name" : "conv1_output_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_11_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_11"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_11"}]},
			{"Name" : "conv1_output_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_23_V"},
					{"ID" : "420", "SubInstance" : "grp_conv1_p_fu_14110", "Port" : "conv1_output_p_V_23"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "conv1_output_p_V_23"}]},
			{"Name" : "bias_24_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "bias_V"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "bias_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "bias_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_0_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_0_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_23"}]},
			{"Name" : "ShuffleConvs_0_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_12_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_19"}]},
			{"Name" : "ShuffleConvs_0_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_1_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_22"}]},
			{"Name" : "ShuffleConvs_0_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_13_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_18"}]},
			{"Name" : "ShuffleConvs_0_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_2_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_11"}]},
			{"Name" : "ShuffleConvs_0_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_14_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_17"}]},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_3_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_6"}]},
			{"Name" : "ShuffleConvs_0_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_15_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_16"}]},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_4_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_5"}]},
			{"Name" : "ShuffleConvs_0_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_16_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_15"}]},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_5_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_4"}]},
			{"Name" : "ShuffleConvs_0_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_17_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_14"}]},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_6_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_3"}]},
			{"Name" : "ShuffleConvs_0_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_18_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_13"}]},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_7_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_2"}]},
			{"Name" : "ShuffleConvs_0_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_19_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_12"}]},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_8_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_1"}]},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_20_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_10"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_9_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs"}]},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_21_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_9"}]},
			{"Name" : "ShuffleConvs_0_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_10_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_21"}]},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_22_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_8"}]},
			{"Name" : "ShuffleConvs_0_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_11_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_20"}]},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "input_23_V"},
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "ShuffleConvs_0_Downs_7"}]},
			{"Name" : "weights_24_24_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_0_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_0_V"}]},
			{"Name" : "weights_24_24_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_1_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_1_V"}]},
			{"Name" : "weights_24_24_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_2_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_2_V"}]},
			{"Name" : "weights_24_24_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_3_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_3_V"}]},
			{"Name" : "weights_24_24_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_4_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_4_V"}]},
			{"Name" : "weights_24_24_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_5_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_5_V"}]},
			{"Name" : "weights_24_24_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_6_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_6_V"}]},
			{"Name" : "weights_24_24_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_7_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_7_V"}]},
			{"Name" : "weights_24_24_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_8_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_8_V"}]},
			{"Name" : "weights_24_24_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_9_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_9_V"}]},
			{"Name" : "weights_24_24_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_10_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_10_V"}]},
			{"Name" : "weights_24_24_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_11_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_11_V"}]},
			{"Name" : "weights_24_24_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_12_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_12_V"}]},
			{"Name" : "weights_24_24_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_13_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_13_V"}]},
			{"Name" : "weights_24_24_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_14_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_14_V"}]},
			{"Name" : "weights_24_24_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_15_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_15_V"}]},
			{"Name" : "weights_24_24_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_16_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_16_V"}]},
			{"Name" : "weights_24_24_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_17_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_17_V"}]},
			{"Name" : "weights_24_24_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_18_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_18_V"}]},
			{"Name" : "weights_24_24_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_19_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_19_V"}]},
			{"Name" : "weights_24_24_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_20_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_20_V"}]},
			{"Name" : "weights_24_24_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_21_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_21_V"}]},
			{"Name" : "weights_24_24_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_22_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_22_V"}]},
			{"Name" : "weights_24_24_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "470", "SubInstance" : "grp_subconv_1x1_32_p_fu_14169", "Port" : "weight_23_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "weight_23_V"}]},
			{"Name" : "weights_24_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "weight_V"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "left_V"},
					{"ID" : "542", "SubInstance" : "grp_subconv_3x3_32_strid_fu_14682", "Port" : "output_V"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "output_V"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "input_V"}]},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_23"}]},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_19"}]},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_22"}]},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_18"}]},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_11"}]},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_17"}]},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_6"}]},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_16"}]},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_5"}]},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_15"}]},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_4"}]},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_14"}]},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_3"}]},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_13"}]},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_2"}]},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_12"}]},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_1"}]},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_10"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p"}]},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_9"}]},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_21"}]},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_8"}]},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_20"}]},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "544", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_14764", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "498", "SubInstance" : "grp_subconv_1x1_16_p_fu_14319", "Port" : "buffer1_1_24_16x16_p_7"}]},
			{"Name" : "feature_buffer_48x18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "570", "SubInstance" : "grp_shuffle_24_r_p_fu_15284", "Port" : "output_V"},
					{"ID" : "568", "SubInstance" : "grp_shuffle_24_l_p_fu_15230", "Port" : "output_V"},
					{"ID" : "560", "SubInstance" : "grp_shuffle_24_p_fu_15066", "Port" : "output_V"},
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "input_V"},
					{"ID" : "553", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14946", "Port" : "input_V"}]},
			{"Name" : "bias_48_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "bias_V"},
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "bias_V"},
					{"ID" : "553", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14946", "Port" : "bias_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "bias_V"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_23"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_23"}]},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_22"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_22"}]},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_11"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_11"}]},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_6"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_6"}]},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_5"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_5"}]},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_4"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_4"}]},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_3"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_3"}]},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_2"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_2"}]},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_1"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_1"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_21"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_21"}]},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_20"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_20"}]},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_19"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_19"}]},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_18"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_18"}]},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_17"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_17"}]},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_16"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_16"}]},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_15"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_15"}]},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_14"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_14"}]},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_13"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_13"}]},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_12"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_12"}]},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_10"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_10"}]},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_9"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_9"}]},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_8"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_8"}]},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "ShuffleConvs_1_Downs_7"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "ShuffleConvs_1_Downs_7"}]},
			{"Name" : "weights_48_48_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_0_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_0_V"}]},
			{"Name" : "weights_48_48_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_1_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_1_V"}]},
			{"Name" : "weights_48_48_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_2_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_2_V"}]},
			{"Name" : "weights_48_48_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_3_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_3_V"}]},
			{"Name" : "weights_48_48_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_4_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_4_V"}]},
			{"Name" : "weights_48_48_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_5_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_5_V"}]},
			{"Name" : "weights_48_48_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_6_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_6_V"}]},
			{"Name" : "weights_48_48_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_7_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_7_V"}]},
			{"Name" : "weights_48_48_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_8_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_8_V"}]},
			{"Name" : "weights_48_48_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_9_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_9_V"}]},
			{"Name" : "weights_48_48_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_10_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_10_V"}]},
			{"Name" : "weights_48_48_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_11_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_11_V"}]},
			{"Name" : "weights_48_48_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_12_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_12_V"}]},
			{"Name" : "weights_48_48_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_13_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_13_V"}]},
			{"Name" : "weights_48_48_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_14_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_14_V"}]},
			{"Name" : "weights_48_48_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_15_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_15_V"}]},
			{"Name" : "weights_48_48_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_16_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_16_V"}]},
			{"Name" : "weights_48_48_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_17_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_17_V"}]},
			{"Name" : "weights_48_48_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_18_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_18_V"}]},
			{"Name" : "weights_48_48_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_19_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_19_V"}]},
			{"Name" : "weights_48_48_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_20_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_20_V"}]},
			{"Name" : "weights_48_48_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_21_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_21_V"}]},
			{"Name" : "weights_48_48_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_22_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_22_V"}]},
			{"Name" : "weights_48_48_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "404", "SubInstance" : "grp_subconv_1x1_16p_p_fu_14006", "Port" : "weight_23_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "weight_23_V"}]},
			{"Name" : "weights_48_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "weight_V"},
					{"ID" : "553", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14946", "Port" : "weight_V"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "output_V"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "left_V"},
					{"ID" : "553", "SubInstance" : "grp_subconv_3x3_16_strid_fu_14946", "Port" : "output_V"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "input_V"},
					{"ID" : "538", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_14566", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_24"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_1"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_2"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_3"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_4"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_5"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_6"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_7"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_8"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_9"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_10"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_11"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_12"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_13"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_14"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_15"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_16"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_17"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_18"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_19"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_20"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_21"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_22"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "540", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_14624", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "352", "SubInstance" : "grp_subconv_1x1_8_p_fu_13902", "Port" : "buffer1_1_48_8x8_p_V_23"}]},
			{"Name" : "feature_buffer_96x10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "562", "SubInstance" : "grp_shuffle_48_l_p_fu_15122", "Port" : "output_V"},
					{"ID" : "565", "SubInstance" : "grp_shuffle_48_r_p_fu_15176", "Port" : "output_V"},
					{"ID" : "549", "SubInstance" : "grp_shuffle_48_p_fu_14878", "Port" : "output_V"},
					{"ID" : "552", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14934", "Port" : "input_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "input_V"}]},
			{"Name" : "bias_96_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "552", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14934", "Port" : "bias_V"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "bias_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "bias_V"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "bias_V"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_23"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_23"}]},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_22"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_22"}]},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_11"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_11"}]},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_6"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_6"}]},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_5"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_5"}]},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_4"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_4"}]},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_3"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_3"}]},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_2"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_2"}]},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_1"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_1"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_21"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_21"}]},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_20"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_20"}]},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_19"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_19"}]},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_18"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_18"}]},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_17"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_17"}]},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_16"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_16"}]},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_15"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_15"}]},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_14"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_14"}]},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_13"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_13"}]},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_12"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_12"}]},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_10"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_10"}]},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_9"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_9"}]},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_8"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_8"}]},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "ShuffleConvs_2_Downs_7"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "ShuffleConvs_2_Downs_7"}]},
			{"Name" : "weights_96_96_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_0_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_0_V"}]},
			{"Name" : "weights_96_96_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_1_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_1_V"}]},
			{"Name" : "weights_96_96_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_2_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_2_V"}]},
			{"Name" : "weights_96_96_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_3_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_3_V"}]},
			{"Name" : "weights_96_96_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_4_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_4_V"}]},
			{"Name" : "weights_96_96_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_5_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_5_V"}]},
			{"Name" : "weights_96_96_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_6_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_6_V"}]},
			{"Name" : "weights_96_96_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_7_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_7_V"}]},
			{"Name" : "weights_96_96_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_8_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_8_V"}]},
			{"Name" : "weights_96_96_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_9_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_9_V"}]},
			{"Name" : "weights_96_96_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_10_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_10_V"}]},
			{"Name" : "weights_96_96_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_11_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_11_V"}]},
			{"Name" : "weights_96_96_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_12_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_12_V"}]},
			{"Name" : "weights_96_96_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_13_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_13_V"}]},
			{"Name" : "weights_96_96_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_14_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_14_V"}]},
			{"Name" : "weights_96_96_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_15_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_15_V"}]},
			{"Name" : "weights_96_96_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_16_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_16_V"}]},
			{"Name" : "weights_96_96_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_17_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_17_V"}]},
			{"Name" : "weights_96_96_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_18_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_18_V"}]},
			{"Name" : "weights_96_96_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_19_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_19_V"}]},
			{"Name" : "weights_96_96_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_20_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_20_V"}]},
			{"Name" : "weights_96_96_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_21_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_21_V"}]},
			{"Name" : "weights_96_96_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_22_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_22_V"}]},
			{"Name" : "weights_96_96_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "weight_23_V"},
					{"ID" : "324", "SubInstance" : "grp_subconv_1x1_8p_p_fu_13798", "Port" : "weight_23_V"}]},
			{"Name" : "weights_96_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "552", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14934", "Port" : "weight_V"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "weight_V"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "left_V"},
					{"ID" : "552", "SubInstance" : "grp_subconv_3x3_8_stride_fu_14934", "Port" : "output_V"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "input_V"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "output_V"},
					{"ID" : "536", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_14508", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_24"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_1"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_2"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_3"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_4"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_5"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_6"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_7"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_8"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_9"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_10"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_11"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_12"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_13"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_14"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_15"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_16"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_17"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_18"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_19"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_20"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_21"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_22"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "272", "SubInstance" : "grp_subconv_1x1_4_p_fu_13694", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "534", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_14450", "Port" : "buffer1_1_96_4x4_p_V_23"}]},
			{"Name" : "feature_buffer_192x6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "557", "SubInstance" : "grp_shuffle_96_r_p_fu_15012", "Port" : "output_V"},
					{"ID" : "546", "SubInstance" : "grp_shuffle_96_p_fu_14822", "Port" : "output_V"},
					{"ID" : "554", "SubInstance" : "grp_shuffle_96_l_p_fu_14958", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "input_V"}]},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_0"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_0"}]},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_1"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_1"}]},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_2"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_2"}]},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_3"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_3"}]},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_4"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_4"}]},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_5"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_5"}]},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_6"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_6"}]},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "conv_last_output_V_7"},
					{"ID" : "524", "SubInstance" : "grp_conv_last_fu_14423", "Port" : "conv_last_output_V_7"}]},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "572", "SubInstance" : "grp_avgpool_fu_15338", "Port" : "output_V"},
					{"ID" : "574", "SubInstance" : "grp_fc_fu_15360", "Port" : "avgpool_output_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_p_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_12_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_1_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_13_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_2_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_14_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_3_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_15_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_4_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_16_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_5_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_17_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_6_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_18_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_7_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_19_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_8_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_20_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_9_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_21_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_10_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_22_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_11_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_23_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_V_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_23_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_19_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_22_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_18_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_11_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_17_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_6_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_16_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_5_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_15_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_4_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_14_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_3_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_13_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_2_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_12_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_1_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_10_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_9_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_21_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_8_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_20_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_7_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_23_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_19_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_22_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_18_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_11_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_17_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_6_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_16_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_5_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_15_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_4_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_14_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_3_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_13_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_2_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_12_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_1_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_10_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_9_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_21_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_8_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_20_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_7_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_48x18_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_V_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_23_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_22_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_11_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_6_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_5_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_4_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_3_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_2_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_1_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_21_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_20_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_19_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_18_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_17_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_16_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_15_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_14_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_13_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_12_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_10_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_9_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_8_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_7_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_24_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_1_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_2_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_3_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_4_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_5_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_6_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_7_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_8_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_9_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_10_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_11_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_12_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_13_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_14_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_15_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_16_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_17_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_18_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_19_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_20_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_21_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_22_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_23_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_96x10_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_V_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_23_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_22_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_11_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_6_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_5_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_4_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_3_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_2_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_1_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_21_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_20_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_19_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_18_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_17_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_16_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_15_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_14_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_13_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_12_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_10_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_9_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_8_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_7_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "229", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "230", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "231", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_24_U", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_1_U", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_2_U", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_3_U", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_4_U", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_5_U", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_6_U", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_7_U", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_8_U", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_9_U", "Parent" : "0"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_10_U", "Parent" : "0"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_11_U", "Parent" : "0"},
	{"ID" : "244", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_12_U", "Parent" : "0"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_13_U", "Parent" : "0"},
	{"ID" : "246", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_14_U", "Parent" : "0"},
	{"ID" : "247", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_15_U", "Parent" : "0"},
	{"ID" : "248", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_16_U", "Parent" : "0"},
	{"ID" : "249", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_17_U", "Parent" : "0"},
	{"ID" : "250", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_18_U", "Parent" : "0"},
	{"ID" : "251", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_19_U", "Parent" : "0"},
	{"ID" : "252", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_20_U", "Parent" : "0"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_21_U", "Parent" : "0"},
	{"ID" : "254", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_22_U", "Parent" : "0"},
	{"ID" : "255", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_23_U", "Parent" : "0"},
	{"ID" : "256", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.feature_buffer_192x6_U", "Parent" : "0"},
	{"ID" : "257", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "258", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_0_U", "Parent" : "0"},
	{"ID" : "259", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_1_U", "Parent" : "0"},
	{"ID" : "260", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_2_U", "Parent" : "0"},
	{"ID" : "261", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_3_U", "Parent" : "0"},
	{"ID" : "262", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_4_U", "Parent" : "0"},
	{"ID" : "263", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_5_U", "Parent" : "0"},
	{"ID" : "264", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_6_U", "Parent" : "0"},
	{"ID" : "265", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_7_U", "Parent" : "0"},
	{"ID" : "266", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_V_U", "Parent" : "0"},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_CTL_s_axi_U", "Parent" : "0"},
	{"ID" : "268", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_INPUT_OUTPUT_m_axi_U", "Parent" : "0"},
	{"ID" : "269", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_OTHER_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_p3X3_1X1_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "271", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_BIAS_m_axi_U", "Parent" : "0"},
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694", "Parent" : "0", "Child" : ["273", "275", "277", "279", "281", "283", "285", "287", "289", "291", "293", "295", "297", "299", "301", "303", "305", "307", "309", "311", "313", "315", "317", "319", "321", "322", "323"],
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
	{"ID" : "273", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2675", "Parent" : "272", "Child" : ["274"],
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
	{"ID" : "274", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2675.ShuffleNetV2_mul_bkb_U0", "Parent" : "273"},
	{"ID" : "275", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2682", "Parent" : "272", "Child" : ["276"],
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
	{"ID" : "276", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2682.ShuffleNetV2_mul_bkb_U0", "Parent" : "275"},
	{"ID" : "277", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2689", "Parent" : "272", "Child" : ["278"],
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
	{"ID" : "278", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2689.ShuffleNetV2_mul_bkb_U0", "Parent" : "277"},
	{"ID" : "279", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2696", "Parent" : "272", "Child" : ["280"],
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
	{"ID" : "280", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2696.ShuffleNetV2_mul_bkb_U0", "Parent" : "279"},
	{"ID" : "281", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2703", "Parent" : "272", "Child" : ["282"],
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
	{"ID" : "282", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2703.ShuffleNetV2_mul_bkb_U0", "Parent" : "281"},
	{"ID" : "283", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2710", "Parent" : "272", "Child" : ["284"],
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
	{"ID" : "284", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2710.ShuffleNetV2_mul_bkb_U0", "Parent" : "283"},
	{"ID" : "285", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2717", "Parent" : "272", "Child" : ["286"],
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
	{"ID" : "286", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2717.ShuffleNetV2_mul_bkb_U0", "Parent" : "285"},
	{"ID" : "287", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2724", "Parent" : "272", "Child" : ["288"],
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
	{"ID" : "288", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2724.ShuffleNetV2_mul_bkb_U0", "Parent" : "287"},
	{"ID" : "289", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2731", "Parent" : "272", "Child" : ["290"],
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
	{"ID" : "290", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2731.ShuffleNetV2_mul_bkb_U0", "Parent" : "289"},
	{"ID" : "291", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2738", "Parent" : "272", "Child" : ["292"],
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
	{"ID" : "292", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2738.ShuffleNetV2_mul_bkb_U0", "Parent" : "291"},
	{"ID" : "293", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2745", "Parent" : "272", "Child" : ["294"],
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
	{"ID" : "294", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2745.ShuffleNetV2_mul_bkb_U0", "Parent" : "293"},
	{"ID" : "295", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2752", "Parent" : "272", "Child" : ["296"],
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
	{"ID" : "296", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2752.ShuffleNetV2_mul_bkb_U0", "Parent" : "295"},
	{"ID" : "297", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2759", "Parent" : "272", "Child" : ["298"],
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
	{"ID" : "298", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2759.ShuffleNetV2_mul_bkb_U0", "Parent" : "297"},
	{"ID" : "299", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2766", "Parent" : "272", "Child" : ["300"],
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
	{"ID" : "300", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2766.ShuffleNetV2_mul_bkb_U0", "Parent" : "299"},
	{"ID" : "301", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2773", "Parent" : "272", "Child" : ["302"],
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
	{"ID" : "302", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2773.ShuffleNetV2_mul_bkb_U0", "Parent" : "301"},
	{"ID" : "303", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2780", "Parent" : "272", "Child" : ["304"],
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
	{"ID" : "304", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2780.ShuffleNetV2_mul_bkb_U0", "Parent" : "303"},
	{"ID" : "305", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2787", "Parent" : "272", "Child" : ["306"],
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
	{"ID" : "306", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2787.ShuffleNetV2_mul_bkb_U0", "Parent" : "305"},
	{"ID" : "307", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2794", "Parent" : "272", "Child" : ["308"],
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
	{"ID" : "308", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2794.ShuffleNetV2_mul_bkb_U0", "Parent" : "307"},
	{"ID" : "309", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2801", "Parent" : "272", "Child" : ["310"],
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
	{"ID" : "310", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2801.ShuffleNetV2_mul_bkb_U0", "Parent" : "309"},
	{"ID" : "311", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2808", "Parent" : "272", "Child" : ["312"],
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
	{"ID" : "312", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2808.ShuffleNetV2_mul_bkb_U0", "Parent" : "311"},
	{"ID" : "313", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2815", "Parent" : "272", "Child" : ["314"],
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
	{"ID" : "314", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2815.ShuffleNetV2_mul_bkb_U0", "Parent" : "313"},
	{"ID" : "315", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2822", "Parent" : "272", "Child" : ["316"],
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
	{"ID" : "316", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2822.ShuffleNetV2_mul_bkb_U0", "Parent" : "315"},
	{"ID" : "317", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2829", "Parent" : "272", "Child" : ["318"],
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
	{"ID" : "318", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2829.ShuffleNetV2_mul_bkb_U0", "Parent" : "317"},
	{"ID" : "319", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2836", "Parent" : "272", "Child" : ["320"],
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
	{"ID" : "320", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.grp_MUL_DP_fu_2836.ShuffleNetV2_mul_bkb_U0", "Parent" : "319"},
	{"ID" : "321", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.ShuffleNetV2_uremFfa_x_U625", "Parent" : "272"},
	{"ID" : "322", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.ShuffleNetV2_uremGfk_x_U626", "Parent" : "272"},
	{"ID" : "323", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_13694.ShuffleNetV2_mux_CeG_x_U627", "Parent" : "272"},
	{"ID" : "324", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798", "Parent" : "0", "Child" : ["325", "327", "329", "331", "333", "335", "337", "339", "341", "343", "345", "347", "349", "350", "351"],
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
	{"ID" : "325", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2756", "Parent" : "324", "Child" : ["326"],
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
	{"ID" : "326", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2756.ShuffleNetV2_mul_bkb_U0", "Parent" : "325"},
	{"ID" : "327", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2763", "Parent" : "324", "Child" : ["328"],
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
	{"ID" : "328", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2763.ShuffleNetV2_mul_bkb_U0", "Parent" : "327"},
	{"ID" : "329", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2770", "Parent" : "324", "Child" : ["330"],
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
	{"ID" : "330", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2770.ShuffleNetV2_mul_bkb_U0", "Parent" : "329"},
	{"ID" : "331", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2777", "Parent" : "324", "Child" : ["332"],
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
	{"ID" : "332", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2777.ShuffleNetV2_mul_bkb_U0", "Parent" : "331"},
	{"ID" : "333", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2784", "Parent" : "324", "Child" : ["334"],
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
	{"ID" : "334", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2784.ShuffleNetV2_mul_bkb_U0", "Parent" : "333"},
	{"ID" : "335", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2791", "Parent" : "324", "Child" : ["336"],
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
	{"ID" : "336", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2791.ShuffleNetV2_mul_bkb_U0", "Parent" : "335"},
	{"ID" : "337", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2798", "Parent" : "324", "Child" : ["338"],
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
	{"ID" : "338", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2798.ShuffleNetV2_mul_bkb_U0", "Parent" : "337"},
	{"ID" : "339", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2805", "Parent" : "324", "Child" : ["340"],
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
	{"ID" : "340", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2805.ShuffleNetV2_mul_bkb_U0", "Parent" : "339"},
	{"ID" : "341", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2812", "Parent" : "324", "Child" : ["342"],
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
	{"ID" : "342", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2812.ShuffleNetV2_mul_bkb_U0", "Parent" : "341"},
	{"ID" : "343", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2819", "Parent" : "324", "Child" : ["344"],
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
	{"ID" : "344", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2819.ShuffleNetV2_mul_bkb_U0", "Parent" : "343"},
	{"ID" : "345", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2826", "Parent" : "324", "Child" : ["346"],
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
	{"ID" : "346", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2826.ShuffleNetV2_mul_bkb_U0", "Parent" : "345"},
	{"ID" : "347", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2833", "Parent" : "324", "Child" : ["348"],
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
	{"ID" : "348", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.grp_MUL_DP_fu_2833.ShuffleNetV2_mul_bkb_U0", "Parent" : "347"},
	{"ID" : "349", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.ShuffleNetV2_uremFfa_U544", "Parent" : "324"},
	{"ID" : "350", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.ShuffleNetV2_uremGfk_U545", "Parent" : "324"},
	{"ID" : "351", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_13798.ShuffleNetV2_mux_CeG_x_U546", "Parent" : "324"},
	{"ID" : "352", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902", "Parent" : "0", "Child" : ["353", "355", "357", "359", "361", "363", "365", "367", "369", "371", "373", "375", "377", "379", "381", "383", "385", "387", "389", "391", "393", "395", "397", "399", "401", "402", "403"],
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
	{"ID" : "353", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1878", "Parent" : "352", "Child" : ["354"],
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
	{"ID" : "354", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1878.ShuffleNetV2_mul_bkb_U0", "Parent" : "353"},
	{"ID" : "355", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1887", "Parent" : "352", "Child" : ["356"],
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
	{"ID" : "356", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1887.ShuffleNetV2_mul_bkb_U0", "Parent" : "355"},
	{"ID" : "357", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1896", "Parent" : "352", "Child" : ["358"],
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
	{"ID" : "358", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1896.ShuffleNetV2_mul_bkb_U0", "Parent" : "357"},
	{"ID" : "359", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1905", "Parent" : "352", "Child" : ["360"],
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
	{"ID" : "360", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1905.ShuffleNetV2_mul_bkb_U0", "Parent" : "359"},
	{"ID" : "361", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1914", "Parent" : "352", "Child" : ["362"],
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
	{"ID" : "362", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1914.ShuffleNetV2_mul_bkb_U0", "Parent" : "361"},
	{"ID" : "363", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1923", "Parent" : "352", "Child" : ["364"],
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
	{"ID" : "364", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1923.ShuffleNetV2_mul_bkb_U0", "Parent" : "363"},
	{"ID" : "365", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1932", "Parent" : "352", "Child" : ["366"],
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
	{"ID" : "366", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1932.ShuffleNetV2_mul_bkb_U0", "Parent" : "365"},
	{"ID" : "367", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1941", "Parent" : "352", "Child" : ["368"],
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
	{"ID" : "368", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1941.ShuffleNetV2_mul_bkb_U0", "Parent" : "367"},
	{"ID" : "369", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1950", "Parent" : "352", "Child" : ["370"],
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
	{"ID" : "370", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1950.ShuffleNetV2_mul_bkb_U0", "Parent" : "369"},
	{"ID" : "371", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1959", "Parent" : "352", "Child" : ["372"],
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
	{"ID" : "372", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1959.ShuffleNetV2_mul_bkb_U0", "Parent" : "371"},
	{"ID" : "373", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1968", "Parent" : "352", "Child" : ["374"],
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
	{"ID" : "374", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1968.ShuffleNetV2_mul_bkb_U0", "Parent" : "373"},
	{"ID" : "375", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1977", "Parent" : "352", "Child" : ["376"],
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
	{"ID" : "376", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1977.ShuffleNetV2_mul_bkb_U0", "Parent" : "375"},
	{"ID" : "377", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1986", "Parent" : "352", "Child" : ["378"],
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
	{"ID" : "378", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1986.ShuffleNetV2_mul_bkb_U0", "Parent" : "377"},
	{"ID" : "379", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1995", "Parent" : "352", "Child" : ["380"],
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
	{"ID" : "380", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_1995.ShuffleNetV2_mul_bkb_U0", "Parent" : "379"},
	{"ID" : "381", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2004", "Parent" : "352", "Child" : ["382"],
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
	{"ID" : "382", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2004.ShuffleNetV2_mul_bkb_U0", "Parent" : "381"},
	{"ID" : "383", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2013", "Parent" : "352", "Child" : ["384"],
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
	{"ID" : "384", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2013.ShuffleNetV2_mul_bkb_U0", "Parent" : "383"},
	{"ID" : "385", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2022", "Parent" : "352", "Child" : ["386"],
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
	{"ID" : "386", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2022.ShuffleNetV2_mul_bkb_U0", "Parent" : "385"},
	{"ID" : "387", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2031", "Parent" : "352", "Child" : ["388"],
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
	{"ID" : "388", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2031.ShuffleNetV2_mul_bkb_U0", "Parent" : "387"},
	{"ID" : "389", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2040", "Parent" : "352", "Child" : ["390"],
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
	{"ID" : "390", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2040.ShuffleNetV2_mul_bkb_U0", "Parent" : "389"},
	{"ID" : "391", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2049", "Parent" : "352", "Child" : ["392"],
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
	{"ID" : "392", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2049.ShuffleNetV2_mul_bkb_U0", "Parent" : "391"},
	{"ID" : "393", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2058", "Parent" : "352", "Child" : ["394"],
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
	{"ID" : "394", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2058.ShuffleNetV2_mul_bkb_U0", "Parent" : "393"},
	{"ID" : "395", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2067", "Parent" : "352", "Child" : ["396"],
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
	{"ID" : "396", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2067.ShuffleNetV2_mul_bkb_U0", "Parent" : "395"},
	{"ID" : "397", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2076", "Parent" : "352", "Child" : ["398"],
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
	{"ID" : "398", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2076.ShuffleNetV2_mul_bkb_U0", "Parent" : "397"},
	{"ID" : "399", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2085", "Parent" : "352", "Child" : ["400"],
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
	{"ID" : "400", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.grp_MUL_DP_fu_2085.ShuffleNetV2_mul_bkb_U0", "Parent" : "399"},
	{"ID" : "401", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.ShuffleNetV2_uremBew_x_U377", "Parent" : "352"},
	{"ID" : "402", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.ShuffleNetV2_uremBew_x_U378", "Parent" : "352"},
	{"ID" : "403", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_13902.ShuffleNetV2_mux_CeG_x_U379", "Parent" : "352"},
	{"ID" : "404", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006", "Parent" : "0", "Child" : ["405", "407", "409", "411", "413", "415", "417", "418", "419"],
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
	{"ID" : "405", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2011", "Parent" : "404", "Child" : ["406"],
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
	{"ID" : "406", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2011.ShuffleNetV2_mul_bkb_U0", "Parent" : "405"},
	{"ID" : "407", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2020", "Parent" : "404", "Child" : ["408"],
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
	{"ID" : "408", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2020.ShuffleNetV2_mul_bkb_U0", "Parent" : "407"},
	{"ID" : "409", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2029", "Parent" : "404", "Child" : ["410"],
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
	{"ID" : "410", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2029.ShuffleNetV2_mul_bkb_U0", "Parent" : "409"},
	{"ID" : "411", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2038", "Parent" : "404", "Child" : ["412"],
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
	{"ID" : "412", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2038.ShuffleNetV2_mul_bkb_U0", "Parent" : "411"},
	{"ID" : "413", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2047", "Parent" : "404", "Child" : ["414"],
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
	{"ID" : "414", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2047.ShuffleNetV2_mul_bkb_U0", "Parent" : "413"},
	{"ID" : "415", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2056", "Parent" : "404", "Child" : ["416"],
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
	{"ID" : "416", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.grp_MUL_DP_fu_2056.ShuffleNetV2_mul_bkb_U0", "Parent" : "415"},
	{"ID" : "417", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.ShuffleNetV2_uremBew_U296", "Parent" : "404"},
	{"ID" : "418", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.ShuffleNetV2_uremBew_U297", "Parent" : "404"},
	{"ID" : "419", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_14006.ShuffleNetV2_mux_CeG_U298", "Parent" : "404"},
	{"ID" : "420", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110", "Parent" : "0", "Child" : ["421", "422", "423", "424", "425", "426", "427", "428", "429", "430", "431", "432", "433", "434", "435", "436", "437", "438", "439", "440", "441", "442", "443", "444", "445", "447", "449", "451", "453", "455", "457", "459", "461", "463", "465", "467", "469"],
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
			{"Name" : "conv1_output_p_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output_p_V_23", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "421", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_0_V_U", "Parent" : "420"},
	{"ID" : "422", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_1_V_U", "Parent" : "420"},
	{"ID" : "423", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_2_V_U", "Parent" : "420"},
	{"ID" : "424", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_3_V_U", "Parent" : "420"},
	{"ID" : "425", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_4_V_U", "Parent" : "420"},
	{"ID" : "426", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_5_V_U", "Parent" : "420"},
	{"ID" : "427", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_6_V_U", "Parent" : "420"},
	{"ID" : "428", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_7_V_U", "Parent" : "420"},
	{"ID" : "429", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_8_V_U", "Parent" : "420"},
	{"ID" : "430", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_9_V_U", "Parent" : "420"},
	{"ID" : "431", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_10_V_U", "Parent" : "420"},
	{"ID" : "432", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_11_V_U", "Parent" : "420"},
	{"ID" : "433", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_12_V_U", "Parent" : "420"},
	{"ID" : "434", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_13_V_U", "Parent" : "420"},
	{"ID" : "435", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_14_V_U", "Parent" : "420"},
	{"ID" : "436", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_15_V_U", "Parent" : "420"},
	{"ID" : "437", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_16_V_U", "Parent" : "420"},
	{"ID" : "438", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_17_V_U", "Parent" : "420"},
	{"ID" : "439", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_18_V_U", "Parent" : "420"},
	{"ID" : "440", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_19_V_U", "Parent" : "420"},
	{"ID" : "441", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_20_V_U", "Parent" : "420"},
	{"ID" : "442", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_21_V_U", "Parent" : "420"},
	{"ID" : "443", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_22_V_U", "Parent" : "420"},
	{"ID" : "444", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.weight_temp_23_V_U", "Parent" : "420"},
	{"ID" : "445", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1761", "Parent" : "420", "Child" : ["446"],
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
	{"ID" : "446", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1761.ShuffleNetV2_mul_bkb_U0", "Parent" : "445"},
	{"ID" : "447", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1771", "Parent" : "420", "Child" : ["448"],
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
	{"ID" : "448", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1771.ShuffleNetV2_mul_bkb_U0", "Parent" : "447"},
	{"ID" : "449", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1781", "Parent" : "420", "Child" : ["450"],
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
	{"ID" : "450", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1781.ShuffleNetV2_mul_bkb_U0", "Parent" : "449"},
	{"ID" : "451", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1791", "Parent" : "420", "Child" : ["452"],
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
	{"ID" : "452", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1791.ShuffleNetV2_mul_bkb_U0", "Parent" : "451"},
	{"ID" : "453", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1801", "Parent" : "420", "Child" : ["454"],
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
	{"ID" : "454", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1801.ShuffleNetV2_mul_bkb_U0", "Parent" : "453"},
	{"ID" : "455", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1811", "Parent" : "420", "Child" : ["456"],
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
	{"ID" : "456", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1811.ShuffleNetV2_mul_bkb_U0", "Parent" : "455"},
	{"ID" : "457", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1821", "Parent" : "420", "Child" : ["458"],
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
	{"ID" : "458", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1821.ShuffleNetV2_mul_bkb_U0", "Parent" : "457"},
	{"ID" : "459", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1831", "Parent" : "420", "Child" : ["460"],
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
	{"ID" : "460", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1831.ShuffleNetV2_mul_bkb_U0", "Parent" : "459"},
	{"ID" : "461", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1841", "Parent" : "420", "Child" : ["462"],
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
	{"ID" : "462", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1841.ShuffleNetV2_mul_bkb_U0", "Parent" : "461"},
	{"ID" : "463", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1851", "Parent" : "420", "Child" : ["464"],
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
	{"ID" : "464", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1851.ShuffleNetV2_mul_bkb_U0", "Parent" : "463"},
	{"ID" : "465", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1861", "Parent" : "420", "Child" : ["466"],
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
	{"ID" : "466", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1861.ShuffleNetV2_mul_bkb_U0", "Parent" : "465"},
	{"ID" : "467", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1871", "Parent" : "420", "Child" : ["468"],
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
	{"ID" : "468", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.grp_MUL_DP_fu_1871.ShuffleNetV2_mul_bkb_U0", "Parent" : "467"},
	{"ID" : "469", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_14110.ShuffleNetV2_mux_Aem_U4", "Parent" : "420"},
	{"ID" : "470", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169", "Parent" : "0", "Child" : ["471", "473", "475", "477", "479", "481", "483", "485", "487", "489", "491", "493", "495", "496", "497"],
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
			{"Name" : "conv1_output_p_V_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_23", "Type" : "Memory", "Direction" : "I"},
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
	{"ID" : "471", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1822", "Parent" : "470", "Child" : ["472"],
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
	{"ID" : "472", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1822.ShuffleNetV2_mul_bkb_U0", "Parent" : "471"},
	{"ID" : "473", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1831", "Parent" : "470", "Child" : ["474"],
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
	{"ID" : "474", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1831.ShuffleNetV2_mul_bkb_U0", "Parent" : "473"},
	{"ID" : "475", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1840", "Parent" : "470", "Child" : ["476"],
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
	{"ID" : "476", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1840.ShuffleNetV2_mul_bkb_U0", "Parent" : "475"},
	{"ID" : "477", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1849", "Parent" : "470", "Child" : ["478"],
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
	{"ID" : "478", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1849.ShuffleNetV2_mul_bkb_U0", "Parent" : "477"},
	{"ID" : "479", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1858", "Parent" : "470", "Child" : ["480"],
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
	{"ID" : "480", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1858.ShuffleNetV2_mul_bkb_U0", "Parent" : "479"},
	{"ID" : "481", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1867", "Parent" : "470", "Child" : ["482"],
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
	{"ID" : "482", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1867.ShuffleNetV2_mul_bkb_U0", "Parent" : "481"},
	{"ID" : "483", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1876", "Parent" : "470", "Child" : ["484"],
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
	{"ID" : "484", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1876.ShuffleNetV2_mul_bkb_U0", "Parent" : "483"},
	{"ID" : "485", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1885", "Parent" : "470", "Child" : ["486"],
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
	{"ID" : "486", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1885.ShuffleNetV2_mul_bkb_U0", "Parent" : "485"},
	{"ID" : "487", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1894", "Parent" : "470", "Child" : ["488"],
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
	{"ID" : "488", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1894.ShuffleNetV2_mul_bkb_U0", "Parent" : "487"},
	{"ID" : "489", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1903", "Parent" : "470", "Child" : ["490"],
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
	{"ID" : "490", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1903.ShuffleNetV2_mul_bkb_U0", "Parent" : "489"},
	{"ID" : "491", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1912", "Parent" : "470", "Child" : ["492"],
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
	{"ID" : "492", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1912.ShuffleNetV2_mul_bkb_U0", "Parent" : "491"},
	{"ID" : "493", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1921", "Parent" : "470", "Child" : ["494"],
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
	{"ID" : "494", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.grp_MUL_DP_fu_1921.ShuffleNetV2_mul_bkb_U0", "Parent" : "493"},
	{"ID" : "495", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.ShuffleNetV2_mux_Aem_x_U34", "Parent" : "470"},
	{"ID" : "496", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.ShuffleNetV2_mux_Aem_x_U35", "Parent" : "470"},
	{"ID" : "497", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_14169.ShuffleNetV2_mux_Aem_x_U36", "Parent" : "470"},
	{"ID" : "498", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319", "Parent" : "0", "Child" : ["499", "501", "503", "505", "507", "509", "511", "513", "515", "517", "519", "521", "523"],
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
	{"ID" : "499", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1452", "Parent" : "498", "Child" : ["500"],
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
	{"ID" : "500", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1452.ShuffleNetV2_mul_bkb_U0", "Parent" : "499"},
	{"ID" : "501", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1462", "Parent" : "498", "Child" : ["502"],
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
	{"ID" : "502", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1462.ShuffleNetV2_mul_bkb_U0", "Parent" : "501"},
	{"ID" : "503", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1472", "Parent" : "498", "Child" : ["504"],
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
	{"ID" : "504", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1472.ShuffleNetV2_mul_bkb_U0", "Parent" : "503"},
	{"ID" : "505", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1482", "Parent" : "498", "Child" : ["506"],
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
	{"ID" : "506", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1482.ShuffleNetV2_mul_bkb_U0", "Parent" : "505"},
	{"ID" : "507", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1492", "Parent" : "498", "Child" : ["508"],
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
	{"ID" : "508", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1492.ShuffleNetV2_mul_bkb_U0", "Parent" : "507"},
	{"ID" : "509", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1502", "Parent" : "498", "Child" : ["510"],
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
	{"ID" : "510", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1502.ShuffleNetV2_mul_bkb_U0", "Parent" : "509"},
	{"ID" : "511", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1512", "Parent" : "498", "Child" : ["512"],
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
	{"ID" : "512", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1512.ShuffleNetV2_mul_bkb_U0", "Parent" : "511"},
	{"ID" : "513", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1522", "Parent" : "498", "Child" : ["514"],
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
	{"ID" : "514", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1522.ShuffleNetV2_mul_bkb_U0", "Parent" : "513"},
	{"ID" : "515", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1532", "Parent" : "498", "Child" : ["516"],
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
	{"ID" : "516", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1532.ShuffleNetV2_mul_bkb_U0", "Parent" : "515"},
	{"ID" : "517", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1542", "Parent" : "498", "Child" : ["518"],
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
	{"ID" : "518", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1542.ShuffleNetV2_mul_bkb_U0", "Parent" : "517"},
	{"ID" : "519", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1552", "Parent" : "498", "Child" : ["520"],
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
	{"ID" : "520", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1552.ShuffleNetV2_mul_bkb_U0", "Parent" : "519"},
	{"ID" : "521", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1562", "Parent" : "498", "Child" : ["522"],
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
	{"ID" : "522", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.grp_MUL_DP_fu_1562.ShuffleNetV2_mul_bkb_U0", "Parent" : "521"},
	{"ID" : "523", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_14319.ShuffleNetV2_mux_Aem_x_U138", "Parent" : "498"},
	{"ID" : "524", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423", "Parent" : "0", "Child" : ["525", "526", "527", "528", "529", "530", "531", "532", "533"],
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
	{"ID" : "525", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_0_0_0_U", "Parent" : "524"},
	{"ID" : "526", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_1_0_0_U", "Parent" : "524"},
	{"ID" : "527", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_2_0_0_U", "Parent" : "524"},
	{"ID" : "528", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_3_0_0_U", "Parent" : "524"},
	{"ID" : "529", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_4_0_0_U", "Parent" : "524"},
	{"ID" : "530", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_5_0_0_U", "Parent" : "524"},
	{"ID" : "531", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_6_0_0_U", "Parent" : "524"},
	{"ID" : "532", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.weight_temp_7_0_0_U", "Parent" : "524"},
	{"ID" : "533", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_14423.ShuffleNetV2_mux_Rg6_U792", "Parent" : "524"},
	{"ID" : "534", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_14450", "Parent" : "0", "Child" : ["535"],
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
	{"ID" : "535", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_14450.ShuffleNetV2_mux_CeG_x_U736", "Parent" : "534"},
	{"ID" : "536", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_14508", "Parent" : "0", "Child" : ["537"],
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
	{"ID" : "537", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_14508.ShuffleNetV2_mux_CeG_x_U597", "Parent" : "536"},
	{"ID" : "538", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_14566", "Parent" : "0", "Child" : ["539"],
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
	{"ID" : "539", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_14566.ShuffleNetV2_mux_CeG_x_U349", "Parent" : "538"},
	{"ID" : "540", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_14624", "Parent" : "0", "Child" : ["541"],
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
	{"ID" : "541", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_14624.ShuffleNetV2_mux_CeG_x_U488", "Parent" : "540"},
	{"ID" : "542", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_14682", "Parent" : "0", "Child" : ["543"],
		"CDFG" : "subconv_3x3_32_strid",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_7_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_8_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_9_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_10_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_11_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_12_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_13_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_14_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_15_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_16_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_17_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_18_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_19_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_20_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_21_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_22_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "input_23_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "543", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_14682.ShuffleNetV2_mux_Aem_x_U110", "Parent" : "542"},
	{"ID" : "544", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_14764", "Parent" : "0", "Child" : ["545"],
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
	{"ID" : "545", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_14764.ShuffleNetV2_mux_Aem_x_U241", "Parent" : "544"},
	{"ID" : "546", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_14822", "Parent" : "0", "Child" : ["547", "548"],
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
	{"ID" : "547", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_14822.ShuffleNetV2_uremHfu_x_U764", "Parent" : "546"},
	{"ID" : "548", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_14822.ShuffleNetV2_mux_IfE_x_U765", "Parent" : "546"},
	{"ID" : "549", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_14878", "Parent" : "0", "Child" : ["550", "551"],
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
	{"ID" : "550", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_14878.ShuffleNetV2_uremDeQ_x_U516", "Parent" : "549"},
	{"ID" : "551", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_14878.ShuffleNetV2_mux_Ee0_x_U517", "Parent" : "549"},
	{"ID" : "552", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_14934", "Parent" : "0",
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
	{"ID" : "553", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_14946", "Parent" : "0",
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
	{"ID" : "554", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_14958", "Parent" : "0", "Child" : ["555", "556"],
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
	{"ID" : "555", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_14958.ShuffleNetV2_uremHfu_U678", "Parent" : "554"},
	{"ID" : "556", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_14958.ShuffleNetV2_mux_IfE_U679", "Parent" : "554"},
	{"ID" : "557", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_15012", "Parent" : "0", "Child" : ["558", "559"],
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
	{"ID" : "558", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_15012.ShuffleNetV2_uremHfu_x_U709", "Parent" : "557"},
	{"ID" : "559", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_15012.ShuffleNetV2_mux_IfE_x_U710", "Parent" : "557"},
	{"ID" : "560", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_15066", "Parent" : "0", "Child" : ["561"],
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
	{"ID" : "561", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_15066.ShuffleNetV2_mux_Aem_x_U269", "Parent" : "560"},
	{"ID" : "562", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_15122", "Parent" : "0", "Child" : ["563", "564"],
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
	{"ID" : "563", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_15122.ShuffleNetV2_uremDeQ_U430", "Parent" : "562"},
	{"ID" : "564", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_15122.ShuffleNetV2_mux_Ee0_U431", "Parent" : "562"},
	{"ID" : "565", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_15176", "Parent" : "0", "Child" : ["566", "567"],
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
	{"ID" : "566", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_15176.ShuffleNetV2_uremDeQ_x_U461", "Parent" : "565"},
	{"ID" : "567", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_15176.ShuffleNetV2_mux_Ee0_x_U462", "Parent" : "565"},
	{"ID" : "568", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_15230", "Parent" : "0", "Child" : ["569"],
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
	{"ID" : "569", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_15230.ShuffleNetV2_mux_Aem_x_U189", "Parent" : "568"},
	{"ID" : "570", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_15284", "Parent" : "0", "Child" : ["571"],
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
	{"ID" : "571", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_15284.ShuffleNetV2_mux_Aem_x_U215", "Parent" : "570"},
	{"ID" : "572", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_15338", "Parent" : "0", "Child" : ["573"],
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
	{"ID" : "573", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_15338.ShuffleNetV2_mux_Rg6_x_U806", "Parent" : "572"},
	{"ID" : "574", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_15360", "Parent" : "0",
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
	{"ID" : "575", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U822", "Parent" : "0"},
	{"ID" : "576", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U823", "Parent" : "0"},
	{"ID" : "577", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U824", "Parent" : "0"},
	{"ID" : "578", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U825", "Parent" : "0"},
	{"ID" : "579", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U826", "Parent" : "0"},
	{"ID" : "580", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U827", "Parent" : "0"},
	{"ID" : "581", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U828", "Parent" : "0"},
	{"ID" : "582", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U829", "Parent" : "0"},
	{"ID" : "583", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U830", "Parent" : "0"},
	{"ID" : "584", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U831", "Parent" : "0"},
	{"ID" : "585", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U832", "Parent" : "0"},
	{"ID" : "586", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U833", "Parent" : "0"},
	{"ID" : "587", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U834", "Parent" : "0"},
	{"ID" : "588", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U835", "Parent" : "0"},
	{"ID" : "589", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U836", "Parent" : "0"},
	{"ID" : "590", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U837", "Parent" : "0"},
	{"ID" : "591", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U838", "Parent" : "0"},
	{"ID" : "592", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U839", "Parent" : "0"},
	{"ID" : "593", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfaY_U840", "Parent" : "0"},
	{"ID" : "594", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U841", "Parent" : "0"},
	{"ID" : "595", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U842", "Parent" : "0"},
	{"ID" : "596", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U843", "Parent" : "0"},
	{"ID" : "597", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U844", "Parent" : "0"},
	{"ID" : "598", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U845", "Parent" : "0"},
	{"ID" : "599", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U846", "Parent" : "0"},
	{"ID" : "600", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U847", "Parent" : "0"},
	{"ID" : "601", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U848", "Parent" : "0"},
	{"ID" : "602", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_uremfbY_U849", "Parent" : "0"},
	{"ID" : "603", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U850", "Parent" : "0"},
	{"ID" : "604", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U851", "Parent" : "0"},
	{"ID" : "605", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U852", "Parent" : "0"},
	{"ID" : "606", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U853", "Parent" : "0"},
	{"ID" : "607", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U854", "Parent" : "0"},
	{"ID" : "608", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U855", "Parent" : "0"},
	{"ID" : "609", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U856", "Parent" : "0"},
	{"ID" : "610", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U857", "Parent" : "0"},
	{"ID" : "611", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U858", "Parent" : "0"},
	{"ID" : "612", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U859", "Parent" : "0"},
	{"ID" : "613", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U860", "Parent" : "0"},
	{"ID" : "614", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U861", "Parent" : "0"},
	{"ID" : "615", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U862", "Parent" : "0"},
	{"ID" : "616", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U863", "Parent" : "0"},
	{"ID" : "617", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U864", "Parent" : "0"},
	{"ID" : "618", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U865", "Parent" : "0"},
	{"ID" : "619", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U866", "Parent" : "0"},
	{"ID" : "620", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U867", "Parent" : "0"},
	{"ID" : "621", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fcY_U868", "Parent" : "0"},
	{"ID" : "622", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U869", "Parent" : "0"},
	{"ID" : "623", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U870", "Parent" : "0"},
	{"ID" : "624", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U871", "Parent" : "0"},
	{"ID" : "625", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U872", "Parent" : "0"},
	{"ID" : "626", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U873", "Parent" : "0"},
	{"ID" : "627", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U874", "Parent" : "0"},
	{"ID" : "628", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U875", "Parent" : "0"},
	{"ID" : "629", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U876", "Parent" : "0"},
	{"ID" : "630", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mul_fdY_U877", "Parent" : "0"}]}


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
		conv1_output_p_V_0 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_12 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_13 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_14 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_15 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_16 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_17 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_18 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_19 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_20 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_9 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_21 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_10 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_22 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_11 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_23 {Type IO LastRead -1 FirstWrite -1}
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
	conv1_p {
		input_V {Type I LastRead 10 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		conv1_weight_V3 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		conv1_output_p_V_0 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_12 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_1 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_13 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_2 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_14 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_3 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_15 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_4 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_16 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_5 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_17 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_6 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_18 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_7 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_19 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_8 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_20 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_9 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_21 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_10 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_22 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_11 {Type IO LastRead 13 FirstWrite 5}
		conv1_output_p_V_23 {Type IO LastRead 13 FirstWrite 5}}
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
		conv1_output_p_V_12 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_13 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_14 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_15 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_16 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_17 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_18 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_19 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_20 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_21 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_22 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_23 {Type I LastRead 6 FirstWrite -1}
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
	subconv_3x3_8_stride_1 {
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
	subconv_3x3_32_strid {
		input_0_V {Type I LastRead 5 FirstWrite -1}
		input_1_V {Type I LastRead 5 FirstWrite -1}
		input_2_V {Type I LastRead 5 FirstWrite -1}
		input_3_V {Type I LastRead 5 FirstWrite -1}
		input_4_V {Type I LastRead 5 FirstWrite -1}
		input_5_V {Type I LastRead 5 FirstWrite -1}
		input_6_V {Type I LastRead 5 FirstWrite -1}
		input_7_V {Type I LastRead 5 FirstWrite -1}
		input_8_V {Type I LastRead 5 FirstWrite -1}
		input_9_V {Type I LastRead 5 FirstWrite -1}
		input_10_V {Type I LastRead 5 FirstWrite -1}
		input_11_V {Type I LastRead 5 FirstWrite -1}
		input_12_V {Type I LastRead 5 FirstWrite -1}
		input_13_V {Type I LastRead 5 FirstWrite -1}
		input_14_V {Type I LastRead 5 FirstWrite -1}
		input_15_V {Type I LastRead 5 FirstWrite -1}
		input_16_V {Type I LastRead 5 FirstWrite -1}
		input_17_V {Type I LastRead 5 FirstWrite -1}
		input_18_V {Type I LastRead 5 FirstWrite -1}
		input_19_V {Type I LastRead 5 FirstWrite -1}
		input_20_V {Type I LastRead 5 FirstWrite -1}
		input_21_V {Type I LastRead 5 FirstWrite -1}
		input_22_V {Type I LastRead 5 FirstWrite -1}
		input_23_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
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
	{"Name" : "Latency", "Min" : "12882464", "Max" : "12946592"}
	, {"Name" : "Interval", "Min" : "12882465", "Max" : "12946593"}
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
