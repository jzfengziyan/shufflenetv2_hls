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
"44": [ "ap_int<8>", {"hls_type": {"ap_int": [[[[], {"scalar": { "int": 8}}]],""]}}]
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205", "206", "207", "208", "209", "210", "211", "212", "213", "214", "215", "216", "217", "218", "219", "220", "221", "222", "223", "224", "225", "226", "227", "228", "229", "230", "231", "232", "233", "234", "235", "236", "237", "238", "239", "240", "241", "242", "243", "244", "245", "246", "247", "248", "249", "250", "251", "252", "253", "254", "255", "256", "257", "258", "259", "260", "261", "262", "263", "264", "265", "266", "267", "268", "269", "270", "271", "272", "273", "274", "275", "276", "277", "278", "279", "280", "281", "282", "283", "284", "285", "286", "287", "288", "289", "290", "291", "292", "293", "294", "295", "296", "297", "298", "299", "300", "301", "302", "303", "304", "305", "306", "307", "308", "309", "310", "311", "312", "313", "314", "315", "316", "317", "318", "319", "320", "321", "322", "323", "324", "325", "326", "327", "328", "329", "330", "331", "332", "333", "334", "335", "336", "337", "338", "339", "340", "341", "342", "343", "344", "345", "346", "347", "348", "349", "350", "351", "352", "353", "354", "355", "356", "357", "358", "359", "360", "361", "362", "363", "364", "365", "366", "367", "368", "369", "370", "371", "372", "373", "374", "375", "376", "377", "378", "379", "380", "381", "382", "383", "384", "385", "386", "387", "388", "389", "390", "391", "392", "393", "394", "395", "396", "397", "398", "399", "400", "401", "402", "403", "404", "405", "406", "407", "408", "409", "410", "411", "412", "413", "414", "415", "416", "417", "418", "419", "420", "421", "422", "423", "424", "425", "426", "427", "428", "429", "430", "431", "432", "433", "434", "435", "436", "437", "438", "439", "440", "441", "442", "443", "444", "445", "446", "447", "448", "449", "450", "451", "452", "453", "454", "455", "456", "457", "458", "459", "460", "461", "462", "463", "464", "465", "466", "467", "468", "469", "470", "471", "472", "473", "474", "475", "476", "477", "478", "479", "480", "481", "482", "483", "484", "485", "486", "487", "488", "489", "490", "491", "492", "493", "494", "495", "496", "497", "498", "499", "500", "501", "502", "503", "504", "505", "506", "507", "508", "509", "510", "511", "512", "513", "514", "515", "516", "517", "518", "519", "520", "521", "522", "523", "524", "525", "526", "527", "528", "529", "530", "531", "532", "533", "534", "535", "536", "537", "538", "539", "540", "541", "542", "543", "544", "545", "546", "547", "548", "549", "550", "551", "601", "651", "677", "691", "717", "743", "761", "764", "767", "770", "772", "774", "776", "779", "782", "784", "787", "790", "792", "794", "796", "798", "800", "802", "804", "806", "808"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state1319", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1376", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1409", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1464", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1500", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1555", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1591", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state1645", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130"},
			{"State" : "ap_ST_fsm_state450", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state507", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state540", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state595", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state631", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state686", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state722", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state777", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state813", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state868", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state904", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state959", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state995", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state1050", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state1086", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state1141", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state1177", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state1232", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522"},
			{"State" : "ap_ST_fsm_state1264", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722"},
			{"State" : "ap_ST_fsm_state395", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114"},
			{"State" : "ap_ST_fsm_state61", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state148", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state175", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state218", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state248", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state290", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state363", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418"},
			{"State" : "ap_ST_fsm_state1655", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_23522"},
			{"State" : "ap_ST_fsm_state1292", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549"},
			{"State" : "ap_ST_fsm_state1437", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751"},
			{"State" : "ap_ST_fsm_state1528", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751"},
			{"State" : "ap_ST_fsm_state1619", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751"},
			{"State" : "ap_ST_fsm_state40", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_p_fu_23953"},
			{"State" : "ap_ST_fsm_state1469", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_23966"},
			{"State" : "ap_ST_fsm_state1560", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_23966"},
			{"State" : "ap_ST_fsm_state1650", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_p_fu_23966"},
			{"State" : "ap_ST_fsm_state1321", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_l_p_fu_24168"},
			{"State" : "ap_ST_fsm_state1378", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_96_r_p_fu_24366"},
			{"State" : "ap_ST_fsm_state423", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564"},
			{"State" : "ap_ST_fsm_state568", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state659", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state750", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state841", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state932", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state1023", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state1114", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state1205", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670"},
			{"State" : "ap_ST_fsm_state600", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state691", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state782", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state873", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state964", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state1055", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state1146", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state1237", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_p_fu_24776"},
			{"State" : "ap_ST_fsm_state82", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887"},
			{"State" : "ap_ST_fsm_state196", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945"},
			{"State" : "ap_ST_fsm_state269", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945"},
			{"State" : "ap_ST_fsm_state342", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945"},
			{"State" : "ap_ST_fsm_state452", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_l_p_fu_25003"},
			{"State" : "ap_ST_fsm_state509", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_48_r_p_fu_25105"},
			{"State" : "ap_ST_fsm_state223", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_25207"},
			{"State" : "ap_ST_fsm_state295", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_25207"},
			{"State" : "ap_ST_fsm_state368", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_p_fu_25207"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_l_p_fu_25265"},
			{"State" : "ap_ST_fsm_state150", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_24_r_p_fu_25319"},
			{"State" : "ap_ST_fsm_state127", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_25373"},
			{"State" : "ap_ST_fsm_state1349", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_25385"},
			{"State" : "ap_ST_fsm_state480", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_25397"},
			{"State" : "ap_ST_fsm_state1661", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_fc_fu_25409"}],
		"Port" : [
			{"Name" : "DATA_INPUT_OUTPUT", "Type" : "MAXI", "Direction" : "IO",
				"BlockSignal" : [
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_AR", "Type" : "RtlSignal"},
					{"Name" : "DATA_INPUT_OUTPUT_blk_n_R", "Type" : "RtlSignal"}],
				"SubConnect" : [
					{"ID" : "806", "SubInstance" : "grp_fc_fu_25409", "Port" : "output_V"}]},
			{"Name" : "DATA_OTHER_WEIGHTS", "Type" : "MAXI", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "weight_V"},
					{"ID" : "767", "SubInstance" : "grp_conv1_p_fu_23953", "Port" : "weight_V"},
					{"ID" : "806", "SubInstance" : "grp_fc_fu_25409", "Port" : "weight_V"}]},
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
					{"ID" : "767", "SubInstance" : "grp_conv1_p_fu_23953", "Port" : "bias_V"}]},
			{"Name" : "conv_last_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "bias_V"}]},
			{"Name" : "fc_bias_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "806", "SubInstance" : "grp_fc_fu_25409", "Port" : "bias_V"}]},
			{"Name" : "image_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "767", "SubInstance" : "grp_conv1_p_fu_23953", "Port" : "input_V"}]},
			{"Name" : "conv1_output_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "767", "SubInstance" : "grp_conv1_p_fu_23953", "Port" : "output_V"},
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "input_V"},
					{"ID" : "800", "SubInstance" : "grp_subconv_3x3_32_strid_fu_25373", "Port" : "conv1_output_p_V"}]},
			{"Name" : "bias_24_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "bias_V"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "bias_V"},
					{"ID" : "800", "SubInstance" : "grp_subconv_3x3_32_strid_fu_25373", "Port" : "bias_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "bias_V"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_0_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_23"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_23"}]},
			{"Name" : "ShuffleConvs_0_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_19"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_19"}]},
			{"Name" : "ShuffleConvs_0_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_22"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_22"}]},
			{"Name" : "ShuffleConvs_0_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_18"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_18"}]},
			{"Name" : "ShuffleConvs_0_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_11"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_11"}]},
			{"Name" : "ShuffleConvs_0_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_17"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_17"}]},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_6"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_6"}]},
			{"Name" : "ShuffleConvs_0_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_16"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_16"}]},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_5"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_5"}]},
			{"Name" : "ShuffleConvs_0_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_15"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_15"}]},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_4"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_4"}]},
			{"Name" : "ShuffleConvs_0_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_14"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_14"}]},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_3"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_3"}]},
			{"Name" : "ShuffleConvs_0_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_13"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_13"}]},
			{"Name" : "ShuffleConvs_0_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_2"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_2"}]},
			{"Name" : "ShuffleConvs_0_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_12"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_12"}]},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_1"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_1"}]},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_10"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_10"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs"}]},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_9"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_9"}]},
			{"Name" : "ShuffleConvs_0_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_21"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_21"}]},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_8"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_8"}]},
			{"Name" : "ShuffleConvs_0_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_20"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_20"}]},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "ShuffleConvs_0_Downs_7"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "ShuffleConvs_0_Downs_7"}]},
			{"Name" : "weights_24_24_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_0_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_0_V"}]},
			{"Name" : "weights_24_24_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_1_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_1_V"}]},
			{"Name" : "weights_24_24_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_2_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_2_V"}]},
			{"Name" : "weights_24_24_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_3_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_3_V"}]},
			{"Name" : "weights_24_24_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_4_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_4_V"}]},
			{"Name" : "weights_24_24_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_5_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_5_V"}]},
			{"Name" : "weights_24_24_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_6_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_6_V"}]},
			{"Name" : "weights_24_24_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_7_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_7_V"}]},
			{"Name" : "weights_24_24_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_8_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_8_V"}]},
			{"Name" : "weights_24_24_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_9_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_9_V"}]},
			{"Name" : "weights_24_24_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_10_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_10_V"}]},
			{"Name" : "weights_24_24_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_11_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_11_V"}]},
			{"Name" : "weights_24_24_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_12_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_12_V"}]},
			{"Name" : "weights_24_24_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_13_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_13_V"}]},
			{"Name" : "weights_24_24_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_14_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_14_V"}]},
			{"Name" : "weights_24_24_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_15_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_15_V"}]},
			{"Name" : "weights_24_24_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_16_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_16_V"}]},
			{"Name" : "weights_24_24_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_17_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_17_V"}]},
			{"Name" : "weights_24_24_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_18_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_18_V"}]},
			{"Name" : "weights_24_24_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_19_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_19_V"}]},
			{"Name" : "weights_24_24_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_20_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_20_V"}]},
			{"Name" : "weights_24_24_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_21_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_21_V"}]},
			{"Name" : "weights_24_24_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_22_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_22_V"}]},
			{"Name" : "weights_24_24_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "691", "SubInstance" : "grp_subconv_1x1_32_p_fu_23314", "Port" : "weight_23_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "weight_23_V"}]},
			{"Name" : "weights_24_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "weight_V"},
					{"ID" : "800", "SubInstance" : "grp_subconv_3x3_32_strid_fu_25373", "Port" : "weight_V"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "left_V"},
					{"ID" : "784", "SubInstance" : "grp_subconv_3x3_32_strid_1_fu_24887", "Port" : "output_V"},
					{"ID" : "800", "SubInstance" : "grp_subconv_3x3_32_strid_fu_25373", "Port" : "output_V"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "input_V"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_24_16x16_p_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_23"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_23"}]},
			{"Name" : "buffer1_1_24_16x16_p_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_19"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_19"}]},
			{"Name" : "buffer1_1_24_16x16_p_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_22"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_22"}]},
			{"Name" : "buffer1_1_24_16x16_p_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_18"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_18"}]},
			{"Name" : "buffer1_1_24_16x16_p_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_11"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_11"}]},
			{"Name" : "buffer1_1_24_16x16_p_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_17"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_17"}]},
			{"Name" : "buffer1_1_24_16x16_p_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_6"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_6"}]},
			{"Name" : "buffer1_1_24_16x16_p_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_16"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_16"}]},
			{"Name" : "buffer1_1_24_16x16_p_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_5"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_5"}]},
			{"Name" : "buffer1_1_24_16x16_p_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_15"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_15"}]},
			{"Name" : "buffer1_1_24_16x16_p_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_4"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_4"}]},
			{"Name" : "buffer1_1_24_16x16_p_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_14"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_14"}]},
			{"Name" : "buffer1_1_24_16x16_p_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_3"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_3"}]},
			{"Name" : "buffer1_1_24_16x16_p_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_13"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_13"}]},
			{"Name" : "buffer1_1_24_16x16_p_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_2"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_2"}]},
			{"Name" : "buffer1_1_24_16x16_p_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_12"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_12"}]},
			{"Name" : "buffer1_1_24_16x16_p_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_1"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_1"}]},
			{"Name" : "buffer1_1_24_16x16_p_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_10"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_10"}]},
			{"Name" : "buffer1_1_24_16x16_p", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p"}]},
			{"Name" : "buffer1_1_24_16x16_p_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_9"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_9"}]},
			{"Name" : "buffer1_1_24_16x16_p_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_21"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_21"}]},
			{"Name" : "buffer1_1_24_16x16_p_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_8"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_8"}]},
			{"Name" : "buffer1_1_24_16x16_p_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_20"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_20"}]},
			{"Name" : "buffer1_1_24_16x16_p_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "717", "SubInstance" : "grp_subconv_1x1_16_p_fu_23418", "Port" : "buffer1_1_24_16x16_p_7"},
					{"ID" : "787", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_24945", "Port" : "buffer1_1_24_16x16_p_7"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "798", "SubInstance" : "grp_shuffle_24_r_p_fu_25319", "Port" : "output_V"},
					{"ID" : "796", "SubInstance" : "grp_shuffle_24_l_p_fu_25265", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "output_V"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "794", "SubInstance" : "grp_shuffle_24_p_fu_25207", "Port" : "output_V"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "input_V"},
					{"ID" : "804", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_25397", "Port" : "shuffleunit0_2_outpu"}]},
			{"Name" : "bias_48_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "bias_V"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "bias_V"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "bias_V"},
					{"ID" : "804", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_25397", "Port" : "bias_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_1_Downs_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_47"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_47"}]},
			{"Name" : "ShuffleConvs_1_Downs_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_30"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_30"}]},
			{"Name" : "ShuffleConvs_1_Downs_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_46"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_46"}]},
			{"Name" : "ShuffleConvs_1_Downs_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_29"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_29"}]},
			{"Name" : "ShuffleConvs_1_Downs_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_35"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_35"}]},
			{"Name" : "ShuffleConvs_1_Downs_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_28"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_28"}]},
			{"Name" : "ShuffleConvs_1_Downs_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_24"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_24"}]},
			{"Name" : "ShuffleConvs_1_Downs_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_27"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_27"}]},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_13"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_13"}]},
			{"Name" : "ShuffleConvs_1_Downs_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_26"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_26"}]},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_4"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_4"}]},
			{"Name" : "ShuffleConvs_1_Downs_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_25"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_25"}]},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_3"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_3"}]},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_23"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_23"}]},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_2"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_2"}]},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_22"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_22"}]},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_1"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_1"}]},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_21"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_21"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs"}]},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_20"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_20"}]},
			{"Name" : "ShuffleConvs_1_Downs_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_45"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_45"}]},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_19"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_19"}]},
			{"Name" : "ShuffleConvs_1_Downs_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_44"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_44"}]},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_18"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_18"}]},
			{"Name" : "ShuffleConvs_1_Downs_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_43"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_43"}]},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_17"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_17"}]},
			{"Name" : "ShuffleConvs_1_Downs_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_42"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_42"}]},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_16"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_16"}]},
			{"Name" : "ShuffleConvs_1_Downs_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_41"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_41"}]},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_15"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_15"}]},
			{"Name" : "ShuffleConvs_1_Downs_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_40"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_40"}]},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_14"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_14"}]},
			{"Name" : "ShuffleConvs_1_Downs_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_39"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_39"}]},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_12"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_12"}]},
			{"Name" : "ShuffleConvs_1_Downs_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_38"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_38"}]},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_11"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_11"}]},
			{"Name" : "ShuffleConvs_1_Downs_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_37"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_37"}]},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_10"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_10"}]},
			{"Name" : "ShuffleConvs_1_Downs_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_36"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_36"}]},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_9"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_9"}]},
			{"Name" : "ShuffleConvs_1_Downs_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_34"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_34"}]},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_8"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_8"}]},
			{"Name" : "ShuffleConvs_1_Downs_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_33"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_33"}]},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_7"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_7"}]},
			{"Name" : "ShuffleConvs_1_Downs_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_32"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_32"}]},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_6"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_6"}]},
			{"Name" : "ShuffleConvs_1_Downs_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_31"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_31"}]},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "ShuffleConvs_1_Downs_5"},
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "ShuffleConvs_1_Downs_5"}]},
			{"Name" : "weights_48_48_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_0_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_0_V"}]},
			{"Name" : "weights_48_48_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_1_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_1_V"}]},
			{"Name" : "weights_48_48_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_2_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_2_V"}]},
			{"Name" : "weights_48_48_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_3_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_3_V"}]},
			{"Name" : "weights_48_48_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_4_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_4_V"}]},
			{"Name" : "weights_48_48_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_5_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_5_V"}]},
			{"Name" : "weights_48_48_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_6_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_6_V"}]},
			{"Name" : "weights_48_48_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_7_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_7_V"}]},
			{"Name" : "weights_48_48_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_8_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_8_V"}]},
			{"Name" : "weights_48_48_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_9_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_9_V"}]},
			{"Name" : "weights_48_48_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_10_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_10_V"}]},
			{"Name" : "weights_48_48_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_11_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_11_V"}]},
			{"Name" : "weights_48_48_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_12_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_12_V"}]},
			{"Name" : "weights_48_48_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_13_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_13_V"}]},
			{"Name" : "weights_48_48_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_14_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_14_V"}]},
			{"Name" : "weights_48_48_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_15_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_15_V"}]},
			{"Name" : "weights_48_48_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_16_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_16_V"}]},
			{"Name" : "weights_48_48_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_17_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_17_V"}]},
			{"Name" : "weights_48_48_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_18_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_18_V"}]},
			{"Name" : "weights_48_48_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_19_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_19_V"}]},
			{"Name" : "weights_48_48_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_20_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_20_V"}]},
			{"Name" : "weights_48_48_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_21_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_21_V"}]},
			{"Name" : "weights_48_48_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_22_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_22_V"}]},
			{"Name" : "weights_48_48_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_23_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_23_V"}]},
			{"Name" : "weights_48_48_1x1_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_24_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_24_V"}]},
			{"Name" : "weights_48_48_1x1_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_25_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_25_V"}]},
			{"Name" : "weights_48_48_1x1_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_26_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_26_V"}]},
			{"Name" : "weights_48_48_1x1_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_27_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_27_V"}]},
			{"Name" : "weights_48_48_1x1_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_28_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_28_V"}]},
			{"Name" : "weights_48_48_1x1_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_29_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_29_V"}]},
			{"Name" : "weights_48_48_1x1_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_30_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_30_V"}]},
			{"Name" : "weights_48_48_1x1_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_31_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_31_V"}]},
			{"Name" : "weights_48_48_1x1_V_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_32_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_32_V"}]},
			{"Name" : "weights_48_48_1x1_V_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_33_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_33_V"}]},
			{"Name" : "weights_48_48_1x1_V_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_34_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_34_V"}]},
			{"Name" : "weights_48_48_1x1_V_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_35_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_35_V"}]},
			{"Name" : "weights_48_48_1x1_V_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_36_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_36_V"}]},
			{"Name" : "weights_48_48_1x1_V_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_37_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_37_V"}]},
			{"Name" : "weights_48_48_1x1_V_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_38_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_38_V"}]},
			{"Name" : "weights_48_48_1x1_V_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_39_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_39_V"}]},
			{"Name" : "weights_48_48_1x1_V_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_40_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_40_V"}]},
			{"Name" : "weights_48_48_1x1_V_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_41_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_41_V"}]},
			{"Name" : "weights_48_48_1x1_V_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_42_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_42_V"}]},
			{"Name" : "weights_48_48_1x1_V_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_43_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_43_V"}]},
			{"Name" : "weights_48_48_1x1_V_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_44_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_44_V"}]},
			{"Name" : "weights_48_48_1x1_V_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_45_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_45_V"}]},
			{"Name" : "weights_48_48_1x1_V_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_46_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_46_V"}]},
			{"Name" : "weights_48_48_1x1_V_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "677", "SubInstance" : "grp_subconv_1x1_16p_p_fu_23114", "Port" : "weight_47_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "weight_47_V"}]},
			{"Name" : "weights_48_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "weight_V"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "weight_V"},
					{"ID" : "804", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_25397", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_48_8x8_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "776", "SubInstance" : "grp_subconv_3x3_16_strid_fu_24564", "Port" : "output_V"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "left_V"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "output_V"},
					{"ID" : "804", "SubInstance" : "grp_subconv_3x3_16_strid_1_fu_25397", "Port" : "output_V"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "input_V"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_48"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_48"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_48"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_48"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_48"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_24"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_24"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_1"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_1"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_25"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_25"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_25"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_25"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_25"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_2"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_2"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_26"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_26"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_26"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_26"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_26"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_3"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_3"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_27"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_27"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_27"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_27"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_27"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_4"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_4"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_28"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_28"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_28"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_28"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_28"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_5"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_5"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_29"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_29"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_29"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_29"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_29"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_6"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_6"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_30"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_30"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_30"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_30"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_30"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_7"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_7"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_31"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_31"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_31"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_31"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_31"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_8"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_8"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_32"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_32"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_32"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_32"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_32"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_9"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_9"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_33"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_33"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_33"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_33"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_33"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_10"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_10"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_34"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_34"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_34"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_34"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_34"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_11"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_11"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_35"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_35"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_35"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_35"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_35"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_12"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_12"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_36"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_36"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_36"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_36"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_36"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_13"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_13"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_37"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_37"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_37"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_37"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_37"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_14"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_14"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_38"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_38"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_38"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_38"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_38"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_15"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_15"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_39"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_39"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_39"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_39"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_39"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_16"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_16"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_40"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_40"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_40"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_40"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_40"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_17"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_17"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_41"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_41"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_41"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_41"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_41"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_18"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_18"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_42"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_42"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_42"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_42"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_42"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_19"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_19"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_43"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_43"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_43"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_43"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_43"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_20"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_20"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_44"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_44"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_44"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_44"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_44"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_21"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_21"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_45"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_45"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_45"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_45"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_45"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_22"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_22"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_46"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_46"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_46"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_46"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_46"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_23"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_23"}]},
			{"Name" : "buffer1_1_48_8x8_p_V_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "buffer1_1_48_8x8_p_V_47"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "buffer1_1_48_8x8_p_V_47"},
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "buffer1_1_48_8x8_p_V_47"},
					{"ID" : "779", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_24670", "Port" : "buffer1_1_48_8x8_p_V_47"},
					{"ID" : "601", "SubInstance" : "grp_subconv_1x1_8_p_fu_22522", "Port" : "buffer1_1_48_8x8_p_V_47"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "792", "SubInstance" : "grp_shuffle_48_r_p_fu_25105", "Port" : "output_V"},
					{"ID" : "790", "SubInstance" : "grp_shuffle_48_l_p_fu_25003", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_3_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_4_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_5_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_6_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "782", "SubInstance" : "grp_shuffle_48_p_fu_24776", "Port" : "output_V"},
					{"ID" : "802", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_25385", "Port" : "shuffleunit1_7_outpu"},
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "input_V"}]},
			{"Name" : "bias_96_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "bias_V"},
					{"ID" : "802", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_25385", "Port" : "bias_V"},
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "bias_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "bias_V"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "bias_V"}]},
			{"Name" : "ShuffleConvs_2_Downs_95", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_95"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_95"}]},
			{"Name" : "ShuffleConvs_2_Downs_52", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_52"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_52"}]},
			{"Name" : "ShuffleConvs_2_Downs_94", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_94"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_94"}]},
			{"Name" : "ShuffleConvs_2_Downs_51", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_51"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_51"}]},
			{"Name" : "ShuffleConvs_2_Downs_83", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_83"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_83"}]},
			{"Name" : "ShuffleConvs_2_Downs_49", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_49"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_49"}]},
			{"Name" : "ShuffleConvs_2_Downs_72", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_72"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_72"}]},
			{"Name" : "ShuffleConvs_2_Downs_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_48"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_48"}]},
			{"Name" : "ShuffleConvs_2_Downs_61", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_61"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_61"}]},
			{"Name" : "ShuffleConvs_2_Downs_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_47"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_47"}]},
			{"Name" : "ShuffleConvs_2_Downs_50", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_50"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_50"}]},
			{"Name" : "ShuffleConvs_2_Downs_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_46"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_46"}]},
			{"Name" : "ShuffleConvs_2_Downs_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_39"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_39"}]},
			{"Name" : "ShuffleConvs_2_Downs_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_45"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_45"}]},
			{"Name" : "ShuffleConvs_2_Downs_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_28"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_28"}]},
			{"Name" : "ShuffleConvs_2_Downs_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_44"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_44"}]},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_17"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_17"}]},
			{"Name" : "ShuffleConvs_2_Downs_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_43"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_43"}]},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_6"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_6"}]},
			{"Name" : "ShuffleConvs_2_Downs_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_42"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_42"}]},
			{"Name" : "ShuffleConvs_2_Downs_93", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_93"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_93"}]},
			{"Name" : "ShuffleConvs_2_Downs_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_41"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_41"}]},
			{"Name" : "ShuffleConvs_2_Downs_92", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_92"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_92"}]},
			{"Name" : "ShuffleConvs_2_Downs_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_40"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_40"}]},
			{"Name" : "ShuffleConvs_2_Downs_91", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_91"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_91"}]},
			{"Name" : "ShuffleConvs_2_Downs_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_38"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_38"}]},
			{"Name" : "ShuffleConvs_2_Downs_90", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_90"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_90"}]},
			{"Name" : "ShuffleConvs_2_Downs_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_37"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_37"}]},
			{"Name" : "ShuffleConvs_2_Downs_89", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_89"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_89"}]},
			{"Name" : "ShuffleConvs_2_Downs_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_36"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_36"}]},
			{"Name" : "ShuffleConvs_2_Downs_88", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_88"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_88"}]},
			{"Name" : "ShuffleConvs_2_Downs_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_35"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_35"}]},
			{"Name" : "ShuffleConvs_2_Downs_87", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_87"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_87"}]},
			{"Name" : "ShuffleConvs_2_Downs_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_34"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_34"}]},
			{"Name" : "ShuffleConvs_2_Downs_86", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_86"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_86"}]},
			{"Name" : "ShuffleConvs_2_Downs_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_33"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_33"}]},
			{"Name" : "ShuffleConvs_2_Downs_85", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_85"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_85"}]},
			{"Name" : "ShuffleConvs_2_Downs_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_32"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_32"}]},
			{"Name" : "ShuffleConvs_2_Downs_84", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_84"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_84"}]},
			{"Name" : "ShuffleConvs_2_Downs_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_31"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_31"}]},
			{"Name" : "ShuffleConvs_2_Downs_82", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_82"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_82"}]},
			{"Name" : "ShuffleConvs_2_Downs_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_30"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_30"}]},
			{"Name" : "ShuffleConvs_2_Downs_81", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_81"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_81"}]},
			{"Name" : "ShuffleConvs_2_Downs_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_29"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_29"}]},
			{"Name" : "ShuffleConvs_2_Downs_80", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_80"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_80"}]},
			{"Name" : "ShuffleConvs_2_Downs_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_27"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_27"}]},
			{"Name" : "ShuffleConvs_2_Downs_79", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_79"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_79"}]},
			{"Name" : "ShuffleConvs_2_Downs_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_26"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_26"}]},
			{"Name" : "ShuffleConvs_2_Downs_78", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_78"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_78"}]},
			{"Name" : "ShuffleConvs_2_Downs_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_25"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_25"}]},
			{"Name" : "ShuffleConvs_2_Downs_77", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_77"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_77"}]},
			{"Name" : "ShuffleConvs_2_Downs_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_24"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_24"}]},
			{"Name" : "ShuffleConvs_2_Downs_76", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_76"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_76"}]},
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_23"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_23"}]},
			{"Name" : "ShuffleConvs_2_Downs_75", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_75"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_75"}]},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_22"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_22"}]},
			{"Name" : "ShuffleConvs_2_Downs_74", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_74"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_74"}]},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_21"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_21"}]},
			{"Name" : "ShuffleConvs_2_Downs_73", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_73"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_73"}]},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_20"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_20"}]},
			{"Name" : "ShuffleConvs_2_Downs_71", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_71"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_71"}]},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_19"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_19"}]},
			{"Name" : "ShuffleConvs_2_Downs_70", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_70"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_70"}]},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_18"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_18"}]},
			{"Name" : "ShuffleConvs_2_Downs_69", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_69"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_69"}]},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_16"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_16"}]},
			{"Name" : "ShuffleConvs_2_Downs_68", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_68"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_68"}]},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_15"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_15"}]},
			{"Name" : "ShuffleConvs_2_Downs_67", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_67"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_67"}]},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_14"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_14"}]},
			{"Name" : "ShuffleConvs_2_Downs_66", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_66"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_66"}]},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_13"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_13"}]},
			{"Name" : "ShuffleConvs_2_Downs_65", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_65"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_65"}]},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_12"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_12"}]},
			{"Name" : "ShuffleConvs_2_Downs_64", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_64"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_64"}]},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_11"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_11"}]},
			{"Name" : "ShuffleConvs_2_Downs_63", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_63"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_63"}]},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_10"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_10"}]},
			{"Name" : "ShuffleConvs_2_Downs_62", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_62"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_62"}]},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_9"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_9"}]},
			{"Name" : "ShuffleConvs_2_Downs_60", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_60"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_60"}]},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_8"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_8"}]},
			{"Name" : "ShuffleConvs_2_Downs_59", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_59"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_59"}]},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_7"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_7"}]},
			{"Name" : "ShuffleConvs_2_Downs_58", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_58"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_58"}]},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_5"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_5"}]},
			{"Name" : "ShuffleConvs_2_Downs_57", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_57"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_57"}]},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_4"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_4"}]},
			{"Name" : "ShuffleConvs_2_Downs_56", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_56"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_56"}]},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_3"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_3"}]},
			{"Name" : "ShuffleConvs_2_Downs_55", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_55"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_55"}]},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_2"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_2"}]},
			{"Name" : "ShuffleConvs_2_Downs_54", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_54"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_54"}]},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_1"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_1"}]},
			{"Name" : "ShuffleConvs_2_Downs_53", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs_53"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs_53"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "ShuffleConvs_2_Downs"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "ShuffleConvs_2_Downs"}]},
			{"Name" : "weights_96_96_1x1_V_s", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_0_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_0_V"}]},
			{"Name" : "weights_96_96_1x1_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_1_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_1_V"}]},
			{"Name" : "weights_96_96_1x1_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_2_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_2_V"}]},
			{"Name" : "weights_96_96_1x1_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_3_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_3_V"}]},
			{"Name" : "weights_96_96_1x1_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_4_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_4_V"}]},
			{"Name" : "weights_96_96_1x1_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_5_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_5_V"}]},
			{"Name" : "weights_96_96_1x1_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_6_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_6_V"}]},
			{"Name" : "weights_96_96_1x1_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_7_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_7_V"}]},
			{"Name" : "weights_96_96_1x1_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_8_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_8_V"}]},
			{"Name" : "weights_96_96_1x1_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_9_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_9_V"}]},
			{"Name" : "weights_96_96_1x1_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_10_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_10_V"}]},
			{"Name" : "weights_96_96_1x1_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_11_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_11_V"}]},
			{"Name" : "weights_96_96_1x1_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_12_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_12_V"}]},
			{"Name" : "weights_96_96_1x1_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_13_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_13_V"}]},
			{"Name" : "weights_96_96_1x1_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_14_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_14_V"}]},
			{"Name" : "weights_96_96_1x1_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_15_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_15_V"}]},
			{"Name" : "weights_96_96_1x1_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_16_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_16_V"}]},
			{"Name" : "weights_96_96_1x1_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_17_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_17_V"}]},
			{"Name" : "weights_96_96_1x1_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_18_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_18_V"}]},
			{"Name" : "weights_96_96_1x1_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_19_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_19_V"}]},
			{"Name" : "weights_96_96_1x1_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_20_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_20_V"}]},
			{"Name" : "weights_96_96_1x1_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_21_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_21_V"}]},
			{"Name" : "weights_96_96_1x1_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_22_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_22_V"}]},
			{"Name" : "weights_96_96_1x1_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_23_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_23_V"}]},
			{"Name" : "weights_96_96_1x1_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_24_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_24_V"}]},
			{"Name" : "weights_96_96_1x1_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_25_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_25_V"}]},
			{"Name" : "weights_96_96_1x1_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_26_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_26_V"}]},
			{"Name" : "weights_96_96_1x1_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_27_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_27_V"}]},
			{"Name" : "weights_96_96_1x1_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_28_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_28_V"}]},
			{"Name" : "weights_96_96_1x1_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_29_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_29_V"}]},
			{"Name" : "weights_96_96_1x1_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_30_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_30_V"}]},
			{"Name" : "weights_96_96_1x1_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_31_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_31_V"}]},
			{"Name" : "weights_96_96_1x1_V_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_32_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_32_V"}]},
			{"Name" : "weights_96_96_1x1_V_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_33_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_33_V"}]},
			{"Name" : "weights_96_96_1x1_V_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_34_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_34_V"}]},
			{"Name" : "weights_96_96_1x1_V_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_35_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_35_V"}]},
			{"Name" : "weights_96_96_1x1_V_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_36_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_36_V"}]},
			{"Name" : "weights_96_96_1x1_V_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_37_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_37_V"}]},
			{"Name" : "weights_96_96_1x1_V_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_38_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_38_V"}]},
			{"Name" : "weights_96_96_1x1_V_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_39_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_39_V"}]},
			{"Name" : "weights_96_96_1x1_V_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_40_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_40_V"}]},
			{"Name" : "weights_96_96_1x1_V_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_41_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_41_V"}]},
			{"Name" : "weights_96_96_1x1_V_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_42_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_42_V"}]},
			{"Name" : "weights_96_96_1x1_V_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_43_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_43_V"}]},
			{"Name" : "weights_96_96_1x1_V_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_44_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_44_V"}]},
			{"Name" : "weights_96_96_1x1_V_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_45_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_45_V"}]},
			{"Name" : "weights_96_96_1x1_V_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_46_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_46_V"}]},
			{"Name" : "weights_96_96_1x1_V_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_47_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_47_V"}]},
			{"Name" : "weights_96_96_1x1_V_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_48_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_48_V"}]},
			{"Name" : "weights_96_96_1x1_V_49", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_49_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_49_V"}]},
			{"Name" : "weights_96_96_1x1_V_50", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_50_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_50_V"}]},
			{"Name" : "weights_96_96_1x1_V_51", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_51_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_51_V"}]},
			{"Name" : "weights_96_96_1x1_V_52", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_52_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_52_V"}]},
			{"Name" : "weights_96_96_1x1_V_53", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_53_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_53_V"}]},
			{"Name" : "weights_96_96_1x1_V_54", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_54_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_54_V"}]},
			{"Name" : "weights_96_96_1x1_V_55", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_55_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_55_V"}]},
			{"Name" : "weights_96_96_1x1_V_56", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_56_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_56_V"}]},
			{"Name" : "weights_96_96_1x1_V_57", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_57_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_57_V"}]},
			{"Name" : "weights_96_96_1x1_V_58", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_58_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_58_V"}]},
			{"Name" : "weights_96_96_1x1_V_59", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_59_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_59_V"}]},
			{"Name" : "weights_96_96_1x1_V_60", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_60_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_60_V"}]},
			{"Name" : "weights_96_96_1x1_V_61", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_61_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_61_V"}]},
			{"Name" : "weights_96_96_1x1_V_62", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_62_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_62_V"}]},
			{"Name" : "weights_96_96_1x1_V_63", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_63_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_63_V"}]},
			{"Name" : "weights_96_96_1x1_V_64", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_64_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_64_V"}]},
			{"Name" : "weights_96_96_1x1_V_65", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_65_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_65_V"}]},
			{"Name" : "weights_96_96_1x1_V_66", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_66_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_66_V"}]},
			{"Name" : "weights_96_96_1x1_V_67", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_67_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_67_V"}]},
			{"Name" : "weights_96_96_1x1_V_68", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_68_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_68_V"}]},
			{"Name" : "weights_96_96_1x1_V_69", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_69_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_69_V"}]},
			{"Name" : "weights_96_96_1x1_V_70", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_70_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_70_V"}]},
			{"Name" : "weights_96_96_1x1_V_71", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_71_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_71_V"}]},
			{"Name" : "weights_96_96_1x1_V_72", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_72_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_72_V"}]},
			{"Name" : "weights_96_96_1x1_V_73", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_73_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_73_V"}]},
			{"Name" : "weights_96_96_1x1_V_74", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_74_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_74_V"}]},
			{"Name" : "weights_96_96_1x1_V_75", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_75_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_75_V"}]},
			{"Name" : "weights_96_96_1x1_V_76", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_76_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_76_V"}]},
			{"Name" : "weights_96_96_1x1_V_77", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_77_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_77_V"}]},
			{"Name" : "weights_96_96_1x1_V_78", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_78_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_78_V"}]},
			{"Name" : "weights_96_96_1x1_V_79", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_79_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_79_V"}]},
			{"Name" : "weights_96_96_1x1_V_80", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_80_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_80_V"}]},
			{"Name" : "weights_96_96_1x1_V_81", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_81_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_81_V"}]},
			{"Name" : "weights_96_96_1x1_V_82", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_82_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_82_V"}]},
			{"Name" : "weights_96_96_1x1_V_83", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_83_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_83_V"}]},
			{"Name" : "weights_96_96_1x1_V_84", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_84_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_84_V"}]},
			{"Name" : "weights_96_96_1x1_V_85", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_85_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_85_V"}]},
			{"Name" : "weights_96_96_1x1_V_86", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_86_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_86_V"}]},
			{"Name" : "weights_96_96_1x1_V_87", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_87_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_87_V"}]},
			{"Name" : "weights_96_96_1x1_V_88", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_88_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_88_V"}]},
			{"Name" : "weights_96_96_1x1_V_89", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_89_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_89_V"}]},
			{"Name" : "weights_96_96_1x1_V_90", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_90_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_90_V"}]},
			{"Name" : "weights_96_96_1x1_V_91", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_91_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_91_V"}]},
			{"Name" : "weights_96_96_1x1_V_92", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_92_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_92_V"}]},
			{"Name" : "weights_96_96_1x1_V_93", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_93_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_93_V"}]},
			{"Name" : "weights_96_96_1x1_V_94", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_94_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_94_V"}]},
			{"Name" : "weights_96_96_1x1_V_95", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "651", "SubInstance" : "grp_subconv_1x1_8p_p_fu_22722", "Port" : "weight_95_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "weight_95_V"}]},
			{"Name" : "weights_96_1_3x3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "weight_V"},
					{"ID" : "802", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_25385", "Port" : "weight_V"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "weight_V"}]},
			{"Name" : "buffer0_1_96_4x4_p_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "output_V"},
					{"ID" : "802", "SubInstance" : "grp_subconv_3x3_8_stride_1_fu_25385", "Port" : "output_V"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "left_V"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "input_V"},
					{"ID" : "761", "SubInstance" : "grp_subconv_3x3_8_stride_fu_23549", "Port" : "output_V"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_96", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_96"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_96"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_96"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_96"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_96"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_48", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_48"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_48"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_48"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_48"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_48"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_1"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_1"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_49", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_49"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_49"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_49"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_49"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_49"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_2"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_2"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_50", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_50"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_50"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_50"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_50"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_50"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_3"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_3"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_51", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_51"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_51"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_51"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_51"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_51"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_4"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_4"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_52", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_52"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_52"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_52"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_52"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_52"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_5"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_5"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_53", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_53"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_53"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_53"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_53"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_53"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_6"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_6"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_54", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_54"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_54"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_54"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_54"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_54"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_7"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_7"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_55", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_55"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_55"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_55"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_55"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_55"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_8"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_8"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_56", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_56"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_56"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_56"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_56"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_56"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_9"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_9"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_57", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_57"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_57"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_57"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_57"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_57"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_10"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_10"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_58", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_58"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_58"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_58"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_58"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_58"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_11"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_11"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_59", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_59"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_59"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_59"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_59"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_59"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_12"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_12"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_60", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_60"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_60"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_60"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_60"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_60"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_13"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_13"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_61", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_61"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_61"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_61"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_61"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_61"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_14"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_14"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_62", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_62"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_62"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_62"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_62"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_62"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_15"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_15"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_63", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_63"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_63"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_63"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_63"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_63"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_16"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_16"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_64", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_64"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_64"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_64"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_64"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_64"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_17"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_17"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_65", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_65"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_65"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_65"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_65"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_65"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_18"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_18"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_66", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_66"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_66"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_66"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_66"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_66"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_19"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_19"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_67", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_67"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_67"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_67"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_67"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_67"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_20"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_20"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_68", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_68"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_68"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_68"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_68"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_68"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_21"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_21"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_69", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_69"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_69"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_69"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_69"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_69"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_22"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_22"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_70", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_70"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_70"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_70"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_70"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_70"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_23"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_23"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_71", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_71"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_71"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_71"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_71"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_71"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_24"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_24"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_72", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_72"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_72"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_72"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_72"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_72"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_25"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_25"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_25"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_25"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_25"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_73", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_73"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_73"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_73"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_73"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_73"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_26", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_26"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_26"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_26"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_26"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_26"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_74", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_74"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_74"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_74"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_74"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_74"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_27"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_27"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_27"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_27"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_27"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_75", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_75"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_75"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_75"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_75"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_75"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_28", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_28"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_28"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_28"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_28"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_28"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_76", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_76"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_76"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_76"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_76"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_76"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_29"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_29"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_29"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_29"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_29"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_77", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_77"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_77"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_77"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_77"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_77"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_30", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_30"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_30"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_30"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_30"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_30"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_78", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_78"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_78"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_78"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_78"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_78"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_31"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_31"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_31"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_31"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_31"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_79", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_79"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_79"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_79"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_79"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_79"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_32", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_32"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_32"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_32"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_32"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_32"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_80", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_80"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_80"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_80"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_80"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_80"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_33"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_33"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_33"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_33"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_33"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_81", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_81"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_81"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_81"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_81"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_81"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_34", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_34"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_34"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_34"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_34"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_34"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_82", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_82"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_82"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_82"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_82"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_82"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_35"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_35"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_35"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_35"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_35"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_83", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_83"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_83"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_83"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_83"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_83"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_36", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_36"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_36"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_36"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_36"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_36"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_84", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_84"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_84"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_84"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_84"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_84"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_37"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_37"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_37"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_37"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_37"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_85", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_85"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_85"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_85"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_85"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_85"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_38", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_38"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_38"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_38"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_38"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_38"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_86", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_86"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_86"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_86"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_86"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_86"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_39"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_39"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_39"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_39"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_39"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_87", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_87"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_87"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_87"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_87"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_87"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_40", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_40"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_40"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_40"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_40"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_40"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_88", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_88"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_88"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_88"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_88"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_88"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_41"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_41"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_41"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_41"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_41"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_89", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_89"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_89"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_89"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_89"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_89"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_42", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_42"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_42"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_42"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_42"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_42"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_90", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_90"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_90"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_90"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_90"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_90"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_43"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_43"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_43"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_43"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_43"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_91", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_91"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_91"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_91"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_91"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_91"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_44", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_44"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_44"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_44"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_44"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_44"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_92", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_92"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_92"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_92"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_92"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_92"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_45"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_45"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_45"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_45"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_45"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_93", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_93"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_93"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_93"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_93"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_93"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_46", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_46"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_46"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_46"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_46"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_46"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_94", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_94"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_94"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_94"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_94"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_94"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_47"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_47"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_47"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_47"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_47"}]},
			{"Name" : "buffer1_1_96_4x4_p_V_95", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "buffer1_1_96_4x4_p_V_95"},
					{"ID" : "764", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_23751", "Port" : "buffer1_1_96_4x4_p_V_95"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "buffer1_1_96_4x4_p_V_95"},
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "buffer1_1_96_4x4_p_V_95"},
					{"ID" : "551", "SubInstance" : "grp_subconv_1x1_4_p_fu_22130", "Port" : "buffer1_1_96_4x4_p_V_95"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "772", "SubInstance" : "grp_shuffle_96_l_p_fu_24168", "Port" : "output_V"},
					{"ID" : "774", "SubInstance" : "grp_shuffle_96_r_p_fu_24366", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "770", "SubInstance" : "grp_shuffle_96_p_fu_23966", "Port" : "output_V"}]},
			{"Name" : "shuffleunit2_2_outpu_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "input_V"}]},
			{"Name" : "conv_last_output_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_0"}]},
			{"Name" : "conv_last_output_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_1"}]},
			{"Name" : "conv_last_output_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_2"}]},
			{"Name" : "conv_last_output_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_3"}]},
			{"Name" : "conv_last_output_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_4"}]},
			{"Name" : "conv_last_output_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_5"}]},
			{"Name" : "conv_last_output_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_6"}]},
			{"Name" : "conv_last_output_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "743", "SubInstance" : "grp_conv_last_fu_23522", "Port" : "conv_last_output_V_7"}]},
			{"Name" : "avgpool_output_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "806", "SubInstance" : "grp_fc_fu_25409", "Port" : "avgpool_output_V"}]}]},
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
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit0_outp_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_0_outpu_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_1_outpu_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_2_outpu_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_48_V_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_47_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_30_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_46_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_29_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_35_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_28_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_24_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_27_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_13_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_26_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_4_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_25_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_3_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_23_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_2_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_22_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_1_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_21_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_20_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_45_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_19_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_44_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_18_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_43_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_17_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_42_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_16_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_41_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_15_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_40_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_14_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_39_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_12_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_38_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_11_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_37_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_10_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_36_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_9_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_34_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_8_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_33_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_7_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_32_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_6_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_31_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_5_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "139", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "140", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "141", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "142", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "143", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "144", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "145", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "146", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "147", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "148", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "149", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "150", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "151", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "152", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "153", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "154", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "155", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "157", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "158", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_24_U", "Parent" : "0"},
	{"ID" : "159", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_25_U", "Parent" : "0"},
	{"ID" : "160", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_26_U", "Parent" : "0"},
	{"ID" : "161", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_27_U", "Parent" : "0"},
	{"ID" : "162", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_28_U", "Parent" : "0"},
	{"ID" : "163", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_29_U", "Parent" : "0"},
	{"ID" : "164", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_30_U", "Parent" : "0"},
	{"ID" : "165", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_31_U", "Parent" : "0"},
	{"ID" : "166", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_32_U", "Parent" : "0"},
	{"ID" : "167", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_33_U", "Parent" : "0"},
	{"ID" : "168", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_34_U", "Parent" : "0"},
	{"ID" : "169", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_35_U", "Parent" : "0"},
	{"ID" : "170", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_36_U", "Parent" : "0"},
	{"ID" : "171", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_37_U", "Parent" : "0"},
	{"ID" : "172", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_38_U", "Parent" : "0"},
	{"ID" : "173", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_39_U", "Parent" : "0"},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_40_U", "Parent" : "0"},
	{"ID" : "175", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_41_U", "Parent" : "0"},
	{"ID" : "176", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_42_U", "Parent" : "0"},
	{"ID" : "177", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_43_U", "Parent" : "0"},
	{"ID" : "178", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_44_U", "Parent" : "0"},
	{"ID" : "179", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_45_U", "Parent" : "0"},
	{"ID" : "180", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_46_U", "Parent" : "0"},
	{"ID" : "181", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_48_1x1_V_47_U", "Parent" : "0"},
	{"ID" : "182", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_48_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "183", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_48_8x8_p_V_U", "Parent" : "0"},
	{"ID" : "184", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_48_U", "Parent" : "0"},
	{"ID" : "185", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_24_U", "Parent" : "0"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_1_U", "Parent" : "0"},
	{"ID" : "187", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_25_U", "Parent" : "0"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_2_U", "Parent" : "0"},
	{"ID" : "189", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_26_U", "Parent" : "0"},
	{"ID" : "190", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_3_U", "Parent" : "0"},
	{"ID" : "191", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_27_U", "Parent" : "0"},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_4_U", "Parent" : "0"},
	{"ID" : "193", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_28_U", "Parent" : "0"},
	{"ID" : "194", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_5_U", "Parent" : "0"},
	{"ID" : "195", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_29_U", "Parent" : "0"},
	{"ID" : "196", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_6_U", "Parent" : "0"},
	{"ID" : "197", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_30_U", "Parent" : "0"},
	{"ID" : "198", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_7_U", "Parent" : "0"},
	{"ID" : "199", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_31_U", "Parent" : "0"},
	{"ID" : "200", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_8_U", "Parent" : "0"},
	{"ID" : "201", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_32_U", "Parent" : "0"},
	{"ID" : "202", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_9_U", "Parent" : "0"},
	{"ID" : "203", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_33_U", "Parent" : "0"},
	{"ID" : "204", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_10_U", "Parent" : "0"},
	{"ID" : "205", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_34_U", "Parent" : "0"},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_11_U", "Parent" : "0"},
	{"ID" : "207", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_35_U", "Parent" : "0"},
	{"ID" : "208", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_12_U", "Parent" : "0"},
	{"ID" : "209", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_36_U", "Parent" : "0"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_13_U", "Parent" : "0"},
	{"ID" : "211", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_37_U", "Parent" : "0"},
	{"ID" : "212", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_14_U", "Parent" : "0"},
	{"ID" : "213", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_38_U", "Parent" : "0"},
	{"ID" : "214", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_15_U", "Parent" : "0"},
	{"ID" : "215", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_39_U", "Parent" : "0"},
	{"ID" : "216", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_16_U", "Parent" : "0"},
	{"ID" : "217", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_40_U", "Parent" : "0"},
	{"ID" : "218", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_17_U", "Parent" : "0"},
	{"ID" : "219", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_41_U", "Parent" : "0"},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_18_U", "Parent" : "0"},
	{"ID" : "221", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_42_U", "Parent" : "0"},
	{"ID" : "222", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_19_U", "Parent" : "0"},
	{"ID" : "223", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_43_U", "Parent" : "0"},
	{"ID" : "224", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_20_U", "Parent" : "0"},
	{"ID" : "225", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_44_U", "Parent" : "0"},
	{"ID" : "226", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_21_U", "Parent" : "0"},
	{"ID" : "227", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_45_U", "Parent" : "0"},
	{"ID" : "228", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_22_U", "Parent" : "0"},
	{"ID" : "229", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_46_U", "Parent" : "0"},
	{"ID" : "230", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_23_U", "Parent" : "0"},
	{"ID" : "231", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_48_8x8_p_V_47_U", "Parent" : "0"},
	{"ID" : "232", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit1_outp_U", "Parent" : "0"},
	{"ID" : "233", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_0_outpu_U", "Parent" : "0"},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_1_outpu_U", "Parent" : "0"},
	{"ID" : "235", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_2_outpu_U", "Parent" : "0"},
	{"ID" : "236", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_3_outpu_U", "Parent" : "0"},
	{"ID" : "237", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_4_outpu_U", "Parent" : "0"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_5_outpu_U", "Parent" : "0"},
	{"ID" : "239", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_6_outpu_U", "Parent" : "0"},
	{"ID" : "240", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_7_outpu_U", "Parent" : "0"},
	{"ID" : "241", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.bias_96_V_U", "Parent" : "0"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_95_U", "Parent" : "0"},
	{"ID" : "243", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_52_U", "Parent" : "0"},
	{"ID" : "244", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_94_U", "Parent" : "0"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_51_U", "Parent" : "0"},
	{"ID" : "246", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_83_U", "Parent" : "0"},
	{"ID" : "247", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_49_U", "Parent" : "0"},
	{"ID" : "248", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_72_U", "Parent" : "0"},
	{"ID" : "249", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_48_U", "Parent" : "0"},
	{"ID" : "250", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_61_U", "Parent" : "0"},
	{"ID" : "251", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_47_U", "Parent" : "0"},
	{"ID" : "252", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_50_U", "Parent" : "0"},
	{"ID" : "253", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_46_U", "Parent" : "0"},
	{"ID" : "254", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_39_U", "Parent" : "0"},
	{"ID" : "255", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_45_U", "Parent" : "0"},
	{"ID" : "256", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_28_U", "Parent" : "0"},
	{"ID" : "257", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_44_U", "Parent" : "0"},
	{"ID" : "258", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_17_U", "Parent" : "0"},
	{"ID" : "259", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_43_U", "Parent" : "0"},
	{"ID" : "260", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_6_U", "Parent" : "0"},
	{"ID" : "261", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_42_U", "Parent" : "0"},
	{"ID" : "262", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_93_U", "Parent" : "0"},
	{"ID" : "263", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_41_U", "Parent" : "0"},
	{"ID" : "264", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_92_U", "Parent" : "0"},
	{"ID" : "265", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_40_U", "Parent" : "0"},
	{"ID" : "266", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_91_U", "Parent" : "0"},
	{"ID" : "267", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_38_U", "Parent" : "0"},
	{"ID" : "268", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_90_U", "Parent" : "0"},
	{"ID" : "269", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_37_U", "Parent" : "0"},
	{"ID" : "270", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_89_U", "Parent" : "0"},
	{"ID" : "271", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_36_U", "Parent" : "0"},
	{"ID" : "272", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_88_U", "Parent" : "0"},
	{"ID" : "273", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_35_U", "Parent" : "0"},
	{"ID" : "274", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_87_U", "Parent" : "0"},
	{"ID" : "275", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_34_U", "Parent" : "0"},
	{"ID" : "276", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_86_U", "Parent" : "0"},
	{"ID" : "277", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_33_U", "Parent" : "0"},
	{"ID" : "278", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_85_U", "Parent" : "0"},
	{"ID" : "279", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_32_U", "Parent" : "0"},
	{"ID" : "280", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_84_U", "Parent" : "0"},
	{"ID" : "281", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_31_U", "Parent" : "0"},
	{"ID" : "282", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_82_U", "Parent" : "0"},
	{"ID" : "283", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_30_U", "Parent" : "0"},
	{"ID" : "284", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_81_U", "Parent" : "0"},
	{"ID" : "285", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_29_U", "Parent" : "0"},
	{"ID" : "286", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_80_U", "Parent" : "0"},
	{"ID" : "287", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_27_U", "Parent" : "0"},
	{"ID" : "288", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_79_U", "Parent" : "0"},
	{"ID" : "289", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_26_U", "Parent" : "0"},
	{"ID" : "290", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_78_U", "Parent" : "0"},
	{"ID" : "291", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_25_U", "Parent" : "0"},
	{"ID" : "292", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_77_U", "Parent" : "0"},
	{"ID" : "293", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_24_U", "Parent" : "0"},
	{"ID" : "294", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_76_U", "Parent" : "0"},
	{"ID" : "295", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_23_U", "Parent" : "0"},
	{"ID" : "296", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_75_U", "Parent" : "0"},
	{"ID" : "297", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_22_U", "Parent" : "0"},
	{"ID" : "298", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_74_U", "Parent" : "0"},
	{"ID" : "299", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_21_U", "Parent" : "0"},
	{"ID" : "300", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_73_U", "Parent" : "0"},
	{"ID" : "301", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_20_U", "Parent" : "0"},
	{"ID" : "302", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_71_U", "Parent" : "0"},
	{"ID" : "303", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_19_U", "Parent" : "0"},
	{"ID" : "304", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_70_U", "Parent" : "0"},
	{"ID" : "305", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_18_U", "Parent" : "0"},
	{"ID" : "306", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_69_U", "Parent" : "0"},
	{"ID" : "307", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_16_U", "Parent" : "0"},
	{"ID" : "308", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_68_U", "Parent" : "0"},
	{"ID" : "309", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_15_U", "Parent" : "0"},
	{"ID" : "310", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_67_U", "Parent" : "0"},
	{"ID" : "311", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_14_U", "Parent" : "0"},
	{"ID" : "312", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_66_U", "Parent" : "0"},
	{"ID" : "313", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_13_U", "Parent" : "0"},
	{"ID" : "314", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_65_U", "Parent" : "0"},
	{"ID" : "315", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_12_U", "Parent" : "0"},
	{"ID" : "316", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_64_U", "Parent" : "0"},
	{"ID" : "317", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_11_U", "Parent" : "0"},
	{"ID" : "318", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_63_U", "Parent" : "0"},
	{"ID" : "319", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_10_U", "Parent" : "0"},
	{"ID" : "320", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_62_U", "Parent" : "0"},
	{"ID" : "321", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_9_U", "Parent" : "0"},
	{"ID" : "322", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_60_U", "Parent" : "0"},
	{"ID" : "323", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_8_U", "Parent" : "0"},
	{"ID" : "324", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_59_U", "Parent" : "0"},
	{"ID" : "325", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_7_U", "Parent" : "0"},
	{"ID" : "326", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_58_U", "Parent" : "0"},
	{"ID" : "327", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_5_U", "Parent" : "0"},
	{"ID" : "328", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_57_U", "Parent" : "0"},
	{"ID" : "329", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_4_U", "Parent" : "0"},
	{"ID" : "330", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_56_U", "Parent" : "0"},
	{"ID" : "331", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_3_U", "Parent" : "0"},
	{"ID" : "332", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_55_U", "Parent" : "0"},
	{"ID" : "333", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_2_U", "Parent" : "0"},
	{"ID" : "334", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_54_U", "Parent" : "0"},
	{"ID" : "335", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_1_U", "Parent" : "0"},
	{"ID" : "336", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_53_U", "Parent" : "0"},
	{"ID" : "337", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "338", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_s_U", "Parent" : "0"},
	{"ID" : "339", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_1_U", "Parent" : "0"},
	{"ID" : "340", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_2_U", "Parent" : "0"},
	{"ID" : "341", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_3_U", "Parent" : "0"},
	{"ID" : "342", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_4_U", "Parent" : "0"},
	{"ID" : "343", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_5_U", "Parent" : "0"},
	{"ID" : "344", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_6_U", "Parent" : "0"},
	{"ID" : "345", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_7_U", "Parent" : "0"},
	{"ID" : "346", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_8_U", "Parent" : "0"},
	{"ID" : "347", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_9_U", "Parent" : "0"},
	{"ID" : "348", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_10_U", "Parent" : "0"},
	{"ID" : "349", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_11_U", "Parent" : "0"},
	{"ID" : "350", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_12_U", "Parent" : "0"},
	{"ID" : "351", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_13_U", "Parent" : "0"},
	{"ID" : "352", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_14_U", "Parent" : "0"},
	{"ID" : "353", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_15_U", "Parent" : "0"},
	{"ID" : "354", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_16_U", "Parent" : "0"},
	{"ID" : "355", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_17_U", "Parent" : "0"},
	{"ID" : "356", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_18_U", "Parent" : "0"},
	{"ID" : "357", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_19_U", "Parent" : "0"},
	{"ID" : "358", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_20_U", "Parent" : "0"},
	{"ID" : "359", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_21_U", "Parent" : "0"},
	{"ID" : "360", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_22_U", "Parent" : "0"},
	{"ID" : "361", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_23_U", "Parent" : "0"},
	{"ID" : "362", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_24_U", "Parent" : "0"},
	{"ID" : "363", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_25_U", "Parent" : "0"},
	{"ID" : "364", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_26_U", "Parent" : "0"},
	{"ID" : "365", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_27_U", "Parent" : "0"},
	{"ID" : "366", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_28_U", "Parent" : "0"},
	{"ID" : "367", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_29_U", "Parent" : "0"},
	{"ID" : "368", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_30_U", "Parent" : "0"},
	{"ID" : "369", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_31_U", "Parent" : "0"},
	{"ID" : "370", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_32_U", "Parent" : "0"},
	{"ID" : "371", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_33_U", "Parent" : "0"},
	{"ID" : "372", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_34_U", "Parent" : "0"},
	{"ID" : "373", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_35_U", "Parent" : "0"},
	{"ID" : "374", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_36_U", "Parent" : "0"},
	{"ID" : "375", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_37_U", "Parent" : "0"},
	{"ID" : "376", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_38_U", "Parent" : "0"},
	{"ID" : "377", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_39_U", "Parent" : "0"},
	{"ID" : "378", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_40_U", "Parent" : "0"},
	{"ID" : "379", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_41_U", "Parent" : "0"},
	{"ID" : "380", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_42_U", "Parent" : "0"},
	{"ID" : "381", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_43_U", "Parent" : "0"},
	{"ID" : "382", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_44_U", "Parent" : "0"},
	{"ID" : "383", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_45_U", "Parent" : "0"},
	{"ID" : "384", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_46_U", "Parent" : "0"},
	{"ID" : "385", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_47_U", "Parent" : "0"},
	{"ID" : "386", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_48_U", "Parent" : "0"},
	{"ID" : "387", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_49_U", "Parent" : "0"},
	{"ID" : "388", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_50_U", "Parent" : "0"},
	{"ID" : "389", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_51_U", "Parent" : "0"},
	{"ID" : "390", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_52_U", "Parent" : "0"},
	{"ID" : "391", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_53_U", "Parent" : "0"},
	{"ID" : "392", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_54_U", "Parent" : "0"},
	{"ID" : "393", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_55_U", "Parent" : "0"},
	{"ID" : "394", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_56_U", "Parent" : "0"},
	{"ID" : "395", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_57_U", "Parent" : "0"},
	{"ID" : "396", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_58_U", "Parent" : "0"},
	{"ID" : "397", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_59_U", "Parent" : "0"},
	{"ID" : "398", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_60_U", "Parent" : "0"},
	{"ID" : "399", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_61_U", "Parent" : "0"},
	{"ID" : "400", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_62_U", "Parent" : "0"},
	{"ID" : "401", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_63_U", "Parent" : "0"},
	{"ID" : "402", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_64_U", "Parent" : "0"},
	{"ID" : "403", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_65_U", "Parent" : "0"},
	{"ID" : "404", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_66_U", "Parent" : "0"},
	{"ID" : "405", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_67_U", "Parent" : "0"},
	{"ID" : "406", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_68_U", "Parent" : "0"},
	{"ID" : "407", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_69_U", "Parent" : "0"},
	{"ID" : "408", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_70_U", "Parent" : "0"},
	{"ID" : "409", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_71_U", "Parent" : "0"},
	{"ID" : "410", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_72_U", "Parent" : "0"},
	{"ID" : "411", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_73_U", "Parent" : "0"},
	{"ID" : "412", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_74_U", "Parent" : "0"},
	{"ID" : "413", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_75_U", "Parent" : "0"},
	{"ID" : "414", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_76_U", "Parent" : "0"},
	{"ID" : "415", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_77_U", "Parent" : "0"},
	{"ID" : "416", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_78_U", "Parent" : "0"},
	{"ID" : "417", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_79_U", "Parent" : "0"},
	{"ID" : "418", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_80_U", "Parent" : "0"},
	{"ID" : "419", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_81_U", "Parent" : "0"},
	{"ID" : "420", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_82_U", "Parent" : "0"},
	{"ID" : "421", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_83_U", "Parent" : "0"},
	{"ID" : "422", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_84_U", "Parent" : "0"},
	{"ID" : "423", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_85_U", "Parent" : "0"},
	{"ID" : "424", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_86_U", "Parent" : "0"},
	{"ID" : "425", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_87_U", "Parent" : "0"},
	{"ID" : "426", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_88_U", "Parent" : "0"},
	{"ID" : "427", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_89_U", "Parent" : "0"},
	{"ID" : "428", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_90_U", "Parent" : "0"},
	{"ID" : "429", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_91_U", "Parent" : "0"},
	{"ID" : "430", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_92_U", "Parent" : "0"},
	{"ID" : "431", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_93_U", "Parent" : "0"},
	{"ID" : "432", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_94_U", "Parent" : "0"},
	{"ID" : "433", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_96_1x1_V_95_U", "Parent" : "0"},
	{"ID" : "434", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weights_96_1_3x3_V_U", "Parent" : "0"},
	{"ID" : "435", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer0_1_96_4x4_p_V_U", "Parent" : "0"},
	{"ID" : "436", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_96_U", "Parent" : "0"},
	{"ID" : "437", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_48_U", "Parent" : "0"},
	{"ID" : "438", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_1_U", "Parent" : "0"},
	{"ID" : "439", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_49_U", "Parent" : "0"},
	{"ID" : "440", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_2_U", "Parent" : "0"},
	{"ID" : "441", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_50_U", "Parent" : "0"},
	{"ID" : "442", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_3_U", "Parent" : "0"},
	{"ID" : "443", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_51_U", "Parent" : "0"},
	{"ID" : "444", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_4_U", "Parent" : "0"},
	{"ID" : "445", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_52_U", "Parent" : "0"},
	{"ID" : "446", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_5_U", "Parent" : "0"},
	{"ID" : "447", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_53_U", "Parent" : "0"},
	{"ID" : "448", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_6_U", "Parent" : "0"},
	{"ID" : "449", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_54_U", "Parent" : "0"},
	{"ID" : "450", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_7_U", "Parent" : "0"},
	{"ID" : "451", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_55_U", "Parent" : "0"},
	{"ID" : "452", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_8_U", "Parent" : "0"},
	{"ID" : "453", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_56_U", "Parent" : "0"},
	{"ID" : "454", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_9_U", "Parent" : "0"},
	{"ID" : "455", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_57_U", "Parent" : "0"},
	{"ID" : "456", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_10_U", "Parent" : "0"},
	{"ID" : "457", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_58_U", "Parent" : "0"},
	{"ID" : "458", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_11_U", "Parent" : "0"},
	{"ID" : "459", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_59_U", "Parent" : "0"},
	{"ID" : "460", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_12_U", "Parent" : "0"},
	{"ID" : "461", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_60_U", "Parent" : "0"},
	{"ID" : "462", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_13_U", "Parent" : "0"},
	{"ID" : "463", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_61_U", "Parent" : "0"},
	{"ID" : "464", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_14_U", "Parent" : "0"},
	{"ID" : "465", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_62_U", "Parent" : "0"},
	{"ID" : "466", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_15_U", "Parent" : "0"},
	{"ID" : "467", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_63_U", "Parent" : "0"},
	{"ID" : "468", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_16_U", "Parent" : "0"},
	{"ID" : "469", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_64_U", "Parent" : "0"},
	{"ID" : "470", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_17_U", "Parent" : "0"},
	{"ID" : "471", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_65_U", "Parent" : "0"},
	{"ID" : "472", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_18_U", "Parent" : "0"},
	{"ID" : "473", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_66_U", "Parent" : "0"},
	{"ID" : "474", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_19_U", "Parent" : "0"},
	{"ID" : "475", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_67_U", "Parent" : "0"},
	{"ID" : "476", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_20_U", "Parent" : "0"},
	{"ID" : "477", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_68_U", "Parent" : "0"},
	{"ID" : "478", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_21_U", "Parent" : "0"},
	{"ID" : "479", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_69_U", "Parent" : "0"},
	{"ID" : "480", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_22_U", "Parent" : "0"},
	{"ID" : "481", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_70_U", "Parent" : "0"},
	{"ID" : "482", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_23_U", "Parent" : "0"},
	{"ID" : "483", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_71_U", "Parent" : "0"},
	{"ID" : "484", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_24_U", "Parent" : "0"},
	{"ID" : "485", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_72_U", "Parent" : "0"},
	{"ID" : "486", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_25_U", "Parent" : "0"},
	{"ID" : "487", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_73_U", "Parent" : "0"},
	{"ID" : "488", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_26_U", "Parent" : "0"},
	{"ID" : "489", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_74_U", "Parent" : "0"},
	{"ID" : "490", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_27_U", "Parent" : "0"},
	{"ID" : "491", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_75_U", "Parent" : "0"},
	{"ID" : "492", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_28_U", "Parent" : "0"},
	{"ID" : "493", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_76_U", "Parent" : "0"},
	{"ID" : "494", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_29_U", "Parent" : "0"},
	{"ID" : "495", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_77_U", "Parent" : "0"},
	{"ID" : "496", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_30_U", "Parent" : "0"},
	{"ID" : "497", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_78_U", "Parent" : "0"},
	{"ID" : "498", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_31_U", "Parent" : "0"},
	{"ID" : "499", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_79_U", "Parent" : "0"},
	{"ID" : "500", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_32_U", "Parent" : "0"},
	{"ID" : "501", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_80_U", "Parent" : "0"},
	{"ID" : "502", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_33_U", "Parent" : "0"},
	{"ID" : "503", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_81_U", "Parent" : "0"},
	{"ID" : "504", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_34_U", "Parent" : "0"},
	{"ID" : "505", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_82_U", "Parent" : "0"},
	{"ID" : "506", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_35_U", "Parent" : "0"},
	{"ID" : "507", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_83_U", "Parent" : "0"},
	{"ID" : "508", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_36_U", "Parent" : "0"},
	{"ID" : "509", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_84_U", "Parent" : "0"},
	{"ID" : "510", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_37_U", "Parent" : "0"},
	{"ID" : "511", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_85_U", "Parent" : "0"},
	{"ID" : "512", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_38_U", "Parent" : "0"},
	{"ID" : "513", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_86_U", "Parent" : "0"},
	{"ID" : "514", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_39_U", "Parent" : "0"},
	{"ID" : "515", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_87_U", "Parent" : "0"},
	{"ID" : "516", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_40_U", "Parent" : "0"},
	{"ID" : "517", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_88_U", "Parent" : "0"},
	{"ID" : "518", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_41_U", "Parent" : "0"},
	{"ID" : "519", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_89_U", "Parent" : "0"},
	{"ID" : "520", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_42_U", "Parent" : "0"},
	{"ID" : "521", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_90_U", "Parent" : "0"},
	{"ID" : "522", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_43_U", "Parent" : "0"},
	{"ID" : "523", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_91_U", "Parent" : "0"},
	{"ID" : "524", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_44_U", "Parent" : "0"},
	{"ID" : "525", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_92_U", "Parent" : "0"},
	{"ID" : "526", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_45_U", "Parent" : "0"},
	{"ID" : "527", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_93_U", "Parent" : "0"},
	{"ID" : "528", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_46_U", "Parent" : "0"},
	{"ID" : "529", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_94_U", "Parent" : "0"},
	{"ID" : "530", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_47_U", "Parent" : "0"},
	{"ID" : "531", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.buffer1_1_96_4x4_p_V_95_U", "Parent" : "0"},
	{"ID" : "532", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit2_outp_U", "Parent" : "0"},
	{"ID" : "533", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_0_outpu_U", "Parent" : "0"},
	{"ID" : "534", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_1_outpu_U", "Parent" : "0"},
	{"ID" : "535", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "536", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_1_U", "Parent" : "0"},
	{"ID" : "537", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_0_U", "Parent" : "0"},
	{"ID" : "538", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_1_U", "Parent" : "0"},
	{"ID" : "539", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_2_U", "Parent" : "0"},
	{"ID" : "540", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_3_U", "Parent" : "0"},
	{"ID" : "541", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_4_U", "Parent" : "0"},
	{"ID" : "542", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_5_U", "Parent" : "0"},
	{"ID" : "543", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_6_U", "Parent" : "0"},
	{"ID" : "544", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_V_7_U", "Parent" : "0"},
	{"ID" : "545", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_V_U", "Parent" : "0"},
	{"ID" : "546", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_CTL_s_axi_U", "Parent" : "0"},
	{"ID" : "547", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_INPUT_OUTPUT_m_axi_U", "Parent" : "0"},
	{"ID" : "548", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_OTHER_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "549", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_p3X3_1X1_WEIGHTS_m_axi_U", "Parent" : "0"},
	{"ID" : "550", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_DATA_BIAS_m_axi_U", "Parent" : "0"},
	{"ID" : "551", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130", "Parent" : "0", "Child" : ["552", "554", "556", "558", "560", "562", "564", "566", "568", "570", "572", "574", "576", "578", "580", "582", "584", "586", "588", "590", "592", "594", "596", "598", "600"],
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
			{"Name" : "weight_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_32_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_33_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_34_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_35_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_36_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_37_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_38_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_39_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_40_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_41_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_42_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_43_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_44_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_45_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_46_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_47_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_48_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_49_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_50_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_51_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_52_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_53_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_54_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_55_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_56_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_57_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_58_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_59_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_60_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_61_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_62_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_63_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_64_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_65_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_66_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_67_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_68_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_69_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_70_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_71_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_72_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_73_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_74_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_75_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_76_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_77_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_78_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_79_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_80_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_81_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_82_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_83_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_84_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_85_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_86_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_87_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_88_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_89_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_90_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_91_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_92_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_93_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_94_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_95_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_96", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_48", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_49", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_50", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_51", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_52", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_53", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_54", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_55", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_56", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_57", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_58", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_59", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_60", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_61", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_62", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_63", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_64", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_65", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_66", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_67", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_68", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_69", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_70", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_71", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_72", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_25", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_73", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_26", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_74", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_27", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_75", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_28", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_76", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_29", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_77", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_30", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_78", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_31", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_79", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_32", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_80", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_33", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_81", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_34", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_82", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_35", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_83", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_36", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_84", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_37", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_85", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_38", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_86", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_39", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_87", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_40", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_88", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_41", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_89", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_42", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_90", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_43", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_91", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_44", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_92", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_45", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_93", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_46", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_94", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_47", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_96_4x4_p_V_95", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "552", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_4994", "Parent" : "551", "Child" : ["553"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "553", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_4994.ShuffleNetV2_mul_dEe_U7", "Parent" : "552"},
	{"ID" : "554", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5003", "Parent" : "551", "Child" : ["555"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "555", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5003.ShuffleNetV2_mul_dEe_U7", "Parent" : "554"},
	{"ID" : "556", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5012", "Parent" : "551", "Child" : ["557"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "557", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5012.ShuffleNetV2_mul_dEe_U7", "Parent" : "556"},
	{"ID" : "558", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5021", "Parent" : "551", "Child" : ["559"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "559", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5021.ShuffleNetV2_mul_dEe_U7", "Parent" : "558"},
	{"ID" : "560", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5030", "Parent" : "551", "Child" : ["561"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "561", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5030.ShuffleNetV2_mul_dEe_U7", "Parent" : "560"},
	{"ID" : "562", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5039", "Parent" : "551", "Child" : ["563"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "563", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5039.ShuffleNetV2_mul_dEe_U7", "Parent" : "562"},
	{"ID" : "564", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5048", "Parent" : "551", "Child" : ["565"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "565", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5048.ShuffleNetV2_mul_dEe_U7", "Parent" : "564"},
	{"ID" : "566", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5057", "Parent" : "551", "Child" : ["567"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "567", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5057.ShuffleNetV2_mul_dEe_U7", "Parent" : "566"},
	{"ID" : "568", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5066", "Parent" : "551", "Child" : ["569"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "569", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5066.ShuffleNetV2_mul_dEe_U7", "Parent" : "568"},
	{"ID" : "570", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5075", "Parent" : "551", "Child" : ["571"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "571", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5075.ShuffleNetV2_mul_dEe_U7", "Parent" : "570"},
	{"ID" : "572", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5084", "Parent" : "551", "Child" : ["573"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "573", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5084.ShuffleNetV2_mul_dEe_U7", "Parent" : "572"},
	{"ID" : "574", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5093", "Parent" : "551", "Child" : ["575"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "575", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5093.ShuffleNetV2_mul_dEe_U7", "Parent" : "574"},
	{"ID" : "576", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5102", "Parent" : "551", "Child" : ["577"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "577", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5102.ShuffleNetV2_mul_dEe_U7", "Parent" : "576"},
	{"ID" : "578", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5111", "Parent" : "551", "Child" : ["579"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "579", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5111.ShuffleNetV2_mul_dEe_U7", "Parent" : "578"},
	{"ID" : "580", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5120", "Parent" : "551", "Child" : ["581"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "581", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5120.ShuffleNetV2_mul_dEe_U7", "Parent" : "580"},
	{"ID" : "582", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5129", "Parent" : "551", "Child" : ["583"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "583", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5129.ShuffleNetV2_mul_dEe_U7", "Parent" : "582"},
	{"ID" : "584", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5138", "Parent" : "551", "Child" : ["585"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "585", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5138.ShuffleNetV2_mul_dEe_U7", "Parent" : "584"},
	{"ID" : "586", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5147", "Parent" : "551", "Child" : ["587"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "587", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5147.ShuffleNetV2_mul_dEe_U7", "Parent" : "586"},
	{"ID" : "588", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5156", "Parent" : "551", "Child" : ["589"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "589", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5156.ShuffleNetV2_mul_dEe_U7", "Parent" : "588"},
	{"ID" : "590", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5165", "Parent" : "551", "Child" : ["591"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "591", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5165.ShuffleNetV2_mul_dEe_U7", "Parent" : "590"},
	{"ID" : "592", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5174", "Parent" : "551", "Child" : ["593"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "593", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5174.ShuffleNetV2_mul_dEe_U7", "Parent" : "592"},
	{"ID" : "594", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5183", "Parent" : "551", "Child" : ["595"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "595", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5183.ShuffleNetV2_mul_dEe_U7", "Parent" : "594"},
	{"ID" : "596", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5192", "Parent" : "551", "Child" : ["597"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "597", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5192.ShuffleNetV2_mul_dEe_U7", "Parent" : "596"},
	{"ID" : "598", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5201", "Parent" : "551", "Child" : ["599"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "599", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.grp_MUL_DP_fu_5201.ShuffleNetV2_mul_dEe_U7", "Parent" : "598"},
	{"ID" : "600", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_4_p_fu_22130.ShuffleNetV2_mux_g8j_x_U1011", "Parent" : "551"},
	{"ID" : "601", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522", "Parent" : "0", "Child" : ["602", "604", "606", "608", "610", "612", "614", "616", "618", "620", "622", "624", "626", "628", "630", "632", "634", "636", "638", "640", "642", "644", "646", "648", "650"],
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
			{"Name" : "weight_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_32_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_33_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_34_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_35_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_36_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_37_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_38_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_39_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_40_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_41_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_42_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_43_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_44_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_45_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_46_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_47_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_48", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_25", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_26", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_27", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_28", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_29", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_30", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_31", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_32", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_33", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_34", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_35", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_36", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_37", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_38", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_39", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_40", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_41", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_42", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_43", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_44", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_45", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_46", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "buffer1_1_48_8x8_p_V_47", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "602", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2598", "Parent" : "601", "Child" : ["603"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "603", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2598.ShuffleNetV2_mul_dEe_U7", "Parent" : "602"},
	{"ID" : "604", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2607", "Parent" : "601", "Child" : ["605"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "605", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2607.ShuffleNetV2_mul_dEe_U7", "Parent" : "604"},
	{"ID" : "606", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2616", "Parent" : "601", "Child" : ["607"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "607", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2616.ShuffleNetV2_mul_dEe_U7", "Parent" : "606"},
	{"ID" : "608", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2625", "Parent" : "601", "Child" : ["609"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "609", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2625.ShuffleNetV2_mul_dEe_U7", "Parent" : "608"},
	{"ID" : "610", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2634", "Parent" : "601", "Child" : ["611"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "611", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2634.ShuffleNetV2_mul_dEe_U7", "Parent" : "610"},
	{"ID" : "612", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2643", "Parent" : "601", "Child" : ["613"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "613", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2643.ShuffleNetV2_mul_dEe_U7", "Parent" : "612"},
	{"ID" : "614", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2652", "Parent" : "601", "Child" : ["615"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "615", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2652.ShuffleNetV2_mul_dEe_U7", "Parent" : "614"},
	{"ID" : "616", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2661", "Parent" : "601", "Child" : ["617"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "617", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2661.ShuffleNetV2_mul_dEe_U7", "Parent" : "616"},
	{"ID" : "618", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2670", "Parent" : "601", "Child" : ["619"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "619", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2670.ShuffleNetV2_mul_dEe_U7", "Parent" : "618"},
	{"ID" : "620", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2679", "Parent" : "601", "Child" : ["621"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "621", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2679.ShuffleNetV2_mul_dEe_U7", "Parent" : "620"},
	{"ID" : "622", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2688", "Parent" : "601", "Child" : ["623"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "623", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2688.ShuffleNetV2_mul_dEe_U7", "Parent" : "622"},
	{"ID" : "624", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2697", "Parent" : "601", "Child" : ["625"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "625", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2697.ShuffleNetV2_mul_dEe_U7", "Parent" : "624"},
	{"ID" : "626", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2706", "Parent" : "601", "Child" : ["627"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "627", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2706.ShuffleNetV2_mul_dEe_U7", "Parent" : "626"},
	{"ID" : "628", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2715", "Parent" : "601", "Child" : ["629"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "629", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2715.ShuffleNetV2_mul_dEe_U7", "Parent" : "628"},
	{"ID" : "630", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2724", "Parent" : "601", "Child" : ["631"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "631", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2724.ShuffleNetV2_mul_dEe_U7", "Parent" : "630"},
	{"ID" : "632", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2733", "Parent" : "601", "Child" : ["633"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "633", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2733.ShuffleNetV2_mul_dEe_U7", "Parent" : "632"},
	{"ID" : "634", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2742", "Parent" : "601", "Child" : ["635"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "635", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2742.ShuffleNetV2_mul_dEe_U7", "Parent" : "634"},
	{"ID" : "636", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2751", "Parent" : "601", "Child" : ["637"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "637", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2751.ShuffleNetV2_mul_dEe_U7", "Parent" : "636"},
	{"ID" : "638", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2760", "Parent" : "601", "Child" : ["639"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "639", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2760.ShuffleNetV2_mul_dEe_U7", "Parent" : "638"},
	{"ID" : "640", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2769", "Parent" : "601", "Child" : ["641"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "641", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2769.ShuffleNetV2_mul_dEe_U7", "Parent" : "640"},
	{"ID" : "642", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2778", "Parent" : "601", "Child" : ["643"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "643", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2778.ShuffleNetV2_mul_dEe_U7", "Parent" : "642"},
	{"ID" : "644", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2787", "Parent" : "601", "Child" : ["645"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "645", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2787.ShuffleNetV2_mul_dEe_U7", "Parent" : "644"},
	{"ID" : "646", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2796", "Parent" : "601", "Child" : ["647"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "647", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2796.ShuffleNetV2_mul_dEe_U7", "Parent" : "646"},
	{"ID" : "648", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2805", "Parent" : "601", "Child" : ["649"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "649", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.grp_MUL_DP_fu_2805.ShuffleNetV2_mul_dEe_U7", "Parent" : "648"},
	{"ID" : "650", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8_p_fu_22522.ShuffleNetV2_mux_fYi_x_U407", "Parent" : "601"},
	{"ID" : "651", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722", "Parent" : "0", "Child" : ["652", "654", "656", "658", "660", "662", "664", "666", "668", "670", "672", "674", "676"],
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
			{"Name" : "weight_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_32_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_33_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_34_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_35_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_36_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_37_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_38_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_39_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_40_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_41_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_42_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_43_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_44_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_45_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_46_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_47_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_48_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_49_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_50_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_51_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_52_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_53_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_54_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_55_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_56_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_57_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_58_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_59_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_60_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_61_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_62_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_63_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_64_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_65_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_66_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_67_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_68_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_69_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_70_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_71_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_72_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_73_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_74_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_75_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_76_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_77_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_78_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_79_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_80_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_81_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_82_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_83_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_84_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_85_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_86_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_87_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_88_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_89_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_90_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_91_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_92_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_93_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_94_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_95_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_95", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_52", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_94", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_51", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_83", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_49", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_72", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_48", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_61", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_47", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_50", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_46", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_39", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_45", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_28", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_44", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_43", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_42", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_93", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_41", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_92", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_40", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_91", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_38", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_90", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_37", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_89", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_36", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_88", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_35", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_87", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_34", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_86", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_33", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_85", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_32", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_84", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_31", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_82", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_30", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_81", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_29", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_80", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_27", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_79", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_26", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_78", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_25", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_77", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_76", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_75", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_74", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_73", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_71", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_70", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_69", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_68", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_67", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_66", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_65", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_64", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_63", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_62", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_60", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_59", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_58", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_57", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_56", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_55", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_54", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs_53", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "652", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5076", "Parent" : "651", "Child" : ["653"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "653", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5076.ShuffleNetV2_mul_dEe_U7", "Parent" : "652"},
	{"ID" : "654", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5085", "Parent" : "651", "Child" : ["655"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "655", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5085.ShuffleNetV2_mul_dEe_U7", "Parent" : "654"},
	{"ID" : "656", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5094", "Parent" : "651", "Child" : ["657"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "657", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5094.ShuffleNetV2_mul_dEe_U7", "Parent" : "656"},
	{"ID" : "658", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5103", "Parent" : "651", "Child" : ["659"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "659", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5103.ShuffleNetV2_mul_dEe_U7", "Parent" : "658"},
	{"ID" : "660", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5112", "Parent" : "651", "Child" : ["661"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "661", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5112.ShuffleNetV2_mul_dEe_U7", "Parent" : "660"},
	{"ID" : "662", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5121", "Parent" : "651", "Child" : ["663"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "663", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5121.ShuffleNetV2_mul_dEe_U7", "Parent" : "662"},
	{"ID" : "664", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5130", "Parent" : "651", "Child" : ["665"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "665", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5130.ShuffleNetV2_mul_dEe_U7", "Parent" : "664"},
	{"ID" : "666", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5139", "Parent" : "651", "Child" : ["667"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "667", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5139.ShuffleNetV2_mul_dEe_U7", "Parent" : "666"},
	{"ID" : "668", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5148", "Parent" : "651", "Child" : ["669"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "669", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5148.ShuffleNetV2_mul_dEe_U7", "Parent" : "668"},
	{"ID" : "670", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5157", "Parent" : "651", "Child" : ["671"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "671", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5157.ShuffleNetV2_mul_dEe_U7", "Parent" : "670"},
	{"ID" : "672", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5166", "Parent" : "651", "Child" : ["673"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "673", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5166.ShuffleNetV2_mul_dEe_U7", "Parent" : "672"},
	{"ID" : "674", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5175", "Parent" : "651", "Child" : ["675"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "675", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.grp_MUL_DP_fu_5175.ShuffleNetV2_mul_dEe_U7", "Parent" : "674"},
	{"ID" : "676", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_8p_p_fu_22722.ShuffleNetV2_mux_g8j_U715", "Parent" : "651"},
	{"ID" : "677", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114", "Parent" : "0", "Child" : ["678", "680", "682", "684", "686", "688", "690"],
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
			{"Name" : "weight_24_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_25_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_26_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_27_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_28_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_29_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_30_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_31_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_32_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_33_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_34_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_35_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_36_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_37_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_38_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_39_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_40_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_41_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_42_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_43_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_44_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_45_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_46_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "weight_47_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_47", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_30", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_46", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_29", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_35", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_28", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_24", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_27", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_26", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_25", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_45", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_44", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_43", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_42", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_41", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_40", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_39", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_38", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_37", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_36", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_34", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_33", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_32", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_31", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "678", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2726", "Parent" : "677", "Child" : ["679"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "679", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2726.ShuffleNetV2_mul_dEe_U7", "Parent" : "678"},
	{"ID" : "680", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2735", "Parent" : "677", "Child" : ["681"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "681", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2735.ShuffleNetV2_mul_dEe_U7", "Parent" : "680"},
	{"ID" : "682", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2744", "Parent" : "677", "Child" : ["683"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "683", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2744.ShuffleNetV2_mul_dEe_U7", "Parent" : "682"},
	{"ID" : "684", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2753", "Parent" : "677", "Child" : ["685"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "685", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2753.ShuffleNetV2_mul_dEe_U7", "Parent" : "684"},
	{"ID" : "686", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2762", "Parent" : "677", "Child" : ["687"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "687", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2762.ShuffleNetV2_mul_dEe_U7", "Parent" : "686"},
	{"ID" : "688", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2771", "Parent" : "677", "Child" : ["689"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "689", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.grp_MUL_DP_fu_2771.ShuffleNetV2_mul_dEe_U7", "Parent" : "688"},
	{"ID" : "690", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16p_p_fu_23114.ShuffleNetV2_mux_fYi_U255", "Parent" : "677"},
	{"ID" : "691", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314", "Parent" : "0", "Child" : ["692", "694", "696", "698", "700", "702", "704", "706", "708", "710", "712", "714", "716"],
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
	{"ID" : "692", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1422", "Parent" : "691", "Child" : ["693"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "693", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1422.ShuffleNetV2_mul_dEe_U7", "Parent" : "692"},
	{"ID" : "694", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1432", "Parent" : "691", "Child" : ["695"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "695", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1432.ShuffleNetV2_mul_dEe_U7", "Parent" : "694"},
	{"ID" : "696", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1442", "Parent" : "691", "Child" : ["697"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "697", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1442.ShuffleNetV2_mul_dEe_U7", "Parent" : "696"},
	{"ID" : "698", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1452", "Parent" : "691", "Child" : ["699"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "699", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1452.ShuffleNetV2_mul_dEe_U7", "Parent" : "698"},
	{"ID" : "700", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1462", "Parent" : "691", "Child" : ["701"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "701", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1462.ShuffleNetV2_mul_dEe_U7", "Parent" : "700"},
	{"ID" : "702", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1472", "Parent" : "691", "Child" : ["703"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "703", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1472.ShuffleNetV2_mul_dEe_U7", "Parent" : "702"},
	{"ID" : "704", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1482", "Parent" : "691", "Child" : ["705"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "705", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1482.ShuffleNetV2_mul_dEe_U7", "Parent" : "704"},
	{"ID" : "706", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1492", "Parent" : "691", "Child" : ["707"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "707", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1492.ShuffleNetV2_mul_dEe_U7", "Parent" : "706"},
	{"ID" : "708", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1502", "Parent" : "691", "Child" : ["709"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "709", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1502.ShuffleNetV2_mul_dEe_U7", "Parent" : "708"},
	{"ID" : "710", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1512", "Parent" : "691", "Child" : ["711"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "711", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1512.ShuffleNetV2_mul_dEe_U7", "Parent" : "710"},
	{"ID" : "712", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1522", "Parent" : "691", "Child" : ["713"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "713", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1522.ShuffleNetV2_mul_dEe_U7", "Parent" : "712"},
	{"ID" : "714", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1532", "Parent" : "691", "Child" : ["715"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "715", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.grp_MUL_DP_fu_1532.ShuffleNetV2_mul_dEe_U7", "Parent" : "714"},
	{"ID" : "716", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_32_p_fu_23314.ShuffleNetV2_mux_eOg_U11", "Parent" : "691"},
	{"ID" : "717", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418", "Parent" : "0", "Child" : ["718", "720", "722", "724", "726", "728", "730", "732", "734", "736", "738", "740", "742"],
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
	{"ID" : "718", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1416", "Parent" : "717", "Child" : ["719"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "719", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1416.ShuffleNetV2_mul_dEe_U7", "Parent" : "718"},
	{"ID" : "720", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1426", "Parent" : "717", "Child" : ["721"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "721", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1426.ShuffleNetV2_mul_dEe_U7", "Parent" : "720"},
	{"ID" : "722", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1436", "Parent" : "717", "Child" : ["723"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "723", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1436.ShuffleNetV2_mul_dEe_U7", "Parent" : "722"},
	{"ID" : "724", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1446", "Parent" : "717", "Child" : ["725"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "725", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1446.ShuffleNetV2_mul_dEe_U7", "Parent" : "724"},
	{"ID" : "726", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1456", "Parent" : "717", "Child" : ["727"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "727", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1456.ShuffleNetV2_mul_dEe_U7", "Parent" : "726"},
	{"ID" : "728", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1466", "Parent" : "717", "Child" : ["729"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "729", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1466.ShuffleNetV2_mul_dEe_U7", "Parent" : "728"},
	{"ID" : "730", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1476", "Parent" : "717", "Child" : ["731"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "731", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1476.ShuffleNetV2_mul_dEe_U7", "Parent" : "730"},
	{"ID" : "732", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1486", "Parent" : "717", "Child" : ["733"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "733", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1486.ShuffleNetV2_mul_dEe_U7", "Parent" : "732"},
	{"ID" : "734", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1496", "Parent" : "717", "Child" : ["735"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "735", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1496.ShuffleNetV2_mul_dEe_U7", "Parent" : "734"},
	{"ID" : "736", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1506", "Parent" : "717", "Child" : ["737"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "737", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1506.ShuffleNetV2_mul_dEe_U7", "Parent" : "736"},
	{"ID" : "738", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1516", "Parent" : "717", "Child" : ["739"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "739", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1516.ShuffleNetV2_mul_dEe_U7", "Parent" : "738"},
	{"ID" : "740", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1526", "Parent" : "717", "Child" : ["741"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "741", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.grp_MUL_DP_fu_1526.ShuffleNetV2_mul_dEe_U7", "Parent" : "740"},
	{"ID" : "742", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_1x1_16_p_fu_23418.ShuffleNetV2_mux_eOg_x_U91", "Parent" : "717"},
	{"ID" : "743", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522", "Parent" : "0", "Child" : ["744", "745", "746", "747", "748", "749", "750", "751", "752", "753", "754", "755", "756", "757", "758", "759", "760"],
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
	{"ID" : "744", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_0_0_0_U", "Parent" : "743"},
	{"ID" : "745", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_1_0_0_U", "Parent" : "743"},
	{"ID" : "746", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_2_0_0_U", "Parent" : "743"},
	{"ID" : "747", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_3_0_0_U", "Parent" : "743"},
	{"ID" : "748", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_4_0_0_U", "Parent" : "743"},
	{"ID" : "749", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_5_0_0_U", "Parent" : "743"},
	{"ID" : "750", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_6_0_0_U", "Parent" : "743"},
	{"ID" : "751", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.weight_temp_7_0_0_U", "Parent" : "743"},
	{"ID" : "752", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mux_pcA_U1607", "Parent" : "743"},
	{"ID" : "753", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1608", "Parent" : "743"},
	{"ID" : "754", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1609", "Parent" : "743"},
	{"ID" : "755", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1610", "Parent" : "743"},
	{"ID" : "756", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1611", "Parent" : "743"},
	{"ID" : "757", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1612", "Parent" : "743"},
	{"ID" : "758", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1613", "Parent" : "743"},
	{"ID" : "759", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1614", "Parent" : "743"},
	{"ID" : "760", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_23522.ShuffleNetV2_mac_cud_x_U1615", "Parent" : "743"},
	{"ID" : "761", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_23549", "Parent" : "0", "Child" : ["762", "763"],
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
			{"Name" : "ShuffleConvs_2_Downs_95", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "762", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_23549.ShuffleNetV2_mux_g8j_x_U910", "Parent" : "761"},
	{"ID" : "763", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_fu_23549.ShuffleNetV2_mac_cud_x_U911", "Parent" : "761"},
	{"ID" : "764", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_23751", "Parent" : "0", "Child" : ["765", "766"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_96", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_95", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "765", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_23751.ShuffleNetV2_mux_g8j_x_U1407", "Parent" : "764"},
	{"ID" : "766", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_4_no_rel_fu_23751.ShuffleNetV2_mac_cud_x_U1408", "Parent" : "764"},
	{"ID" : "767", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_23953", "Parent" : "0", "Child" : ["768", "769"],
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
	{"ID" : "768", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_23953.weight_temp_V_U", "Parent" : "767"},
	{"ID" : "769", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_p_fu_23953.ShuffleNetV2_mac_cud_U0", "Parent" : "767"},
	{"ID" : "770", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_23966", "Parent" : "0", "Child" : ["771"],
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
			{"Name" : "buffer1_1_96_4x4_p_V_96", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_95", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "771", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_p_fu_23966.ShuffleNetV2_mux_g8j_x_U1508", "Parent" : "770"},
	{"ID" : "772", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_24168", "Parent" : "0", "Child" : ["773"],
		"CDFG" : "shuffle_96_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_96", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_95", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "773", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_l_p_fu_24168.ShuffleNetV2_mux_g8j_x_U1206", "Parent" : "772"},
	{"ID" : "774", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_24366", "Parent" : "0", "Child" : ["775"],
		"CDFG" : "shuffle_96_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_96_4x4_p_V_96", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_96_4x4_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_48", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_49", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_50", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_51", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_52", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_53", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_54", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_55", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_56", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_57", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_58", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_59", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_60", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_61", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_62", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_63", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_64", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_65", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_66", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_67", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_68", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_69", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_70", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_71", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_72", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_73", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_74", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_75", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_76", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_77", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_78", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_79", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_80", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_81", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_82", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_83", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_84", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_85", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_86", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_87", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_88", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_89", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_90", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_91", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_92", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_93", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_94", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_96_4x4_p_V_95", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "775", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_96_r_p_fu_24366.ShuffleNetV2_mux_g8j_x_U1309", "Parent" : "774"},
	{"ID" : "776", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_24564", "Parent" : "0", "Child" : ["777", "778"],
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
			{"Name" : "ShuffleConvs_1_Downs_47", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_13", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_22", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_21", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_20", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_19", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_18", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_17", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_16", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_15", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_14", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_12", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_11", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "777", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_24564.ShuffleNetV2_mux_fYi_x_U354", "Parent" : "776"},
	{"ID" : "778", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_fu_24564.ShuffleNetV2_mac_cud_x_U355", "Parent" : "776"},
	{"ID" : "779", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_24670", "Parent" : "0", "Child" : ["780", "781"],
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
			{"Name" : "buffer1_1_48_8x8_p_V_48", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_47", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "780", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_24670.ShuffleNetV2_mux_fYi_x_U611", "Parent" : "779"},
	{"ID" : "781", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_no_rel_fu_24670.ShuffleNetV2_mac_cud_x_U612", "Parent" : "779"},
	{"ID" : "782", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_24776", "Parent" : "0", "Child" : ["783"],
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
			{"Name" : "buffer1_1_48_8x8_p_V_48", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_47", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "783", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_p_fu_24776.ShuffleNetV2_mux_fYi_x_U664", "Parent" : "782"},
	{"ID" : "784", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_1_fu_24887", "Parent" : "0", "Child" : ["785", "786"],
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
	{"ID" : "785", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_1_fu_24887.ShuffleNetV2_mux_eOg_x_U62", "Parent" : "784"},
	{"ID" : "786", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_1_fu_24887.ShuffleNetV2_mac_cud_x_U63", "Parent" : "784"},
	{"ID" : "787", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_24945", "Parent" : "0", "Child" : ["788", "789"],
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
	{"ID" : "788", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_24945.ShuffleNetV2_mux_eOg_x_U199", "Parent" : "787"},
	{"ID" : "789", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_no_re_fu_24945.ShuffleNetV2_mac_cud_x_U200", "Parent" : "787"},
	{"ID" : "790", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_25003", "Parent" : "0", "Child" : ["791"],
		"CDFG" : "shuffle_48_l_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_48", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_47", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "791", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_l_p_fu_25003.ShuffleNetV2_mux_fYi_x_U506", "Parent" : "790"},
	{"ID" : "792", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_25105", "Parent" : "0", "Child" : ["793"],
		"CDFG" : "shuffle_48_r_p",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "buffer1_1_48_8x8_p_V_48", "Type" : "Memory", "Direction" : "I"},
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
			{"Name" : "buffer1_1_48_8x8_p_V_23", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_24", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_25", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_26", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_27", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_28", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_29", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_30", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_31", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_32", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_33", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_34", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_35", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_36", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_37", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_38", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_39", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_40", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_41", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_42", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_43", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_44", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_45", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_46", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "buffer1_1_48_8x8_p_V_47", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "793", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_48_r_p_fu_25105.ShuffleNetV2_mux_fYi_x_U561", "Parent" : "792"},
	{"ID" : "794", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_25207", "Parent" : "0", "Child" : ["795"],
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
	{"ID" : "795", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_p_fu_25207.ShuffleNetV2_mux_eOg_x_U228", "Parent" : "794"},
	{"ID" : "796", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_25265", "Parent" : "0", "Child" : ["797"],
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
	{"ID" : "797", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_l_p_fu_25265.ShuffleNetV2_mux_eOg_x_U142", "Parent" : "796"},
	{"ID" : "798", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_25319", "Parent" : "0", "Child" : ["799"],
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
	{"ID" : "799", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_shuffle_24_r_p_fu_25319.ShuffleNetV2_mux_eOg_x_U173", "Parent" : "798"},
	{"ID" : "800", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_25373", "Parent" : "0", "Child" : ["801"],
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
			{"Name" : "conv1_output_p_V", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "801", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_32_strid_fu_25373.ShuffleNetV2_mac_cud_x_U168", "Parent" : "800"},
	{"ID" : "802", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_25385", "Parent" : "0", "Child" : ["803"],
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
	{"ID" : "803", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_8_stride_1_fu_25385.ShuffleNetV2_mac_cud_x_U1304", "Parent" : "802"},
	{"ID" : "804", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_25397", "Parent" : "0", "Child" : ["805"],
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
	{"ID" : "805", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_subconv_3x3_16_strid_1_fu_25397.ShuffleNetV2_mac_cud_x_U556", "Parent" : "804"},
	{"ID" : "806", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_25409", "Parent" : "0", "Child" : ["807"],
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
	{"ID" : "807", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_fc_fu_25409.ShuffleNetV2_mac_cud_x_U1629", "Parent" : "806"},
	{"ID" : "808", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_pcA_x_U1636", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		DATA_INPUT_OUTPUT {Type IO LastRead 34 FirstWrite 11}
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
		downsampleunit0_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_2_outpu {Type IO LastRead -1 FirstWrite -1}
		bias_48_V {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_47 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_30 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_46 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_29 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_35 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_28 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_24 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_27 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_26 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_25 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_23 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_45 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_44 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_43 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_42 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_16 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_41 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_40 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_14 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_39 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_12 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_38 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_37 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_36 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_34 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_33 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_32 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_31 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type IO LastRead -1 FirstWrite -1}
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
		weights_48_48_1x1_V_24 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_25 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_26 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_27 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_28 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_29 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_30 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_31 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_32 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_33 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_34 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_35 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_36 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_37 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_38 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_39 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_40 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_41 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_42 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_43 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_44 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_45 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_46 {Type IO LastRead -1 FirstWrite -1}
		weights_48_48_1x1_V_47 {Type IO LastRead -1 FirstWrite -1}
		weights_48_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_48_8x8_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_48 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_25 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_26 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_27 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_28 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_29 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_30 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_31 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_32 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_33 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_34 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_35 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_36 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_37 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_38 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_39 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_40 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_41 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_42 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_43 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_44 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_45 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_46 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_48_8x8_p_V_47 {Type IO LastRead -1 FirstWrite -1}
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
		ShuffleConvs_2_Downs_95 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_52 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_94 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_51 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_83 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_49 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_72 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_48 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_61 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_47 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_50 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_46 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_39 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_45 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_28 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_44 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_43 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_42 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_93 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_41 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_92 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_40 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_91 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_38 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_90 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_37 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_89 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_36 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_88 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_35 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_87 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_34 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_86 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_33 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_85 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_32 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_84 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_31 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_82 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_30 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_81 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_29 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_80 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_27 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_79 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_26 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_78 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_25 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_77 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_24 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_76 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_23 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_75 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_74 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_73 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_71 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_70 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_69 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_16 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_68 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_67 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_14 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_66 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_65 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_12 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_64 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_63 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_62 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_60 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_59 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_58 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_57 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_56 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_55 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_54 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_53 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
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
		weights_96_96_1x1_V_24 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_25 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_26 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_27 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_28 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_29 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_30 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_31 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_32 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_33 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_34 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_35 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_36 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_37 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_38 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_39 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_40 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_41 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_42 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_43 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_44 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_45 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_46 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_47 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_48 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_49 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_50 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_51 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_52 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_53 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_54 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_55 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_56 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_57 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_58 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_59 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_60 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_61 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_62 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_63 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_64 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_65 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_66 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_67 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_68 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_69 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_70 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_71 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_72 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_73 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_74 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_75 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_76 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_77 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_78 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_79 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_80 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_81 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_82 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_83 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_84 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_85 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_86 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_87 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_88 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_89 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_90 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_91 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_92 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_93 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_94 {Type IO LastRead -1 FirstWrite -1}
		weights_96_96_1x1_V_95 {Type IO LastRead -1 FirstWrite -1}
		weights_96_1_3x3_V {Type IO LastRead -1 FirstWrite -1}
		buffer0_1_96_4x4_p_V {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_96 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_48 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_49 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_50 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_51 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_52 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_53 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_54 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_55 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_56 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_57 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_58 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_59 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_60 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_61 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_62 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_63 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_64 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_65 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_66 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_67 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_68 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_69 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_70 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_71 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_72 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_25 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_73 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_26 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_74 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_27 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_75 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_28 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_76 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_29 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_77 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_30 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_78 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_31 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_79 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_32 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_80 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_33 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_81 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_34 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_82 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_35 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_83 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_36 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_84 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_37 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_85 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_38 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_86 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_39 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_87 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_40 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_88 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_41 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_89 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_42 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_90 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_43 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_91 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_44 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_92 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_45 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_93 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_46 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_94 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_47 {Type IO LastRead -1 FirstWrite -1}
		buffer1_1_96_4x4_p_V_95 {Type IO LastRead -1 FirstWrite -1}
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
		weight_24_V {Type I LastRead 8 FirstWrite -1}
		weight_25_V {Type I LastRead 8 FirstWrite -1}
		weight_26_V {Type I LastRead 8 FirstWrite -1}
		weight_27_V {Type I LastRead 8 FirstWrite -1}
		weight_28_V {Type I LastRead 8 FirstWrite -1}
		weight_29_V {Type I LastRead 8 FirstWrite -1}
		weight_30_V {Type I LastRead 8 FirstWrite -1}
		weight_31_V {Type I LastRead 8 FirstWrite -1}
		weight_32_V {Type I LastRead 8 FirstWrite -1}
		weight_33_V {Type I LastRead 8 FirstWrite -1}
		weight_34_V {Type I LastRead 8 FirstWrite -1}
		weight_35_V {Type I LastRead 8 FirstWrite -1}
		weight_36_V {Type I LastRead 8 FirstWrite -1}
		weight_37_V {Type I LastRead 8 FirstWrite -1}
		weight_38_V {Type I LastRead 8 FirstWrite -1}
		weight_39_V {Type I LastRead 8 FirstWrite -1}
		weight_40_V {Type I LastRead 8 FirstWrite -1}
		weight_41_V {Type I LastRead 8 FirstWrite -1}
		weight_42_V {Type I LastRead 8 FirstWrite -1}
		weight_43_V {Type I LastRead 8 FirstWrite -1}
		weight_44_V {Type I LastRead 8 FirstWrite -1}
		weight_45_V {Type I LastRead 8 FirstWrite -1}
		weight_46_V {Type I LastRead 8 FirstWrite -1}
		weight_47_V {Type I LastRead 8 FirstWrite -1}
		weight_48_V {Type I LastRead 7 FirstWrite -1}
		weight_49_V {Type I LastRead 7 FirstWrite -1}
		weight_50_V {Type I LastRead 7 FirstWrite -1}
		weight_51_V {Type I LastRead 7 FirstWrite -1}
		weight_52_V {Type I LastRead 7 FirstWrite -1}
		weight_53_V {Type I LastRead 7 FirstWrite -1}
		weight_54_V {Type I LastRead 7 FirstWrite -1}
		weight_55_V {Type I LastRead 7 FirstWrite -1}
		weight_56_V {Type I LastRead 7 FirstWrite -1}
		weight_57_V {Type I LastRead 7 FirstWrite -1}
		weight_58_V {Type I LastRead 7 FirstWrite -1}
		weight_59_V {Type I LastRead 7 FirstWrite -1}
		weight_60_V {Type I LastRead 7 FirstWrite -1}
		weight_61_V {Type I LastRead 7 FirstWrite -1}
		weight_62_V {Type I LastRead 7 FirstWrite -1}
		weight_63_V {Type I LastRead 7 FirstWrite -1}
		weight_64_V {Type I LastRead 7 FirstWrite -1}
		weight_65_V {Type I LastRead 7 FirstWrite -1}
		weight_66_V {Type I LastRead 7 FirstWrite -1}
		weight_67_V {Type I LastRead 7 FirstWrite -1}
		weight_68_V {Type I LastRead 7 FirstWrite -1}
		weight_69_V {Type I LastRead 7 FirstWrite -1}
		weight_70_V {Type I LastRead 7 FirstWrite -1}
		weight_71_V {Type I LastRead 7 FirstWrite -1}
		weight_72_V {Type I LastRead 8 FirstWrite -1}
		weight_73_V {Type I LastRead 8 FirstWrite -1}
		weight_74_V {Type I LastRead 8 FirstWrite -1}
		weight_75_V {Type I LastRead 8 FirstWrite -1}
		weight_76_V {Type I LastRead 8 FirstWrite -1}
		weight_77_V {Type I LastRead 8 FirstWrite -1}
		weight_78_V {Type I LastRead 8 FirstWrite -1}
		weight_79_V {Type I LastRead 8 FirstWrite -1}
		weight_80_V {Type I LastRead 8 FirstWrite -1}
		weight_81_V {Type I LastRead 8 FirstWrite -1}
		weight_82_V {Type I LastRead 8 FirstWrite -1}
		weight_83_V {Type I LastRead 8 FirstWrite -1}
		weight_84_V {Type I LastRead 8 FirstWrite -1}
		weight_85_V {Type I LastRead 8 FirstWrite -1}
		weight_86_V {Type I LastRead 8 FirstWrite -1}
		weight_87_V {Type I LastRead 8 FirstWrite -1}
		weight_88_V {Type I LastRead 8 FirstWrite -1}
		weight_89_V {Type I LastRead 8 FirstWrite -1}
		weight_90_V {Type I LastRead 8 FirstWrite -1}
		weight_91_V {Type I LastRead 8 FirstWrite -1}
		weight_92_V {Type I LastRead 8 FirstWrite -1}
		weight_93_V {Type I LastRead 8 FirstWrite -1}
		weight_94_V {Type I LastRead 8 FirstWrite -1}
		weight_95_V {Type I LastRead 8 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_96_4x4_p_V_96 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_48 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_1 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_49 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_2 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_50 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_3 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_51 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_4 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_52 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_5 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_53 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_6 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_54 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_7 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_55 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_8 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_56 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_9 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_57 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_10 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_58 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_11 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_59 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_12 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_60 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_13 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_61 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_14 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_62 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_15 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_63 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_16 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_64 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_17 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_65 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_18 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_66 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_19 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_67 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_20 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_68 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_21 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_69 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_22 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_70 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_23 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_71 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_96_4x4_p_V_24 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_72 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_25 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_73 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_26 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_74 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_27 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_75 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_28 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_76 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_29 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_77 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_30 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_78 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_31 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_79 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_32 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_80 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_33 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_81 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_34 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_82 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_35 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_83 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_36 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_84 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_37 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_85 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_38 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_86 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_39 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_87 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_40 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_88 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_41 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_89 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_42 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_90 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_43 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_91 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_44 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_92 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_45 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_93 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_46 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_94 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_47 {Type IO LastRead 11 FirstWrite 3}
		buffer1_1_96_4x4_p_V_95 {Type IO LastRead 11 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
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
		weight_24_V {Type I LastRead 7 FirstWrite -1}
		weight_25_V {Type I LastRead 7 FirstWrite -1}
		weight_26_V {Type I LastRead 7 FirstWrite -1}
		weight_27_V {Type I LastRead 7 FirstWrite -1}
		weight_28_V {Type I LastRead 7 FirstWrite -1}
		weight_29_V {Type I LastRead 7 FirstWrite -1}
		weight_30_V {Type I LastRead 7 FirstWrite -1}
		weight_31_V {Type I LastRead 7 FirstWrite -1}
		weight_32_V {Type I LastRead 7 FirstWrite -1}
		weight_33_V {Type I LastRead 7 FirstWrite -1}
		weight_34_V {Type I LastRead 7 FirstWrite -1}
		weight_35_V {Type I LastRead 7 FirstWrite -1}
		weight_36_V {Type I LastRead 7 FirstWrite -1}
		weight_37_V {Type I LastRead 7 FirstWrite -1}
		weight_38_V {Type I LastRead 7 FirstWrite -1}
		weight_39_V {Type I LastRead 7 FirstWrite -1}
		weight_40_V {Type I LastRead 7 FirstWrite -1}
		weight_41_V {Type I LastRead 7 FirstWrite -1}
		weight_42_V {Type I LastRead 7 FirstWrite -1}
		weight_43_V {Type I LastRead 7 FirstWrite -1}
		weight_44_V {Type I LastRead 7 FirstWrite -1}
		weight_45_V {Type I LastRead 7 FirstWrite -1}
		weight_46_V {Type I LastRead 7 FirstWrite -1}
		weight_47_V {Type I LastRead 7 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		buffer1_1_48_8x8_p_V_48 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_24 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_1 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_25 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_2 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_26 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_3 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_27 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_4 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_28 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_5 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_29 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_6 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_30 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_7 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_31 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_8 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_32 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_9 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_33 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_10 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_34 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_11 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_35 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_12 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_36 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_13 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_37 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_14 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_38 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_15 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_39 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_16 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_40 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_17 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_41 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_18 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_42 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_19 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_43 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_20 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_44 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_21 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_45 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_22 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_46 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_23 {Type IO LastRead 10 FirstWrite 3}
		buffer1_1_48_8x8_p_V_47 {Type IO LastRead 10 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
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
		weight_24_V {Type I LastRead 9 FirstWrite -1}
		weight_25_V {Type I LastRead 9 FirstWrite -1}
		weight_26_V {Type I LastRead 9 FirstWrite -1}
		weight_27_V {Type I LastRead 9 FirstWrite -1}
		weight_28_V {Type I LastRead 9 FirstWrite -1}
		weight_29_V {Type I LastRead 9 FirstWrite -1}
		weight_30_V {Type I LastRead 9 FirstWrite -1}
		weight_31_V {Type I LastRead 9 FirstWrite -1}
		weight_32_V {Type I LastRead 9 FirstWrite -1}
		weight_33_V {Type I LastRead 9 FirstWrite -1}
		weight_34_V {Type I LastRead 9 FirstWrite -1}
		weight_35_V {Type I LastRead 9 FirstWrite -1}
		weight_36_V {Type I LastRead 10 FirstWrite -1}
		weight_37_V {Type I LastRead 10 FirstWrite -1}
		weight_38_V {Type I LastRead 10 FirstWrite -1}
		weight_39_V {Type I LastRead 10 FirstWrite -1}
		weight_40_V {Type I LastRead 10 FirstWrite -1}
		weight_41_V {Type I LastRead 10 FirstWrite -1}
		weight_42_V {Type I LastRead 10 FirstWrite -1}
		weight_43_V {Type I LastRead 10 FirstWrite -1}
		weight_44_V {Type I LastRead 10 FirstWrite -1}
		weight_45_V {Type I LastRead 10 FirstWrite -1}
		weight_46_V {Type I LastRead 10 FirstWrite -1}
		weight_47_V {Type I LastRead 10 FirstWrite -1}
		weight_48_V {Type I LastRead 7 FirstWrite -1}
		weight_49_V {Type I LastRead 7 FirstWrite -1}
		weight_50_V {Type I LastRead 7 FirstWrite -1}
		weight_51_V {Type I LastRead 7 FirstWrite -1}
		weight_52_V {Type I LastRead 7 FirstWrite -1}
		weight_53_V {Type I LastRead 7 FirstWrite -1}
		weight_54_V {Type I LastRead 7 FirstWrite -1}
		weight_55_V {Type I LastRead 7 FirstWrite -1}
		weight_56_V {Type I LastRead 7 FirstWrite -1}
		weight_57_V {Type I LastRead 7 FirstWrite -1}
		weight_58_V {Type I LastRead 7 FirstWrite -1}
		weight_59_V {Type I LastRead 7 FirstWrite -1}
		weight_60_V {Type I LastRead 8 FirstWrite -1}
		weight_61_V {Type I LastRead 8 FirstWrite -1}
		weight_62_V {Type I LastRead 8 FirstWrite -1}
		weight_63_V {Type I LastRead 8 FirstWrite -1}
		weight_64_V {Type I LastRead 8 FirstWrite -1}
		weight_65_V {Type I LastRead 8 FirstWrite -1}
		weight_66_V {Type I LastRead 8 FirstWrite -1}
		weight_67_V {Type I LastRead 8 FirstWrite -1}
		weight_68_V {Type I LastRead 8 FirstWrite -1}
		weight_69_V {Type I LastRead 8 FirstWrite -1}
		weight_70_V {Type I LastRead 8 FirstWrite -1}
		weight_71_V {Type I LastRead 8 FirstWrite -1}
		weight_72_V {Type I LastRead 9 FirstWrite -1}
		weight_73_V {Type I LastRead 9 FirstWrite -1}
		weight_74_V {Type I LastRead 9 FirstWrite -1}
		weight_75_V {Type I LastRead 9 FirstWrite -1}
		weight_76_V {Type I LastRead 9 FirstWrite -1}
		weight_77_V {Type I LastRead 9 FirstWrite -1}
		weight_78_V {Type I LastRead 9 FirstWrite -1}
		weight_79_V {Type I LastRead 9 FirstWrite -1}
		weight_80_V {Type I LastRead 9 FirstWrite -1}
		weight_81_V {Type I LastRead 9 FirstWrite -1}
		weight_82_V {Type I LastRead 9 FirstWrite -1}
		weight_83_V {Type I LastRead 9 FirstWrite -1}
		weight_84_V {Type I LastRead 10 FirstWrite -1}
		weight_85_V {Type I LastRead 10 FirstWrite -1}
		weight_86_V {Type I LastRead 10 FirstWrite -1}
		weight_87_V {Type I LastRead 10 FirstWrite -1}
		weight_88_V {Type I LastRead 10 FirstWrite -1}
		weight_89_V {Type I LastRead 10 FirstWrite -1}
		weight_90_V {Type I LastRead 10 FirstWrite -1}
		weight_91_V {Type I LastRead 10 FirstWrite -1}
		weight_92_V {Type I LastRead 10 FirstWrite -1}
		weight_93_V {Type I LastRead 10 FirstWrite -1}
		weight_94_V {Type I LastRead 10 FirstWrite -1}
		weight_95_V {Type I LastRead 10 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		ShuffleConvs_2_Downs_95 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_52 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_94 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_51 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_83 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_49 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_72 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_48 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_61 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_47 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_50 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_46 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_39 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_45 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_28 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_44 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_17 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_43 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_6 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_42 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_93 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_41 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_92 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_40 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_2_Downs_91 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_38 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_90 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_37 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_89 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_36 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_88 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_35 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_87 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_34 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_86 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_33 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_85 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_32 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_84 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_31 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_82 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_30 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_81 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_29 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_80 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_27 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_79 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_26 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_2_Downs_78 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_25 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_77 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_24 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_76 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_23 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_75 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_22 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_74 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_21 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_73 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_20 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_71 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_19 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_70 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_18 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_69 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_16 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_68 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_15 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_67 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_14 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_66 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_13 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_2_Downs_65 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_12 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_64 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_11 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_63 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_10 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_62 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_9 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_60 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_8 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_59 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_7 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_58 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_5 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_57 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_4 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_56 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_3 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_55 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_2 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_54 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_1 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs_53 {Type IO LastRead 13 FirstWrite 3}
		ShuffleConvs_2_Downs {Type IO LastRead 13 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
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
		weight_0_V {Type I LastRead 7 FirstWrite -1}
		weight_1_V {Type I LastRead 7 FirstWrite -1}
		weight_2_V {Type I LastRead 7 FirstWrite -1}
		weight_3_V {Type I LastRead 7 FirstWrite -1}
		weight_4_V {Type I LastRead 7 FirstWrite -1}
		weight_5_V {Type I LastRead 7 FirstWrite -1}
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
		weight_18_V {Type I LastRead 10 FirstWrite -1}
		weight_19_V {Type I LastRead 10 FirstWrite -1}
		weight_20_V {Type I LastRead 10 FirstWrite -1}
		weight_21_V {Type I LastRead 10 FirstWrite -1}
		weight_22_V {Type I LastRead 10 FirstWrite -1}
		weight_23_V {Type I LastRead 10 FirstWrite -1}
		weight_24_V {Type I LastRead 7 FirstWrite -1}
		weight_25_V {Type I LastRead 7 FirstWrite -1}
		weight_26_V {Type I LastRead 7 FirstWrite -1}
		weight_27_V {Type I LastRead 7 FirstWrite -1}
		weight_28_V {Type I LastRead 7 FirstWrite -1}
		weight_29_V {Type I LastRead 7 FirstWrite -1}
		weight_30_V {Type I LastRead 8 FirstWrite -1}
		weight_31_V {Type I LastRead 8 FirstWrite -1}
		weight_32_V {Type I LastRead 8 FirstWrite -1}
		weight_33_V {Type I LastRead 8 FirstWrite -1}
		weight_34_V {Type I LastRead 8 FirstWrite -1}
		weight_35_V {Type I LastRead 8 FirstWrite -1}
		weight_36_V {Type I LastRead 9 FirstWrite -1}
		weight_37_V {Type I LastRead 9 FirstWrite -1}
		weight_38_V {Type I LastRead 9 FirstWrite -1}
		weight_39_V {Type I LastRead 9 FirstWrite -1}
		weight_40_V {Type I LastRead 9 FirstWrite -1}
		weight_41_V {Type I LastRead 9 FirstWrite -1}
		weight_42_V {Type I LastRead 10 FirstWrite -1}
		weight_43_V {Type I LastRead 10 FirstWrite -1}
		weight_44_V {Type I LastRead 10 FirstWrite -1}
		weight_45_V {Type I LastRead 10 FirstWrite -1}
		weight_46_V {Type I LastRead 10 FirstWrite -1}
		weight_47_V {Type I LastRead 10 FirstWrite -1}
		bias_V {Type I LastRead 2 FirstWrite -1}
		ShuffleConvs_1_Downs_47 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_30 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_46 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_29 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_35 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_28 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_24 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_27 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_13 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_26 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_4 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_25 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_3 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_23 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_2 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_22 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_1 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_21 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_20 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_45 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_19 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_44 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_18 {Type IO LastRead 10 FirstWrite 3}
		ShuffleConvs_1_Downs_43 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_17 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_42 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_16 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_41 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_15 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_40 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_14 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_39 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_12 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_38 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_11 {Type IO LastRead 11 FirstWrite 3}
		ShuffleConvs_1_Downs_37 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_10 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_36 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_9 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_34 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_8 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_33 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_7 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_32 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_6 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_31 {Type IO LastRead 12 FirstWrite 3}
		ShuffleConvs_1_Downs_5 {Type IO LastRead 12 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
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
		ShuffleConvs_0_Downs_23 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_19 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_22 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_18 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_11 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_17 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_6 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_16 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_5 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_15 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_4 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_14 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_3 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_13 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_2 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_12 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_1 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_10 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_9 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_21 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_8 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_20 {Type IO LastRead 8 FirstWrite 3}
		ShuffleConvs_0_Downs_7 {Type IO LastRead 8 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
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
		buffer1_1_24_16x16_p_23 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_19 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_22 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_18 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_11 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_17 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_6 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_16 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_5 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_15 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_4 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_14 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_3 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_13 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_2 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_12 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_1 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_10 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_9 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_21 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_8 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_20 {Type IO LastRead 8 FirstWrite 3}
		buffer1_1_24_16x16_p_7 {Type IO LastRead 8 FirstWrite 3}}
	MUL_DP {
		a_V {Type I LastRead 0 FirstWrite -1}
		b_V {Type I LastRead 0 FirstWrite -1}
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
	subconv_3x3_8_stride {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		ShuffleConvs_2_Downs_95 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_94 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_83 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_72 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_61 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_50 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_39 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_28 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_17 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_93 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_92 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_91 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_90 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_89 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_88 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_87 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_86 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_85 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_84 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_82 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_81 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_80 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_79 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_78 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_77 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_76 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_75 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_74 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_73 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_71 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_70 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_69 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_68 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_67 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_66 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_65 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_64 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_63 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_62 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_60 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_59 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_58 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_57 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_56 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_55 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_54 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_53 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_52 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_51 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_49 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_48 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_47 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_46 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_45 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_44 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_43 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_42 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_41 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_40 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_38 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_37 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_36 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_35 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_34 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_33 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_32 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_31 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_30 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_29 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_27 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_26 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_25 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_24 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_23 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_22 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_21 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_20 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_19 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_18 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_16 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_15 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_14 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_13 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_12 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_11 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_2_Downs {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_4_no_rel {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_96 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_25 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_26 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_27 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_28 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_29 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_30 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_31 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_32 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_33 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_34 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_35 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_36 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_37 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_38 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_39 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_40 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_41 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_42 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_43 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_44 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_45 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_46 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_47 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_48 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_49 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_50 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_51 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_52 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_53 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_54 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_55 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_56 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_57 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_58 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_59 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_60 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_61 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_62 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_63 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_64 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_65 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_66 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_67 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_68 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_69 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_70 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_71 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_72 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_73 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_74 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_75 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_76 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_77 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_78 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_79 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_80 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_81 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_82 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_83 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_84 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_85 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_86 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_87 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_88 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_89 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_90 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_91 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_92 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_93 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_94 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_96_4x4_p_V_95 {Type I LastRead 6 FirstWrite -1}}
	conv1_p {
		input_V {Type I LastRead 11 FirstWrite -1}
		weight_V {Type I LastRead 12 FirstWrite -1}
		conv1_weight_V3 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type IO LastRead 11 FirstWrite 5}}
	shuffle_96_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_96 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_25 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_26 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_27 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_28 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_29 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_30 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_31 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_32 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_33 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_34 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_35 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_36 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_37 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_38 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_39 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_40 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_41 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_42 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_43 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_44 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_45 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_46 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_47 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_48 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_49 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_50 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_51 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_52 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_53 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_54 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_55 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_56 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_57 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_58 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_59 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_60 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_61 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_62 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_63 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_64 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_65 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_66 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_67 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_68 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_69 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_70 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_71 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_72 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_73 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_74 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_75 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_76 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_77 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_78 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_79 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_80 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_81 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_82 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_83 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_84 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_85 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_86 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_87 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_88 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_89 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_90 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_91 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_92 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_93 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_94 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_95 {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_l_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_96 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_25 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_26 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_27 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_28 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_29 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_30 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_31 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_32 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_33 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_34 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_35 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_36 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_37 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_38 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_39 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_40 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_41 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_42 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_43 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_44 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_45 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_46 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_47 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_48 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_49 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_50 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_51 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_52 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_53 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_54 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_55 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_56 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_57 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_58 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_59 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_60 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_61 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_62 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_63 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_64 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_65 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_66 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_67 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_68 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_69 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_70 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_71 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_72 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_73 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_74 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_75 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_76 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_77 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_78 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_79 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_80 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_81 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_82 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_83 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_84 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_85 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_86 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_87 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_88 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_89 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_90 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_91 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_92 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_93 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_94 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_95 {Type I LastRead 3 FirstWrite -1}}
	shuffle_96_r_p {
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_96_4x4_p_V_96 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_24 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_25 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_26 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_27 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_28 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_29 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_30 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_31 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_32 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_33 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_34 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_35 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_36 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_37 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_38 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_39 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_40 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_41 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_42 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_43 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_44 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_45 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_46 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_47 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_48 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_49 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_50 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_51 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_52 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_53 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_54 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_55 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_56 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_57 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_58 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_59 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_60 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_61 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_62 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_63 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_64 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_65 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_66 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_67 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_68 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_69 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_70 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_71 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_72 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_73 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_74 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_75 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_76 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_77 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_78 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_79 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_80 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_81 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_82 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_83 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_84 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_85 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_86 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_87 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_88 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_89 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_90 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_91 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_92 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_93 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_94 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_96_4x4_p_V_95 {Type I LastRead 3 FirstWrite -1}}
	subconv_3x3_16_strid {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		ShuffleConvs_1_Downs_47 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_46 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_35 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_24 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_13 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_2 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_45 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_44 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_43 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_42 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_41 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_40 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_39 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_38 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_37 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_36 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_34 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_33 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_32 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_31 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_30 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_29 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_28 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_27 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_26 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_25 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_23 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_22 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_21 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_20 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_19 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_18 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_17 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_16 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_15 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_14 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_12 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_11 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_10 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_9 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_8 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type I LastRead 5 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_8_no_rel {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_48_8x8_p_V_48 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_25 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_26 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_27 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_28 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_29 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_30 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_31 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_32 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_33 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_34 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_35 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_36 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_37 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_38 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_39 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_40 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_41 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_42 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_43 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_44 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_45 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_46 {Type I LastRead 6 FirstWrite -1}
		buffer1_1_48_8x8_p_V_47 {Type I LastRead 6 FirstWrite -1}}
	shuffle_48_p {
		left_V {Type I LastRead 3 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		buffer1_1_48_8x8_p_V_48 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_25 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_26 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_27 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_28 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_29 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_30 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_31 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_32 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_33 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_34 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_35 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_36 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_37 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_38 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_39 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_40 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_41 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_42 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_43 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_44 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_45 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_46 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_47 {Type I LastRead 3 FirstWrite -1}}
	subconv_3x3_32_strid_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
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
		output_V {Type O LastRead -1 FirstWrite 5}
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
	shuffle_48_l_p {
		output_V {Type O LastRead -1 FirstWrite 4}
		buffer1_1_48_8x8_p_V_48 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_25 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_26 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_27 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_28 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_29 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_30 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_31 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_32 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_33 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_34 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_35 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_36 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_37 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_38 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_39 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_40 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_41 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_42 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_43 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_44 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_45 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_46 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_47 {Type I LastRead 3 FirstWrite -1}}
	shuffle_48_r_p {
		output_V {Type O LastRead -1 FirstWrite 4}
		buffer1_1_48_8x8_p_V_48 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_1 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_2 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_3 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_4 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_5 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_6 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_7 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_8 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_9 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_10 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_11 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_12 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_13 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_14 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_15 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_16 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_17 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_18 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_19 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_20 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_21 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_22 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_23 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_24 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_25 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_26 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_27 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_28 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_29 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_30 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_31 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_32 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_33 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_34 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_35 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_36 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_37 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_38 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_39 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_40 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_41 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_42 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_43 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_44 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_45 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_46 {Type I LastRead 3 FirstWrite -1}
		buffer1_1_48_8x8_p_V_47 {Type I LastRead 3 FirstWrite -1}}
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
	subconv_3x3_32_strid {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		conv1_output_p_V {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_8_stride_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		shuffleunit1_7_outpu {Type I LastRead 5 FirstWrite -1}}
	subconv_3x3_16_strid_1 {
		weight_V {Type I LastRead 5 FirstWrite -1}
		bias_V {Type I LastRead 4 FirstWrite -1}
		output_V {Type O LastRead -1 FirstWrite 5}
		shuffleunit0_2_outpu {Type I LastRead 5 FirstWrite -1}}
	fc {
		weight_V {Type I LastRead 10 FirstWrite -1}
		fc_weight_V11 {Type I LastRead 0 FirstWrite -1}
		bias_V {Type I LastRead 9 FirstWrite -1}
		output_V {Type O LastRead 1 FirstWrite 11}
		fc_output_V15 {Type I LastRead 0 FirstWrite -1}
		avgpool_output_V {Type I LastRead 9 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "10929437", "Max" : "10974365"}
	, {"Name" : "Interval", "Min" : "10929438", "Max" : "10974366"}
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
