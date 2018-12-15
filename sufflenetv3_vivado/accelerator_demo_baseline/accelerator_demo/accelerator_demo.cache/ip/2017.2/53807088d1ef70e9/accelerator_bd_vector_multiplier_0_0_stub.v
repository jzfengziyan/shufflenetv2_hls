// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.2 (win64) Build 1909853 Thu Jun 15 18:39:09 MDT 2017
// Date        : Tue Oct 17 00:09:22 2017
// Host        : RhoG_Squadron running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ accelerator_bd_vector_multiplier_0_0_stub.v
// Design      : accelerator_bd_vector_multiplier_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "vector_multiplier,Vivado 2017.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(s_axi_CTL_AWADDR, s_axi_CTL_AWVALID, 
  s_axi_CTL_AWREADY, s_axi_CTL_WDATA, s_axi_CTL_WSTRB, s_axi_CTL_WVALID, s_axi_CTL_WREADY, 
  s_axi_CTL_BRESP, s_axi_CTL_BVALID, s_axi_CTL_BREADY, s_axi_CTL_ARADDR, s_axi_CTL_ARVALID, 
  s_axi_CTL_ARREADY, s_axi_CTL_RDATA, s_axi_CTL_RRESP, s_axi_CTL_RVALID, s_axi_CTL_RREADY, 
  ap_clk, ap_rst_n, interrupt, m_axi_DATA_A_AWADDR, m_axi_DATA_A_AWLEN, m_axi_DATA_A_AWSIZE, 
  m_axi_DATA_A_AWBURST, m_axi_DATA_A_AWLOCK, m_axi_DATA_A_AWREGION, m_axi_DATA_A_AWCACHE, 
  m_axi_DATA_A_AWPROT, m_axi_DATA_A_AWQOS, m_axi_DATA_A_AWVALID, m_axi_DATA_A_AWREADY, 
  m_axi_DATA_A_WDATA, m_axi_DATA_A_WSTRB, m_axi_DATA_A_WLAST, m_axi_DATA_A_WVALID, 
  m_axi_DATA_A_WREADY, m_axi_DATA_A_BRESP, m_axi_DATA_A_BVALID, m_axi_DATA_A_BREADY, 
  m_axi_DATA_A_ARADDR, m_axi_DATA_A_ARLEN, m_axi_DATA_A_ARSIZE, m_axi_DATA_A_ARBURST, 
  m_axi_DATA_A_ARLOCK, m_axi_DATA_A_ARREGION, m_axi_DATA_A_ARCACHE, m_axi_DATA_A_ARPROT, 
  m_axi_DATA_A_ARQOS, m_axi_DATA_A_ARVALID, m_axi_DATA_A_ARREADY, m_axi_DATA_A_RDATA, 
  m_axi_DATA_A_RRESP, m_axi_DATA_A_RLAST, m_axi_DATA_A_RVALID, m_axi_DATA_A_RREADY, 
  m_axi_DATA_B_AWADDR, m_axi_DATA_B_AWLEN, m_axi_DATA_B_AWSIZE, m_axi_DATA_B_AWBURST, 
  m_axi_DATA_B_AWLOCK, m_axi_DATA_B_AWREGION, m_axi_DATA_B_AWCACHE, m_axi_DATA_B_AWPROT, 
  m_axi_DATA_B_AWQOS, m_axi_DATA_B_AWVALID, m_axi_DATA_B_AWREADY, m_axi_DATA_B_WDATA, 
  m_axi_DATA_B_WSTRB, m_axi_DATA_B_WLAST, m_axi_DATA_B_WVALID, m_axi_DATA_B_WREADY, 
  m_axi_DATA_B_BRESP, m_axi_DATA_B_BVALID, m_axi_DATA_B_BREADY, m_axi_DATA_B_ARADDR, 
  m_axi_DATA_B_ARLEN, m_axi_DATA_B_ARSIZE, m_axi_DATA_B_ARBURST, m_axi_DATA_B_ARLOCK, 
  m_axi_DATA_B_ARREGION, m_axi_DATA_B_ARCACHE, m_axi_DATA_B_ARPROT, m_axi_DATA_B_ARQOS, 
  m_axi_DATA_B_ARVALID, m_axi_DATA_B_ARREADY, m_axi_DATA_B_RDATA, m_axi_DATA_B_RRESP, 
  m_axi_DATA_B_RLAST, m_axi_DATA_B_RVALID, m_axi_DATA_B_RREADY, m_axi_DATA_C_AWADDR, 
  m_axi_DATA_C_AWLEN, m_axi_DATA_C_AWSIZE, m_axi_DATA_C_AWBURST, m_axi_DATA_C_AWLOCK, 
  m_axi_DATA_C_AWREGION, m_axi_DATA_C_AWCACHE, m_axi_DATA_C_AWPROT, m_axi_DATA_C_AWQOS, 
  m_axi_DATA_C_AWVALID, m_axi_DATA_C_AWREADY, m_axi_DATA_C_WDATA, m_axi_DATA_C_WSTRB, 
  m_axi_DATA_C_WLAST, m_axi_DATA_C_WVALID, m_axi_DATA_C_WREADY, m_axi_DATA_C_BRESP, 
  m_axi_DATA_C_BVALID, m_axi_DATA_C_BREADY, m_axi_DATA_C_ARADDR, m_axi_DATA_C_ARLEN, 
  m_axi_DATA_C_ARSIZE, m_axi_DATA_C_ARBURST, m_axi_DATA_C_ARLOCK, m_axi_DATA_C_ARREGION, 
  m_axi_DATA_C_ARCACHE, m_axi_DATA_C_ARPROT, m_axi_DATA_C_ARQOS, m_axi_DATA_C_ARVALID, 
  m_axi_DATA_C_ARREADY, m_axi_DATA_C_RDATA, m_axi_DATA_C_RRESP, m_axi_DATA_C_RLAST, 
  m_axi_DATA_C_RVALID, m_axi_DATA_C_RREADY)
