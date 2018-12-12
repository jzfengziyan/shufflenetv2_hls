set C_TypeInfoList {{ 
"ShuffleNetV2" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"image": [[], {"array": [ {"array": [ {"scalar": "float"}, [3,32,32]]}, [1]]}] }, {"conv1_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [3,3,3]]}, [24]]}] }, {"shuffle_conv_3x3": [[], {"array": [ {"array": [ {"scalar": "float"}, [1,3,3]]}, [1080]]}] }, {"shuffle_conv_1x1": [[], {"array": [ {"array": [ {"scalar": "float"}, [24,1,1]]}, [5496]]}] }, {"conv_last_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [192,1,1]]}, [512]]}] }, {"fc_weight": [[], {"array": [ {"array": [ {"scalar": "float"}, [512]]}, [10]]}] }, {"bias": [[], {"array": [ {"scalar": "float"}, [3618]]}] }, {"fc_output": [[], {"array": [ {"scalar": "float"}, [1000]]}] }],["0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50","51","52","53","54","55","56","57","58","59","60","61","62","63","64","65","66","67","68","69","70","71","72","73","74","75","76","77","78","79","80","81","82","83","84","85","86","87","88","89","90","91","92","93","94","95","96","97","98","99","100","101","102","103","104","105","106","107","108","109","110","111","112","113","114","115","116","117","118","119","120","121","122","123","124","125","126","127","128","129","130","131","132","133","134","135","136"],""],
 "0": [ "shuffleunit2_2_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "1": [ "shuffleunit2_1_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "2": [ "shuffleunit2_0_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "3": [ "shuffleunit1_7_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "4": [ "shuffleunit1_6_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "5": [ "shuffleunit1_5_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "6": [ "shuffleunit1_4_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "7": [ "shuffleunit1_3_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "8": [ "shuffleunit1_2_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "9": [ "shuffleunit1_1_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "10": [ "shuffleunit1_0_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "11": [ "shuffleunit0_2_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "12": [ "shuffleunit0_1_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "13": [ "shuffleunit0_0_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "14": [ "fc_bias", [[], {"array": [ {"scalar": "float"}, [10]]}],""],
 "15": [ "downsampleunit2_output", [[], {"array": [ {"scalar": "float"}, [1,192,4,4]]}],""],
 "16": [ "downsampleunit1_output", [[], {"array": [ {"scalar": "float"}, [1,96,8,8]]}],""],
 "17": [ "downsampleunit0_output", [[], {"array": [ {"scalar": "float"}, [1,48,16,16]]}],""],
 "18": [ "conv_last_output", [[], {"array": [ {"scalar": "float"}, [1,512,4,4]]}],""],
 "19": [ "conv_last_bias", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "20": [ "conv1_output", [[], {"array": [ {"scalar": "float"}, [1,24,32,32]]}],""],
 "21": [ "conv1_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "22": [ "avgpool_output", [[], {"array": [ {"scalar": "float"}, [512]]}],""],
 "23": [ "ShuffleConvs_2_ShuffleUnit2_2_conv3_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "24": [ "ShuffleConvs_2_ShuffleUnit2_2_conv3_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "25": [ "ShuffleConvs_2_ShuffleUnit2_2_conv2_weight", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "26": [ "ShuffleConvs_2_ShuffleUnit2_2_conv2_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "27": [ "ShuffleConvs_2_ShuffleUnit2_2_conv1_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "28": [ "ShuffleConvs_2_ShuffleUnit2_2_conv1_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "29": [ "ShuffleConvs_2_ShuffleUnit2_1_conv3_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "30": [ "ShuffleConvs_2_ShuffleUnit2_1_conv3_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "31": [ "ShuffleConvs_2_ShuffleUnit2_1_conv2_weight", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "32": [ "ShuffleConvs_2_ShuffleUnit2_1_conv2_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "33": [ "ShuffleConvs_2_ShuffleUnit2_1_conv1_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "34": [ "ShuffleConvs_2_ShuffleUnit2_1_conv1_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "35": [ "ShuffleConvs_2_ShuffleUnit2_0_conv3_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "36": [ "ShuffleConvs_2_ShuffleUnit2_0_conv3_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "37": [ "ShuffleConvs_2_ShuffleUnit2_0_conv2_weight", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "38": [ "ShuffleConvs_2_ShuffleUnit2_0_conv2_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "39": [ "ShuffleConvs_2_ShuffleUnit2_0_conv1_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "40": [ "ShuffleConvs_2_ShuffleUnit2_0_conv1_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "41": [ "ShuffleConvs_2_DownsampleUnit_conv3r_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "42": [ "ShuffleConvs_2_DownsampleUnit_conv3r_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "43": [ "ShuffleConvs_2_DownsampleUnit_conv2r_weight", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "44": [ "ShuffleConvs_2_DownsampleUnit_conv2r_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "45": [ "ShuffleConvs_2_DownsampleUnit_conv2l_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "46": [ "ShuffleConvs_2_DownsampleUnit_conv2l_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "47": [ "ShuffleConvs_2_DownsampleUnit_conv1r_weight", [[], {"array": [ {"scalar": "float"}, [96,96,1,1]]}],""],
 "48": [ "ShuffleConvs_2_DownsampleUnit_conv1r_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "49": [ "ShuffleConvs_2_DownsampleUnit_conv1l_weight", [[], {"array": [ {"scalar": "float"}, [96,1,3,3]]}],""],
 "50": [ "ShuffleConvs_2_DownsampleUnit_conv1l_bias", [[], {"array": [ {"scalar": "float"}, [96]]}],""],
 "51": [ "ShuffleConvs_1_ShuffleUnit1_7_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "52": [ "ShuffleConvs_1_ShuffleUnit1_7_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "53": [ "ShuffleConvs_1_ShuffleUnit1_7_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "54": [ "ShuffleConvs_1_ShuffleUnit1_7_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "55": [ "ShuffleConvs_1_ShuffleUnit1_7_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "56": [ "ShuffleConvs_1_ShuffleUnit1_7_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "57": [ "ShuffleConvs_1_ShuffleUnit1_6_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "58": [ "ShuffleConvs_1_ShuffleUnit1_6_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "59": [ "ShuffleConvs_1_ShuffleUnit1_6_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "60": [ "ShuffleConvs_1_ShuffleUnit1_6_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "61": [ "ShuffleConvs_1_ShuffleUnit1_6_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "62": [ "ShuffleConvs_1_ShuffleUnit1_6_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "63": [ "ShuffleConvs_1_ShuffleUnit1_5_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "64": [ "ShuffleConvs_1_ShuffleUnit1_5_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "65": [ "ShuffleConvs_1_ShuffleUnit1_5_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "66": [ "ShuffleConvs_1_ShuffleUnit1_5_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "67": [ "ShuffleConvs_1_ShuffleUnit1_5_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "68": [ "ShuffleConvs_1_ShuffleUnit1_5_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "69": [ "ShuffleConvs_1_ShuffleUnit1_4_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "70": [ "ShuffleConvs_1_ShuffleUnit1_4_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "71": [ "ShuffleConvs_1_ShuffleUnit1_4_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "72": [ "ShuffleConvs_1_ShuffleUnit1_4_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "73": [ "ShuffleConvs_1_ShuffleUnit1_4_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "74": [ "ShuffleConvs_1_ShuffleUnit1_4_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "75": [ "ShuffleConvs_1_ShuffleUnit1_3_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "76": [ "ShuffleConvs_1_ShuffleUnit1_3_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "77": [ "ShuffleConvs_1_ShuffleUnit1_3_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "78": [ "ShuffleConvs_1_ShuffleUnit1_3_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "79": [ "ShuffleConvs_1_ShuffleUnit1_3_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "80": [ "ShuffleConvs_1_ShuffleUnit1_3_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "81": [ "ShuffleConvs_1_ShuffleUnit1_2_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "82": [ "ShuffleConvs_1_ShuffleUnit1_2_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "83": [ "ShuffleConvs_1_ShuffleUnit1_2_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "84": [ "ShuffleConvs_1_ShuffleUnit1_2_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "85": [ "ShuffleConvs_1_ShuffleUnit1_2_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "86": [ "ShuffleConvs_1_ShuffleUnit1_2_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "87": [ "ShuffleConvs_1_ShuffleUnit1_1_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "88": [ "ShuffleConvs_1_ShuffleUnit1_1_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "89": [ "ShuffleConvs_1_ShuffleUnit1_1_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "90": [ "ShuffleConvs_1_ShuffleUnit1_1_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "91": [ "ShuffleConvs_1_ShuffleUnit1_1_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "92": [ "ShuffleConvs_1_ShuffleUnit1_1_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "93": [ "ShuffleConvs_1_ShuffleUnit1_0_conv3_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "94": [ "ShuffleConvs_1_ShuffleUnit1_0_conv3_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "95": [ "ShuffleConvs_1_ShuffleUnit1_0_conv2_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "96": [ "ShuffleConvs_1_ShuffleUnit1_0_conv2_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "97": [ "ShuffleConvs_1_ShuffleUnit1_0_conv1_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "98": [ "ShuffleConvs_1_ShuffleUnit1_0_conv1_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "99": [ "ShuffleConvs_1_DownsampleUnit_conv3r_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "100": [ "ShuffleConvs_1_DownsampleUnit_conv3r_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "101": [ "ShuffleConvs_1_DownsampleUnit_conv2r_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "102": [ "ShuffleConvs_1_DownsampleUnit_conv2r_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "103": [ "ShuffleConvs_1_DownsampleUnit_conv2l_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "104": [ "ShuffleConvs_1_DownsampleUnit_conv2l_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "105": [ "ShuffleConvs_1_DownsampleUnit_conv1r_weight", [[], {"array": [ {"scalar": "float"}, [48,48,1,1]]}],""],
 "106": [ "ShuffleConvs_1_DownsampleUnit_conv1r_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "107": [ "ShuffleConvs_1_DownsampleUnit_conv1l_weight", [[], {"array": [ {"scalar": "float"}, [48,1,3,3]]}],""],
 "108": [ "ShuffleConvs_1_DownsampleUnit_conv1l_bias", [[], {"array": [ {"scalar": "float"}, [48]]}],""],
 "109": [ "ShuffleConvs_0_ShuffleUnit0_2_conv3_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "110": [ "ShuffleConvs_0_ShuffleUnit0_2_conv3_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "111": [ "ShuffleConvs_0_ShuffleUnit0_2_conv2_weight", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "112": [ "ShuffleConvs_0_ShuffleUnit0_2_conv2_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "113": [ "ShuffleConvs_0_ShuffleUnit0_2_conv1_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "114": [ "ShuffleConvs_0_ShuffleUnit0_2_conv1_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "115": [ "ShuffleConvs_0_ShuffleUnit0_1_conv3_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "116": [ "ShuffleConvs_0_ShuffleUnit0_1_conv3_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "117": [ "ShuffleConvs_0_ShuffleUnit0_1_conv2_weight", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "118": [ "ShuffleConvs_0_ShuffleUnit0_1_conv2_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "119": [ "ShuffleConvs_0_ShuffleUnit0_1_conv1_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "120": [ "ShuffleConvs_0_ShuffleUnit0_1_conv1_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "121": [ "ShuffleConvs_0_ShuffleUnit0_0_conv3_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "122": [ "ShuffleConvs_0_ShuffleUnit0_0_conv3_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "123": [ "ShuffleConvs_0_ShuffleUnit0_0_conv2_weight", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "124": [ "ShuffleConvs_0_ShuffleUnit0_0_conv2_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "125": [ "ShuffleConvs_0_ShuffleUnit0_0_conv1_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "126": [ "ShuffleConvs_0_ShuffleUnit0_0_conv1_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "127": [ "ShuffleConvs_0_DownsampleUnit_conv3r_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "128": [ "ShuffleConvs_0_DownsampleUnit_conv3r_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "129": [ "ShuffleConvs_0_DownsampleUnit_conv2r_weight", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "130": [ "ShuffleConvs_0_DownsampleUnit_conv2r_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "131": [ "ShuffleConvs_0_DownsampleUnit_conv2l_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "132": [ "ShuffleConvs_0_DownsampleUnit_conv2l_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "133": [ "ShuffleConvs_0_DownsampleUnit_conv1r_weight", [[], {"array": [ {"scalar": "float"}, [24,24,1,1]]}],""],
 "134": [ "ShuffleConvs_0_DownsampleUnit_conv1r_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""],
 "135": [ "ShuffleConvs_0_DownsampleUnit_conv1l_weight", [[], {"array": [ {"scalar": "float"}, [24,1,3,3]]}],""],
 "136": [ "ShuffleConvs_0_DownsampleUnit_conv1l_bias", [[], {"array": [ {"scalar": "float"}, [24]]}],""]
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
	{ shuffle_conv_3x3 float 32 regular {array 9720 { 1 1 } 1 1 }  }
	{ shuffle_conv_1x1 float 32 regular {array 131904 { 1 1 } 1 1 }  }
	{ conv_last_weight float 32 regular {array 98304 { 1 3 } 1 1 }  }
	{ fc_weight float 32 regular {array 5120 { 1 3 } 1 1 }  }
	{ bias float 32 regular {array 3618 { 1 1 } 1 1 }  }
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
set portNum 40
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
	{ shuffle_conv_3x3_address1 sc_out sc_lv 14 signal 2 } 
	{ shuffle_conv_3x3_ce1 sc_out sc_logic 1 signal 2 } 
	{ shuffle_conv_3x3_q1 sc_in sc_lv 32 signal 2 } 
	{ shuffle_conv_1x1_address0 sc_out sc_lv 18 signal 3 } 
	{ shuffle_conv_1x1_ce0 sc_out sc_logic 1 signal 3 } 
	{ shuffle_conv_1x1_q0 sc_in sc_lv 32 signal 3 } 
	{ shuffle_conv_1x1_address1 sc_out sc_lv 18 signal 3 } 
	{ shuffle_conv_1x1_ce1 sc_out sc_logic 1 signal 3 } 
	{ shuffle_conv_1x1_q1 sc_in sc_lv 32 signal 3 } 
	{ conv_last_weight_address0 sc_out sc_lv 17 signal 4 } 
	{ conv_last_weight_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv_last_weight_q0 sc_in sc_lv 32 signal 4 } 
	{ fc_weight_address0 sc_out sc_lv 13 signal 5 } 
	{ fc_weight_ce0 sc_out sc_logic 1 signal 5 } 
	{ fc_weight_q0 sc_in sc_lv 32 signal 5 } 
	{ bias_address0 sc_out sc_lv 12 signal 6 } 
	{ bias_ce0 sc_out sc_logic 1 signal 6 } 
	{ bias_q0 sc_in sc_lv 32 signal 6 } 
	{ bias_address1 sc_out sc_lv 12 signal 6 } 
	{ bias_ce1 sc_out sc_logic 1 signal 6 } 
	{ bias_q1 sc_in sc_lv 32 signal 6 } 
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
 	{ "name": "shuffle_conv_3x3_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":14, "type": "signal", "bundle":{"name": "shuffle_conv_3x3", "role": "address1" }} , 
 	{ "name": "shuffle_conv_3x3_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffle_conv_3x3", "role": "ce1" }} , 
 	{ "name": "shuffle_conv_3x3_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffle_conv_3x3", "role": "q1" }} , 
 	{ "name": "shuffle_conv_1x1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "address0" }} , 
 	{ "name": "shuffle_conv_1x1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "ce0" }} , 
 	{ "name": "shuffle_conv_1x1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "q0" }} , 
 	{ "name": "shuffle_conv_1x1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":18, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "address1" }} , 
 	{ "name": "shuffle_conv_1x1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "ce1" }} , 
 	{ "name": "shuffle_conv_1x1_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "shuffle_conv_1x1", "role": "q1" }} , 
 	{ "name": "conv_last_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":17, "type": "signal", "bundle":{"name": "conv_last_weight", "role": "address0" }} , 
 	{ "name": "conv_last_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_weight", "role": "ce0" }} , 
 	{ "name": "conv_last_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_last_weight", "role": "q0" }} , 
 	{ "name": "fc_weight_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "fc_weight", "role": "address0" }} , 
 	{ "name": "fc_weight_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_weight", "role": "ce0" }} , 
 	{ "name": "fc_weight_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_weight", "role": "q0" }} , 
 	{ "name": "bias_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "bias", "role": "address0" }} , 
 	{ "name": "bias_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce0" }} , 
 	{ "name": "bias_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q0" }} , 
 	{ "name": "bias_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "bias", "role": "address1" }} , 
 	{ "name": "bias_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias", "role": "ce1" }} , 
 	{ "name": "bias_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias", "role": "q1" }} , 
 	{ "name": "fc_output_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "fc_output", "role": "address0" }} , 
 	{ "name": "fc_output_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_output", "role": "ce0" }} , 
 	{ "name": "fc_output_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "fc_output", "role": "we0" }} , 
 	{ "name": "fc_output_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "fc_output", "role": "d0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "156", "174", "192", "206", "220", "234", "238", "242", "245", "246"],
		"CDFG" : "ShuffleNetV2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state89", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DownsampleUnit0_fu_3317"},
			{"State" : "ap_ST_fsm_state97", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DownsampleUnit1_fu_3345"},
			{"State" : "ap_ST_fsm_state115", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_DownsampleUnit2_fu_3373"},
			{"State" : "ap_ST_fsm_state91", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit0_fu_3401"},
			{"State" : "ap_ST_fsm_state93", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit0_fu_3401"},
			{"State" : "ap_ST_fsm_state95", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit0_fu_3401"},
			{"State" : "ap_ST_fsm_state99", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state101", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state103", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state105", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state107", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state109", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state111", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state113", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit1_fu_3437"},
			{"State" : "ap_ST_fsm_state117", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit2_fu_3513"},
			{"State" : "ap_ST_fsm_state119", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit2_fu_3513"},
			{"State" : "ap_ST_fsm_state121", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_ShuffleUnit2_fu_3513"},
			{"State" : "ap_ST_fsm_state87", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv1_fu_3549"},
			{"State" : "ap_ST_fsm_state123", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_conv_last_fu_3561"},
			{"State" : "ap_ST_fsm_state125", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_avgpool_fu_3573"}],
		"Port" : [
			{"Name" : "image_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_conv1_fu_3549", "Port" : "input_r"}]},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_conv1_fu_3549", "Port" : "weight"}]},
			{"Name" : "shuffle_conv_3x3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shuffle_conv_1x1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv_last_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "238", "SubInstance" : "grp_conv_last_fu_3561", "Port" : "weight"}]},
			{"Name" : "fc_weight", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "bias", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "fc_output", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "ShuffleConvs_0_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv1r_weight"}]},
			{"Name" : "ShuffleConvs_0_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv3r_weight"}]},
			{"Name" : "ShuffleConvs_0_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv2l_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv1r_weight"}]},
			{"Name" : "ShuffleConvs_1_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv3r_weight"}]},
			{"Name" : "ShuffleConvs_1_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv2l_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_25", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_27", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_31", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_33", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_37", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_41", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_45", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_47", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_50", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_2_Downs_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv1r_weight"}]},
			{"Name" : "ShuffleConvs_2_Downs_10", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv3r_weight"}]},
			{"Name" : "ShuffleConvs_2_Downs_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv2l_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_11", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_13", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv1_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_18", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv3_weight"}]},
			{"Name" : "ShuffleConvs_0_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv2r_weight"}]},
			{"Name" : "ShuffleConvs_0_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv1l_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_0_Shuff_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv2r_weight"}]},
			{"Name" : "ShuffleConvs_1_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv1l_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_23", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_29", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_35", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_43", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_1_Shuff_49", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_2_Downs_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv2r_weight"}]},
			{"Name" : "ShuffleConvs_2_Downs_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv1l_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv2_weight"}]},
			{"Name" : "ShuffleConvs_2_Shuff_15", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv2_weight"}]},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_conv1_fu_3549", "Port" : "bias"}]},
			{"Name" : "ShuffleConvs_0_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv1r_bias"}]},
			{"Name" : "ShuffleConvs_0_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv2r_bias"}]},
			{"Name" : "ShuffleConvs_0_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv3r_bias"}]},
			{"Name" : "ShuffleConvs_0_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv1l_bias"}]},
			{"Name" : "ShuffleConvs_0_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "conv2l_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_0_Shuff", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv1r_bias"}]},
			{"Name" : "ShuffleConvs_1_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv2r_bias"}]},
			{"Name" : "ShuffleConvs_1_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv3r_bias"}]},
			{"Name" : "ShuffleConvs_1_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv1l_bias"}]},
			{"Name" : "ShuffleConvs_1_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "conv2l_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_51", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_52", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_53", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_54", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_56", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_57", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_58", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_59", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_60", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_61", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_62", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_63", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_64", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_65", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_67", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_68", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_69", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_70", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_71", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_39", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_55", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff_66", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_1_Shuff", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_2_Downs_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv1r_bias"}]},
			{"Name" : "ShuffleConvs_2_Downs_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv2r_bias"}]},
			{"Name" : "ShuffleConvs_2_Downs", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv3r_bias"}]},
			{"Name" : "ShuffleConvs_2_Downs_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv1l_bias"}]},
			{"Name" : "ShuffleConvs_2_Downs_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "conv2l_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_19", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_20", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_21", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_22", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv3_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv1_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff_17", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv2_bias"}]},
			{"Name" : "ShuffleConvs_2_Shuff", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "conv3_bias"}]},
			{"Name" : "conv_last_bias", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "238", "SubInstance" : "grp_conv_last_fu_3561", "Port" : "bias"}]},
			{"Name" : "fc_bias", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "conv1_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "234", "SubInstance" : "grp_conv1_fu_3549", "Port" : "conv1_output"},
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "input_r"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "input_r"},
					{"ID" : "138", "SubInstance" : "grp_DownsampleUnit0_fu_3317", "Port" : "downsampleunit0_outp"}]},
			{"Name" : "shuffleunit0_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "input_r"}]},
			{"Name" : "shuffleunit0_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "input_r"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "192", "SubInstance" : "grp_ShuffleUnit0_fu_3401", "Port" : "output_r"},
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "shuffleunit0_2_outpu"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"},
					{"ID" : "156", "SubInstance" : "grp_DownsampleUnit1_fu_3345", "Port" : "downsampleunit1_outp"}]},
			{"Name" : "shuffleunit1_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_3_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_4_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_5_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_6_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "input_r"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_ShuffleUnit1_fu_3437", "Port" : "output_r"},
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "shuffleunit1_7_outpu"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "input_r"},
					{"ID" : "174", "SubInstance" : "grp_DownsampleUnit2_fu_3373", "Port" : "downsampleunit2_outp"}]},
			{"Name" : "shuffleunit2_0_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "input_r"}]},
			{"Name" : "shuffleunit2_1_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "input_r"}]},
			{"Name" : "shuffleunit2_2_outpu", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "220", "SubInstance" : "grp_ShuffleUnit2_fu_3513", "Port" : "output_r"},
					{"ID" : "238", "SubInstance" : "grp_conv_last_fu_3561", "Port" : "shuffleunit2_2_outpu"}]},
			{"Name" : "conv_last_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "238", "SubInstance" : "grp_conv_last_fu_3561", "Port" : "output_r"},
					{"ID" : "242", "SubInstance" : "grp_avgpool_fu_3573", "Port" : "conv_last_output"}]},
			{"Name" : "avgpool_output", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "242", "SubInstance" : "grp_avgpool_fu_3573", "Port" : "output_r"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_7_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_10_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_8_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_5_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_7_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_8_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_11_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_13_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_18_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_7_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_10_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_8_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_1_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_5_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_7_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_11_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_13_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_19_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_21_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_25_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_27_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_31_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_33_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_37_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_41_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_45_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_47_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_50_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_7_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_10_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_8_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_5_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_7_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_8_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_11_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_13_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_18_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_9_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_6_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_6_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_9_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_15_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_9_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_6_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_3_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_9_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_15_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_23_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_29_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_35_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_43_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_49_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_9_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_6_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_6_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_9_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_15_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_bias_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_3_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_5_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_1_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Downs_4_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_19_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_20_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_21_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_22_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_1_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_3_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_4_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_17_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_0_Shuff_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_3_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_5_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_1_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Downs_4_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_51_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_52_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_53_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_54_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_56_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_57_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_58_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_59_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_60_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_61_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_62_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_63_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_64_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_65_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_67_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_68_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_69_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_70_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_71_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_17_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_39_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_55_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_66_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_1_Shuff_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_3_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_5_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_1_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Downs_4_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_19_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_20_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_21_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_22_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_1_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_3_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_4_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_17_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleConvs_2_Shuff_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_bias_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.fc_bias_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv1_output_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit0_outp_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_0_outpu_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_1_outpu_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit0_2_outpu_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit1_outp_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_0_outpu_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_1_outpu_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_2_outpu_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_3_outpu_U", "Parent" : "0"},
	{"ID" : "128", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_4_outpu_U", "Parent" : "0"},
	{"ID" : "129", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_5_outpu_U", "Parent" : "0"},
	{"ID" : "130", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_6_outpu_U", "Parent" : "0"},
	{"ID" : "131", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit1_7_outpu_U", "Parent" : "0"},
	{"ID" : "132", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.downsampleunit2_outp_U", "Parent" : "0"},
	{"ID" : "133", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_0_outpu_U", "Parent" : "0"},
	{"ID" : "134", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_1_outpu_U", "Parent" : "0"},
	{"ID" : "135", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.shuffleunit2_2_outpu_U", "Parent" : "0"},
	{"ID" : "136", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.conv_last_output_U", "Parent" : "0"},
	{"ID" : "137", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.avgpool_output_U", "Parent" : "0"},
	{"ID" : "138", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317", "Parent" : "0", "Child" : ["139", "140", "141", "142", "143", "144", "148", "151", "155"],
		"CDFG" : "DownsampleUnit0",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_3214_fu_331"},
			{"State" : "ap_ST_fsm_state19", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_1612_fu_355"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_1612_fu_355"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_2415_fu_367"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "grp_subconv_1x1_3214_fu_331", "Port" : "input_r"},
					{"ID" : "148", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342", "Port" : "input_r"}]},
			{"Name" : "conv1r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "grp_subconv_1x1_3214_fu_331", "Port" : "weight"}]},
			{"Name" : "conv1r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "144", "SubInstance" : "grp_subconv_1x1_3214_fu_331", "Port" : "bias"}]},
			{"Name" : "conv2r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342", "Port" : "weight"}]},
			{"Name" : "conv2r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342", "Port" : "bias"}]},
			{"Name" : "conv3r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_1612_fu_355", "Port" : "weight"}]},
			{"Name" : "conv3r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_1612_fu_355", "Port" : "bias"}]},
			{"Name" : "conv1l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342", "Port" : "weight"}]},
			{"Name" : "conv1l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "148", "SubInstance" : "grp_subconv_3x3_32_strid_fu_342", "Port" : "bias"}]},
			{"Name" : "conv2l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_1612_fu_355", "Port" : "weight"}]},
			{"Name" : "conv2l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "151", "SubInstance" : "grp_subconv_1x1_1612_fu_355", "Port" : "bias"}]},
			{"Name" : "downsampleunit0_outp", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "155", "SubInstance" : "grp_shuffle_2415_fu_367", "Port" : "output_r"}]}]},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.conv1r_output_U", "Parent" : "138"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.conv2r_ourput_0_U", "Parent" : "138"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.conv3r_ourput_0_U", "Parent" : "138"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.conv1l_output_0_U", "Parent" : "138"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.conv2l_output_0_U", "Parent" : "138"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_3214_fu_331", "Parent" : "138", "Child" : ["145", "146", "147"],
		"CDFG" : "subconv_1x1_3214",
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
	{"ID" : "145", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_3214_fu_331.ShuffleNetV2_faddbkb_x_U8", "Parent" : "144"},
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_3214_fu_331.ShuffleNetV2_fmulcud_x_U9", "Parent" : "144"},
	{"ID" : "147", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_3214_fu_331.ShuffleNetV2_fcmpdEe_x_U10", "Parent" : "144"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_3x3_32_strid_fu_342", "Parent" : "138", "Child" : ["149", "150"],
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
			{"Name" : "output_0", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "149", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_3x3_32_strid_fu_342.ShuffleNetV2_faddbkb_x_U15", "Parent" : "148"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_3x3_32_strid_fu_342.ShuffleNetV2_fmulcud_x_U16", "Parent" : "148"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_1612_fu_355", "Parent" : "138", "Child" : ["152", "153", "154"],
		"CDFG" : "subconv_1x1_1612",
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
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_1612_fu_355.ShuffleNetV2_faddbkb_x_U21", "Parent" : "151"},
	{"ID" : "153", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_1612_fu_355.ShuffleNetV2_fmulcud_x_U22", "Parent" : "151"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_subconv_1x1_1612_fu_355.ShuffleNetV2_fcmpdEe_x_U23", "Parent" : "151"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit0_fu_3317.grp_shuffle_2415_fu_367", "Parent" : "138",
		"CDFG" : "shuffle_2415",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "right_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "156", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345", "Parent" : "0", "Child" : ["157", "158", "159", "160", "161", "162", "166", "169", "173"],
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
					{"ID" : "162", "SubInstance" : "grp_subconv_1x1_16p16_fu_335", "Port" : "weight"}]},
			{"Name" : "conv1r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "162", "SubInstance" : "grp_subconv_1x1_16p16_fu_335", "Port" : "bias"}]},
			{"Name" : "conv2r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "166", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "weight"}]},
			{"Name" : "conv2r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "166", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "bias"}]},
			{"Name" : "conv3r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "169", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "weight"}]},
			{"Name" : "conv3r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "169", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "bias"}]},
			{"Name" : "conv1l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "166", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "weight"}]},
			{"Name" : "conv1l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "166", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "bias"}]},
			{"Name" : "conv2l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "169", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "weight"}]},
			{"Name" : "conv2l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "169", "SubInstance" : "grp_subconv_1x1_89_fu_359", "Port" : "bias"}]},
			{"Name" : "shuffleunit0_2_outpu", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "162", "SubInstance" : "grp_subconv_1x1_16p16_fu_335", "Port" : "shuffleunit0_2_outpu"},
					{"ID" : "166", "SubInstance" : "grp_subconv_3x3_16_strid_fu_346", "Port" : "input_r"}]},
			{"Name" : "downsampleunit1_outp", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "173", "SubInstance" : "grp_shuffle_4811_fu_371", "Port" : "output_r"}]}]},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.conv1r_output_U", "Parent" : "156"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.conv2r_ourput_0_U", "Parent" : "156"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.conv3r_ourput_0_U", "Parent" : "156"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.conv1l_output_0_U", "Parent" : "156"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.conv2l_output_0_U", "Parent" : "156"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_16p16_fu_335", "Parent" : "156", "Child" : ["163", "164", "165"],
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
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_16p16_fu_335.ShuffleNetV2_faddbkb_x_U59", "Parent" : "162"},
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_16p16_fu_335.ShuffleNetV2_fmulcud_x_U60", "Parent" : "162"},
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_16p16_fu_335.ShuffleNetV2_fcmpdEe_x_U61", "Parent" : "162"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_3x3_16_strid_fu_346", "Parent" : "156", "Child" : ["167", "168"],
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
	{"ID" : "167", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_3x3_16_strid_fu_346.ShuffleNetV2_faddbkb_x_U66", "Parent" : "166"},
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_3x3_16_strid_fu_346.ShuffleNetV2_fmulcud_x_U67", "Parent" : "166"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_89_fu_359", "Parent" : "156", "Child" : ["170", "171", "172"],
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
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_89_fu_359.ShuffleNetV2_faddbkb_x_U72", "Parent" : "169"},
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_89_fu_359.ShuffleNetV2_fmulcud_x_U73", "Parent" : "169"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_subconv_1x1_89_fu_359.ShuffleNetV2_fcmpdEe_x_U74", "Parent" : "169"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit1_fu_3345.grp_shuffle_4811_fu_371", "Parent" : "156",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "174", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373", "Parent" : "0", "Child" : ["175", "176", "177", "178", "179", "180", "184", "188", "191"],
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
					{"ID" : "180", "SubInstance" : "grp_subconv_1x1_8p20_fu_335", "Port" : "weight"}]},
			{"Name" : "conv1r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "180", "SubInstance" : "grp_subconv_1x1_8p20_fu_335", "Port" : "bias"}]},
			{"Name" : "conv2r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "weight"}]},
			{"Name" : "conv2r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "bias"}]},
			{"Name" : "conv3r_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "184", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "weight"}]},
			{"Name" : "conv3r_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "184", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "bias"}]},
			{"Name" : "conv1l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "weight"}]},
			{"Name" : "conv1l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "bias"}]},
			{"Name" : "conv2l_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "184", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "weight"}]},
			{"Name" : "conv2l_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "184", "SubInstance" : "grp_subconv_1x1_419_fu_346", "Port" : "bias"}]},
			{"Name" : "shuffleunit1_7_outpu", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_subconv_3x3_8_stride_fu_358", "Port" : "input_r"},
					{"ID" : "180", "SubInstance" : "grp_subconv_1x1_8p20_fu_335", "Port" : "shuffleunit1_7_outpu"}]},
			{"Name" : "downsampleunit2_outp", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "191", "SubInstance" : "grp_shuffle_9621_fu_371", "Port" : "output_r"}]}]},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.conv1r_output_U", "Parent" : "174"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.conv2r_ourput_0_U", "Parent" : "174"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.conv3r_ourput_0_U", "Parent" : "174"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.conv1l_output_0_U", "Parent" : "174"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.conv2l_output_0_U", "Parent" : "174"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_8p20_fu_335", "Parent" : "174", "Child" : ["181", "182", "183"],
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
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_8p20_fu_335.ShuffleNetV2_faddbkb_x_U110", "Parent" : "180"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_8p20_fu_335.ShuffleNetV2_fmulcud_x_U111", "Parent" : "180"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_8p20_fu_335.ShuffleNetV2_fcmpdEe_x_U112", "Parent" : "180"},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_419_fu_346", "Parent" : "174", "Child" : ["185", "186", "187"],
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
	{"ID" : "185", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_419_fu_346.ShuffleNetV2_faddbkb_x_U123", "Parent" : "184"},
	{"ID" : "186", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_419_fu_346.ShuffleNetV2_fmulcud_x_U124", "Parent" : "184"},
	{"ID" : "187", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_1x1_419_fu_346.ShuffleNetV2_fcmpdEe_x_U125", "Parent" : "184"},
	{"ID" : "188", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_3x3_8_stride_fu_358", "Parent" : "174", "Child" : ["189", "190"],
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
	{"ID" : "189", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_3x3_8_stride_fu_358.ShuffleNetV2_faddbkb_x_U117", "Parent" : "188"},
	{"ID" : "190", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_subconv_3x3_8_stride_fu_358.ShuffleNetV2_fmulcud_x_U118", "Parent" : "188"},
	{"ID" : "191", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_DownsampleUnit2_fu_3373.grp_shuffle_9621_fu_371", "Parent" : "174",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "192", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401", "Parent" : "0", "Child" : ["193", "194", "195", "196", "197", "198", "201", "205"],
		"CDFG" : "ShuffleUnit0",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_401"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_1612_fu_411"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_1612_fu_411"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_2415_fu_423"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "201", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "weight"}]},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "201", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "bias"}]},
			{"Name" : "conv2_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "198", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_401", "Port" : "weight"}]},
			{"Name" : "conv2_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "198", "SubInstance" : "grp_subconv_3x3_16_no_re_fu_401", "Port" : "bias"}]},
			{"Name" : "conv3_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "201", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "weight"}]},
			{"Name" : "conv3_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "201", "SubInstance" : "grp_subconv_1x1_1612_fu_411", "Port" : "bias"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "205", "SubInstance" : "grp_shuffle_2415_fu_423", "Port" : "output_r"}]}]},
	{"ID" : "193", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.left_part_0_U", "Parent" : "192"},
	{"ID" : "194", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.right_part_0_U", "Parent" : "192"},
	{"ID" : "195", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.conv1_output_0_U", "Parent" : "192"},
	{"ID" : "196", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.conv2_output_0_U", "Parent" : "192"},
	{"ID" : "197", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.conv3_output_0_U", "Parent" : "192"},
	{"ID" : "198", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_3x3_16_no_re_fu_401", "Parent" : "192", "Child" : ["199", "200"],
		"CDFG" : "subconv_3x3_16_no_re",
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
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_3x3_16_no_re_fu_401.ShuffleNetV2_faddbkb_x_U45", "Parent" : "198"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_3x3_16_no_re_fu_401.ShuffleNetV2_fmulcud_x_U46", "Parent" : "198"},
	{"ID" : "201", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_1x1_1612_fu_411", "Parent" : "192", "Child" : ["202", "203", "204"],
		"CDFG" : "subconv_1x1_1612",
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
	{"ID" : "202", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_1x1_1612_fu_411.ShuffleNetV2_faddbkb_x_U21", "Parent" : "201"},
	{"ID" : "203", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_1x1_1612_fu_411.ShuffleNetV2_fmulcud_x_U22", "Parent" : "201"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_subconv_1x1_1612_fu_411.ShuffleNetV2_fcmpdEe_x_U23", "Parent" : "201"},
	{"ID" : "205", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit0_fu_3401.grp_shuffle_2415_fu_423", "Parent" : "192",
		"CDFG" : "shuffle_2415",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "left_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "right_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "206", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437", "Parent" : "0", "Child" : ["207", "208", "209", "210", "211", "212", "215", "219"],
		"CDFG" : "ShuffleUnit1",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_405"},
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_89_fu_415"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_89_fu_415"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_4811_fu_427"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "215", "SubInstance" : "grp_subconv_1x1_89_fu_415", "Port" : "weight"}]},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "215", "SubInstance" : "grp_subconv_1x1_89_fu_415", "Port" : "bias"}]},
			{"Name" : "conv2_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "212", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_405", "Port" : "weight"}]},
			{"Name" : "conv2_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "212", "SubInstance" : "grp_subconv_3x3_8_no_rel_fu_405", "Port" : "bias"}]},
			{"Name" : "conv3_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "215", "SubInstance" : "grp_subconv_1x1_89_fu_415", "Port" : "weight"}]},
			{"Name" : "conv3_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "215", "SubInstance" : "grp_subconv_1x1_89_fu_415", "Port" : "bias"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "219", "SubInstance" : "grp_shuffle_4811_fu_427", "Port" : "output_r"}]}]},
	{"ID" : "207", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.left_part_0_U", "Parent" : "206"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.right_part_0_U", "Parent" : "206"},
	{"ID" : "209", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.conv1_output_0_U", "Parent" : "206"},
	{"ID" : "210", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.conv2_output_0_U", "Parent" : "206"},
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.conv3_output_0_U", "Parent" : "206"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_3x3_8_no_rel_fu_405", "Parent" : "206", "Child" : ["213", "214"],
		"CDFG" : "subconv_3x3_8_no_rel",
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
	{"ID" : "213", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_3x3_8_no_rel_fu_405.ShuffleNetV2_faddbkb_x_U96", "Parent" : "212"},
	{"ID" : "214", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_3x3_8_no_rel_fu_405.ShuffleNetV2_fmulcud_x_U97", "Parent" : "212"},
	{"ID" : "215", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_1x1_89_fu_415", "Parent" : "206", "Child" : ["216", "217", "218"],
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
	{"ID" : "216", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_1x1_89_fu_415.ShuffleNetV2_faddbkb_x_U72", "Parent" : "215"},
	{"ID" : "217", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_1x1_89_fu_415.ShuffleNetV2_fmulcud_x_U73", "Parent" : "215"},
	{"ID" : "218", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_subconv_1x1_89_fu_415.ShuffleNetV2_fcmpdEe_x_U74", "Parent" : "215"},
	{"ID" : "219", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit1_fu_3437.grp_shuffle_4811_fu_427", "Parent" : "206",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "220", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513", "Parent" : "0", "Child" : ["221", "222", "223", "224", "225", "226", "230", "233"],
		"CDFG" : "ShuffleUnit2",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "AlignedPipeline" : "0", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state21", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_419_fu_405"},
			{"State" : "ap_ST_fsm_state25", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_1x1_419_fu_405"},
			{"State" : "ap_ST_fsm_state23", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_417"},
			{"State" : "ap_ST_fsm_state27", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_shuffle_9621_fu_427"}],
		"Port" : [
			{"Name" : "input_r", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "conv1_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "226", "SubInstance" : "grp_subconv_1x1_419_fu_405", "Port" : "weight"}]},
			{"Name" : "conv1_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "226", "SubInstance" : "grp_subconv_1x1_419_fu_405", "Port" : "bias"}]},
			{"Name" : "conv2_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "230", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_417", "Port" : "weight"}]},
			{"Name" : "conv2_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "230", "SubInstance" : "grp_subconv_3x3_4_no_rel_fu_417", "Port" : "bias"}]},
			{"Name" : "conv3_weight", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "226", "SubInstance" : "grp_subconv_1x1_419_fu_405", "Port" : "weight"}]},
			{"Name" : "conv3_bias", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "226", "SubInstance" : "grp_subconv_1x1_419_fu_405", "Port" : "bias"}]},
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "233", "SubInstance" : "grp_shuffle_9621_fu_427", "Port" : "output_r"}]}]},
	{"ID" : "221", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.left_part_0_U", "Parent" : "220"},
	{"ID" : "222", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.right_part_0_U", "Parent" : "220"},
	{"ID" : "223", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.conv1_output_0_U", "Parent" : "220"},
	{"ID" : "224", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.conv2_output_0_U", "Parent" : "220"},
	{"ID" : "225", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.conv3_output_0_U", "Parent" : "220"},
	{"ID" : "226", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_1x1_419_fu_405", "Parent" : "220", "Child" : ["227", "228", "229"],
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
	{"ID" : "227", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_1x1_419_fu_405.ShuffleNetV2_faddbkb_x_U123", "Parent" : "226"},
	{"ID" : "228", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_1x1_419_fu_405.ShuffleNetV2_fmulcud_x_U124", "Parent" : "226"},
	{"ID" : "229", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_1x1_419_fu_405.ShuffleNetV2_fcmpdEe_x_U125", "Parent" : "226"},
	{"ID" : "230", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_3x3_4_no_rel_fu_417", "Parent" : "220", "Child" : ["231", "232"],
		"CDFG" : "subconv_3x3_4_no_rel",
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
	{"ID" : "231", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_3x3_4_no_rel_fu_417.ShuffleNetV2_faddbkb_x_U146", "Parent" : "230"},
	{"ID" : "232", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_subconv_3x3_4_no_rel_fu_417.ShuffleNetV2_fmulcud_x_U147", "Parent" : "230"},
	{"ID" : "233", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_ShuffleUnit2_fu_3513.grp_shuffle_9621_fu_427", "Parent" : "220",
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
			{"Name" : "output_r", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "234", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_3549", "Parent" : "0", "Child" : ["235", "236", "237"],
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
			{"Name" : "conv1_output", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "235", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_3549.ShuffleNetV2_faddbkb_U1", "Parent" : "234"},
	{"ID" : "236", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_3549.ShuffleNetV2_fmulcud_U2", "Parent" : "234"},
	{"ID" : "237", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv1_fu_3549.ShuffleNetV2_fcmpdEe_U3", "Parent" : "234"},
	{"ID" : "238", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_3561", "Parent" : "0", "Child" : ["239", "240", "241"],
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
	{"ID" : "239", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_3561.ShuffleNetV2_faddbkb_x_U160", "Parent" : "238"},
	{"ID" : "240", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_3561.ShuffleNetV2_fmulcud_x_U161", "Parent" : "238"},
	{"ID" : "241", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_conv_last_fu_3561.ShuffleNetV2_fcmpdEe_x_U162", "Parent" : "238"},
	{"ID" : "242", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_3573", "Parent" : "0", "Child" : ["243", "244"],
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
	{"ID" : "243", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_3573.ShuffleNetV2_faddbkb_x_U167", "Parent" : "242"},
	{"ID" : "244", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_avgpool_fu_3573.ShuffleNetV2_fmulcud_x_U168", "Parent" : "242"},
	{"ID" : "245", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_faddbkb_x_U171", "Parent" : "0"},
	{"ID" : "246", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_fmulcud_x_U172", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	ShuffleNetV2 {
		image_r {Type I LastRead 7 FirstWrite -1}
		conv1_weight {Type I LastRead 7 FirstWrite -1}
		shuffle_conv_3x3 {Type I LastRead 15 FirstWrite -1}
		shuffle_conv_1x1 {Type I LastRead 19 FirstWrite -1}
		conv_last_weight {Type I LastRead 4 FirstWrite -1}
		fc_weight {Type I LastRead 46 FirstWrite -1}
		bias {Type I LastRead 28 FirstWrite -1}
		fc_output {Type O LastRead -1 FirstWrite 53}
		ShuffleConvs_0_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_25 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_27 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_31 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_33 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_37 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_41 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_45 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_47 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_50 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_10 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_7 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_8 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_11 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_13 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_18 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_15 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_23 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_29 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_35 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_43 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_49 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_6 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_9 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_15 {Type IO LastRead -1 FirstWrite -1}
		conv1_bias {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_0_Shuff {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_51 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_52 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_53 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_54 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_56 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_57 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_58 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_59 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_60 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_61 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_62 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_63 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_64 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_65 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_67 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_68 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_69 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_70 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_71 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_39 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_55 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff_66 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_1_Shuff {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_5 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Downs_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_19 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_20 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_21 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_22 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_1 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_3 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_4 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff_17 {Type IO LastRead -1 FirstWrite -1}
		ShuffleConvs_2_Shuff {Type IO LastRead -1 FirstWrite -1}
		conv_last_bias {Type IO LastRead -1 FirstWrite -1}
		fc_bias {Type IO LastRead -1 FirstWrite -1}
		conv1_output {Type IO LastRead -1 FirstWrite -1}
		downsampleunit0_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit0_2_outpu {Type IO LastRead -1 FirstWrite -1}
		downsampleunit1_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_2_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_3_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_4_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_5_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_6_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit1_7_outpu {Type IO LastRead -1 FirstWrite -1}
		downsampleunit2_outp {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_0_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_1_outpu {Type IO LastRead -1 FirstWrite -1}
		shuffleunit2_2_outpu {Type IO LastRead -1 FirstWrite -1}
		conv_last_output {Type IO LastRead -1 FirstWrite -1}
		avgpool_output {Type IO LastRead -1 FirstWrite -1}}
	DownsampleUnit0 {
		input_r {Type I LastRead 6 FirstWrite -1}
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
		downsampleunit0_outp {Type O LastRead -1 FirstWrite 4}}
	subconv_1x1_3214 {
		input_r {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_32_strid {
		input_r {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_1612 {
		input_0 {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 12}}
	shuffle_2415 {
		left_0 {Type I LastRead 3 FirstWrite -1}
		right_0 {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
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
		output_r {Type O LastRead -1 FirstWrite 4}}
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
		output_r {Type O LastRead -1 FirstWrite 4}}
	ShuffleUnit0 {
		input_r {Type I LastRead 19 FirstWrite -1}
		conv1_weight {Type I LastRead 4 FirstWrite -1}
		conv1_bias {Type I LastRead 4 FirstWrite -1}
		conv2_weight {Type I LastRead 6 FirstWrite -1}
		conv2_bias {Type I LastRead 4 FirstWrite -1}
		conv3_weight {Type I LastRead 4 FirstWrite -1}
		conv3_bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	subconv_3x3_16_no_re {
		input_0 {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 11}}
	subconv_1x1_1612 {
		input_0 {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 12}}
	shuffle_2415 {
		left_0 {Type I LastRead 3 FirstWrite -1}
		right_0 {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	ShuffleUnit1 {
		input_r {Type I LastRead 19 FirstWrite -1}
		conv1_weight {Type I LastRead 4 FirstWrite -1}
		conv1_bias {Type I LastRead 4 FirstWrite -1}
		conv2_weight {Type I LastRead 6 FirstWrite -1}
		conv2_bias {Type I LastRead 4 FirstWrite -1}
		conv3_weight {Type I LastRead 4 FirstWrite -1}
		conv3_bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	subconv_3x3_8_no_rel {
		input_0 {Type I LastRead 6 FirstWrite -1}
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
		output_r {Type O LastRead -1 FirstWrite 4}}
	ShuffleUnit2 {
		input_r {Type I LastRead 19 FirstWrite -1}
		conv1_weight {Type I LastRead 4 FirstWrite -1}
		conv1_bias {Type I LastRead 4 FirstWrite -1}
		conv2_weight {Type I LastRead 6 FirstWrite -1}
		conv2_bias {Type I LastRead 4 FirstWrite -1}
		conv3_weight {Type I LastRead 4 FirstWrite -1}
		conv3_bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	subconv_1x1_419 {
		input_0 {Type I LastRead 4 FirstWrite -1}
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 12}}
	subconv_3x3_4_no_rel {
		input_0 {Type I LastRead 6 FirstWrite -1}
		weight {Type I LastRead 6 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_0 {Type O LastRead -1 FirstWrite 11}}
	shuffle_9621 {
		left_0 {Type I LastRead 3 FirstWrite -1}
		right_0 {Type I LastRead 3 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 4}}
	conv1 {
		input_r {Type I LastRead 7 FirstWrite -1}
		weight {Type I LastRead 7 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		conv1_output {Type O LastRead -1 FirstWrite 12}}
	conv_last {
		weight {Type I LastRead 4 FirstWrite -1}
		bias {Type I LastRead 4 FirstWrite -1}
		output_r {Type O LastRead -1 FirstWrite 12}
		shuffleunit2_2_outpu {Type I LastRead 4 FirstWrite -1}}
	avgpool {
		output_r {Type O LastRead -1 FirstWrite 6}
		conv_last_output {Type I LastRead 3 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "110591624", "Max" : "110591624"}
	, {"Name" : "Interval", "Min" : "110591625", "Max" : "110591625"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	image_r { ap_memory {  { image_r_address0 mem_address 1 12 }  { image_r_ce0 mem_ce 1 1 }  { image_r_q0 mem_dout 0 32 } } }
	conv1_weight { ap_memory {  { conv1_weight_address0 mem_address 1 10 }  { conv1_weight_ce0 mem_ce 1 1 }  { conv1_weight_q0 mem_dout 0 32 } } }
	shuffle_conv_3x3 { ap_memory {  { shuffle_conv_3x3_address0 mem_address 1 14 }  { shuffle_conv_3x3_ce0 mem_ce 1 1 }  { shuffle_conv_3x3_q0 mem_dout 0 32 }  { shuffle_conv_3x3_address1 mem_address 1 14 }  { shuffle_conv_3x3_ce1 mem_ce 1 1 }  { shuffle_conv_3x3_q1 mem_dout 0 32 } } }
	shuffle_conv_1x1 { ap_memory {  { shuffle_conv_1x1_address0 mem_address 1 18 }  { shuffle_conv_1x1_ce0 mem_ce 1 1 }  { shuffle_conv_1x1_q0 mem_dout 0 32 }  { shuffle_conv_1x1_address1 mem_address 1 18 }  { shuffle_conv_1x1_ce1 mem_ce 1 1 }  { shuffle_conv_1x1_q1 mem_dout 0 32 } } }
	conv_last_weight { ap_memory {  { conv_last_weight_address0 mem_address 1 17 }  { conv_last_weight_ce0 mem_ce 1 1 }  { conv_last_weight_q0 mem_dout 0 32 } } }
	fc_weight { ap_memory {  { fc_weight_address0 mem_address 1 13 }  { fc_weight_ce0 mem_ce 1 1 }  { fc_weight_q0 mem_dout 0 32 } } }
	bias { ap_memory {  { bias_address0 mem_address 1 12 }  { bias_ce0 mem_ce 1 1 }  { bias_q0 mem_dout 0 32 }  { bias_address1 mem_address 1 12 }  { bias_ce1 mem_ce 1 1 }  { bias_q1 mem_dout 0 32 } } }
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
