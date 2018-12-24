set moduleName conv_last
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {conv_last}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_V int 8 regular {array 3072 { 1 3 } 1 1 }  }
	{ weight_V int 8 regular {axi_master 0}  }
	{ conv_last_weight_V9 int 32 regular  }
	{ bias_V int 8 regular {array 512 { 1 3 } 1 1 }  }
	{ conv_last_output_V_0 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_1 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_2 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_3 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_4 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_5 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_6 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
	{ conv_last_output_V_7 int 8 regular {array 1024 { 2 3 } 1 1 } {global 2}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "weight_V", "interface" : "axi_master", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "conv_last_weight_V9", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "bias_V", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "conv_last_output_V_0", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 0,"up" : 504,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_1", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 1,"up" : 505,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_2", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 2,"up" : 506,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_3", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 3,"up" : 507,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_4", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 4,"up" : 508,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_5", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 5,"up" : 509,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_6", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 6,"up" : 510,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} , 
 	{ "Name" : "conv_last_output_V_7", "interface" : "memory", "bitwidth" : 8, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "conv_last_output.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1},{"low" : 7,"up" : 511,"step" : 8},{"low" : 0,"up" : 3,"step" : 1},{"low" : 0,"up" : 3,"step" : 1}]}]}], "extern" : 0} ]}
# RTL Port declarations: 
set portNum 98
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
	{ conv_last_weight_V9 sc_in sc_lv 32 signal 2 } 
	{ bias_V_address0 sc_out sc_lv 9 signal 3 } 
	{ bias_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ bias_V_q0 sc_in sc_lv 8 signal 3 } 
	{ conv_last_output_V_0_address0 sc_out sc_lv 10 signal 4 } 
	{ conv_last_output_V_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ conv_last_output_V_0_we0 sc_out sc_logic 1 signal 4 } 
	{ conv_last_output_V_0_d0 sc_out sc_lv 8 signal 4 } 
	{ conv_last_output_V_0_q0 sc_in sc_lv 8 signal 4 } 
	{ conv_last_output_V_1_address0 sc_out sc_lv 10 signal 5 } 
	{ conv_last_output_V_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ conv_last_output_V_1_we0 sc_out sc_logic 1 signal 5 } 
	{ conv_last_output_V_1_d0 sc_out sc_lv 8 signal 5 } 
	{ conv_last_output_V_1_q0 sc_in sc_lv 8 signal 5 } 
	{ conv_last_output_V_2_address0 sc_out sc_lv 10 signal 6 } 
	{ conv_last_output_V_2_ce0 sc_out sc_logic 1 signal 6 } 
	{ conv_last_output_V_2_we0 sc_out sc_logic 1 signal 6 } 
	{ conv_last_output_V_2_d0 sc_out sc_lv 8 signal 6 } 
	{ conv_last_output_V_2_q0 sc_in sc_lv 8 signal 6 } 
	{ conv_last_output_V_3_address0 sc_out sc_lv 10 signal 7 } 
	{ conv_last_output_V_3_ce0 sc_out sc_logic 1 signal 7 } 
	{ conv_last_output_V_3_we0 sc_out sc_logic 1 signal 7 } 
	{ conv_last_output_V_3_d0 sc_out sc_lv 8 signal 7 } 
	{ conv_last_output_V_3_q0 sc_in sc_lv 8 signal 7 } 
	{ conv_last_output_V_4_address0 sc_out sc_lv 10 signal 8 } 
	{ conv_last_output_V_4_ce0 sc_out sc_logic 1 signal 8 } 
	{ conv_last_output_V_4_we0 sc_out sc_logic 1 signal 8 } 
	{ conv_last_output_V_4_d0 sc_out sc_lv 8 signal 8 } 
	{ conv_last_output_V_4_q0 sc_in sc_lv 8 signal 8 } 
	{ conv_last_output_V_5_address0 sc_out sc_lv 10 signal 9 } 
	{ conv_last_output_V_5_ce0 sc_out sc_logic 1 signal 9 } 
	{ conv_last_output_V_5_we0 sc_out sc_logic 1 signal 9 } 
	{ conv_last_output_V_5_d0 sc_out sc_lv 8 signal 9 } 
	{ conv_last_output_V_5_q0 sc_in sc_lv 8 signal 9 } 
	{ conv_last_output_V_6_address0 sc_out sc_lv 10 signal 10 } 
	{ conv_last_output_V_6_ce0 sc_out sc_logic 1 signal 10 } 
	{ conv_last_output_V_6_we0 sc_out sc_logic 1 signal 10 } 
	{ conv_last_output_V_6_d0 sc_out sc_lv 8 signal 10 } 
	{ conv_last_output_V_6_q0 sc_in sc_lv 8 signal 10 } 
	{ conv_last_output_V_7_address0 sc_out sc_lv 10 signal 11 } 
	{ conv_last_output_V_7_ce0 sc_out sc_logic 1 signal 11 } 
	{ conv_last_output_V_7_we0 sc_out sc_logic 1 signal 11 } 
	{ conv_last_output_V_7_d0 sc_out sc_lv 8 signal 11 } 
	{ conv_last_output_V_7_q0 sc_in sc_lv 8 signal 11 } 
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
 	{ "name": "conv_last_weight_V9", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "conv_last_weight_V9", "role": "default" }} , 
 	{ "name": "bias_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":9, "type": "signal", "bundle":{"name": "bias_V", "role": "address0" }} , 
 	{ "name": "bias_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_V", "role": "ce0" }} , 
 	{ "name": "bias_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "bias_V", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_0", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_0", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_0", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_0", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_0", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_1", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_1", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_1", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_1", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_1", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_2", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_2", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_2_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_2", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_2_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_2", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_2", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_3", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_3", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_3_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_3", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_3_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_3", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_3", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_4_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_4", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_4_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_4", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_4_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_4", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_4_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_4", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_4_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_4", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_5_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_5", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_5_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_5", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_5_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_5", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_5_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_5", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_5_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_5", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_6_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_6", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_6_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_6", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_6_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_6", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_6_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_6", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_6_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_6", "role": "q0" }} , 
 	{ "name": "conv_last_output_V_7_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "conv_last_output_V_7", "role": "address0" }} , 
 	{ "name": "conv_last_output_V_7_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_7", "role": "ce0" }} , 
 	{ "name": "conv_last_output_V_7_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "conv_last_output_V_7", "role": "we0" }} , 
 	{ "name": "conv_last_output_V_7_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_7", "role": "d0" }} , 
 	{ "name": "conv_last_output_V_7_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "conv_last_output_V_7", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_0_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_1_0_0_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_2_0_0_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_3_0_0_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_4_0_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_5_0_0_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_6_0_0_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.weight_temp_7_0_0_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_jbC_x_U311", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.ShuffleNetV2_mux_jbC_x_U312", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		conv_last_output_V_7 {Type IO LastRead 8 FirstWrite 8}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "1338424", "Max" : "1338424"}
	, {"Name" : "Interval", "Min" : "1338424", "Max" : "1338424"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	input_V { ap_memory {  { input_V_address0 mem_address 1 12 }  { input_V_ce0 mem_ce 1 1 }  { input_V_q0 mem_dout 0 8 } } }
	weight_V { m_axi {  { m_axi_weight_V_AWVALID VALID 1 1 }  { m_axi_weight_V_AWREADY READY 0 1 }  { m_axi_weight_V_AWADDR ADDR 1 32 }  { m_axi_weight_V_AWID ID 1 1 }  { m_axi_weight_V_AWLEN LEN 1 32 }  { m_axi_weight_V_AWSIZE SIZE 1 3 }  { m_axi_weight_V_AWBURST BURST 1 2 }  { m_axi_weight_V_AWLOCK LOCK 1 2 }  { m_axi_weight_V_AWCACHE CACHE 1 4 }  { m_axi_weight_V_AWPROT PROT 1 3 }  { m_axi_weight_V_AWQOS QOS 1 4 }  { m_axi_weight_V_AWREGION REGION 1 4 }  { m_axi_weight_V_AWUSER USER 1 1 }  { m_axi_weight_V_WVALID VALID 1 1 }  { m_axi_weight_V_WREADY READY 0 1 }  { m_axi_weight_V_WDATA DATA 1 8 }  { m_axi_weight_V_WSTRB STRB 1 1 }  { m_axi_weight_V_WLAST LAST 1 1 }  { m_axi_weight_V_WID ID 1 1 }  { m_axi_weight_V_WUSER USER 1 1 }  { m_axi_weight_V_ARVALID VALID 1 1 }  { m_axi_weight_V_ARREADY READY 0 1 }  { m_axi_weight_V_ARADDR ADDR 1 32 }  { m_axi_weight_V_ARID ID 1 1 }  { m_axi_weight_V_ARLEN LEN 1 32 }  { m_axi_weight_V_ARSIZE SIZE 1 3 }  { m_axi_weight_V_ARBURST BURST 1 2 }  { m_axi_weight_V_ARLOCK LOCK 1 2 }  { m_axi_weight_V_ARCACHE CACHE 1 4 }  { m_axi_weight_V_ARPROT PROT 1 3 }  { m_axi_weight_V_ARQOS QOS 1 4 }  { m_axi_weight_V_ARREGION REGION 1 4 }  { m_axi_weight_V_ARUSER USER 1 1 }  { m_axi_weight_V_RVALID VALID 0 1 }  { m_axi_weight_V_RREADY READY 1 1 }  { m_axi_weight_V_RDATA DATA 0 8 }  { m_axi_weight_V_RLAST LAST 0 1 }  { m_axi_weight_V_RID ID 0 1 }  { m_axi_weight_V_RUSER USER 0 1 }  { m_axi_weight_V_RRESP RESP 0 2 }  { m_axi_weight_V_BVALID VALID 0 1 }  { m_axi_weight_V_BREADY READY 1 1 }  { m_axi_weight_V_BRESP RESP 0 2 }  { m_axi_weight_V_BID ID 0 1 }  { m_axi_weight_V_BUSER USER 0 1 } } }
	conv_last_weight_V9 { ap_none {  { conv_last_weight_V9 in_data 0 32 } } }
	bias_V { ap_memory {  { bias_V_address0 mem_address 1 9 }  { bias_V_ce0 mem_ce 1 1 }  { bias_V_q0 mem_dout 0 8 } } }
	conv_last_output_V_0 { ap_memory {  { conv_last_output_V_0_address0 mem_address 1 10 }  { conv_last_output_V_0_ce0 mem_ce 1 1 }  { conv_last_output_V_0_we0 mem_we 1 1 }  { conv_last_output_V_0_d0 mem_din 1 8 }  { conv_last_output_V_0_q0 mem_dout 0 8 } } }
	conv_last_output_V_1 { ap_memory {  { conv_last_output_V_1_address0 mem_address 1 10 }  { conv_last_output_V_1_ce0 mem_ce 1 1 }  { conv_last_output_V_1_we0 mem_we 1 1 }  { conv_last_output_V_1_d0 mem_din 1 8 }  { conv_last_output_V_1_q0 mem_dout 0 8 } } }
	conv_last_output_V_2 { ap_memory {  { conv_last_output_V_2_address0 mem_address 1 10 }  { conv_last_output_V_2_ce0 mem_ce 1 1 }  { conv_last_output_V_2_we0 mem_we 1 1 }  { conv_last_output_V_2_d0 mem_din 1 8 }  { conv_last_output_V_2_q0 mem_dout 0 8 } } }
	conv_last_output_V_3 { ap_memory {  { conv_last_output_V_3_address0 mem_address 1 10 }  { conv_last_output_V_3_ce0 mem_ce 1 1 }  { conv_last_output_V_3_we0 mem_we 1 1 }  { conv_last_output_V_3_d0 mem_din 1 8 }  { conv_last_output_V_3_q0 mem_dout 0 8 } } }
	conv_last_output_V_4 { ap_memory {  { conv_last_output_V_4_address0 mem_address 1 10 }  { conv_last_output_V_4_ce0 mem_ce 1 1 }  { conv_last_output_V_4_we0 mem_we 1 1 }  { conv_last_output_V_4_d0 mem_din 1 8 }  { conv_last_output_V_4_q0 mem_dout 0 8 } } }
	conv_last_output_V_5 { ap_memory {  { conv_last_output_V_5_address0 mem_address 1 10 }  { conv_last_output_V_5_ce0 mem_ce 1 1 }  { conv_last_output_V_5_we0 mem_we 1 1 }  { conv_last_output_V_5_d0 mem_din 1 8 }  { conv_last_output_V_5_q0 mem_dout 0 8 } } }
	conv_last_output_V_6 { ap_memory {  { conv_last_output_V_6_address0 mem_address 1 10 }  { conv_last_output_V_6_ce0 mem_ce 1 1 }  { conv_last_output_V_6_we0 mem_we 1 1 }  { conv_last_output_V_6_d0 mem_din 1 8 }  { conv_last_output_V_6_q0 mem_dout 0 8 } } }
	conv_last_output_V_7 { ap_memory {  { conv_last_output_V_7_address0 mem_address 1 10 }  { conv_last_output_V_7_ce0 mem_ce 1 1 }  { conv_last_output_V_7_we0 mem_we 1 1 }  { conv_last_output_V_7_d0 mem_din 1 8 }  { conv_last_output_V_7_q0 mem_dout 0 8 } } }
}
