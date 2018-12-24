set moduleName conv1_p
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {conv1_p}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 8 regular {array 3468 { 1 3 } 1 1 }  }
	{ weight_V int 8 regular {axi_master 0}  }
	{ conv1_weight_V3 int 32 regular  }
	{ bias_V int 8 regular {array 24 { 1 3 } 1 1 }  }
	{ conv1_output_p_V_0 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_12 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_1 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_13 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_2 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_14 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_3 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_15 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_4 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_16 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_5 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_17 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_6 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_18 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_7 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_19 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_8 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_20 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_9 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_21 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_10 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_22 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_11 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
	{ conv1_output_p_V_23 int 8 regular {array 1156 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "conv1_weight_V3", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "conv1_output_p_V_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 0,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_12", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 12,"up" : 12,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 1,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_13", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 13,"up" : 13,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 2,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_14", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 14,"up" : 14,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 3,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_15", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 15,"up" : 15,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 4,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_16", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 16,"up" : 16,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 5,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_17", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 17,"up" : 17,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 6,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_18", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 18,"up" : 18,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 7,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_19", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 19,"up" : 19,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_8", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 8,"up" : 8,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_20", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 20,"up" : 20,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_9", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 9,"up" : 9,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_21", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 21,"up" : 21,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_10", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 10,"up" : 10,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_22", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 22,"up" : 22,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_11", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 11,"up" : 11,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv1_output_p_V_23", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv1_output_p.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 23,"up" : 23,"step" : 2},{"low" : 0,"up" : 33,"step" : 1},{"low" : 0,"up" : 33,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 178
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_V_address0 sc_out sc_lv 12 signal 0 } 
	{ input_V_ce0 sc_out sc_logic 1 signal 0 } 
	{ input_V_q0 sc_in sc_lv 8 signal 0 } 
	{ m_axi_weight_V_AWVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_weight_V_AWREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_weight_V_AWADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_weight_V_AWID sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_AWLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_weight_V_AWSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_weight_V_AWBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_weight_V_AWLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_weight_V_AWCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_weight_V_AWPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_weight_V_AWQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_weight_V_AWREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_weight_V_AWUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_WVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_weight_V_WREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_weight_V_WDATA sc_out sc_lv 8 signal 1 } 
	{ m_axi_weight_V_WSTRB sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_WLAST sc_out sc_logic 1 signal 1 } 
	{ m_axi_weight_V_WID sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_WUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_ARVALID sc_out sc_logic 1 signal 1 } 
	{ m_axi_weight_V_ARREADY sc_in sc_logic 1 signal 1 } 
	{ m_axi_weight_V_ARADDR sc_out sc_lv 32 signal 1 } 
	{ m_axi_weight_V_ARID sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_ARLEN sc_out sc_lv 32 signal 1 } 
	{ m_axi_weight_V_ARSIZE sc_out sc_lv 3 signal 1 } 
	{ m_axi_weight_V_ARBURST sc_out sc_lv 2 signal 1 } 
	{ m_axi_weight_V_ARLOCK sc_out sc_lv 2 signal 1 } 
	{ m_axi_weight_V_ARCACHE sc_out sc_lv 4 signal 1 } 
	{ m_axi_weight_V_ARPROT sc_out sc_lv 3 signal 1 } 
	{ m_axi_weight_V_ARQOS sc_out sc_lv 4 signal 1 } 
	{ m_axi_weight_V_ARREGION sc_out sc_lv 4 signal 1 } 
	{ m_axi_weight_V_ARUSER sc_out sc_lv 1 signal 1 } 
	{ m_axi_weight_V_RVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_weight_V_RREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_weight_V_RDATA sc_in sc_lv 8 signal 1 } 
	{ m_axi_weight_V_RLAST sc_in sc_logic 1 signal 1 } 
	{ m_axi_weight_V_RID sc_in sc_lv 1 signal 1 } 
	{ m_axi_weight_V_RUSER sc_in sc_lv 1 signal 1 } 
	{ m_axi_weight_V_RRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_weight_V_BVALID sc_in sc_logic 1 signal 1 } 
	{ m_axi_weight_V_BREADY sc_out sc_logic 1 signal 1 } 
	{ m_axi_weight_V_BRESP sc_in sc_lv 2 signal 1 } 
	{ m_axi_weight_V_BID sc_in sc_lv 1 signal 1 } 
	{ m_axi_weight_V_BUSER sc_in sc_lv 1 signal 1 } 
	{ conv1_weight_V3 sc_in sc_lv 32 signal 2 } 
	{ bias_V_address0 sc_out sc_lv 5 signal 3 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 3 } 
	{ conv1_output_p_V_0_address0 sc_out sc_lv 11 signal 4 } 
	{ conv1_output_p_V_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv1_output_p_V_0_we0 sc_out sc_logic 1 signal 4 } 
	{ conv1_output_p_V_0_d0 sc_out sc_lv 8 signal 4 } 
	{ conv1_output_p_V_0_q0 sc_in sc_lv 8 signal 4 } 
	{ conv1_output_p_V_12_address0 sc_out sc_lv 11 signal 5 } 
	{ conv1_output_p_V_12_ce0 sc_out sc_logic 1 signal 5 } 
	{ conv1_output_p_V_12_we0 sc_out sc_logic 1 signal 5 } 
	{ conv1_output_p_V_12_d0 sc_out sc_lv 8 signal 5 } 
	{ conv1_output_p_V_12_q0 sc_in sc_lv 8 signal 5 } 
	{ conv1_output_p_V_1_address0 sc_out sc_lv 11 signal 6 } 
	{ conv1_output_p_V_1_ce0 sc_out sc_logic 1 signal 6 } 
	{ conv1_output_p_V_1_we0 sc_out sc_logic 1 signal 6 } 
	{ conv1_output_p_V_1_d0 sc_out sc_lv 8 signal 6 } 
	{ conv1_output_p_V_1_q0 sc_in sc_lv 8 signal 6 } 
	{ conv1_output_p_V_13_address0 sc_out sc_lv 11 signal 7 } 
	{ conv1_output_p_V_13_ce0 sc_out sc_logic 1 signal 7 } 
	{ conv1_output_p_V_13_we0 sc_out sc_logic 1 signal 7 } 
	{ conv1_output_p_V_13_d0 sc_out sc_lv 8 signal 7 } 
	{ conv1_output_p_V_13_q0 sc_in sc_lv 8 signal 7 } 
	{ conv1_output_p_V_2_address0 sc_out sc_lv 11 signal 8 } 
	{ conv1_output_p_V_2_ce0 sc_out sc_logic 1 signal 8 } 
	{ conv1_output_p_V_2_we0 sc_out sc_logic 1 signal 8 } 
	{ conv1_output_p_V_2_d0 sc_out sc_lv 8 signal 8 } 
	{ conv1_output_p_V_2_q0 sc_in sc_lv 8 signal 8 } 
	{ conv1_output_p_V_14_address0 sc_out sc_lv 11 signal 9 } 
	{ conv1_output_p_V_14_ce0 sc_out sc_logic 1 signal 9 } 
	{ conv1_output_p_V_14_we0 sc_out sc_logic 1 signal 9 } 
	{ conv1_output_p_V_14_d0 sc_out sc_lv 8 signal 9 } 
	{ conv1_output_p_V_14_q0 sc_in sc_lv 8 signal 9 } 
	{ conv1_output_p_V_3_address0 sc_out sc_lv 11 signal 10 } 
	{ conv1_output_p_V_3_ce0 sc_out sc_logic 1 signal 10 } 
	{ conv1_output_p_V_3_we0 sc_out sc_logic 1 signal 10 } 
	{ conv1_output_p_V_3_d0 sc_out sc_lv 8 signal 10 } 
	{ conv1_output_p_V_3_q0 sc_in sc_lv 8 signal 10 } 
	{ conv1_output_p_V_15_address0 sc_out sc_lv 11 signal 11 } 
	{ conv1_output_p_V_15_ce0 sc_out sc_logic 1 signal 11 } 
	{ conv1_output_p_V_15_we0 sc_out sc_logic 1 signal 11 } 
	{ conv1_output_p_V_15_d0 sc_out sc_lv 8 signal 11 } 
	{ conv1_output_p_V_15_q0 sc_in sc_lv 8 signal 11 } 
	{ conv1_output_p_V_4_address0 sc_out sc_lv 11 signal 12 } 
	{ conv1_output_p_V_4_ce0 sc_out sc_logic 1 signal 12 } 
	{ conv1_output_p_V_4_we0 sc_out sc_logic 1 signal 12 } 
	{ conv1_output_p_V_4_d0 sc_out sc_lv 8 signal 12 } 
	{ conv1_output_p_V_4_q0 sc_in sc_lv 8 signal 12 } 
	{ conv1_output_p_V_16_address0 sc_out sc_lv 11 signal 13 } 
	{ conv1_output_p_V_16_ce0 sc_out sc_logic 1 signal 13 } 
	{ conv1_output_p_V_16_we0 sc_out sc_logic 1 signal 13 } 
	{ conv1_output_p_V_16_d0 sc_out sc_lv 8 signal 13 } 
	{ conv1_output_p_V_16_q0 sc_in sc_lv 8 signal 13 } 
	{ conv1_output_p_V_5_address0 sc_out sc_lv 11 signal 14 } 
	{ conv1_output_p_V_5_ce0 sc_out sc_logic 1 signal 14 } 
	{ conv1_output_p_V_5_we0 sc_out sc_logic 1 signal 14 } 
	{ conv1_output_p_V_5_d0 sc_out sc_lv 8 signal 14 } 
	{ conv1_output_p_V_5_q0 sc_in sc_lv 8 signal 14 } 
	{ conv1_output_p_V_17_address0 sc_out sc_lv 11 signal 15 } 
	{ conv1_output_p_V_17_ce0 sc_out sc_logic 1 signal 15 } 
	{ conv1_output_p_V_17_we0 sc_out sc_logic 1 signal 15 } 
	{ conv1_output_p_V_17_d0 sc_out sc_lv 8 signal 15 } 
	{ conv1_output_p_V_17_q0 sc_in sc_lv 8 signal 15 } 
	{ conv1_output_p_V_6_address0 sc_out sc_lv 11 signal 16 } 
	{ conv1_output_p_V_6_ce0 sc_out sc_logic 1 signal 16 } 
	{ conv1_output_p_V_6_we0 sc_out sc_logic 1 signal 16 } 
	{ conv1_output_p_V_6_d0 sc_out sc_lv 8 signal 16 } 
	{ conv1_output_p_V_6_q0 sc_in sc_lv 8 signal 16 } 
	{ conv1_output_p_V_18_address0 sc_out sc_lv 11 signal 17 } 
	{ conv1_output_p_V_18_ce0 sc_out sc_logic 1 signal 17 } 
	{ conv1_output_p_V_18_we0 sc_out sc_logic 1 signal 17 } 
	{ conv1_output_p_V_18_d0 sc_out sc_lv 8 signal 17 } 
	{ conv1_output_p_V_18_q0 sc_in sc_lv 8 signal 17 } 
	{ conv1_output_p_V_7_address0 sc_out sc_lv 11 signal 18 } 
	{ conv1_output_p_V_7_ce0 sc_out sc_logic 1 signal 18 } 
	{ conv1_output_p_V_7_we0 sc_out sc_logic 1 signal 18 } 
	{ conv1_output_p_V_7_d0 sc_out sc_lv 8 signal 18 } 
	{ conv1_output_p_V_7_q0 sc_in sc_lv 8 signal 18 } 
	{ conv1_output_p_V_19_address0 sc_out sc_lv 11 signal 19 } 
	{ conv1_output_p_V_19_ce0 sc_out sc_logic 1 signal 19 } 
	{ conv1_output_p_V_19_we0 sc_out sc_logic 1 signal 19 } 
	{ conv1_output_p_V_19_d0 sc_out sc_lv 8 signal 19 } 
	{ conv1_output_p_V_19_q0 sc_in sc_lv 8 signal 19 } 
	{ conv1_output_p_V_8_address0 sc_out sc_lv 11 signal 20 } 
	{ conv1_output_p_V_8_ce0 sc_out sc_logic 1 signal 20 } 
	{ conv1_output_p_V_8_we0 sc_out sc_logic 1 signal 20 } 
	{ conv1_output_p_V_8_d0 sc_out sc_lv 8 signal 20 } 
	{ conv1_output_p_V_8_q0 sc_in sc_lv 8 signal 20 } 
	{ conv1_output_p_V_20_address0 sc_out sc_lv 11 signal 21 } 
	{ conv1_output_p_V_20_ce0 sc_out sc_logic 1 signal 21 } 
	{ conv1_output_p_V_20_we0 sc_out sc_logic 1 signal 21 } 
	{ conv1_output_p_V_20_d0 sc_out sc_lv 8 signal 21 } 
	{ conv1_output_p_V_20_q0 sc_in sc_lv 8 signal 21 } 
	{ conv1_output_p_V_9_address0 sc_out sc_lv 11 signal 22 } 
	{ conv1_output_p_V_9_ce0 sc_out sc_logic 1 signal 22 } 
	{ conv1_output_p_V_9_we0 sc_out sc_logic 1 signal 22 } 
	{ conv1_output_p_V_9_d0 sc_out sc_lv 8 signal 22 } 
	{ conv1_output_p_V_9_q0 sc_in sc_lv 8 signal 22 } 
	{ conv1_output_p_V_21_address0 sc_out sc_lv 11 signal 23 } 
	{ conv1_output_p_V_21_ce0 sc_out sc_logic 1 signal 23 } 
	{ conv1_output_p_V_21_we0 sc_out sc_logic 1 signal 23 } 
	{ conv1_output_p_V_21_d0 sc_out sc_lv 8 signal 23 } 
	{ conv1_output_p_V_21_q0 sc_in sc_lv 8 signal 23 } 
	{ conv1_output_p_V_10_address0 sc_out sc_lv 11 signal 24 } 
	{ conv1_output_p_V_10_ce0 sc_out sc_logic 1 signal 24 } 
	{ conv1_output_p_V_10_we0 sc_out sc_logic 1 signal 24 } 
	{ conv1_output_p_V_10_d0 sc_out sc_lv 8 signal 24 } 
	{ conv1_output_p_V_10_q0 sc_in sc_lv 8 signal 24 } 
	{ conv1_output_p_V_22_address0 sc_out sc_lv 11 signal 25 } 
	{ conv1_output_p_V_22_ce0 sc_out sc_logic 1 signal 25 } 
	{ conv1_output_p_V_22_we0 sc_out sc_logic 1 signal 25 } 
	{ conv1_output_p_V_22_d0 sc_out sc_lv 8 signal 25 } 
	{ conv1_output_p_V_22_q0 sc_in sc_lv 8 signal 25 } 
	{ conv1_output_p_V_11_address0 sc_out sc_lv 11 signal 26 } 
	{ conv1_output_p_V_11_ce0 sc_out sc_logic 1 signal 26 } 
	{ conv1_output_p_V_11_we0 sc_out sc_logic 1 signal 26 } 
	{ conv1_output_p_V_11_d0 sc_out sc_lv 8 signal 26 } 
	{ conv1_output_p_V_11_q0 sc_in sc_lv 8 signal 26 } 
	{ conv1_output_p_V_23_address0 sc_out sc_lv 11 signal 27 } 
	{ conv1_output_p_V_23_ce0 sc_out sc_logic 1 signal 27 } 
	{ conv1_output_p_V_23_we0 sc_out sc_logic 1 signal 27 } 
	{ conv1_output_p_V_23_d0 sc_out sc_lv 8 signal 27 } 
	{ conv1_output_p_V_23_q0 sc_in sc_lv 8 signal 27 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":12, "type": "signal", "bundle":{"name": "input_V", "role": "address0" }} , 
 	{ "name": "input_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_V", "role": "ce0" }} , 
 	{ "name": "input_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "input_V", "role": "q0" }} , 
 	{ "name": "m_axi_weight_V_AWVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWVALID" }} , 
 	{ "name": "m_axi_weight_V_AWREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWREADY" }} , 
 	{ "name": "m_axi_weight_V_AWADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "AWADDR" }} , 
 	{ "name": "m_axi_weight_V_AWID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWID" }} , 
 	{ "name": "m_axi_weight_V_AWLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "AWLEN" }} , 
 	{ "name": "m_axi_weight_V_AWSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "AWSIZE" }} , 
 	{ "name": "m_axi_weight_V_AWBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "AWBURST" }} , 
 	{ "name": "m_axi_weight_V_AWLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "AWLOCK" }} , 
 	{ "name": "m_axi_weight_V_AWCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "AWCACHE" }} , 
 	{ "name": "m_axi_weight_V_AWPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "AWPROT" }} , 
 	{ "name": "m_axi_weight_V_AWQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "AWQOS" }} , 
 	{ "name": "m_axi_weight_V_AWREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "AWREGION" }} , 
 	{ "name": "m_axi_weight_V_AWUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "AWUSER" }} , 
 	{ "name": "m_axi_weight_V_WVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WVALID" }} , 
 	{ "name": "m_axi_weight_V_WREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WREADY" }} , 
 	{ "name": "m_axi_weight_V_WDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_V", "role": "WDATA" }} , 
 	{ "name": "m_axi_weight_V_WSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WSTRB" }} , 
 	{ "name": "m_axi_weight_V_WLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WLAST" }} , 
 	{ "name": "m_axi_weight_V_WID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WID" }} , 
 	{ "name": "m_axi_weight_V_WUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "WUSER" }} , 
 	{ "name": "m_axi_weight_V_ARVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARVALID" }} , 
 	{ "name": "m_axi_weight_V_ARREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARREADY" }} , 
 	{ "name": "m_axi_weight_V_ARADDR", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "ARADDR" }} , 
 	{ "name": "m_axi_weight_V_ARID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARID" }} , 
 	{ "name": "m_axi_weight_V_ARLEN", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weight_V", "role": "ARLEN" }} , 
 	{ "name": "m_axi_weight_V_ARSIZE", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "ARSIZE" }} , 
 	{ "name": "m_axi_weight_V_ARBURST", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "ARBURST" }} , 
 	{ "name": "m_axi_weight_V_ARLOCK", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "ARLOCK" }} , 
 	{ "name": "m_axi_weight_V_ARCACHE", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "ARCACHE" }} , 
 	{ "name": "m_axi_weight_V_ARPROT", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "weight_V", "role": "ARPROT" }} , 
 	{ "name": "m_axi_weight_V_ARQOS", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "ARQOS" }} , 
 	{ "name": "m_axi_weight_V_ARREGION", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "weight_V", "role": "ARREGION" }} , 
 	{ "name": "m_axi_weight_V_ARUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "ARUSER" }} , 
 	{ "name": "m_axi_weight_V_RVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RVALID" }} , 
 	{ "name": "m_axi_weight_V_RREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RREADY" }} , 
 	{ "name": "m_axi_weight_V_RDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "weight_V", "role": "RDATA" }} , 
 	{ "name": "m_axi_weight_V_RLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RLAST" }} , 
 	{ "name": "m_axi_weight_V_RID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RID" }} , 
 	{ "name": "m_axi_weight_V_RUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "RUSER" }} , 
 	{ "name": "m_axi_weight_V_RRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "RRESP" }} , 
 	{ "name": "m_axi_weight_V_BVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BVALID" }} , 
 	{ "name": "m_axi_weight_V_BREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BREADY" }} , 
 	{ "name": "m_axi_weight_V_BRESP", "direction": "in", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "weight_V", "role": "BRESP" }} , 
 	{ "name": "m_axi_weight_V_BID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BID" }} , 
 	{ "name": "m_axi_weight_V_BUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "weight_V", "role": "BUSER" }} , 
 	{ "name": "conv1_weight_V3", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv1_weight_V3", "role": "default" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":5, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_0", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_12_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_12", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_12_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_12", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_12_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_12", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_12_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_12", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_12_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_12", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_1", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_13_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_13", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_13_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_13", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_13_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_13", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_13_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_13", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_13_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_13", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_2", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_14_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_14", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_14_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_14", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_14_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_14", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_14_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_14", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_14_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_14", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_3", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_15_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_15", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_15_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_15", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_15_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_15", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_15_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_15", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_15_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_15", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_4", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_16_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_16", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_16_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_16", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_16_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_16", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_16_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_16", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_16_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_16", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_5", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_17_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_17", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_17_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_17", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_17_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_17", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_17_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_17", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_17_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_17", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_6", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_18_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_18", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_18_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_18", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_18_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_18", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_18_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_18", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_18_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_18", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_7", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_19_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_19", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_19_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_19", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_19_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_19", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_19_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_19", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_19_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_19", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_8_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_8", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_8_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_8", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_8_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_8", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_8_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_8", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_8_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_8", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_20_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_20", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_20_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_20", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_20_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_20", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_20_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_20", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_20_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_20", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_9_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_9", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_9_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_9", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_9_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_9", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_9_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_9", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_9_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_9", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_21_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_21", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_21_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_21", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_21_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_21", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_21_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_21", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_21_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_21", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_10_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_10", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_10_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_10", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_10_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_10", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_10_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_10", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_10_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_10", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_22_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_22", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_22_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_22", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_22_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_22", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_22_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_22", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_22_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_22", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_11_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_11", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_11_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_11", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_11_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_11", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_11_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_11", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_11_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_11", "role": "q0" }} , 
 	{ "name": "conv1_output_p_V_23_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":11, "type": "signal", "bundle":{"name": "conv1_output_p_V_23", "role": "address0" }} , 
 	{ "name": "conv1_output_p_V_23_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_23", "role": "ce0" }} , 
 	{ "name": "conv1_output_p_V_23_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv1_output_p_V_23", "role": "we0" }} , 
 	{ "name": "conv1_output_p_V_23_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_23", "role": "d0" }} , 
 	{ "name": "conv1_output_p_V_23_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv1_output_p_V_23", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "27", "29", "31", "33", "35", "37", "39", "41", "43", "45", "47", "49"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_0_V_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_1_V_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_2_V_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_3_V_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_4_V_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_5_V_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_6_V_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_7_V_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_8_V_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_9_V_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_10_V_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_11_V_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_12_V_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_13_V_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_14_V_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_15_V_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_16_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_17_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_18_V_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_19_V_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_20_V_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_21_V_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_22_V_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_23_V_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1761", "Parent" : "0", "Child" : ["26"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1761.ShuffleNetV2_mul_bkb_U0", "Parent" : "25"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1771", "Parent" : "0", "Child" : ["28"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1771.ShuffleNetV2_mul_bkb_U0", "Parent" : "27"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1781", "Parent" : "0", "Child" : ["30"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1781.ShuffleNetV2_mul_bkb_U0", "Parent" : "29"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1791", "Parent" : "0", "Child" : ["32"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1791.ShuffleNetV2_mul_bkb_U0", "Parent" : "31"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1801", "Parent" : "0", "Child" : ["34"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1801.ShuffleNetV2_mul_bkb_U0", "Parent" : "33"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1811", "Parent" : "0", "Child" : ["36"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1811.ShuffleNetV2_mul_bkb_U0", "Parent" : "35"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1821", "Parent" : "0", "Child" : ["38"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1821.ShuffleNetV2_mul_bkb_U0", "Parent" : "37"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1831", "Parent" : "0", "Child" : ["40"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1831.ShuffleNetV2_mul_bkb_U0", "Parent" : "39"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1841", "Parent" : "0", "Child" : ["42"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1841.ShuffleNetV2_mul_bkb_U0", "Parent" : "41"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1851", "Parent" : "0", "Child" : ["44"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1851.ShuffleNetV2_mul_bkb_U0", "Parent" : "43"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1861", "Parent" : "0", "Child" : ["46"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1861.ShuffleNetV2_mul_bkb_U0", "Parent" : "45"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1871", "Parent" : "0", "Child" : ["48"],
		"CDFG" : "MUL_DP",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "Aligned", "AlignedPipeline" : "1", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "1",
		"ClockEnable" : "1",
		"VariableLatency" : "0",
		"Port" : [
			{"Name" : "a_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "b_V", "Type" : "None", "Direction" : "I"},
			{"Name" : "w_V", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_MUL_DP_fu_1871.ShuffleNetV2_mul_bkb_U0", "Parent" : "47"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_Aem_U4", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		w_V {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "349916", "Max" : "349916"}
	, {"Name" : "Interval", "Min" : "349916", "Max" : "349916"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 12 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 8 } } }
	weight_V { m_axi {  { m_axi_weight_V_AWVALID VALID 1 1 }  { m_axi_weight_V_AWREADY READY 0 1 }  { m_axi_weight_V_AWADDR ADDR 1 32 }  { m_axi_weight_V_AWID ID 1 1 }  { m_axi_weight_V_AWLEN LEN 1 32 }  { m_axi_weight_V_AWSIZE SIZE 1 3 }  { m_axi_weight_V_AWBURST BURST 1 2 }  { m_axi_weight_V_AWLOCK LOCK 1 2 }  { m_axi_weight_V_AWCACHE CACHE 1 4 }  { m_axi_weight_V_AWPROT PROT 1 3 }  { m_axi_weight_V_AWQOS QOS 1 4 }  { m_axi_weight_V_AWREGION REGION 1 4 }  { m_axi_weight_V_AWUSER USER 1 1 }  { m_axi_weight_V_WVALID VALID 1 1 }  { m_axi_weight_V_WREADY READY 0 1 }  { m_axi_weight_V_WDATA DATA 1 8 }  { m_axi_weight_V_WSTRB STRB 1 1 }  { m_axi_weight_V_WLAST LAST 1 1 }  { m_axi_weight_V_WID ID 1 1 }  { m_axi_weight_V_WUSER USER 1 1 }  { m_axi_weight_V_ARVALID VALID 1 1 }  { m_axi_weight_V_ARREADY READY 0 1 }  { m_axi_weight_V_ARADDR ADDR 1 32 }  { m_axi_weight_V_ARID ID 1 1 }  { m_axi_weight_V_ARLEN LEN 1 32 }  { m_axi_weight_V_ARSIZE SIZE 1 3 }  { m_axi_weight_V_ARBURST BURST 1 2 }  { m_axi_weight_V_ARLOCK LOCK 1 2 }  { m_axi_weight_V_ARCACHE CACHE 1 4 }  { m_axi_weight_V_ARPROT PROT 1 3 }  { m_axi_weight_V_ARQOS QOS 1 4 }  { m_axi_weight_V_ARREGION REGION 1 4 }  { m_axi_weight_V_ARUSER USER 1 1 }  { m_axi_weight_V_RVALID VALID 0 1 }  { m_axi_weight_V_RREADY READY 1 1 }  { m_axi_weight_V_RDATA DATA 0 8 }  { m_axi_weight_V_RLAST LAST 0 1 }  { m_axi_weight_V_RID ID 0 1 }  { m_axi_weight_V_RUSER USER 0 1 }  { m_axi_weight_V_RRESP RESP 0 2 }  { m_axi_weight_V_BVALID VALID 0 1 }  { m_axi_weight_V_BREADY READY 1 1 }  { m_axi_weight_V_BRESP RESP 0 2 }  { m_axi_weight_V_BID ID 0 1 }  { m_axi_weight_V_BUSER USER 0 1 } } }
	conv1_weight_V3 { ap_none {  { conv1_weight_V3 in_data 0 32 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 5 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	conv1_output_p_V_0 { ap_memory {  { conv1_output_p_V_0_address0 mem_address 1 11 }  { conv1_output_p_V_0_ce0 mem_ce 1 1 }  { conv1_output_p_V_0_we0 mem_we 1 1 }  { conv1_output_p_V_0_d0 mem_din 1 8 }  { conv1_output_p_V_0_q0 mem_dout 0 8 } } }
	conv1_output_p_V_12 { ap_memory {  { conv1_output_p_V_12_address0 mem_address 1 11 }  { conv1_output_p_V_12_ce0 mem_ce 1 1 }  { conv1_output_p_V_12_we0 mem_we 1 1 }  { conv1_output_p_V_12_d0 mem_din 1 8 }  { conv1_output_p_V_12_q0 mem_dout 0 8 } } }
	conv1_output_p_V_1 { ap_memory {  { conv1_output_p_V_1_address0 mem_address 1 11 }  { conv1_output_p_V_1_ce0 mem_ce 1 1 }  { conv1_output_p_V_1_we0 mem_we 1 1 }  { conv1_output_p_V_1_d0 mem_din 1 8 }  { conv1_output_p_V_1_q0 mem_dout 0 8 } } }
	conv1_output_p_V_13 { ap_memory {  { conv1_output_p_V_13_address0 mem_address 1 11 }  { conv1_output_p_V_13_ce0 mem_ce 1 1 }  { conv1_output_p_V_13_we0 mem_we 1 1 }  { conv1_output_p_V_13_d0 mem_din 1 8 }  { conv1_output_p_V_13_q0 mem_dout 0 8 } } }
	conv1_output_p_V_2 { ap_memory {  { conv1_output_p_V_2_address0 mem_address 1 11 }  { conv1_output_p_V_2_ce0 mem_ce 1 1 }  { conv1_output_p_V_2_we0 mem_we 1 1 }  { conv1_output_p_V_2_d0 mem_din 1 8 }  { conv1_output_p_V_2_q0 mem_dout 0 8 } } }
	conv1_output_p_V_14 { ap_memory {  { conv1_output_p_V_14_address0 mem_address 1 11 }  { conv1_output_p_V_14_ce0 mem_ce 1 1 }  { conv1_output_p_V_14_we0 mem_we 1 1 }  { conv1_output_p_V_14_d0 mem_din 1 8 }  { conv1_output_p_V_14_q0 mem_dout 0 8 } } }
	conv1_output_p_V_3 { ap_memory {  { conv1_output_p_V_3_address0 mem_address 1 11 }  { conv1_output_p_V_3_ce0 mem_ce 1 1 }  { conv1_output_p_V_3_we0 mem_we 1 1 }  { conv1_output_p_V_3_d0 mem_din 1 8 }  { conv1_output_p_V_3_q0 mem_dout 0 8 } } }
	conv1_output_p_V_15 { ap_memory {  { conv1_output_p_V_15_address0 mem_address 1 11 }  { conv1_output_p_V_15_ce0 mem_ce 1 1 }  { conv1_output_p_V_15_we0 mem_we 1 1 }  { conv1_output_p_V_15_d0 mem_din 1 8 }  { conv1_output_p_V_15_q0 mem_dout 0 8 } } }
	conv1_output_p_V_4 { ap_memory {  { conv1_output_p_V_4_address0 mem_address 1 11 }  { conv1_output_p_V_4_ce0 mem_ce 1 1 }  { conv1_output_p_V_4_we0 mem_we 1 1 }  { conv1_output_p_V_4_d0 mem_din 1 8 }  { conv1_output_p_V_4_q0 mem_dout 0 8 } } }
	conv1_output_p_V_16 { ap_memory {  { conv1_output_p_V_16_address0 mem_address 1 11 }  { conv1_output_p_V_16_ce0 mem_ce 1 1 }  { conv1_output_p_V_16_we0 mem_we 1 1 }  { conv1_output_p_V_16_d0 mem_din 1 8 }  { conv1_output_p_V_16_q0 mem_dout 0 8 } } }
	conv1_output_p_V_5 { ap_memory {  { conv1_output_p_V_5_address0 mem_address 1 11 }  { conv1_output_p_V_5_ce0 mem_ce 1 1 }  { conv1_output_p_V_5_we0 mem_we 1 1 }  { conv1_output_p_V_5_d0 mem_din 1 8 }  { conv1_output_p_V_5_q0 mem_dout 0 8 } } }
	conv1_output_p_V_17 { ap_memory {  { conv1_output_p_V_17_address0 mem_address 1 11 }  { conv1_output_p_V_17_ce0 mem_ce 1 1 }  { conv1_output_p_V_17_we0 mem_we 1 1 }  { conv1_output_p_V_17_d0 mem_din 1 8 }  { conv1_output_p_V_17_q0 mem_dout 0 8 } } }
	conv1_output_p_V_6 { ap_memory {  { conv1_output_p_V_6_address0 mem_address 1 11 }  { conv1_output_p_V_6_ce0 mem_ce 1 1 }  { conv1_output_p_V_6_we0 mem_we 1 1 }  { conv1_output_p_V_6_d0 mem_din 1 8 }  { conv1_output_p_V_6_q0 mem_dout 0 8 } } }
	conv1_output_p_V_18 { ap_memory {  { conv1_output_p_V_18_address0 mem_address 1 11 }  { conv1_output_p_V_18_ce0 mem_ce 1 1 }  { conv1_output_p_V_18_we0 mem_we 1 1 }  { conv1_output_p_V_18_d0 mem_din 1 8 }  { conv1_output_p_V_18_q0 mem_dout 0 8 } } }
	conv1_output_p_V_7 { ap_memory {  { conv1_output_p_V_7_address0 mem_address 1 11 }  { conv1_output_p_V_7_ce0 mem_ce 1 1 }  { conv1_output_p_V_7_we0 mem_we 1 1 }  { conv1_output_p_V_7_d0 mem_din 1 8 }  { conv1_output_p_V_7_q0 mem_dout 0 8 } } }
	conv1_output_p_V_19 { ap_memory {  { conv1_output_p_V_19_address0 mem_address 1 11 }  { conv1_output_p_V_19_ce0 mem_ce 1 1 }  { conv1_output_p_V_19_we0 mem_we 1 1 }  { conv1_output_p_V_19_d0 mem_din 1 8 }  { conv1_output_p_V_19_q0 mem_dout 0 8 } } }
	conv1_output_p_V_8 { ap_memory {  { conv1_output_p_V_8_address0 mem_address 1 11 }  { conv1_output_p_V_8_ce0 mem_ce 1 1 }  { conv1_output_p_V_8_we0 mem_we 1 1 }  { conv1_output_p_V_8_d0 mem_din 1 8 }  { conv1_output_p_V_8_q0 mem_dout 0 8 } } }
	conv1_output_p_V_20 { ap_memory {  { conv1_output_p_V_20_address0 mem_address 1 11 }  { conv1_output_p_V_20_ce0 mem_ce 1 1 }  { conv1_output_p_V_20_we0 mem_we 1 1 }  { conv1_output_p_V_20_d0 mem_din 1 8 }  { conv1_output_p_V_20_q0 mem_dout 0 8 } } }
	conv1_output_p_V_9 { ap_memory {  { conv1_output_p_V_9_address0 mem_address 1 11 }  { conv1_output_p_V_9_ce0 mem_ce 1 1 }  { conv1_output_p_V_9_we0 mem_we 1 1 }  { conv1_output_p_V_9_d0 mem_din 1 8 }  { conv1_output_p_V_9_q0 mem_dout 0 8 } } }
	conv1_output_p_V_21 { ap_memory {  { conv1_output_p_V_21_address0 mem_address 1 11 }  { conv1_output_p_V_21_ce0 mem_ce 1 1 }  { conv1_output_p_V_21_we0 mem_we 1 1 }  { conv1_output_p_V_21_d0 mem_din 1 8 }  { conv1_output_p_V_21_q0 mem_dout 0 8 } } }
	conv1_output_p_V_10 { ap_memory {  { conv1_output_p_V_10_address0 mem_address 1 11 }  { conv1_output_p_V_10_ce0 mem_ce 1 1 }  { conv1_output_p_V_10_we0 mem_we 1 1 }  { conv1_output_p_V_10_d0 mem_din 1 8 }  { conv1_output_p_V_10_q0 mem_dout 0 8 } } }
	conv1_output_p_V_22 { ap_memory {  { conv1_output_p_V_22_address0 mem_address 1 11 }  { conv1_output_p_V_22_ce0 mem_ce 1 1 }  { conv1_output_p_V_22_we0 mem_we 1 1 }  { conv1_output_p_V_22_d0 mem_din 1 8 }  { conv1_output_p_V_22_q0 mem_dout 0 8 } } }
	conv1_output_p_V_11 { ap_memory {  { conv1_output_p_V_11_address0 mem_address 1 11 }  { conv1_output_p_V_11_ce0 mem_ce 1 1 }  { conv1_output_p_V_11_we0 mem_we 1 1 }  { conv1_output_p_V_11_d0 mem_din 1 8 }  { conv1_output_p_V_11_q0 mem_dout 0 8 } } }
	conv1_output_p_V_23 { ap_memory {  { conv1_output_p_V_23_address0 mem_address 1 11 }  { conv1_output_p_V_23_ce0 mem_ce 1 1 }  { conv1_output_p_V_23_we0 mem_we 1 1 }  { conv1_output_p_V_23_d0 mem_din 1 8 }  { conv1_output_p_V_23_q0 mem_dout 0 8 } } }
}
