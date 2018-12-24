set C_TypeInfoList {{ 
"ShuffleNetV2" : [[], {"return": [[], {"scalar": "int"}] }, [{"ExternC" : 0}], [ {"image": [[], {"array": [ {"array": ["0", [3,32,32]]}, [1]]}] }, {"conv1_weight": [[], {"array": [ {"array": ["0", [3,3,3]]}, [24]]}] }, {"shuffle_conv_3x3": [[], {"array": [ {"array": ["0", [1,3,3]]}, [1080]]}] }, {"shuffle_conv_1x1": [[], {"array": [ {"array": ["0", [24,1,1]]}, [5496]]}] }, {"conv_last_weight": [[], {"array": [ {"array": ["0", [192,1,1]]}, [512]]}] }, {"fc_weight": [[], {"array": [ {"array": ["0", [512]]}, [10]]}] }, {"bias": [[], {"array": ["0", [3618]]}] }, {"fc_output": [[], {"array": ["0", [1000]]}] }],["1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43"],""],
 "1": [ "weights_96_96_1x1", [[], {"array": ["0", [96,96,1,1]]}],""],
 "2": [ "weights_96_1_3x3", [[], {"array": ["0", [96,1,3,3]]}],""],
 "3": [ "weights_48_48_1x1", [[], {"array": ["0", [48,48,1,1]]}],""],
 "4": [ "weights_48_1_3x3", [[], {"array": ["0", [48,1,3,3]]}],""],
 "5": [ "weights_24_24_1x1", [[], {"array": ["0", [24,24,1,1]]}],""],
 "6": [ "weights_24_1_3x3", [[], {"array": ["0", [24,1,3,3]]}],""],
 "7": [ "shuffleunit2_2_output_p", [[], {"array": ["0", [1,192,6,6]]}],""],
 "8": [ "shuffleunit2_2_output", [[], {"array": ["0", [1,192,4,4]]}],""],
 "9": [ "shuffleunit2_1_output_p", [[], {"array": ["0", [1,192,6,6]]}],""],
 "10": [ "shuffleunit2_0_output_p", [[], {"array": ["0", [1,192,6,6]]}],""],
 "11": [ "shuffleunit1_7_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "12": [ "shuffleunit1_6_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "13": [ "shuffleunit1_5_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "14": [ "shuffleunit1_4_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "15": [ "shuffleunit1_3_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "16": [ "shuffleunit1_2_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "17": [ "shuffleunit1_1_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "18": [ "shuffleunit1_0_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "19": [ "shuffleunit0_2_output_p", [[], {"array": ["0", [1,48,18,18]]}],""],
 "20": [ "shuffleunit0_1_output_p", [[], {"array": ["0", [1,48,18,18]]}],""],
 "21": [ "shuffleunit0_0_output_p", [[], {"array": ["0", [1,48,18,18]]}],""],
 "22": [ "image_p", [[], {"array": ["0", [1,3,34,34]]}],""],
 "23": [ "fc_bias", [[], {"array": ["0", [10]]}],""],
 "24": [ "downsampleunit2_output_p", [[], {"array": ["0", [1,192,6,6]]}],""],
 "25": [ "downsampleunit1_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "26": [ "downsampleunit0_output_p", [[], {"array": ["0", [1,48,18,18]]}],""],
 "27": [ "conv_last_output", [[], {"array": ["0", [1,512,4,4]]}],""],
 "28": [ "conv_last_bias", [[], {"array": ["0", [512]]}],""],
 "29": [ "conv1_output_p", [[], {"array": ["0", [1,24,34,34]]}],""],
 "30": [ "conv1_bias", [[], {"array": ["0", [24]]}],""],
 "31": [ "buffer1_1_96_4x4_p", [[], {"array": ["0", [1,96,6,6]]}],""],
 "32": [ "buffer1_1_48_8x8_p", [[], {"array": ["0", [1,48,10,10]]}],""],
 "33": [ "buffer1_1_24_16x16_p", [[], {"array": ["0", [1,24,18,18]]}],""],
 "34": [ "buffer0_1_96_4x4_p", [[], {"array": ["0", [1,96,6,6]]}],""],
 "35": [ "buffer0_1_48_8x8_p", [[], {"array": ["0", [1,48,10,10]]}],""],
 "36": [ "buffer0_1_24_16x16_p", [[], {"array": ["0", [1,24,18,18]]}],""],
 "37": [ "bias_96", [[], {"array": ["0", [96]]}],""],
 "38": [ "bias_48", [[], {"array": ["0", [48]]}],""],
 "39": [ "bias_24", [[], {"array": ["0", [24]]}],""],
 "40": [ "avgpool_output", [[], {"array": ["0", [512]]}],""],
 "41": [ "ShuffleConvs_2_DownsampleUnit__conv1r_output_p", [[], {"array": ["0", [1,96,10,10]]}],""],
 "42": [ "ShuffleConvs_1_DownsampleUnit__conv1r_output_p", [[], {"array": ["0", [1,48,18,18]]}],""],
 "43": [ "ShuffleConvs_0_DownsampleUnit__conv1r_output_p", [[], {"array": ["0", [1,24,34,34]]}],""], 
"0": [ "FIX_8", {"typedef": [[[],"44"],""]}], 
"44": [ "ap_fixed<8, 2, 0, 0, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 8}}],[[], {"scalar": { "int": 2}}],[[], {"scalar": { "45": 0}}],[[], {"scalar": { "46": 0}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"45": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"46": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}]
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_6355"},
			{"State" : "ap_ST_fsm_state81", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368"},
			{"State" : "ap_ST_fsm_state125", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368"},
			{"State" : "ap_ST_fsm_state1263", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381"},
			{"State" : "ap_ST_fsm_state1319", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381"},
			{"State" : "ap_ST_fsm_state413", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394"},
			{"State" : "ap_ST_fsm_state469", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394"},
			{"State" : "ap_ST_fsm_state1405", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407"},
			{"State" : "ap_ST_fsm_state1494", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407"},
			{"State" : "ap_ST_fsm_state1583", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407"},
			{"State" : "ap_ST_fsm_state555", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state644", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state733", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state822", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state911", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state1000", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state1089", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state1178", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419"},
			{"State" : "ap_ST_fsm_state192", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431"},
			{"State" : "ap_ST_fsm_state263", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431"},
			{"State" : "ap_ST_fsm_state334", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431"},
			{"State" : "ap_ST_fsm_state1289", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1345", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1377", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1431", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1466", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1520", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1555", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1609", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443"},
			{"State" : "ap_ST_fsm_state1619", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_6455"},
			{"State" : "ap_ST_fsm_state1235", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_6468"},
			{"State" : "ap_ST_fsm_state385", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_6480"},
			{"State" : "ap_ST_fsm_state60", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_6492"},
			{"State" : "ap_ST_fsm_state439", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state495", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state527", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state581", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state616", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state670", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state705", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state759", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state794", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state848", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state883", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state937", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state972", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state1026", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state1061", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state1115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state1150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state1204", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504"},
			{"State" : "ap_ST_fsm_state101", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state145", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state171", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state213", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state242", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state283", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state313", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state354", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516"},
			{"State" : "ap_ST_fsm_state1623", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc_fu_6528"},
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_6542"},
			{"State" : "ap_ST_fsm_state288", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_6542"},
			{"State" : "ap_ST_fsm_state359", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_6542"},
			{"State" : "ap_ST_fsm_state1436", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_6554"},
			{"State" : "ap_ST_fsm_state1525", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_6554"},
			{"State" : "ap_ST_fsm_state1614", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_6554"},
			{"State" : "ap_ST_fsm_state586", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state675", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state764", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state853", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state942", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state1031", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state1120", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state1209", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_6566"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_6583"},
			{"State" : "ap_ST_fsm_state147", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_6591"},
			{"State" : "ap_ST_fsm_state1291", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_6599"},
			{"State" : "ap_ST_fsm_state1347", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_6607"},
			{"State" : "ap_ST_fsm_state441", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_6615"},
			{"State" : "ap_ST_fsm_state497", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_6623"},
			{"State" : "ap_ST_fsm_state1621", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_6631"}],
		"Port" : [
			{"Name" : "DATA_INPUT_OUTPUT", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_fc_fu_6528", "Port" : "output_V"}]},
			{"Name" : "DATA_OTHER_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "grp_conv_last_fu_6455", "Port" : "weight_V"},
					{"ID" : "63", "SubInstance" : "grp_fc_fu_6528", "Port" : "weight_V"},
					{"ID" : "49", "SubInstance" : "grp_conv1_p_fu_6355", "Port" : "weight_V"}]},
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
					{"ID" : "49", "SubInstance" : "grp_conv1_p_fu_6355", "Port" : "bias_V"}]},
			{"Name" : "conv_last_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "grp_conv_last_fu_6455", "Port" : "bias_V"}]},
			{"Name" : "fc_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_fc_fu_6528", "Port" : "bias_V"}]},
			{"Name" : "image_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "49", "SubInstance" : "grp_conv1_p_fu_6355", "Port" : "input_V"}]},
			{"Name" : "conv1_output_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368", "Port" : "input_V"},
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_6492", "Port" : "conv1_output_p_V"},
					{"ID" : "49", "SubInstance" : "grp_conv1_p_fu_6355", "Port" : "output_V"}]},
			{"Name" : "weights_24_24_1x1_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_6492", "Port" : "weight_V"},
					{"ID" : "62", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516", "Port" : "weight_V"}]},
			{"Name" : "bias_24_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431", "Port" : "bias_V"},
					{"ID" : "50", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368", "Port" : "bias_V"},
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_6492", "Port" : "bias_V"},
					{"ID" : "62", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "50", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368", "Port" : "input_V"},
					{"ID" : "60", "SubInstance" : "grp_subconv_1x1_32_p_fu_6492", "Port" : "ShuffleConvs_0_Downs"}]},
			{"Name" : "weights_24_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431", "Port" : "weight_V"},
					{"ID" : "50", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431", "Port" : "output_V"},
					{"ID" : "50", "SubInstance" : "grp_subconv_3x3_32_strid_fu_6368", "Port" : "output_V"},
					{"ID" : "64", "SubInstance" : "grp_shuffle_24_p_fu_6542", "Port" : "left_V"},
					{"ID" : "62", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516", "Port" : "input_V"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "55", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_6431", "Port" : "input_V"},
					{"ID" : "68", "SubInstance" : "grp_shuffle_24_r_p_fu_6591", "Port" : "right_V"},
					{"ID" : "64", "SubInstance" : "grp_shuffle_24_p_fu_6542", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "62", "SubInstance" : "grp_subconv_1x1_16_p_fu_6516", "Port" : "output_V"},
					{"ID" : "67", "SubInstance" : "grp_shuffle_24_l_p_fu_6583", "Port" : "left_V"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "68", "SubInstance" : "grp_shuffle_24_r_p_fu_6591", "Port" : "output_V"},
					{"ID" : "67", "SubInstance" : "grp_shuffle_24_l_p_fu_6583", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "grp_shuffle_24_p_fu_6542", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "64", "SubInstance" : "grp_shuffle_24_p_fu_6542", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_subconv_1x1_16p_p_fu_6480", "Port" : "shuffleunit0_2_outpu"},
					{"ID" : "52", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394", "Port" : "input_V"},
					{"ID" : "64", "SubInstance" : "grp_shuffle_24_p_fu_6542", "Port" : "output_V"}]},
			{"Name" : "weights_48_48_1x1_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504", "Port" : "weight_V"},
					{"ID" : "59", "SubInstance" : "grp_subconv_1x1_16p_p_fu_6480", "Port" : "weight_V"}]},
			{"Name" : "bias_48_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504", "Port" : "bias_V"},
					{"ID" : "54", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419", "Port" : "bias_V"},
					{"ID" : "59", "SubInstance" : "grp_subconv_1x1_16p_p_fu_6480", "Port" : "bias_V"},
					{"ID" : "52", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_subconv_1x1_16p_p_fu_6480", "Port" : "ShuffleConvs_1_Downs"},
					{"ID" : "52", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394", "Port" : "input_V"}]},
			{"Name" : "weights_48_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "54", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419", "Port" : "weight_V"},
					{"ID" : "52", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504", "Port" : "input_V"},
					{"ID" : "54", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419", "Port" : "output_V"},
					{"ID" : "52", "SubInstance" : "grp_subconv_3x3_16_strid_fu_6394", "Port" : "output_V"},
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "left_V"}]},
			{"Name" : "buffer1_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "61", "SubInstance" : "grp_subconv_1x1_8_p_fu_6504", "Port" : "output_V"},
					{"ID" : "54", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_6419", "Port" : "input_V"},
					{"ID" : "72", "SubInstance" : "grp_shuffle_48_r_p_fu_6623", "Port" : "right_V"},
					{"ID" : "71", "SubInstance" : "grp_shuffle_48_l_p_fu_6615", "Port" : "left_V"},
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "buffer1_1_48_8x8_p_V"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "72", "SubInstance" : "grp_shuffle_48_r_p_fu_6623", "Port" : "output_V"},
					{"ID" : "71", "SubInstance" : "grp_shuffle_48_l_p_fu_6615", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_3_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_4_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_5_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_6_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381", "Port" : "input_V"},
					{"ID" : "66", "SubInstance" : "grp_shuffle_48_p_fu_6566", "Port" : "output_V"},
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_8p_p_fu_6468", "Port" : "shuffleunit1_7_outpu"}]},
			{"Name" : "weights_96_96_1x1_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443", "Port" : "weight_V"},
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_8p_p_fu_6468", "Port" : "weight_V"}]},
			{"Name" : "bias_96_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381", "Port" : "bias_V"},
					{"ID" : "53", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407", "Port" : "bias_V"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443", "Port" : "bias_V"},
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_8p_p_fu_6468", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381", "Port" : "input_V"},
					{"ID" : "58", "SubInstance" : "grp_subconv_1x1_8p_p_fu_6468", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "weights_96_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381", "Port" : "weight_V"},
					{"ID" : "53", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "51", "SubInstance" : "grp_subconv_3x3_8_stride_fu_6381", "Port" : "output_V"},
					{"ID" : "53", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407", "Port" : "output_V"},
					{"ID" : "65", "SubInstance" : "grp_shuffle_96_p_fu_6554", "Port" : "left_V"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443", "Port" : "input_V"}]},
			{"Name" : "buffer1_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "53", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_6407", "Port" : "input_V"},
					{"ID" : "70", "SubInstance" : "grp_shuffle_96_r_p_fu_6607", "Port" : "right_V"},
					{"ID" : "65", "SubInstance" : "grp_shuffle_96_p_fu_6554", "Port" : "buffer1_1_96_4x4_p_V"},
					{"ID" : "56", "SubInstance" : "grp_subconv_1x1_4_p_fu_6443", "Port" : "output_V"},
					{"ID" : "69", "SubInstance" : "grp_shuffle_96_l_p_fu_6599", "Port" : "left_V"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_shuffle_96_r_p_fu_6607", "Port" : "output_V"},
					{"ID" : "69", "SubInstance" : "grp_shuffle_96_l_p_fu_6599", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_shuffle_96_p_fu_6554", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_shuffle_96_p_fu_6554", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "65", "SubInstance" : "grp_shuffle_96_p_fu_6554", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "grp_conv_last_fu_6455", "Port" : "input_V"}]},
			{"Name" : "conv_last_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "57", "SubInstance" : "grp_conv_last_fu_6455", "Port" : "output_V"},
					{"ID" : "73", "SubInstance" : "grp_avgpool_fu_6631", "Port" : "conv_last_output_V"}]},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "73", "SubInstance" : "grp_avgpool_fu_6631", "Port" : "output_V"},
					{"ID" : "63", "SubInstance" : "grp_fc_fu_6528", "Port" : "avgpool_output_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.image_p_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_p_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit0_outp_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_0_outpu_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_1_outpu_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_2_outpu_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit1_outp_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_0_outpu_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_1_outpu_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_2_outpu_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_3_outpu_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_4_outpu_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_5_outpu_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_6_outpu_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_7_outpu_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_V_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit2_outp_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_0_outpu_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_1_outpu_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_1_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_V_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_CTL_s_axi_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_INPUT_OUTPUT_m_axi_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_OTHER_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_p3X3_1X1_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_BIAS_m_axi_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_6355", "Parent" : "0",
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
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_6368", "Parent" : "0",
		"CDFG" : "subconv_3x3_32_strid",
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
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_6381", "Parent" : "0",
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
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_6394", "Parent" : "0",
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
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_6407", "Parent" : "0",
		"CDFG" : "subconv_3x3_4_no_rel",
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
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_6419", "Parent" : "0",
		"CDFG" : "subconv_3x3_8_no_rel",
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
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_6431", "Parent" : "0",
		"CDFG" : "subconv_3x3_16_no_re",
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
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_6443", "Parent" : "0",
		"CDFG" : "subconv_1x1_4_p",
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
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_6455", "Parent" : "0",
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
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_6468", "Parent" : "0",
		"CDFG" : "subconv_1x1_8p_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_6480", "Parent" : "0",
		"CDFG" : "subconv_1x1_16p_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_6492", "Parent" : "0",
		"CDFG" : "subconv_1x1_32_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_6504", "Parent" : "0",
		"CDFG" : "subconv_1x1_8_p",
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
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_6516", "Parent" : "0",
		"CDFG" : "subconv_1x1_16_p",
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
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_6528", "Parent" : "0",
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
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_6542", "Parent" : "0",
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
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_6554", "Parent" : "0",
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
			{"Name" : "buffer1_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_6566", "Parent" : "0",
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
			{"Name" : "buffer1_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_6583", "Parent" : "0",
		"CDFG" : "shuffle_24_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_6591", "Parent" : "0",
		"CDFG" : "shuffle_24_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_6599", "Parent" : "0",
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_6607", "Parent" : "0",
		"CDFG" : "shuffle_96_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_6615", "Parent" : "0",
		"CDFG" : "shuffle_48_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_6623", "Parent" : "0",
		"CDFG" : "shuffle_48_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "right_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_6631", "Parent" : "0",
		"CDFG" : "avgpool",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "conv_last_output_V", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		DATA_INPUT_OUTPUT {Type IO LastRead 34 FirstWrite 12}
		DATA_OTHER_WEIGHTS {Type I LastRead 15 FirstWrite -1}
		p3X3_1X1_WEIGHTS {Type I LastRead 335 FirstWrite -1}
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
		weights_24_24_1x1_V {Type IO LastRead -1 FirstWrite -1}
		bias_24_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_24_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		downsampleunit0_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_2_outpu {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V {Type IO LastRead -1 FirstWrite -1}
		bias_48_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_48_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_48_8x8_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V {Type IO LastRead -1 FirstWrite -1}
		downsampleunit1_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_3_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_4_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_5_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_6_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_7_outpu {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V {Type IO LastRead -1 FirstWrite -1}
		bias_96_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_96_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_96_4x4_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V {Type IO LastRead -1 FirstWrite -1}
		downsampleunit2_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu_1 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V {Type IO LastRead -1 FirstWrite -1}
		avgpool_output_V {Type IO LastRead -1 FirstWrite -1}}
	conv1_p {
		input_V {Type I LastRead 14 FirstWrite -1}
		weight_V {Type I LastRead 15 FirstWrite -1}
		conv1_weight_V3 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 7}}
	subconv_3x3_32_strid {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
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
	subconv_3x3_4_no_rel {
		input_V {Type I LastRead 7 FirstWrite -1}
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	subconv_3x3_8_no_rel {
		input_V {Type I LastRead 7 FirstWrite -1}
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	subconv_3x3_16_no_re {
		input_V {Type I LastRead 7 FirstWrite -1}
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	subconv_1x1_4_p {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 4 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 7}}
	conv_last {
		input_V {Type I LastRead 11 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		conv_last_weight_V9 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 11 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 14}}
	subconv_1x1_8p_p {
		weight_V {Type I LastRead 4 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		shuffleunit1_7_outpu {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs {Type O LastRead -1 FirstWrite 7}}
	subconv_1x1_16p_p {
		weight_V {Type I LastRead 4 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		shuffleunit0_2_outpu {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs {Type O LastRead -1 FirstWrite 7}}
	subconv_1x1_32_p {
		weight_V {Type I LastRead 4 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		conv1_output_p_V {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_0_Downs {Type O LastRead -1 FirstWrite 7}}
	subconv_1x1_8_p {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 4 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 7}}
	subconv_1x1_16_p {
		input_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 4 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 7}}
	fc {
		weight_V {Type I LastRead 10 FirstWrite -1}
		fc_weight_V11 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 9 FirstWrite -1}
		output_V {Type O LastRead 1 FirstWrite 12}
		fc_output_V15 {Type I LastRead 0 FirstWrite -1}
		avgpool_output_V {Type I LastRead 9 FirstWrite -1}}
	shuffle_24_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}
		buffer1_1_96_4x4_p_V {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}
		buffer1_1_48_8x8_p_V {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_l_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	shuffle_24_r_p {
		right_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	shuffle_96_l_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	shuffle_96_r_p {
		right_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	shuffle_48_l_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	shuffle_48_r_p {
		right_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 4}}
	avgpool {
		output_V {Type O LastRead -1 FirstWrite 3}
		conv_last_output_V {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "72119717", "Max" : "72119717"}
	, {"Name" : "Interval", "Min" : "72119718", "Max" : "72119718"}
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