/* synthesis syn_black_box black_box_pad_pin="s_axi_CTL_AWADDR[5:0],s_axi_CTL_AWVALID,s_axi_CTL_AWREADY,s_axi_CTL_WDATA[31:0],s_axi_CTL_WSTRB[3:0],s_axi_CTL_WVALID,s_axi_CTL_WREADY,s_axi_CTL_BRESP[1:0],s_axi_CTL_BVALID,s_axi_CTL_BREADY,s_axi_CTL_ARADDR[5:0],s_axi_CTL_ARVALID,s_axi_CTL_ARREADY,s_axi_CTL_RDATA[31:0],s_axi_CTL_RRESP[1:0],s_axi_CTL_RVALID,s_axi_CTL_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_DATA_A_AWADDR[31:0],m_axi_DATA_A_AWLEN[7:0],m_axi_DATA_A_AWSIZE[2:0],m_axi_DATA_A_AWBURST[1:0],m_axi_DATA_A_AWLOCK[1:0],m_axi_DATA_A_AWREGION[3:0],m_axi_DATA_A_AWCACHE[3:0],m_axi_DATA_A_AWPROT[2:0],m_axi_DATA_A_AWQOS[3:0],m_axi_DATA_A_AWVALID,m_axi_DATA_A_AWREADY,m_axi_DATA_A_WDATA[31:0],m_axi_DATA_A_WSTRB[3:0],m_axi_DATA_A_WLAST,m_axi_DATA_A_WVALID,m_axi_DATA_A_WREADY,m_axi_DATA_A_BRESP[1:0],m_axi_DATA_A_BVALID,m_axi_DATA_A_BREADY,m_axi_DATA_A_ARADDR[31:0],m_axi_DATA_A_ARLEN[7:0],m_axi_DATA_A_ARSIZE[2:0],m_axi_DATA_A_ARBURST[1:0],m_axi_DATA_A_ARLOCK[1:0],m_axi_DATA_A_ARREGION[3:0],m_axi_DATA_A_ARCACHE[3:0],m_axi_DATA_A_ARPROT[2:0],m_axi_DATA_A_ARQOS[3:0],m_axi_DATA_A_ARVALID,m_axi_DATA_A_ARREADY,m_axi_DATA_A_RDATA[31:0],m_axi_DATA_A_RRESP[1:0],m_axi_DATA_A_RLAST,m_axi_DATA_A_RVALID,m_axi_DATA_A_RREADY,m_axi_DATA_B_AWADDR[31:0],m_axi_DATA_B_AWLEN[7:0],m_axi_DATA_B_AWSIZE[2:0],m_axi_DATA_B_AWBURST[1:0],m_axi_DATA_B_AWLOCK[1:0],m_axi_DATA_B_AWREGION[3:0],m_axi_DATA_B_AWCACHE[3:0],m_axi_DATA_B_AWPROT[2:0],m_axi_DATA_B_AWQOS[3:0],m_axi_DATA_B_AWVALID,m_axi_DATA_B_AWREADY,m_axi_DATA_B_WDATA[31:0],m_axi_DATA_B_WSTRB[3:0],m_axi_DATA_B_WLAST,m_axi_DATA_B_WVALID,m_axi_DATA_B_WREADY,m_axi_DATA_B_BRESP[1:0],m_axi_DATA_B_BVALID,m_axi_DATA_B_BREADY,m_axi_DATA_B_ARADDR[31:0],m_axi_DATA_B_ARLEN[7:0],m_axi_DATA_B_ARSIZE[2:0],m_axi_DATA_B_ARBURST[1:0],m_axi_DATA_B_ARLOCK[1:0],m_axi_DATA_B_ARREGION[3:0],m_axi_DATA_B_ARCACHE[3:0],m_axi_DATA_B_ARPROT[2:0],m_axi_DATA_B_ARQOS[3:0],m_axi_DATA_B_ARVALID,m_axi_DATA_B_ARREADY,m_axi_DATA_B_RDATA[31:0],m_axi_DATA_B_RRESP[1:0],m_axi_DATA_B_RLAST,m_axi_DATA_B_RVALID,m_axi_DATA_B_RREADY,m_axi_DATA_C_AWADDR[31:0],m_axi_DATA_C_AWLEN[7:0],m_axi_DATA_C_AWSIZE[2:0],m_axi_DATA_C_AWBURST[1:0],m_axi_DATA_C_AWLOCK[1:0],m_axi_DATA_C_AWREGION[3:0],m_axi_DATA_C_AWCACHE[3:0],m_axi_DATA_C_AWPROT[2:0],m_axi_DATA_C_AWQOS[3:0],m_axi_DATA_C_AWVALID,m_axi_DATA_C_AWREADY,m_axi_DATA_C_WDATA[31:0],m_axi_DATA_C_WSTRB[3:0],m_axi_DATA_C_WLAST,m_axi_DATA_C_WVALID,m_axi_DATA_C_WREADY,m_axi_DATA_C_BRESP[1:0],m_axi_DATA_C_BVALID,m_axi_DATA_C_BREADY,m_axi_DATA_C_ARADDR[31:0],m_axi_DATA_C_ARLEN[7:0],m_axi_DATA_C_ARSIZE[2:0],m_axi_DATA_C_ARBURST[1:0],m_axi_DATA_C_ARLOCK[1:0],m_axi_DATA_C_ARREGION[3:0],m_axi_DATA_C_ARCACHE[3:0],m_axi_DATA_C_ARPROT[2:0],m_axi_DATA_C_ARQOS[3:0],m_axi_DATA_C_ARVALID,m_axi_DATA_C_ARREADY,m_axi_DATA_C_RDATA[31:0],m_axi_DATA_C_RRESP[1:0],m_axi_DATA_C_RLAST,m_axi_DATA_C_RVALID,m_axi_DATA_C_RREADY" */;
  input [5:0]s_axi_CTL_AWADDR;
  input s_axi_CTL_AWVALID;
  output s_axi_CTL_AWREADY;
  input [31:0]s_axi_CTL_WDATA;
  input [3:0]s_axi_CTL_WSTRB;
  input s_axi_CTL_WVALID;
  output s_axi_CTL_WREADY;
  output [1:0]s_axi_CTL_BRESP;
  output s_axi_CTL_BVALID;
  input s_axi_CTL_BREADY;
  input [5:0]s_axi_CTL_ARADDR;
  input s_axi_CTL_ARVALID;
  output s_axi_CTL_ARREADY;
  output [31:0]s_axi_CTL_RDATA;
  output [1:0]s_axi_CTL_RRESP;
  output s_axi_CTL_RVALID;
  input s_axi_CTL_RREADY;
  input ap_clk;
  input ap_rst_n;
  output interrupt;
  output [31:0]m_axi_DATA_A_AWADDR;
  output [7:0]m_axi_DATA_A_AWLEN;
  output [2:0]m_axi_DATA_A_AWSIZE;
  output [1:0]m_axi_DATA_A_AWBURST;
  output [1:0]m_axi_DATA_A_AWLOCK;
  output [3:0]m_axi_DATA_A_AWREGION;
  output [3:0]m_axi_DATA_A_AWCACHE;
  output [2:0]m_axi_DATA_A_AWPROT;
  output [3:0]m_axi_DATA_A_AWQOS;
  output m_axi_DATA_A_AWVALID;
  input m_axi_DATA_A_AWREADY;
  output [31:0]m_axi_DATA_A_WDATA;
  output [3:0]m_axi_DATA_A_WSTRB;
  output m_axi_DATA_A_WLAST;
  output m_axi_DATA_A_WVALID;
  input m_axi_DATA_A_WREADY;
  input [1:0]m_axi_DATA_A_BRESP;
  input m_axi_DATA_A_BVALID;
  output m_axi_DATA_A_BREADY;
  output [31:0]m_axi_DATA_A_ARADDR;
  output [7:0]m_axi_DATA_A_ARLEN;
  output [2:0]m_axi_DATA_A_ARSIZE;
  output [1:0]m_axi_DATA_A_ARBURST;
  output [1:0]m_axi_DATA_A_ARLOCK;
  output [3:0]m_axi_DATA_A_ARREGION;
  output [3:0]m_axi_DATA_A_ARCACHE;
  output [2:0]m_axi_DATA_A_ARPROT;
  output [3:0]m_axi_DATA_A_ARQOS;
  output m_axi_DATA_A_ARVALID;
  input m_axi_DATA_A_ARREADY;
  input [31:0]m_axi_DATA_A_RDATA;
  input [1:0]m_axi_DATA_A_RRESP;
  input m_axi_DATA_A_RLAST;
  input m_axi_DATA_A_RVALID;
  output m_axi_DATA_A_RREADY;
  output [31:0]m_axi_DATA_B_AWADDR;
  output [7:0]m_axi_DATA_B_AWLEN;
  output [2:0]m_axi_DATA_B_AWSIZE;
  output [1:0]m_axi_DATA_B_AWBURST;
  output [1:0]m_axi_DATA_B_AWLOCK;
  output [3:0]m_axi_DATA_B_AWREGION;
  output [3:0]m_axi_DATA_B_AWCACHE;
  output [2:0]m_axi_DATA_B_AWPROT;
  output [3:0]m_axi_DATA_B_AWQOS;
  output m_axi_DATA_B_AWVALID;
  input m_axi_DATA_B_AWREADY;
  output [31:0]m_axi_DATA_B_WDATA;
  output [3:0]m_axi_DATA_B_WSTRB;
  output m_axi_DATA_B_WLAST;
  output m_axi_DATA_B_WVALID;
  input m_axi_DATA_B_WREADY;
  input [1:0]m_axi_DATA_B_BRESP;
  input m_axi_DATA_B_BVALID;
  output m_axi_DATA_B_BREADY;
  output [31:0]m_axi_DATA_B_ARADDR;
  output [7:0]m_axi_DATA_B_ARLEN;
  output [2:0]m_axi_DATA_B_ARSIZE;
  output [1:0]m_axi_DATA_B_ARBURST;
  output [1:0]m_axi_DATA_B_ARLOCK;
  output [3:0]m_axi_DATA_B_ARREGION;
  output [3:0]m_axi_DATA_B_ARCACHE;
  output [2:0]m_axi_DATA_B_ARPROT;
  output [3:0]m_axi_DATA_B_ARQOS;
  output m_axi_DATA_B_ARVALID;
  input m_axi_DATA_B_ARREADY;
  input [31:0]m_axi_DATA_B_RDATA;
  input [1:0]m_axi_DATA_B_RRESP;
  input m_axi_DATA_B_RLAST;
  input m_axi_DATA_B_RVALID;
  output m_axi_DATA_B_RREADY;
  output [31:0]m_axi_DATA_C_AWADDR;
  output [7:0]m_axi_DATA_C_AWLEN;
  output [2:0]m_axi_DATA_C_AWSIZE;
  output [1:0]m_axi_DATA_C_AWBURST;
  output [1:0]m_axi_DATA_C_AWLOCK;
  output [3:0]m_axi_DATA_C_AWREGION;
  output [3:0]m_axi_DATA_C_AWCACHE;
  output [2:0]m_axi_DATA_C_AWPROT;
  output [3:0]m_axi_DATA_C_AWQOS;
  output m_axi_DATA_C_AWVALID;
  input m_axi_DATA_C_AWREADY;
  output [31:0]m_axi_DATA_C_WDATA;
  output [3:0]m_axi_DATA_C_WSTRB;
  output m_axi_DATA_C_WLAST;
  output m_axi_DATA_C_WVALID;
  input m_axi_DATA_C_WREADY;
  input [1:0]m_axi_DATA_C_BRESP;
  input m_axi_DATA_C_BVALID;
  output m_axi_DATA_C_BREADY;
  output [31:0]m_axi_DATA_C_ARADDR;
  output [7:0]m_axi_DATA_C_ARLEN;
  output [2:0]m_axi_DATA_C_ARSIZE;
  output [1:0]m_axi_DATA_C_ARBURST;
  output [1:0]m_axi_DATA_C_ARLOCK;
  output [3:0]m_axi_DATA_C_ARREGION;
  output [3:0]m_axi_DATA_C_ARCACHE;
  output [2:0]m_axi_DATA_C_ARPROT;
  output [3:0]m_axi_DATA_C_ARQOS;
  output m_axi_DATA_C_ARVALID;
  input m_axi_DATA_C_ARREADY;
  input [31:0]m_axi_DATA_C_RDATA;
  input [1:0]m_axi_DATA_C_RRESP;
  input m_axi_DATA_C_RLAST;
  input m_axi_DATA_C_RVALID;
  output m_axi_DATA_C_RREADY;
endmodule
