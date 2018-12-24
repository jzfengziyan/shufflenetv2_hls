set moduleName subconv_3x3_8_stride
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {subconv_3x3_8_stride}
set C_modelType { void 0 }
set C_modelArgList {
	{ weight_V int 8 regular {array 864 { 1 3 } 1 1 }  }
	{ bias_V int 8 regular {array 96 { 1 3 } 1 1 }  }
	{ output_V int 8 regular {array 3456 { 0 3 } 0 1 }  }
	{ ShuffleConvs_2_Downs_95 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_94 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_83 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_72 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_61 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_50 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_39 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_28 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_17 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_6 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_93 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_92 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_91 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_90 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_89 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_88 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_87 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_86 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_85 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_84 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_82 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_81 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_80 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_79 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_78 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_77 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_76 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_75 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_74 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_73 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_71 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_70 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_69 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_68 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_67 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_66 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_65 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_64 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_63 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_62 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_60 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_59 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_58 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_57 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_56 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_55 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_54 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_53 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_52 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_51 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_49 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_48 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_47 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_46 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_45 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_44 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_43 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_42 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_41 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_40 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_38 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_37 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_36 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_35 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_34 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_33 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_32 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_31 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_30 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_29 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_27 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_26 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_25 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_24 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_23 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_22 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_21 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_20 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_19 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_18 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_16 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_15 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_14 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_13 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_12 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_11 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_10 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_9 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_8 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_7 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_5 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_4 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_3 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_2 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs_1 int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
	{ ShuffleConvs_2_Downs int 8 regular {array 100 { 1 3 } 1 1 } {global 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "weight_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "output_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "ShuffleConvs_2_Downs_95", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_94", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_83", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_72", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_61", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_50", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_39", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_28", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_17", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_93", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_92", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_91", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_90", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_89", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_88", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_87", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_86", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_85", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_84", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_82", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_81", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_80", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_79", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_78", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 24,"up" : 24,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_77", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 25,"up" : 25,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_76", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 26,"up" : 26,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_75", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 27,"up" : 27,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_74", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 28,"up" : 28,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_73", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 29,"up" : 29,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_71", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 30,"up" : 30,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_70", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 31,"up" : 31,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_69", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 32,"up" : 32,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_68", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 33,"up" : 33,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_67", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 34,"up" : 34,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_66", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 35,"up" : 35,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_65", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 36,"up" : 36,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_64", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 37,"up" : 37,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_63", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 38,"up" : 38,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_62", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 39,"up" : 39,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_60", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 40,"up" : 40,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_59", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 41,"up" : 41,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_58", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 42,"up" : 42,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_57", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 43,"up" : 43,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_56", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 44,"up" : 44,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_55", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 45,"up" : 45,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_54", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 46,"up" : 46,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_53", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 47,"up" : 47,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_52", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 48,"up" : 48,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_51", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 49,"up" : 49,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_49", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 50,"up" : 50,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_48", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 51,"up" : 51,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_47", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 52,"up" : 52,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_46", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 53,"up" : 53,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_45", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 54,"up" : 54,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_44", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 55,"up" : 55,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_43", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 56,"up" : 56,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_42", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 57,"up" : 57,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_41", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 58,"up" : 58,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_40", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 59,"up" : 59,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_38", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 60,"up" : 60,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_37", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 61,"up" : 61,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_36", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 62,"up" : 62,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_35", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 63,"up" : 63,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_34", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 64,"up" : 64,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_33", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 65,"up" : 65,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_32", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 66,"up" : 66,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_31", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 67,"up" : 67,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_30", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 68,"up" : 68,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_29", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 69,"up" : 69,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_27", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 70,"up" : 70,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_26", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 71,"up" : 71,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_25", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 72,"up" : 72,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_24", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 73,"up" : 73,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_23", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 74,"up" : 74,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_22", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 75,"up" : 75,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_21", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 76,"up" : 76,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_20", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 77,"up" : 77,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_19", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 78,"up" : 78,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_18", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 79,"up" : 79,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_16", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 80,"up" : 80,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 81,"up" : 81,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 82,"up" : 82,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 83,"up" : 83,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 84,"up" : 84,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 85,"up" : 85,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 86,"up" : 86,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 87,"up" : 87,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 88,"up" : 88,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 89,"up" : 89,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 90,"up" : 90,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 91,"up" : 91,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 92,"up" : 92,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 93,"up" : 93,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 94,"up" : 94,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "ShuffleConvs_2_Downs", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "ShuffleConvs_2_DownsampleUnit__conv1r_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 95,"up" : 95,"step" : 2},{"low" : 0,"up" : 9,"step" : 1},{"low" : 0,"up" : 9,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 304
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ weight_V_address0 sc_out sc_lv 10 signal 0 } 
	{ weight_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ weight_V_q0 sc_in sc_lv 8 signal 0 } 
	{ bias_V_address0 sc_out sc_lv 7 signal 1 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 1 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 1 } 
	{ output_V_address0 sc_out sc_lv 12 signal 2 } 
	{ output_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ output_V_we0 sc_out sc_logic 1 signal 2 } 
	{ output_V_d0 sc_out sc_lv 8 signal 2 } 
	{ ShuffleConvs_2_Downs_95_address0 sc_out sc_lv 7 signal 3 } 
	{ ShuffleConvs_2_Downs_95_ce0 sc_out sc_logic 1 signal 3 } 
	{ ShuffleConvs_2_Downs_95_q0 sc_in sc_lv 8 signal 3 } 
	{ ShuffleConvs_2_Downs_94_address0 sc_out sc_lv 7 signal 4 } 
	{ ShuffleConvs_2_Downs_94_ce0 sc_out sc_logic 1 signal 4 } 
	{ ShuffleConvs_2_Downs_94_q0 sc_in sc_lv 8 signal 4 } 
	{ ShuffleConvs_2_Downs_83_address0 sc_out sc_lv 7 signal 5 } 
	{ ShuffleConvs_2_Downs_83_ce0 sc_out sc_logic 1 signal 5 } 
	{ ShuffleConvs_2_Downs_83_q0 sc_in sc_lv 8 signal 5 } 
	{ ShuffleConvs_2_Downs_72_address0 sc_out sc_lv 7 signal 6 } 
	{ ShuffleConvs_2_Downs_72_ce0 sc_out sc_logic 1 signal 6 } 
	{ ShuffleConvs_2_Downs_72_q0 sc_in sc_lv 8 signal 6 } 
	{ ShuffleConvs_2_Downs_61_address0 sc_out sc_lv 7 signal 7 } 
	{ ShuffleConvs_2_Downs_61_ce0 sc_out sc_logic 1 signal 7 } 
	{ ShuffleConvs_2_Downs_61_q0 sc_in sc_lv 8 signal 7 } 
	{ ShuffleConvs_2_Downs_50_address0 sc_out sc_lv 7 signal 8 } 
	{ ShuffleConvs_2_Downs_50_ce0 sc_out sc_logic 1 signal 8 } 
	{ ShuffleConvs_2_Downs_50_q0 sc_in sc_lv 8 signal 8 } 
	{ ShuffleConvs_2_Downs_39_address0 sc_out sc_lv 7 signal 9 } 
	{ ShuffleConvs_2_Downs_39_ce0 sc_out sc_logic 1 signal 9 } 
	{ ShuffleConvs_2_Downs_39_q0 sc_in sc_lv 8 signal 9 } 
	{ ShuffleConvs_2_Downs_28_address0 sc_out sc_lv 7 signal 10 } 
	{ ShuffleConvs_2_Downs_28_ce0 sc_out sc_logic 1 signal 10 } 
	{ ShuffleConvs_2_Downs_28_q0 sc_in sc_lv 8 signal 10 } 
	{ ShuffleConvs_2_Downs_17_address0 sc_out sc_lv 7 signal 11 } 
	{ ShuffleConvs_2_Downs_17_ce0 sc_out sc_logic 1 signal 11 } 
	{ ShuffleConvs_2_Downs_17_q0 sc_in sc_lv 8 signal 11 } 
	{ ShuffleConvs_2_Downs_6_address0 sc_out sc_lv 7 signal 12 } 
	{ ShuffleConvs_2_Downs_6_ce0 sc_out sc_logic 1 signal 12 } 
	{ ShuffleConvs_2_Downs_6_q0 sc_in sc_lv 8 signal 12 } 
	{ ShuffleConvs_2_Downs_93_address0 sc_out sc_lv 7 signal 13 } 
	{ ShuffleConvs_2_Downs_93_ce0 sc_out sc_logic 1 signal 13 } 
	{ ShuffleConvs_2_Downs_93_q0 sc_in sc_lv 8 signal 13 } 
	{ ShuffleConvs_2_Downs_92_address0 sc_out sc_lv 7 signal 14 } 
	{ ShuffleConvs_2_Downs_92_ce0 sc_out sc_logic 1 signal 14 } 
	{ ShuffleConvs_2_Downs_92_q0 sc_in sc_lv 8 signal 14 } 
	{ ShuffleConvs_2_Downs_91_address0 sc_out sc_lv 7 signal 15 } 
	{ ShuffleConvs_2_Downs_91_ce0 sc_out sc_logic 1 signal 15 } 
	{ ShuffleConvs_2_Downs_91_q0 sc_in sc_lv 8 signal 15 } 
	{ ShuffleConvs_2_Downs_90_address0 sc_out sc_lv 7 signal 16 } 
	{ ShuffleConvs_2_Downs_90_ce0 sc_out sc_logic 1 signal 16 } 
	{ ShuffleConvs_2_Downs_90_q0 sc_in sc_lv 8 signal 16 } 
	{ ShuffleConvs_2_Downs_89_address0 sc_out sc_lv 7 signal 17 } 
	{ ShuffleConvs_2_Downs_89_ce0 sc_out sc_logic 1 signal 17 } 
	{ ShuffleConvs_2_Downs_89_q0 sc_in sc_lv 8 signal 17 } 
	{ ShuffleConvs_2_Downs_88_address0 sc_out sc_lv 7 signal 18 } 
	{ ShuffleConvs_2_Downs_88_ce0 sc_out sc_logic 1 signal 18 } 
	{ ShuffleConvs_2_Downs_88_q0 sc_in sc_lv 8 signal 18 } 
	{ ShuffleConvs_2_Downs_87_address0 sc_out sc_lv 7 signal 19 } 
	{ ShuffleConvs_2_Downs_87_ce0 sc_out sc_logic 1 signal 19 } 
	{ ShuffleConvs_2_Downs_87_q0 sc_in sc_lv 8 signal 19 } 
	{ ShuffleConvs_2_Downs_86_address0 sc_out sc_lv 7 signal 20 } 
	{ ShuffleConvs_2_Downs_86_ce0 sc_out sc_logic 1 signal 20 } 
	{ ShuffleConvs_2_Downs_86_q0 sc_in sc_lv 8 signal 20 } 
	{ ShuffleConvs_2_Downs_85_address0 sc_out sc_lv 7 signal 21 } 
	{ ShuffleConvs_2_Downs_85_ce0 sc_out sc_logic 1 signal 21 } 
	{ ShuffleConvs_2_Downs_85_q0 sc_in sc_lv 8 signal 21 } 
	{ ShuffleConvs_2_Downs_84_address0 sc_out sc_lv 7 signal 22 } 
	{ ShuffleConvs_2_Downs_84_ce0 sc_out sc_logic 1 signal 22 } 
	{ ShuffleConvs_2_Downs_84_q0 sc_in sc_lv 8 signal 22 } 
	{ ShuffleConvs_2_Downs_82_address0 sc_out sc_lv 7 signal 23 } 
	{ ShuffleConvs_2_Downs_82_ce0 sc_out sc_logic 1 signal 23 } 
	{ ShuffleConvs_2_Downs_82_q0 sc_in sc_lv 8 signal 23 } 
	{ ShuffleConvs_2_Downs_81_address0 sc_out sc_lv 7 signal 24 } 
	{ ShuffleConvs_2_Downs_81_ce0 sc_out sc_logic 1 signal 24 } 
	{ ShuffleConvs_2_Downs_81_q0 sc_in sc_lv 8 signal 24 } 
	{ ShuffleConvs_2_Downs_80_address0 sc_out sc_lv 7 signal 25 } 
	{ ShuffleConvs_2_Downs_80_ce0 sc_out sc_logic 1 signal 25 } 
	{ ShuffleConvs_2_Downs_80_q0 sc_in sc_lv 8 signal 25 } 
	{ ShuffleConvs_2_Downs_79_address0 sc_out sc_lv 7 signal 26 } 
	{ ShuffleConvs_2_Downs_79_ce0 sc_out sc_logic 1 signal 26 } 
	{ ShuffleConvs_2_Downs_79_q0 sc_in sc_lv 8 signal 26 } 
	{ ShuffleConvs_2_Downs_78_address0 sc_out sc_lv 7 signal 27 } 
	{ ShuffleConvs_2_Downs_78_ce0 sc_out sc_logic 1 signal 27 } 
	{ ShuffleConvs_2_Downs_78_q0 sc_in sc_lv 8 signal 27 } 
	{ ShuffleConvs_2_Downs_77_address0 sc_out sc_lv 7 signal 28 } 
	{ ShuffleConvs_2_Downs_77_ce0 sc_out sc_logic 1 signal 28 } 
	{ ShuffleConvs_2_Downs_77_q0 sc_in sc_lv 8 signal 28 } 
	{ ShuffleConvs_2_Downs_76_address0 sc_out sc_lv 7 signal 29 } 
	{ ShuffleConvs_2_Downs_76_ce0 sc_out sc_logic 1 signal 29 } 
	{ ShuffleConvs_2_Downs_76_q0 sc_in sc_lv 8 signal 29 } 
	{ ShuffleConvs_2_Downs_75_address0 sc_out sc_lv 7 signal 30 } 
	{ ShuffleConvs_2_Downs_75_ce0 sc_out sc_logic 1 signal 30 } 
	{ ShuffleConvs_2_Downs_75_q0 sc_in sc_lv 8 signal 30 } 
	{ ShuffleConvs_2_Downs_74_address0 sc_out sc_lv 7 signal 31 } 
	{ ShuffleConvs_2_Downs_74_ce0 sc_out sc_logic 1 signal 31 } 
	{ ShuffleConvs_2_Downs_74_q0 sc_in sc_lv 8 signal 31 } 
	{ ShuffleConvs_2_Downs_73_address0 sc_out sc_lv 7 signal 32 } 
	{ ShuffleConvs_2_Downs_73_ce0 sc_out sc_logic 1 signal 32 } 
	{ ShuffleConvs_2_Downs_73_q0 sc_in sc_lv 8 signal 32 } 
	{ ShuffleConvs_2_Downs_71_address0 sc_out sc_lv 7 signal 33 } 
	{ ShuffleConvs_2_Downs_71_ce0 sc_out sc_logic 1 signal 33 } 
	{ ShuffleConvs_2_Downs_71_q0 sc_in sc_lv 8 signal 33 } 
	{ ShuffleConvs_2_Downs_70_address0 sc_out sc_lv 7 signal 34 } 
	{ ShuffleConvs_2_Downs_70_ce0 sc_out sc_logic 1 signal 34 } 
	{ ShuffleConvs_2_Downs_70_q0 sc_in sc_lv 8 signal 34 } 
	{ ShuffleConvs_2_Downs_69_address0 sc_out sc_lv 7 signal 35 } 
	{ ShuffleConvs_2_Downs_69_ce0 sc_out sc_logic 1 signal 35 } 
	{ ShuffleConvs_2_Downs_69_q0 sc_in sc_lv 8 signal 35 } 
	{ ShuffleConvs_2_Downs_68_address0 sc_out sc_lv 7 signal 36 } 
	{ ShuffleConvs_2_Downs_68_ce0 sc_out sc_logic 1 signal 36 } 
	{ ShuffleConvs_2_Downs_68_q0 sc_in sc_lv 8 signal 36 } 
	{ ShuffleConvs_2_Downs_67_address0 sc_out sc_lv 7 signal 37 } 
	{ ShuffleConvs_2_Downs_67_ce0 sc_out sc_logic 1 signal 37 } 
	{ ShuffleConvs_2_Downs_67_q0 sc_in sc_lv 8 signal 37 } 
	{ ShuffleConvs_2_Downs_66_address0 sc_out sc_lv 7 signal 38 } 
	{ ShuffleConvs_2_Downs_66_ce0 sc_out sc_logic 1 signal 38 } 
	{ ShuffleConvs_2_Downs_66_q0 sc_in sc_lv 8 signal 38 } 
	{ ShuffleConvs_2_Downs_65_address0 sc_out sc_lv 7 signal 39 } 
	{ ShuffleConvs_2_Downs_65_ce0 sc_out sc_logic 1 signal 39 } 
	{ ShuffleConvs_2_Downs_65_q0 sc_in sc_lv 8 signal 39 } 
	{ ShuffleConvs_2_Downs_64_address0 sc_out sc_lv 7 signal 40 } 
	{ ShuffleConvs_2_Downs_64_ce0 sc_out sc_logic 1 signal 40 } 
	{ ShuffleConvs_2_Downs_64_q0 sc_in sc_lv 8 signal 40 } 
	{ ShuffleConvs_2_Downs_63_address0 sc_out sc_lv 7 signal 41 } 
	{ ShuffleConvs_2_Downs_63_ce0 sc_out sc_logic 1 signal 41 } 
	{ ShuffleConvs_2_Downs_63_q0 sc_in sc_lv 8 signal 41 } 
	{ ShuffleConvs_2_Downs_62_address0 sc_out sc_lv 7 signal 42 } 
	{ ShuffleConvs_2_Downs_62_ce0 sc_out sc_logic 1 signal 42 } 
	{ ShuffleConvs_2_Downs_62_q0 sc_in sc_lv 8 signal 42 } 
	{ ShuffleConvs_2_Downs_60_address0 sc_out sc_lv 7 signal 43 } 
	{ ShuffleConvs_2_Downs_60_ce0 sc_out sc_logic 1 signal 43 } 
	{ ShuffleConvs_2_Downs_60_q0 sc_in sc_lv 8 signal 43 } 
	{ ShuffleConvs_2_Downs_59_address0 sc_out sc_lv 7 signal 44 } 
	{ ShuffleConvs_2_Downs_59_ce0 sc_out sc_logic 1 signal 44 } 
	{ ShuffleConvs_2_Downs_59_q0 sc_in sc_lv 8 signal 44 } 
	{ ShuffleConvs_2_Downs_58_address0 sc_out sc_lv 7 signal 45 } 
	{ ShuffleConvs_2_Downs_58_ce0 sc_out sc_logic 1 signal 45 } 
	{ ShuffleConvs_2_Downs_58_q0 sc_in sc_lv 8 signal 45 } 
	{ ShuffleConvs_2_Downs_57_address0 sc_out sc_lv 7 signal 46 } 
	{ ShuffleConvs_2_Downs_57_ce0 sc_out sc_logic 1 signal 46 } 
	{ ShuffleConvs_2_Downs_57_q0 sc_in sc_lv 8 signal 46 } 
	{ ShuffleConvs_2_Downs_56_address0 sc_out sc_lv 7 signal 47 } 
	{ ShuffleConvs_2_Downs_56_ce0 sc_out sc_logic 1 signal 47 } 
	{ ShuffleConvs_2_Downs_56_q0 sc_in sc_lv 8 signal 47 } 
	{ ShuffleConvs_2_Downs_55_address0 sc_out sc_lv 7 signal 48 } 
	{ ShuffleConvs_2_Downs_55_ce0 sc_out sc_logic 1 signal 48 } 
	{ ShuffleConvs_2_Downs_55_q0 sc_in sc_lv 8 signal 48 } 
	{ ShuffleConvs_2_Downs_54_address0 sc_out sc_lv 7 signal 49 } 
	{ ShuffleConvs_2_Downs_54_ce0 sc_out sc_logic 1 signal 49 } 
	{ ShuffleConvs_2_Downs_54_q0 sc_in sc_lv 8 signal 49 } 
	{ ShuffleConvs_2_Downs_53_address0 sc_out sc_lv 7 signal 50 } 
	{ ShuffleConvs_2_Downs_53_ce0 sc_out sc_logic 1 signal 50 } 
	{ ShuffleConvs_2_Downs_53_q0 sc_in sc_lv 8 signal 50 } 
	{ ShuffleConvs_2_Downs_52_address0 sc_out sc_lv 7 signal 51 } 
	{ ShuffleConvs_2_Downs_52_ce0 sc_out sc_logic 1 signal 51 } 
	{ ShuffleConvs_2_Downs_52_q0 sc_in sc_lv 8 signal 51 } 
	{ ShuffleConvs_2_Downs_51_address0 sc_out sc_lv 7 signal 52 } 
	{ ShuffleConvs_2_Downs_51_ce0 sc_out sc_logic 1 signal 52 } 
	{ ShuffleConvs_2_Downs_51_q0 sc_in sc_lv 8 signal 52 } 
	{ ShuffleConvs_2_Downs_49_address0 sc_out sc_lv 7 signal 53 } 
	{ ShuffleConvs_2_Downs_49_ce0 sc_out sc_logic 1 signal 53 } 
	{ ShuffleConvs_2_Downs_49_q0 sc_in sc_lv 8 signal 53 } 
	{ ShuffleConvs_2_Downs_48_address0 sc_out sc_lv 7 signal 54 } 
	{ ShuffleConvs_2_Downs_48_ce0 sc_out sc_logic 1 signal 54 } 
	{ ShuffleConvs_2_Downs_48_q0 sc_in sc_lv 8 signal 54 } 
	{ ShuffleConvs_2_Downs_47_address0 sc_out sc_lv 7 signal 55 } 
	{ ShuffleConvs_2_Downs_47_ce0 sc_out sc_logic 1 signal 55 } 
	{ ShuffleConvs_2_Downs_47_q0 sc_in sc_lv 8 signal 55 } 
	{ ShuffleConvs_2_Downs_46_address0 sc_out sc_lv 7 signal 56 } 
	{ ShuffleConvs_2_Downs_46_ce0 sc_out sc_logic 1 signal 56 } 
	{ ShuffleConvs_2_Downs_46_q0 sc_in sc_lv 8 signal 56 } 
	{ ShuffleConvs_2_Downs_45_address0 sc_out sc_lv 7 signal 57 } 
	{ ShuffleConvs_2_Downs_45_ce0 sc_out sc_logic 1 signal 57 } 
	{ ShuffleConvs_2_Downs_45_q0 sc_in sc_lv 8 signal 57 } 
	{ ShuffleConvs_2_Downs_44_address0 sc_out sc_lv 7 signal 58 } 
	{ ShuffleConvs_2_Downs_44_ce0 sc_out sc_logic 1 signal 58 } 
	{ ShuffleConvs_2_Downs_44_q0 sc_in sc_lv 8 signal 58 } 
	{ ShuffleConvs_2_Downs_43_address0 sc_out sc_lv 7 signal 59 } 
	{ ShuffleConvs_2_Downs_43_ce0 sc_out sc_logic 1 signal 59 } 
	{ ShuffleConvs_2_Downs_43_q0 sc_in sc_lv 8 signal 59 } 
	{ ShuffleConvs_2_Downs_42_address0 sc_out sc_lv 7 signal 60 } 
	{ ShuffleConvs_2_Downs_42_ce0 sc_out sc_logic 1 signal 60 } 
	{ ShuffleConvs_2_Downs_42_q0 sc_in sc_lv 8 signal 60 } 
	{ ShuffleConvs_2_Downs_41_address0 sc_out sc_lv 7 signal 61 } 
	{ ShuffleConvs_2_Downs_41_ce0 sc_out sc_logic 1 signal 61 } 
	{ ShuffleConvs_2_Downs_41_q0 sc_in sc_lv 8 signal 61 } 
	{ ShuffleConvs_2_Downs_40_address0 sc_out sc_lv 7 signal 62 } 
	{ ShuffleConvs_2_Downs_40_ce0 sc_out sc_logic 1 signal 62 } 
	{ ShuffleConvs_2_Downs_40_q0 sc_in sc_lv 8 signal 62 } 
	{ ShuffleConvs_2_Downs_38_address0 sc_out sc_lv 7 signal 63 } 
	{ ShuffleConvs_2_Downs_38_ce0 sc_out sc_logic 1 signal 63 } 
	{ ShuffleConvs_2_Downs_38_q0 sc_in sc_lv 8 signal 63 } 
	{ ShuffleConvs_2_Downs_37_address0 sc_out sc_lv 7 signal 64 } 
	{ ShuffleConvs_2_Downs_37_ce0 sc_out sc_logic 1 signal 64 } 
	{ ShuffleConvs_2_Downs_37_q0 sc_in sc_lv 8 signal 64 } 
	{ ShuffleConvs_2_Downs_36_address0 sc_out sc_lv 7 signal 65 } 
	{ ShuffleConvs_2_Downs_36_ce0 sc_out sc_logic 1 signal 65 } 
	{ ShuffleConvs_2_Downs_36_q0 sc_in sc_lv 8 signal 65 } 
	{ ShuffleConvs_2_Downs_35_address0 sc_out sc_lv 7 signal 66 } 
	{ ShuffleConvs_2_Downs_35_ce0 sc_out sc_logic 1 signal 66 } 
	{ ShuffleConvs_2_Downs_35_q0 sc_in sc_lv 8 signal 66 } 
	{ ShuffleConvs_2_Downs_34_address0 sc_out sc_lv 7 signal 67 } 
	{ ShuffleConvs_2_Downs_34_ce0 sc_out sc_logic 1 signal 67 } 
	{ ShuffleConvs_2_Downs_34_q0 sc_in sc_lv 8 signal 67 } 
	{ ShuffleConvs_2_Downs_33_address0 sc_out sc_lv 7 signal 68 } 
	{ ShuffleConvs_2_Downs_33_ce0 sc_out sc_logic 1 signal 68 } 
	{ ShuffleConvs_2_Downs_33_q0 sc_in sc_lv 8 signal 68 } 
	{ ShuffleConvs_2_Downs_32_address0 sc_out sc_lv 7 signal 69 } 
	{ ShuffleConvs_2_Downs_32_ce0 sc_out sc_logic 1 signal 69 } 
	{ ShuffleConvs_2_Downs_32_q0 sc_in sc_lv 8 signal 69 } 
	{ ShuffleConvs_2_Downs_31_address0 sc_out sc_lv 7 signal 70 } 
	{ ShuffleConvs_2_Downs_31_ce0 sc_out sc_logic 1 signal 70 } 
	{ ShuffleConvs_2_Downs_31_q0 sc_in sc_lv 8 signal 70 } 
	{ ShuffleConvs_2_Downs_30_address0 sc_out sc_lv 7 signal 71 } 
	{ ShuffleConvs_2_Downs_30_ce0 sc_out sc_logic 1 signal 71 } 
	{ ShuffleConvs_2_Downs_30_q0 sc_in sc_lv 8 signal 71 } 
	{ ShuffleConvs_2_Downs_29_address0 sc_out sc_lv 7 signal 72 } 
	{ ShuffleConvs_2_Downs_29_ce0 sc_out sc_logic 1 signal 72 } 
	{ ShuffleConvs_2_Downs_29_q0 sc_in sc_lv 8 signal 72 } 
	{ ShuffleConvs_2_Downs_27_address0 sc_out sc_lv 7 signal 73 } 
	{ ShuffleConvs_2_Downs_27_ce0 sc_out sc_logic 1 signal 73 } 
	{ ShuffleConvs_2_Downs_27_q0 sc_in sc_lv 8 signal 73 } 
	{ ShuffleConvs_2_Downs_26_address0 sc_out sc_lv 7 signal 74 } 
	{ ShuffleConvs_2_Downs_26_ce0 sc_out sc_logic 1 signal 74 } 
	{ ShuffleConvs_2_Downs_26_q0 sc_in sc_lv 8 signal 74 } 
	{ ShuffleConvs_2_Downs_25_address0 sc_out sc_lv 7 signal 75 } 
	{ ShuffleConvs_2_Downs_25_ce0 sc_out sc_logic 1 signal 75 } 
	{ ShuffleConvs_2_Downs_25_q0 sc_in sc_lv 8 signal 75 } 
	{ ShuffleConvs_2_Downs_24_address0 sc_out sc_lv 7 signal 76 } 
	{ ShuffleConvs_2_Downs_24_ce0 sc_out sc_logic 1 signal 76 } 
	{ ShuffleConvs_2_Downs_24_q0 sc_in sc_lv 8 signal 76 } 
	{ ShuffleConvs_2_Downs_23_address0 sc_out sc_lv 7 signal 77 } 
	{ ShuffleConvs_2_Downs_23_ce0 sc_out sc_logic 1 signal 77 } 
	{ ShuffleConvs_2_Downs_23_q0 sc_in sc_lv 8 signal 77 } 
	{ ShuffleConvs_2_Downs_22_address0 sc_out sc_lv 7 signal 78 } 
	{ ShuffleConvs_2_Downs_22_ce0 sc_out sc_logic 1 signal 78 } 
	{ ShuffleConvs_2_Downs_22_q0 sc_in sc_lv 8 signal 78 } 
	{ ShuffleConvs_2_Downs_21_address0 sc_out sc_lv 7 signal 79 } 
	{ ShuffleConvs_2_Downs_21_ce0 sc_out sc_logic 1 signal 79 } 
	{ ShuffleConvs_2_Downs_21_q0 sc_in sc_lv 8 signal 79 } 
	{ ShuffleConvs_2_Downs_20_address0 sc_out sc_lv 7 signal 80 } 
	{ ShuffleConvs_2_Downs_20_ce0 sc_out sc_logic 1 signal 80 } 
	{ ShuffleConvs_2_Downs_20_q0 sc_in sc_lv 8 signal 80 } 
	{ ShuffleConvs_2_Downs_19_address0 sc_out sc_lv 7 signal 81 } 
	{ ShuffleConvs_2_Downs_19_ce0 sc_out sc_logic 1 signal 81 } 
	{ ShuffleConvs_2_Downs_19_q0 sc_in sc_lv 8 signal 81 } 
	{ ShuffleConvs_2_Downs_18_address0 sc_out sc_lv 7 signal 82 } 
	{ ShuffleConvs_2_Downs_18_ce0 sc_out sc_logic 1 signal 82 } 
	{ ShuffleConvs_2_Downs_18_q0 sc_in sc_lv 8 signal 82 } 
	{ ShuffleConvs_2_Downs_16_address0 sc_out sc_lv 7 signal 83 } 
	{ ShuffleConvs_2_Downs_16_ce0 sc_out sc_logic 1 signal 83 } 
	{ ShuffleConvs_2_Downs_16_q0 sc_in sc_lv 8 signal 83 } 
	{ ShuffleConvs_2_Downs_15_address0 sc_out sc_lv 7 signal 84 } 
	{ ShuffleConvs_2_Downs_15_ce0 sc_out sc_logic 1 signal 84 } 
	{ ShuffleConvs_2_Downs_15_q0 sc_in sc_lv 8 signal 84 } 
	{ ShuffleConvs_2_Downs_14_address0 sc_out sc_lv 7 signal 85 } 
	{ ShuffleConvs_2_Downs_14_ce0 sc_out sc_logic 1 signal 85 } 
	{ ShuffleConvs_2_Downs_14_q0 sc_in sc_lv 8 signal 85 } 
	{ ShuffleConvs_2_Downs_13_address0 sc_out sc_lv 7 signal 86 } 
	{ ShuffleConvs_2_Downs_13_ce0 sc_out sc_logic 1 signal 86 } 
	{ ShuffleConvs_2_Downs_13_q0 sc_in sc_lv 8 signal 86 } 
	{ ShuffleConvs_2_Downs_12_address0 sc_out sc_lv 7 signal 87 } 
	{ ShuffleConvs_2_Downs_12_ce0 sc_out sc_logic 1 signal 87 } 
	{ ShuffleConvs_2_Downs_12_q0 sc_in sc_lv 8 signal 87 } 
	{ ShuffleConvs_2_Downs_11_address0 sc_out sc_lv 7 signal 88 } 
	{ ShuffleConvs_2_Downs_11_ce0 sc_out sc_logic 1 signal 88 } 
	{ ShuffleConvs_2_Downs_11_q0 sc_in sc_lv 8 signal 88 } 
	{ ShuffleConvs_2_Downs_10_address0 sc_out sc_lv 7 signal 89 } 
	{ ShuffleConvs_2_Downs_10_ce0 sc_out sc_logic 1 signal 89 } 
	{ ShuffleConvs_2_Downs_10_q0 sc_in sc_lv 8 signal 89 } 
	{ ShuffleConvs_2_Downs_9_address0 sc_out sc_lv 7 signal 90 } 
	{ ShuffleConvs_2_Downs_9_ce0 sc_out sc_logic 1 signal 90 } 
	{ ShuffleConvs_2_Downs_9_q0 sc_in sc_lv 8 signal 90 } 
	{ ShuffleConvs_2_Downs_8_address0 sc_out sc_lv 7 signal 91 } 
	{ ShuffleConvs_2_Downs_8_ce0 sc_out sc_logic 1 signal 91 } 
	{ ShuffleConvs_2_Downs_8_q0 sc_in sc_lv 8 signal 91 } 
	{ ShuffleConvs_2_Downs_7_address0 sc_out sc_lv 7 signal 92 } 
	{ ShuffleConvs_2_Downs_7_ce0 sc_out sc_logic 1 signal 92 } 
	{ ShuffleConvs_2_Downs_7_q0 sc_in sc_lv 8 signal 92 } 
	{ ShuffleConvs_2_Downs_5_address0 sc_out sc_lv 7 signal 93 } 
	{ ShuffleConvs_2_Downs_5_ce0 sc_out sc_logic 1 signal 93 } 
	{ ShuffleConvs_2_Downs_5_q0 sc_in sc_lv 8 signal 93 } 
	{ ShuffleConvs_2_Downs_4_address0 sc_out sc_lv 7 signal 94 } 
	{ ShuffleConvs_2_Downs_4_ce0 sc_out sc_logic 1 signal 94 } 
	{ ShuffleConvs_2_Downs_4_q0 sc_in sc_lv 8 signal 94 } 
	{ ShuffleConvs_2_Downs_3_address0 sc_out sc_lv 7 signal 95 } 
	{ ShuffleConvs_2_Downs_3_ce0 sc_out sc_logic 1 signal 95 } 
	{ ShuffleConvs_2_Downs_3_q0 sc_in sc_lv 8 signal 95 } 
	{ ShuffleConvs_2_Downs_2_address0 sc_out sc_lv 7 signal 96 } 
	{ ShuffleConvs_2_Downs_2_ce0 sc_out sc_logic 1 signal 96 } 
	{ ShuffleConvs_2_Downs_2_q0 sc_in sc_lv 8 signal 96 } 
	{ ShuffleConvs_2_Downs_1_address0 sc_out sc_lv 7 signal 97 } 
	{ ShuffleConvs_2_Downs_1_ce0 sc_out sc_logic 1 signal 97 } 
	{ ShuffleConvs_2_Downs_1_q0 sc_in sc_lv 8 signal 97 } 
	{ ShuffleConvs_2_Downs_address0 sc_out sc_lv 7 signal 98 } 
	{ ShuffleConvs_2_Downs_ce0 sc_out sc_logic 1 signal 98 } 
	{ ShuffleConvs_2_Downs_q0 sc_in sc_lv 8 signal 98 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "weight_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "weight_V", "role": "address0" }} , 
 	{ "name": "weight_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ce0" }} , 
 	{ "name": "weight_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_V", "role": "q0" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "output_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "output_V", "role": "address0" }} , 
 	{ "name": "output_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "ce0" }} , 
 	{ "name": "output_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_V", "role": "we0" }} , 
 	{ "name": "output_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "output_V", "role": "d0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_95_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_95", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_95_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_95", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_95_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_95", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_94_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_94", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_94_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_94", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_94_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_94", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_83_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_83", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_83_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_83", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_83_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_83", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_72_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_72", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_72_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_72", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_72_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_72", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_61_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_61", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_61_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_61", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_61_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_61", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_50_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_50", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_50_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_50", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_50_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_50", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_39_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_39", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_39_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_39", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_39_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_39", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_28_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_28", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_28_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_28", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_28_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_28", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_17", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_17", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_17", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_6", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_93_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_93", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_93_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_93", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_93_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_93", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_92_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_92", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_92_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_92", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_92_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_92", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_91_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_91", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_91_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_91", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_91_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_91", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_90_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_90", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_90_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_90", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_90_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_90", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_89_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_89", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_89_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_89", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_89_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_89", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_88_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_88", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_88_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_88", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_88_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_88", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_87_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_87", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_87_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_87", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_87_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_87", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_86_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_86", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_86_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_86", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_86_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_86", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_85_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_85", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_85_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_85", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_85_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_85", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_84_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_84", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_84_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_84", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_84_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_84", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_82_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_82", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_82_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_82", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_82_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_82", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_81_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_81", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_81_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_81", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_81_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_81", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_80_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_80", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_80_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_80", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_80_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_80", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_79_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_79", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_79_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_79", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_79_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_79", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_78_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_78", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_78_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_78", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_78_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_78", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_77_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_77", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_77_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_77", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_77_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_77", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_76_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_76", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_76_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_76", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_76_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_76", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_75_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_75", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_75_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_75", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_75_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_75", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_74_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_74", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_74_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_74", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_74_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_74", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_73_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_73", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_73_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_73", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_73_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_73", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_71_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_71", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_71_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_71", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_71_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_71", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_70_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_70", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_70_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_70", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_70_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_70", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_69_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_69", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_69_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_69", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_69_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_69", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_68_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_68", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_68_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_68", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_68_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_68", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_67_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_67", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_67_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_67", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_67_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_67", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_66_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_66", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_66_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_66", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_66_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_66", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_65_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_65", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_65_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_65", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_65_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_65", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_64_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_64", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_64_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_64", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_64_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_64", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_63_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_63", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_63_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_63", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_63_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_63", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_62_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_62", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_62_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_62", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_62_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_62", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_60_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_60", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_60_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_60", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_60_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_60", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_59_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_59", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_59_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_59", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_59_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_59", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_58_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_58", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_58_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_58", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_58_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_58", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_57_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_57", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_57_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_57", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_57_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_57", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_56_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_56", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_56_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_56", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_56_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_56", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_55_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_55", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_55_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_55", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_55_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_55", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_54_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_54", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_54_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_54", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_54_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_54", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_53_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_53", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_53_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_53", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_53_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_53", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_52_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_52", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_52_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_52", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_52_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_52", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_51_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_51", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_51_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_51", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_51_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_51", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_49_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_49", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_49_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_49", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_49_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_49", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_48_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_48", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_48_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_48", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_48_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_48", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_47_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_47", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_47_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_47", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_47_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_47", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_46_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_46", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_46_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_46", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_46_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_46", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_45_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_45", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_45_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_45", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_45_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_45", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_44_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_44", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_44_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_44", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_44_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_44", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_43_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_43", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_43_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_43", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_43_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_43", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_42_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_42", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_42_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_42", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_42_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_42", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_41_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_41", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_41_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_41", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_41_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_41", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_40_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_40", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_40_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_40", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_40_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_40", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_38_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_38", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_38_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_38", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_38_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_38", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_37_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_37", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_37_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_37", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_37_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_37", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_36_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_36", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_36_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_36", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_36_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_36", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_35_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_35", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_35_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_35", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_35_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_35", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_34_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_34", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_34_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_34", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_34_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_34", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_33_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_33", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_33_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_33", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_33_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_33", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_32_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_32", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_32_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_32", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_32_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_32", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_31_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_31", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_31_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_31", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_31_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_31", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_30_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_30", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_30_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_30", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_30_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_30", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_29_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_29", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_29_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_29", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_29_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_29", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_27_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_27", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_27_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_27", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_27_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_27", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_26_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_26", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_26_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_26", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_26_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_26", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_25_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_25", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_25_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_25", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_25_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_25", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_24_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_24", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_24_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_24", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_24_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_24", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_23", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_23", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_23", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_22", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_22", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_22", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_21", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_21", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_21", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_20", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_20", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_20", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_19", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_19", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_19", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_18", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_18", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_18", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_16", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_16", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_16", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_15", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_15", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_15", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_14", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_14", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_14", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_13", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_13", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_13", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_12", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_12", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_12", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_11", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_10", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_9", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_8", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_7", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_5", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_4", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_3", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_2", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs_1", "role": "q0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "address0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "ce0" }} , 
 	{ "name": "ShuffleConvs_2_Downs_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "ShuffleConvs_2_Downs", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_g8j_x_U910", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mac_cud_x_U911", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		ShuffleConvs_2_Downs {Type I LastRead 5 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "56257", "Max" : "56257"}
	, {"Name" : "Interval", "Min" : "56257", "Max" : "56257"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	weight_V { ap_memory {  { weight_V_address0 mem_address 1 10 }  { weight_V_ce0 mem_ce 1 1 }  { weight_V_q0 mem_dout 0 8 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 7 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	output_V { ap_memory {  { output_V_address0 mem_address 1 12 }  { output_V_ce0 mem_ce 1 1 }  { output_V_we0 mem_we 1 1 }  { output_V_d0 mem_din 1 8 } } }
	ShuffleConvs_2_Downs_95 { ap_memory {  { ShuffleConvs_2_Downs_95_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_95_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_95_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_94 { ap_memory {  { ShuffleConvs_2_Downs_94_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_94_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_94_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_83 { ap_memory {  { ShuffleConvs_2_Downs_83_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_83_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_83_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_72 { ap_memory {  { ShuffleConvs_2_Downs_72_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_72_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_72_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_61 { ap_memory {  { ShuffleConvs_2_Downs_61_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_61_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_61_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_50 { ap_memory {  { ShuffleConvs_2_Downs_50_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_50_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_50_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_39 { ap_memory {  { ShuffleConvs_2_Downs_39_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_39_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_39_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_28 { ap_memory {  { ShuffleConvs_2_Downs_28_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_28_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_28_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_17 { ap_memory {  { ShuffleConvs_2_Downs_17_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_17_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_17_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_6 { ap_memory {  { ShuffleConvs_2_Downs_6_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_6_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_6_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_93 { ap_memory {  { ShuffleConvs_2_Downs_93_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_93_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_93_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_92 { ap_memory {  { ShuffleConvs_2_Downs_92_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_92_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_92_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_91 { ap_memory {  { ShuffleConvs_2_Downs_91_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_91_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_91_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_90 { ap_memory {  { ShuffleConvs_2_Downs_90_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_90_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_90_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_89 { ap_memory {  { ShuffleConvs_2_Downs_89_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_89_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_89_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_88 { ap_memory {  { ShuffleConvs_2_Downs_88_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_88_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_88_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_87 { ap_memory {  { ShuffleConvs_2_Downs_87_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_87_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_87_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_86 { ap_memory {  { ShuffleConvs_2_Downs_86_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_86_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_86_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_85 { ap_memory {  { ShuffleConvs_2_Downs_85_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_85_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_85_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_84 { ap_memory {  { ShuffleConvs_2_Downs_84_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_84_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_84_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_82 { ap_memory {  { ShuffleConvs_2_Downs_82_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_82_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_82_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_81 { ap_memory {  { ShuffleConvs_2_Downs_81_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_81_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_81_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_80 { ap_memory {  { ShuffleConvs_2_Downs_80_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_80_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_80_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_79 { ap_memory {  { ShuffleConvs_2_Downs_79_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_79_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_79_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_78 { ap_memory {  { ShuffleConvs_2_Downs_78_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_78_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_78_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_77 { ap_memory {  { ShuffleConvs_2_Downs_77_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_77_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_77_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_76 { ap_memory {  { ShuffleConvs_2_Downs_76_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_76_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_76_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_75 { ap_memory {  { ShuffleConvs_2_Downs_75_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_75_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_75_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_74 { ap_memory {  { ShuffleConvs_2_Downs_74_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_74_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_74_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_73 { ap_memory {  { ShuffleConvs_2_Downs_73_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_73_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_73_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_71 { ap_memory {  { ShuffleConvs_2_Downs_71_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_71_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_71_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_70 { ap_memory {  { ShuffleConvs_2_Downs_70_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_70_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_70_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_69 { ap_memory {  { ShuffleConvs_2_Downs_69_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_69_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_69_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_68 { ap_memory {  { ShuffleConvs_2_Downs_68_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_68_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_68_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_67 { ap_memory {  { ShuffleConvs_2_Downs_67_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_67_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_67_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_66 { ap_memory {  { ShuffleConvs_2_Downs_66_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_66_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_66_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_65 { ap_memory {  { ShuffleConvs_2_Downs_65_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_65_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_65_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_64 { ap_memory {  { ShuffleConvs_2_Downs_64_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_64_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_64_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_63 { ap_memory {  { ShuffleConvs_2_Downs_63_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_63_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_63_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_62 { ap_memory {  { ShuffleConvs_2_Downs_62_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_62_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_62_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_60 { ap_memory {  { ShuffleConvs_2_Downs_60_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_60_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_60_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_59 { ap_memory {  { ShuffleConvs_2_Downs_59_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_59_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_59_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_58 { ap_memory {  { ShuffleConvs_2_Downs_58_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_58_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_58_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_57 { ap_memory {  { ShuffleConvs_2_Downs_57_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_57_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_57_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_56 { ap_memory {  { ShuffleConvs_2_Downs_56_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_56_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_56_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_55 { ap_memory {  { ShuffleConvs_2_Downs_55_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_55_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_55_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_54 { ap_memory {  { ShuffleConvs_2_Downs_54_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_54_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_54_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_53 { ap_memory {  { ShuffleConvs_2_Downs_53_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_53_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_53_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_52 { ap_memory {  { ShuffleConvs_2_Downs_52_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_52_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_52_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_51 { ap_memory {  { ShuffleConvs_2_Downs_51_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_51_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_51_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_49 { ap_memory {  { ShuffleConvs_2_Downs_49_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_49_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_49_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_48 { ap_memory {  { ShuffleConvs_2_Downs_48_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_48_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_48_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_47 { ap_memory {  { ShuffleConvs_2_Downs_47_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_47_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_47_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_46 { ap_memory {  { ShuffleConvs_2_Downs_46_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_46_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_46_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_45 { ap_memory {  { ShuffleConvs_2_Downs_45_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_45_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_45_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_44 { ap_memory {  { ShuffleConvs_2_Downs_44_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_44_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_44_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_43 { ap_memory {  { ShuffleConvs_2_Downs_43_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_43_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_43_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_42 { ap_memory {  { ShuffleConvs_2_Downs_42_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_42_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_42_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_41 { ap_memory {  { ShuffleConvs_2_Downs_41_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_41_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_41_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_40 { ap_memory {  { ShuffleConvs_2_Downs_40_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_40_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_40_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_38 { ap_memory {  { ShuffleConvs_2_Downs_38_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_38_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_38_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_37 { ap_memory {  { ShuffleConvs_2_Downs_37_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_37_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_37_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_36 { ap_memory {  { ShuffleConvs_2_Downs_36_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_36_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_36_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_35 { ap_memory {  { ShuffleConvs_2_Downs_35_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_35_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_35_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_34 { ap_memory {  { ShuffleConvs_2_Downs_34_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_34_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_34_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_33 { ap_memory {  { ShuffleConvs_2_Downs_33_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_33_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_33_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_32 { ap_memory {  { ShuffleConvs_2_Downs_32_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_32_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_32_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_31 { ap_memory {  { ShuffleConvs_2_Downs_31_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_31_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_31_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_30 { ap_memory {  { ShuffleConvs_2_Downs_30_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_30_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_30_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_29 { ap_memory {  { ShuffleConvs_2_Downs_29_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_29_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_29_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_27 { ap_memory {  { ShuffleConvs_2_Downs_27_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_27_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_27_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_26 { ap_memory {  { ShuffleConvs_2_Downs_26_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_26_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_26_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_25 { ap_memory {  { ShuffleConvs_2_Downs_25_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_25_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_25_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_24 { ap_memory {  { ShuffleConvs_2_Downs_24_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_24_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_24_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_23 { ap_memory {  { ShuffleConvs_2_Downs_23_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_23_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_23_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_22 { ap_memory {  { ShuffleConvs_2_Downs_22_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_22_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_22_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_21 { ap_memory {  { ShuffleConvs_2_Downs_21_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_21_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_21_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_20 { ap_memory {  { ShuffleConvs_2_Downs_20_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_20_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_20_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_19 { ap_memory {  { ShuffleConvs_2_Downs_19_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_19_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_19_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_18 { ap_memory {  { ShuffleConvs_2_Downs_18_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_18_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_18_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_16 { ap_memory {  { ShuffleConvs_2_Downs_16_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_16_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_16_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_15 { ap_memory {  { ShuffleConvs_2_Downs_15_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_15_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_15_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_14 { ap_memory {  { ShuffleConvs_2_Downs_14_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_14_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_14_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_13 { ap_memory {  { ShuffleConvs_2_Downs_13_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_13_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_13_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_12 { ap_memory {  { ShuffleConvs_2_Downs_12_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_12_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_12_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_11 { ap_memory {  { ShuffleConvs_2_Downs_11_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_11_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_11_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_10 { ap_memory {  { ShuffleConvs_2_Downs_10_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_10_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_10_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_9 { ap_memory {  { ShuffleConvs_2_Downs_9_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_9_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_9_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_8 { ap_memory {  { ShuffleConvs_2_Downs_8_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_8_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_8_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_7 { ap_memory {  { ShuffleConvs_2_Downs_7_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_7_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_7_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_5 { ap_memory {  { ShuffleConvs_2_Downs_5_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_5_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_5_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_4 { ap_memory {  { ShuffleConvs_2_Downs_4_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_4_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_4_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_3 { ap_memory {  { ShuffleConvs_2_Downs_3_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_3_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_3_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_2 { ap_memory {  { ShuffleConvs_2_Downs_2_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_2_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_2_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs_1 { ap_memory {  { ShuffleConvs_2_Downs_1_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_1_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_1_q0 mem_dout 0 8 } } }
	ShuffleConvs_2_Downs { ap_memory {  { ShuffleConvs_2_Downs_address0 mem_address 1 7 }  { ShuffleConvs_2_Downs_ce0 mem_ce 1 1 }  { ShuffleConvs_2_Downs_q0 mem_dout 0 8 } } }
}
