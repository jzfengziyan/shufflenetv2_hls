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
"46": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"45": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}]
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "137", "148", "151", "153", "155", "157", "159", "161", "163", "165", "167", "169", "171", "173", "174", "175", "177", "179", "181", "183", "185", "187", "189", "191", "193", "195"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_8392"},
			{"State" : "ap_ST_fsm_state1655", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_8419"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446"},
			{"State" : "ap_ST_fsm_state1319", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1376", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1409", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1464", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1500", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1555", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1591", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state1645", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500"},
			{"State" : "ap_ST_fsm_state395", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540"},
			{"State" : "ap_ST_fsm_state1264", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580"},
			{"State" : "ap_ST_fsm_state450", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state507", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state540", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state595", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state631", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state686", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state722", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state777", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state813", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state868", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state904", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state959", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state995", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state1050", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state1086", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state1141", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state1177", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state1232", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state148", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state248", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700"},
			{"State" : "ap_ST_fsm_state1437", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734"},
			{"State" : "ap_ST_fsm_state1528", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734"},
			{"State" : "ap_ST_fsm_state1619", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734"},
			{"State" : "ap_ST_fsm_state1292", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760"},
			{"State" : "ap_ST_fsm_state423", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786"},
			{"State" : "ap_ST_fsm_state568", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state659", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state750", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state841", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state932", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state1023", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state1114", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state1205", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838"},
			{"State" : "ap_ST_fsm_state269", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838"},
			{"State" : "ap_ST_fsm_state342", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838"},
			{"State" : "ap_ST_fsm_state1349", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_8864"},
			{"State" : "ap_ST_fsm_state480", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_8876"},
			{"State" : "ap_ST_fsm_state223", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_8888"},
			{"State" : "ap_ST_fsm_state295", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_8888"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_8888"},
			{"State" : "ap_ST_fsm_state600", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state691", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state782", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state873", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state964", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state1055", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state1146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state1237", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_8914"},
			{"State" : "ap_ST_fsm_state1469", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_8945"},
			{"State" : "ap_ST_fsm_state1560", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_8945"},
			{"State" : "ap_ST_fsm_state1650", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_8945"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_8971"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_8993"},
			{"State" : "ap_ST_fsm_state452", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_9015"},
			{"State" : "ap_ST_fsm_state509", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_9037"},
			{"State" : "ap_ST_fsm_state1321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_9059"},
			{"State" : "ap_ST_fsm_state1378", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_9081"},
			{"State" : "ap_ST_fsm_state1657", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_9103"},
			{"State" : "ap_ST_fsm_state1659", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc_fu_9125"}],
		"Port" : [
			{"Name" : "DATA_INPUT_OUTPUT", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "195", "SubInstance" : "grp_fc_fu_9125", "Port" : "output_V"}]},
			{"Name" : "DATA_OTHER_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "195", "SubInstance" : "grp_fc_fu_9125", "Port" : "weight_V"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "weight_V"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "weight_V"}]},
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
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "bias_V"}]},
			{"Name" : "conv_last_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "bias_V"}]},
			{"Name" : "fc_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "195", "SubInstance" : "grp_fc_fu_9125", "Port" : "bias_V"}]},
			{"Name" : "image_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "input_V"}]},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_0_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_0"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_0"}]},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_1_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_1"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_1"}]},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_2_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_2"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_2"}]},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_3_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_3"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_3"}]},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_4_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_4"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_4"}]},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_5_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_5"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_5"}]},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_6_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_6"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_6"}]},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_7_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "conv1_output_p_V_7"},
					{"ID" : "126", "SubInstance" : "grp_conv1_p_fu_8392", "Port" : "conv1_output_p_V_7"}]},
			{"Name" : "bias_24_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "bias_V"},
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "bias_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "bias_V"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_0_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_7"}]},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_1_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_6"}]},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_2_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_5"}]},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_3_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_4"}]},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_4_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_3"}]},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_5_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_2"}]},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_6_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs_1"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "input_7_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "ShuffleConvs_0_Downs"}]},
			{"Name" : "weights_24_24_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_0_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_0_V"}]},
			{"Name" : "weights_24_24_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_1_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_1_V"}]},
			{"Name" : "weights_24_24_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_2_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_2_V"}]},
			{"Name" : "weights_24_24_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_3_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_3_V"}]},
			{"Name" : "weights_24_24_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_4_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_4_V"}]},
			{"Name" : "weights_24_24_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_5_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_5_V"}]},
			{"Name" : "weights_24_24_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_6_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_6_V"}]},
			{"Name" : "weights_24_24_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "weight_7_V"},
					{"ID" : "148", "SubInstance" : "grp_subconv_1x1_32_p_fu_8446", "Port" : "weight_7_V"}]},
			{"Name" : "weights_24_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "weight_V"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "input_V"},
					{"ID" : "161", "SubInstance" : "grp_subconv_3x3_32_strid_fu_8700", "Port" : "output_V"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "output_V"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "left_V"}]},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_7"}]},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_6"}]},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_5"}]},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_4"}]},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_3"}]},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_2"}]},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p_1"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "159", "SubInstance" : "grp_subconv_1x1_16_p_fu_8660", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "171", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_8838", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "buffer1_1_24_16x16_p"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "181", "SubInstance" : "grp_shuffle_24_l_p_fu_8971", "Port" : "output_V"},
					{"ID" : "183", "SubInstance" : "grp_shuffle_24_r_p_fu_8993", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "input_V"},
					{"ID" : "174", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_8876", "Port" : "shuffleunit0_2_outpu"},
					{"ID" : "175", "SubInstance" : "grp_shuffle_24_p_fu_8888", "Port" : "output_V"}]},
			{"Name" : "bias_48_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "bias_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "bias_V"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "bias_V"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "bias_V"},
					{"ID" : "174", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_8876", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_7"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_7"}]},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_6"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_6"}]},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_5"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_5"}]},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_4"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_4"}]},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_3"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_3"}]},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_2"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_2"}]},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs_1"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs_1"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "ShuffleConvs_1_Downs"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "weights_48_48_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_0_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_0_V"}]},
			{"Name" : "weights_48_48_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_1_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_1_V"}]},
			{"Name" : "weights_48_48_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_2_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_2_V"}]},
			{"Name" : "weights_48_48_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_3_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_3_V"}]},
			{"Name" : "weights_48_48_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_4_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_4_V"}]},
			{"Name" : "weights_48_48_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_5_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_5_V"}]},
			{"Name" : "weights_48_48_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_6_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_6_V"}]},
			{"Name" : "weights_48_48_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "weight_7_V"},
					{"ID" : "153", "SubInstance" : "grp_subconv_1x1_16p_p_fu_8540", "Port" : "weight_7_V"}]},
			{"Name" : "weights_48_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "weight_V"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "weight_V"},
					{"ID" : "174", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_8876", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "input_V"},
					{"ID" : "167", "SubInstance" : "grp_subconv_3x3_16_strid_fu_8786", "Port" : "output_V"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "output_V"},
					{"ID" : "174", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_8876", "Port" : "output_V"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "left_V"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_8"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_1"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_2"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_3"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_4"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_5"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_6"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "157", "SubInstance" : "grp_subconv_1x1_8_p_fu_8620", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "169", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_8812", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "buffer1_1_48_8x8_p_V_7"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "187", "SubInstance" : "grp_shuffle_48_r_p_fu_9037", "Port" : "output_V"},
					{"ID" : "185", "SubInstance" : "grp_shuffle_48_l_p_fu_9015", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_3_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_4_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_5_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_6_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "input_V"},
					{"ID" : "173", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_8864", "Port" : "shuffleunit1_7_outpu"},
					{"ID" : "177", "SubInstance" : "grp_shuffle_48_p_fu_8914", "Port" : "output_V"}]},
			{"Name" : "bias_96_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "bias_V"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "bias_V"},
					{"ID" : "173", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_8864", "Port" : "bias_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "bias_V"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_7"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_7"}]},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_6"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_6"}]},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_5"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_5"}]},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_4"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_4"}]},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_3"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_3"}]},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_2"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_2"}]},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs_1"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs_1"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "ShuffleConvs_2_Downs"},
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "weights_96_96_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_0_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_0_V"}]},
			{"Name" : "weights_96_96_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_1_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_1_V"}]},
			{"Name" : "weights_96_96_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_2_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_2_V"}]},
			{"Name" : "weights_96_96_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_3_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_3_V"}]},
			{"Name" : "weights_96_96_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_4_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_4_V"}]},
			{"Name" : "weights_96_96_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_5_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_5_V"}]},
			{"Name" : "weights_96_96_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_6_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_6_V"}]},
			{"Name" : "weights_96_96_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_subconv_1x1_8p_p_fu_8580", "Port" : "weight_7_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "weight_7_V"}]},
			{"Name" : "weights_96_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "weight_V"},
					{"ID" : "173", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_8864", "Port" : "weight_V"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "165", "SubInstance" : "grp_subconv_3x3_8_stride_fu_8760", "Port" : "output_V"},
					{"ID" : "173", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_8864", "Port" : "output_V"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "input_V"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "left_V"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_8"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_1"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_2"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_3"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_4"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_5"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_6"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_4_p_fu_8500", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "163", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_8734", "Port" : "buffer1_1_96_4x4_p_V_7"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "189", "SubInstance" : "grp_shuffle_96_l_p_fu_9059", "Port" : "output_V"},
					{"ID" : "191", "SubInstance" : "grp_shuffle_96_r_p_fu_9081", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "179", "SubInstance" : "grp_shuffle_96_p_fu_8945", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "input_V"}]},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_0"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_0"}]},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_1"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_1"}]},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_2"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_2"}]},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_3"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_3"}]},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_4"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_4"}]},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_5"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_5"}]},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_6"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_6"}]},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "conv_last_output_V_7"},
					{"ID" : "137", "SubInstance" : "grp_conv_last_fu_8419", "Port" : "conv_last_output_V_7"}]},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "195", "SubInstance" : "grp_fc_fu_9125", "Port" : "avgpool_output_V"},
					{"ID" : "193", "SubInstance" : "grp_avgpool_fu_9103", "Port" : "output_V"}]}]},
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
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_24_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_7_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_6_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_5_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_4_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_3_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_1_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_24_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_24_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_7_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_6_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_5_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_4_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_3_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_2_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_1_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_24_16x16_p_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit0_outp_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_0_outpu_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_1_outpu_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_2_outpu_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_V_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_7_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_6_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_5_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_4_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_3_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_2_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_1_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_8_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_1_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_2_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_3_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_4_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_5_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_6_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_7_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit1_outp_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_0_outpu_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_1_outpu_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_2_outpu_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_3_outpu_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_4_outpu_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_5_outpu_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_6_outpu_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_7_outpu_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_V_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_7_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_6_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_5_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_4_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_3_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_2_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_1_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_8_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_1_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_2_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_3_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_4_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_5_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_6_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_7_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit2_outp_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_0_outpu_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_1_outpu_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_1_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_0_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_1_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_2_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_3_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_4_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_5_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_6_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_7_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_V_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_CTL_s_axi_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_INPUT_OUTPUT_m_axi_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_OTHER_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_p3X3_1X1_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_BIAS_m_axi_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392", "Parent" : "0", "Child" : ["127", "128", "129", "130", "131", "132", "133", "134", "135", "136"],
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
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_0_V_U", "Parent" : "126"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_1_V_U", "Parent" : "126"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_2_V_U", "Parent" : "126"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_3_V_U", "Parent" : "126"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_4_V_U", "Parent" : "126"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_5_V_U", "Parent" : "126"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_6_V_U", "Parent" : "126"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.weight_temp_7_V_U", "Parent" : "126"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.ShuffleNetV2_mux_jbC_U1", "Parent" : "126"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_8392.ShuffleNetV2_mux_jbC_U2", "Parent" : "126"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419", "Parent" : "0", "Child" : ["138", "139", "140", "141", "142", "143", "144", "145", "146", "147"],
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
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_0_0_0_U", "Parent" : "137"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_1_0_0_U", "Parent" : "137"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_2_0_0_U", "Parent" : "137"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_3_0_0_U", "Parent" : "137"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_4_0_0_U", "Parent" : "137"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_5_0_0_U", "Parent" : "137"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_6_0_0_U", "Parent" : "137"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.weight_temp_7_0_0_U", "Parent" : "137"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.ShuffleNetV2_mux_jbC_x_U311", "Parent" : "137"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_8419.ShuffleNetV2_mux_jbC_x_U312", "Parent" : "137"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_8446", "Parent" : "0", "Child" : ["149", "150"],
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_output_p_V_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_8446.ShuffleNetV2_mux_jbC_x_U16", "Parent" : "148"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_8446.ShuffleNetV2_mux_jbC_x_U17", "Parent" : "148"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_8500", "Parent" : "0", "Child" : ["152"],
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_8500.ShuffleNetV2_mux_jbC_x_U245", "Parent" : "151"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_8540", "Parent" : "0", "Child" : ["154"],
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_8540.ShuffleNetV2_mux_jbC_x_U117", "Parent" : "153"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_8580", "Parent" : "0", "Child" : ["156"],
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_8580.ShuffleNetV2_mux_jbC_x_U214", "Parent" : "155"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_8620", "Parent" : "0", "Child" : ["158"],
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_8620.ShuffleNetV2_mux_jbC_x_U148", "Parent" : "157"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_8660", "Parent" : "0", "Child" : ["160"],
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
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_8660.ShuffleNetV2_mux_jbC_x_U55", "Parent" : "159"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_8700", "Parent" : "0", "Child" : ["162"],
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
			{"Name" : "weight_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_8700.ShuffleNetV2_mux_jbC_x_U43", "Parent" : "161"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_8734", "Parent" : "0", "Child" : ["164"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_8734.ShuffleNetV2_mux_jbC_x_U288", "Parent" : "163"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_8760", "Parent" : "0", "Child" : ["166"],
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
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_8760.ShuffleNetV2_mux_jbC_x_U233", "Parent" : "165"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_8786", "Parent" : "0", "Child" : ["168"],
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
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_8786.ShuffleNetV2_mux_jbC_x_U136", "Parent" : "167"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_8812", "Parent" : "0", "Child" : ["170"],
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
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_8812.ShuffleNetV2_mux_jbC_x_U191", "Parent" : "169"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_8838", "Parent" : "0", "Child" : ["172"],
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
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_8838.ShuffleNetV2_mux_jbC_x_U94", "Parent" : "171"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_8864", "Parent" : "0",
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
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_8876", "Parent" : "0",
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
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_8888", "Parent" : "0", "Child" : ["176"],
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
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_8888.ShuffleNetV2_mux_jbC_x_U106", "Parent" : "175"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_8914", "Parent" : "0", "Child" : ["178"],
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
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_8914.ShuffleNetV2_mux_jbC_x_U203", "Parent" : "177"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_8945", "Parent" : "0", "Child" : ["180"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_8945.ShuffleNetV2_mux_jbC_x_U300", "Parent" : "179"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_8971", "Parent" : "0", "Child" : ["182"],
		"CDFG" : "shuffle_24_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_8971.ShuffleNetV2_mux_jbC_x_U74", "Parent" : "181"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_8993", "Parent" : "0", "Child" : ["184"],
		"CDFG" : "shuffle_24_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_8993.ShuffleNetV2_mux_jbC_x_U84", "Parent" : "183"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_9015", "Parent" : "0", "Child" : ["186"],
		"CDFG" : "shuffle_48_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "186", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_9015.ShuffleNetV2_mux_jbC_x_U167", "Parent" : "185"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_9037", "Parent" : "0", "Child" : ["188"],
		"CDFG" : "shuffle_48_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_9037.ShuffleNetV2_mux_jbC_x_U181", "Parent" : "187"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_9059", "Parent" : "0", "Child" : ["190"],
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "190", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_9059.ShuffleNetV2_mux_jbC_x_U264", "Parent" : "189"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_9081", "Parent" : "0", "Child" : ["192"],
		"CDFG" : "shuffle_96_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "192", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_9081.ShuffleNetV2_mux_jbC_x_U278", "Parent" : "191"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_9103", "Parent" : "0", "Child" : ["194"],
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
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_9103.ShuffleNetV2_mux_jbC_x_U326", "Parent" : "193"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_9125", "Parent" : "0",
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
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		DATA_INPUT_OUTPUT {Type IO LastRead 34 FirstWrite 12}
		DATA_OTHER_WEIGHTS {Type I LastRead 12 FirstWrite -1}
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
		conv1_output_p_V_0 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		conv1_output_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		bias_24_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_s {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weights_24_24_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weights_24_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_24_16x16_p {Type IO LastRead -1 FirstWrite -1}
		downsampleunit0_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_2_outpu {Type IO LastRead -1 FirstWrite -1}
		bias_48_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_s {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weights_48_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_48_8x8_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		downsampleunit1_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_3_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_4_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_5_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_6_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_7_outpu {Type IO LastRead -1 FirstWrite -1}
		bias_96_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_s {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_1 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_2 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_3 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_4 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_5 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_6 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_7 {Type IO LastRead -1 FirstWrite -1}
		weights_96_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_96_4x4_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		downsampleunit2_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu_1 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_0 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_1 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_2 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_3 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_4 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_5 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_6 {Type IO LastRead -1 FirstWrite -1}
		conv_last_output_V_7 {Type IO LastRead -1 FirstWrite -1}
		avgpool_output_V {Type IO LastRead -1 FirstWrite -1}}
	conv1_p {
		input_V {Type I LastRead 8 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		conv1_weight_V3 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_0 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_1 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_2 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_3 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_4 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_5 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_6 {Type IO LastRead 9 FirstWrite 8}
		conv1_output_p_V_7 {Type IO LastRead 9 FirstWrite 8}}
	conv_last {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_V {Type I LastRead 10 FirstWrite -1}
		conv_last_weight_V9 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 6 FirstWrite -1}
		conv_last_output_V_0 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_1 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_2 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_3 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_4 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_5 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_6 {Type IO LastRead 8 FirstWrite 8}
		conv_last_output_V_7 {Type IO LastRead 8 FirstWrite 8}}
	subconv_1x1_32_p {
		weight_0_V {Type I LastRead 7 FirstWrite -1}
		weight_1_V {Type I LastRead 7 FirstWrite -1}
		weight_2_V {Type I LastRead 7 FirstWrite -1}
		weight_3_V {Type I LastRead 7 FirstWrite -1}
		weight_4_V {Type I LastRead 7 FirstWrite -1}
		weight_5_V {Type I LastRead 7 FirstWrite -1}
		weight_6_V {Type I LastRead 7 FirstWrite -1}
		weight_7_V {Type I LastRead 7 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		conv1_output_p_V_0 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_1 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_2 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_3 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_4 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_5 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_6 {Type I LastRead 6 FirstWrite -1}
		conv1_output_p_V_7 {Type I LastRead 6 FirstWrite -1}
		ShuffleConvs_0_Downs_7 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs_6 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs_5 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs_4 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs_3 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs_2 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs_1 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_0_Downs {Type IO LastRead 7 FirstWrite 3}}
	subconv_1x1_4_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 6 FirstWrite -1}
		weight_1_V {Type I LastRead 6 FirstWrite -1}
		weight_2_V {Type I LastRead 6 FirstWrite -1}
		weight_3_V {Type I LastRead 6 FirstWrite -1}
		weight_4_V {Type I LastRead 6 FirstWrite -1}
		weight_5_V {Type I LastRead 6 FirstWrite -1}
		weight_6_V {Type I LastRead 6 FirstWrite -1}
		weight_7_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead 7 FirstWrite 3}}
	subconv_1x1_16p_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 6 FirstWrite -1}
		weight_1_V {Type I LastRead 6 FirstWrite -1}
		weight_2_V {Type I LastRead 6 FirstWrite -1}
		weight_3_V {Type I LastRead 6 FirstWrite -1}
		weight_4_V {Type I LastRead 6 FirstWrite -1}
		weight_5_V {Type I LastRead 6 FirstWrite -1}
		weight_6_V {Type I LastRead 6 FirstWrite -1}
		weight_7_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs_6 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs_5 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs_4 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs_3 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs_2 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs_1 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_1_Downs {Type IO LastRead 7 FirstWrite 3}}
	subconv_1x1_8p_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 6 FirstWrite -1}
		weight_1_V {Type I LastRead 6 FirstWrite -1}
		weight_2_V {Type I LastRead 6 FirstWrite -1}
		weight_3_V {Type I LastRead 6 FirstWrite -1}
		weight_4_V {Type I LastRead 6 FirstWrite -1}
		weight_5_V {Type I LastRead 6 FirstWrite -1}
		weight_6_V {Type I LastRead 6 FirstWrite -1}
		weight_7_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs_6 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs_5 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs_4 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs_3 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs_2 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs_1 {Type IO LastRead 7 FirstWrite 3}
		ShuffleConvs_2_Downs {Type IO LastRead 7 FirstWrite 3}}
	subconv_1x1_8_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 6 FirstWrite -1}
		weight_1_V {Type I LastRead 6 FirstWrite -1}
		weight_2_V {Type I LastRead 6 FirstWrite -1}
		weight_3_V {Type I LastRead 6 FirstWrite -1}
		weight_4_V {Type I LastRead 6 FirstWrite -1}
		weight_5_V {Type I LastRead 6 FirstWrite -1}
		weight_6_V {Type I LastRead 6 FirstWrite -1}
		weight_7_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_1 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_2 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_3 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_4 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_5 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_6 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_48_8x8_p_V_7 {Type IO LastRead 7 FirstWrite 3}}
	subconv_1x1_16_p {
		input_V {Type I LastRead 6 FirstWrite -1}
		weight_0_V {Type I LastRead 7 FirstWrite -1}
		weight_1_V {Type I LastRead 7 FirstWrite -1}
		weight_2_V {Type I LastRead 7 FirstWrite -1}
		weight_3_V {Type I LastRead 7 FirstWrite -1}
		weight_4_V {Type I LastRead 7 FirstWrite -1}
		weight_5_V {Type I LastRead 7 FirstWrite -1}
		weight_6_V {Type I LastRead 7 FirstWrite -1}
		weight_7_V {Type I LastRead 7 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_24_16x16_p_7 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p_6 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p_5 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p_4 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p_3 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p_2 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p_1 {Type IO LastRead 7 FirstWrite 3}
		buffer1_1_24_16x16_p {Type IO LastRead 7 FirstWrite 3}}
	subconv_3x3_32_strid {
		input_0_V {Type I LastRead 5 FirstWrite -1}
		input_1_V {Type I LastRead 5 FirstWrite -1}
		input_2_V {Type I LastRead 5 FirstWrite -1}
		input_3_V {Type I LastRead 5 FirstWrite -1}
		input_4_V {Type I LastRead 5 FirstWrite -1}
		input_5_V {Type I LastRead 5 FirstWrite -1}
		input_6_V {Type I LastRead 5 FirstWrite -1}
		input_7_V {Type I LastRead 5 FirstWrite -1}
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}}
	subconv_3x3_4_no_rel {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 7 FirstWrite -1}}
	subconv_3x3_8_stride {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		ShuffleConvs_2_Downs_7 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_16_strid {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		ShuffleConvs_1_Downs_7 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_8_no_rel {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 7 FirstWrite -1}}
	subconv_3x3_16_no_re {
		weight_V {Type I LastRead 6 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		buffer1_1_24_16x16_p_7 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 7 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 7 FirstWrite -1}}
	subconv_3x3_8_stride_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		shuffleunit1_7_outpu {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_16_strid_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 6}
		shuffleunit0_2_outpu {Type I LastRead 5 FirstWrite -1}}
	shuffle_24_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_24_r_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_24_16x16_p_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_24_16x16_p {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_r_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_r_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "15428600", "Max" : "15492728"}
	, {"Name" : "Interval", "Min" : "15428601", "Max" : "15492729"}
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
