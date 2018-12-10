// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.2 (win64) Build 1909853 Thu Jun 15 18:39:09 MDT 2017
// Date        : Tue Oct 17 00:09:23 2017
// Host        : RhoG_Squadron running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               f:/ECE527/MP4/Tutorial_Files/accelerator_demo/accelerator_demo.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_vector_multiplier_0_0/accelerator_bd_vector_multiplier_0_0_sim_netlist.v
// Design      : accelerator_bd_vector_multiplier_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg484-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "accelerator_bd_vector_multiplier_0_0,vector_multiplier,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* X_CORE_INFO = "vector_multiplier,Vivado 2017.2" *) 
(* hls_module = "yes" *) 
(* NotValidForBitStream *)
module accelerator_bd_vector_multiplier_0_0
   (s_axi_CTL_AWADDR,
    s_axi_CTL_AWVALID,
    s_axi_CTL_AWREADY,
    s_axi_CTL_WDATA,
    s_axi_CTL_WSTRB,
    s_axi_CTL_WVALID,
    s_axi_CTL_WREADY,
    s_axi_CTL_BRESP,
    s_axi_CTL_BVALID,
    s_axi_CTL_BREADY,
    s_axi_CTL_ARADDR,
    s_axi_CTL_ARVALID,
    s_axi_CTL_ARREADY,
    s_axi_CTL_RDATA,
    s_axi_CTL_RRESP,
    s_axi_CTL_RVALID,
    s_axi_CTL_RREADY,
    ap_clk,
    ap_rst_n,
    interrupt,
    m_axi_DATA_A_AWADDR,
    m_axi_DATA_A_AWLEN,
    m_axi_DATA_A_AWSIZE,
    m_axi_DATA_A_AWBURST,
    m_axi_DATA_A_AWLOCK,
    m_axi_DATA_A_AWREGION,
    m_axi_DATA_A_AWCACHE,
    m_axi_DATA_A_AWPROT,
    m_axi_DATA_A_AWQOS,
    m_axi_DATA_A_AWVALID,
    m_axi_DATA_A_AWREADY,
    m_axi_DATA_A_WDATA,
    m_axi_DATA_A_WSTRB,
    m_axi_DATA_A_WLAST,
    m_axi_DATA_A_WVALID,
    m_axi_DATA_A_WREADY,
    m_axi_DATA_A_BRESP,
    m_axi_DATA_A_BVALID,
    m_axi_DATA_A_BREADY,
    m_axi_DATA_A_ARADDR,
    m_axi_DATA_A_ARLEN,
    m_axi_DATA_A_ARSIZE,
    m_axi_DATA_A_ARBURST,
    m_axi_DATA_A_ARLOCK,
    m_axi_DATA_A_ARREGION,
    m_axi_DATA_A_ARCACHE,
    m_axi_DATA_A_ARPROT,
    m_axi_DATA_A_ARQOS,
    m_axi_DATA_A_ARVALID,
    m_axi_DATA_A_ARREADY,
    m_axi_DATA_A_RDATA,
    m_axi_DATA_A_RRESP,
    m_axi_DATA_A_RLAST,
    m_axi_DATA_A_RVALID,
    m_axi_DATA_A_RREADY,
    m_axi_DATA_B_AWADDR,
    m_axi_DATA_B_AWLEN,
    m_axi_DATA_B_AWSIZE,
    m_axi_DATA_B_AWBURST,
    m_axi_DATA_B_AWLOCK,
    m_axi_DATA_B_AWREGION,
    m_axi_DATA_B_AWCACHE,
    m_axi_DATA_B_AWPROT,
    m_axi_DATA_B_AWQOS,
    m_axi_DATA_B_AWVALID,
    m_axi_DATA_B_AWREADY,
    m_axi_DATA_B_WDATA,
    m_axi_DATA_B_WSTRB,
    m_axi_DATA_B_WLAST,
    m_axi_DATA_B_WVALID,
    m_axi_DATA_B_WREADY,
    m_axi_DATA_B_BRESP,
    m_axi_DATA_B_BVALID,
    m_axi_DATA_B_BREADY,
    m_axi_DATA_B_ARADDR,
    m_axi_DATA_B_ARLEN,
    m_axi_DATA_B_ARSIZE,
    m_axi_DATA_B_ARBURST,
    m_axi_DATA_B_ARLOCK,
    m_axi_DATA_B_ARREGION,
    m_axi_DATA_B_ARCACHE,
    m_axi_DATA_B_ARPROT,
    m_axi_DATA_B_ARQOS,
    m_axi_DATA_B_ARVALID,
    m_axi_DATA_B_ARREADY,
    m_axi_DATA_B_RDATA,
    m_axi_DATA_B_RRESP,
    m_axi_DATA_B_RLAST,
    m_axi_DATA_B_RVALID,
    m_axi_DATA_B_RREADY,
    m_axi_DATA_C_AWADDR,
    m_axi_DATA_C_AWLEN,
    m_axi_DATA_C_AWSIZE,
    m_axi_DATA_C_AWBURST,
    m_axi_DATA_C_AWLOCK,
    m_axi_DATA_C_AWREGION,
    m_axi_DATA_C_AWCACHE,
    m_axi_DATA_C_AWPROT,
    m_axi_DATA_C_AWQOS,
    m_axi_DATA_C_AWVALID,
    m_axi_DATA_C_AWREADY,
    m_axi_DATA_C_WDATA,
    m_axi_DATA_C_WSTRB,
    m_axi_DATA_C_WLAST,
    m_axi_DATA_C_WVALID,
    m_axi_DATA_C_WREADY,
    m_axi_DATA_C_BRESP,
    m_axi_DATA_C_BVALID,
    m_axi_DATA_C_BREADY,
    m_axi_DATA_C_ARADDR,
    m_axi_DATA_C_ARLEN,
    m_axi_DATA_C_ARSIZE,
    m_axi_DATA_C_ARBURST,
    m_axi_DATA_C_ARLOCK,
    m_axi_DATA_C_ARREGION,
    m_axi_DATA_C_ARCACHE,
    m_axi_DATA_C_ARPROT,
    m_axi_DATA_C_ARQOS,
    m_axi_DATA_C_ARVALID,
    m_axi_DATA_C_ARREADY,
    m_axi_DATA_C_RDATA,
    m_axi_DATA_C_RRESP,
    m_axi_DATA_C_RLAST,
    m_axi_DATA_C_RVALID,
    m_axi_DATA_C_RREADY);
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWADDR" *) input [5:0]s_axi_CTL_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWVALID" *) input s_axi_CTL_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWREADY" *) output s_axi_CTL_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WDATA" *) input [31:0]s_axi_CTL_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WSTRB" *) input [3:0]s_axi_CTL_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WVALID" *) input s_axi_CTL_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WREADY" *) output s_axi_CTL_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL BRESP" *) output [1:0]s_axi_CTL_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL BVALID" *) output s_axi_CTL_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL BREADY" *) input s_axi_CTL_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL ARADDR" *) input [5:0]s_axi_CTL_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL ARVALID" *) input s_axi_CTL_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL ARREADY" *) output s_axi_CTL_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RDATA" *) output [31:0]s_axi_CTL_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RRESP" *) output [1:0]s_axi_CTL_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RVALID" *) output s_axi_CTL_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RREADY" *) input s_axi_CTL_RREADY;
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *) input ap_clk;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *) input ap_rst_n;
  (* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *) output interrupt;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWADDR" *) output [31:0]m_axi_DATA_A_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWLEN" *) output [7:0]m_axi_DATA_A_AWLEN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWSIZE" *) output [2:0]m_axi_DATA_A_AWSIZE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWBURST" *) output [1:0]m_axi_DATA_A_AWBURST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWLOCK" *) output [1:0]m_axi_DATA_A_AWLOCK;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWREGION" *) output [3:0]m_axi_DATA_A_AWREGION;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWCACHE" *) output [3:0]m_axi_DATA_A_AWCACHE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWPROT" *) output [2:0]m_axi_DATA_A_AWPROT;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWQOS" *) output [3:0]m_axi_DATA_A_AWQOS;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWVALID" *) output m_axi_DATA_A_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWREADY" *) input m_axi_DATA_A_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WDATA" *) output [31:0]m_axi_DATA_A_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WSTRB" *) output [3:0]m_axi_DATA_A_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WLAST" *) output m_axi_DATA_A_WLAST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WVALID" *) output m_axi_DATA_A_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WREADY" *) input m_axi_DATA_A_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A BRESP" *) input [1:0]m_axi_DATA_A_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A BVALID" *) input m_axi_DATA_A_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A BREADY" *) output m_axi_DATA_A_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARADDR" *) output [31:0]m_axi_DATA_A_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARLEN" *) output [7:0]m_axi_DATA_A_ARLEN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARSIZE" *) output [2:0]m_axi_DATA_A_ARSIZE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARBURST" *) output [1:0]m_axi_DATA_A_ARBURST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARLOCK" *) output [1:0]m_axi_DATA_A_ARLOCK;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARREGION" *) output [3:0]m_axi_DATA_A_ARREGION;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARCACHE" *) output [3:0]m_axi_DATA_A_ARCACHE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARPROT" *) output [2:0]m_axi_DATA_A_ARPROT;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARQOS" *) output [3:0]m_axi_DATA_A_ARQOS;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARVALID" *) output m_axi_DATA_A_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARREADY" *) input m_axi_DATA_A_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RDATA" *) input [31:0]m_axi_DATA_A_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RRESP" *) input [1:0]m_axi_DATA_A_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RLAST" *) input m_axi_DATA_A_RLAST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RVALID" *) input m_axi_DATA_A_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RREADY" *) output m_axi_DATA_A_RREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWADDR" *) output [31:0]m_axi_DATA_B_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWLEN" *) output [7:0]m_axi_DATA_B_AWLEN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWSIZE" *) output [2:0]m_axi_DATA_B_AWSIZE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWBURST" *) output [1:0]m_axi_DATA_B_AWBURST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWLOCK" *) output [1:0]m_axi_DATA_B_AWLOCK;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWREGION" *) output [3:0]m_axi_DATA_B_AWREGION;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWCACHE" *) output [3:0]m_axi_DATA_B_AWCACHE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWPROT" *) output [2:0]m_axi_DATA_B_AWPROT;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWQOS" *) output [3:0]m_axi_DATA_B_AWQOS;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWVALID" *) output m_axi_DATA_B_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWREADY" *) input m_axi_DATA_B_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WDATA" *) output [31:0]m_axi_DATA_B_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WSTRB" *) output [3:0]m_axi_DATA_B_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WLAST" *) output m_axi_DATA_B_WLAST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WVALID" *) output m_axi_DATA_B_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WREADY" *) input m_axi_DATA_B_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B BRESP" *) input [1:0]m_axi_DATA_B_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B BVALID" *) input m_axi_DATA_B_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B BREADY" *) output m_axi_DATA_B_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARADDR" *) output [31:0]m_axi_DATA_B_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARLEN" *) output [7:0]m_axi_DATA_B_ARLEN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARSIZE" *) output [2:0]m_axi_DATA_B_ARSIZE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARBURST" *) output [1:0]m_axi_DATA_B_ARBURST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARLOCK" *) output [1:0]m_axi_DATA_B_ARLOCK;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARREGION" *) output [3:0]m_axi_DATA_B_ARREGION;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARCACHE" *) output [3:0]m_axi_DATA_B_ARCACHE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARPROT" *) output [2:0]m_axi_DATA_B_ARPROT;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARQOS" *) output [3:0]m_axi_DATA_B_ARQOS;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARVALID" *) output m_axi_DATA_B_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARREADY" *) input m_axi_DATA_B_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RDATA" *) input [31:0]m_axi_DATA_B_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RRESP" *) input [1:0]m_axi_DATA_B_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RLAST" *) input m_axi_DATA_B_RLAST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RVALID" *) input m_axi_DATA_B_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RREADY" *) output m_axi_DATA_B_RREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWADDR" *) output [31:0]m_axi_DATA_C_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWLEN" *) output [7:0]m_axi_DATA_C_AWLEN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWSIZE" *) output [2:0]m_axi_DATA_C_AWSIZE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWBURST" *) output [1:0]m_axi_DATA_C_AWBURST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWLOCK" *) output [1:0]m_axi_DATA_C_AWLOCK;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWREGION" *) output [3:0]m_axi_DATA_C_AWREGION;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWCACHE" *) output [3:0]m_axi_DATA_C_AWCACHE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWPROT" *) output [2:0]m_axi_DATA_C_AWPROT;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWQOS" *) output [3:0]m_axi_DATA_C_AWQOS;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWVALID" *) output m_axi_DATA_C_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWREADY" *) input m_axi_DATA_C_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WDATA" *) output [31:0]m_axi_DATA_C_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WSTRB" *) output [3:0]m_axi_DATA_C_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WLAST" *) output m_axi_DATA_C_WLAST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WVALID" *) output m_axi_DATA_C_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WREADY" *) input m_axi_DATA_C_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C BRESP" *) input [1:0]m_axi_DATA_C_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C BVALID" *) input m_axi_DATA_C_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C BREADY" *) output m_axi_DATA_C_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARADDR" *) output [31:0]m_axi_DATA_C_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARLEN" *) output [7:0]m_axi_DATA_C_ARLEN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARSIZE" *) output [2:0]m_axi_DATA_C_ARSIZE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARBURST" *) output [1:0]m_axi_DATA_C_ARBURST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARLOCK" *) output [1:0]m_axi_DATA_C_ARLOCK;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARREGION" *) output [3:0]m_axi_DATA_C_ARREGION;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARCACHE" *) output [3:0]m_axi_DATA_C_ARCACHE;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARPROT" *) output [2:0]m_axi_DATA_C_ARPROT;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARQOS" *) output [3:0]m_axi_DATA_C_ARQOS;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARVALID" *) output m_axi_DATA_C_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARREADY" *) input m_axi_DATA_C_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RDATA" *) input [31:0]m_axi_DATA_C_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RRESP" *) input [1:0]m_axi_DATA_C_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RLAST" *) input m_axi_DATA_C_RLAST;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RVALID" *) input m_axi_DATA_C_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RREADY" *) output m_axi_DATA_C_RREADY;

  wire ap_clk;
  wire ap_rst_n;
  wire interrupt;
  wire [31:0]m_axi_DATA_A_ARADDR;
  wire [1:0]m_axi_DATA_A_ARBURST;
  wire [3:0]m_axi_DATA_A_ARCACHE;
  wire [7:0]m_axi_DATA_A_ARLEN;
  wire [1:0]m_axi_DATA_A_ARLOCK;
  wire [2:0]m_axi_DATA_A_ARPROT;
  wire [3:0]m_axi_DATA_A_ARQOS;
  wire m_axi_DATA_A_ARREADY;
  wire [3:0]m_axi_DATA_A_ARREGION;
  wire [2:0]m_axi_DATA_A_ARSIZE;
  wire m_axi_DATA_A_ARVALID;
  wire [31:0]m_axi_DATA_A_AWADDR;
  wire [1:0]m_axi_DATA_A_AWBURST;
  wire [3:0]m_axi_DATA_A_AWCACHE;
  wire [7:0]m_axi_DATA_A_AWLEN;
  wire [1:0]m_axi_DATA_A_AWLOCK;
  wire [2:0]m_axi_DATA_A_AWPROT;
  wire [3:0]m_axi_DATA_A_AWQOS;
  wire m_axi_DATA_A_AWREADY;
  wire [3:0]m_axi_DATA_A_AWREGION;
  wire [2:0]m_axi_DATA_A_AWSIZE;
  wire m_axi_DATA_A_AWVALID;
  wire m_axi_DATA_A_BREADY;
  wire [1:0]m_axi_DATA_A_BRESP;
  wire m_axi_DATA_A_BVALID;
  wire [31:0]m_axi_DATA_A_RDATA;
  wire m_axi_DATA_A_RLAST;
  wire m_axi_DATA_A_RREADY;
  wire [1:0]m_axi_DATA_A_RRESP;
  wire m_axi_DATA_A_RVALID;
  wire [31:0]m_axi_DATA_A_WDATA;
  wire m_axi_DATA_A_WLAST;
  wire m_axi_DATA_A_WREADY;
  wire [3:0]m_axi_DATA_A_WSTRB;
  wire m_axi_DATA_A_WVALID;
  wire [31:0]m_axi_DATA_B_ARADDR;
  wire [1:0]m_axi_DATA_B_ARBURST;
  wire [3:0]m_axi_DATA_B_ARCACHE;
  wire [7:0]m_axi_DATA_B_ARLEN;
  wire [1:0]m_axi_DATA_B_ARLOCK;
  wire [2:0]m_axi_DATA_B_ARPROT;
  wire [3:0]m_axi_DATA_B_ARQOS;
  wire m_axi_DATA_B_ARREADY;
  wire [3:0]m_axi_DATA_B_ARREGION;
  wire [2:0]m_axi_DATA_B_ARSIZE;
  wire m_axi_DATA_B_ARVALID;
  wire [31:0]m_axi_DATA_B_AWADDR;
  wire [1:0]m_axi_DATA_B_AWBURST;
  wire [3:0]m_axi_DATA_B_AWCACHE;
  wire [7:0]m_axi_DATA_B_AWLEN;
  wire [1:0]m_axi_DATA_B_AWLOCK;
  wire [2:0]m_axi_DATA_B_AWPROT;
  wire [3:0]m_axi_DATA_B_AWQOS;
  wire m_axi_DATA_B_AWREADY;
  wire [3:0]m_axi_DATA_B_AWREGION;
  wire [2:0]m_axi_DATA_B_AWSIZE;
  wire m_axi_DATA_B_AWVALID;
  wire m_axi_DATA_B_BREADY;
  wire [1:0]m_axi_DATA_B_BRESP;
  wire m_axi_DATA_B_BVALID;
  wire [31:0]m_axi_DATA_B_RDATA;
  wire m_axi_DATA_B_RLAST;
  wire m_axi_DATA_B_RREADY;
  wire [1:0]m_axi_DATA_B_RRESP;
  wire m_axi_DATA_B_RVALID;
  wire [31:0]m_axi_DATA_B_WDATA;
  wire m_axi_DATA_B_WLAST;
  wire m_axi_DATA_B_WREADY;
  wire [3:0]m_axi_DATA_B_WSTRB;
  wire m_axi_DATA_B_WVALID;
  wire [31:0]m_axi_DATA_C_ARADDR;
  wire [1:0]m_axi_DATA_C_ARBURST;
  wire [3:0]m_axi_DATA_C_ARCACHE;
  wire [7:0]m_axi_DATA_C_ARLEN;
  wire [1:0]m_axi_DATA_C_ARLOCK;
  wire [2:0]m_axi_DATA_C_ARPROT;
  wire [3:0]m_axi_DATA_C_ARQOS;
  wire m_axi_DATA_C_ARREADY;
  wire [3:0]m_axi_DATA_C_ARREGION;
  wire [2:0]m_axi_DATA_C_ARSIZE;
  wire m_axi_DATA_C_ARVALID;
  wire [31:0]m_axi_DATA_C_AWADDR;
  wire [1:0]m_axi_DATA_C_AWBURST;
  wire [3:0]m_axi_DATA_C_AWCACHE;
  wire [7:0]m_axi_DATA_C_AWLEN;
  wire [1:0]m_axi_DATA_C_AWLOCK;
  wire [2:0]m_axi_DATA_C_AWPROT;
  wire [3:0]m_axi_DATA_C_AWQOS;
  wire m_axi_DATA_C_AWREADY;
  wire [3:0]m_axi_DATA_C_AWREGION;
  wire [2:0]m_axi_DATA_C_AWSIZE;
  wire m_axi_DATA_C_AWVALID;
  wire m_axi_DATA_C_BREADY;
  wire [1:0]m_axi_DATA_C_BRESP;
  wire m_axi_DATA_C_BVALID;
  wire [31:0]m_axi_DATA_C_RDATA;
  wire m_axi_DATA_C_RLAST;
  wire m_axi_DATA_C_RREADY;
  wire [1:0]m_axi_DATA_C_RRESP;
  wire m_axi_DATA_C_RVALID;
  wire [31:0]m_axi_DATA_C_WDATA;
  wire m_axi_DATA_C_WLAST;
  wire m_axi_DATA_C_WREADY;
  wire [3:0]m_axi_DATA_C_WSTRB;
  wire m_axi_DATA_C_WVALID;
  wire [5:0]s_axi_CTL_ARADDR;
  wire s_axi_CTL_ARREADY;
  wire s_axi_CTL_ARVALID;
  wire [5:0]s_axi_CTL_AWADDR;
  wire s_axi_CTL_AWREADY;
  wire s_axi_CTL_AWVALID;
  wire s_axi_CTL_BREADY;
  wire [1:0]s_axi_CTL_BRESP;
  wire s_axi_CTL_BVALID;
  wire [31:0]s_axi_CTL_RDATA;
  wire s_axi_CTL_RREADY;
  wire [1:0]s_axi_CTL_RRESP;
  wire s_axi_CTL_RVALID;
  wire [31:0]s_axi_CTL_WDATA;
  wire s_axi_CTL_WREADY;
  wire [3:0]s_axi_CTL_WSTRB;
  wire s_axi_CTL_WVALID;
  wire [0:0]NLW_inst_m_axi_DATA_A_ARID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_A_ARUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_A_AWID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_A_AWUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_A_WID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_A_WUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_B_ARID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_B_ARUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_B_AWID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_B_AWUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_B_WID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_B_WUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_C_ARID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_C_ARUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_C_AWID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_C_AWUSER_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_C_WID_UNCONNECTED;
  wire [0:0]NLW_inst_m_axi_DATA_C_WUSER_UNCONNECTED;

  (* C_M_AXI_DATA_A_ADDR_WIDTH = "32" *) 
  (* C_M_AXI_DATA_A_ARUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_A_AWUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_A_BUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_A_CACHE_VALUE = "3" *) 
  (* C_M_AXI_DATA_A_DATA_WIDTH = "32" *) 
  (* C_M_AXI_DATA_A_ID_WIDTH = "1" *) 
  (* C_M_AXI_DATA_A_PROT_VALUE = "0" *) 
  (* C_M_AXI_DATA_A_RUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_A_USER_VALUE = "0" *) 
  (* C_M_AXI_DATA_A_WSTRB_WIDTH = "4" *) 
  (* C_M_AXI_DATA_A_WUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_B_ADDR_WIDTH = "32" *) 
  (* C_M_AXI_DATA_B_ARUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_B_AWUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_B_BUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_B_CACHE_VALUE = "3" *) 
  (* C_M_AXI_DATA_B_DATA_WIDTH = "32" *) 
  (* C_M_AXI_DATA_B_ID_WIDTH = "1" *) 
  (* C_M_AXI_DATA_B_PROT_VALUE = "0" *) 
  (* C_M_AXI_DATA_B_RUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_B_USER_VALUE = "0" *) 
  (* C_M_AXI_DATA_B_WSTRB_WIDTH = "4" *) 
  (* C_M_AXI_DATA_B_WUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_C_ADDR_WIDTH = "32" *) 
  (* C_M_AXI_DATA_C_ARUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_C_AWUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_C_BUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_C_CACHE_VALUE = "3" *) 
  (* C_M_AXI_DATA_C_DATA_WIDTH = "32" *) 
  (* C_M_AXI_DATA_C_ID_WIDTH = "1" *) 
  (* C_M_AXI_DATA_C_PROT_VALUE = "0" *) 
  (* C_M_AXI_DATA_C_RUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_C_USER_VALUE = "0" *) 
  (* C_M_AXI_DATA_C_WSTRB_WIDTH = "4" *) 
  (* C_M_AXI_DATA_C_WUSER_WIDTH = "1" *) 
  (* C_M_AXI_DATA_WIDTH = "32" *) 
  (* C_M_AXI_WSTRB_WIDTH = "4" *) 
  (* C_S_AXI_CTL_ADDR_WIDTH = "6" *) 
  (* C_S_AXI_CTL_DATA_WIDTH = "32" *) 
  (* C_S_AXI_CTL_WSTRB_WIDTH = "4" *) 
  (* C_S_AXI_DATA_WIDTH = "32" *) 
  (* C_S_AXI_WSTRB_WIDTH = "4" *) 
  (* ap_ST_fsm_pp0_stage0 = "14'b00000100000000" *) 
  (* ap_ST_fsm_state1 = "14'b00000000000001" *) 
  (* ap_ST_fsm_state14 = "14'b00001000000000" *) 
  (* ap_ST_fsm_state15 = "14'b00010000000000" *) 
  (* ap_ST_fsm_state16 = "14'b00100000000000" *) 
  (* ap_ST_fsm_state17 = "14'b01000000000000" *) 
  (* ap_ST_fsm_state18 = "14'b10000000000000" *) 
  (* ap_ST_fsm_state2 = "14'b00000000000010" *) 
  (* ap_ST_fsm_state3 = "14'b00000000000100" *) 
  (* ap_ST_fsm_state4 = "14'b00000000001000" *) 
  (* ap_ST_fsm_state5 = "14'b00000000010000" *) 
  (* ap_ST_fsm_state6 = "14'b00000000100000" *) 
  (* ap_ST_fsm_state7 = "14'b00000001000000" *) 
  (* ap_ST_fsm_state8 = "14'b00000010000000" *) 
  accelerator_bd_vector_multiplier_0_0_vector_multiplier inst
       (.ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .interrupt(interrupt),
        .m_axi_DATA_A_ARADDR(m_axi_DATA_A_ARADDR),
        .m_axi_DATA_A_ARBURST(m_axi_DATA_A_ARBURST),
        .m_axi_DATA_A_ARCACHE(m_axi_DATA_A_ARCACHE),
        .m_axi_DATA_A_ARID(NLW_inst_m_axi_DATA_A_ARID_UNCONNECTED[0]),
        .m_axi_DATA_A_ARLEN(m_axi_DATA_A_ARLEN),
        .m_axi_DATA_A_ARLOCK(m_axi_DATA_A_ARLOCK),
        .m_axi_DATA_A_ARPROT(m_axi_DATA_A_ARPROT),
        .m_axi_DATA_A_ARQOS(m_axi_DATA_A_ARQOS),
        .m_axi_DATA_A_ARREADY(m_axi_DATA_A_ARREADY),
        .m_axi_DATA_A_ARREGION(m_axi_DATA_A_ARREGION),
        .m_axi_DATA_A_ARSIZE(m_axi_DATA_A_ARSIZE),
        .m_axi_DATA_A_ARUSER(NLW_inst_m_axi_DATA_A_ARUSER_UNCONNECTED[0]),
        .m_axi_DATA_A_ARVALID(m_axi_DATA_A_ARVALID),
        .m_axi_DATA_A_AWADDR(m_axi_DATA_A_AWADDR),
        .m_axi_DATA_A_AWBURST(m_axi_DATA_A_AWBURST),
        .m_axi_DATA_A_AWCACHE(m_axi_DATA_A_AWCACHE),
        .m_axi_DATA_A_AWID(NLW_inst_m_axi_DATA_A_AWID_UNCONNECTED[0]),
        .m_axi_DATA_A_AWLEN(m_axi_DATA_A_AWLEN),
        .m_axi_DATA_A_AWLOCK(m_axi_DATA_A_AWLOCK),
        .m_axi_DATA_A_AWPROT(m_axi_DATA_A_AWPROT),
        .m_axi_DATA_A_AWQOS(m_axi_DATA_A_AWQOS),
        .m_axi_DATA_A_AWREADY(m_axi_DATA_A_AWREADY),
        .m_axi_DATA_A_AWREGION(m_axi_DATA_A_AWREGION),
        .m_axi_DATA_A_AWSIZE(m_axi_DATA_A_AWSIZE),
        .m_axi_DATA_A_AWUSER(NLW_inst_m_axi_DATA_A_AWUSER_UNCONNECTED[0]),
        .m_axi_DATA_A_AWVALID(m_axi_DATA_A_AWVALID),
        .m_axi_DATA_A_BID(1'b0),
        .m_axi_DATA_A_BREADY(m_axi_DATA_A_BREADY),
        .m_axi_DATA_A_BRESP(m_axi_DATA_A_BRESP),
        .m_axi_DATA_A_BUSER(1'b0),
        .m_axi_DATA_A_BVALID(m_axi_DATA_A_BVALID),
        .m_axi_DATA_A_RDATA(m_axi_DATA_A_RDATA),
        .m_axi_DATA_A_RID(1'b0),
        .m_axi_DATA_A_RLAST(m_axi_DATA_A_RLAST),
        .m_axi_DATA_A_RREADY(m_axi_DATA_A_RREADY),
        .m_axi_DATA_A_RRESP(m_axi_DATA_A_RRESP),
        .m_axi_DATA_A_RUSER(1'b0),
        .m_axi_DATA_A_RVALID(m_axi_DATA_A_RVALID),
        .m_axi_DATA_A_WDATA(m_axi_DATA_A_WDATA),
        .m_axi_DATA_A_WID(NLW_inst_m_axi_DATA_A_WID_UNCONNECTED[0]),
        .m_axi_DATA_A_WLAST(m_axi_DATA_A_WLAST),
        .m_axi_DATA_A_WREADY(m_axi_DATA_A_WREADY),
        .m_axi_DATA_A_WSTRB(m_axi_DATA_A_WSTRB),
        .m_axi_DATA_A_WUSER(NLW_inst_m_axi_DATA_A_WUSER_UNCONNECTED[0]),
        .m_axi_DATA_A_WVALID(m_axi_DATA_A_WVALID),
        .m_axi_DATA_B_ARADDR(m_axi_DATA_B_ARADDR),
        .m_axi_DATA_B_ARBURST(m_axi_DATA_B_ARBURST),
        .m_axi_DATA_B_ARCACHE(m_axi_DATA_B_ARCACHE),
        .m_axi_DATA_B_ARID(NLW_inst_m_axi_DATA_B_ARID_UNCONNECTED[0]),
        .m_axi_DATA_B_ARLEN(m_axi_DATA_B_ARLEN),
        .m_axi_DATA_B_ARLOCK(m_axi_DATA_B_ARLOCK),
        .m_axi_DATA_B_ARPROT(m_axi_DATA_B_ARPROT),
        .m_axi_DATA_B_ARQOS(m_axi_DATA_B_ARQOS),
        .m_axi_DATA_B_ARREADY(m_axi_DATA_B_ARREADY),
        .m_axi_DATA_B_ARREGION(m_axi_DATA_B_ARREGION),
        .m_axi_DATA_B_ARSIZE(m_axi_DATA_B_ARSIZE),
        .m_axi_DATA_B_ARUSER(NLW_inst_m_axi_DATA_B_ARUSER_UNCONNECTED[0]),
        .m_axi_DATA_B_ARVALID(m_axi_DATA_B_ARVALID),
        .m_axi_DATA_B_AWADDR(m_axi_DATA_B_AWADDR),
        .m_axi_DATA_B_AWBURST(m_axi_DATA_B_AWBURST),
        .m_axi_DATA_B_AWCACHE(m_axi_DATA_B_AWCACHE),
        .m_axi_DATA_B_AWID(NLW_inst_m_axi_DATA_B_AWID_UNCONNECTED[0]),
        .m_axi_DATA_B_AWLEN(m_axi_DATA_B_AWLEN),
        .m_axi_DATA_B_AWLOCK(m_axi_DATA_B_AWLOCK),
        .m_axi_DATA_B_AWPROT(m_axi_DATA_B_AWPROT),
        .m_axi_DATA_B_AWQOS(m_axi_DATA_B_AWQOS),
        .m_axi_DATA_B_AWREADY(m_axi_DATA_B_AWREADY),
        .m_axi_DATA_B_AWREGION(m_axi_DATA_B_AWREGION),
        .m_axi_DATA_B_AWSIZE(m_axi_DATA_B_AWSIZE),
        .m_axi_DATA_B_AWUSER(NLW_inst_m_axi_DATA_B_AWUSER_UNCONNECTED[0]),
        .m_axi_DATA_B_AWVALID(m_axi_DATA_B_AWVALID),
        .m_axi_DATA_B_BID(1'b0),
        .m_axi_DATA_B_BREADY(m_axi_DATA_B_BREADY),
        .m_axi_DATA_B_BRESP(m_axi_DATA_B_BRESP),
        .m_axi_DATA_B_BUSER(1'b0),
        .m_axi_DATA_B_BVALID(m_axi_DATA_B_BVALID),
        .m_axi_DATA_B_RDATA(m_axi_DATA_B_RDATA),
        .m_axi_DATA_B_RID(1'b0),
        .m_axi_DATA_B_RLAST(m_axi_DATA_B_RLAST),
        .m_axi_DATA_B_RREADY(m_axi_DATA_B_RREADY),
        .m_axi_DATA_B_RRESP(m_axi_DATA_B_RRESP),
        .m_axi_DATA_B_RUSER(1'b0),
        .m_axi_DATA_B_RVALID(m_axi_DATA_B_RVALID),
        .m_axi_DATA_B_WDATA(m_axi_DATA_B_WDATA),
        .m_axi_DATA_B_WID(NLW_inst_m_axi_DATA_B_WID_UNCONNECTED[0]),
        .m_axi_DATA_B_WLAST(m_axi_DATA_B_WLAST),
        .m_axi_DATA_B_WREADY(m_axi_DATA_B_WREADY),
        .m_axi_DATA_B_WSTRB(m_axi_DATA_B_WSTRB),
        .m_axi_DATA_B_WUSER(NLW_inst_m_axi_DATA_B_WUSER_UNCONNECTED[0]),
        .m_axi_DATA_B_WVALID(m_axi_DATA_B_WVALID),
        .m_axi_DATA_C_ARADDR(m_axi_DATA_C_ARADDR),
        .m_axi_DATA_C_ARBURST(m_axi_DATA_C_ARBURST),
        .m_axi_DATA_C_ARCACHE(m_axi_DATA_C_ARCACHE),
        .m_axi_DATA_C_ARID(NLW_inst_m_axi_DATA_C_ARID_UNCONNECTED[0]),
        .m_axi_DATA_C_ARLEN(m_axi_DATA_C_ARLEN),
        .m_axi_DATA_C_ARLOCK(m_axi_DATA_C_ARLOCK),
        .m_axi_DATA_C_ARPROT(m_axi_DATA_C_ARPROT),
        .m_axi_DATA_C_ARQOS(m_axi_DATA_C_ARQOS),
        .m_axi_DATA_C_ARREADY(m_axi_DATA_C_ARREADY),
        .m_axi_DATA_C_ARREGION(m_axi_DATA_C_ARREGION),
        .m_axi_DATA_C_ARSIZE(m_axi_DATA_C_ARSIZE),
        .m_axi_DATA_C_ARUSER(NLW_inst_m_axi_DATA_C_ARUSER_UNCONNECTED[0]),
        .m_axi_DATA_C_ARVALID(m_axi_DATA_C_ARVALID),
        .m_axi_DATA_C_AWADDR(m_axi_DATA_C_AWADDR),
        .m_axi_DATA_C_AWBURST(m_axi_DATA_C_AWBURST),
        .m_axi_DATA_C_AWCACHE(m_axi_DATA_C_AWCACHE),
        .m_axi_DATA_C_AWID(NLW_inst_m_axi_DATA_C_AWID_UNCONNECTED[0]),
        .m_axi_DATA_C_AWLEN(m_axi_DATA_C_AWLEN),
        .m_axi_DATA_C_AWLOCK(m_axi_DATA_C_AWLOCK),
        .m_axi_DATA_C_AWPROT(m_axi_DATA_C_AWPROT),
        .m_axi_DATA_C_AWQOS(m_axi_DATA_C_AWQOS),
        .m_axi_DATA_C_AWREADY(m_axi_DATA_C_AWREADY),
        .m_axi_DATA_C_AWREGION(m_axi_DATA_C_AWREGION),
        .m_axi_DATA_C_AWSIZE(m_axi_DATA_C_AWSIZE),
        .m_axi_DATA_C_AWUSER(NLW_inst_m_axi_DATA_C_AWUSER_UNCONNECTED[0]),
        .m_axi_DATA_C_AWVALID(m_axi_DATA_C_AWVALID),
        .m_axi_DATA_C_BID(1'b0),
        .m_axi_DATA_C_BREADY(m_axi_DATA_C_BREADY),
        .m_axi_DATA_C_BRESP(m_axi_DATA_C_BRESP),
        .m_axi_DATA_C_BUSER(1'b0),
        .m_axi_DATA_C_BVALID(m_axi_DATA_C_BVALID),
        .m_axi_DATA_C_RDATA(m_axi_DATA_C_RDATA),
        .m_axi_DATA_C_RID(1'b0),
        .m_axi_DATA_C_RLAST(m_axi_DATA_C_RLAST),
        .m_axi_DATA_C_RREADY(m_axi_DATA_C_RREADY),
        .m_axi_DATA_C_RRESP(m_axi_DATA_C_RRESP),
        .m_axi_DATA_C_RUSER(1'b0),
        .m_axi_DATA_C_RVALID(m_axi_DATA_C_RVALID),
        .m_axi_DATA_C_WDATA(m_axi_DATA_C_WDATA),
        .m_axi_DATA_C_WID(NLW_inst_m_axi_DATA_C_WID_UNCONNECTED[0]),
        .m_axi_DATA_C_WLAST(m_axi_DATA_C_WLAST),
        .m_axi_DATA_C_WREADY(m_axi_DATA_C_WREADY),
        .m_axi_DATA_C_WSTRB(m_axi_DATA_C_WSTRB),
        .m_axi_DATA_C_WUSER(NLW_inst_m_axi_DATA_C_WUSER_UNCONNECTED[0]),
        .m_axi_DATA_C_WVALID(m_axi_DATA_C_WVALID),
        .s_axi_CTL_ARADDR(s_axi_CTL_ARADDR),
        .s_axi_CTL_ARREADY(s_axi_CTL_ARREADY),
        .s_axi_CTL_ARVALID(s_axi_CTL_ARVALID),
        .s_axi_CTL_AWADDR(s_axi_CTL_AWADDR),
        .s_axi_CTL_AWREADY(s_axi_CTL_AWREADY),
        .s_axi_CTL_AWVALID(s_axi_CTL_AWVALID),
        .s_axi_CTL_BREADY(s_axi_CTL_BREADY),
        .s_axi_CTL_BRESP(s_axi_CTL_BRESP),
        .s_axi_CTL_BVALID(s_axi_CTL_BVALID),
        .s_axi_CTL_RDATA(s_axi_CTL_RDATA),
        .s_axi_CTL_RREADY(s_axi_CTL_RREADY),
        .s_axi_CTL_RRESP(s_axi_CTL_RRESP),
        .s_axi_CTL_RVALID(s_axi_CTL_RVALID),
        .s_axi_CTL_WDATA(s_axi_CTL_WDATA),
        .s_axi_CTL_WREADY(s_axi_CTL_WREADY),
        .s_axi_CTL_WSTRB(s_axi_CTL_WSTRB),
        .s_axi_CTL_WVALID(s_axi_CTL_WVALID));
endmodule

(* C_M_AXI_DATA_A_ADDR_WIDTH = "32" *) (* C_M_AXI_DATA_A_ARUSER_WIDTH = "1" *) (* C_M_AXI_DATA_A_AWUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_A_BUSER_WIDTH = "1" *) (* C_M_AXI_DATA_A_CACHE_VALUE = "3" *) (* C_M_AXI_DATA_A_DATA_WIDTH = "32" *) 
(* C_M_AXI_DATA_A_ID_WIDTH = "1" *) (* C_M_AXI_DATA_A_PROT_VALUE = "0" *) (* C_M_AXI_DATA_A_RUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_A_USER_VALUE = "0" *) (* C_M_AXI_DATA_A_WSTRB_WIDTH = "4" *) (* C_M_AXI_DATA_A_WUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_B_ADDR_WIDTH = "32" *) (* C_M_AXI_DATA_B_ARUSER_WIDTH = "1" *) (* C_M_AXI_DATA_B_AWUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_B_BUSER_WIDTH = "1" *) (* C_M_AXI_DATA_B_CACHE_VALUE = "3" *) (* C_M_AXI_DATA_B_DATA_WIDTH = "32" *) 
(* C_M_AXI_DATA_B_ID_WIDTH = "1" *) (* C_M_AXI_DATA_B_PROT_VALUE = "0" *) (* C_M_AXI_DATA_B_RUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_B_USER_VALUE = "0" *) (* C_M_AXI_DATA_B_WSTRB_WIDTH = "4" *) (* C_M_AXI_DATA_B_WUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_C_ADDR_WIDTH = "32" *) (* C_M_AXI_DATA_C_ARUSER_WIDTH = "1" *) (* C_M_AXI_DATA_C_AWUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_C_BUSER_WIDTH = "1" *) (* C_M_AXI_DATA_C_CACHE_VALUE = "3" *) (* C_M_AXI_DATA_C_DATA_WIDTH = "32" *) 
(* C_M_AXI_DATA_C_ID_WIDTH = "1" *) (* C_M_AXI_DATA_C_PROT_VALUE = "0" *) (* C_M_AXI_DATA_C_RUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_C_USER_VALUE = "0" *) (* C_M_AXI_DATA_C_WSTRB_WIDTH = "4" *) (* C_M_AXI_DATA_C_WUSER_WIDTH = "1" *) 
(* C_M_AXI_DATA_WIDTH = "32" *) (* C_M_AXI_WSTRB_WIDTH = "4" *) (* C_S_AXI_CTL_ADDR_WIDTH = "6" *) 
(* C_S_AXI_CTL_DATA_WIDTH = "32" *) (* C_S_AXI_CTL_WSTRB_WIDTH = "4" *) (* C_S_AXI_DATA_WIDTH = "32" *) 
(* C_S_AXI_WSTRB_WIDTH = "4" *) (* ORIG_REF_NAME = "vector_multiplier" *) (* ap_ST_fsm_pp0_stage0 = "14'b00000100000000" *) 
(* ap_ST_fsm_state1 = "14'b00000000000001" *) (* ap_ST_fsm_state14 = "14'b00001000000000" *) (* ap_ST_fsm_state15 = "14'b00010000000000" *) 
(* ap_ST_fsm_state16 = "14'b00100000000000" *) (* ap_ST_fsm_state17 = "14'b01000000000000" *) (* ap_ST_fsm_state18 = "14'b10000000000000" *) 
(* ap_ST_fsm_state2 = "14'b00000000000010" *) (* ap_ST_fsm_state3 = "14'b00000000000100" *) (* ap_ST_fsm_state4 = "14'b00000000001000" *) 
(* ap_ST_fsm_state5 = "14'b00000000010000" *) (* ap_ST_fsm_state6 = "14'b00000000100000" *) (* ap_ST_fsm_state7 = "14'b00000001000000" *) 
(* ap_ST_fsm_state8 = "14'b00000010000000" *) (* hls_module = "yes" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier
   (ap_clk,
    ap_rst_n,
    m_axi_DATA_A_AWVALID,
    m_axi_DATA_A_AWREADY,
    m_axi_DATA_A_AWADDR,
    m_axi_DATA_A_AWID,
    m_axi_DATA_A_AWLEN,
    m_axi_DATA_A_AWSIZE,
    m_axi_DATA_A_AWBURST,
    m_axi_DATA_A_AWLOCK,
    m_axi_DATA_A_AWCACHE,
    m_axi_DATA_A_AWPROT,
    m_axi_DATA_A_AWQOS,
    m_axi_DATA_A_AWREGION,
    m_axi_DATA_A_AWUSER,
    m_axi_DATA_A_WVALID,
    m_axi_DATA_A_WREADY,
    m_axi_DATA_A_WDATA,
    m_axi_DATA_A_WSTRB,
    m_axi_DATA_A_WLAST,
    m_axi_DATA_A_WID,
    m_axi_DATA_A_WUSER,
    m_axi_DATA_A_ARVALID,
    m_axi_DATA_A_ARREADY,
    m_axi_DATA_A_ARADDR,
    m_axi_DATA_A_ARID,
    m_axi_DATA_A_ARLEN,
    m_axi_DATA_A_ARSIZE,
    m_axi_DATA_A_ARBURST,
    m_axi_DATA_A_ARLOCK,
    m_axi_DATA_A_ARCACHE,
    m_axi_DATA_A_ARPROT,
    m_axi_DATA_A_ARQOS,
    m_axi_DATA_A_ARREGION,
    m_axi_DATA_A_ARUSER,
    m_axi_DATA_A_RVALID,
    m_axi_DATA_A_RREADY,
    m_axi_DATA_A_RDATA,
    m_axi_DATA_A_RLAST,
    m_axi_DATA_A_RID,
    m_axi_DATA_A_RUSER,
    m_axi_DATA_A_RRESP,
    m_axi_DATA_A_BVALID,
    m_axi_DATA_A_BREADY,
    m_axi_DATA_A_BRESP,
    m_axi_DATA_A_BID,
    m_axi_DATA_A_BUSER,
    m_axi_DATA_B_AWVALID,
    m_axi_DATA_B_AWREADY,
    m_axi_DATA_B_AWADDR,
    m_axi_DATA_B_AWID,
    m_axi_DATA_B_AWLEN,
    m_axi_DATA_B_AWSIZE,
    m_axi_DATA_B_AWBURST,
    m_axi_DATA_B_AWLOCK,
    m_axi_DATA_B_AWCACHE,
    m_axi_DATA_B_AWPROT,
    m_axi_DATA_B_AWQOS,
    m_axi_DATA_B_AWREGION,
    m_axi_DATA_B_AWUSER,
    m_axi_DATA_B_WVALID,
    m_axi_DATA_B_WREADY,
    m_axi_DATA_B_WDATA,
    m_axi_DATA_B_WSTRB,
    m_axi_DATA_B_WLAST,
    m_axi_DATA_B_WID,
    m_axi_DATA_B_WUSER,
    m_axi_DATA_B_ARVALID,
    m_axi_DATA_B_ARREADY,
    m_axi_DATA_B_ARADDR,
    m_axi_DATA_B_ARID,
    m_axi_DATA_B_ARLEN,
    m_axi_DATA_B_ARSIZE,
    m_axi_DATA_B_ARBURST,
    m_axi_DATA_B_ARLOCK,
    m_axi_DATA_B_ARCACHE,
    m_axi_DATA_B_ARPROT,
    m_axi_DATA_B_ARQOS,
    m_axi_DATA_B_ARREGION,
    m_axi_DATA_B_ARUSER,
    m_axi_DATA_B_RVALID,
    m_axi_DATA_B_RREADY,
    m_axi_DATA_B_RDATA,
    m_axi_DATA_B_RLAST,
    m_axi_DATA_B_RID,
    m_axi_DATA_B_RUSER,
    m_axi_DATA_B_RRESP,
    m_axi_DATA_B_BVALID,
    m_axi_DATA_B_BREADY,
    m_axi_DATA_B_BRESP,
    m_axi_DATA_B_BID,
    m_axi_DATA_B_BUSER,
    m_axi_DATA_C_AWVALID,
    m_axi_DATA_C_AWREADY,
    m_axi_DATA_C_AWADDR,
    m_axi_DATA_C_AWID,
    m_axi_DATA_C_AWLEN,
    m_axi_DATA_C_AWSIZE,
    m_axi_DATA_C_AWBURST,
    m_axi_DATA_C_AWLOCK,
    m_axi_DATA_C_AWCACHE,
    m_axi_DATA_C_AWPROT,
    m_axi_DATA_C_AWQOS,
    m_axi_DATA_C_AWREGION,
    m_axi_DATA_C_AWUSER,
    m_axi_DATA_C_WVALID,
    m_axi_DATA_C_WREADY,
    m_axi_DATA_C_WDATA,
    m_axi_DATA_C_WSTRB,
    m_axi_DATA_C_WLAST,
    m_axi_DATA_C_WID,
    m_axi_DATA_C_WUSER,
    m_axi_DATA_C_ARVALID,
    m_axi_DATA_C_ARREADY,
    m_axi_DATA_C_ARADDR,
    m_axi_DATA_C_ARID,
    m_axi_DATA_C_ARLEN,
    m_axi_DATA_C_ARSIZE,
    m_axi_DATA_C_ARBURST,
    m_axi_DATA_C_ARLOCK,
    m_axi_DATA_C_ARCACHE,
    m_axi_DATA_C_ARPROT,
    m_axi_DATA_C_ARQOS,
    m_axi_DATA_C_ARREGION,
    m_axi_DATA_C_ARUSER,
    m_axi_DATA_C_RVALID,
    m_axi_DATA_C_RREADY,
    m_axi_DATA_C_RDATA,
    m_axi_DATA_C_RLAST,
    m_axi_DATA_C_RID,
    m_axi_DATA_C_RUSER,
    m_axi_DATA_C_RRESP,
    m_axi_DATA_C_BVALID,
    m_axi_DATA_C_BREADY,
    m_axi_DATA_C_BRESP,
    m_axi_DATA_C_BID,
    m_axi_DATA_C_BUSER,
    s_axi_CTL_AWVALID,
    s_axi_CTL_AWREADY,
    s_axi_CTL_AWADDR,
    s_axi_CTL_WVALID,
    s_axi_CTL_WREADY,
    s_axi_CTL_WDATA,
    s_axi_CTL_WSTRB,
    s_axi_CTL_ARVALID,
    s_axi_CTL_ARREADY,
    s_axi_CTL_ARADDR,
    s_axi_CTL_RVALID,
    s_axi_CTL_RREADY,
    s_axi_CTL_RDATA,
    s_axi_CTL_RRESP,
    s_axi_CTL_BVALID,
    s_axi_CTL_BREADY,
    s_axi_CTL_BRESP,
    interrupt);
  input ap_clk;
  input ap_rst_n;
  output m_axi_DATA_A_AWVALID;
  input m_axi_DATA_A_AWREADY;
  output [31:0]m_axi_DATA_A_AWADDR;
  output [0:0]m_axi_DATA_A_AWID;
  output [7:0]m_axi_DATA_A_AWLEN;
  output [2:0]m_axi_DATA_A_AWSIZE;
  output [1:0]m_axi_DATA_A_AWBURST;
  output [1:0]m_axi_DATA_A_AWLOCK;
  output [3:0]m_axi_DATA_A_AWCACHE;
  output [2:0]m_axi_DATA_A_AWPROT;
  output [3:0]m_axi_DATA_A_AWQOS;
  output [3:0]m_axi_DATA_A_AWREGION;
  output [0:0]m_axi_DATA_A_AWUSER;
  output m_axi_DATA_A_WVALID;
  input m_axi_DATA_A_WREADY;
  output [31:0]m_axi_DATA_A_WDATA;
  output [3:0]m_axi_DATA_A_WSTRB;
  output m_axi_DATA_A_WLAST;
  output [0:0]m_axi_DATA_A_WID;
  output [0:0]m_axi_DATA_A_WUSER;
  output m_axi_DATA_A_ARVALID;
  input m_axi_DATA_A_ARREADY;
  output [31:0]m_axi_DATA_A_ARADDR;
  output [0:0]m_axi_DATA_A_ARID;
  output [7:0]m_axi_DATA_A_ARLEN;
  output [2:0]m_axi_DATA_A_ARSIZE;
  output [1:0]m_axi_DATA_A_ARBURST;
  output [1:0]m_axi_DATA_A_ARLOCK;
  output [3:0]m_axi_DATA_A_ARCACHE;
  output [2:0]m_axi_DATA_A_ARPROT;
  output [3:0]m_axi_DATA_A_ARQOS;
  output [3:0]m_axi_DATA_A_ARREGION;
  output [0:0]m_axi_DATA_A_ARUSER;
  input m_axi_DATA_A_RVALID;
  output m_axi_DATA_A_RREADY;
  input [31:0]m_axi_DATA_A_RDATA;
  input m_axi_DATA_A_RLAST;
  input [0:0]m_axi_DATA_A_RID;
  input [0:0]m_axi_DATA_A_RUSER;
  input [1:0]m_axi_DATA_A_RRESP;
  input m_axi_DATA_A_BVALID;
  output m_axi_DATA_A_BREADY;
  input [1:0]m_axi_DATA_A_BRESP;
  input [0:0]m_axi_DATA_A_BID;
  input [0:0]m_axi_DATA_A_BUSER;
  output m_axi_DATA_B_AWVALID;
  input m_axi_DATA_B_AWREADY;
  output [31:0]m_axi_DATA_B_AWADDR;
  output [0:0]m_axi_DATA_B_AWID;
  output [7:0]m_axi_DATA_B_AWLEN;
  output [2:0]m_axi_DATA_B_AWSIZE;
  output [1:0]m_axi_DATA_B_AWBURST;
  output [1:0]m_axi_DATA_B_AWLOCK;
  output [3:0]m_axi_DATA_B_AWCACHE;
  output [2:0]m_axi_DATA_B_AWPROT;
  output [3:0]m_axi_DATA_B_AWQOS;
  output [3:0]m_axi_DATA_B_AWREGION;
  output [0:0]m_axi_DATA_B_AWUSER;
  output m_axi_DATA_B_WVALID;
  input m_axi_DATA_B_WREADY;
  output [31:0]m_axi_DATA_B_WDATA;
  output [3:0]m_axi_DATA_B_WSTRB;
  output m_axi_DATA_B_WLAST;
  output [0:0]m_axi_DATA_B_WID;
  output [0:0]m_axi_DATA_B_WUSER;
  output m_axi_DATA_B_ARVALID;
  input m_axi_DATA_B_ARREADY;
  output [31:0]m_axi_DATA_B_ARADDR;
  output [0:0]m_axi_DATA_B_ARID;
  output [7:0]m_axi_DATA_B_ARLEN;
  output [2:0]m_axi_DATA_B_ARSIZE;
  output [1:0]m_axi_DATA_B_ARBURST;
  output [1:0]m_axi_DATA_B_ARLOCK;
  output [3:0]m_axi_DATA_B_ARCACHE;
  output [2:0]m_axi_DATA_B_ARPROT;
  output [3:0]m_axi_DATA_B_ARQOS;
  output [3:0]m_axi_DATA_B_ARREGION;
  output [0:0]m_axi_DATA_B_ARUSER;
  input m_axi_DATA_B_RVALID;
  output m_axi_DATA_B_RREADY;
  input [31:0]m_axi_DATA_B_RDATA;
  input m_axi_DATA_B_RLAST;
  input [0:0]m_axi_DATA_B_RID;
  input [0:0]m_axi_DATA_B_RUSER;
  input [1:0]m_axi_DATA_B_RRESP;
  input m_axi_DATA_B_BVALID;
  output m_axi_DATA_B_BREADY;
  input [1:0]m_axi_DATA_B_BRESP;
  input [0:0]m_axi_DATA_B_BID;
  input [0:0]m_axi_DATA_B_BUSER;
  output m_axi_DATA_C_AWVALID;
  input m_axi_DATA_C_AWREADY;
  output [31:0]m_axi_DATA_C_AWADDR;
  output [0:0]m_axi_DATA_C_AWID;
  output [7:0]m_axi_DATA_C_AWLEN;
  output [2:0]m_axi_DATA_C_AWSIZE;
  output [1:0]m_axi_DATA_C_AWBURST;
  output [1:0]m_axi_DATA_C_AWLOCK;
  output [3:0]m_axi_DATA_C_AWCACHE;
  output [2:0]m_axi_DATA_C_AWPROT;
  output [3:0]m_axi_DATA_C_AWQOS;
  output [3:0]m_axi_DATA_C_AWREGION;
  output [0:0]m_axi_DATA_C_AWUSER;
  output m_axi_DATA_C_WVALID;
  input m_axi_DATA_C_WREADY;
  output [31:0]m_axi_DATA_C_WDATA;
  output [3:0]m_axi_DATA_C_WSTRB;
  output m_axi_DATA_C_WLAST;
  output [0:0]m_axi_DATA_C_WID;
  output [0:0]m_axi_DATA_C_WUSER;
  output m_axi_DATA_C_ARVALID;
  input m_axi_DATA_C_ARREADY;
  output [31:0]m_axi_DATA_C_ARADDR;
  output [0:0]m_axi_DATA_C_ARID;
  output [7:0]m_axi_DATA_C_ARLEN;
  output [2:0]m_axi_DATA_C_ARSIZE;
  output [1:0]m_axi_DATA_C_ARBURST;
  output [1:0]m_axi_DATA_C_ARLOCK;
  output [3:0]m_axi_DATA_C_ARCACHE;
  output [2:0]m_axi_DATA_C_ARPROT;
  output [3:0]m_axi_DATA_C_ARQOS;
  output [3:0]m_axi_DATA_C_ARREGION;
  output [0:0]m_axi_DATA_C_ARUSER;
  input m_axi_DATA_C_RVALID;
  output m_axi_DATA_C_RREADY;
  input [31:0]m_axi_DATA_C_RDATA;
  input m_axi_DATA_C_RLAST;
  input [0:0]m_axi_DATA_C_RID;
  input [0:0]m_axi_DATA_C_RUSER;
  input [1:0]m_axi_DATA_C_RRESP;
  input m_axi_DATA_C_BVALID;
  output m_axi_DATA_C_BREADY;
  input [1:0]m_axi_DATA_C_BRESP;
  input [0:0]m_axi_DATA_C_BID;
  input [0:0]m_axi_DATA_C_BUSER;
  input s_axi_CTL_AWVALID;
  output s_axi_CTL_AWREADY;
  input [5:0]s_axi_CTL_AWADDR;
  input s_axi_CTL_WVALID;
  output s_axi_CTL_WREADY;
  input [31:0]s_axi_CTL_WDATA;
  input [3:0]s_axi_CTL_WSTRB;
  input s_axi_CTL_ARVALID;
  output s_axi_CTL_ARREADY;
  input [5:0]s_axi_CTL_ARADDR;
  output s_axi_CTL_RVALID;
  input s_axi_CTL_RREADY;
  output [31:0]s_axi_CTL_RDATA;
  output [1:0]s_axi_CTL_RRESP;
  output s_axi_CTL_BVALID;
  input s_axi_CTL_BREADY;
  output [1:0]s_axi_CTL_BRESP;
  output interrupt;

  wire \<const0> ;
  wire \<const1> ;
  wire DATA_A_ARREADY;
  wire [31:0]DATA_A_RDATA;
  wire DATA_A_RREADY;
  wire [31:0]DATA_A_addr_read_reg_277;
  wire DATA_B_ARREADY;
  wire [31:0]DATA_B_RDATA;
  wire DATA_B_RVALID;
  wire [31:0]DATA_B_addr_read_reg_282;
  wire DATA_C_AWREADY;
  wire DATA_C_BREADY;
  wire DATA_C_BVALID;
  wire DATA_C_WREADY;
  wire DATA_C_WVALID;
  wire [31:2]a;
  wire [29:0]a1_reg_246;
  wire \ap_CS_fsm[1]_i_2_n_2 ;
  wire \ap_CS_fsm[1]_i_4_n_2 ;
  wire \ap_CS_fsm[1]_i_5_n_2 ;
  wire ap_CS_fsm_pp0_stage0;
  wire \ap_CS_fsm_reg_n_2_[0] ;
  wire \ap_CS_fsm_reg_n_2_[10] ;
  wire \ap_CS_fsm_reg_n_2_[11] ;
  wire \ap_CS_fsm_reg_n_2_[12] ;
  wire \ap_CS_fsm_reg_n_2_[2] ;
  wire \ap_CS_fsm_reg_n_2_[3] ;
  wire \ap_CS_fsm_reg_n_2_[4] ;
  wire \ap_CS_fsm_reg_n_2_[5] ;
  wire \ap_CS_fsm_reg_n_2_[6] ;
  wire \ap_CS_fsm_reg_n_2_[9] ;
  wire ap_CS_fsm_state18;
  wire ap_CS_fsm_state2;
  wire ap_CS_fsm_state8;
  wire [13:0]ap_NS_fsm;
  wire ap_NS_fsm118_out;
  wire ap_block_pp0_stage0_flag00011011;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter1_reg_n_2;
  wire ap_enable_reg_pp0_iter2;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter4_reg_n_2;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg_n_2;
  wire ap_reg_ioackin_DATA_C_WREADY_reg_n_2;
  wire ap_reg_pp0_iter1_exitcond_reg_268;
  wire ap_reg_pp0_iter2_exitcond_reg_268;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire ap_rst_n;
  wire ap_rst_n_inv;
  wire [31:2]b;
  wire [29:0]b3_reg_241;
  wire [31:2]c;
  wire [29:0]c5_reg_236;
  wire exitcond_fu_220_p2;
  wire \exitcond_reg_268[0]_i_4_n_2 ;
  wire \exitcond_reg_268_reg_n_2_[0] ;
  wire [6:0]i_1_fu_226_p2;
  wire i_reg_1490;
  wire \i_reg_149[6]_i_4_n_2 ;
  wire [6:0]i_reg_149_reg__0;
  wire interrupt;
  wire [31:2]\^m_axi_DATA_A_ARADDR ;
  wire [3:0]\^m_axi_DATA_A_ARLEN ;
  wire m_axi_DATA_A_ARREADY;
  wire m_axi_DATA_A_ARVALID;
  wire [31:0]m_axi_DATA_A_RDATA;
  wire m_axi_DATA_A_RLAST;
  wire m_axi_DATA_A_RREADY;
  wire [1:0]m_axi_DATA_A_RRESP;
  wire m_axi_DATA_A_RVALID;
  wire [31:2]\^m_axi_DATA_B_ARADDR ;
  wire [3:0]\^m_axi_DATA_B_ARLEN ;
  wire m_axi_DATA_B_ARREADY;
  wire m_axi_DATA_B_ARVALID;
  wire [31:0]m_axi_DATA_B_RDATA;
  wire m_axi_DATA_B_RLAST;
  wire m_axi_DATA_B_RREADY;
  wire [1:0]m_axi_DATA_B_RRESP;
  wire m_axi_DATA_B_RVALID;
  wire [31:2]\^m_axi_DATA_C_AWADDR ;
  wire [3:0]\^m_axi_DATA_C_AWLEN ;
  wire m_axi_DATA_C_AWREADY;
  wire m_axi_DATA_C_AWVALID;
  wire m_axi_DATA_C_BREADY;
  wire m_axi_DATA_C_BVALID;
  wire m_axi_DATA_C_RREADY;
  wire m_axi_DATA_C_RVALID;
  wire [31:0]m_axi_DATA_C_WDATA;
  wire m_axi_DATA_C_WLAST;
  wire m_axi_DATA_C_WREADY;
  wire [3:0]m_axi_DATA_C_WSTRB;
  wire m_axi_DATA_C_WVALID;
  wire [3:3]rdata;
  wire [5:0]s_axi_CTL_ARADDR;
  wire s_axi_CTL_ARREADY;
  wire s_axi_CTL_ARVALID;
  wire [5:0]s_axi_CTL_AWADDR;
  wire s_axi_CTL_AWREADY;
  wire s_axi_CTL_AWVALID;
  wire s_axi_CTL_BREADY;
  wire s_axi_CTL_BVALID;
  wire [31:0]s_axi_CTL_RDATA;
  wire s_axi_CTL_RREADY;
  wire s_axi_CTL_RVALID;
  wire [31:0]s_axi_CTL_WDATA;
  wire s_axi_CTL_WREADY;
  wire [3:0]s_axi_CTL_WSTRB;
  wire s_axi_CTL_WVALID;
  wire [31:0]tmp_reg_287;
  wire vector_multiplier_CTL_s_axi_U_n_101;
  wire vector_multiplier_DATA_A_m_axi_U_n_12;
  wire vector_multiplier_DATA_A_m_axi_U_n_13;
  wire vector_multiplier_DATA_A_m_axi_U_n_14;
  wire vector_multiplier_DATA_A_m_axi_U_n_15;
  wire vector_multiplier_DATA_A_m_axi_U_n_16;
  wire vector_multiplier_DATA_A_m_axi_U_n_17;
  wire vector_multiplier_DATA_A_m_axi_U_n_18;
  wire vector_multiplier_DATA_A_m_axi_U_n_5;
  wire vector_multiplier_DATA_A_m_axi_U_n_53;
  wire vector_multiplier_DATA_A_m_axi_U_n_55;
  wire vector_multiplier_DATA_A_m_axi_U_n_8;
  wire vector_multiplier_DATA_B_m_axi_U_n_3;
  wire vector_multiplier_DATA_B_m_axi_U_n_5;
  wire vector_multiplier_DATA_B_m_axi_U_n_6;
  wire vector_multiplier_DATA_C_m_axi_U_n_12;
  wire vector_multiplier_DATA_C_m_axi_U_n_13;
  wire vector_multiplier_DATA_C_m_axi_U_n_48;
  wire [31:16]\vector_multiplierbkb_MulnS_0_U/p_reg ;
  wire vector_multiplierbkb_U0_n_18;
  wire vector_multiplierbkb_U0_n_19;
  wire vector_multiplierbkb_U0_n_20;
  wire vector_multiplierbkb_U0_n_21;
  wire vector_multiplierbkb_U0_n_22;
  wire vector_multiplierbkb_U0_n_23;
  wire vector_multiplierbkb_U0_n_24;
  wire vector_multiplierbkb_U0_n_25;
  wire vector_multiplierbkb_U0_n_26;
  wire vector_multiplierbkb_U0_n_27;
  wire vector_multiplierbkb_U0_n_28;
  wire vector_multiplierbkb_U0_n_29;
  wire vector_multiplierbkb_U0_n_30;
  wire vector_multiplierbkb_U0_n_31;
  wire vector_multiplierbkb_U0_n_32;
  wire vector_multiplierbkb_U0_n_33;

  assign m_axi_DATA_A_ARADDR[31:2] = \^m_axi_DATA_A_ARADDR [31:2];
  assign m_axi_DATA_A_ARADDR[1] = \<const0> ;
  assign m_axi_DATA_A_ARADDR[0] = \<const0> ;
  assign m_axi_DATA_A_ARBURST[1] = \<const0> ;
  assign m_axi_DATA_A_ARBURST[0] = \<const1> ;
  assign m_axi_DATA_A_ARCACHE[3] = \<const0> ;
  assign m_axi_DATA_A_ARCACHE[2] = \<const0> ;
  assign m_axi_DATA_A_ARCACHE[1] = \<const1> ;
  assign m_axi_DATA_A_ARCACHE[0] = \<const1> ;
  assign m_axi_DATA_A_ARID[0] = \<const0> ;
  assign m_axi_DATA_A_ARLEN[7] = \<const0> ;
  assign m_axi_DATA_A_ARLEN[6] = \<const0> ;
  assign m_axi_DATA_A_ARLEN[5] = \<const0> ;
  assign m_axi_DATA_A_ARLEN[4] = \<const0> ;
  assign m_axi_DATA_A_ARLEN[3:0] = \^m_axi_DATA_A_ARLEN [3:0];
  assign m_axi_DATA_A_ARLOCK[1] = \<const0> ;
  assign m_axi_DATA_A_ARLOCK[0] = \<const0> ;
  assign m_axi_DATA_A_ARPROT[2] = \<const0> ;
  assign m_axi_DATA_A_ARPROT[1] = \<const0> ;
  assign m_axi_DATA_A_ARPROT[0] = \<const0> ;
  assign m_axi_DATA_A_ARQOS[3] = \<const0> ;
  assign m_axi_DATA_A_ARQOS[2] = \<const0> ;
  assign m_axi_DATA_A_ARQOS[1] = \<const0> ;
  assign m_axi_DATA_A_ARQOS[0] = \<const0> ;
  assign m_axi_DATA_A_ARREGION[3] = \<const0> ;
  assign m_axi_DATA_A_ARREGION[2] = \<const0> ;
  assign m_axi_DATA_A_ARREGION[1] = \<const0> ;
  assign m_axi_DATA_A_ARREGION[0] = \<const0> ;
  assign m_axi_DATA_A_ARSIZE[2] = \<const0> ;
  assign m_axi_DATA_A_ARSIZE[1] = \<const1> ;
  assign m_axi_DATA_A_ARSIZE[0] = \<const0> ;
  assign m_axi_DATA_A_ARUSER[0] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[31] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[30] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[29] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[28] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[27] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[26] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[25] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[24] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[23] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[22] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[21] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[20] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[19] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[18] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[17] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[16] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[15] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[14] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[13] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[12] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[11] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[10] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[9] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[8] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[7] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[6] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[5] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[4] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[3] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[2] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[1] = \<const0> ;
  assign m_axi_DATA_A_AWADDR[0] = \<const0> ;
  assign m_axi_DATA_A_AWBURST[1] = \<const0> ;
  assign m_axi_DATA_A_AWBURST[0] = \<const1> ;
  assign m_axi_DATA_A_AWCACHE[3] = \<const0> ;
  assign m_axi_DATA_A_AWCACHE[2] = \<const0> ;
  assign m_axi_DATA_A_AWCACHE[1] = \<const1> ;
  assign m_axi_DATA_A_AWCACHE[0] = \<const1> ;
  assign m_axi_DATA_A_AWID[0] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[7] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[6] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[5] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[4] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[3] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[2] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[1] = \<const0> ;
  assign m_axi_DATA_A_AWLEN[0] = \<const0> ;
  assign m_axi_DATA_A_AWLOCK[1] = \<const0> ;
  assign m_axi_DATA_A_AWLOCK[0] = \<const0> ;
  assign m_axi_DATA_A_AWPROT[2] = \<const0> ;
  assign m_axi_DATA_A_AWPROT[1] = \<const0> ;
  assign m_axi_DATA_A_AWPROT[0] = \<const0> ;
  assign m_axi_DATA_A_AWQOS[3] = \<const0> ;
  assign m_axi_DATA_A_AWQOS[2] = \<const0> ;
  assign m_axi_DATA_A_AWQOS[1] = \<const0> ;
  assign m_axi_DATA_A_AWQOS[0] = \<const0> ;
  assign m_axi_DATA_A_AWREGION[3] = \<const0> ;
  assign m_axi_DATA_A_AWREGION[2] = \<const0> ;
  assign m_axi_DATA_A_AWREGION[1] = \<const0> ;
  assign m_axi_DATA_A_AWREGION[0] = \<const0> ;
  assign m_axi_DATA_A_AWSIZE[2] = \<const0> ;
  assign m_axi_DATA_A_AWSIZE[1] = \<const1> ;
  assign m_axi_DATA_A_AWSIZE[0] = \<const0> ;
  assign m_axi_DATA_A_AWUSER[0] = \<const0> ;
  assign m_axi_DATA_A_AWVALID = \<const0> ;
  assign m_axi_DATA_A_BREADY = \<const1> ;
  assign m_axi_DATA_A_WDATA[31] = \<const0> ;
  assign m_axi_DATA_A_WDATA[30] = \<const0> ;
  assign m_axi_DATA_A_WDATA[29] = \<const0> ;
  assign m_axi_DATA_A_WDATA[28] = \<const0> ;
  assign m_axi_DATA_A_WDATA[27] = \<const0> ;
  assign m_axi_DATA_A_WDATA[26] = \<const0> ;
  assign m_axi_DATA_A_WDATA[25] = \<const0> ;
  assign m_axi_DATA_A_WDATA[24] = \<const0> ;
  assign m_axi_DATA_A_WDATA[23] = \<const0> ;
  assign m_axi_DATA_A_WDATA[22] = \<const0> ;
  assign m_axi_DATA_A_WDATA[21] = \<const0> ;
  assign m_axi_DATA_A_WDATA[20] = \<const0> ;
  assign m_axi_DATA_A_WDATA[19] = \<const0> ;
  assign m_axi_DATA_A_WDATA[18] = \<const0> ;
  assign m_axi_DATA_A_WDATA[17] = \<const0> ;
  assign m_axi_DATA_A_WDATA[16] = \<const0> ;
  assign m_axi_DATA_A_WDATA[15] = \<const0> ;
  assign m_axi_DATA_A_WDATA[14] = \<const0> ;
  assign m_axi_DATA_A_WDATA[13] = \<const0> ;
  assign m_axi_DATA_A_WDATA[12] = \<const0> ;
  assign m_axi_DATA_A_WDATA[11] = \<const0> ;
  assign m_axi_DATA_A_WDATA[10] = \<const0> ;
  assign m_axi_DATA_A_WDATA[9] = \<const0> ;
  assign m_axi_DATA_A_WDATA[8] = \<const0> ;
  assign m_axi_DATA_A_WDATA[7] = \<const0> ;
  assign m_axi_DATA_A_WDATA[6] = \<const0> ;
  assign m_axi_DATA_A_WDATA[5] = \<const0> ;
  assign m_axi_DATA_A_WDATA[4] = \<const0> ;
  assign m_axi_DATA_A_WDATA[3] = \<const0> ;
  assign m_axi_DATA_A_WDATA[2] = \<const0> ;
  assign m_axi_DATA_A_WDATA[1] = \<const0> ;
  assign m_axi_DATA_A_WDATA[0] = \<const0> ;
  assign m_axi_DATA_A_WID[0] = \<const0> ;
  assign m_axi_DATA_A_WLAST = \<const0> ;
  assign m_axi_DATA_A_WSTRB[3] = \<const0> ;
  assign m_axi_DATA_A_WSTRB[2] = \<const0> ;
  assign m_axi_DATA_A_WSTRB[1] = \<const0> ;
  assign m_axi_DATA_A_WSTRB[0] = \<const0> ;
  assign m_axi_DATA_A_WUSER[0] = \<const0> ;
  assign m_axi_DATA_A_WVALID = \<const0> ;
  assign m_axi_DATA_B_ARADDR[31:2] = \^m_axi_DATA_B_ARADDR [31:2];
  assign m_axi_DATA_B_ARADDR[1] = \<const0> ;
  assign m_axi_DATA_B_ARADDR[0] = \<const0> ;
  assign m_axi_DATA_B_ARBURST[1] = \<const0> ;
  assign m_axi_DATA_B_ARBURST[0] = \<const1> ;
  assign m_axi_DATA_B_ARCACHE[3] = \<const0> ;
  assign m_axi_DATA_B_ARCACHE[2] = \<const0> ;
  assign m_axi_DATA_B_ARCACHE[1] = \<const1> ;
  assign m_axi_DATA_B_ARCACHE[0] = \<const1> ;
  assign m_axi_DATA_B_ARID[0] = \<const0> ;
  assign m_axi_DATA_B_ARLEN[7] = \<const0> ;
  assign m_axi_DATA_B_ARLEN[6] = \<const0> ;
  assign m_axi_DATA_B_ARLEN[5] = \<const0> ;
  assign m_axi_DATA_B_ARLEN[4] = \<const0> ;
  assign m_axi_DATA_B_ARLEN[3:0] = \^m_axi_DATA_B_ARLEN [3:0];
  assign m_axi_DATA_B_ARLOCK[1] = \<const0> ;
  assign m_axi_DATA_B_ARLOCK[0] = \<const0> ;
  assign m_axi_DATA_B_ARPROT[2] = \<const0> ;
  assign m_axi_DATA_B_ARPROT[1] = \<const0> ;
  assign m_axi_DATA_B_ARPROT[0] = \<const0> ;
  assign m_axi_DATA_B_ARQOS[3] = \<const0> ;
  assign m_axi_DATA_B_ARQOS[2] = \<const0> ;
  assign m_axi_DATA_B_ARQOS[1] = \<const0> ;
  assign m_axi_DATA_B_ARQOS[0] = \<const0> ;
  assign m_axi_DATA_B_ARREGION[3] = \<const0> ;
  assign m_axi_DATA_B_ARREGION[2] = \<const0> ;
  assign m_axi_DATA_B_ARREGION[1] = \<const0> ;
  assign m_axi_DATA_B_ARREGION[0] = \<const0> ;
  assign m_axi_DATA_B_ARSIZE[2] = \<const0> ;
  assign m_axi_DATA_B_ARSIZE[1] = \<const1> ;
  assign m_axi_DATA_B_ARSIZE[0] = \<const0> ;
  assign m_axi_DATA_B_ARUSER[0] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[31] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[30] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[29] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[28] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[27] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[26] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[25] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[24] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[23] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[22] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[21] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[20] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[19] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[18] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[17] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[16] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[15] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[14] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[13] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[12] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[11] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[10] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[9] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[8] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[7] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[6] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[5] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[4] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[3] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[2] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[1] = \<const0> ;
  assign m_axi_DATA_B_AWADDR[0] = \<const0> ;
  assign m_axi_DATA_B_AWBURST[1] = \<const0> ;
  assign m_axi_DATA_B_AWBURST[0] = \<const1> ;
  assign m_axi_DATA_B_AWCACHE[3] = \<const0> ;
  assign m_axi_DATA_B_AWCACHE[2] = \<const0> ;
  assign m_axi_DATA_B_AWCACHE[1] = \<const1> ;
  assign m_axi_DATA_B_AWCACHE[0] = \<const1> ;
  assign m_axi_DATA_B_AWID[0] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[7] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[6] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[5] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[4] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[3] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[2] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[1] = \<const0> ;
  assign m_axi_DATA_B_AWLEN[0] = \<const0> ;
  assign m_axi_DATA_B_AWLOCK[1] = \<const0> ;
  assign m_axi_DATA_B_AWLOCK[0] = \<const0> ;
  assign m_axi_DATA_B_AWPROT[2] = \<const0> ;
  assign m_axi_DATA_B_AWPROT[1] = \<const0> ;
  assign m_axi_DATA_B_AWPROT[0] = \<const0> ;
  assign m_axi_DATA_B_AWQOS[3] = \<const0> ;
  assign m_axi_DATA_B_AWQOS[2] = \<const0> ;
  assign m_axi_DATA_B_AWQOS[1] = \<const0> ;
  assign m_axi_DATA_B_AWQOS[0] = \<const0> ;
  assign m_axi_DATA_B_AWREGION[3] = \<const0> ;
  assign m_axi_DATA_B_AWREGION[2] = \<const0> ;
  assign m_axi_DATA_B_AWREGION[1] = \<const0> ;
  assign m_axi_DATA_B_AWREGION[0] = \<const0> ;
  assign m_axi_DATA_B_AWSIZE[2] = \<const0> ;
  assign m_axi_DATA_B_AWSIZE[1] = \<const1> ;
  assign m_axi_DATA_B_AWSIZE[0] = \<const0> ;
  assign m_axi_DATA_B_AWUSER[0] = \<const0> ;
  assign m_axi_DATA_B_AWVALID = \<const0> ;
  assign m_axi_DATA_B_BREADY = \<const1> ;
  assign m_axi_DATA_B_WDATA[31] = \<const0> ;
  assign m_axi_DATA_B_WDATA[30] = \<const0> ;
  assign m_axi_DATA_B_WDATA[29] = \<const0> ;
  assign m_axi_DATA_B_WDATA[28] = \<const0> ;
  assign m_axi_DATA_B_WDATA[27] = \<const0> ;
  assign m_axi_DATA_B_WDATA[26] = \<const0> ;
  assign m_axi_DATA_B_WDATA[25] = \<const0> ;
  assign m_axi_DATA_B_WDATA[24] = \<const0> ;
  assign m_axi_DATA_B_WDATA[23] = \<const0> ;
  assign m_axi_DATA_B_WDATA[22] = \<const0> ;
  assign m_axi_DATA_B_WDATA[21] = \<const0> ;
  assign m_axi_DATA_B_WDATA[20] = \<const0> ;
  assign m_axi_DATA_B_WDATA[19] = \<const0> ;
  assign m_axi_DATA_B_WDATA[18] = \<const0> ;
  assign m_axi_DATA_B_WDATA[17] = \<const0> ;
  assign m_axi_DATA_B_WDATA[16] = \<const0> ;
  assign m_axi_DATA_B_WDATA[15] = \<const0> ;
  assign m_axi_DATA_B_WDATA[14] = \<const0> ;
  assign m_axi_DATA_B_WDATA[13] = \<const0> ;
  assign m_axi_DATA_B_WDATA[12] = \<const0> ;
  assign m_axi_DATA_B_WDATA[11] = \<const0> ;
  assign m_axi_DATA_B_WDATA[10] = \<const0> ;
  assign m_axi_DATA_B_WDATA[9] = \<const0> ;
  assign m_axi_DATA_B_WDATA[8] = \<const0> ;
  assign m_axi_DATA_B_WDATA[7] = \<const0> ;
  assign m_axi_DATA_B_WDATA[6] = \<const0> ;
  assign m_axi_DATA_B_WDATA[5] = \<const0> ;
  assign m_axi_DATA_B_WDATA[4] = \<const0> ;
  assign m_axi_DATA_B_WDATA[3] = \<const0> ;
  assign m_axi_DATA_B_WDATA[2] = \<const0> ;
  assign m_axi_DATA_B_WDATA[1] = \<const0> ;
  assign m_axi_DATA_B_WDATA[0] = \<const0> ;
  assign m_axi_DATA_B_WID[0] = \<const0> ;
  assign m_axi_DATA_B_WLAST = \<const0> ;
  assign m_axi_DATA_B_WSTRB[3] = \<const0> ;
  assign m_axi_DATA_B_WSTRB[2] = \<const0> ;
  assign m_axi_DATA_B_WSTRB[1] = \<const0> ;
  assign m_axi_DATA_B_WSTRB[0] = \<const0> ;
  assign m_axi_DATA_B_WUSER[0] = \<const0> ;
  assign m_axi_DATA_B_WVALID = \<const0> ;
  assign m_axi_DATA_C_ARADDR[31] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[30] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[29] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[28] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[27] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[26] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[25] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[24] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[23] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[22] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[21] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[20] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[19] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[18] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[17] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[16] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[15] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[14] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[13] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[12] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[11] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[10] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[9] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[8] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[7] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[6] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[5] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[4] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[3] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[2] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[1] = \<const0> ;
  assign m_axi_DATA_C_ARADDR[0] = \<const0> ;
  assign m_axi_DATA_C_ARBURST[1] = \<const0> ;
  assign m_axi_DATA_C_ARBURST[0] = \<const1> ;
  assign m_axi_DATA_C_ARCACHE[3] = \<const0> ;
  assign m_axi_DATA_C_ARCACHE[2] = \<const0> ;
  assign m_axi_DATA_C_ARCACHE[1] = \<const1> ;
  assign m_axi_DATA_C_ARCACHE[0] = \<const1> ;
  assign m_axi_DATA_C_ARID[0] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[7] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[6] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[5] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[4] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[3] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[2] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[1] = \<const0> ;
  assign m_axi_DATA_C_ARLEN[0] = \<const0> ;
  assign m_axi_DATA_C_ARLOCK[1] = \<const0> ;
  assign m_axi_DATA_C_ARLOCK[0] = \<const0> ;
  assign m_axi_DATA_C_ARPROT[2] = \<const0> ;
  assign m_axi_DATA_C_ARPROT[1] = \<const0> ;
  assign m_axi_DATA_C_ARPROT[0] = \<const0> ;
  assign m_axi_DATA_C_ARQOS[3] = \<const0> ;
  assign m_axi_DATA_C_ARQOS[2] = \<const0> ;
  assign m_axi_DATA_C_ARQOS[1] = \<const0> ;
  assign m_axi_DATA_C_ARQOS[0] = \<const0> ;
  assign m_axi_DATA_C_ARREGION[3] = \<const0> ;
  assign m_axi_DATA_C_ARREGION[2] = \<const0> ;
  assign m_axi_DATA_C_ARREGION[1] = \<const0> ;
  assign m_axi_DATA_C_ARREGION[0] = \<const0> ;
  assign m_axi_DATA_C_ARSIZE[2] = \<const0> ;
  assign m_axi_DATA_C_ARSIZE[1] = \<const1> ;
  assign m_axi_DATA_C_ARSIZE[0] = \<const0> ;
  assign m_axi_DATA_C_ARUSER[0] = \<const0> ;
  assign m_axi_DATA_C_ARVALID = \<const0> ;
  assign m_axi_DATA_C_AWADDR[31:2] = \^m_axi_DATA_C_AWADDR [31:2];
  assign m_axi_DATA_C_AWADDR[1] = \<const0> ;
  assign m_axi_DATA_C_AWADDR[0] = \<const0> ;
  assign m_axi_DATA_C_AWBURST[1] = \<const0> ;
  assign m_axi_DATA_C_AWBURST[0] = \<const1> ;
  assign m_axi_DATA_C_AWCACHE[3] = \<const0> ;
  assign m_axi_DATA_C_AWCACHE[2] = \<const0> ;
  assign m_axi_DATA_C_AWCACHE[1] = \<const1> ;
  assign m_axi_DATA_C_AWCACHE[0] = \<const1> ;
  assign m_axi_DATA_C_AWID[0] = \<const0> ;
  assign m_axi_DATA_C_AWLEN[7] = \<const0> ;
  assign m_axi_DATA_C_AWLEN[6] = \<const0> ;
  assign m_axi_DATA_C_AWLEN[5] = \<const0> ;
  assign m_axi_DATA_C_AWLEN[4] = \<const0> ;
  assign m_axi_DATA_C_AWLEN[3:0] = \^m_axi_DATA_C_AWLEN [3:0];
  assign m_axi_DATA_C_AWLOCK[1] = \<const0> ;
  assign m_axi_DATA_C_AWLOCK[0] = \<const0> ;
  assign m_axi_DATA_C_AWPROT[2] = \<const0> ;
  assign m_axi_DATA_C_AWPROT[1] = \<const0> ;
  assign m_axi_DATA_C_AWPROT[0] = \<const0> ;
  assign m_axi_DATA_C_AWQOS[3] = \<const0> ;
  assign m_axi_DATA_C_AWQOS[2] = \<const0> ;
  assign m_axi_DATA_C_AWQOS[1] = \<const0> ;
  assign m_axi_DATA_C_AWQOS[0] = \<const0> ;
  assign m_axi_DATA_C_AWREGION[3] = \<const0> ;
  assign m_axi_DATA_C_AWREGION[2] = \<const0> ;
  assign m_axi_DATA_C_AWREGION[1] = \<const0> ;
  assign m_axi_DATA_C_AWREGION[0] = \<const0> ;
  assign m_axi_DATA_C_AWSIZE[2] = \<const0> ;
  assign m_axi_DATA_C_AWSIZE[1] = \<const1> ;
  assign m_axi_DATA_C_AWSIZE[0] = \<const0> ;
  assign m_axi_DATA_C_AWUSER[0] = \<const0> ;
  assign m_axi_DATA_C_WID[0] = \<const0> ;
  assign m_axi_DATA_C_WUSER[0] = \<const0> ;
  assign s_axi_CTL_BRESP[1] = \<const0> ;
  assign s_axi_CTL_BRESP[0] = \<const0> ;
  assign s_axi_CTL_RRESP[1] = \<const0> ;
  assign s_axi_CTL_RRESP[0] = \<const0> ;
  FDRE \DATA_A_addr_read_reg_277_reg[0] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[0]),
        .Q(DATA_A_addr_read_reg_277[0]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[10] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[10]),
        .Q(DATA_A_addr_read_reg_277[10]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[11] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[11]),
        .Q(DATA_A_addr_read_reg_277[11]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[12] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[12]),
        .Q(DATA_A_addr_read_reg_277[12]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[13] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[13]),
        .Q(DATA_A_addr_read_reg_277[13]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[14] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[14]),
        .Q(DATA_A_addr_read_reg_277[14]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[15] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[15]),
        .Q(DATA_A_addr_read_reg_277[15]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[16] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[16]),
        .Q(DATA_A_addr_read_reg_277[16]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[17] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[17]),
        .Q(DATA_A_addr_read_reg_277[17]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[18] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[18]),
        .Q(DATA_A_addr_read_reg_277[18]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[19] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[19]),
        .Q(DATA_A_addr_read_reg_277[19]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[1] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[1]),
        .Q(DATA_A_addr_read_reg_277[1]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[20] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[20]),
        .Q(DATA_A_addr_read_reg_277[20]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[21] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[21]),
        .Q(DATA_A_addr_read_reg_277[21]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[22] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[22]),
        .Q(DATA_A_addr_read_reg_277[22]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[23] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[23]),
        .Q(DATA_A_addr_read_reg_277[23]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[24] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[24]),
        .Q(DATA_A_addr_read_reg_277[24]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[25] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[25]),
        .Q(DATA_A_addr_read_reg_277[25]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[26] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[26]),
        .Q(DATA_A_addr_read_reg_277[26]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[27] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[27]),
        .Q(DATA_A_addr_read_reg_277[27]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[28] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[28]),
        .Q(DATA_A_addr_read_reg_277[28]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[29] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[29]),
        .Q(DATA_A_addr_read_reg_277[29]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[2] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[2]),
        .Q(DATA_A_addr_read_reg_277[2]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[30] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[30]),
        .Q(DATA_A_addr_read_reg_277[30]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[31] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[31]),
        .Q(DATA_A_addr_read_reg_277[31]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[3] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[3]),
        .Q(DATA_A_addr_read_reg_277[3]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[4] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[4]),
        .Q(DATA_A_addr_read_reg_277[4]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[5] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[5]),
        .Q(DATA_A_addr_read_reg_277[5]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[6] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[6]),
        .Q(DATA_A_addr_read_reg_277[6]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[7] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[7]),
        .Q(DATA_A_addr_read_reg_277[7]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[8] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[8]),
        .Q(DATA_A_addr_read_reg_277[8]),
        .R(1'b0));
  FDRE \DATA_A_addr_read_reg_277_reg[9] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_A_RDATA[9]),
        .Q(DATA_A_addr_read_reg_277[9]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[0] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[0]),
        .Q(DATA_B_addr_read_reg_282[0]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[10] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[10]),
        .Q(DATA_B_addr_read_reg_282[10]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[11] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[11]),
        .Q(DATA_B_addr_read_reg_282[11]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[12] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[12]),
        .Q(DATA_B_addr_read_reg_282[12]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[13] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[13]),
        .Q(DATA_B_addr_read_reg_282[13]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[14] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[14]),
        .Q(DATA_B_addr_read_reg_282[14]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[15] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[15]),
        .Q(DATA_B_addr_read_reg_282[15]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[16] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[16]),
        .Q(DATA_B_addr_read_reg_282[16]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[17] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[17]),
        .Q(DATA_B_addr_read_reg_282[17]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[18] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[18]),
        .Q(DATA_B_addr_read_reg_282[18]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[19] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[19]),
        .Q(DATA_B_addr_read_reg_282[19]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[1] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[1]),
        .Q(DATA_B_addr_read_reg_282[1]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[20] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[20]),
        .Q(DATA_B_addr_read_reg_282[20]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[21] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[21]),
        .Q(DATA_B_addr_read_reg_282[21]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[22] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[22]),
        .Q(DATA_B_addr_read_reg_282[22]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[23] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[23]),
        .Q(DATA_B_addr_read_reg_282[23]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[24] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[24]),
        .Q(DATA_B_addr_read_reg_282[24]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[25] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[25]),
        .Q(DATA_B_addr_read_reg_282[25]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[26] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[26]),
        .Q(DATA_B_addr_read_reg_282[26]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[27] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[27]),
        .Q(DATA_B_addr_read_reg_282[27]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[28] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[28]),
        .Q(DATA_B_addr_read_reg_282[28]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[29] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[29]),
        .Q(DATA_B_addr_read_reg_282[29]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[2] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[2]),
        .Q(DATA_B_addr_read_reg_282[2]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[30] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[30]),
        .Q(DATA_B_addr_read_reg_282[30]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[31] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[31]),
        .Q(DATA_B_addr_read_reg_282[31]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[3] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[3]),
        .Q(DATA_B_addr_read_reg_282[3]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[4] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[4]),
        .Q(DATA_B_addr_read_reg_282[4]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[5] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[5]),
        .Q(DATA_B_addr_read_reg_282[5]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[6] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[6]),
        .Q(DATA_B_addr_read_reg_282[6]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[7] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[7]),
        .Q(DATA_B_addr_read_reg_282[7]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[8] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[8]),
        .Q(DATA_B_addr_read_reg_282[8]),
        .R(1'b0));
  FDRE \DATA_B_addr_read_reg_282_reg[9] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_18),
        .D(DATA_B_RDATA[9]),
        .Q(DATA_B_addr_read_reg_282[9]),
        .R(1'b0));
  GND GND
       (.G(\<const0> ));
  VCC VCC
       (.P(\<const1> ));
  FDRE \a1_reg_246_reg[0] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[2]),
        .Q(a1_reg_246[0]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[10] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[12]),
        .Q(a1_reg_246[10]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[11] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[13]),
        .Q(a1_reg_246[11]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[12] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[14]),
        .Q(a1_reg_246[12]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[13] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[15]),
        .Q(a1_reg_246[13]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[14] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[16]),
        .Q(a1_reg_246[14]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[15] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[17]),
        .Q(a1_reg_246[15]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[16] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[18]),
        .Q(a1_reg_246[16]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[17] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[19]),
        .Q(a1_reg_246[17]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[18] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[20]),
        .Q(a1_reg_246[18]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[19] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[21]),
        .Q(a1_reg_246[19]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[1] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[3]),
        .Q(a1_reg_246[1]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[20] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[22]),
        .Q(a1_reg_246[20]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[21] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[23]),
        .Q(a1_reg_246[21]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[22] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[24]),
        .Q(a1_reg_246[22]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[23] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[25]),
        .Q(a1_reg_246[23]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[24] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[26]),
        .Q(a1_reg_246[24]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[25] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[27]),
        .Q(a1_reg_246[25]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[26] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[28]),
        .Q(a1_reg_246[26]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[27] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[29]),
        .Q(a1_reg_246[27]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[28] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[30]),
        .Q(a1_reg_246[28]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[29] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[31]),
        .Q(a1_reg_246[29]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[2] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[4]),
        .Q(a1_reg_246[2]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[3] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[5]),
        .Q(a1_reg_246[3]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[4] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[6]),
        .Q(a1_reg_246[4]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[5] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[7]),
        .Q(a1_reg_246[5]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[6] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[8]),
        .Q(a1_reg_246[6]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[7] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[9]),
        .Q(a1_reg_246[7]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[8] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[10]),
        .Q(a1_reg_246[8]),
        .R(1'b0));
  FDRE \a1_reg_246_reg[9] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(a[11]),
        .Q(a1_reg_246[9]),
        .R(1'b0));
  LUT4 #(
    .INIT(16'h0001)) 
    \ap_CS_fsm[1]_i_2 
       (.I0(\ap_CS_fsm_reg_n_2_[2] ),
        .I1(ap_CS_fsm_state18),
        .I2(\ap_CS_fsm_reg_n_2_[11] ),
        .I3(\ap_CS_fsm_reg_n_2_[12] ),
        .O(\ap_CS_fsm[1]_i_2_n_2 ));
  LUT4 #(
    .INIT(16'h0001)) 
    \ap_CS_fsm[1]_i_4 
       (.I0(\ap_CS_fsm_reg_n_2_[5] ),
        .I1(\ap_CS_fsm_reg_n_2_[6] ),
        .I2(\ap_CS_fsm_reg_n_2_[3] ),
        .I3(\ap_CS_fsm_reg_n_2_[4] ),
        .O(\ap_CS_fsm[1]_i_4_n_2 ));
  LUT4 #(
    .INIT(16'h0001)) 
    \ap_CS_fsm[1]_i_5 
       (.I0(\ap_CS_fsm_reg_n_2_[9] ),
        .I1(\ap_CS_fsm_reg_n_2_[10] ),
        .I2(ap_CS_fsm_state8),
        .I3(ap_CS_fsm_pp0_stage0),
        .O(\ap_CS_fsm[1]_i_5_n_2 ));
  (* FSM_ENCODING = "none" *) 
  FDSE #(
    .INIT(1'b1)) 
    \ap_CS_fsm_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[0]),
        .Q(\ap_CS_fsm_reg_n_2_[0] ),
        .S(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[10] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[9] ),
        .Q(\ap_CS_fsm_reg_n_2_[10] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[11] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[10] ),
        .Q(\ap_CS_fsm_reg_n_2_[11] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[12] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[11] ),
        .Q(\ap_CS_fsm_reg_n_2_[12] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[13] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[13]),
        .Q(ap_CS_fsm_state18),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[1]),
        .Q(ap_CS_fsm_state2),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[2]),
        .Q(\ap_CS_fsm_reg_n_2_[2] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[2] ),
        .Q(\ap_CS_fsm_reg_n_2_[3] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[3] ),
        .Q(\ap_CS_fsm_reg_n_2_[4] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[4] ),
        .Q(\ap_CS_fsm_reg_n_2_[5] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\ap_CS_fsm_reg_n_2_[5] ),
        .Q(\ap_CS_fsm_reg_n_2_[6] ),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[7]),
        .Q(ap_CS_fsm_state8),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[8] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[8]),
        .Q(ap_CS_fsm_pp0_stage0),
        .R(ap_rst_n_inv));
  (* FSM_ENCODING = "none" *) 
  FDRE #(
    .INIT(1'b0)) 
    \ap_CS_fsm_reg[9] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(ap_NS_fsm[9]),
        .Q(\ap_CS_fsm_reg_n_2_[9] ),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter0_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_C_m_axi_U_n_12),
        .Q(ap_enable_reg_pp0_iter0),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter1_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_A_m_axi_U_n_12),
        .Q(ap_enable_reg_pp0_iter1_reg_n_2),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter2_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_A_m_axi_U_n_14),
        .Q(ap_enable_reg_pp0_iter2),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter3_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_A_m_axi_U_n_13),
        .Q(ap_enable_reg_pp0_iter3),
        .R(ap_rst_n_inv));
  FDRE #(
    .INIT(1'b0)) 
    ap_enable_reg_pp0_iter4_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_C_m_axi_U_n_13),
        .Q(ap_enable_reg_pp0_iter4_reg_n_2),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    ap_reg_ioackin_DATA_A_ARREADY_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_B_m_axi_U_n_5),
        .Q(ap_reg_ioackin_DATA_A_ARREADY),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    ap_reg_ioackin_DATA_B_ARREADY_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_B_m_axi_U_n_3),
        .Q(ap_reg_ioackin_DATA_B_ARREADY_reg_n_2),
        .R(1'b0));
  FDRE #(
    .INIT(1'b0)) 
    ap_reg_ioackin_DATA_C_WREADY_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_A_m_axi_U_n_53),
        .Q(ap_reg_ioackin_DATA_C_WREADY_reg_n_2),
        .R(1'b0));
  FDRE \ap_reg_pp0_iter1_exitcond_reg_268_reg[0] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_8),
        .D(\exitcond_reg_268_reg_n_2_[0] ),
        .Q(ap_reg_pp0_iter1_exitcond_reg_268),
        .R(1'b0));
  FDRE \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_A_m_axi_U_n_16),
        .Q(ap_reg_pp0_iter2_exitcond_reg_268),
        .R(1'b0));
  FDRE \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(vector_multiplier_DATA_A_m_axi_U_n_15),
        .Q(ap_reg_pp0_iter3_exitcond_reg_268),
        .R(1'b0));
  FDRE \b3_reg_241_reg[0] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[2]),
        .Q(b3_reg_241[0]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[10] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[12]),
        .Q(b3_reg_241[10]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[11] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[13]),
        .Q(b3_reg_241[11]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[12] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[14]),
        .Q(b3_reg_241[12]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[13] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[15]),
        .Q(b3_reg_241[13]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[14] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[16]),
        .Q(b3_reg_241[14]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[15] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[17]),
        .Q(b3_reg_241[15]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[16] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[18]),
        .Q(b3_reg_241[16]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[17] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[19]),
        .Q(b3_reg_241[17]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[18] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[20]),
        .Q(b3_reg_241[18]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[19] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[21]),
        .Q(b3_reg_241[19]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[1] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[3]),
        .Q(b3_reg_241[1]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[20] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[22]),
        .Q(b3_reg_241[20]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[21] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[23]),
        .Q(b3_reg_241[21]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[22] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[24]),
        .Q(b3_reg_241[22]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[23] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[25]),
        .Q(b3_reg_241[23]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[24] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[26]),
        .Q(b3_reg_241[24]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[25] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[27]),
        .Q(b3_reg_241[25]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[26] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[28]),
        .Q(b3_reg_241[26]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[27] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[29]),
        .Q(b3_reg_241[27]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[28] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[30]),
        .Q(b3_reg_241[28]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[29] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[31]),
        .Q(b3_reg_241[29]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[2] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[4]),
        .Q(b3_reg_241[2]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[3] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[5]),
        .Q(b3_reg_241[3]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[4] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[6]),
        .Q(b3_reg_241[4]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[5] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[7]),
        .Q(b3_reg_241[5]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[6] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[8]),
        .Q(b3_reg_241[6]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[7] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[9]),
        .Q(b3_reg_241[7]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[8] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[10]),
        .Q(b3_reg_241[8]),
        .R(1'b0));
  FDRE \b3_reg_241_reg[9] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(b[11]),
        .Q(b3_reg_241[9]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[0] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[2]),
        .Q(c5_reg_236[0]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[10] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[12]),
        .Q(c5_reg_236[10]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[11] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[13]),
        .Q(c5_reg_236[11]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[12] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[14]),
        .Q(c5_reg_236[12]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[13] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[15]),
        .Q(c5_reg_236[13]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[14] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[16]),
        .Q(c5_reg_236[14]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[15] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[17]),
        .Q(c5_reg_236[15]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[16] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[18]),
        .Q(c5_reg_236[16]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[17] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[19]),
        .Q(c5_reg_236[17]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[18] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[20]),
        .Q(c5_reg_236[18]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[19] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[21]),
        .Q(c5_reg_236[19]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[1] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[3]),
        .Q(c5_reg_236[1]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[20] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[22]),
        .Q(c5_reg_236[20]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[21] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[23]),
        .Q(c5_reg_236[21]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[22] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[24]),
        .Q(c5_reg_236[22]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[23] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[25]),
        .Q(c5_reg_236[23]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[24] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[26]),
        .Q(c5_reg_236[24]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[25] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[27]),
        .Q(c5_reg_236[25]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[26] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[28]),
        .Q(c5_reg_236[26]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[27] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[29]),
        .Q(c5_reg_236[27]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[28] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[30]),
        .Q(c5_reg_236[28]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[29] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[31]),
        .Q(c5_reg_236[29]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[2] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[4]),
        .Q(c5_reg_236[2]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[3] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[5]),
        .Q(c5_reg_236[3]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[4] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[6]),
        .Q(c5_reg_236[4]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[5] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[7]),
        .Q(c5_reg_236[5]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[6] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[8]),
        .Q(c5_reg_236[6]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[7] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[9]),
        .Q(c5_reg_236[7]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[8] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[10]),
        .Q(c5_reg_236[8]),
        .R(1'b0));
  FDRE \c5_reg_236_reg[9] 
       (.C(ap_clk),
        .CE(ap_NS_fsm118_out),
        .D(c[11]),
        .Q(c5_reg_236[9]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair266" *) 
  LUT4 #(
    .INIT(16'h0010)) 
    \exitcond_reg_268[0]_i_2 
       (.I0(i_reg_149_reg__0[5]),
        .I1(i_reg_149_reg__0[0]),
        .I2(i_reg_149_reg__0[6]),
        .I3(\exitcond_reg_268[0]_i_4_n_2 ),
        .O(exitcond_fu_220_p2));
  (* SOFT_HLUTNM = "soft_lutpair265" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    \exitcond_reg_268[0]_i_4 
       (.I0(i_reg_149_reg__0[3]),
        .I1(i_reg_149_reg__0[4]),
        .I2(i_reg_149_reg__0[1]),
        .I3(i_reg_149_reg__0[2]),
        .O(\exitcond_reg_268[0]_i_4_n_2 ));
  FDRE \exitcond_reg_268_reg[0] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_8),
        .D(exitcond_fu_220_p2),
        .Q(\exitcond_reg_268_reg_n_2_[0] ),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    \i_reg_149[0]_i_1 
       (.I0(i_reg_149_reg__0[0]),
        .O(i_1_fu_226_p2[0]));
  (* SOFT_HLUTNM = "soft_lutpair267" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \i_reg_149[1]_i_1 
       (.I0(i_reg_149_reg__0[0]),
        .I1(i_reg_149_reg__0[1]),
        .O(i_1_fu_226_p2[1]));
  (* SOFT_HLUTNM = "soft_lutpair267" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \i_reg_149[2]_i_1 
       (.I0(i_reg_149_reg__0[0]),
        .I1(i_reg_149_reg__0[1]),
        .I2(i_reg_149_reg__0[2]),
        .O(i_1_fu_226_p2[2]));
  (* SOFT_HLUTNM = "soft_lutpair265" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \i_reg_149[3]_i_1 
       (.I0(i_reg_149_reg__0[1]),
        .I1(i_reg_149_reg__0[0]),
        .I2(i_reg_149_reg__0[2]),
        .I3(i_reg_149_reg__0[3]),
        .O(i_1_fu_226_p2[3]));
  (* SOFT_HLUTNM = "soft_lutpair264" *) 
  LUT5 #(
    .INIT(32'h7FFF8000)) 
    \i_reg_149[4]_i_1 
       (.I0(i_reg_149_reg__0[2]),
        .I1(i_reg_149_reg__0[0]),
        .I2(i_reg_149_reg__0[1]),
        .I3(i_reg_149_reg__0[3]),
        .I4(i_reg_149_reg__0[4]),
        .O(i_1_fu_226_p2[4]));
  LUT6 #(
    .INIT(64'h7FFFFFFF80000000)) 
    \i_reg_149[5]_i_1 
       (.I0(i_reg_149_reg__0[3]),
        .I1(i_reg_149_reg__0[1]),
        .I2(i_reg_149_reg__0[0]),
        .I3(i_reg_149_reg__0[2]),
        .I4(i_reg_149_reg__0[4]),
        .I5(i_reg_149_reg__0[5]),
        .O(i_1_fu_226_p2[5]));
  (* SOFT_HLUTNM = "soft_lutpair266" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \i_reg_149[6]_i_3 
       (.I0(\i_reg_149[6]_i_4_n_2 ),
        .I1(i_reg_149_reg__0[5]),
        .I2(i_reg_149_reg__0[6]),
        .O(i_1_fu_226_p2[6]));
  (* SOFT_HLUTNM = "soft_lutpair264" *) 
  LUT5 #(
    .INIT(32'h80000000)) 
    \i_reg_149[6]_i_4 
       (.I0(i_reg_149_reg__0[4]),
        .I1(i_reg_149_reg__0[2]),
        .I2(i_reg_149_reg__0[0]),
        .I3(i_reg_149_reg__0[1]),
        .I4(i_reg_149_reg__0[3]),
        .O(\i_reg_149[6]_i_4_n_2 ));
  FDRE \i_reg_149_reg[0] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[0]),
        .Q(i_reg_149_reg__0[0]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \i_reg_149_reg[1] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[1]),
        .Q(i_reg_149_reg__0[1]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \i_reg_149_reg[2] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[2]),
        .Q(i_reg_149_reg__0[2]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \i_reg_149_reg[3] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[3]),
        .Q(i_reg_149_reg__0[3]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \i_reg_149_reg[4] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[4]),
        .Q(i_reg_149_reg__0[4]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \i_reg_149_reg[5] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[5]),
        .Q(i_reg_149_reg__0[5]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \i_reg_149_reg[6] 
       (.C(ap_clk),
        .CE(i_reg_1490),
        .D(i_1_fu_226_p2[6]),
        .Q(i_reg_149_reg__0[6]),
        .R(vector_multiplier_DATA_A_m_axi_U_n_55));
  FDRE \tmp_reg_287_reg[0] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_33),
        .Q(tmp_reg_287[0]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[10] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_23),
        .Q(tmp_reg_287[10]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[11] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_22),
        .Q(tmp_reg_287[11]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[12] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_21),
        .Q(tmp_reg_287[12]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[13] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_20),
        .Q(tmp_reg_287[13]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[14] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_19),
        .Q(tmp_reg_287[14]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[15] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_18),
        .Q(tmp_reg_287[15]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[16] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [16]),
        .Q(tmp_reg_287[16]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[17] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [17]),
        .Q(tmp_reg_287[17]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[18] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [18]),
        .Q(tmp_reg_287[18]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[19] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [19]),
        .Q(tmp_reg_287[19]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[1] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_32),
        .Q(tmp_reg_287[1]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[20] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [20]),
        .Q(tmp_reg_287[20]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[21] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [21]),
        .Q(tmp_reg_287[21]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[22] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [22]),
        .Q(tmp_reg_287[22]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[23] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [23]),
        .Q(tmp_reg_287[23]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[24] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [24]),
        .Q(tmp_reg_287[24]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[25] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [25]),
        .Q(tmp_reg_287[25]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[26] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [26]),
        .Q(tmp_reg_287[26]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[27] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [27]),
        .Q(tmp_reg_287[27]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[28] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [28]),
        .Q(tmp_reg_287[28]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[29] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [29]),
        .Q(tmp_reg_287[29]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[2] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_31),
        .Q(tmp_reg_287[2]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[30] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [30]),
        .Q(tmp_reg_287[30]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[31] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(\vector_multiplierbkb_MulnS_0_U/p_reg [31]),
        .Q(tmp_reg_287[31]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[3] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_30),
        .Q(tmp_reg_287[3]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[4] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_29),
        .Q(tmp_reg_287[4]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[5] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_28),
        .Q(tmp_reg_287[5]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[6] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_27),
        .Q(tmp_reg_287[6]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[7] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_26),
        .Q(tmp_reg_287[7]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[8] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_25),
        .Q(tmp_reg_287[8]),
        .R(1'b0));
  FDRE \tmp_reg_287_reg[9] 
       (.C(ap_clk),
        .CE(vector_multiplier_DATA_A_m_axi_U_n_17),
        .D(vector_multiplierbkb_U0_n_24),
        .Q(tmp_reg_287[9]),
        .R(1'b0));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_CTL_s_axi vector_multiplier_CTL_s_axi_U
       (.D(ap_NS_fsm[1:0]),
        .DATA_C_BREADY(DATA_C_BREADY),
        .DATA_C_BVALID(DATA_C_BVALID),
        .E(ap_NS_fsm118_out),
        .Q({ap_CS_fsm_state18,\ap_CS_fsm_reg_n_2_[0] }),
        .SR(ap_rst_n_inv),
        .\a1_reg_246_reg[29] (a),
        .\ap_CS_fsm_reg[13] (rdata),
        .\ap_CS_fsm_reg[1] (vector_multiplier_DATA_B_m_axi_U_n_6),
        .\ap_CS_fsm_reg[2] (\ap_CS_fsm[1]_i_2_n_2 ),
        .\ap_CS_fsm_reg[5] (\ap_CS_fsm[1]_i_4_n_2 ),
        .\ap_CS_fsm_reg[9] (\ap_CS_fsm[1]_i_5_n_2 ),
        .ap_clk(ap_clk),
        .\b3_reg_241_reg[29] (b),
        .\c5_reg_236_reg[29] (c),
        .interrupt(interrupt),
        .out({s_axi_CTL_BVALID,s_axi_CTL_WREADY,s_axi_CTL_AWREADY}),
        .\rdata_reg[3]_0 (vector_multiplier_CTL_s_axi_U_n_101),
        .s_axi_CTL_ARADDR(s_axi_CTL_ARADDR),
        .s_axi_CTL_ARREADY(s_axi_CTL_ARREADY),
        .s_axi_CTL_ARVALID(s_axi_CTL_ARVALID),
        .s_axi_CTL_AWADDR(s_axi_CTL_AWADDR),
        .s_axi_CTL_AWVALID(s_axi_CTL_AWVALID),
        .s_axi_CTL_BREADY(s_axi_CTL_BREADY),
        .s_axi_CTL_RDATA(s_axi_CTL_RDATA),
        .s_axi_CTL_RREADY(s_axi_CTL_RREADY),
        .s_axi_CTL_RVALID(s_axi_CTL_RVALID),
        .s_axi_CTL_WDATA(s_axi_CTL_WDATA),
        .s_axi_CTL_WSTRB(s_axi_CTL_WSTRB),
        .s_axi_CTL_WVALID(s_axi_CTL_WVALID));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi vector_multiplier_DATA_A_m_axi_U
       (.D({ap_NS_fsm[9],ap_NS_fsm[2]}),
        .DATA_A_ARREADY(DATA_A_ARREADY),
        .DATA_A_RREADY(DATA_A_RREADY),
        .\DATA_A_addr_read_reg_277_reg[31] (DATA_A_RDATA),
        .DATA_B_ARREADY(DATA_B_ARREADY),
        .\DATA_B_addr_read_reg_282_reg[31] (vector_multiplier_DATA_A_m_axi_U_n_18),
        .DATA_C_AWREADY(DATA_C_AWREADY),
        .DATA_C_WREADY(DATA_C_WREADY),
        .E(i_reg_1490),
        .Q({ap_CS_fsm_pp0_stage0,ap_CS_fsm_state8,ap_CS_fsm_state2}),
        .SR(vector_multiplier_DATA_A_m_axi_U_n_55),
        .WEBWE(DATA_C_WVALID),
        .\a1_reg_246_reg[29] (a1_reg_246),
        .\ap_CS_fsm_reg[9] (vector_multiplier_DATA_A_m_axi_U_n_5),
        .ap_block_pp0_stage0_flag00011011(ap_block_pp0_stage0_flag00011011),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter0(ap_enable_reg_pp0_iter0),
        .ap_enable_reg_pp0_iter1_reg(vector_multiplier_DATA_A_m_axi_U_n_12),
        .ap_enable_reg_pp0_iter1_reg_0(ap_enable_reg_pp0_iter1_reg_n_2),
        .ap_enable_reg_pp0_iter2(ap_enable_reg_pp0_iter2),
        .ap_enable_reg_pp0_iter2_reg(vector_multiplier_DATA_A_m_axi_U_n_14),
        .ap_enable_reg_pp0_iter3(ap_enable_reg_pp0_iter3),
        .ap_enable_reg_pp0_iter3_reg(vector_multiplier_DATA_A_m_axi_U_n_13),
        .ap_enable_reg_pp0_iter4_reg(ap_enable_reg_pp0_iter4_reg_n_2),
        .ap_enable_reg_pp0_iter4_reg_0(vector_multiplier_DATA_C_m_axi_U_n_48),
        .ap_reg_ioackin_DATA_A_ARREADY(ap_reg_ioackin_DATA_A_ARREADY),
        .ap_reg_ioackin_DATA_B_ARREADY_reg(ap_reg_ioackin_DATA_B_ARREADY_reg_n_2),
        .ap_reg_ioackin_DATA_C_WREADY_reg(vector_multiplier_DATA_A_m_axi_U_n_53),
        .ap_reg_ioackin_DATA_C_WREADY_reg_0(ap_reg_ioackin_DATA_C_WREADY_reg_n_2),
        .ap_reg_pp0_iter1_exitcond_reg_268(ap_reg_pp0_iter1_exitcond_reg_268),
        .ap_reg_pp0_iter2_exitcond_reg_268(ap_reg_pp0_iter2_exitcond_reg_268),
        .\ap_reg_pp0_iter2_exitcond_reg_268_reg[0] (vector_multiplier_DATA_A_m_axi_U_n_16),
        .ap_reg_pp0_iter3_exitcond_reg_268(ap_reg_pp0_iter3_exitcond_reg_268),
        .\ap_reg_pp0_iter3_exitcond_reg_268_reg[0] (vector_multiplier_DATA_A_m_axi_U_n_15),
        .ap_rst_n(ap_rst_n),
        .ap_rst_n_0(ap_rst_n_inv),
        .exitcond_fu_220_p2(exitcond_fu_220_p2),
        .\exitcond_reg_268_reg[0] (\exitcond_reg_268_reg_n_2_[0] ),
        .m_axi_DATA_A_ARADDR(\^m_axi_DATA_A_ARADDR ),
        .\m_axi_DATA_A_ARLEN[3] (\^m_axi_DATA_A_ARLEN ),
        .m_axi_DATA_A_ARREADY(m_axi_DATA_A_ARREADY),
        .m_axi_DATA_A_ARVALID(m_axi_DATA_A_ARVALID),
        .m_axi_DATA_A_RLAST({m_axi_DATA_A_RLAST,m_axi_DATA_A_RDATA}),
        .m_axi_DATA_A_RREADY(m_axi_DATA_A_RREADY),
        .m_axi_DATA_A_RRESP(m_axi_DATA_A_RRESP),
        .m_axi_DATA_A_RVALID(m_axi_DATA_A_RVALID),
        .rdata_valid(DATA_B_RVALID),
        .tmp_product(vector_multiplier_DATA_A_m_axi_U_n_8),
        .\tmp_reg_287_reg[0] (vector_multiplier_DATA_A_m_axi_U_n_17));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi vector_multiplier_DATA_B_m_axi_U
       (.D({m_axi_DATA_B_RLAST,m_axi_DATA_B_RDATA}),
        .DATA_A_ARREADY(DATA_A_ARREADY),
        .DATA_A_RREADY(DATA_A_RREADY),
        .DATA_B_ARREADY(DATA_B_ARREADY),
        .\DATA_B_addr_read_reg_282_reg[31] (DATA_B_RDATA),
        .Q(ap_CS_fsm_state2),
        .SR(ap_rst_n_inv),
        .\ap_CS_fsm_reg[1] (vector_multiplier_DATA_B_m_axi_U_n_6),
        .\ap_CS_fsm_reg[8] (vector_multiplier_DATA_A_m_axi_U_n_8),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter1_reg(ap_enable_reg_pp0_iter1_reg_n_2),
        .ap_reg_ioackin_DATA_A_ARREADY(ap_reg_ioackin_DATA_A_ARREADY),
        .ap_reg_ioackin_DATA_A_ARREADY_reg(vector_multiplier_DATA_B_m_axi_U_n_5),
        .ap_reg_ioackin_DATA_B_ARREADY_reg(vector_multiplier_DATA_B_m_axi_U_n_3),
        .ap_reg_ioackin_DATA_B_ARREADY_reg_0(ap_reg_ioackin_DATA_B_ARREADY_reg_n_2),
        .ap_rst_n(ap_rst_n),
        .\b3_reg_241_reg[29] (b3_reg_241),
        .\exitcond_reg_268_reg[0] (\exitcond_reg_268_reg_n_2_[0] ),
        .m_axi_DATA_B_ARADDR(\^m_axi_DATA_B_ARADDR ),
        .\m_axi_DATA_B_ARLEN[3] (\^m_axi_DATA_B_ARLEN ),
        .m_axi_DATA_B_ARREADY(m_axi_DATA_B_ARREADY),
        .m_axi_DATA_B_ARVALID(m_axi_DATA_B_ARVALID),
        .m_axi_DATA_B_RREADY(m_axi_DATA_B_RREADY),
        .m_axi_DATA_B_RRESP(m_axi_DATA_B_RRESP),
        .m_axi_DATA_B_RVALID(m_axi_DATA_B_RVALID),
        .s_ready_t_reg(DATA_B_RVALID));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi vector_multiplier_DATA_C_m_axi_U
       (.AWLEN(\^m_axi_DATA_C_AWLEN ),
        .D({ap_NS_fsm[13],ap_NS_fsm[8:7]}),
        .DATA_C_AWREADY(DATA_C_AWREADY),
        .DATA_C_BREADY(DATA_C_BREADY),
        .DATA_C_BVALID(DATA_C_BVALID),
        .DATA_C_WREADY(DATA_C_WREADY),
        .Q({ap_CS_fsm_state18,\ap_CS_fsm_reg_n_2_[12] ,ap_CS_fsm_pp0_stage0,ap_CS_fsm_state8,\ap_CS_fsm_reg_n_2_[6] }),
        .SR(ap_rst_n_inv),
        .WEBWE(DATA_C_WVALID),
        .\ap_CS_fsm_reg[8] (vector_multiplier_DATA_A_m_axi_U_n_8),
        .ap_block_pp0_stage0_flag00011011(ap_block_pp0_stage0_flag00011011),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter0(ap_enable_reg_pp0_iter0),
        .ap_enable_reg_pp0_iter0_reg(vector_multiplier_DATA_C_m_axi_U_n_12),
        .ap_enable_reg_pp0_iter3(ap_enable_reg_pp0_iter3),
        .ap_enable_reg_pp0_iter4_reg(vector_multiplier_DATA_C_m_axi_U_n_13),
        .ap_enable_reg_pp0_iter4_reg_0(vector_multiplier_DATA_A_m_axi_U_n_5),
        .ap_enable_reg_pp0_iter4_reg_1(ap_enable_reg_pp0_iter4_reg_n_2),
        .ap_reg_pp0_iter3_exitcond_reg_268(ap_reg_pp0_iter3_exitcond_reg_268),
        .ap_rst_n(ap_rst_n),
        .\c5_reg_236_reg[29] (c5_reg_236),
        .exitcond_fu_220_p2(exitcond_fu_220_p2),
        .\int_a_reg[3] (vector_multiplier_CTL_s_axi_U_n_101),
        .\int_b_reg[3] (b[3]),
        .m_axi_DATA_C_AWADDR(\^m_axi_DATA_C_AWADDR ),
        .m_axi_DATA_C_AWREADY(m_axi_DATA_C_AWREADY),
        .m_axi_DATA_C_AWVALID(m_axi_DATA_C_AWVALID),
        .m_axi_DATA_C_BREADY(m_axi_DATA_C_BREADY),
        .m_axi_DATA_C_BVALID(m_axi_DATA_C_BVALID),
        .m_axi_DATA_C_RREADY(m_axi_DATA_C_RREADY),
        .m_axi_DATA_C_RVALID(m_axi_DATA_C_RVALID),
        .m_axi_DATA_C_WDATA(m_axi_DATA_C_WDATA),
        .m_axi_DATA_C_WLAST(m_axi_DATA_C_WLAST),
        .m_axi_DATA_C_WREADY(m_axi_DATA_C_WREADY),
        .m_axi_DATA_C_WSTRB(m_axi_DATA_C_WSTRB),
        .m_axi_DATA_C_WVALID(m_axi_DATA_C_WVALID),
        .mem_reg(vector_multiplier_DATA_C_m_axi_U_n_48),
        .\rdata_reg[3] (rdata),
        .s_axi_CTL_ARADDR(s_axi_CTL_ARADDR),
        .\tmp_reg_287_reg[31] (tmp_reg_287));
  accelerator_bd_vector_multiplier_0_0_vector_multiplierbkb vector_multiplierbkb_U0
       (.D({\vector_multiplierbkb_MulnS_0_U/p_reg ,vector_multiplierbkb_U0_n_18,vector_multiplierbkb_U0_n_19,vector_multiplierbkb_U0_n_20,vector_multiplierbkb_U0_n_21,vector_multiplierbkb_U0_n_22,vector_multiplierbkb_U0_n_23,vector_multiplierbkb_U0_n_24,vector_multiplierbkb_U0_n_25,vector_multiplierbkb_U0_n_26,vector_multiplierbkb_U0_n_27,vector_multiplierbkb_U0_n_28,vector_multiplierbkb_U0_n_29,vector_multiplierbkb_U0_n_30,vector_multiplierbkb_U0_n_31,vector_multiplierbkb_U0_n_32,vector_multiplierbkb_U0_n_33}),
        .\DATA_B_addr_read_reg_282_reg[31] (DATA_B_addr_read_reg_282),
        .Q(DATA_A_addr_read_reg_277),
        .\ap_CS_fsm_reg[8] (vector_multiplier_DATA_A_m_axi_U_n_8),
        .ap_clk(ap_clk));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_CTL_s_axi" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_CTL_s_axi
   (out,
    interrupt,
    D,
    E,
    s_axi_CTL_RVALID,
    s_axi_CTL_ARREADY,
    \c5_reg_236_reg[29] ,
    \b3_reg_241_reg[29] ,
    \a1_reg_246_reg[29] ,
    \rdata_reg[3]_0 ,
    s_axi_CTL_RDATA,
    SR,
    ap_clk,
    s_axi_CTL_ARVALID,
    s_axi_CTL_WSTRB,
    s_axi_CTL_WDATA,
    s_axi_CTL_WVALID,
    Q,
    \ap_CS_fsm_reg[2] ,
    \ap_CS_fsm_reg[1] ,
    \ap_CS_fsm_reg[5] ,
    \ap_CS_fsm_reg[9] ,
    DATA_C_BVALID,
    s_axi_CTL_ARADDR,
    \ap_CS_fsm_reg[13] ,
    s_axi_CTL_BREADY,
    s_axi_CTL_AWVALID,
    DATA_C_BREADY,
    s_axi_CTL_RREADY,
    s_axi_CTL_AWADDR);
  output [2:0]out;
  output interrupt;
  output [1:0]D;
  output [0:0]E;
  output s_axi_CTL_RVALID;
  output s_axi_CTL_ARREADY;
  output [29:0]\c5_reg_236_reg[29] ;
  output [29:0]\b3_reg_241_reg[29] ;
  output [29:0]\a1_reg_246_reg[29] ;
  output \rdata_reg[3]_0 ;
  output [31:0]s_axi_CTL_RDATA;
  input [0:0]SR;
  input ap_clk;
  input s_axi_CTL_ARVALID;
  input [3:0]s_axi_CTL_WSTRB;
  input [31:0]s_axi_CTL_WDATA;
  input s_axi_CTL_WVALID;
  input [1:0]Q;
  input \ap_CS_fsm_reg[2] ;
  input \ap_CS_fsm_reg[1] ;
  input \ap_CS_fsm_reg[5] ;
  input \ap_CS_fsm_reg[9] ;
  input DATA_C_BVALID;
  input [5:0]s_axi_CTL_ARADDR;
  input [0:0]\ap_CS_fsm_reg[13] ;
  input s_axi_CTL_BREADY;
  input s_axi_CTL_AWVALID;
  input DATA_C_BREADY;
  input s_axi_CTL_RREADY;
  input [5:0]s_axi_CTL_AWADDR;

  wire \/FSM_onehot_wstate[1]_i_1_n_2 ;
  wire \/FSM_onehot_wstate[2]_i_1_n_2 ;
  wire [1:0]D;
  wire DATA_C_BREADY;
  wire DATA_C_BVALID;
  wire [0:0]E;
  wire \FSM_onehot_wstate[3]_i_1_n_2 ;
  (* RTL_KEEP = "yes" *) wire \FSM_onehot_wstate_reg_n_2_[0] ;
  wire [1:0]Q;
  wire [0:0]SR;
  wire [29:0]\a1_reg_246_reg[29] ;
  wire [0:0]\ap_CS_fsm_reg[13] ;
  wire \ap_CS_fsm_reg[1] ;
  wire \ap_CS_fsm_reg[2] ;
  wire \ap_CS_fsm_reg[5] ;
  wire \ap_CS_fsm_reg[9] ;
  wire ap_clk;
  wire ap_start;
  wire ar_hs;
  wire [29:0]\b3_reg_241_reg[29] ;
  wire [29:0]\c5_reg_236_reg[29] ;
  wire [31:0]int_a0;
  wire \int_a[31]_i_1_n_2 ;
  wire \int_a[31]_i_3_n_2 ;
  wire \int_a_reg_n_2_[0] ;
  wire \int_a_reg_n_2_[1] ;
  wire int_ap_done;
  wire int_ap_done_i_1_n_2;
  wire int_ap_done_i_3_n_2;
  wire int_ap_start3_out;
  wire int_ap_start_i_1_n_2;
  wire int_auto_restart;
  wire int_auto_restart_i_1_n_2;
  wire [31:0]int_b0;
  wire \int_b[31]_i_1_n_2 ;
  wire \int_b[31]_i_3_n_2 ;
  wire \int_b_reg_n_2_[0] ;
  wire \int_b_reg_n_2_[1] ;
  wire [31:0]int_c0;
  wire \int_c[31]_i_1_n_2 ;
  wire \int_c_reg_n_2_[0] ;
  wire \int_c_reg_n_2_[1] ;
  wire int_gie_i_1_n_2;
  wire int_gie_reg_n_2;
  wire \int_ier[0]_i_1_n_2 ;
  wire \int_ier[1]_i_1_n_2 ;
  wire \int_ier[1]_i_2_n_2 ;
  wire \int_ier_reg_n_2_[0] ;
  wire int_isr6_out;
  wire \int_isr[0]_i_1_n_2 ;
  wire \int_isr[1]_i_1_n_2 ;
  wire \int_isr_reg_n_2_[0] ;
  wire interrupt;
  (* RTL_KEEP = "yes" *) wire [2:0]out;
  wire p_0_in;
  wire p_1_in;
  wire [7:2]rdata;
  wire \rdata[0]_i_1_n_2 ;
  wire \rdata[0]_i_2_n_2 ;
  wire \rdata[0]_i_3_n_2 ;
  wire \rdata[0]_i_4_n_2 ;
  wire \rdata[10]_i_1_n_2 ;
  wire \rdata[11]_i_1_n_2 ;
  wire \rdata[12]_i_1_n_2 ;
  wire \rdata[13]_i_1_n_2 ;
  wire \rdata[14]_i_1_n_2 ;
  wire \rdata[15]_i_1_n_2 ;
  wire \rdata[16]_i_1_n_2 ;
  wire \rdata[17]_i_1_n_2 ;
  wire \rdata[18]_i_1_n_2 ;
  wire \rdata[19]_i_1_n_2 ;
  wire \rdata[1]_i_1_n_2 ;
  wire \rdata[1]_i_2_n_2 ;
  wire \rdata[1]_i_3_n_2 ;
  wire \rdata[1]_i_4_n_2 ;
  wire \rdata[1]_i_5_n_2 ;
  wire \rdata[20]_i_1_n_2 ;
  wire \rdata[21]_i_1_n_2 ;
  wire \rdata[22]_i_1_n_2 ;
  wire \rdata[23]_i_1_n_2 ;
  wire \rdata[24]_i_1_n_2 ;
  wire \rdata[25]_i_1_n_2 ;
  wire \rdata[26]_i_1_n_2 ;
  wire \rdata[27]_i_1_n_2 ;
  wire \rdata[28]_i_1_n_2 ;
  wire \rdata[29]_i_1_n_2 ;
  wire \rdata[2]_i_2_n_2 ;
  wire \rdata[2]_i_3_n_2 ;
  wire \rdata[30]_i_1_n_2 ;
  wire \rdata[31]_i_1_n_2 ;
  wire \rdata[31]_i_3_n_2 ;
  wire \rdata[4]_i_1_n_2 ;
  wire \rdata[5]_i_1_n_2 ;
  wire \rdata[6]_i_1_n_2 ;
  wire \rdata[7]_i_2_n_2 ;
  wire \rdata[7]_i_3_n_2 ;
  wire \rdata[8]_i_1_n_2 ;
  wire \rdata[9]_i_1_n_2 ;
  wire \rdata_reg[3]_0 ;
  wire [1:0]rstate;
  wire \rstate[0]_i_1_n_2 ;
  wire [5:0]s_axi_CTL_ARADDR;
  wire s_axi_CTL_ARREADY;
  wire s_axi_CTL_ARVALID;
  wire [5:0]s_axi_CTL_AWADDR;
  wire s_axi_CTL_AWVALID;
  wire s_axi_CTL_BREADY;
  wire [31:0]s_axi_CTL_RDATA;
  wire s_axi_CTL_RREADY;
  wire s_axi_CTL_RVALID;
  wire [31:0]s_axi_CTL_WDATA;
  wire [3:0]s_axi_CTL_WSTRB;
  wire s_axi_CTL_WVALID;
  wire waddr;
  wire \waddr_reg_n_2_[0] ;
  wire \waddr_reg_n_2_[1] ;
  wire \waddr_reg_n_2_[2] ;
  wire \waddr_reg_n_2_[3] ;
  wire \waddr_reg_n_2_[4] ;
  wire \waddr_reg_n_2_[5] ;

  LUT5 #(
    .INIT(32'h000BFF0B)) 
    \/FSM_onehot_wstate[1]_i_1 
       (.I0(s_axi_CTL_BREADY),
        .I1(out[2]),
        .I2(out[1]),
        .I3(out[0]),
        .I4(s_axi_CTL_AWVALID),
        .O(\/FSM_onehot_wstate[1]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'h88B8)) 
    \/FSM_onehot_wstate[2]_i_1 
       (.I0(s_axi_CTL_AWVALID),
        .I1(out[0]),
        .I2(out[1]),
        .I3(s_axi_CTL_WVALID),
        .O(\/FSM_onehot_wstate[2]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'h0000F404)) 
    \FSM_onehot_wstate[3]_i_1 
       (.I0(s_axi_CTL_BREADY),
        .I1(out[2]),
        .I2(out[1]),
        .I3(s_axi_CTL_WVALID),
        .I4(out[0]),
        .O(\FSM_onehot_wstate[3]_i_1_n_2 ));
  (* KEEP = "yes" *) 
  FDSE #(
    .INIT(1'b1)) 
    \FSM_onehot_wstate_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(1'b0),
        .Q(\FSM_onehot_wstate_reg_n_2_[0] ),
        .S(SR));
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\/FSM_onehot_wstate[1]_i_1_n_2 ),
        .Q(out[0]),
        .R(SR));
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\/FSM_onehot_wstate[2]_i_1_n_2 ),
        .Q(out[1]),
        .R(SR));
  (* KEEP = "yes" *) 
  FDRE #(
    .INIT(1'b0)) 
    \FSM_onehot_wstate_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\FSM_onehot_wstate[3]_i_1_n_2 ),
        .Q(out[2]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \a1_reg_246[29]_i_1 
       (.I0(Q[0]),
        .I1(ap_start),
        .O(E));
  LUT4 #(
    .INIT(16'hF222)) 
    \ap_CS_fsm[0]_i_1 
       (.I0(Q[0]),
        .I1(ap_start),
        .I2(DATA_C_BVALID),
        .I3(Q[1]),
        .O(D[0]));
  LUT6 #(
    .INIT(64'h88B8888888888888)) 
    \ap_CS_fsm[1]_i_1 
       (.I0(ap_start),
        .I1(Q[0]),
        .I2(\ap_CS_fsm_reg[2] ),
        .I3(\ap_CS_fsm_reg[1] ),
        .I4(\ap_CS_fsm_reg[5] ),
        .I5(\ap_CS_fsm_reg[9] ),
        .O(D[1]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[0]_i_1 
       (.I0(s_axi_CTL_WDATA[0]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_a_reg_n_2_[0] ),
        .O(int_a0[0]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[10]_i_1 
       (.I0(s_axi_CTL_WDATA[10]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [8]),
        .O(int_a0[10]));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[11]_i_1 
       (.I0(s_axi_CTL_WDATA[11]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [9]),
        .O(int_a0[11]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[12]_i_1 
       (.I0(s_axi_CTL_WDATA[12]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [10]),
        .O(int_a0[12]));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[13]_i_1 
       (.I0(s_axi_CTL_WDATA[13]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [11]),
        .O(int_a0[13]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[14]_i_1 
       (.I0(s_axi_CTL_WDATA[14]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [12]),
        .O(int_a0[14]));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[15]_i_1 
       (.I0(s_axi_CTL_WDATA[15]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [13]),
        .O(int_a0[15]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[16]_i_1 
       (.I0(s_axi_CTL_WDATA[16]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [14]),
        .O(int_a0[16]));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[17]_i_1 
       (.I0(s_axi_CTL_WDATA[17]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [15]),
        .O(int_a0[17]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[18]_i_1 
       (.I0(s_axi_CTL_WDATA[18]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [16]),
        .O(int_a0[18]));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[19]_i_1 
       (.I0(s_axi_CTL_WDATA[19]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [17]),
        .O(int_a0[19]));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[1]_i_1 
       (.I0(s_axi_CTL_WDATA[1]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_a_reg_n_2_[1] ),
        .O(int_a0[1]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[20]_i_1 
       (.I0(s_axi_CTL_WDATA[20]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [18]),
        .O(int_a0[20]));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[21]_i_1 
       (.I0(s_axi_CTL_WDATA[21]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [19]),
        .O(int_a0[21]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[22]_i_1 
       (.I0(s_axi_CTL_WDATA[22]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [20]),
        .O(int_a0[22]));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[23]_i_1 
       (.I0(s_axi_CTL_WDATA[23]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\a1_reg_246_reg[29] [21]),
        .O(int_a0[23]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[24]_i_1 
       (.I0(s_axi_CTL_WDATA[24]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [22]),
        .O(int_a0[24]));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[25]_i_1 
       (.I0(s_axi_CTL_WDATA[25]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [23]),
        .O(int_a0[25]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[26]_i_1 
       (.I0(s_axi_CTL_WDATA[26]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [24]),
        .O(int_a0[26]));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[27]_i_1 
       (.I0(s_axi_CTL_WDATA[27]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [25]),
        .O(int_a0[27]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[28]_i_1 
       (.I0(s_axi_CTL_WDATA[28]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [26]),
        .O(int_a0[28]));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[29]_i_1 
       (.I0(s_axi_CTL_WDATA[29]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [27]),
        .O(int_a0[29]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[2]_i_1 
       (.I0(s_axi_CTL_WDATA[2]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\a1_reg_246_reg[29] [0]),
        .O(int_a0[2]));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[30]_i_1 
       (.I0(s_axi_CTL_WDATA[30]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [28]),
        .O(int_a0[30]));
  LUT5 #(
    .INIT(32'h00400000)) 
    \int_a[31]_i_1 
       (.I0(\waddr_reg_n_2_[2] ),
        .I1(\waddr_reg_n_2_[4] ),
        .I2(\int_a[31]_i_3_n_2 ),
        .I3(\waddr_reg_n_2_[5] ),
        .I4(\waddr_reg_n_2_[3] ),
        .O(\int_a[31]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[31]_i_2 
       (.I0(s_axi_CTL_WDATA[31]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\a1_reg_246_reg[29] [29]),
        .O(int_a0[31]));
  LUT4 #(
    .INIT(16'h0008)) 
    \int_a[31]_i_3 
       (.I0(s_axi_CTL_WVALID),
        .I1(out[1]),
        .I2(\waddr_reg_n_2_[0] ),
        .I3(\waddr_reg_n_2_[1] ),
        .O(\int_a[31]_i_3_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[3]_i_1 
       (.I0(s_axi_CTL_WDATA[3]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\a1_reg_246_reg[29] [1]),
        .O(int_a0[3]));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[4]_i_1 
       (.I0(s_axi_CTL_WDATA[4]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\a1_reg_246_reg[29] [2]),
        .O(int_a0[4]));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[5]_i_1 
       (.I0(s_axi_CTL_WDATA[5]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\a1_reg_246_reg[29] [3]),
        .O(int_a0[5]));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[6]_i_1 
       (.I0(s_axi_CTL_WDATA[6]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\a1_reg_246_reg[29] [4]),
        .O(int_a0[6]));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[7]_i_1 
       (.I0(s_axi_CTL_WDATA[7]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\a1_reg_246_reg[29] [5]),
        .O(int_a0[7]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[8]_i_1 
       (.I0(s_axi_CTL_WDATA[8]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [6]),
        .O(int_a0[8]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_a[9]_i_1 
       (.I0(s_axi_CTL_WDATA[9]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\a1_reg_246_reg[29] [7]),
        .O(int_a0[9]));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[0] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[0]),
        .Q(\int_a_reg_n_2_[0] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[10] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[10]),
        .Q(\a1_reg_246_reg[29] [8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[11] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[11]),
        .Q(\a1_reg_246_reg[29] [9]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[12] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[12]),
        .Q(\a1_reg_246_reg[29] [10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[13] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[13]),
        .Q(\a1_reg_246_reg[29] [11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[14] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[14]),
        .Q(\a1_reg_246_reg[29] [12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[15] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[15]),
        .Q(\a1_reg_246_reg[29] [13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[16] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[16]),
        .Q(\a1_reg_246_reg[29] [14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[17] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[17]),
        .Q(\a1_reg_246_reg[29] [15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[18] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[18]),
        .Q(\a1_reg_246_reg[29] [16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[19] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[19]),
        .Q(\a1_reg_246_reg[29] [17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[1] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[1]),
        .Q(\int_a_reg_n_2_[1] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[20] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[20]),
        .Q(\a1_reg_246_reg[29] [18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[21] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[21]),
        .Q(\a1_reg_246_reg[29] [19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[22] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[22]),
        .Q(\a1_reg_246_reg[29] [20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[23] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[23]),
        .Q(\a1_reg_246_reg[29] [21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[24] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[24]),
        .Q(\a1_reg_246_reg[29] [22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[25] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[25]),
        .Q(\a1_reg_246_reg[29] [23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[26] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[26]),
        .Q(\a1_reg_246_reg[29] [24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[27] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[27]),
        .Q(\a1_reg_246_reg[29] [25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[28] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[28]),
        .Q(\a1_reg_246_reg[29] [26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[29] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[29]),
        .Q(\a1_reg_246_reg[29] [27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[2] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[2]),
        .Q(\a1_reg_246_reg[29] [0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[30] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[30]),
        .Q(\a1_reg_246_reg[29] [28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[31] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[31]),
        .Q(\a1_reg_246_reg[29] [29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[3] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[3]),
        .Q(\a1_reg_246_reg[29] [1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[4] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[4]),
        .Q(\a1_reg_246_reg[29] [2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[5] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[5]),
        .Q(\a1_reg_246_reg[29] [3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[6] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[6]),
        .Q(\a1_reg_246_reg[29] [4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[7] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[7]),
        .Q(\a1_reg_246_reg[29] [5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[8] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[8]),
        .Q(\a1_reg_246_reg[29] [6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_a_reg[9] 
       (.C(ap_clk),
        .CE(\int_a[31]_i_1_n_2 ),
        .D(int_a0[9]),
        .Q(\a1_reg_246_reg[29] [7]),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFFFEFAAAAAAAA)) 
    int_ap_done_i_1
       (.I0(DATA_C_BREADY),
        .I1(int_ap_done_i_3_n_2),
        .I2(ar_hs),
        .I3(s_axi_CTL_ARADDR[0]),
        .I4(s_axi_CTL_ARADDR[5]),
        .I5(int_ap_done),
        .O(int_ap_done_i_1_n_2));
  LUT4 #(
    .INIT(16'hFFFE)) 
    int_ap_done_i_3
       (.I0(s_axi_CTL_ARADDR[3]),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(s_axi_CTL_ARADDR[1]),
        .I3(s_axi_CTL_ARADDR[2]),
        .O(int_ap_done_i_3_n_2));
  FDRE #(
    .INIT(1'b0)) 
    int_ap_done_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_ap_done_i_1_n_2),
        .Q(int_ap_done),
        .R(SR));
  LUT5 #(
    .INIT(32'hFFBFFF80)) 
    int_ap_start_i_1
       (.I0(int_auto_restart),
        .I1(Q[1]),
        .I2(DATA_C_BVALID),
        .I3(int_ap_start3_out),
        .I4(ap_start),
        .O(int_ap_start_i_1_n_2));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h00200000)) 
    int_ap_start_i_2
       (.I0(s_axi_CTL_WSTRB[0]),
        .I1(\waddr_reg_n_2_[3] ),
        .I2(\int_ier[1]_i_2_n_2 ),
        .I3(\waddr_reg_n_2_[2] ),
        .I4(s_axi_CTL_WDATA[0]),
        .O(int_ap_start3_out));
  FDRE #(
    .INIT(1'b0)) 
    int_ap_start_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_ap_start_i_1_n_2),
        .Q(ap_start),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFEFFFFF00200000)) 
    int_auto_restart_i_1
       (.I0(s_axi_CTL_WDATA[7]),
        .I1(\waddr_reg_n_2_[2] ),
        .I2(\int_ier[1]_i_2_n_2 ),
        .I3(\waddr_reg_n_2_[3] ),
        .I4(s_axi_CTL_WSTRB[0]),
        .I5(int_auto_restart),
        .O(int_auto_restart_i_1_n_2));
  FDRE #(
    .INIT(1'b0)) 
    int_auto_restart_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_auto_restart_i_1_n_2),
        .Q(int_auto_restart),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[0]_i_1 
       (.I0(s_axi_CTL_WDATA[0]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_b_reg_n_2_[0] ),
        .O(int_b0[0]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[10]_i_1 
       (.I0(s_axi_CTL_WDATA[10]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [8]),
        .O(int_b0[10]));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[11]_i_1 
       (.I0(s_axi_CTL_WDATA[11]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [9]),
        .O(int_b0[11]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[12]_i_1 
       (.I0(s_axi_CTL_WDATA[12]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [10]),
        .O(int_b0[12]));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[13]_i_1 
       (.I0(s_axi_CTL_WDATA[13]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [11]),
        .O(int_b0[13]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[14]_i_1 
       (.I0(s_axi_CTL_WDATA[14]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [12]),
        .O(int_b0[14]));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[15]_i_1 
       (.I0(s_axi_CTL_WDATA[15]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [13]),
        .O(int_b0[15]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[16]_i_1 
       (.I0(s_axi_CTL_WDATA[16]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [14]),
        .O(int_b0[16]));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[17]_i_1 
       (.I0(s_axi_CTL_WDATA[17]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [15]),
        .O(int_b0[17]));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[18]_i_1 
       (.I0(s_axi_CTL_WDATA[18]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [16]),
        .O(int_b0[18]));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[19]_i_1 
       (.I0(s_axi_CTL_WDATA[19]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [17]),
        .O(int_b0[19]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[1]_i_1 
       (.I0(s_axi_CTL_WDATA[1]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_b_reg_n_2_[1] ),
        .O(int_b0[1]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[20]_i_1 
       (.I0(s_axi_CTL_WDATA[20]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [18]),
        .O(int_b0[20]));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[21]_i_1 
       (.I0(s_axi_CTL_WDATA[21]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [19]),
        .O(int_b0[21]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[22]_i_1 
       (.I0(s_axi_CTL_WDATA[22]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [20]),
        .O(int_b0[22]));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[23]_i_1 
       (.I0(s_axi_CTL_WDATA[23]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\b3_reg_241_reg[29] [21]),
        .O(int_b0[23]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[24]_i_1 
       (.I0(s_axi_CTL_WDATA[24]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [22]),
        .O(int_b0[24]));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[25]_i_1 
       (.I0(s_axi_CTL_WDATA[25]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [23]),
        .O(int_b0[25]));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[26]_i_1 
       (.I0(s_axi_CTL_WDATA[26]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [24]),
        .O(int_b0[26]));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[27]_i_1 
       (.I0(s_axi_CTL_WDATA[27]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [25]),
        .O(int_b0[27]));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[28]_i_1 
       (.I0(s_axi_CTL_WDATA[28]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [26]),
        .O(int_b0[28]));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[29]_i_1 
       (.I0(s_axi_CTL_WDATA[29]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [27]),
        .O(int_b0[29]));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[2]_i_1 
       (.I0(s_axi_CTL_WDATA[2]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\b3_reg_241_reg[29] [0]),
        .O(int_b0[2]));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[30]_i_1 
       (.I0(s_axi_CTL_WDATA[30]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [28]),
        .O(int_b0[30]));
  LUT3 #(
    .INIT(8'h10)) 
    \int_b[31]_i_1 
       (.I0(\waddr_reg_n_2_[2] ),
        .I1(\waddr_reg_n_2_[3] ),
        .I2(\int_b[31]_i_3_n_2 ),
        .O(\int_b[31]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[31]_i_2 
       (.I0(s_axi_CTL_WDATA[31]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\b3_reg_241_reg[29] [29]),
        .O(int_b0[31]));
  LUT6 #(
    .INIT(64'h0000000000002000)) 
    \int_b[31]_i_3 
       (.I0(\waddr_reg_n_2_[5] ),
        .I1(\waddr_reg_n_2_[4] ),
        .I2(s_axi_CTL_WVALID),
        .I3(out[1]),
        .I4(\waddr_reg_n_2_[0] ),
        .I5(\waddr_reg_n_2_[1] ),
        .O(\int_b[31]_i_3_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[3]_i_1 
       (.I0(s_axi_CTL_WDATA[3]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\b3_reg_241_reg[29] [1]),
        .O(int_b0[3]));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[4]_i_1 
       (.I0(s_axi_CTL_WDATA[4]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\b3_reg_241_reg[29] [2]),
        .O(int_b0[4]));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[5]_i_1 
       (.I0(s_axi_CTL_WDATA[5]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\b3_reg_241_reg[29] [3]),
        .O(int_b0[5]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[6]_i_1 
       (.I0(s_axi_CTL_WDATA[6]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\b3_reg_241_reg[29] [4]),
        .O(int_b0[6]));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[7]_i_1 
       (.I0(s_axi_CTL_WDATA[7]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\b3_reg_241_reg[29] [5]),
        .O(int_b0[7]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[8]_i_1 
       (.I0(s_axi_CTL_WDATA[8]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [6]),
        .O(int_b0[8]));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_b[9]_i_1 
       (.I0(s_axi_CTL_WDATA[9]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\b3_reg_241_reg[29] [7]),
        .O(int_b0[9]));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[0] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[0]),
        .Q(\int_b_reg_n_2_[0] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[10] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[10]),
        .Q(\b3_reg_241_reg[29] [8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[11] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[11]),
        .Q(\b3_reg_241_reg[29] [9]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[12] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[12]),
        .Q(\b3_reg_241_reg[29] [10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[13] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[13]),
        .Q(\b3_reg_241_reg[29] [11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[14] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[14]),
        .Q(\b3_reg_241_reg[29] [12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[15] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[15]),
        .Q(\b3_reg_241_reg[29] [13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[16] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[16]),
        .Q(\b3_reg_241_reg[29] [14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[17] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[17]),
        .Q(\b3_reg_241_reg[29] [15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[18] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[18]),
        .Q(\b3_reg_241_reg[29] [16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[19] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[19]),
        .Q(\b3_reg_241_reg[29] [17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[1] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[1]),
        .Q(\int_b_reg_n_2_[1] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[20] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[20]),
        .Q(\b3_reg_241_reg[29] [18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[21] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[21]),
        .Q(\b3_reg_241_reg[29] [19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[22] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[22]),
        .Q(\b3_reg_241_reg[29] [20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[23] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[23]),
        .Q(\b3_reg_241_reg[29] [21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[24] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[24]),
        .Q(\b3_reg_241_reg[29] [22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[25] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[25]),
        .Q(\b3_reg_241_reg[29] [23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[26] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[26]),
        .Q(\b3_reg_241_reg[29] [24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[27] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[27]),
        .Q(\b3_reg_241_reg[29] [25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[28] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[28]),
        .Q(\b3_reg_241_reg[29] [26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[29] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[29]),
        .Q(\b3_reg_241_reg[29] [27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[2] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[2]),
        .Q(\b3_reg_241_reg[29] [0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[30] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[30]),
        .Q(\b3_reg_241_reg[29] [28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[31] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[31]),
        .Q(\b3_reg_241_reg[29] [29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[3] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[3]),
        .Q(\b3_reg_241_reg[29] [1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[4] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[4]),
        .Q(\b3_reg_241_reg[29] [2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[5] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[5]),
        .Q(\b3_reg_241_reg[29] [3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[6] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[6]),
        .Q(\b3_reg_241_reg[29] [4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[7] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[7]),
        .Q(\b3_reg_241_reg[29] [5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[8] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[8]),
        .Q(\b3_reg_241_reg[29] [6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_b_reg[9] 
       (.C(ap_clk),
        .CE(\int_b[31]_i_1_n_2 ),
        .D(int_b0[9]),
        .Q(\b3_reg_241_reg[29] [7]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[0]_i_1 
       (.I0(s_axi_CTL_WDATA[0]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_c_reg_n_2_[0] ),
        .O(int_c0[0]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[10]_i_1 
       (.I0(s_axi_CTL_WDATA[10]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [8]),
        .O(int_c0[10]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[11]_i_1 
       (.I0(s_axi_CTL_WDATA[11]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [9]),
        .O(int_c0[11]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[12]_i_1 
       (.I0(s_axi_CTL_WDATA[12]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [10]),
        .O(int_c0[12]));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[13]_i_1 
       (.I0(s_axi_CTL_WDATA[13]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [11]),
        .O(int_c0[13]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[14]_i_1 
       (.I0(s_axi_CTL_WDATA[14]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [12]),
        .O(int_c0[14]));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[15]_i_1 
       (.I0(s_axi_CTL_WDATA[15]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [13]),
        .O(int_c0[15]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[16]_i_1 
       (.I0(s_axi_CTL_WDATA[16]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [14]),
        .O(int_c0[16]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[17]_i_1 
       (.I0(s_axi_CTL_WDATA[17]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [15]),
        .O(int_c0[17]));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[18]_i_1 
       (.I0(s_axi_CTL_WDATA[18]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [16]),
        .O(int_c0[18]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[19]_i_1 
       (.I0(s_axi_CTL_WDATA[19]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [17]),
        .O(int_c0[19]));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[1]_i_1 
       (.I0(s_axi_CTL_WDATA[1]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_c_reg_n_2_[1] ),
        .O(int_c0[1]));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[20]_i_1 
       (.I0(s_axi_CTL_WDATA[20]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [18]),
        .O(int_c0[20]));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[21]_i_1 
       (.I0(s_axi_CTL_WDATA[21]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [19]),
        .O(int_c0[21]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[22]_i_1 
       (.I0(s_axi_CTL_WDATA[22]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [20]),
        .O(int_c0[22]));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[23]_i_1 
       (.I0(s_axi_CTL_WDATA[23]),
        .I1(s_axi_CTL_WSTRB[2]),
        .I2(\c5_reg_236_reg[29] [21]),
        .O(int_c0[23]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[24]_i_1 
       (.I0(s_axi_CTL_WDATA[24]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [22]),
        .O(int_c0[24]));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[25]_i_1 
       (.I0(s_axi_CTL_WDATA[25]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [23]),
        .O(int_c0[25]));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[26]_i_1 
       (.I0(s_axi_CTL_WDATA[26]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [24]),
        .O(int_c0[26]));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[27]_i_1 
       (.I0(s_axi_CTL_WDATA[27]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [25]),
        .O(int_c0[27]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[28]_i_1 
       (.I0(s_axi_CTL_WDATA[28]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [26]),
        .O(int_c0[28]));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[29]_i_1 
       (.I0(s_axi_CTL_WDATA[29]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [27]),
        .O(int_c0[29]));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[2]_i_1 
       (.I0(s_axi_CTL_WDATA[2]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\c5_reg_236_reg[29] [0]),
        .O(int_c0[2]));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[30]_i_1 
       (.I0(s_axi_CTL_WDATA[30]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [28]),
        .O(int_c0[30]));
  LUT3 #(
    .INIT(8'h40)) 
    \int_c[31]_i_1 
       (.I0(\waddr_reg_n_2_[2] ),
        .I1(\waddr_reg_n_2_[3] ),
        .I2(\int_b[31]_i_3_n_2 ),
        .O(\int_c[31]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[31]_i_2 
       (.I0(s_axi_CTL_WDATA[31]),
        .I1(s_axi_CTL_WSTRB[3]),
        .I2(\c5_reg_236_reg[29] [29]),
        .O(int_c0[31]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[3]_i_1 
       (.I0(s_axi_CTL_WDATA[3]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\c5_reg_236_reg[29] [1]),
        .O(int_c0[3]));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[4]_i_1 
       (.I0(s_axi_CTL_WDATA[4]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\c5_reg_236_reg[29] [2]),
        .O(int_c0[4]));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[5]_i_1 
       (.I0(s_axi_CTL_WDATA[5]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\c5_reg_236_reg[29] [3]),
        .O(int_c0[5]));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[6]_i_1 
       (.I0(s_axi_CTL_WDATA[6]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\c5_reg_236_reg[29] [4]),
        .O(int_c0[6]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[7]_i_1 
       (.I0(s_axi_CTL_WDATA[7]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\c5_reg_236_reg[29] [5]),
        .O(int_c0[7]));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[8]_i_1 
       (.I0(s_axi_CTL_WDATA[8]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [6]),
        .O(int_c0[8]));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \int_c[9]_i_1 
       (.I0(s_axi_CTL_WDATA[9]),
        .I1(s_axi_CTL_WSTRB[1]),
        .I2(\c5_reg_236_reg[29] [7]),
        .O(int_c0[9]));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[0] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[0]),
        .Q(\int_c_reg_n_2_[0] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[10] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[10]),
        .Q(\c5_reg_236_reg[29] [8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[11] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[11]),
        .Q(\c5_reg_236_reg[29] [9]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[12] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[12]),
        .Q(\c5_reg_236_reg[29] [10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[13] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[13]),
        .Q(\c5_reg_236_reg[29] [11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[14] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[14]),
        .Q(\c5_reg_236_reg[29] [12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[15] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[15]),
        .Q(\c5_reg_236_reg[29] [13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[16] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[16]),
        .Q(\c5_reg_236_reg[29] [14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[17] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[17]),
        .Q(\c5_reg_236_reg[29] [15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[18] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[18]),
        .Q(\c5_reg_236_reg[29] [16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[19] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[19]),
        .Q(\c5_reg_236_reg[29] [17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[1] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[1]),
        .Q(\int_c_reg_n_2_[1] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[20] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[20]),
        .Q(\c5_reg_236_reg[29] [18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[21] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[21]),
        .Q(\c5_reg_236_reg[29] [19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[22] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[22]),
        .Q(\c5_reg_236_reg[29] [20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[23] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[23]),
        .Q(\c5_reg_236_reg[29] [21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[24] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[24]),
        .Q(\c5_reg_236_reg[29] [22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[25] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[25]),
        .Q(\c5_reg_236_reg[29] [23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[26] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[26]),
        .Q(\c5_reg_236_reg[29] [24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[27] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[27]),
        .Q(\c5_reg_236_reg[29] [25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[28] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[28]),
        .Q(\c5_reg_236_reg[29] [26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[29] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[29]),
        .Q(\c5_reg_236_reg[29] [27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[2] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[2]),
        .Q(\c5_reg_236_reg[29] [0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[30] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[30]),
        .Q(\c5_reg_236_reg[29] [28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[31] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[31]),
        .Q(\c5_reg_236_reg[29] [29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[3] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[3]),
        .Q(\c5_reg_236_reg[29] [1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[4] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[4]),
        .Q(\c5_reg_236_reg[29] [2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[5] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[5]),
        .Q(\c5_reg_236_reg[29] [3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[6] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[6]),
        .Q(\c5_reg_236_reg[29] [4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[7] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[7]),
        .Q(\c5_reg_236_reg[29] [5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[8] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[8]),
        .Q(\c5_reg_236_reg[29] [6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_c_reg[9] 
       (.C(ap_clk),
        .CE(\int_c[31]_i_1_n_2 ),
        .D(int_c0[9]),
        .Q(\c5_reg_236_reg[29] [7]),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFBFFFFF00800000)) 
    int_gie_i_1
       (.I0(s_axi_CTL_WDATA[0]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\int_ier[1]_i_2_n_2 ),
        .I3(\waddr_reg_n_2_[3] ),
        .I4(\waddr_reg_n_2_[2] ),
        .I5(int_gie_reg_n_2),
        .O(int_gie_i_1_n_2));
  FDRE #(
    .INIT(1'b0)) 
    int_gie_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(int_gie_i_1_n_2),
        .Q(int_gie_reg_n_2),
        .R(SR));
  LUT6 #(
    .INIT(64'hFBFFFFFF08000000)) 
    \int_ier[0]_i_1 
       (.I0(s_axi_CTL_WDATA[0]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\waddr_reg_n_2_[2] ),
        .I3(\waddr_reg_n_2_[3] ),
        .I4(\int_ier[1]_i_2_n_2 ),
        .I5(\int_ier_reg_n_2_[0] ),
        .O(\int_ier[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hFBFFFFFF08000000)) 
    \int_ier[1]_i_1 
       (.I0(s_axi_CTL_WDATA[1]),
        .I1(s_axi_CTL_WSTRB[0]),
        .I2(\waddr_reg_n_2_[2] ),
        .I3(\waddr_reg_n_2_[3] ),
        .I4(\int_ier[1]_i_2_n_2 ),
        .I5(p_0_in),
        .O(\int_ier[1]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h0000000000000040)) 
    \int_ier[1]_i_2 
       (.I0(\waddr_reg_n_2_[4] ),
        .I1(s_axi_CTL_WVALID),
        .I2(out[1]),
        .I3(\waddr_reg_n_2_[0] ),
        .I4(\waddr_reg_n_2_[1] ),
        .I5(\waddr_reg_n_2_[5] ),
        .O(\int_ier[1]_i_2_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \int_ier_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\int_ier[0]_i_1_n_2 ),
        .Q(\int_ier_reg_n_2_[0] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_ier_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\int_ier[1]_i_1_n_2 ),
        .Q(p_0_in),
        .R(SR));
  LUT6 #(
    .INIT(64'hF7777777F8888888)) 
    \int_isr[0]_i_1 
       (.I0(s_axi_CTL_WDATA[0]),
        .I1(int_isr6_out),
        .I2(DATA_C_BVALID),
        .I3(Q[1]),
        .I4(\int_ier_reg_n_2_[0] ),
        .I5(\int_isr_reg_n_2_[0] ),
        .O(\int_isr[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    \int_isr[0]_i_2 
       (.I0(s_axi_CTL_WSTRB[0]),
        .I1(\waddr_reg_n_2_[3] ),
        .I2(\int_ier[1]_i_2_n_2 ),
        .I3(\waddr_reg_n_2_[2] ),
        .O(int_isr6_out));
  LUT6 #(
    .INIT(64'hF7777777F8888888)) 
    \int_isr[1]_i_1 
       (.I0(s_axi_CTL_WDATA[1]),
        .I1(int_isr6_out),
        .I2(p_0_in),
        .I3(DATA_C_BVALID),
        .I4(Q[1]),
        .I5(p_1_in),
        .O(\int_isr[1]_i_1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \int_isr_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\int_isr[0]_i_1_n_2 ),
        .Q(\int_isr_reg_n_2_[0] ),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \int_isr_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\int_isr[1]_i_1_n_2 ),
        .Q(p_1_in),
        .R(SR));
  LUT3 #(
    .INIT(8'hE0)) 
    interrupt_INST_0
       (.I0(\int_isr_reg_n_2_[0] ),
        .I1(p_1_in),
        .I2(int_gie_reg_n_2),
        .O(interrupt));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'h000000E2)) 
    \rdata[0]_i_1 
       (.I0(\rdata[0]_i_2_n_2 ),
        .I1(s_axi_CTL_ARADDR[2]),
        .I2(\rdata[0]_i_3_n_2 ),
        .I3(s_axi_CTL_ARADDR[0]),
        .I4(s_axi_CTL_ARADDR[1]),
        .O(\rdata[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h88888888BBB888B8)) 
    \rdata[0]_i_2 
       (.I0(\rdata[0]_i_4_n_2 ),
        .I1(s_axi_CTL_ARADDR[3]),
        .I2(ap_start),
        .I3(s_axi_CTL_ARADDR[5]),
        .I4(\int_b_reg_n_2_[0] ),
        .I5(s_axi_CTL_ARADDR[4]),
        .O(\rdata[0]_i_2_n_2 ));
  LUT5 #(
    .INIT(32'h11100010)) 
    \rdata[0]_i_3 
       (.I0(s_axi_CTL_ARADDR[5]),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(int_gie_reg_n_2),
        .I3(s_axi_CTL_ARADDR[3]),
        .I4(\int_isr_reg_n_2_[0] ),
        .O(\rdata[0]_i_3_n_2 ));
  LUT5 #(
    .INIT(32'h30BB3088)) 
    \rdata[0]_i_4 
       (.I0(\int_a_reg_n_2_[0] ),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(\int_c_reg_n_2_[0] ),
        .I3(s_axi_CTL_ARADDR[5]),
        .I4(\int_ier_reg_n_2_[0] ),
        .O(\rdata[0]_i_4_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[10]_i_1 
       (.I0(\a1_reg_246_reg[29] [8]),
        .I1(\c5_reg_236_reg[29] [8]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [8]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[10]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[11]_i_1 
       (.I0(\a1_reg_246_reg[29] [9]),
        .I1(\c5_reg_236_reg[29] [9]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [9]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[11]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[12]_i_1 
       (.I0(\a1_reg_246_reg[29] [10]),
        .I1(\c5_reg_236_reg[29] [10]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [10]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[12]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[13]_i_1 
       (.I0(\a1_reg_246_reg[29] [11]),
        .I1(\c5_reg_236_reg[29] [11]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [11]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[13]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[14]_i_1 
       (.I0(\a1_reg_246_reg[29] [12]),
        .I1(\c5_reg_236_reg[29] [12]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [12]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[14]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[15]_i_1 
       (.I0(\a1_reg_246_reg[29] [13]),
        .I1(\c5_reg_236_reg[29] [13]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [13]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[15]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[16]_i_1 
       (.I0(\a1_reg_246_reg[29] [14]),
        .I1(\c5_reg_236_reg[29] [14]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [14]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[16]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[17]_i_1 
       (.I0(\a1_reg_246_reg[29] [15]),
        .I1(\c5_reg_236_reg[29] [15]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [15]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[17]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[18]_i_1 
       (.I0(\a1_reg_246_reg[29] [16]),
        .I1(\c5_reg_236_reg[29] [16]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [16]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[18]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[19]_i_1 
       (.I0(\a1_reg_246_reg[29] [17]),
        .I1(\c5_reg_236_reg[29] [17]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [17]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[19]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h000000002222E222)) 
    \rdata[1]_i_1 
       (.I0(\rdata[1]_i_2_n_2 ),
        .I1(s_axi_CTL_ARADDR[2]),
        .I2(p_1_in),
        .I3(s_axi_CTL_ARADDR[3]),
        .I4(\rdata[1]_i_3_n_2 ),
        .I5(\rdata[1]_i_4_n_2 ),
        .O(\rdata[1]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h88888888BBB888B8)) 
    \rdata[1]_i_2 
       (.I0(\rdata[1]_i_5_n_2 ),
        .I1(s_axi_CTL_ARADDR[3]),
        .I2(int_ap_done),
        .I3(s_axi_CTL_ARADDR[5]),
        .I4(\int_b_reg_n_2_[1] ),
        .I5(s_axi_CTL_ARADDR[4]),
        .O(\rdata[1]_i_2_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \rdata[1]_i_3 
       (.I0(s_axi_CTL_ARADDR[5]),
        .I1(s_axi_CTL_ARADDR[4]),
        .O(\rdata[1]_i_3_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \rdata[1]_i_4 
       (.I0(s_axi_CTL_ARADDR[1]),
        .I1(s_axi_CTL_ARADDR[0]),
        .O(\rdata[1]_i_4_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h30BB3088)) 
    \rdata[1]_i_5 
       (.I0(\int_a_reg_n_2_[1] ),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(\int_c_reg_n_2_[1] ),
        .I3(s_axi_CTL_ARADDR[5]),
        .I4(p_0_in),
        .O(\rdata[1]_i_5_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[20]_i_1 
       (.I0(\a1_reg_246_reg[29] [18]),
        .I1(\c5_reg_236_reg[29] [18]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [18]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[20]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[21]_i_1 
       (.I0(\a1_reg_246_reg[29] [19]),
        .I1(\c5_reg_236_reg[29] [19]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [19]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[21]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[22]_i_1 
       (.I0(\a1_reg_246_reg[29] [20]),
        .I1(\c5_reg_236_reg[29] [20]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [20]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[22]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[23]_i_1 
       (.I0(\a1_reg_246_reg[29] [21]),
        .I1(\c5_reg_236_reg[29] [21]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [21]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[23]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[24]_i_1 
       (.I0(\a1_reg_246_reg[29] [22]),
        .I1(\c5_reg_236_reg[29] [22]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [22]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[24]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[25]_i_1 
       (.I0(\a1_reg_246_reg[29] [23]),
        .I1(\c5_reg_236_reg[29] [23]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [23]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[25]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[26]_i_1 
       (.I0(\a1_reg_246_reg[29] [24]),
        .I1(\c5_reg_236_reg[29] [24]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [24]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[26]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[27]_i_1 
       (.I0(\a1_reg_246_reg[29] [25]),
        .I1(\c5_reg_236_reg[29] [25]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [25]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[27]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[28]_i_1 
       (.I0(\a1_reg_246_reg[29] [26]),
        .I1(\c5_reg_236_reg[29] [26]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [26]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[28]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[29]_i_1 
       (.I0(\a1_reg_246_reg[29] [27]),
        .I1(\c5_reg_236_reg[29] [27]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [27]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[29]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h0101010000000100)) 
    \rdata[2]_i_1 
       (.I0(s_axi_CTL_ARADDR[1]),
        .I1(s_axi_CTL_ARADDR[0]),
        .I2(s_axi_CTL_ARADDR[2]),
        .I3(\rdata[2]_i_2_n_2 ),
        .I4(s_axi_CTL_ARADDR[3]),
        .I5(\rdata[2]_i_3_n_2 ),
        .O(rdata[2]));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'h0000F404)) 
    \rdata[2]_i_2 
       (.I0(ap_start),
        .I1(Q[0]),
        .I2(s_axi_CTL_ARADDR[5]),
        .I3(\b3_reg_241_reg[29] [0]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[2]_i_2_n_2 ));
  LUT4 #(
    .INIT(16'h3808)) 
    \rdata[2]_i_3 
       (.I0(\a1_reg_246_reg[29] [0]),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(s_axi_CTL_ARADDR[5]),
        .I3(\c5_reg_236_reg[29] [0]),
        .O(\rdata[2]_i_3_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[30]_i_1 
       (.I0(\a1_reg_246_reg[29] [28]),
        .I1(\c5_reg_236_reg[29] [28]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [28]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[30]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hAAAAAAAAAAAAA88A)) 
    \rdata[31]_i_1 
       (.I0(ar_hs),
        .I1(s_axi_CTL_ARADDR[1]),
        .I2(s_axi_CTL_ARADDR[5]),
        .I3(s_axi_CTL_ARADDR[4]),
        .I4(s_axi_CTL_ARADDR[0]),
        .I5(s_axi_CTL_ARADDR[2]),
        .O(\rdata[31]_i_1_n_2 ));
  LUT3 #(
    .INIT(8'h10)) 
    \rdata[31]_i_2 
       (.I0(rstate[0]),
        .I1(rstate[1]),
        .I2(s_axi_CTL_ARVALID),
        .O(ar_hs));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[31]_i_3 
       (.I0(\a1_reg_246_reg[29] [29]),
        .I1(\c5_reg_236_reg[29] [29]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [29]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[31]_i_3_n_2 ));
  LUT4 #(
    .INIT(16'h3808)) 
    \rdata[3]_i_3 
       (.I0(\a1_reg_246_reg[29] [1]),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(s_axi_CTL_ARADDR[5]),
        .I3(\c5_reg_236_reg[29] [1]),
        .O(\rdata_reg[3]_0 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[4]_i_1 
       (.I0(\a1_reg_246_reg[29] [2]),
        .I1(\c5_reg_236_reg[29] [2]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [2]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[4]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[5]_i_1 
       (.I0(\a1_reg_246_reg[29] [3]),
        .I1(\c5_reg_236_reg[29] [3]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [3]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[5]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[6]_i_1 
       (.I0(\a1_reg_246_reg[29] [4]),
        .I1(\c5_reg_236_reg[29] [4]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [4]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[6]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h0101010000000100)) 
    \rdata[7]_i_1 
       (.I0(s_axi_CTL_ARADDR[1]),
        .I1(s_axi_CTL_ARADDR[0]),
        .I2(s_axi_CTL_ARADDR[2]),
        .I3(\rdata[7]_i_2_n_2 ),
        .I4(s_axi_CTL_ARADDR[3]),
        .I5(\rdata[7]_i_3_n_2 ),
        .O(rdata[7]));
  LUT4 #(
    .INIT(16'h00E2)) 
    \rdata[7]_i_2 
       (.I0(int_auto_restart),
        .I1(s_axi_CTL_ARADDR[5]),
        .I2(\b3_reg_241_reg[29] [5]),
        .I3(s_axi_CTL_ARADDR[4]),
        .O(\rdata[7]_i_2_n_2 ));
  LUT4 #(
    .INIT(16'h3808)) 
    \rdata[7]_i_3 
       (.I0(\a1_reg_246_reg[29] [5]),
        .I1(s_axi_CTL_ARADDR[4]),
        .I2(s_axi_CTL_ARADDR[5]),
        .I3(\c5_reg_236_reg[29] [5]),
        .O(\rdata[7]_i_3_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[8]_i_1 
       (.I0(\a1_reg_246_reg[29] [6]),
        .I1(\c5_reg_236_reg[29] [6]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [6]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[8]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'hA0A0CFC0)) 
    \rdata[9]_i_1 
       (.I0(\a1_reg_246_reg[29] [7]),
        .I1(\c5_reg_236_reg[29] [7]),
        .I2(s_axi_CTL_ARADDR[3]),
        .I3(\b3_reg_241_reg[29] [7]),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[9]_i_1_n_2 ));
  FDRE \rdata_reg[0] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[0]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[0]),
        .R(1'b0));
  FDRE \rdata_reg[10] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[10]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[10]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[11] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[11]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[11]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[12] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[12]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[12]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[13] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[13]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[13]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[14] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[14]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[14]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[15] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[15]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[15]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[16] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[16]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[16]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[17] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[17]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[17]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[18] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[18]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[18]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[19] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[19]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[19]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[1] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[1]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[1]),
        .R(1'b0));
  FDRE \rdata_reg[20] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[20]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[20]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[21] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[21]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[21]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[22] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[22]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[22]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[23] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[23]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[23]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[24] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[24]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[24]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[25] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[25]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[25]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[26] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[26]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[26]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[27] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[27]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[27]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[28] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[28]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[28]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[29] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[29]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[29]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[2] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[2]),
        .Q(s_axi_CTL_RDATA[2]),
        .R(1'b0));
  FDRE \rdata_reg[30] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[30]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[30]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[31] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[31]_i_3_n_2 ),
        .Q(s_axi_CTL_RDATA[31]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[3] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\ap_CS_fsm_reg[13] ),
        .Q(s_axi_CTL_RDATA[3]),
        .R(1'b0));
  FDRE \rdata_reg[4] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[4]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[4]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[5] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[5]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[5]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[6] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[6]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[6]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[7] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(rdata[7]),
        .Q(s_axi_CTL_RDATA[7]),
        .R(1'b0));
  FDRE \rdata_reg[8] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[8]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[8]),
        .R(\rdata[31]_i_1_n_2 ));
  FDRE \rdata_reg[9] 
       (.C(ap_clk),
        .CE(ar_hs),
        .D(\rdata[9]_i_1_n_2 ),
        .Q(s_axi_CTL_RDATA[9]),
        .R(\rdata[31]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT4 #(
    .INIT(16'h002E)) 
    \rstate[0]_i_1 
       (.I0(s_axi_CTL_ARVALID),
        .I1(rstate[0]),
        .I2(s_axi_CTL_RREADY),
        .I3(rstate[1]),
        .O(\rstate[0]_i_1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \rstate_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\rstate[0]_i_1_n_2 ),
        .Q(rstate[0]),
        .R(SR));
  FDSE #(
    .INIT(1'b1)) 
    \rstate_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(1'b0),
        .Q(rstate[1]),
        .S(SR));
  LUT2 #(
    .INIT(4'h1)) 
    s_axi_CTL_ARREADY_INST_0
       (.I0(rstate[1]),
        .I1(rstate[0]),
        .O(s_axi_CTL_ARREADY));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT2 #(
    .INIT(4'h2)) 
    s_axi_CTL_RVALID_INST_0
       (.I0(rstate[0]),
        .I1(rstate[1]),
        .O(s_axi_CTL_RVALID));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[5]_i_1__2 
       (.I0(out[0]),
        .I1(s_axi_CTL_AWVALID),
        .O(waddr));
  FDRE \waddr_reg[0] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_CTL_AWADDR[0]),
        .Q(\waddr_reg_n_2_[0] ),
        .R(1'b0));
  FDRE \waddr_reg[1] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_CTL_AWADDR[1]),
        .Q(\waddr_reg_n_2_[1] ),
        .R(1'b0));
  FDRE \waddr_reg[2] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_CTL_AWADDR[2]),
        .Q(\waddr_reg_n_2_[2] ),
        .R(1'b0));
  FDRE \waddr_reg[3] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_CTL_AWADDR[3]),
        .Q(\waddr_reg_n_2_[3] ),
        .R(1'b0));
  FDRE \waddr_reg[4] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_CTL_AWADDR[4]),
        .Q(\waddr_reg_n_2_[4] ),
        .R(1'b0));
  FDRE \waddr_reg[5] 
       (.C(ap_clk),
        .CE(waddr),
        .D(s_axi_CTL_AWADDR[5]),
        .Q(\waddr_reg_n_2_[5] ),
        .R(1'b0));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi
   (D,
    DATA_A_ARREADY,
    \ap_CS_fsm_reg[9] ,
    ap_block_pp0_stage0_flag00011011,
    DATA_A_RREADY,
    tmp_product,
    E,
    WEBWE,
    m_axi_DATA_A_RREADY,
    ap_enable_reg_pp0_iter1_reg,
    ap_enable_reg_pp0_iter3_reg,
    ap_enable_reg_pp0_iter2_reg,
    \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ,
    \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ,
    \tmp_reg_287_reg[0] ,
    \DATA_B_addr_read_reg_282_reg[31] ,
    m_axi_DATA_A_ARADDR,
    \m_axi_DATA_A_ARLEN[3] ,
    ap_reg_ioackin_DATA_C_WREADY_reg,
    m_axi_DATA_A_ARVALID,
    SR,
    \DATA_A_addr_read_reg_277_reg[31] ,
    ap_reg_ioackin_DATA_A_ARREADY,
    DATA_B_ARREADY,
    ap_reg_ioackin_DATA_B_ARREADY_reg,
    Q,
    ap_enable_reg_pp0_iter4_reg,
    ap_enable_reg_pp0_iter3,
    ap_enable_reg_pp0_iter0,
    ap_enable_reg_pp0_iter1_reg_0,
    exitcond_fu_220_p2,
    \exitcond_reg_268_reg[0] ,
    ap_reg_ioackin_DATA_C_WREADY_reg_0,
    DATA_C_WREADY,
    ap_reg_pp0_iter3_exitcond_reg_268,
    ap_enable_reg_pp0_iter4_reg_0,
    rdata_valid,
    ap_rst_n,
    m_axi_DATA_A_RVALID,
    ap_enable_reg_pp0_iter2,
    ap_reg_pp0_iter2_exitcond_reg_268,
    ap_reg_pp0_iter1_exitcond_reg_268,
    m_axi_DATA_A_ARREADY,
    DATA_C_AWREADY,
    ap_clk,
    m_axi_DATA_A_RLAST,
    m_axi_DATA_A_RRESP,
    ap_rst_n_0,
    \a1_reg_246_reg[29] );
  output [1:0]D;
  output DATA_A_ARREADY;
  output \ap_CS_fsm_reg[9] ;
  output ap_block_pp0_stage0_flag00011011;
  output DATA_A_RREADY;
  output tmp_product;
  output [0:0]E;
  output [0:0]WEBWE;
  output m_axi_DATA_A_RREADY;
  output ap_enable_reg_pp0_iter1_reg;
  output ap_enable_reg_pp0_iter3_reg;
  output ap_enable_reg_pp0_iter2_reg;
  output \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ;
  output \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ;
  output [0:0]\tmp_reg_287_reg[0] ;
  output [0:0]\DATA_B_addr_read_reg_282_reg[31] ;
  output [29:0]m_axi_DATA_A_ARADDR;
  output [3:0]\m_axi_DATA_A_ARLEN[3] ;
  output ap_reg_ioackin_DATA_C_WREADY_reg;
  output m_axi_DATA_A_ARVALID;
  output [0:0]SR;
  output [31:0]\DATA_A_addr_read_reg_277_reg[31] ;
  input ap_reg_ioackin_DATA_A_ARREADY;
  input DATA_B_ARREADY;
  input ap_reg_ioackin_DATA_B_ARREADY_reg;
  input [2:0]Q;
  input ap_enable_reg_pp0_iter4_reg;
  input ap_enable_reg_pp0_iter3;
  input ap_enable_reg_pp0_iter0;
  input ap_enable_reg_pp0_iter1_reg_0;
  input exitcond_fu_220_p2;
  input \exitcond_reg_268_reg[0] ;
  input ap_reg_ioackin_DATA_C_WREADY_reg_0;
  input DATA_C_WREADY;
  input ap_reg_pp0_iter3_exitcond_reg_268;
  input ap_enable_reg_pp0_iter4_reg_0;
  input rdata_valid;
  input ap_rst_n;
  input m_axi_DATA_A_RVALID;
  input ap_enable_reg_pp0_iter2;
  input ap_reg_pp0_iter2_exitcond_reg_268;
  input ap_reg_pp0_iter1_exitcond_reg_268;
  input m_axi_DATA_A_ARREADY;
  input DATA_C_AWREADY;
  input ap_clk;
  input [32:0]m_axi_DATA_A_RLAST;
  input [1:0]m_axi_DATA_A_RRESP;
  input [0:0]ap_rst_n_0;
  input [29:0]\a1_reg_246_reg[29] ;

  wire [1:0]D;
  wire DATA_A_ARREADY;
  wire DATA_A_RREADY;
  wire [31:0]\DATA_A_addr_read_reg_277_reg[31] ;
  wire DATA_B_ARREADY;
  wire [0:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire DATA_C_AWREADY;
  wire DATA_C_WREADY;
  wire [0:0]E;
  wire [2:0]Q;
  wire [0:0]SR;
  wire [0:0]WEBWE;
  wire [29:0]\a1_reg_246_reg[29] ;
  wire \ap_CS_fsm_reg[9] ;
  wire ap_block_pp0_stage0_flag00011011;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter1_reg;
  wire ap_enable_reg_pp0_iter1_reg_0;
  wire ap_enable_reg_pp0_iter2;
  wire ap_enable_reg_pp0_iter2_reg;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter3_reg;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_enable_reg_pp0_iter4_reg_0;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg;
  wire ap_reg_ioackin_DATA_C_WREADY_reg;
  wire ap_reg_ioackin_DATA_C_WREADY_reg_0;
  wire ap_reg_pp0_iter1_exitcond_reg_268;
  wire ap_reg_pp0_iter2_exitcond_reg_268;
  wire \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ;
  wire ap_rst_n;
  wire [0:0]ap_rst_n_0;
  wire exitcond_fu_220_p2;
  wire \exitcond_reg_268_reg[0] ;
  wire [29:0]m_axi_DATA_A_ARADDR;
  wire [3:0]\m_axi_DATA_A_ARLEN[3] ;
  wire m_axi_DATA_A_ARREADY;
  wire m_axi_DATA_A_ARVALID;
  wire [32:0]m_axi_DATA_A_RLAST;
  wire m_axi_DATA_A_RREADY;
  wire [1:0]m_axi_DATA_A_RRESP;
  wire m_axi_DATA_A_RVALID;
  wire rdata_valid;
  wire tmp_product;
  wire [0:0]\tmp_reg_287_reg[0] ;

  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_read bus_read
       (.ARLEN(\m_axi_DATA_A_ARLEN[3] ),
        .D(D),
        .DATA_A_RREADY(DATA_A_RREADY),
        .\DATA_A_addr_read_reg_277_reg[31] (\DATA_A_addr_read_reg_277_reg[31] ),
        .DATA_B_ARREADY(DATA_B_ARREADY),
        .\DATA_B_addr_read_reg_282_reg[31] (\DATA_B_addr_read_reg_282_reg[31] ),
        .DATA_C_AWREADY(DATA_C_AWREADY),
        .DATA_C_WREADY(DATA_C_WREADY),
        .E(E),
        .Q(Q),
        .SR(SR),
        .WEBWE(WEBWE),
        .\a1_reg_246_reg[29] (\a1_reg_246_reg[29] ),
        .\ap_CS_fsm_reg[9] (\ap_CS_fsm_reg[9] ),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter0(ap_enable_reg_pp0_iter0),
        .ap_enable_reg_pp0_iter1_reg(ap_block_pp0_stage0_flag00011011),
        .ap_enable_reg_pp0_iter1_reg_0(ap_enable_reg_pp0_iter1_reg),
        .ap_enable_reg_pp0_iter1_reg_1(ap_enable_reg_pp0_iter1_reg_0),
        .ap_enable_reg_pp0_iter2(ap_enable_reg_pp0_iter2),
        .ap_enable_reg_pp0_iter2_reg(ap_enable_reg_pp0_iter2_reg),
        .ap_enable_reg_pp0_iter3(ap_enable_reg_pp0_iter3),
        .ap_enable_reg_pp0_iter3_reg(ap_enable_reg_pp0_iter3_reg),
        .ap_enable_reg_pp0_iter4_reg(ap_enable_reg_pp0_iter4_reg),
        .ap_enable_reg_pp0_iter4_reg_0(ap_enable_reg_pp0_iter4_reg_0),
        .ap_reg_ioackin_DATA_A_ARREADY(ap_reg_ioackin_DATA_A_ARREADY),
        .ap_reg_ioackin_DATA_B_ARREADY_reg(ap_reg_ioackin_DATA_B_ARREADY_reg),
        .ap_reg_ioackin_DATA_C_WREADY_reg(ap_reg_ioackin_DATA_C_WREADY_reg),
        .ap_reg_ioackin_DATA_C_WREADY_reg_0(ap_reg_ioackin_DATA_C_WREADY_reg_0),
        .ap_reg_pp0_iter1_exitcond_reg_268(ap_reg_pp0_iter1_exitcond_reg_268),
        .ap_reg_pp0_iter2_exitcond_reg_268(ap_reg_pp0_iter2_exitcond_reg_268),
        .\ap_reg_pp0_iter2_exitcond_reg_268_reg[0] (\ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ),
        .ap_reg_pp0_iter3_exitcond_reg_268(ap_reg_pp0_iter3_exitcond_reg_268),
        .\ap_reg_pp0_iter3_exitcond_reg_268_reg[0] (\ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ),
        .ap_rst_n(ap_rst_n),
        .ap_rst_n_0(ap_rst_n_0),
        .exitcond_fu_220_p2(exitcond_fu_220_p2),
        .\exitcond_reg_268_reg[0] (\exitcond_reg_268_reg[0] ),
        .m_axi_DATA_A_ARADDR(m_axi_DATA_A_ARADDR),
        .m_axi_DATA_A_ARREADY(m_axi_DATA_A_ARREADY),
        .m_axi_DATA_A_ARVALID(m_axi_DATA_A_ARVALID),
        .m_axi_DATA_A_RLAST(m_axi_DATA_A_RLAST),
        .m_axi_DATA_A_RREADY(m_axi_DATA_A_RREADY),
        .m_axi_DATA_A_RRESP(m_axi_DATA_A_RRESP),
        .m_axi_DATA_A_RVALID(m_axi_DATA_A_RVALID),
        .rdata_valid(rdata_valid),
        .s_ready_t_reg(DATA_A_ARREADY),
        .tmp_product(tmp_product),
        .\tmp_reg_287_reg[0] (\tmp_reg_287_reg[0] ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi_buffer" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_buffer__parameterized0
   (m_axi_DATA_A_RREADY,
    beat_valid,
    S,
    Q,
    \usedw_reg[7]_0 ,
    E,
    DI,
    \bus_equal_gen.rdata_valid_t_reg ,
    full_n_reg_0,
    ap_clk,
    m_axi_DATA_A_RLAST,
    m_axi_DATA_A_RRESP,
    m_axi_DATA_A_RVALID,
    ap_rst_n_0,
    \bus_equal_gen.rdata_valid_t_reg_0 ,
    rdata_ack_t,
    ap_rst_n,
    D);
  output m_axi_DATA_A_RREADY;
  output beat_valid;
  output [3:0]S;
  output [5:0]Q;
  output [2:0]\usedw_reg[7]_0 ;
  output [0:0]E;
  output [0:0]DI;
  output \bus_equal_gen.rdata_valid_t_reg ;
  output [32:0]full_n_reg_0;
  input ap_clk;
  input [32:0]m_axi_DATA_A_RLAST;
  input [1:0]m_axi_DATA_A_RRESP;
  input m_axi_DATA_A_RVALID;
  input [0:0]ap_rst_n_0;
  input \bus_equal_gen.rdata_valid_t_reg_0 ;
  input rdata_ack_t;
  input ap_rst_n;
  input [6:0]D;

  wire [6:0]D;
  wire [0:0]DI;
  wire [0:0]E;
  wire [5:0]Q;
  wire [3:0]S;
  wire ap_clk;
  wire ap_rst_n;
  wire [0:0]ap_rst_n_0;
  wire beat_valid;
  wire \bus_equal_gen.rdata_valid_t_reg ;
  wire \bus_equal_gen.rdata_valid_t_reg_0 ;
  wire \dout_buf[0]_i_1_n_2 ;
  wire \dout_buf[10]_i_1_n_2 ;
  wire \dout_buf[11]_i_1_n_2 ;
  wire \dout_buf[12]_i_1_n_2 ;
  wire \dout_buf[13]_i_1_n_2 ;
  wire \dout_buf[14]_i_1_n_2 ;
  wire \dout_buf[15]_i_1_n_2 ;
  wire \dout_buf[16]_i_1_n_2 ;
  wire \dout_buf[17]_i_1_n_2 ;
  wire \dout_buf[18]_i_1_n_2 ;
  wire \dout_buf[19]_i_1_n_2 ;
  wire \dout_buf[1]_i_1_n_2 ;
  wire \dout_buf[20]_i_1_n_2 ;
  wire \dout_buf[21]_i_1_n_2 ;
  wire \dout_buf[22]_i_1_n_2 ;
  wire \dout_buf[23]_i_1_n_2 ;
  wire \dout_buf[24]_i_1_n_2 ;
  wire \dout_buf[25]_i_1_n_2 ;
  wire \dout_buf[26]_i_1_n_2 ;
  wire \dout_buf[27]_i_1_n_2 ;
  wire \dout_buf[28]_i_1_n_2 ;
  wire \dout_buf[29]_i_1_n_2 ;
  wire \dout_buf[2]_i_1_n_2 ;
  wire \dout_buf[30]_i_1_n_2 ;
  wire \dout_buf[31]_i_1_n_2 ;
  wire \dout_buf[34]_i_2_n_2 ;
  wire \dout_buf[3]_i_1_n_2 ;
  wire \dout_buf[4]_i_1_n_2 ;
  wire \dout_buf[5]_i_1_n_2 ;
  wire \dout_buf[6]_i_1_n_2 ;
  wire \dout_buf[7]_i_1_n_2 ;
  wire \dout_buf[8]_i_1_n_2 ;
  wire \dout_buf[9]_i_1_n_2 ;
  wire dout_valid_i_1_n_2;
  wire empty_n_i_1_n_2;
  wire empty_n_i_2_n_2;
  wire empty_n_i_3_n_2;
  wire empty_n_reg_n_2;
  wire full_n_i_1_n_2;
  wire full_n_i_2__0_n_2;
  wire full_n_i_3__0_n_2;
  wire full_n_i_4__0_n_2;
  wire [32:0]full_n_reg_0;
  wire [32:0]m_axi_DATA_A_RLAST;
  wire m_axi_DATA_A_RREADY;
  wire [1:0]m_axi_DATA_A_RRESP;
  wire m_axi_DATA_A_RVALID;
  wire mem_reg_i_10_n_2;
  wire mem_reg_i_8_n_2;
  wire mem_reg_i_9_n_2;
  wire mem_reg_n_34;
  wire mem_reg_n_35;
  wire pop;
  wire push;
  wire [34:0]q_buf;
  wire [34:0]q_tmp;
  wire [7:0]raddr;
  wire rdata_ack_t;
  wire [7:1]rnext;
  wire show_ahead;
  wire show_ahead0;
  wire \usedw[0]_i_1_n_2 ;
  wire \usedw[7]_i_1__0_n_2 ;
  wire [2:0]\usedw_reg[7]_0 ;
  wire [7:6]usedw_reg__0;
  wire [7:0]waddr;
  wire \waddr[0]_i_1_n_2 ;
  wire \waddr[1]_i_1_n_2 ;
  wire \waddr[2]_i_1_n_2 ;
  wire \waddr[3]_i_1_n_2 ;
  wire \waddr[4]_i_1_n_2 ;
  wire \waddr[5]_i_1_n_2 ;
  wire \waddr[6]_i_1_n_2 ;
  wire \waddr[6]_i_2_n_2 ;
  wire \waddr[7]_i_2_n_2 ;
  wire \waddr[7]_i_3_n_2 ;
  wire \waddr[7]_i_4_n_2 ;
  wire [1:1]NLW_mem_reg_DOPBDOP_UNCONNECTED;

  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT3 #(
    .INIT(8'hA2)) 
    \bus_equal_gen.data_buf[31]_i_1 
       (.I0(beat_valid),
        .I1(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I2(rdata_ack_t),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT3 #(
    .INIT(8'hBA)) 
    \bus_equal_gen.rdata_valid_t_i_1 
       (.I0(beat_valid),
        .I1(rdata_ack_t),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .O(\bus_equal_gen.rdata_valid_t_reg ));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[0]_i_1 
       (.I0(q_tmp[0]),
        .I1(q_buf[0]),
        .I2(show_ahead),
        .O(\dout_buf[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[10]_i_1 
       (.I0(q_tmp[10]),
        .I1(q_buf[10]),
        .I2(show_ahead),
        .O(\dout_buf[10]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[11]_i_1 
       (.I0(q_tmp[11]),
        .I1(q_buf[11]),
        .I2(show_ahead),
        .O(\dout_buf[11]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[12]_i_1 
       (.I0(q_tmp[12]),
        .I1(q_buf[12]),
        .I2(show_ahead),
        .O(\dout_buf[12]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[13]_i_1 
       (.I0(q_tmp[13]),
        .I1(q_buf[13]),
        .I2(show_ahead),
        .O(\dout_buf[13]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[14]_i_1 
       (.I0(q_tmp[14]),
        .I1(q_buf[14]),
        .I2(show_ahead),
        .O(\dout_buf[14]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[15]_i_1 
       (.I0(q_tmp[15]),
        .I1(q_buf[15]),
        .I2(show_ahead),
        .O(\dout_buf[15]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[16]_i_1 
       (.I0(q_tmp[16]),
        .I1(q_buf[16]),
        .I2(show_ahead),
        .O(\dout_buf[16]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[17]_i_1 
       (.I0(q_tmp[17]),
        .I1(q_buf[17]),
        .I2(show_ahead),
        .O(\dout_buf[17]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[18]_i_1 
       (.I0(q_tmp[18]),
        .I1(q_buf[18]),
        .I2(show_ahead),
        .O(\dout_buf[18]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[19]_i_1 
       (.I0(q_tmp[19]),
        .I1(q_buf[19]),
        .I2(show_ahead),
        .O(\dout_buf[19]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[1]_i_1 
       (.I0(q_tmp[1]),
        .I1(q_buf[1]),
        .I2(show_ahead),
        .O(\dout_buf[1]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[20]_i_1 
       (.I0(q_tmp[20]),
        .I1(q_buf[20]),
        .I2(show_ahead),
        .O(\dout_buf[20]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[21]_i_1 
       (.I0(q_tmp[21]),
        .I1(q_buf[21]),
        .I2(show_ahead),
        .O(\dout_buf[21]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[22]_i_1 
       (.I0(q_tmp[22]),
        .I1(q_buf[22]),
        .I2(show_ahead),
        .O(\dout_buf[22]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[23]_i_1 
       (.I0(q_tmp[23]),
        .I1(q_buf[23]),
        .I2(show_ahead),
        .O(\dout_buf[23]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[24]_i_1 
       (.I0(q_tmp[24]),
        .I1(q_buf[24]),
        .I2(show_ahead),
        .O(\dout_buf[24]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[25]_i_1 
       (.I0(q_tmp[25]),
        .I1(q_buf[25]),
        .I2(show_ahead),
        .O(\dout_buf[25]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[26]_i_1 
       (.I0(q_tmp[26]),
        .I1(q_buf[26]),
        .I2(show_ahead),
        .O(\dout_buf[26]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[27]_i_1 
       (.I0(q_tmp[27]),
        .I1(q_buf[27]),
        .I2(show_ahead),
        .O(\dout_buf[27]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[28]_i_1 
       (.I0(q_tmp[28]),
        .I1(q_buf[28]),
        .I2(show_ahead),
        .O(\dout_buf[28]_i_1_n_2 ));
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[29]_i_1 
       (.I0(q_tmp[29]),
        .I1(q_buf[29]),
        .I2(show_ahead),
        .O(\dout_buf[29]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[2]_i_1 
       (.I0(q_tmp[2]),
        .I1(q_buf[2]),
        .I2(show_ahead),
        .O(\dout_buf[2]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[30]_i_1 
       (.I0(q_tmp[30]),
        .I1(q_buf[30]),
        .I2(show_ahead),
        .O(\dout_buf[30]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[31]_i_1 
       (.I0(q_tmp[31]),
        .I1(q_buf[31]),
        .I2(show_ahead),
        .O(\dout_buf[31]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hAA2A)) 
    \dout_buf[34]_i_1 
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(rdata_ack_t),
        .O(pop));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[34]_i_2 
       (.I0(q_tmp[34]),
        .I1(q_buf[34]),
        .I2(show_ahead),
        .O(\dout_buf[34]_i_2_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[3]_i_1 
       (.I0(q_tmp[3]),
        .I1(q_buf[3]),
        .I2(show_ahead),
        .O(\dout_buf[3]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[4]_i_1 
       (.I0(q_tmp[4]),
        .I1(q_buf[4]),
        .I2(show_ahead),
        .O(\dout_buf[4]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[5]_i_1 
       (.I0(q_tmp[5]),
        .I1(q_buf[5]),
        .I2(show_ahead),
        .O(\dout_buf[5]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[6]_i_1 
       (.I0(q_tmp[6]),
        .I1(q_buf[6]),
        .I2(show_ahead),
        .O(\dout_buf[6]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[7]_i_1 
       (.I0(q_tmp[7]),
        .I1(q_buf[7]),
        .I2(show_ahead),
        .O(\dout_buf[7]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[8]_i_1 
       (.I0(q_tmp[8]),
        .I1(q_buf[8]),
        .I2(show_ahead),
        .O(\dout_buf[8]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[9]_i_1 
       (.I0(q_tmp[9]),
        .I1(q_buf[9]),
        .I2(show_ahead),
        .O(\dout_buf[9]_i_1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[0] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[0]_i_1_n_2 ),
        .Q(full_n_reg_0[0]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[10] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[10]_i_1_n_2 ),
        .Q(full_n_reg_0[10]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[11] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[11]_i_1_n_2 ),
        .Q(full_n_reg_0[11]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[12] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[12]_i_1_n_2 ),
        .Q(full_n_reg_0[12]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[13] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[13]_i_1_n_2 ),
        .Q(full_n_reg_0[13]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[14] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[14]_i_1_n_2 ),
        .Q(full_n_reg_0[14]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[15] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[15]_i_1_n_2 ),
        .Q(full_n_reg_0[15]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[16] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[16]_i_1_n_2 ),
        .Q(full_n_reg_0[16]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[17] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[17]_i_1_n_2 ),
        .Q(full_n_reg_0[17]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[18] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[18]_i_1_n_2 ),
        .Q(full_n_reg_0[18]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[19] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[19]_i_1_n_2 ),
        .Q(full_n_reg_0[19]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[1] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[1]_i_1_n_2 ),
        .Q(full_n_reg_0[1]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[20] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[20]_i_1_n_2 ),
        .Q(full_n_reg_0[20]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[21] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[21]_i_1_n_2 ),
        .Q(full_n_reg_0[21]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[22] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[22]_i_1_n_2 ),
        .Q(full_n_reg_0[22]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[23] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[23]_i_1_n_2 ),
        .Q(full_n_reg_0[23]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[24] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[24]_i_1_n_2 ),
        .Q(full_n_reg_0[24]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[25] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[25]_i_1_n_2 ),
        .Q(full_n_reg_0[25]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[26] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[26]_i_1_n_2 ),
        .Q(full_n_reg_0[26]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[27] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[27]_i_1_n_2 ),
        .Q(full_n_reg_0[27]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[28] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[28]_i_1_n_2 ),
        .Q(full_n_reg_0[28]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[29] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[29]_i_1_n_2 ),
        .Q(full_n_reg_0[29]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[2] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[2]_i_1_n_2 ),
        .Q(full_n_reg_0[2]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[30] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[30]_i_1_n_2 ),
        .Q(full_n_reg_0[30]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[31] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[31]_i_1_n_2 ),
        .Q(full_n_reg_0[31]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[34] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[34]_i_2_n_2 ),
        .Q(full_n_reg_0[32]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[3] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[3]_i_1_n_2 ),
        .Q(full_n_reg_0[3]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[4] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[4]_i_1_n_2 ),
        .Q(full_n_reg_0[4]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[5] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[5]_i_1_n_2 ),
        .Q(full_n_reg_0[5]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[6] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[6]_i_1_n_2 ),
        .Q(full_n_reg_0[6]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[7] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[7]_i_1_n_2 ),
        .Q(full_n_reg_0[7]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[8] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[8]_i_1_n_2 ),
        .Q(full_n_reg_0[8]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[9] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[9]_i_1_n_2 ),
        .Q(full_n_reg_0[9]),
        .R(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT4 #(
    .INIT(16'hAAEA)) 
    dout_valid_i_1
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(rdata_ack_t),
        .O(dout_valid_i_1_n_2));
  FDRE #(
    .INIT(1'b0)) 
    dout_valid_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(dout_valid_i_1_n_2),
        .Q(beat_valid),
        .R(ap_rst_n_0));
  LUT6 #(
    .INIT(64'hFFFFFDDDF0000DDD)) 
    empty_n_i_1
       (.I0(Q[0]),
        .I1(empty_n_i_2_n_2),
        .I2(m_axi_DATA_A_RREADY),
        .I3(m_axi_DATA_A_RVALID),
        .I4(full_n_i_4__0_n_2),
        .I5(empty_n_reg_n_2),
        .O(empty_n_i_1_n_2));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_2
       (.I0(Q[5]),
        .I1(Q[3]),
        .I2(Q[2]),
        .I3(empty_n_i_3_n_2),
        .O(empty_n_i_2_n_2));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_3
       (.I0(usedw_reg__0[7]),
        .I1(usedw_reg__0[6]),
        .I2(Q[1]),
        .I3(Q[4]),
        .O(empty_n_i_3_n_2));
  FDRE #(
    .INIT(1'b0)) 
    empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1_n_2),
        .Q(empty_n_reg_n_2),
        .R(ap_rst_n_0));
  LUT6 #(
    .INIT(64'hEFFF0F0FFFFFFFFF)) 
    full_n_i_1
       (.I0(full_n_i_2__0_n_2),
        .I1(full_n_i_3__0_n_2),
        .I2(ap_rst_n),
        .I3(m_axi_DATA_A_RVALID),
        .I4(m_axi_DATA_A_RREADY),
        .I5(full_n_i_4__0_n_2),
        .O(full_n_i_1_n_2));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_2__0
       (.I0(usedw_reg__0[7]),
        .I1(usedw_reg__0[6]),
        .I2(Q[1]),
        .I3(Q[0]),
        .O(full_n_i_2__0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_3__0
       (.I0(Q[2]),
        .I1(Q[5]),
        .I2(Q[3]),
        .I3(Q[4]),
        .O(full_n_i_3__0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT4 #(
    .INIT(16'h40FF)) 
    full_n_i_4__0
       (.I0(rdata_ack_t),
        .I1(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I2(beat_valid),
        .I3(empty_n_reg_n_2),
        .O(full_n_i_4__0_n_2));
  FDRE #(
    .INIT(1'b1)) 
    full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(m_axi_DATA_A_RREADY),
        .R(1'b0));
  (* \MEM.PORTA.DATA_BIT_LAYOUT  = "p3_d32" *) 
  (* \MEM.PORTB.DATA_BIT_LAYOUT  = "p3_d32" *) 
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-6 {cell *THIS*}}" *) 
  (* RTL_RAM_BITS = "8960" *) 
  (* RTL_RAM_NAME = "mem" *) 
  (* bram_addr_begin = "0" *) 
  (* bram_addr_end = "511" *) 
  (* bram_slice_begin = "0" *) 
  (* bram_slice_end = "34" *) 
  RAMB18E1 #(
    .DOA_REG(0),
    .DOB_REG(0),
    .INIT_A(18'h00000),
    .INIT_B(18'h00000),
    .RAM_MODE("SDP"),
    .RDADDR_COLLISION_HWCONFIG("DELAYED_WRITE"),
    .READ_WIDTH_A(36),
    .READ_WIDTH_B(0),
    .RSTREG_PRIORITY_A("RSTREG"),
    .RSTREG_PRIORITY_B("RSTREG"),
    .SIM_COLLISION_CHECK("ALL"),
    .SIM_DEVICE("7SERIES"),
    .SRVAL_A(18'h00000),
    .SRVAL_B(18'h00000),
    .WRITE_MODE_A("READ_FIRST"),
    .WRITE_MODE_B("READ_FIRST"),
    .WRITE_WIDTH_A(0),
    .WRITE_WIDTH_B(36)) 
    mem_reg
       (.ADDRARDADDR({1'b1,rnext,mem_reg_i_8_n_2,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .ADDRBWRADDR({1'b1,waddr,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CLKARDCLK(ap_clk),
        .CLKBWRCLK(ap_clk),
        .DIADI(m_axi_DATA_A_RLAST[15:0]),
        .DIBDI(m_axi_DATA_A_RLAST[31:16]),
        .DIPADIP(m_axi_DATA_A_RRESP),
        .DIPBDIP({1'b1,m_axi_DATA_A_RLAST[32]}),
        .DOADO(q_buf[15:0]),
        .DOBDO(q_buf[31:16]),
        .DOPADOP({mem_reg_n_34,mem_reg_n_35}),
        .DOPBDOP({NLW_mem_reg_DOPBDOP_UNCONNECTED[1],q_buf[34]}),
        .ENARDEN(1'b1),
        .ENBWREN(m_axi_DATA_A_RREADY),
        .REGCEAREGCE(1'b0),
        .REGCEB(1'b0),
        .RSTRAMARSTRAM(1'b0),
        .RSTRAMB(1'b0),
        .RSTREGARSTREG(1'b0),
        .RSTREGB(1'b0),
        .WEA({1'b0,1'b0}),
        .WEBWE({m_axi_DATA_A_RVALID,m_axi_DATA_A_RVALID,m_axi_DATA_A_RVALID,m_axi_DATA_A_RVALID}));
  LUT4 #(
    .INIT(16'h6AAA)) 
    mem_reg_i_1
       (.I0(raddr[7]),
        .I1(raddr[5]),
        .I2(mem_reg_i_9_n_2),
        .I3(raddr[6]),
        .O(rnext[7]));
  LUT6 #(
    .INIT(64'h7555FFFFFFFFFFFF)) 
    mem_reg_i_10
       (.I0(raddr[0]),
        .I1(rdata_ack_t),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(beat_valid),
        .I4(empty_n_reg_n_2),
        .I5(raddr[1]),
        .O(mem_reg_i_10_n_2));
  LUT6 #(
    .INIT(64'hAA6AAAAAAAAAAAAA)) 
    mem_reg_i_2
       (.I0(raddr[6]),
        .I1(raddr[4]),
        .I2(raddr[3]),
        .I3(mem_reg_i_10_n_2),
        .I4(raddr[2]),
        .I5(raddr[5]),
        .O(rnext[6]));
  LUT5 #(
    .INIT(32'hA6AAAAAA)) 
    mem_reg_i_3
       (.I0(raddr[5]),
        .I1(raddr[2]),
        .I2(mem_reg_i_10_n_2),
        .I3(raddr[3]),
        .I4(raddr[4]),
        .O(rnext[5]));
  LUT6 #(
    .INIT(64'hF7FFFFFF08000000)) 
    mem_reg_i_4
       (.I0(raddr[2]),
        .I1(raddr[0]),
        .I2(full_n_i_4__0_n_2),
        .I3(raddr[1]),
        .I4(raddr[3]),
        .I5(raddr[4]),
        .O(rnext[4]));
  LUT5 #(
    .INIT(32'hA6AAAAAA)) 
    mem_reg_i_5
       (.I0(raddr[3]),
        .I1(raddr[1]),
        .I2(full_n_i_4__0_n_2),
        .I3(raddr[0]),
        .I4(raddr[2]),
        .O(rnext[3]));
  LUT4 #(
    .INIT(16'hA6AA)) 
    mem_reg_i_6
       (.I0(raddr[2]),
        .I1(raddr[0]),
        .I2(full_n_i_4__0_n_2),
        .I3(raddr[1]),
        .O(rnext[2]));
  LUT6 #(
    .INIT(64'h6666A666AAAAAAAA)) 
    mem_reg_i_7
       (.I0(raddr[1]),
        .I1(empty_n_reg_n_2),
        .I2(beat_valid),
        .I3(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I4(rdata_ack_t),
        .I5(raddr[0]),
        .O(rnext[1]));
  LUT5 #(
    .INIT(32'h6666A666)) 
    mem_reg_i_8
       (.I0(raddr[0]),
        .I1(empty_n_reg_n_2),
        .I2(beat_valid),
        .I3(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I4(rdata_ack_t),
        .O(mem_reg_i_8_n_2));
  LUT6 #(
    .INIT(64'h0080000000000000)) 
    mem_reg_i_9
       (.I0(raddr[4]),
        .I1(raddr[3]),
        .I2(raddr[1]),
        .I3(full_n_i_4__0_n_2),
        .I4(raddr[0]),
        .I5(raddr[2]),
        .O(mem_reg_i_9_n_2));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_1
       (.I0(usedw_reg__0[6]),
        .I1(usedw_reg__0[7]),
        .O(\usedw_reg[7]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_2
       (.I0(Q[5]),
        .I1(usedw_reg__0[6]),
        .O(\usedw_reg[7]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_3
       (.I0(Q[4]),
        .I1(Q[5]),
        .O(\usedw_reg[7]_0 [0]));
  LUT1 #(
    .INIT(2'h1)) 
    p_0_out_carry_i_1
       (.I0(Q[1]),
        .O(DI));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_2
       (.I0(Q[3]),
        .I1(Q[4]),
        .O(S[3]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_3
       (.I0(Q[2]),
        .I1(Q[3]),
        .O(S[2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_4
       (.I0(Q[1]),
        .I1(Q[2]),
        .O(S[1]));
  LUT6 #(
    .INIT(64'h5955555599999999)) 
    p_0_out_carry_i_5
       (.I0(Q[1]),
        .I1(push),
        .I2(rdata_ack_t),
        .I3(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I4(beat_valid),
        .I5(empty_n_reg_n_2),
        .O(S[0]));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[0] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[0]),
        .Q(q_tmp[0]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[10] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[10]),
        .Q(q_tmp[10]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[11] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[11]),
        .Q(q_tmp[11]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[12] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[12]),
        .Q(q_tmp[12]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[13] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[13]),
        .Q(q_tmp[13]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[14] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[14]),
        .Q(q_tmp[14]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[15] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[15]),
        .Q(q_tmp[15]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[16] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[16]),
        .Q(q_tmp[16]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[17] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[17]),
        .Q(q_tmp[17]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[18] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[18]),
        .Q(q_tmp[18]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[19] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[19]),
        .Q(q_tmp[19]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[1] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[1]),
        .Q(q_tmp[1]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[20] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[20]),
        .Q(q_tmp[20]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[21] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[21]),
        .Q(q_tmp[21]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[22] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[22]),
        .Q(q_tmp[22]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[23] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[23]),
        .Q(q_tmp[23]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[24] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[24]),
        .Q(q_tmp[24]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[25] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[25]),
        .Q(q_tmp[25]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[26] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[26]),
        .Q(q_tmp[26]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[27] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[27]),
        .Q(q_tmp[27]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[28] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[28]),
        .Q(q_tmp[28]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[29] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[29]),
        .Q(q_tmp[29]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[2] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[2]),
        .Q(q_tmp[2]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[30] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[30]),
        .Q(q_tmp[30]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[31] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[31]),
        .Q(q_tmp[31]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[34] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[32]),
        .Q(q_tmp[34]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[3] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[3]),
        .Q(q_tmp[3]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[4] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[4]),
        .Q(q_tmp[4]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[5] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[5]),
        .Q(q_tmp[5]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[6] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[6]),
        .Q(q_tmp[6]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[7] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[7]),
        .Q(q_tmp[7]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[8] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[8]),
        .Q(q_tmp[8]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[9] 
       (.C(ap_clk),
        .CE(push),
        .D(m_axi_DATA_A_RLAST[9]),
        .Q(q_tmp[9]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(mem_reg_i_8_n_2),
        .Q(raddr[0]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[1]),
        .Q(raddr[1]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[2]),
        .Q(raddr[2]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[3]),
        .Q(raddr[3]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[4]),
        .Q(raddr[4]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[5]),
        .Q(raddr[5]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[6]),
        .Q(raddr[6]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[7]),
        .Q(raddr[7]),
        .R(ap_rst_n_0));
  LUT5 #(
    .INIT(32'h00404000)) 
    show_ahead_i_1
       (.I0(empty_n_i_2_n_2),
        .I1(m_axi_DATA_A_RVALID),
        .I2(m_axi_DATA_A_RREADY),
        .I3(full_n_i_4__0_n_2),
        .I4(Q[0]),
        .O(show_ahead0));
  FDRE #(
    .INIT(1'b0)) 
    show_ahead_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(show_ahead0),
        .Q(show_ahead),
        .R(ap_rst_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    \usedw[0]_i_1 
       (.I0(Q[0]),
        .O(\usedw[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h55D5AA2AAA2AAA2A)) 
    \usedw[7]_i_1__0 
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(rdata_ack_t),
        .I4(m_axi_DATA_A_RVALID),
        .I5(m_axi_DATA_A_RREADY),
        .O(\usedw[7]_i_1__0_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[0] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(\usedw[0]_i_1_n_2 ),
        .Q(Q[0]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[1] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[0]),
        .Q(Q[1]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[2] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[1]),
        .Q(Q[2]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[3] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[2]),
        .Q(Q[3]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[4] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[3]),
        .Q(Q[4]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[5] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[4]),
        .Q(Q[5]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[6] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[5]),
        .Q(usedw_reg__0[6]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[7] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__0_n_2 ),
        .D(D[6]),
        .Q(usedw_reg__0[7]),
        .R(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \waddr[0]_i_1 
       (.I0(waddr[0]),
        .O(\waddr[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \waddr[1]_i_1 
       (.I0(waddr[0]),
        .I1(waddr[1]),
        .O(\waddr[1]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \waddr[2]_i_1 
       (.I0(waddr[2]),
        .I1(waddr[0]),
        .I2(waddr[1]),
        .O(\waddr[2]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \waddr[3]_i_1 
       (.I0(waddr[3]),
        .I1(waddr[0]),
        .I2(waddr[1]),
        .I3(waddr[2]),
        .O(\waddr[3]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \waddr[4]_i_1 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[1]),
        .I3(waddr[0]),
        .I4(waddr[3]),
        .O(\waddr[4]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \waddr[5]_i_1 
       (.I0(waddr[5]),
        .I1(waddr[3]),
        .I2(waddr[0]),
        .I3(waddr[1]),
        .I4(waddr[2]),
        .I5(waddr[4]),
        .O(\waddr[5]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \waddr[6]_i_1 
       (.I0(waddr[6]),
        .I1(waddr[4]),
        .I2(waddr[2]),
        .I3(\waddr[6]_i_2_n_2 ),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[6]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[6]_i_2 
       (.I0(waddr[1]),
        .I1(waddr[0]),
        .O(\waddr[6]_i_2_n_2 ));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[7]_i_1 
       (.I0(m_axi_DATA_A_RREADY),
        .I1(m_axi_DATA_A_RVALID),
        .O(push));
  LUT4 #(
    .INIT(16'hB8CC)) 
    \waddr[7]_i_2 
       (.I0(\waddr[7]_i_3_n_2 ),
        .I1(waddr[7]),
        .I2(\waddr[7]_i_4_n_2 ),
        .I3(waddr[6]),
        .O(\waddr[7]_i_2_n_2 ));
  LUT6 #(
    .INIT(64'h7FFFFFFFFFFFFFFF)) 
    \waddr[7]_i_3 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[0]),
        .I3(waddr[1]),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[7]_i_3_n_2 ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \waddr[7]_i_4 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[1]),
        .I3(waddr[0]),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[7]_i_4_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[0] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[0]_i_1_n_2 ),
        .Q(waddr[0]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[1] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[1]_i_1_n_2 ),
        .Q(waddr[1]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[2] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[2]_i_1_n_2 ),
        .Q(waddr[2]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[3] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[3]_i_1_n_2 ),
        .Q(waddr[3]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[4] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[4]_i_1_n_2 ),
        .Q(waddr[4]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[5] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[5]_i_1_n_2 ),
        .Q(waddr[5]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[6] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[6]_i_1_n_2 ),
        .Q(waddr[6]),
        .R(ap_rst_n_0));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[7] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[7]_i_2_n_2 ),
        .Q(waddr[7]),
        .R(ap_rst_n_0));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_fifo__parameterized0
   (fifo_rreq_valid,
    E,
    \align_len_reg[7] ,
    \sect_len_buf_reg[9] ,
    rs2f_rreq_ack,
    S,
    fifo_rreq_valid_buf_reg,
    \align_len_reg[31] ,
    invalid_len_event_reg,
    O,
    \sect_cnt_reg[7] ,
    \sect_cnt_reg[11] ,
    \sect_cnt_reg[15] ,
    \sect_cnt_reg[19] ,
    invalid_len_event_reg_0,
    fifo_rreq_valid_buf_reg_0,
    ap_rst_n_0,
    ap_clk,
    sect_cnt_reg,
    Q,
    invalid_len_event,
    fifo_rreq_valid_buf_reg_1,
    rreq_handling_reg,
    p_15_in,
    \end_addr_buf_reg[31] ,
    \sect_len_buf_reg[4] ,
    \could_multi_bursts.loop_cnt_reg[5] ,
    \sect_len_buf_reg[5] ,
    \sect_len_buf_reg[6] ,
    \sect_len_buf_reg[7] ,
    \sect_len_buf_reg[8] ,
    \sect_len_buf_reg[9]_0 ,
    \state_reg[0] ,
    \end_addr_buf_reg[31]_0 ,
    push,
    rreq_handling_reg_0,
    \data_p1_reg[29] ,
    ap_rst_n);
  output fifo_rreq_valid;
  output [0:0]E;
  output [0:0]\align_len_reg[7] ;
  output \sect_len_buf_reg[9] ;
  output rs2f_rreq_ack;
  output [3:0]S;
  output [2:0]fifo_rreq_valid_buf_reg;
  output [0:0]\align_len_reg[31] ;
  output [30:0]invalid_len_event_reg;
  output [3:0]O;
  output [3:0]\sect_cnt_reg[7] ;
  output [3:0]\sect_cnt_reg[11] ;
  output [3:0]\sect_cnt_reg[15] ;
  output [3:0]\sect_cnt_reg[19] ;
  output invalid_len_event_reg_0;
  output fifo_rreq_valid_buf_reg_0;
  input [0:0]ap_rst_n_0;
  input ap_clk;
  input [19:0]sect_cnt_reg;
  input [19:0]Q;
  input invalid_len_event;
  input fifo_rreq_valid_buf_reg_1;
  input rreq_handling_reg;
  input p_15_in;
  input [0:0]\end_addr_buf_reg[31] ;
  input \sect_len_buf_reg[4] ;
  input [5:0]\could_multi_bursts.loop_cnt_reg[5] ;
  input \sect_len_buf_reg[5] ;
  input \sect_len_buf_reg[6] ;
  input \sect_len_buf_reg[7] ;
  input \sect_len_buf_reg[8] ;
  input \sect_len_buf_reg[9]_0 ;
  input [0:0]\state_reg[0] ;
  input [19:0]\end_addr_buf_reg[31]_0 ;
  input push;
  input rreq_handling_reg_0;
  input [29:0]\data_p1_reg[29] ;
  input ap_rst_n;

  wire [0:0]E;
  wire [3:0]O;
  wire [19:0]Q;
  wire [3:0]S;
  wire [0:0]\align_len_reg[31] ;
  wire [0:0]\align_len_reg[7] ;
  wire ap_clk;
  wire ap_rst_n;
  wire [0:0]ap_rst_n_0;
  wire \could_multi_bursts.arlen_buf[3]_i_4_n_2 ;
  wire \could_multi_bursts.arlen_buf[3]_i_5_n_2 ;
  wire [5:0]\could_multi_bursts.loop_cnt_reg[5] ;
  wire [29:0]\data_p1_reg[29] ;
  wire data_vld_i_1_n_2;
  wire data_vld_reg_n_2;
  wire [0:0]\end_addr_buf_reg[31] ;
  wire [19:0]\end_addr_buf_reg[31]_0 ;
  wire fifo_rreq_valid;
  wire [2:0]fifo_rreq_valid_buf_reg;
  wire fifo_rreq_valid_buf_reg_0;
  wire fifo_rreq_valid_buf_reg_1;
  wire full_n_i_1_n_2;
  wire full_n_i_2_n_2;
  wire full_n_i_3_n_2;
  wire full_n_i_4_n_2;
  wire full_n_i_5_n_2;
  wire invalid_len_event;
  wire [30:0]invalid_len_event_reg;
  wire invalid_len_event_reg_0;
  wire \mem_reg[4][0]_srl5_n_2 ;
  wire \mem_reg[4][10]_srl5_n_2 ;
  wire \mem_reg[4][11]_srl5_n_2 ;
  wire \mem_reg[4][12]_srl5_n_2 ;
  wire \mem_reg[4][13]_srl5_n_2 ;
  wire \mem_reg[4][14]_srl5_n_2 ;
  wire \mem_reg[4][15]_srl5_n_2 ;
  wire \mem_reg[4][16]_srl5_n_2 ;
  wire \mem_reg[4][17]_srl5_n_2 ;
  wire \mem_reg[4][18]_srl5_n_2 ;
  wire \mem_reg[4][19]_srl5_n_2 ;
  wire \mem_reg[4][1]_srl5_n_2 ;
  wire \mem_reg[4][20]_srl5_n_2 ;
  wire \mem_reg[4][21]_srl5_n_2 ;
  wire \mem_reg[4][22]_srl5_n_2 ;
  wire \mem_reg[4][23]_srl5_n_2 ;
  wire \mem_reg[4][24]_srl5_n_2 ;
  wire \mem_reg[4][25]_srl5_n_2 ;
  wire \mem_reg[4][26]_srl5_n_2 ;
  wire \mem_reg[4][27]_srl5_n_2 ;
  wire \mem_reg[4][28]_srl5_n_2 ;
  wire \mem_reg[4][29]_srl5_n_2 ;
  wire \mem_reg[4][2]_srl5_n_2 ;
  wire \mem_reg[4][38]_srl5_n_2 ;
  wire \mem_reg[4][3]_srl5_n_2 ;
  wire \mem_reg[4][4]_srl5_n_2 ;
  wire \mem_reg[4][5]_srl5_n_2 ;
  wire \mem_reg[4][6]_srl5_n_2 ;
  wire \mem_reg[4][7]_srl5_n_2 ;
  wire \mem_reg[4][8]_srl5_n_2 ;
  wire \mem_reg[4][9]_srl5_n_2 ;
  wire p_15_in;
  wire pop0;
  wire \pout[0]_i_1_n_2 ;
  wire \pout[1]_i_1_n_2 ;
  wire \pout[2]_i_1_n_2 ;
  wire \pout_reg_n_2_[0] ;
  wire \pout_reg_n_2_[1] ;
  wire \pout_reg_n_2_[2] ;
  wire push;
  wire rreq_handling_reg;
  wire rreq_handling_reg_0;
  wire rs2f_rreq_ack;
  wire \sect_cnt[0]_i_3_n_2 ;
  wire \sect_cnt[0]_i_4_n_2 ;
  wire \sect_cnt[0]_i_5_n_2 ;
  wire \sect_cnt[0]_i_6_n_2 ;
  wire \sect_cnt[12]_i_2_n_2 ;
  wire \sect_cnt[12]_i_3_n_2 ;
  wire \sect_cnt[12]_i_4_n_2 ;
  wire \sect_cnt[12]_i_5_n_2 ;
  wire \sect_cnt[16]_i_2_n_2 ;
  wire \sect_cnt[16]_i_3_n_2 ;
  wire \sect_cnt[16]_i_4_n_2 ;
  wire \sect_cnt[16]_i_5_n_2 ;
  wire \sect_cnt[4]_i_2_n_2 ;
  wire \sect_cnt[4]_i_3_n_2 ;
  wire \sect_cnt[4]_i_4_n_2 ;
  wire \sect_cnt[4]_i_5_n_2 ;
  wire \sect_cnt[8]_i_2_n_2 ;
  wire \sect_cnt[8]_i_3_n_2 ;
  wire \sect_cnt[8]_i_4_n_2 ;
  wire \sect_cnt[8]_i_5_n_2 ;
  wire [19:0]sect_cnt_reg;
  wire \sect_cnt_reg[0]_i_2_n_2 ;
  wire \sect_cnt_reg[0]_i_2_n_3 ;
  wire \sect_cnt_reg[0]_i_2_n_4 ;
  wire \sect_cnt_reg[0]_i_2_n_5 ;
  wire [3:0]\sect_cnt_reg[11] ;
  wire \sect_cnt_reg[12]_i_1_n_2 ;
  wire \sect_cnt_reg[12]_i_1_n_3 ;
  wire \sect_cnt_reg[12]_i_1_n_4 ;
  wire \sect_cnt_reg[12]_i_1_n_5 ;
  wire [3:0]\sect_cnt_reg[15] ;
  wire \sect_cnt_reg[16]_i_1_n_3 ;
  wire \sect_cnt_reg[16]_i_1_n_4 ;
  wire \sect_cnt_reg[16]_i_1_n_5 ;
  wire [3:0]\sect_cnt_reg[19] ;
  wire \sect_cnt_reg[4]_i_1_n_2 ;
  wire \sect_cnt_reg[4]_i_1_n_3 ;
  wire \sect_cnt_reg[4]_i_1_n_4 ;
  wire \sect_cnt_reg[4]_i_1_n_5 ;
  wire [3:0]\sect_cnt_reg[7] ;
  wire \sect_cnt_reg[8]_i_1_n_2 ;
  wire \sect_cnt_reg[8]_i_1_n_3 ;
  wire \sect_cnt_reg[8]_i_1_n_4 ;
  wire \sect_cnt_reg[8]_i_1_n_5 ;
  wire \sect_len_buf_reg[4] ;
  wire \sect_len_buf_reg[5] ;
  wire \sect_len_buf_reg[6] ;
  wire \sect_len_buf_reg[7] ;
  wire \sect_len_buf_reg[8] ;
  wire \sect_len_buf_reg[9] ;
  wire \sect_len_buf_reg[9]_0 ;
  wire \start_addr_buf[31]_i_2_n_2 ;
  wire [0:0]\state_reg[0] ;
  wire [3:3]\NLW_sect_cnt_reg[16]_i_1_CO_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    align_len0_carry_i_1
       (.I0(invalid_len_event_reg[30]),
        .O(\align_len_reg[31] ));
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.arlen_buf[3]_i_3 
       (.I0(\could_multi_bursts.arlen_buf[3]_i_4_n_2 ),
        .I1(\could_multi_bursts.arlen_buf[3]_i_5_n_2 ),
        .O(\sect_len_buf_reg[9] ));
  LUT6 #(
    .INIT(64'h6FF6FFFFFFFF6FF6)) 
    \could_multi_bursts.arlen_buf[3]_i_4 
       (.I0(\sect_len_buf_reg[7] ),
        .I1(\could_multi_bursts.loop_cnt_reg[5] [3]),
        .I2(\could_multi_bursts.loop_cnt_reg[5] [4]),
        .I3(\sect_len_buf_reg[8] ),
        .I4(\could_multi_bursts.loop_cnt_reg[5] [5]),
        .I5(\sect_len_buf_reg[9]_0 ),
        .O(\could_multi_bursts.arlen_buf[3]_i_4_n_2 ));
  LUT6 #(
    .INIT(64'h6FF6FFFFFFFF6FF6)) 
    \could_multi_bursts.arlen_buf[3]_i_5 
       (.I0(\sect_len_buf_reg[4] ),
        .I1(\could_multi_bursts.loop_cnt_reg[5] [0]),
        .I2(\could_multi_bursts.loop_cnt_reg[5] [1]),
        .I3(\sect_len_buf_reg[5] ),
        .I4(\could_multi_bursts.loop_cnt_reg[5] [2]),
        .I5(\sect_len_buf_reg[6] ),
        .O(\could_multi_bursts.arlen_buf[3]_i_5_n_2 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFE00FF00)) 
    data_vld_i_1
       (.I0(\pout_reg_n_2_[0] ),
        .I1(\pout_reg_n_2_[1] ),
        .I2(\pout_reg_n_2_[2] ),
        .I3(data_vld_reg_n_2),
        .I4(pop0),
        .I5(push),
        .O(data_vld_i_1_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1_n_2),
        .Q(data_vld_reg_n_2),
        .R(ap_rst_n_0));
  LUT5 #(
    .INIT(32'hFDDDFFFF)) 
    empty_n_i_1
       (.I0(fifo_rreq_valid),
        .I1(invalid_len_event),
        .I2(\end_addr_buf_reg[31] ),
        .I3(p_15_in),
        .I4(rreq_handling_reg),
        .O(pop0));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(pop0),
        .D(data_vld_reg_n_2),
        .Q(fifo_rreq_valid),
        .R(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT5 #(
    .INIT(32'hAACACACA)) 
    fifo_rreq_valid_buf_i_1
       (.I0(fifo_rreq_valid),
        .I1(fifo_rreq_valid_buf_reg_1),
        .I2(rreq_handling_reg),
        .I3(p_15_in),
        .I4(\end_addr_buf_reg[31] ),
        .O(fifo_rreq_valid_buf_reg_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFB00FFFF)) 
    full_n_i_1
       (.I0(full_n_i_2_n_2),
        .I1(full_n_i_3_n_2),
        .I2(\pout_reg_n_2_[2] ),
        .I3(rs2f_rreq_ack),
        .I4(ap_rst_n),
        .I5(full_n_i_4_n_2),
        .O(full_n_i_1_n_2));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFD5FFFF)) 
    full_n_i_2
       (.I0(rreq_handling_reg),
        .I1(p_15_in),
        .I2(\end_addr_buf_reg[31] ),
        .I3(invalid_len_event),
        .I4(fifo_rreq_valid),
        .I5(full_n_i_5_n_2),
        .O(full_n_i_2_n_2));
  LUT2 #(
    .INIT(4'h8)) 
    full_n_i_3
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[0] ),
        .O(full_n_i_3_n_2));
  LUT6 #(
    .INIT(64'hAAAAA222AAAAAAAA)) 
    full_n_i_4
       (.I0(data_vld_reg_n_2),
        .I1(rreq_handling_reg),
        .I2(p_15_in),
        .I3(\end_addr_buf_reg[31] ),
        .I4(invalid_len_event),
        .I5(fifo_rreq_valid),
        .O(full_n_i_4_n_2));
  LUT3 #(
    .INIT(8'h7F)) 
    full_n_i_5
       (.I0(data_vld_reg_n_2),
        .I1(rs2f_rreq_ack),
        .I2(\state_reg[0] ),
        .O(full_n_i_5_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(rs2f_rreq_ack),
        .R(1'b0));
  LUT5 #(
    .INIT(32'hFF470044)) 
    invalid_len_event_i_1
       (.I0(invalid_len_event_reg[30]),
        .I1(fifo_rreq_valid),
        .I2(fifo_rreq_valid_buf_reg_1),
        .I3(rreq_handling_reg_0),
        .I4(invalid_len_event),
        .O(invalid_len_event_reg_0));
  LUT4 #(
    .INIT(16'h9009)) 
    last_sect_carry__0_i_1
       (.I0(\end_addr_buf_reg[31]_0 [19]),
        .I1(sect_cnt_reg[19]),
        .I2(\end_addr_buf_reg[31]_0 [18]),
        .I3(sect_cnt_reg[18]),
        .O(fifo_rreq_valid_buf_reg[2]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry__0_i_2
       (.I0(sect_cnt_reg[15]),
        .I1(\end_addr_buf_reg[31]_0 [15]),
        .I2(sect_cnt_reg[16]),
        .I3(\end_addr_buf_reg[31]_0 [16]),
        .I4(\end_addr_buf_reg[31]_0 [17]),
        .I5(sect_cnt_reg[17]),
        .O(fifo_rreq_valid_buf_reg[1]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry__0_i_3
       (.I0(\end_addr_buf_reg[31]_0 [14]),
        .I1(sect_cnt_reg[14]),
        .I2(sect_cnt_reg[12]),
        .I3(\end_addr_buf_reg[31]_0 [12]),
        .I4(sect_cnt_reg[13]),
        .I5(\end_addr_buf_reg[31]_0 [13]),
        .O(fifo_rreq_valid_buf_reg[0]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_1
       (.I0(\end_addr_buf_reg[31]_0 [11]),
        .I1(sect_cnt_reg[11]),
        .I2(sect_cnt_reg[9]),
        .I3(\end_addr_buf_reg[31]_0 [9]),
        .I4(sect_cnt_reg[10]),
        .I5(\end_addr_buf_reg[31]_0 [10]),
        .O(S[3]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_2
       (.I0(sect_cnt_reg[6]),
        .I1(\end_addr_buf_reg[31]_0 [6]),
        .I2(sect_cnt_reg[7]),
        .I3(\end_addr_buf_reg[31]_0 [7]),
        .I4(\end_addr_buf_reg[31]_0 [8]),
        .I5(sect_cnt_reg[8]),
        .O(S[2]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_3
       (.I0(\end_addr_buf_reg[31]_0 [4]),
        .I1(sect_cnt_reg[4]),
        .I2(sect_cnt_reg[5]),
        .I3(\end_addr_buf_reg[31]_0 [5]),
        .I4(sect_cnt_reg[3]),
        .I5(\end_addr_buf_reg[31]_0 [3]),
        .O(S[1]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_4
       (.I0(\end_addr_buf_reg[31]_0 [2]),
        .I1(sect_cnt_reg[2]),
        .I2(sect_cnt_reg[1]),
        .I3(\end_addr_buf_reg[31]_0 [1]),
        .I4(sect_cnt_reg[0]),
        .I5(\end_addr_buf_reg[31]_0 [0]),
        .O(S[0]));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][0]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][0]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [0]),
        .Q(\mem_reg[4][0]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][10]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][10]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [10]),
        .Q(\mem_reg[4][10]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][11]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][11]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [11]),
        .Q(\mem_reg[4][11]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][12]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][12]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [12]),
        .Q(\mem_reg[4][12]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][13]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][13]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [13]),
        .Q(\mem_reg[4][13]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][14]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][14]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [14]),
        .Q(\mem_reg[4][14]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][15]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][15]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [15]),
        .Q(\mem_reg[4][15]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][16]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][16]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [16]),
        .Q(\mem_reg[4][16]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][17]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][17]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [17]),
        .Q(\mem_reg[4][17]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][18]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][18]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [18]),
        .Q(\mem_reg[4][18]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][19]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][19]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [19]),
        .Q(\mem_reg[4][19]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][1]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][1]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [1]),
        .Q(\mem_reg[4][1]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][20]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][20]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [20]),
        .Q(\mem_reg[4][20]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][21]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][21]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [21]),
        .Q(\mem_reg[4][21]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][22]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][22]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [22]),
        .Q(\mem_reg[4][22]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][23]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][23]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [23]),
        .Q(\mem_reg[4][23]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][24]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][24]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [24]),
        .Q(\mem_reg[4][24]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][25]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][25]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [25]),
        .Q(\mem_reg[4][25]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][26]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][26]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [26]),
        .Q(\mem_reg[4][26]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][27]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][27]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [27]),
        .Q(\mem_reg[4][27]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][28]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][28]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [28]),
        .Q(\mem_reg[4][28]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][29]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][29]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [29]),
        .Q(\mem_reg[4][29]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][2]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][2]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [2]),
        .Q(\mem_reg[4][2]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][38]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][38]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(1'b1),
        .Q(\mem_reg[4][38]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][3]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][3]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [3]),
        .Q(\mem_reg[4][3]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][4]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][4]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [4]),
        .Q(\mem_reg[4][4]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][5]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][5]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [5]),
        .Q(\mem_reg[4][5]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][6]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][6]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [6]),
        .Q(\mem_reg[4][6]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][7]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][7]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [7]),
        .Q(\mem_reg[4][7]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][8]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][8]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [8]),
        .Q(\mem_reg[4][8]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_A_m_axi_U/bus_read/fifo_rreq/mem_reg[4][9]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][9]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [9]),
        .Q(\mem_reg[4][9]_srl5_n_2 ));
  LUT6 #(
    .INIT(64'hF00FFFFF0EF00000)) 
    \pout[0]_i_1 
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[2] ),
        .I2(push),
        .I3(pop0),
        .I4(data_vld_reg_n_2),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hDFDF2020F7F70800)) 
    \pout[1]_i_1 
       (.I0(data_vld_reg_n_2),
        .I1(pop0),
        .I2(push),
        .I3(\pout_reg_n_2_[2] ),
        .I4(\pout_reg_n_2_[1] ),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[1]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hDF20FF00FF00F700)) 
    \pout[2]_i_1 
       (.I0(data_vld_reg_n_2),
        .I1(pop0),
        .I2(push),
        .I3(\pout_reg_n_2_[2] ),
        .I4(\pout_reg_n_2_[1] ),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[2]_i_1_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[0]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[0] ),
        .R(ap_rst_n_0));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[1]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[1] ),
        .R(ap_rst_n_0));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[2]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[2] ),
        .R(ap_rst_n_0));
  FDRE \q_reg[0] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][0]_srl5_n_2 ),
        .Q(invalid_len_event_reg[0]),
        .R(ap_rst_n_0));
  FDRE \q_reg[10] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][10]_srl5_n_2 ),
        .Q(invalid_len_event_reg[10]),
        .R(ap_rst_n_0));
  FDRE \q_reg[11] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][11]_srl5_n_2 ),
        .Q(invalid_len_event_reg[11]),
        .R(ap_rst_n_0));
  FDRE \q_reg[12] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][12]_srl5_n_2 ),
        .Q(invalid_len_event_reg[12]),
        .R(ap_rst_n_0));
  FDRE \q_reg[13] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][13]_srl5_n_2 ),
        .Q(invalid_len_event_reg[13]),
        .R(ap_rst_n_0));
  FDRE \q_reg[14] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][14]_srl5_n_2 ),
        .Q(invalid_len_event_reg[14]),
        .R(ap_rst_n_0));
  FDRE \q_reg[15] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][15]_srl5_n_2 ),
        .Q(invalid_len_event_reg[15]),
        .R(ap_rst_n_0));
  FDRE \q_reg[16] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][16]_srl5_n_2 ),
        .Q(invalid_len_event_reg[16]),
        .R(ap_rst_n_0));
  FDRE \q_reg[17] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][17]_srl5_n_2 ),
        .Q(invalid_len_event_reg[17]),
        .R(ap_rst_n_0));
  FDRE \q_reg[18] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][18]_srl5_n_2 ),
        .Q(invalid_len_event_reg[18]),
        .R(ap_rst_n_0));
  FDRE \q_reg[19] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][19]_srl5_n_2 ),
        .Q(invalid_len_event_reg[19]),
        .R(ap_rst_n_0));
  FDRE \q_reg[1] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][1]_srl5_n_2 ),
        .Q(invalid_len_event_reg[1]),
        .R(ap_rst_n_0));
  FDRE \q_reg[20] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][20]_srl5_n_2 ),
        .Q(invalid_len_event_reg[20]),
        .R(ap_rst_n_0));
  FDRE \q_reg[21] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][21]_srl5_n_2 ),
        .Q(invalid_len_event_reg[21]),
        .R(ap_rst_n_0));
  FDRE \q_reg[22] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][22]_srl5_n_2 ),
        .Q(invalid_len_event_reg[22]),
        .R(ap_rst_n_0));
  FDRE \q_reg[23] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][23]_srl5_n_2 ),
        .Q(invalid_len_event_reg[23]),
        .R(ap_rst_n_0));
  FDRE \q_reg[24] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][24]_srl5_n_2 ),
        .Q(invalid_len_event_reg[24]),
        .R(ap_rst_n_0));
  FDRE \q_reg[25] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][25]_srl5_n_2 ),
        .Q(invalid_len_event_reg[25]),
        .R(ap_rst_n_0));
  FDRE \q_reg[26] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][26]_srl5_n_2 ),
        .Q(invalid_len_event_reg[26]),
        .R(ap_rst_n_0));
  FDRE \q_reg[27] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][27]_srl5_n_2 ),
        .Q(invalid_len_event_reg[27]),
        .R(ap_rst_n_0));
  FDRE \q_reg[28] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][28]_srl5_n_2 ),
        .Q(invalid_len_event_reg[28]),
        .R(ap_rst_n_0));
  FDRE \q_reg[29] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][29]_srl5_n_2 ),
        .Q(invalid_len_event_reg[29]),
        .R(ap_rst_n_0));
  FDRE \q_reg[2] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][2]_srl5_n_2 ),
        .Q(invalid_len_event_reg[2]),
        .R(ap_rst_n_0));
  FDRE \q_reg[38] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][38]_srl5_n_2 ),
        .Q(invalid_len_event_reg[30]),
        .R(ap_rst_n_0));
  FDRE \q_reg[3] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][3]_srl5_n_2 ),
        .Q(invalid_len_event_reg[3]),
        .R(ap_rst_n_0));
  FDRE \q_reg[4] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][4]_srl5_n_2 ),
        .Q(invalid_len_event_reg[4]),
        .R(ap_rst_n_0));
  FDRE \q_reg[5] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][5]_srl5_n_2 ),
        .Q(invalid_len_event_reg[5]),
        .R(ap_rst_n_0));
  FDRE \q_reg[6] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][6]_srl5_n_2 ),
        .Q(invalid_len_event_reg[6]),
        .R(ap_rst_n_0));
  FDRE \q_reg[7] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][7]_srl5_n_2 ),
        .Q(invalid_len_event_reg[7]),
        .R(ap_rst_n_0));
  FDRE \q_reg[8] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][8]_srl5_n_2 ),
        .Q(invalid_len_event_reg[8]),
        .R(ap_rst_n_0));
  FDRE \q_reg[9] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][9]_srl5_n_2 ),
        .Q(invalid_len_event_reg[9]),
        .R(ap_rst_n_0));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_3 
       (.I0(sect_cnt_reg[3]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[3]),
        .O(\sect_cnt[0]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_4 
       (.I0(sect_cnt_reg[2]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[2]),
        .O(\sect_cnt[0]_i_4_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_5 
       (.I0(sect_cnt_reg[1]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[1]),
        .O(\sect_cnt[0]_i_5_n_2 ));
  LUT3 #(
    .INIT(8'h3A)) 
    \sect_cnt[0]_i_6 
       (.I0(Q[0]),
        .I1(sect_cnt_reg[0]),
        .I2(\start_addr_buf[31]_i_2_n_2 ),
        .O(\sect_cnt[0]_i_6_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_2 
       (.I0(sect_cnt_reg[15]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[15]),
        .O(\sect_cnt[12]_i_2_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_3 
       (.I0(sect_cnt_reg[14]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[14]),
        .O(\sect_cnt[12]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_4 
       (.I0(sect_cnt_reg[13]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[13]),
        .O(\sect_cnt[12]_i_4_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_5 
       (.I0(sect_cnt_reg[12]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[12]),
        .O(\sect_cnt[12]_i_5_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_2 
       (.I0(sect_cnt_reg[19]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[19]),
        .O(\sect_cnt[16]_i_2_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_3 
       (.I0(sect_cnt_reg[18]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[18]),
        .O(\sect_cnt[16]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_4 
       (.I0(sect_cnt_reg[17]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[17]),
        .O(\sect_cnt[16]_i_4_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_5 
       (.I0(sect_cnt_reg[16]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[16]),
        .O(\sect_cnt[16]_i_5_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_2 
       (.I0(sect_cnt_reg[7]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[7]),
        .O(\sect_cnt[4]_i_2_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_3 
       (.I0(sect_cnt_reg[6]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[6]),
        .O(\sect_cnt[4]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_4 
       (.I0(sect_cnt_reg[5]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[5]),
        .O(\sect_cnt[4]_i_4_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_5 
       (.I0(sect_cnt_reg[4]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[4]),
        .O(\sect_cnt[4]_i_5_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_2 
       (.I0(sect_cnt_reg[11]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[11]),
        .O(\sect_cnt[8]_i_2_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_3 
       (.I0(sect_cnt_reg[10]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[10]),
        .O(\sect_cnt[8]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_4 
       (.I0(sect_cnt_reg[9]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[9]),
        .O(\sect_cnt[8]_i_4_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_5 
       (.I0(sect_cnt_reg[8]),
        .I1(\start_addr_buf[31]_i_2_n_2 ),
        .I2(Q[8]),
        .O(\sect_cnt[8]_i_5_n_2 ));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[0]_i_2 
       (.CI(1'b0),
        .CO({\sect_cnt_reg[0]_i_2_n_2 ,\sect_cnt_reg[0]_i_2_n_3 ,\sect_cnt_reg[0]_i_2_n_4 ,\sect_cnt_reg[0]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\start_addr_buf[31]_i_2_n_2 }),
        .O(O),
        .S({\sect_cnt[0]_i_3_n_2 ,\sect_cnt[0]_i_4_n_2 ,\sect_cnt[0]_i_5_n_2 ,\sect_cnt[0]_i_6_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[12]_i_1 
       (.CI(\sect_cnt_reg[8]_i_1_n_2 ),
        .CO({\sect_cnt_reg[12]_i_1_n_2 ,\sect_cnt_reg[12]_i_1_n_3 ,\sect_cnt_reg[12]_i_1_n_4 ,\sect_cnt_reg[12]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[15] ),
        .S({\sect_cnt[12]_i_2_n_2 ,\sect_cnt[12]_i_3_n_2 ,\sect_cnt[12]_i_4_n_2 ,\sect_cnt[12]_i_5_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[16]_i_1 
       (.CI(\sect_cnt_reg[12]_i_1_n_2 ),
        .CO({\NLW_sect_cnt_reg[16]_i_1_CO_UNCONNECTED [3],\sect_cnt_reg[16]_i_1_n_3 ,\sect_cnt_reg[16]_i_1_n_4 ,\sect_cnt_reg[16]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[19] ),
        .S({\sect_cnt[16]_i_2_n_2 ,\sect_cnt[16]_i_3_n_2 ,\sect_cnt[16]_i_4_n_2 ,\sect_cnt[16]_i_5_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[4]_i_1 
       (.CI(\sect_cnt_reg[0]_i_2_n_2 ),
        .CO({\sect_cnt_reg[4]_i_1_n_2 ,\sect_cnt_reg[4]_i_1_n_3 ,\sect_cnt_reg[4]_i_1_n_4 ,\sect_cnt_reg[4]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[7] ),
        .S({\sect_cnt[4]_i_2_n_2 ,\sect_cnt[4]_i_3_n_2 ,\sect_cnt[4]_i_4_n_2 ,\sect_cnt[4]_i_5_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[8]_i_1 
       (.CI(\sect_cnt_reg[4]_i_1_n_2 ),
        .CO({\sect_cnt_reg[8]_i_1_n_2 ,\sect_cnt_reg[8]_i_1_n_3 ,\sect_cnt_reg[8]_i_1_n_4 ,\sect_cnt_reg[8]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[11] ),
        .S({\sect_cnt[8]_i_2_n_2 ,\sect_cnt[8]_i_3_n_2 ,\sect_cnt[8]_i_4_n_2 ,\sect_cnt[8]_i_5_n_2 }));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT4 #(
    .INIT(16'h80AA)) 
    \start_addr[31]_i_1 
       (.I0(fifo_rreq_valid),
        .I1(\end_addr_buf_reg[31] ),
        .I2(p_15_in),
        .I3(rreq_handling_reg),
        .O(\align_len_reg[7] ));
  LUT1 #(
    .INIT(2'h1)) 
    \start_addr_buf[31]_i_1 
       (.I0(\start_addr_buf[31]_i_2_n_2 ),
        .O(E));
  LUT6 #(
    .INIT(64'hABABFFABFFABFFAB)) 
    \start_addr_buf[31]_i_2 
       (.I0(invalid_len_event),
        .I1(fifo_rreq_valid),
        .I2(fifo_rreq_valid_buf_reg_1),
        .I3(rreq_handling_reg),
        .I4(p_15_in),
        .I5(\end_addr_buf_reg[31] ),
        .O(\start_addr_buf[31]_i_2_n_2 ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_fifo__parameterized1
   (SR,
    p_15_in,
    \sect_addr_buf_reg[2] ,
    p_14_in,
    \could_multi_bursts.arlen_buf_reg[0] ,
    \could_multi_bursts.arlen_buf_reg[1] ,
    \could_multi_bursts.arlen_buf_reg[2] ,
    \could_multi_bursts.arlen_buf_reg[0]_0 ,
    \could_multi_bursts.arlen_buf_reg[3] ,
    \could_multi_bursts.sect_handling_reg ,
    \sect_len_buf_reg[9] ,
    \sect_len_buf_reg[8] ,
    \sect_len_buf_reg[7] ,
    \sect_len_buf_reg[6] ,
    \sect_len_buf_reg[5] ,
    \sect_len_buf_reg[4] ,
    \sect_len_buf_reg[3] ,
    \sect_len_buf_reg[2] ,
    \sect_len_buf_reg[1] ,
    \sect_len_buf_reg[0] ,
    invalid_len_event_reg,
    \sect_cnt_reg[0] ,
    \could_multi_bursts.ARVALID_Dummy_reg ,
    rreq_handling_reg,
    ap_rst_n_0,
    ap_clk,
    ap_rst_n,
    CO,
    \dout_buf_reg[34] ,
    beat_valid,
    \could_multi_bursts.sect_handling_reg_0 ,
    m_axi_DATA_A_ARREADY,
    \could_multi_bursts.ARVALID_Dummy_reg_0 ,
    \sect_len_buf_reg[7]_0 ,
    \sect_len_buf_reg[0]_0 ,
    \sect_len_buf_reg[1]_0 ,
    \sect_len_buf_reg[2]_0 ,
    \sect_len_buf_reg[3]_0 ,
    rreq_handling_reg_0,
    Q,
    \start_addr_buf_reg[11] ,
    \beat_len_buf_reg[9] ,
    \end_addr_buf_reg[31] ,
    fifo_rreq_valid_buf_reg,
    fifo_rreq_valid,
    invalid_len_event);
  output [0:0]SR;
  output p_15_in;
  output [0:0]\sect_addr_buf_reg[2] ;
  output p_14_in;
  output \could_multi_bursts.arlen_buf_reg[0] ;
  output \could_multi_bursts.arlen_buf_reg[1] ;
  output \could_multi_bursts.arlen_buf_reg[2] ;
  output \could_multi_bursts.arlen_buf_reg[0]_0 ;
  output \could_multi_bursts.arlen_buf_reg[3] ;
  output \could_multi_bursts.sect_handling_reg ;
  output \sect_len_buf_reg[9] ;
  output \sect_len_buf_reg[8] ;
  output \sect_len_buf_reg[7] ;
  output \sect_len_buf_reg[6] ;
  output \sect_len_buf_reg[5] ;
  output \sect_len_buf_reg[4] ;
  output \sect_len_buf_reg[3] ;
  output \sect_len_buf_reg[2] ;
  output \sect_len_buf_reg[1] ;
  output \sect_len_buf_reg[0] ;
  output invalid_len_event_reg;
  output \sect_cnt_reg[0] ;
  output \could_multi_bursts.ARVALID_Dummy_reg ;
  output rreq_handling_reg;
  input [0:0]ap_rst_n_0;
  input ap_clk;
  input ap_rst_n;
  input [0:0]CO;
  input [0:0]\dout_buf_reg[34] ;
  input beat_valid;
  input \could_multi_bursts.sect_handling_reg_0 ;
  input m_axi_DATA_A_ARREADY;
  input \could_multi_bursts.ARVALID_Dummy_reg_0 ;
  input \sect_len_buf_reg[7]_0 ;
  input \sect_len_buf_reg[0]_0 ;
  input \sect_len_buf_reg[1]_0 ;
  input \sect_len_buf_reg[2]_0 ;
  input \sect_len_buf_reg[3]_0 ;
  input rreq_handling_reg_0;
  input [9:0]Q;
  input [9:0]\start_addr_buf_reg[11] ;
  input [2:0]\beat_len_buf_reg[9] ;
  input [0:0]\end_addr_buf_reg[31] ;
  input fifo_rreq_valid_buf_reg;
  input fifo_rreq_valid;
  input invalid_len_event;

  wire [0:0]CO;
  wire [9:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire [0:0]ap_rst_n_0;
  wire [2:0]\beat_len_buf_reg[9] ;
  wire beat_valid;
  wire \could_multi_bursts.ARVALID_Dummy_reg ;
  wire \could_multi_bursts.ARVALID_Dummy_reg_0 ;
  wire \could_multi_bursts.arlen_buf_reg[0] ;
  wire \could_multi_bursts.arlen_buf_reg[0]_0 ;
  wire \could_multi_bursts.arlen_buf_reg[1] ;
  wire \could_multi_bursts.arlen_buf_reg[2] ;
  wire \could_multi_bursts.arlen_buf_reg[3] ;
  wire \could_multi_bursts.sect_handling_reg ;
  wire \could_multi_bursts.sect_handling_reg_0 ;
  wire data_vld_i_1__0_n_2;
  wire data_vld_reg_n_2;
  wire [0:0]\dout_buf_reg[34] ;
  wire empty_n_i_1__0_n_2;
  wire empty_n_reg_n_2;
  wire [0:0]\end_addr_buf_reg[31] ;
  wire fifo_rctl_ready;
  wire fifo_rreq_valid;
  wire fifo_rreq_valid_buf_reg;
  wire full_n_i_1_n_2;
  wire full_n_i_2__8_n_2;
  wire invalid_len_event;
  wire invalid_len_event_reg;
  wire m_axi_DATA_A_ARREADY;
  wire p_14_in;
  wire p_15_in;
  wire \pout[0]_i_1_n_2 ;
  wire \pout[1]_i_1_n_2 ;
  wire \pout[2]_i_1_n_2 ;
  wire \pout[3]_i_1_n_2 ;
  wire \pout[3]_i_2_n_2 ;
  wire \pout[3]_i_3_n_2 ;
  wire \pout[3]_i_4__0_n_2 ;
  wire [3:0]pout_reg__0;
  wire rreq_handling_reg;
  wire rreq_handling_reg_0;
  wire [0:0]\sect_addr_buf_reg[2] ;
  wire \sect_cnt_reg[0] ;
  wire \sect_len_buf_reg[0] ;
  wire \sect_len_buf_reg[0]_0 ;
  wire \sect_len_buf_reg[1] ;
  wire \sect_len_buf_reg[1]_0 ;
  wire \sect_len_buf_reg[2] ;
  wire \sect_len_buf_reg[2]_0 ;
  wire \sect_len_buf_reg[3] ;
  wire \sect_len_buf_reg[3]_0 ;
  wire \sect_len_buf_reg[4] ;
  wire \sect_len_buf_reg[5] ;
  wire \sect_len_buf_reg[6] ;
  wire \sect_len_buf_reg[7] ;
  wire \sect_len_buf_reg[7]_0 ;
  wire \sect_len_buf_reg[8] ;
  wire \sect_len_buf_reg[9] ;
  wire [9:0]\start_addr_buf_reg[11] ;

  LUT4 #(
    .INIT(16'h8F88)) 
    \could_multi_bursts.ARVALID_Dummy_i_2 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .O(\could_multi_bursts.ARVALID_Dummy_reg ));
  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT4 #(
    .INIT(16'hD000)) 
    \could_multi_bursts.araddr_buf[31]_i_1 
       (.I0(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I1(m_axi_DATA_A_ARREADY),
        .I2(\could_multi_bursts.sect_handling_reg_0 ),
        .I3(fifo_rctl_ready),
        .O(p_14_in));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[0]_i_1 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[0]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[0] ));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[1]_i_1 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[1]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[1] ));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[2]_i_1 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[2]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[2] ));
  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT4 #(
    .INIT(16'h8088)) 
    \could_multi_bursts.arlen_buf[3]_i_1 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[0]_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[3]_i_2 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[3]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[3] ));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \could_multi_bursts.loop_cnt[5]_i_1 
       (.I0(p_15_in),
        .I1(ap_rst_n),
        .O(SR));
  LUT6 #(
    .INIT(64'hFFFFFFFFCCCC4C44)) 
    \could_multi_bursts.sect_handling_i_1__0 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_A_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(rreq_handling_reg_0),
        .O(\could_multi_bursts.sect_handling_reg ));
  LUT6 #(
    .INIT(64'hBAFAFAFABABABABA)) 
    data_vld_i_1__0
       (.I0(p_14_in),
        .I1(\pout[3]_i_3_n_2 ),
        .I2(data_vld_reg_n_2),
        .I3(\dout_buf_reg[34] ),
        .I4(beat_valid),
        .I5(empty_n_reg_n_2),
        .O(data_vld_i_1__0_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__0_n_2),
        .Q(data_vld_reg_n_2),
        .R(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT4 #(
    .INIT(16'hFF2A)) 
    empty_n_i_1__0
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\dout_buf_reg[34] ),
        .I3(data_vld_reg_n_2),
        .O(empty_n_i_1__0_n_2));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1__0_n_2),
        .Q(empty_n_reg_n_2),
        .R(ap_rst_n_0));
  LUT6 #(
    .INIT(64'hFBBBBBBBFBFBFBFB)) 
    full_n_i_1
       (.I0(full_n_i_2__8_n_2),
        .I1(ap_rst_n),
        .I2(data_vld_reg_n_2),
        .I3(\dout_buf_reg[34] ),
        .I4(beat_valid),
        .I5(empty_n_reg_n_2),
        .O(full_n_i_1_n_2));
  LUT6 #(
    .INIT(64'hAA8AAAAAAAAAAAAA)) 
    full_n_i_2__8
       (.I0(fifo_rctl_ready),
        .I1(\pout[3]_i_4__0_n_2 ),
        .I2(pout_reg__0[0]),
        .I3(pout_reg__0[1]),
        .I4(pout_reg__0[3]),
        .I5(pout_reg__0[2]),
        .O(full_n_i_2__8_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(fifo_rctl_ready),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT3 #(
    .INIT(8'h2A)) 
    invalid_len_event_i_2
       (.I0(rreq_handling_reg_0),
        .I1(p_15_in),
        .I2(\end_addr_buf_reg[31] ),
        .O(invalid_len_event_reg));
  LUT1 #(
    .INIT(2'h1)) 
    \pout[0]_i_1 
       (.I0(pout_reg__0[0]),
        .O(\pout[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \pout[1]_i_1 
       (.I0(\pout[3]_i_4__0_n_2 ),
        .I1(pout_reg__0[0]),
        .I2(pout_reg__0[1]),
        .O(\pout[1]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT4 #(
    .INIT(16'hA96A)) 
    \pout[2]_i_1 
       (.I0(pout_reg__0[2]),
        .I1(pout_reg__0[1]),
        .I2(pout_reg__0[0]),
        .I3(\pout[3]_i_4__0_n_2 ),
        .O(\pout[2]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h0CCC000051110000)) 
    \pout[3]_i_1 
       (.I0(\pout[3]_i_3_n_2 ),
        .I1(empty_n_reg_n_2),
        .I2(beat_valid),
        .I3(\dout_buf_reg[34] ),
        .I4(data_vld_reg_n_2),
        .I5(p_14_in),
        .O(\pout[3]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT5 #(
    .INIT(32'h9AAAAAA6)) 
    \pout[3]_i_2 
       (.I0(pout_reg__0[3]),
        .I1(\pout[3]_i_4__0_n_2 ),
        .I2(pout_reg__0[0]),
        .I3(pout_reg__0[1]),
        .I4(pout_reg__0[2]),
        .O(\pout[3]_i_2_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT4 #(
    .INIT(16'h0001)) 
    \pout[3]_i_3 
       (.I0(pout_reg__0[0]),
        .I1(pout_reg__0[1]),
        .I2(pout_reg__0[3]),
        .I3(pout_reg__0[2]),
        .O(\pout[3]_i_3_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT5 #(
    .INIT(32'hF777FFFF)) 
    \pout[3]_i_4__0 
       (.I0(p_14_in),
        .I1(data_vld_reg_n_2),
        .I2(\dout_buf_reg[34] ),
        .I3(beat_valid),
        .I4(empty_n_reg_n_2),
        .O(\pout[3]_i_4__0_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1_n_2 ),
        .D(\pout[0]_i_1_n_2 ),
        .Q(pout_reg__0[0]),
        .R(ap_rst_n_0));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1_n_2 ),
        .D(\pout[1]_i_1_n_2 ),
        .Q(pout_reg__0[1]),
        .R(ap_rst_n_0));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1_n_2 ),
        .D(\pout[2]_i_1_n_2 ),
        .Q(pout_reg__0[2]),
        .R(ap_rst_n_0));
  FDRE \pout_reg[3] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1_n_2 ),
        .D(\pout[3]_i_2_n_2 ),
        .Q(pout_reg__0[3]),
        .R(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT5 #(
    .INIT(32'h7070FF70)) 
    rreq_handling_i_1
       (.I0(\end_addr_buf_reg[31] ),
        .I1(p_15_in),
        .I2(rreq_handling_reg_0),
        .I3(fifo_rreq_valid_buf_reg),
        .I4(invalid_len_event),
        .O(rreq_handling_reg));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT3 #(
    .INIT(8'h4F)) 
    \sect_addr_buf[11]_i_1 
       (.I0(CO),
        .I1(p_15_in),
        .I2(ap_rst_n),
        .O(\sect_addr_buf_reg[2] ));
  LUT5 #(
    .INIT(32'hAAAABBBA)) 
    \sect_cnt[0]_i_1 
       (.I0(p_15_in),
        .I1(rreq_handling_reg_0),
        .I2(fifo_rreq_valid_buf_reg),
        .I3(fifo_rreq_valid),
        .I4(invalid_len_event),
        .O(\sect_cnt_reg[0] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[0]_i_1 
       (.I0(\start_addr_buf_reg[11] [0]),
        .I1(Q[0]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[0] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[1]_i_1 
       (.I0(\start_addr_buf_reg[11] [1]),
        .I1(Q[1]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[1] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[2]_i_1 
       (.I0(\start_addr_buf_reg[11] [2]),
        .I1(Q[2]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[2] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[3]_i_1 
       (.I0(\start_addr_buf_reg[11] [3]),
        .I1(Q[3]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[3] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[4]_i_1 
       (.I0(\start_addr_buf_reg[11] [4]),
        .I1(Q[4]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[4] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[5]_i_1 
       (.I0(\start_addr_buf_reg[11] [5]),
        .I1(Q[5]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[5] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[6]_i_1 
       (.I0(\start_addr_buf_reg[11] [6]),
        .I1(Q[6]),
        .I2(\beat_len_buf_reg[9] [1]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[6] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[7]_i_1 
       (.I0(\start_addr_buf_reg[11] [7]),
        .I1(Q[7]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[7] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[8]_i_1 
       (.I0(\start_addr_buf_reg[11] [8]),
        .I1(Q[8]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[8] ));
  LUT6 #(
    .INIT(64'h0A0A0A0A8A0A8A8A)) 
    \sect_len_buf[9]_i_1 
       (.I0(rreq_handling_reg_0),
        .I1(fifo_rctl_ready),
        .I2(\could_multi_bursts.sect_handling_reg_0 ),
        .I3(m_axi_DATA_A_ARREADY),
        .I4(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I5(\sect_len_buf_reg[7]_0 ),
        .O(p_15_in));
  LUT6 #(
    .INIT(64'hF033F033AAFFAAAA)) 
    \sect_len_buf[9]_i_2 
       (.I0(Q[9]),
        .I1(\start_addr_buf_reg[11] [9]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[9] ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi_read" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_read
   (D,
    s_ready_t_reg,
    \ap_CS_fsm_reg[9] ,
    ap_enable_reg_pp0_iter1_reg,
    DATA_A_RREADY,
    tmp_product,
    E,
    WEBWE,
    m_axi_DATA_A_RREADY,
    ap_enable_reg_pp0_iter1_reg_0,
    ap_enable_reg_pp0_iter3_reg,
    ap_enable_reg_pp0_iter2_reg,
    \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ,
    \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ,
    \tmp_reg_287_reg[0] ,
    \DATA_B_addr_read_reg_282_reg[31] ,
    m_axi_DATA_A_ARADDR,
    ARLEN,
    ap_reg_ioackin_DATA_C_WREADY_reg,
    m_axi_DATA_A_ARVALID,
    SR,
    \DATA_A_addr_read_reg_277_reg[31] ,
    ap_reg_ioackin_DATA_A_ARREADY,
    DATA_B_ARREADY,
    ap_reg_ioackin_DATA_B_ARREADY_reg,
    Q,
    ap_enable_reg_pp0_iter4_reg,
    ap_enable_reg_pp0_iter3,
    ap_enable_reg_pp0_iter0,
    ap_enable_reg_pp0_iter1_reg_1,
    exitcond_fu_220_p2,
    \exitcond_reg_268_reg[0] ,
    ap_reg_ioackin_DATA_C_WREADY_reg_0,
    DATA_C_WREADY,
    ap_reg_pp0_iter3_exitcond_reg_268,
    ap_enable_reg_pp0_iter4_reg_0,
    rdata_valid,
    ap_rst_n,
    m_axi_DATA_A_RVALID,
    ap_enable_reg_pp0_iter2,
    ap_reg_pp0_iter2_exitcond_reg_268,
    ap_reg_pp0_iter1_exitcond_reg_268,
    m_axi_DATA_A_ARREADY,
    DATA_C_AWREADY,
    ap_clk,
    m_axi_DATA_A_RLAST,
    m_axi_DATA_A_RRESP,
    ap_rst_n_0,
    \a1_reg_246_reg[29] );
  output [1:0]D;
  output s_ready_t_reg;
  output \ap_CS_fsm_reg[9] ;
  output ap_enable_reg_pp0_iter1_reg;
  output DATA_A_RREADY;
  output tmp_product;
  output [0:0]E;
  output [0:0]WEBWE;
  output m_axi_DATA_A_RREADY;
  output ap_enable_reg_pp0_iter1_reg_0;
  output ap_enable_reg_pp0_iter3_reg;
  output ap_enable_reg_pp0_iter2_reg;
  output \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ;
  output \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ;
  output [0:0]\tmp_reg_287_reg[0] ;
  output [0:0]\DATA_B_addr_read_reg_282_reg[31] ;
  output [29:0]m_axi_DATA_A_ARADDR;
  output [3:0]ARLEN;
  output ap_reg_ioackin_DATA_C_WREADY_reg;
  output m_axi_DATA_A_ARVALID;
  output [0:0]SR;
  output [31:0]\DATA_A_addr_read_reg_277_reg[31] ;
  input ap_reg_ioackin_DATA_A_ARREADY;
  input DATA_B_ARREADY;
  input ap_reg_ioackin_DATA_B_ARREADY_reg;
  input [2:0]Q;
  input ap_enable_reg_pp0_iter4_reg;
  input ap_enable_reg_pp0_iter3;
  input ap_enable_reg_pp0_iter0;
  input ap_enable_reg_pp0_iter1_reg_1;
  input exitcond_fu_220_p2;
  input \exitcond_reg_268_reg[0] ;
  input ap_reg_ioackin_DATA_C_WREADY_reg_0;
  input DATA_C_WREADY;
  input ap_reg_pp0_iter3_exitcond_reg_268;
  input ap_enable_reg_pp0_iter4_reg_0;
  input rdata_valid;
  input ap_rst_n;
  input m_axi_DATA_A_RVALID;
  input ap_enable_reg_pp0_iter2;
  input ap_reg_pp0_iter2_exitcond_reg_268;
  input ap_reg_pp0_iter1_exitcond_reg_268;
  input m_axi_DATA_A_ARREADY;
  input DATA_C_AWREADY;
  input ap_clk;
  input [32:0]m_axi_DATA_A_RLAST;
  input [1:0]m_axi_DATA_A_RRESP;
  input [0:0]ap_rst_n_0;
  input [29:0]\a1_reg_246_reg[29] ;

  wire [3:0]ARLEN;
  wire [1:0]D;
  wire DATA_A_RREADY;
  wire [31:0]\DATA_A_addr_read_reg_277_reg[31] ;
  wire DATA_B_ARREADY;
  wire [0:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire DATA_C_AWREADY;
  wire DATA_C_WREADY;
  wire [0:0]E;
  wire [2:0]Q;
  wire [0:0]SR;
  wire [0:0]WEBWE;
  wire [29:0]\a1_reg_246_reg[29] ;
  wire align_len;
  wire [31:7]align_len0;
  wire align_len0_carry_n_3;
  wire align_len0_carry_n_4;
  wire align_len0_carry_n_5;
  wire \align_len_reg_n_2_[31] ;
  wire \align_len_reg_n_2_[7] ;
  wire \align_len_reg_n_2_[8] ;
  wire \ap_CS_fsm_reg[9] ;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter1_reg;
  wire ap_enable_reg_pp0_iter1_reg_0;
  wire ap_enable_reg_pp0_iter1_reg_1;
  wire ap_enable_reg_pp0_iter2;
  wire ap_enable_reg_pp0_iter2_reg;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter3_reg;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_enable_reg_pp0_iter4_reg_0;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg;
  wire ap_reg_ioackin_DATA_C_WREADY_reg;
  wire ap_reg_ioackin_DATA_C_WREADY_reg_0;
  wire ap_reg_pp0_iter1_exitcond_reg_268;
  wire ap_reg_pp0_iter2_exitcond_reg_268;
  wire \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ;
  wire ap_rst_n;
  wire [0:0]ap_rst_n_0;
  wire [31:2]araddr_tmp;
  wire [9:5]beat_len_buf;
  wire beat_valid;
  wire buff_rdata_n_14;
  wire buff_rdata_n_15;
  wire buff_rdata_n_16;
  wire buff_rdata_n_18;
  wire buff_rdata_n_19;
  wire buff_rdata_n_21;
  wire buff_rdata_n_22;
  wire buff_rdata_n_23;
  wire buff_rdata_n_24;
  wire buff_rdata_n_25;
  wire buff_rdata_n_26;
  wire buff_rdata_n_27;
  wire buff_rdata_n_28;
  wire buff_rdata_n_29;
  wire buff_rdata_n_30;
  wire buff_rdata_n_31;
  wire buff_rdata_n_32;
  wire buff_rdata_n_33;
  wire buff_rdata_n_34;
  wire buff_rdata_n_35;
  wire buff_rdata_n_36;
  wire buff_rdata_n_37;
  wire buff_rdata_n_38;
  wire buff_rdata_n_39;
  wire buff_rdata_n_4;
  wire buff_rdata_n_40;
  wire buff_rdata_n_41;
  wire buff_rdata_n_42;
  wire buff_rdata_n_43;
  wire buff_rdata_n_44;
  wire buff_rdata_n_45;
  wire buff_rdata_n_46;
  wire buff_rdata_n_47;
  wire buff_rdata_n_48;
  wire buff_rdata_n_49;
  wire buff_rdata_n_5;
  wire buff_rdata_n_50;
  wire buff_rdata_n_51;
  wire buff_rdata_n_52;
  wire buff_rdata_n_6;
  wire buff_rdata_n_7;
  wire \bus_equal_gen.data_buf_reg_n_2_[0] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[10] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[11] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[12] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[13] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[14] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[15] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[16] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[17] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[18] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[19] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[1] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[20] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[21] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[22] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[23] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[24] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[25] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[26] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[27] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[28] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[29] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[2] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[30] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[31] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[3] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[4] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[5] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[6] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[7] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[8] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[9] ;
  wire \bus_equal_gen.rdata_valid_t_reg_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_7_n_2 ;
  wire \could_multi_bursts.araddr_buf[4]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[4]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[4]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_3_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_4_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_5_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_6_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[31]_i_3_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[31]_i_3_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2_n_5 ;
  wire [5:0]\could_multi_bursts.loop_cnt_reg__0 ;
  wire \could_multi_bursts.sect_handling_reg_n_2 ;
  wire [19:0]data;
  wire [31:2]data1;
  wire [34:34]data_pack;
  wire [31:2]end_addr;
  wire \end_addr_buf_reg_n_2_[10] ;
  wire \end_addr_buf_reg_n_2_[11] ;
  wire \end_addr_buf_reg_n_2_[2] ;
  wire \end_addr_buf_reg_n_2_[3] ;
  wire \end_addr_buf_reg_n_2_[4] ;
  wire \end_addr_buf_reg_n_2_[5] ;
  wire \end_addr_buf_reg_n_2_[6] ;
  wire \end_addr_buf_reg_n_2_[7] ;
  wire \end_addr_buf_reg_n_2_[8] ;
  wire \end_addr_buf_reg_n_2_[9] ;
  wire end_addr_carry__0_i_1_n_2;
  wire end_addr_carry__0_i_2_n_2;
  wire end_addr_carry__0_i_3_n_2;
  wire end_addr_carry__0_i_4_n_2;
  wire end_addr_carry__0_n_2;
  wire end_addr_carry__0_n_3;
  wire end_addr_carry__0_n_4;
  wire end_addr_carry__0_n_5;
  wire end_addr_carry__1_i_1_n_2;
  wire end_addr_carry__1_i_2_n_2;
  wire end_addr_carry__1_i_3_n_2;
  wire end_addr_carry__1_i_4_n_2;
  wire end_addr_carry__1_n_2;
  wire end_addr_carry__1_n_3;
  wire end_addr_carry__1_n_4;
  wire end_addr_carry__1_n_5;
  wire end_addr_carry__2_i_1_n_2;
  wire end_addr_carry__2_i_2_n_2;
  wire end_addr_carry__2_i_3_n_2;
  wire end_addr_carry__2_i_4_n_2;
  wire end_addr_carry__2_n_2;
  wire end_addr_carry__2_n_3;
  wire end_addr_carry__2_n_4;
  wire end_addr_carry__2_n_5;
  wire end_addr_carry__3_i_1_n_2;
  wire end_addr_carry__3_i_2_n_2;
  wire end_addr_carry__3_i_3_n_2;
  wire end_addr_carry__3_i_4_n_2;
  wire end_addr_carry__3_n_2;
  wire end_addr_carry__3_n_3;
  wire end_addr_carry__3_n_4;
  wire end_addr_carry__3_n_5;
  wire end_addr_carry__4_i_1_n_2;
  wire end_addr_carry__4_i_2_n_2;
  wire end_addr_carry__4_i_3_n_2;
  wire end_addr_carry__4_i_4_n_2;
  wire end_addr_carry__4_n_2;
  wire end_addr_carry__4_n_3;
  wire end_addr_carry__4_n_4;
  wire end_addr_carry__4_n_5;
  wire end_addr_carry__5_i_1_n_2;
  wire end_addr_carry__5_i_2_n_2;
  wire end_addr_carry__5_i_3_n_2;
  wire end_addr_carry__5_i_4_n_2;
  wire end_addr_carry__5_n_2;
  wire end_addr_carry__5_n_3;
  wire end_addr_carry__5_n_4;
  wire end_addr_carry__5_n_5;
  wire end_addr_carry__6_i_1_n_2;
  wire end_addr_carry__6_i_2_n_2;
  wire end_addr_carry__6_n_5;
  wire end_addr_carry_i_1_n_2;
  wire end_addr_carry_i_2_n_2;
  wire end_addr_carry_i_3_n_2;
  wire end_addr_carry_i_4_n_2;
  wire end_addr_carry_n_2;
  wire end_addr_carry_n_3;
  wire end_addr_carry_n_4;
  wire end_addr_carry_n_5;
  wire exitcond_fu_220_p2;
  wire \exitcond_reg_268_reg[0] ;
  wire fifo_rctl_n_10;
  wire fifo_rctl_n_11;
  wire fifo_rctl_n_12;
  wire fifo_rctl_n_13;
  wire fifo_rctl_n_14;
  wire fifo_rctl_n_15;
  wire fifo_rctl_n_16;
  wire fifo_rctl_n_17;
  wire fifo_rctl_n_18;
  wire fifo_rctl_n_19;
  wire fifo_rctl_n_2;
  wire fifo_rctl_n_20;
  wire fifo_rctl_n_21;
  wire fifo_rctl_n_22;
  wire fifo_rctl_n_23;
  wire fifo_rctl_n_24;
  wire fifo_rctl_n_25;
  wire fifo_rctl_n_4;
  wire fifo_rctl_n_6;
  wire fifo_rctl_n_7;
  wire fifo_rctl_n_8;
  wire fifo_rctl_n_9;
  wire [38:38]fifo_rreq_data;
  wire fifo_rreq_n_10;
  wire fifo_rreq_n_11;
  wire fifo_rreq_n_12;
  wire fifo_rreq_n_13;
  wire fifo_rreq_n_14;
  wire fifo_rreq_n_46;
  wire fifo_rreq_n_47;
  wire fifo_rreq_n_48;
  wire fifo_rreq_n_49;
  wire fifo_rreq_n_5;
  wire fifo_rreq_n_50;
  wire fifo_rreq_n_51;
  wire fifo_rreq_n_52;
  wire fifo_rreq_n_53;
  wire fifo_rreq_n_54;
  wire fifo_rreq_n_55;
  wire fifo_rreq_n_56;
  wire fifo_rreq_n_57;
  wire fifo_rreq_n_58;
  wire fifo_rreq_n_59;
  wire fifo_rreq_n_60;
  wire fifo_rreq_n_61;
  wire fifo_rreq_n_62;
  wire fifo_rreq_n_63;
  wire fifo_rreq_n_64;
  wire fifo_rreq_n_65;
  wire fifo_rreq_n_66;
  wire fifo_rreq_n_67;
  wire fifo_rreq_n_7;
  wire fifo_rreq_n_8;
  wire fifo_rreq_n_9;
  wire fifo_rreq_valid;
  wire fifo_rreq_valid_buf_reg_n_2;
  wire first_sect;
  wire first_sect_carry__0_i_1_n_2;
  wire first_sect_carry__0_i_2_n_2;
  wire first_sect_carry__0_i_3_n_2;
  wire first_sect_carry__0_n_4;
  wire first_sect_carry__0_n_5;
  wire first_sect_carry_i_1_n_2;
  wire first_sect_carry_i_2_n_2;
  wire first_sect_carry_i_3_n_2;
  wire first_sect_carry_i_4_n_2;
  wire first_sect_carry_n_2;
  wire first_sect_carry_n_3;
  wire first_sect_carry_n_4;
  wire first_sect_carry_n_5;
  wire invalid_len_event;
  wire last_sect;
  wire last_sect_carry__0_n_4;
  wire last_sect_carry__0_n_5;
  wire last_sect_carry_n_2;
  wire last_sect_carry_n_3;
  wire last_sect_carry_n_4;
  wire last_sect_carry_n_5;
  wire [29:0]m_axi_DATA_A_ARADDR;
  wire m_axi_DATA_A_ARREADY;
  wire m_axi_DATA_A_ARVALID;
  wire [32:0]m_axi_DATA_A_RLAST;
  wire m_axi_DATA_A_RREADY;
  wire [1:0]m_axi_DATA_A_RRESP;
  wire m_axi_DATA_A_RVALID;
  wire next_beat;
  wire next_rreq;
  wire [5:0]p_0_in;
  wire [19:0]p_0_in0_in;
  wire [19:0]p_0_in_0;
  wire p_0_out_carry__0_n_4;
  wire p_0_out_carry__0_n_5;
  wire p_0_out_carry__0_n_7;
  wire p_0_out_carry__0_n_8;
  wire p_0_out_carry__0_n_9;
  wire p_0_out_carry_n_2;
  wire p_0_out_carry_n_3;
  wire p_0_out_carry_n_4;
  wire p_0_out_carry_n_5;
  wire p_0_out_carry_n_6;
  wire p_0_out_carry_n_7;
  wire p_0_out_carry_n_8;
  wire p_0_out_carry_n_9;
  wire p_14_in;
  wire p_15_in;
  wire push;
  wire [29:0]q;
  wire rdata_ack_t;
  wire rdata_valid;
  wire rreq_handling_reg_n_2;
  wire rs2f_rreq_ack;
  wire [29:0]rs2f_rreq_data;
  wire rs2f_rreq_valid;
  wire s_ready_t_reg;
  wire [31:2]sect_addr;
  wire \sect_addr_buf_reg_n_2_[10] ;
  wire \sect_addr_buf_reg_n_2_[11] ;
  wire \sect_addr_buf_reg_n_2_[12] ;
  wire \sect_addr_buf_reg_n_2_[13] ;
  wire \sect_addr_buf_reg_n_2_[14] ;
  wire \sect_addr_buf_reg_n_2_[15] ;
  wire \sect_addr_buf_reg_n_2_[16] ;
  wire \sect_addr_buf_reg_n_2_[17] ;
  wire \sect_addr_buf_reg_n_2_[18] ;
  wire \sect_addr_buf_reg_n_2_[19] ;
  wire \sect_addr_buf_reg_n_2_[20] ;
  wire \sect_addr_buf_reg_n_2_[21] ;
  wire \sect_addr_buf_reg_n_2_[22] ;
  wire \sect_addr_buf_reg_n_2_[23] ;
  wire \sect_addr_buf_reg_n_2_[24] ;
  wire \sect_addr_buf_reg_n_2_[25] ;
  wire \sect_addr_buf_reg_n_2_[26] ;
  wire \sect_addr_buf_reg_n_2_[27] ;
  wire \sect_addr_buf_reg_n_2_[28] ;
  wire \sect_addr_buf_reg_n_2_[29] ;
  wire \sect_addr_buf_reg_n_2_[2] ;
  wire \sect_addr_buf_reg_n_2_[30] ;
  wire \sect_addr_buf_reg_n_2_[31] ;
  wire \sect_addr_buf_reg_n_2_[3] ;
  wire \sect_addr_buf_reg_n_2_[4] ;
  wire \sect_addr_buf_reg_n_2_[5] ;
  wire \sect_addr_buf_reg_n_2_[6] ;
  wire \sect_addr_buf_reg_n_2_[7] ;
  wire \sect_addr_buf_reg_n_2_[8] ;
  wire \sect_addr_buf_reg_n_2_[9] ;
  wire [19:0]sect_cnt_reg;
  wire \sect_len_buf_reg_n_2_[0] ;
  wire \sect_len_buf_reg_n_2_[1] ;
  wire \sect_len_buf_reg_n_2_[2] ;
  wire \sect_len_buf_reg_n_2_[3] ;
  wire \sect_len_buf_reg_n_2_[4] ;
  wire \sect_len_buf_reg_n_2_[5] ;
  wire \sect_len_buf_reg_n_2_[6] ;
  wire \sect_len_buf_reg_n_2_[7] ;
  wire \sect_len_buf_reg_n_2_[8] ;
  wire \sect_len_buf_reg_n_2_[9] ;
  wire \start_addr_buf_reg_n_2_[10] ;
  wire \start_addr_buf_reg_n_2_[11] ;
  wire \start_addr_buf_reg_n_2_[2] ;
  wire \start_addr_buf_reg_n_2_[3] ;
  wire \start_addr_buf_reg_n_2_[4] ;
  wire \start_addr_buf_reg_n_2_[5] ;
  wire \start_addr_buf_reg_n_2_[6] ;
  wire \start_addr_buf_reg_n_2_[7] ;
  wire \start_addr_buf_reg_n_2_[8] ;
  wire \start_addr_buf_reg_n_2_[9] ;
  wire \start_addr_reg_n_2_[10] ;
  wire \start_addr_reg_n_2_[11] ;
  wire \start_addr_reg_n_2_[2] ;
  wire \start_addr_reg_n_2_[3] ;
  wire \start_addr_reg_n_2_[4] ;
  wire \start_addr_reg_n_2_[5] ;
  wire \start_addr_reg_n_2_[6] ;
  wire \start_addr_reg_n_2_[7] ;
  wire \start_addr_reg_n_2_[8] ;
  wire \start_addr_reg_n_2_[9] ;
  wire tmp_product;
  wire [0:0]\tmp_reg_287_reg[0] ;
  wire [5:0]usedw_reg;
  wire [3:3]NLW_align_len0_carry_CO_UNCONNECTED;
  wire [0:0]NLW_align_len0_carry_O_UNCONNECTED;
  wire [3:2]\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3_CO_UNCONNECTED ;
  wire [3:3]\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3_O_UNCONNECTED ;
  wire [0:0]\NLW_could_multi_bursts.araddr_buf_reg[4]_i_2_O_UNCONNECTED ;
  wire [0:0]NLW_end_addr_carry_O_UNCONNECTED;
  wire [3:1]NLW_end_addr_carry__6_CO_UNCONNECTED;
  wire [3:2]NLW_end_addr_carry__6_O_UNCONNECTED;
  wire [3:0]NLW_first_sect_carry_O_UNCONNECTED;
  wire [3:3]NLW_first_sect_carry__0_CO_UNCONNECTED;
  wire [3:0]NLW_first_sect_carry__0_O_UNCONNECTED;
  wire [3:0]NLW_last_sect_carry_O_UNCONNECTED;
  wire [3:3]NLW_last_sect_carry__0_CO_UNCONNECTED;
  wire [3:0]NLW_last_sect_carry__0_O_UNCONNECTED;
  wire [3:2]NLW_p_0_out_carry__0_CO_UNCONNECTED;
  wire [3:3]NLW_p_0_out_carry__0_O_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 align_len0_carry
       (.CI(1'b0),
        .CO({NLW_align_len0_carry_CO_UNCONNECTED[3],align_len0_carry_n_3,align_len0_carry_n_4,align_len0_carry_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,fifo_rreq_data,1'b0,1'b0}),
        .O({align_len0[31],align_len0[8:7],NLW_align_len0_carry_O_UNCONNECTED[0]}),
        .S({1'b1,fifo_rreq_n_14,1'b1,1'b1}));
  FDRE \align_len_reg[31] 
       (.C(ap_clk),
        .CE(align_len),
        .D(align_len0[31]),
        .Q(\align_len_reg_n_2_[31] ),
        .R(ap_rst_n_0));
  FDRE \align_len_reg[7] 
       (.C(ap_clk),
        .CE(align_len),
        .D(align_len0[7]),
        .Q(\align_len_reg_n_2_[7] ),
        .R(ap_rst_n_0));
  FDRE \align_len_reg[8] 
       (.C(ap_clk),
        .CE(align_len),
        .D(align_len0[8]),
        .Q(\align_len_reg_n_2_[8] ),
        .R(ap_rst_n_0));
  FDRE \beat_len_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\align_len_reg_n_2_[7] ),
        .Q(beat_len_buf[5]),
        .R(ap_rst_n_0));
  FDRE \beat_len_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\align_len_reg_n_2_[8] ),
        .Q(beat_len_buf[6]),
        .R(ap_rst_n_0));
  FDRE \beat_len_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\align_len_reg_n_2_[31] ),
        .Q(beat_len_buf[9]),
        .R(ap_rst_n_0));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_buffer__parameterized0 buff_rdata
       (.D({p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9,p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .DI(buff_rdata_n_18),
        .E(next_beat),
        .Q(usedw_reg),
        .S({buff_rdata_n_4,buff_rdata_n_5,buff_rdata_n_6,buff_rdata_n_7}),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .ap_rst_n_0(ap_rst_n_0),
        .beat_valid(beat_valid),
        .\bus_equal_gen.rdata_valid_t_reg (buff_rdata_n_19),
        .\bus_equal_gen.rdata_valid_t_reg_0 (\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .full_n_reg_0({data_pack,buff_rdata_n_21,buff_rdata_n_22,buff_rdata_n_23,buff_rdata_n_24,buff_rdata_n_25,buff_rdata_n_26,buff_rdata_n_27,buff_rdata_n_28,buff_rdata_n_29,buff_rdata_n_30,buff_rdata_n_31,buff_rdata_n_32,buff_rdata_n_33,buff_rdata_n_34,buff_rdata_n_35,buff_rdata_n_36,buff_rdata_n_37,buff_rdata_n_38,buff_rdata_n_39,buff_rdata_n_40,buff_rdata_n_41,buff_rdata_n_42,buff_rdata_n_43,buff_rdata_n_44,buff_rdata_n_45,buff_rdata_n_46,buff_rdata_n_47,buff_rdata_n_48,buff_rdata_n_49,buff_rdata_n_50,buff_rdata_n_51,buff_rdata_n_52}),
        .m_axi_DATA_A_RLAST(m_axi_DATA_A_RLAST),
        .m_axi_DATA_A_RREADY(m_axi_DATA_A_RREADY),
        .m_axi_DATA_A_RRESP(m_axi_DATA_A_RRESP),
        .m_axi_DATA_A_RVALID(m_axi_DATA_A_RVALID),
        .rdata_ack_t(rdata_ack_t),
        .\usedw_reg[7]_0 ({buff_rdata_n_14,buff_rdata_n_15,buff_rdata_n_16}));
  FDRE \bus_equal_gen.data_buf_reg[0] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_52),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[0] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_42),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[10] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_41),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[11] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_40),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[12] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_39),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[13] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_38),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[14] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_37),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[15] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_36),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[16] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_35),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[17] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_34),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[18] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_33),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[19] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[1] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_51),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[1] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_32),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[20] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_31),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[21] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_30),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[22] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_29),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[23] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_28),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[24] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_27),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[25] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_26),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[26] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_25),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[27] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_24),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[28] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_23),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[29] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_50),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[2] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_22),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[30] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_21),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[31] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_49),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[3] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_48),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[4] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_47),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[5] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_46),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[6] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_45),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[7] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_44),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[8] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_43),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[9] ),
        .R(1'b0));
  FDRE \bus_equal_gen.rdata_valid_t_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff_rdata_n_19),
        .Q(\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.ARVALID_Dummy_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rctl_n_24),
        .Q(m_axi_DATA_A_ARVALID),
        .R(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[10]_i_1 
       (.I0(data1[10]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[10] ),
        .O(araddr_tmp[10]));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[11]_i_1 
       (.I0(data1[11]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[11] ),
        .O(araddr_tmp[11]));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[12]_i_1 
       (.I0(data1[12]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[12] ),
        .O(araddr_tmp[12]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[10]),
        .O(\could_multi_bursts.araddr_buf[12]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[9]),
        .O(\could_multi_bursts.araddr_buf[12]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[8]),
        .O(\could_multi_bursts.araddr_buf[12]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[7]),
        .O(\could_multi_bursts.araddr_buf[12]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[13]_i_1 
       (.I0(data1[13]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[13] ),
        .O(araddr_tmp[13]));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[14]_i_1 
       (.I0(data1[14]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[14] ),
        .O(araddr_tmp[14]));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[15]_i_1 
       (.I0(data1[15]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[15] ),
        .O(araddr_tmp[15]));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[16]_i_1 
       (.I0(data1[16]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[16] ),
        .O(araddr_tmp[16]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[14]),
        .O(\could_multi_bursts.araddr_buf[16]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[13]),
        .O(\could_multi_bursts.araddr_buf[16]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[12]),
        .O(\could_multi_bursts.araddr_buf[16]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[11]),
        .O(\could_multi_bursts.araddr_buf[16]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[17]_i_1 
       (.I0(data1[17]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[17] ),
        .O(araddr_tmp[17]));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[18]_i_1 
       (.I0(data1[18]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[18] ),
        .O(araddr_tmp[18]));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[19]_i_1 
       (.I0(data1[19]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[19] ),
        .O(araddr_tmp[19]));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[20]_i_1 
       (.I0(data1[20]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[20] ),
        .O(araddr_tmp[20]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[18]),
        .O(\could_multi_bursts.araddr_buf[20]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[17]),
        .O(\could_multi_bursts.araddr_buf[20]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[16]),
        .O(\could_multi_bursts.araddr_buf[20]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[15]),
        .O(\could_multi_bursts.araddr_buf[20]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[21]_i_1 
       (.I0(data1[21]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[21] ),
        .O(araddr_tmp[21]));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[22]_i_1 
       (.I0(data1[22]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[22] ),
        .O(araddr_tmp[22]));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[23]_i_1 
       (.I0(data1[23]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[23] ),
        .O(araddr_tmp[23]));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[24]_i_1 
       (.I0(data1[24]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[24] ),
        .O(araddr_tmp[24]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[22]),
        .O(\could_multi_bursts.araddr_buf[24]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[21]),
        .O(\could_multi_bursts.araddr_buf[24]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[20]),
        .O(\could_multi_bursts.araddr_buf[24]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[19]),
        .O(\could_multi_bursts.araddr_buf[24]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[25]_i_1 
       (.I0(data1[25]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[25] ),
        .O(araddr_tmp[25]));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[26]_i_1 
       (.I0(data1[26]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[26] ),
        .O(araddr_tmp[26]));
  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[27]_i_1 
       (.I0(data1[27]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[27] ),
        .O(araddr_tmp[27]));
  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[28]_i_1 
       (.I0(data1[28]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[28] ),
        .O(araddr_tmp[28]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[26]),
        .O(\could_multi_bursts.araddr_buf[28]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[25]),
        .O(\could_multi_bursts.araddr_buf[28]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[24]),
        .O(\could_multi_bursts.araddr_buf[28]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[23]),
        .O(\could_multi_bursts.araddr_buf[28]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[29]_i_1 
       (.I0(data1[29]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[29] ),
        .O(araddr_tmp[29]));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[2]_i_1 
       (.I0(data1[2]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[2] ),
        .O(araddr_tmp[2]));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[30]_i_1 
       (.I0(data1[30]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[30] ),
        .O(araddr_tmp[30]));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[31]_i_2 
       (.I0(data1[31]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[31] ),
        .O(araddr_tmp[31]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \could_multi_bursts.araddr_buf[31]_i_4 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [2]),
        .I1(\could_multi_bursts.loop_cnt_reg__0 [3]),
        .I2(\could_multi_bursts.loop_cnt_reg__0 [4]),
        .I3(\could_multi_bursts.loop_cnt_reg__0 [5]),
        .I4(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .I5(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .O(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[31]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[29]),
        .O(\could_multi_bursts.araddr_buf[31]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[31]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[28]),
        .O(\could_multi_bursts.araddr_buf[31]_i_6_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[31]_i_7 
       (.I0(m_axi_DATA_A_ARADDR[27]),
        .O(\could_multi_bursts.araddr_buf[31]_i_7_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[3]_i_1 
       (.I0(data1[3]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[3] ),
        .O(araddr_tmp[3]));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[4]_i_1 
       (.I0(data1[4]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[4] ),
        .O(araddr_tmp[4]));
  LUT4 #(
    .INIT(16'h956A)) 
    \could_multi_bursts.araddr_buf[4]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[2]),
        .I1(ARLEN[0]),
        .I2(ARLEN[1]),
        .I3(ARLEN[2]),
        .O(\could_multi_bursts.araddr_buf[4]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'h96)) 
    \could_multi_bursts.araddr_buf[4]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[1]),
        .I1(ARLEN[1]),
        .I2(ARLEN[0]),
        .O(\could_multi_bursts.araddr_buf[4]_i_4_n_2 ));
  LUT2 #(
    .INIT(4'h9)) 
    \could_multi_bursts.araddr_buf[4]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[0]),
        .I1(ARLEN[0]),
        .O(\could_multi_bursts.araddr_buf[4]_i_5_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[5]_i_1 
       (.I0(data1[5]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[5] ),
        .O(araddr_tmp[5]));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[6]_i_1 
       (.I0(data1[6]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[6] ),
        .O(araddr_tmp[6]));
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[7]_i_1 
       (.I0(data1[7]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[7] ),
        .O(araddr_tmp[7]));
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[8]_i_1 
       (.I0(data1[8]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[8] ),
        .O(araddr_tmp[8]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[8]_i_3 
       (.I0(m_axi_DATA_A_ARADDR[6]),
        .O(\could_multi_bursts.araddr_buf[8]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[8]_i_4 
       (.I0(m_axi_DATA_A_ARADDR[5]),
        .O(\could_multi_bursts.araddr_buf[8]_i_4_n_2 ));
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \could_multi_bursts.araddr_buf[8]_i_5 
       (.I0(m_axi_DATA_A_ARADDR[4]),
        .I1(ARLEN[2]),
        .I2(ARLEN[1]),
        .I3(ARLEN[0]),
        .I4(ARLEN[3]),
        .O(\could_multi_bursts.araddr_buf[8]_i_5_n_2 ));
  LUT5 #(
    .INIT(32'h95556AAA)) 
    \could_multi_bursts.araddr_buf[8]_i_6 
       (.I0(m_axi_DATA_A_ARADDR[3]),
        .I1(ARLEN[2]),
        .I2(ARLEN[1]),
        .I3(ARLEN[0]),
        .I4(ARLEN[3]),
        .O(\could_multi_bursts.araddr_buf[8]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[9]_i_1 
       (.I0(data1[9]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[9] ),
        .O(araddr_tmp[9]));
  FDRE \could_multi_bursts.araddr_buf_reg[10] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[10]),
        .Q(m_axi_DATA_A_ARADDR[8]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[11] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[11]),
        .Q(m_axi_DATA_A_ARADDR[9]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[12] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[12]),
        .Q(m_axi_DATA_A_ARADDR[10]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[12]_i_2 
       (.CI(\could_multi_bursts.araddr_buf_reg[8]_i_2_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[12]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[12]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[12]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[12]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,m_axi_DATA_A_ARADDR[8:7]}),
        .O(data1[12:9]),
        .S({\could_multi_bursts.araddr_buf[12]_i_3_n_2 ,\could_multi_bursts.araddr_buf[12]_i_4_n_2 ,\could_multi_bursts.araddr_buf[12]_i_5_n_2 ,\could_multi_bursts.araddr_buf[12]_i_6_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[13] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[13]),
        .Q(m_axi_DATA_A_ARADDR[11]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[14] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[14]),
        .Q(m_axi_DATA_A_ARADDR[12]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[15] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[15]),
        .Q(m_axi_DATA_A_ARADDR[13]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[16] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[16]),
        .Q(m_axi_DATA_A_ARADDR[14]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[16]_i_2 
       (.CI(\could_multi_bursts.araddr_buf_reg[12]_i_2_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[16]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[16]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[16]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[16]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[16:13]),
        .S({\could_multi_bursts.araddr_buf[16]_i_3_n_2 ,\could_multi_bursts.araddr_buf[16]_i_4_n_2 ,\could_multi_bursts.araddr_buf[16]_i_5_n_2 ,\could_multi_bursts.araddr_buf[16]_i_6_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[17] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[17]),
        .Q(m_axi_DATA_A_ARADDR[15]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[18] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[18]),
        .Q(m_axi_DATA_A_ARADDR[16]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[19] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[19]),
        .Q(m_axi_DATA_A_ARADDR[17]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[20] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[20]),
        .Q(m_axi_DATA_A_ARADDR[18]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[20]_i_2 
       (.CI(\could_multi_bursts.araddr_buf_reg[16]_i_2_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[20]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[20]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[20]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[20]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[20:17]),
        .S({\could_multi_bursts.araddr_buf[20]_i_3_n_2 ,\could_multi_bursts.araddr_buf[20]_i_4_n_2 ,\could_multi_bursts.araddr_buf[20]_i_5_n_2 ,\could_multi_bursts.araddr_buf[20]_i_6_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[21] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[21]),
        .Q(m_axi_DATA_A_ARADDR[19]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[22] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[22]),
        .Q(m_axi_DATA_A_ARADDR[20]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[23] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[23]),
        .Q(m_axi_DATA_A_ARADDR[21]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[24] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[24]),
        .Q(m_axi_DATA_A_ARADDR[22]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[24]_i_2 
       (.CI(\could_multi_bursts.araddr_buf_reg[20]_i_2_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[24]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[24]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[24]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[24]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[24:21]),
        .S({\could_multi_bursts.araddr_buf[24]_i_3_n_2 ,\could_multi_bursts.araddr_buf[24]_i_4_n_2 ,\could_multi_bursts.araddr_buf[24]_i_5_n_2 ,\could_multi_bursts.araddr_buf[24]_i_6_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[25] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[25]),
        .Q(m_axi_DATA_A_ARADDR[23]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[26] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[26]),
        .Q(m_axi_DATA_A_ARADDR[24]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[27] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[27]),
        .Q(m_axi_DATA_A_ARADDR[25]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[28] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[28]),
        .Q(m_axi_DATA_A_ARADDR[26]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[28]_i_2 
       (.CI(\could_multi_bursts.araddr_buf_reg[24]_i_2_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[28]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[28]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[28]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[28]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[28:25]),
        .S({\could_multi_bursts.araddr_buf[28]_i_3_n_2 ,\could_multi_bursts.araddr_buf[28]_i_4_n_2 ,\could_multi_bursts.araddr_buf[28]_i_5_n_2 ,\could_multi_bursts.araddr_buf[28]_i_6_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[29] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[29]),
        .Q(m_axi_DATA_A_ARADDR[27]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[2]),
        .Q(m_axi_DATA_A_ARADDR[0]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[30] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[30]),
        .Q(m_axi_DATA_A_ARADDR[28]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[31] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[31]),
        .Q(m_axi_DATA_A_ARADDR[29]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[31]_i_3 
       (.CI(\could_multi_bursts.araddr_buf_reg[28]_i_2_n_2 ),
        .CO({\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3_CO_UNCONNECTED [3:2],\could_multi_bursts.araddr_buf_reg[31]_i_3_n_4 ,\could_multi_bursts.araddr_buf_reg[31]_i_3_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3_O_UNCONNECTED [3],data1[31:29]}),
        .S({1'b0,\could_multi_bursts.araddr_buf[31]_i_5_n_2 ,\could_multi_bursts.araddr_buf[31]_i_6_n_2 ,\could_multi_bursts.araddr_buf[31]_i_7_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[3]),
        .Q(m_axi_DATA_A_ARADDR[1]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[4]),
        .Q(m_axi_DATA_A_ARADDR[2]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\could_multi_bursts.araddr_buf_reg[4]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[4]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[4]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[4]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({m_axi_DATA_A_ARADDR[2:0],1'b0}),
        .O({data1[4:2],\NLW_could_multi_bursts.araddr_buf_reg[4]_i_2_O_UNCONNECTED [0]}),
        .S({\could_multi_bursts.araddr_buf[4]_i_3_n_2 ,\could_multi_bursts.araddr_buf[4]_i_4_n_2 ,\could_multi_bursts.araddr_buf[4]_i_5_n_2 ,1'b0}));
  FDRE \could_multi_bursts.araddr_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[5]),
        .Q(m_axi_DATA_A_ARADDR[3]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[6]),
        .Q(m_axi_DATA_A_ARADDR[4]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[7]),
        .Q(m_axi_DATA_A_ARADDR[5]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.araddr_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[8]),
        .Q(m_axi_DATA_A_ARADDR[6]),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[8]_i_2 
       (.CI(\could_multi_bursts.araddr_buf_reg[4]_i_2_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[8]_i_2_n_2 ,\could_multi_bursts.araddr_buf_reg[8]_i_2_n_3 ,\could_multi_bursts.araddr_buf_reg[8]_i_2_n_4 ,\could_multi_bursts.araddr_buf_reg[8]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI(m_axi_DATA_A_ARADDR[6:3]),
        .O(data1[8:5]),
        .S({\could_multi_bursts.araddr_buf[8]_i_3_n_2 ,\could_multi_bursts.araddr_buf[8]_i_4_n_2 ,\could_multi_bursts.araddr_buf[8]_i_5_n_2 ,\could_multi_bursts.araddr_buf[8]_i_6_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[9]),
        .Q(m_axi_DATA_A_ARADDR[7]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.arlen_buf_reg[0] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_6),
        .Q(ARLEN[0]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.arlen_buf_reg[1] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_7),
        .Q(ARLEN[1]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.arlen_buf_reg[2] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_8),
        .Q(ARLEN[2]),
        .R(ap_rst_n_0));
  FDRE \could_multi_bursts.arlen_buf_reg[3] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_10),
        .Q(ARLEN[3]),
        .R(ap_rst_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    \could_multi_bursts.loop_cnt[0]_i_1 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .O(p_0_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \could_multi_bursts.loop_cnt[1]_i_1 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .I1(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \could_multi_bursts.loop_cnt[2]_i_1 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [2]),
        .I1(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .I2(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \could_multi_bursts.loop_cnt[3]_i_1 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [3]),
        .I1(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .I2(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .I3(\could_multi_bursts.loop_cnt_reg__0 [2]),
        .O(p_0_in[3]));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \could_multi_bursts.loop_cnt[4]_i_1 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [4]),
        .I1(\could_multi_bursts.loop_cnt_reg__0 [2]),
        .I2(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .I3(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .I4(\could_multi_bursts.loop_cnt_reg__0 [3]),
        .O(p_0_in[4]));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \could_multi_bursts.loop_cnt[5]_i_2 
       (.I0(\could_multi_bursts.loop_cnt_reg__0 [5]),
        .I1(\could_multi_bursts.loop_cnt_reg__0 [3]),
        .I2(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .I3(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .I4(\could_multi_bursts.loop_cnt_reg__0 [2]),
        .I5(\could_multi_bursts.loop_cnt_reg__0 [4]),
        .O(p_0_in[5]));
  FDRE \could_multi_bursts.loop_cnt_reg[0] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[0]),
        .Q(\could_multi_bursts.loop_cnt_reg__0 [0]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[1] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[1]),
        .Q(\could_multi_bursts.loop_cnt_reg__0 [1]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[2] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[2]),
        .Q(\could_multi_bursts.loop_cnt_reg__0 [2]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[3] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[3]),
        .Q(\could_multi_bursts.loop_cnt_reg__0 [3]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[4] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[4]),
        .Q(\could_multi_bursts.loop_cnt_reg__0 [4]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[5] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[5]),
        .Q(\could_multi_bursts.loop_cnt_reg__0 [5]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.sect_handling_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rctl_n_11),
        .Q(\could_multi_bursts.sect_handling_reg_n_2 ),
        .R(ap_rst_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    \end_addr_buf[2]_i_1 
       (.I0(\start_addr_reg_n_2_[2] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr[2]));
  FDRE \end_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[10]),
        .Q(\end_addr_buf_reg_n_2_[10] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[11]),
        .Q(\end_addr_buf_reg_n_2_[11] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[12]),
        .Q(p_0_in0_in[0]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[13]),
        .Q(p_0_in0_in[1]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[14]),
        .Q(p_0_in0_in[2]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[15]),
        .Q(p_0_in0_in[3]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[16]),
        .Q(p_0_in0_in[4]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[17]),
        .Q(p_0_in0_in[5]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[18]),
        .Q(p_0_in0_in[6]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[19]),
        .Q(p_0_in0_in[7]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[20]),
        .Q(p_0_in0_in[8]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[21]),
        .Q(p_0_in0_in[9]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[22]),
        .Q(p_0_in0_in[10]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[23]),
        .Q(p_0_in0_in[11]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[24]),
        .Q(p_0_in0_in[12]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[25]),
        .Q(p_0_in0_in[13]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[26]),
        .Q(p_0_in0_in[14]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[27]),
        .Q(p_0_in0_in[15]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[28]),
        .Q(p_0_in0_in[16]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[29]),
        .Q(p_0_in0_in[17]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[2]),
        .Q(\end_addr_buf_reg_n_2_[2] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[30]),
        .Q(p_0_in0_in[18]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[31]),
        .Q(p_0_in0_in[19]),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[3]),
        .Q(\end_addr_buf_reg_n_2_[3] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[4]),
        .Q(\end_addr_buf_reg_n_2_[4] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[5]),
        .Q(\end_addr_buf_reg_n_2_[5] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[6]),
        .Q(\end_addr_buf_reg_n_2_[6] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[7]),
        .Q(\end_addr_buf_reg_n_2_[7] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[8]),
        .Q(\end_addr_buf_reg_n_2_[8] ),
        .R(ap_rst_n_0));
  FDRE \end_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[9]),
        .Q(\end_addr_buf_reg_n_2_[9] ),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry
       (.CI(1'b0),
        .CO({end_addr_carry_n_2,end_addr_carry_n_3,end_addr_carry_n_4,end_addr_carry_n_5}),
        .CYINIT(1'b0),
        .DI({\start_addr_reg_n_2_[5] ,\start_addr_reg_n_2_[4] ,\start_addr_reg_n_2_[3] ,\start_addr_reg_n_2_[2] }),
        .O({end_addr[5:3],NLW_end_addr_carry_O_UNCONNECTED[0]}),
        .S({end_addr_carry_i_1_n_2,end_addr_carry_i_2_n_2,end_addr_carry_i_3_n_2,end_addr_carry_i_4_n_2}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__0
       (.CI(end_addr_carry_n_2),
        .CO({end_addr_carry__0_n_2,end_addr_carry__0_n_3,end_addr_carry__0_n_4,end_addr_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({\start_addr_reg_n_2_[9] ,\start_addr_reg_n_2_[8] ,\start_addr_reg_n_2_[7] ,\start_addr_reg_n_2_[6] }),
        .O(end_addr[9:6]),
        .S({end_addr_carry__0_i_1_n_2,end_addr_carry__0_i_2_n_2,end_addr_carry__0_i_3_n_2,end_addr_carry__0_i_4_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_1
       (.I0(\start_addr_reg_n_2_[9] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__0_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_2
       (.I0(\start_addr_reg_n_2_[8] ),
        .I1(\align_len_reg_n_2_[8] ),
        .O(end_addr_carry__0_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_3
       (.I0(\start_addr_reg_n_2_[7] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry__0_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_4
       (.I0(\start_addr_reg_n_2_[6] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry__0_i_4_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__1
       (.CI(end_addr_carry__0_n_2),
        .CO({end_addr_carry__1_n_2,end_addr_carry__1_n_3,end_addr_carry__1_n_4,end_addr_carry__1_n_5}),
        .CYINIT(1'b0),
        .DI({data[1:0],\start_addr_reg_n_2_[11] ,\start_addr_reg_n_2_[10] }),
        .O(end_addr[13:10]),
        .S({end_addr_carry__1_i_1_n_2,end_addr_carry__1_i_2_n_2,end_addr_carry__1_i_3_n_2,end_addr_carry__1_i_4_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_1
       (.I0(data[1]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_2
       (.I0(data[0]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_3
       (.I0(\start_addr_reg_n_2_[11] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_4
       (.I0(\start_addr_reg_n_2_[10] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_4_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__2
       (.CI(end_addr_carry__1_n_2),
        .CO({end_addr_carry__2_n_2,end_addr_carry__2_n_3,end_addr_carry__2_n_4,end_addr_carry__2_n_5}),
        .CYINIT(1'b0),
        .DI(data[5:2]),
        .O(end_addr[17:14]),
        .S({end_addr_carry__2_i_1_n_2,end_addr_carry__2_i_2_n_2,end_addr_carry__2_i_3_n_2,end_addr_carry__2_i_4_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_1
       (.I0(data[5]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_2
       (.I0(data[4]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_3
       (.I0(data[3]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_4
       (.I0(data[2]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_4_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__3
       (.CI(end_addr_carry__2_n_2),
        .CO({end_addr_carry__3_n_2,end_addr_carry__3_n_3,end_addr_carry__3_n_4,end_addr_carry__3_n_5}),
        .CYINIT(1'b0),
        .DI(data[9:6]),
        .O(end_addr[21:18]),
        .S({end_addr_carry__3_i_1_n_2,end_addr_carry__3_i_2_n_2,end_addr_carry__3_i_3_n_2,end_addr_carry__3_i_4_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_1
       (.I0(data[9]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_2
       (.I0(data[8]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_3
       (.I0(data[7]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_4
       (.I0(data[6]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_4_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__4
       (.CI(end_addr_carry__3_n_2),
        .CO({end_addr_carry__4_n_2,end_addr_carry__4_n_3,end_addr_carry__4_n_4,end_addr_carry__4_n_5}),
        .CYINIT(1'b0),
        .DI(data[13:10]),
        .O(end_addr[25:22]),
        .S({end_addr_carry__4_i_1_n_2,end_addr_carry__4_i_2_n_2,end_addr_carry__4_i_3_n_2,end_addr_carry__4_i_4_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_1
       (.I0(data[13]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_2
       (.I0(data[12]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_3
       (.I0(data[11]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_4
       (.I0(data[10]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_4_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__5
       (.CI(end_addr_carry__4_n_2),
        .CO({end_addr_carry__5_n_2,end_addr_carry__5_n_3,end_addr_carry__5_n_4,end_addr_carry__5_n_5}),
        .CYINIT(1'b0),
        .DI(data[17:14]),
        .O(end_addr[29:26]),
        .S({end_addr_carry__5_i_1_n_2,end_addr_carry__5_i_2_n_2,end_addr_carry__5_i_3_n_2,end_addr_carry__5_i_4_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_1
       (.I0(data[17]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_2
       (.I0(data[16]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_3
       (.I0(data[15]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_4
       (.I0(data[14]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_4_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__6
       (.CI(end_addr_carry__5_n_2),
        .CO({NLW_end_addr_carry__6_CO_UNCONNECTED[3:1],end_addr_carry__6_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,data[18]}),
        .O({NLW_end_addr_carry__6_O_UNCONNECTED[3:2],end_addr[31:30]}),
        .S({1'b0,1'b0,end_addr_carry__6_i_1_n_2,end_addr_carry__6_i_2_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__6_i_1
       (.I0(data[19]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__6_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__6_i_2
       (.I0(data[18]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__6_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_1
       (.I0(\start_addr_reg_n_2_[5] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_2
       (.I0(\start_addr_reg_n_2_[4] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_2_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_3
       (.I0(\start_addr_reg_n_2_[3] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_3_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_4
       (.I0(\start_addr_reg_n_2_[2] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_4_n_2));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_fifo__parameterized1 fifo_rctl
       (.CO(first_sect),
        .Q({\end_addr_buf_reg_n_2_[11] ,\end_addr_buf_reg_n_2_[10] ,\end_addr_buf_reg_n_2_[9] ,\end_addr_buf_reg_n_2_[8] ,\end_addr_buf_reg_n_2_[7] ,\end_addr_buf_reg_n_2_[6] ,\end_addr_buf_reg_n_2_[5] ,\end_addr_buf_reg_n_2_[4] ,\end_addr_buf_reg_n_2_[3] ,\end_addr_buf_reg_n_2_[2] }),
        .SR(fifo_rctl_n_2),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .ap_rst_n_0(ap_rst_n_0),
        .\beat_len_buf_reg[9] ({beat_len_buf[9],beat_len_buf[6:5]}),
        .beat_valid(beat_valid),
        .\could_multi_bursts.ARVALID_Dummy_reg (fifo_rctl_n_24),
        .\could_multi_bursts.ARVALID_Dummy_reg_0 (m_axi_DATA_A_ARVALID),
        .\could_multi_bursts.arlen_buf_reg[0] (fifo_rctl_n_6),
        .\could_multi_bursts.arlen_buf_reg[0]_0 (fifo_rctl_n_9),
        .\could_multi_bursts.arlen_buf_reg[1] (fifo_rctl_n_7),
        .\could_multi_bursts.arlen_buf_reg[2] (fifo_rctl_n_8),
        .\could_multi_bursts.arlen_buf_reg[3] (fifo_rctl_n_10),
        .\could_multi_bursts.sect_handling_reg (fifo_rctl_n_11),
        .\could_multi_bursts.sect_handling_reg_0 (\could_multi_bursts.sect_handling_reg_n_2 ),
        .\dout_buf_reg[34] (data_pack),
        .\end_addr_buf_reg[31] (last_sect),
        .fifo_rreq_valid(fifo_rreq_valid),
        .fifo_rreq_valid_buf_reg(fifo_rreq_valid_buf_reg_n_2),
        .invalid_len_event(invalid_len_event),
        .invalid_len_event_reg(fifo_rctl_n_22),
        .m_axi_DATA_A_ARREADY(m_axi_DATA_A_ARREADY),
        .p_14_in(p_14_in),
        .p_15_in(p_15_in),
        .rreq_handling_reg(fifo_rctl_n_25),
        .rreq_handling_reg_0(rreq_handling_reg_n_2),
        .\sect_addr_buf_reg[2] (fifo_rctl_n_4),
        .\sect_cnt_reg[0] (fifo_rctl_n_23),
        .\sect_len_buf_reg[0] (fifo_rctl_n_21),
        .\sect_len_buf_reg[0]_0 (\sect_len_buf_reg_n_2_[0] ),
        .\sect_len_buf_reg[1] (fifo_rctl_n_20),
        .\sect_len_buf_reg[1]_0 (\sect_len_buf_reg_n_2_[1] ),
        .\sect_len_buf_reg[2] (fifo_rctl_n_19),
        .\sect_len_buf_reg[2]_0 (\sect_len_buf_reg_n_2_[2] ),
        .\sect_len_buf_reg[3] (fifo_rctl_n_18),
        .\sect_len_buf_reg[3]_0 (\sect_len_buf_reg_n_2_[3] ),
        .\sect_len_buf_reg[4] (fifo_rctl_n_17),
        .\sect_len_buf_reg[5] (fifo_rctl_n_16),
        .\sect_len_buf_reg[6] (fifo_rctl_n_15),
        .\sect_len_buf_reg[7] (fifo_rctl_n_14),
        .\sect_len_buf_reg[7]_0 (fifo_rreq_n_5),
        .\sect_len_buf_reg[8] (fifo_rctl_n_13),
        .\sect_len_buf_reg[9] (fifo_rctl_n_12),
        .\start_addr_buf_reg[11] ({\start_addr_buf_reg_n_2_[11] ,\start_addr_buf_reg_n_2_[10] ,\start_addr_buf_reg_n_2_[9] ,\start_addr_buf_reg_n_2_[8] ,\start_addr_buf_reg_n_2_[7] ,\start_addr_buf_reg_n_2_[6] ,\start_addr_buf_reg_n_2_[5] ,\start_addr_buf_reg_n_2_[4] ,\start_addr_buf_reg_n_2_[3] ,\start_addr_buf_reg_n_2_[2] }));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_fifo__parameterized0 fifo_rreq
       (.E(next_rreq),
        .O({fifo_rreq_n_46,fifo_rreq_n_47,fifo_rreq_n_48,fifo_rreq_n_49}),
        .Q(data),
        .S({fifo_rreq_n_7,fifo_rreq_n_8,fifo_rreq_n_9,fifo_rreq_n_10}),
        .\align_len_reg[31] (fifo_rreq_n_14),
        .\align_len_reg[7] (align_len),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .ap_rst_n_0(ap_rst_n_0),
        .\could_multi_bursts.loop_cnt_reg[5] (\could_multi_bursts.loop_cnt_reg__0 ),
        .\data_p1_reg[29] (rs2f_rreq_data),
        .\end_addr_buf_reg[31] (last_sect),
        .\end_addr_buf_reg[31]_0 (p_0_in0_in),
        .fifo_rreq_valid(fifo_rreq_valid),
        .fifo_rreq_valid_buf_reg({fifo_rreq_n_11,fifo_rreq_n_12,fifo_rreq_n_13}),
        .fifo_rreq_valid_buf_reg_0(fifo_rreq_n_67),
        .fifo_rreq_valid_buf_reg_1(fifo_rreq_valid_buf_reg_n_2),
        .invalid_len_event(invalid_len_event),
        .invalid_len_event_reg({fifo_rreq_data,q}),
        .invalid_len_event_reg_0(fifo_rreq_n_66),
        .p_15_in(p_15_in),
        .push(push),
        .rreq_handling_reg(rreq_handling_reg_n_2),
        .rreq_handling_reg_0(fifo_rctl_n_22),
        .rs2f_rreq_ack(rs2f_rreq_ack),
        .sect_cnt_reg(sect_cnt_reg),
        .\sect_cnt_reg[11] ({fifo_rreq_n_54,fifo_rreq_n_55,fifo_rreq_n_56,fifo_rreq_n_57}),
        .\sect_cnt_reg[15] ({fifo_rreq_n_58,fifo_rreq_n_59,fifo_rreq_n_60,fifo_rreq_n_61}),
        .\sect_cnt_reg[19] ({fifo_rreq_n_62,fifo_rreq_n_63,fifo_rreq_n_64,fifo_rreq_n_65}),
        .\sect_cnt_reg[7] ({fifo_rreq_n_50,fifo_rreq_n_51,fifo_rreq_n_52,fifo_rreq_n_53}),
        .\sect_len_buf_reg[4] (\sect_len_buf_reg_n_2_[4] ),
        .\sect_len_buf_reg[5] (\sect_len_buf_reg_n_2_[5] ),
        .\sect_len_buf_reg[6] (\sect_len_buf_reg_n_2_[6] ),
        .\sect_len_buf_reg[7] (\sect_len_buf_reg_n_2_[7] ),
        .\sect_len_buf_reg[8] (\sect_len_buf_reg_n_2_[8] ),
        .\sect_len_buf_reg[9] (fifo_rreq_n_5),
        .\sect_len_buf_reg[9]_0 (\sect_len_buf_reg_n_2_[9] ),
        .\state_reg[0] (rs2f_rreq_valid));
  FDRE fifo_rreq_valid_buf_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rreq_n_67),
        .Q(fifo_rreq_valid_buf_reg_n_2),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 first_sect_carry
       (.CI(1'b0),
        .CO({first_sect_carry_n_2,first_sect_carry_n_3,first_sect_carry_n_4,first_sect_carry_n_5}),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_first_sect_carry_O_UNCONNECTED[3:0]),
        .S({first_sect_carry_i_1_n_2,first_sect_carry_i_2_n_2,first_sect_carry_i_3_n_2,first_sect_carry_i_4_n_2}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 first_sect_carry__0
       (.CI(first_sect_carry_n_2),
        .CO({NLW_first_sect_carry__0_CO_UNCONNECTED[3],first_sect,first_sect_carry__0_n_4,first_sect_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_first_sect_carry__0_O_UNCONNECTED[3:0]),
        .S({1'b0,first_sect_carry__0_i_1_n_2,first_sect_carry__0_i_2_n_2,first_sect_carry__0_i_3_n_2}));
  LUT4 #(
    .INIT(16'h9009)) 
    first_sect_carry__0_i_1
       (.I0(p_0_in_0[19]),
        .I1(sect_cnt_reg[19]),
        .I2(p_0_in_0[18]),
        .I3(sect_cnt_reg[18]),
        .O(first_sect_carry__0_i_1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry__0_i_2
       (.I0(sect_cnt_reg[17]),
        .I1(p_0_in_0[17]),
        .I2(sect_cnt_reg[15]),
        .I3(p_0_in_0[15]),
        .I4(p_0_in_0[16]),
        .I5(sect_cnt_reg[16]),
        .O(first_sect_carry__0_i_2_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry__0_i_3
       (.I0(p_0_in_0[14]),
        .I1(sect_cnt_reg[14]),
        .I2(sect_cnt_reg[12]),
        .I3(p_0_in_0[12]),
        .I4(sect_cnt_reg[13]),
        .I5(p_0_in_0[13]),
        .O(first_sect_carry__0_i_3_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_1
       (.I0(p_0_in_0[11]),
        .I1(sect_cnt_reg[11]),
        .I2(sect_cnt_reg[9]),
        .I3(p_0_in_0[9]),
        .I4(sect_cnt_reg[10]),
        .I5(p_0_in_0[10]),
        .O(first_sect_carry_i_1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_2
       (.I0(sect_cnt_reg[8]),
        .I1(p_0_in_0[8]),
        .I2(sect_cnt_reg[6]),
        .I3(p_0_in_0[6]),
        .I4(p_0_in_0[7]),
        .I5(sect_cnt_reg[7]),
        .O(first_sect_carry_i_2_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_3
       (.I0(p_0_in_0[4]),
        .I1(sect_cnt_reg[4]),
        .I2(sect_cnt_reg[5]),
        .I3(p_0_in_0[5]),
        .I4(sect_cnt_reg[3]),
        .I5(p_0_in_0[3]),
        .O(first_sect_carry_i_3_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_4
       (.I0(p_0_in_0[2]),
        .I1(sect_cnt_reg[2]),
        .I2(sect_cnt_reg[0]),
        .I3(p_0_in_0[0]),
        .I4(sect_cnt_reg[1]),
        .I5(p_0_in_0[1]),
        .O(first_sect_carry_i_4_n_2));
  FDRE invalid_len_event_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rreq_n_66),
        .Q(invalid_len_event),
        .R(ap_rst_n_0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 last_sect_carry
       (.CI(1'b0),
        .CO({last_sect_carry_n_2,last_sect_carry_n_3,last_sect_carry_n_4,last_sect_carry_n_5}),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_last_sect_carry_O_UNCONNECTED[3:0]),
        .S({fifo_rreq_n_7,fifo_rreq_n_8,fifo_rreq_n_9,fifo_rreq_n_10}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 last_sect_carry__0
       (.CI(last_sect_carry_n_2),
        .CO({NLW_last_sect_carry__0_CO_UNCONNECTED[3],last_sect,last_sect_carry__0_n_4,last_sect_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_last_sect_carry__0_O_UNCONNECTED[3:0]),
        .S({1'b0,fifo_rreq_n_11,fifo_rreq_n_12,fifo_rreq_n_13}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry
       (.CI(1'b0),
        .CO({p_0_out_carry_n_2,p_0_out_carry_n_3,p_0_out_carry_n_4,p_0_out_carry_n_5}),
        .CYINIT(usedw_reg[0]),
        .DI({usedw_reg[3:1],buff_rdata_n_18}),
        .O({p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .S({buff_rdata_n_4,buff_rdata_n_5,buff_rdata_n_6,buff_rdata_n_7}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry__0
       (.CI(p_0_out_carry_n_2),
        .CO({NLW_p_0_out_carry__0_CO_UNCONNECTED[3:2],p_0_out_carry__0_n_4,p_0_out_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,usedw_reg[5:4]}),
        .O({NLW_p_0_out_carry__0_O_UNCONNECTED[3],p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9}),
        .S({1'b0,buff_rdata_n_14,buff_rdata_n_15,buff_rdata_n_16}));
  FDRE rreq_handling_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rctl_n_25),
        .Q(rreq_handling_reg_n_2),
        .R(ap_rst_n_0));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_reg_slice__parameterized0 rs_rdata
       (.D(D[1]),
        .DATA_A_RREADY(DATA_A_RREADY),
        .\DATA_A_addr_read_reg_277_reg[31] (\DATA_A_addr_read_reg_277_reg[31] ),
        .\DATA_B_addr_read_reg_282_reg[31] (\DATA_B_addr_read_reg_282_reg[31] ),
        .DATA_C_AWREADY(DATA_C_AWREADY),
        .DATA_C_WREADY(DATA_C_WREADY),
        .E(E),
        .Q(Q[2:1]),
        .SR(SR),
        .WEBWE(WEBWE),
        .\ap_CS_fsm_reg[9] (\ap_CS_fsm_reg[9] ),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter0(ap_enable_reg_pp0_iter0),
        .ap_enable_reg_pp0_iter1_reg(ap_enable_reg_pp0_iter1_reg),
        .ap_enable_reg_pp0_iter1_reg_0(ap_enable_reg_pp0_iter1_reg_0),
        .ap_enable_reg_pp0_iter1_reg_1(ap_enable_reg_pp0_iter1_reg_1),
        .ap_enable_reg_pp0_iter2(ap_enable_reg_pp0_iter2),
        .ap_enable_reg_pp0_iter2_reg(ap_enable_reg_pp0_iter2_reg),
        .ap_enable_reg_pp0_iter3(ap_enable_reg_pp0_iter3),
        .ap_enable_reg_pp0_iter3_reg(ap_enable_reg_pp0_iter3_reg),
        .ap_enable_reg_pp0_iter4_reg(ap_enable_reg_pp0_iter4_reg),
        .ap_enable_reg_pp0_iter4_reg_0(ap_enable_reg_pp0_iter4_reg_0),
        .ap_reg_ioackin_DATA_C_WREADY_reg(ap_reg_ioackin_DATA_C_WREADY_reg),
        .ap_reg_ioackin_DATA_C_WREADY_reg_0(ap_reg_ioackin_DATA_C_WREADY_reg_0),
        .ap_reg_pp0_iter1_exitcond_reg_268(ap_reg_pp0_iter1_exitcond_reg_268),
        .ap_reg_pp0_iter2_exitcond_reg_268(ap_reg_pp0_iter2_exitcond_reg_268),
        .\ap_reg_pp0_iter2_exitcond_reg_268_reg[0] (\ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ),
        .ap_reg_pp0_iter3_exitcond_reg_268(ap_reg_pp0_iter3_exitcond_reg_268),
        .\ap_reg_pp0_iter3_exitcond_reg_268_reg[0] (\ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ),
        .ap_rst_n(ap_rst_n),
        .ap_rst_n_0(ap_rst_n_0),
        .\bus_equal_gen.data_buf_reg[31] ({\bus_equal_gen.data_buf_reg_n_2_[31] ,\bus_equal_gen.data_buf_reg_n_2_[30] ,\bus_equal_gen.data_buf_reg_n_2_[29] ,\bus_equal_gen.data_buf_reg_n_2_[28] ,\bus_equal_gen.data_buf_reg_n_2_[27] ,\bus_equal_gen.data_buf_reg_n_2_[26] ,\bus_equal_gen.data_buf_reg_n_2_[25] ,\bus_equal_gen.data_buf_reg_n_2_[24] ,\bus_equal_gen.data_buf_reg_n_2_[23] ,\bus_equal_gen.data_buf_reg_n_2_[22] ,\bus_equal_gen.data_buf_reg_n_2_[21] ,\bus_equal_gen.data_buf_reg_n_2_[20] ,\bus_equal_gen.data_buf_reg_n_2_[19] ,\bus_equal_gen.data_buf_reg_n_2_[18] ,\bus_equal_gen.data_buf_reg_n_2_[17] ,\bus_equal_gen.data_buf_reg_n_2_[16] ,\bus_equal_gen.data_buf_reg_n_2_[15] ,\bus_equal_gen.data_buf_reg_n_2_[14] ,\bus_equal_gen.data_buf_reg_n_2_[13] ,\bus_equal_gen.data_buf_reg_n_2_[12] ,\bus_equal_gen.data_buf_reg_n_2_[11] ,\bus_equal_gen.data_buf_reg_n_2_[10] ,\bus_equal_gen.data_buf_reg_n_2_[9] ,\bus_equal_gen.data_buf_reg_n_2_[8] ,\bus_equal_gen.data_buf_reg_n_2_[7] ,\bus_equal_gen.data_buf_reg_n_2_[6] ,\bus_equal_gen.data_buf_reg_n_2_[5] ,\bus_equal_gen.data_buf_reg_n_2_[4] ,\bus_equal_gen.data_buf_reg_n_2_[3] ,\bus_equal_gen.data_buf_reg_n_2_[2] ,\bus_equal_gen.data_buf_reg_n_2_[1] ,\bus_equal_gen.data_buf_reg_n_2_[0] }),
        .\bus_equal_gen.rdata_valid_t_reg (\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .exitcond_fu_220_p2(exitcond_fu_220_p2),
        .\exitcond_reg_268_reg[0] (\exitcond_reg_268_reg[0] ),
        .rdata_ack_t(rdata_ack_t),
        .rdata_valid(rdata_valid),
        .tmp_product(tmp_product),
        .\tmp_reg_287_reg[0] (\tmp_reg_287_reg[0] ));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_reg_slice rs_rreq
       (.D(D[0]),
        .DATA_B_ARREADY(DATA_B_ARREADY),
        .Q(Q[0]),
        .\a1_reg_246_reg[29] (\a1_reg_246_reg[29] ),
        .ap_clk(ap_clk),
        .ap_reg_ioackin_DATA_A_ARREADY(ap_reg_ioackin_DATA_A_ARREADY),
        .ap_reg_ioackin_DATA_B_ARREADY_reg(ap_reg_ioackin_DATA_B_ARREADY_reg),
        .ap_rst_n(ap_rst_n_0),
        .push(push),
        .\q_reg[29] (rs2f_rreq_data),
        .rs2f_rreq_ack(rs2f_rreq_ack),
        .s_ready_t_reg_0(s_ready_t_reg),
        .s_ready_t_reg_1(rs2f_rreq_valid));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[10]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[10] ),
        .O(sect_addr[10]));
  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[11]_i_2 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[11] ),
        .O(sect_addr[11]));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[12]_i_1 
       (.I0(p_0_in_0[0]),
        .I1(first_sect),
        .I2(sect_cnt_reg[0]),
        .O(sect_addr[12]));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[13]_i_1 
       (.I0(p_0_in_0[1]),
        .I1(first_sect),
        .I2(sect_cnt_reg[1]),
        .O(sect_addr[13]));
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[14]_i_1 
       (.I0(p_0_in_0[2]),
        .I1(first_sect),
        .I2(sect_cnt_reg[2]),
        .O(sect_addr[14]));
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[15]_i_1 
       (.I0(p_0_in_0[3]),
        .I1(first_sect),
        .I2(sect_cnt_reg[3]),
        .O(sect_addr[15]));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[16]_i_1 
       (.I0(p_0_in_0[4]),
        .I1(first_sect),
        .I2(sect_cnt_reg[4]),
        .O(sect_addr[16]));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[17]_i_1 
       (.I0(p_0_in_0[5]),
        .I1(first_sect),
        .I2(sect_cnt_reg[5]),
        .O(sect_addr[17]));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[18]_i_1 
       (.I0(p_0_in_0[6]),
        .I1(first_sect),
        .I2(sect_cnt_reg[6]),
        .O(sect_addr[18]));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[19]_i_1 
       (.I0(p_0_in_0[7]),
        .I1(first_sect),
        .I2(sect_cnt_reg[7]),
        .O(sect_addr[19]));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[20]_i_1 
       (.I0(p_0_in_0[8]),
        .I1(first_sect),
        .I2(sect_cnt_reg[8]),
        .O(sect_addr[20]));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[21]_i_1 
       (.I0(p_0_in_0[9]),
        .I1(first_sect),
        .I2(sect_cnt_reg[9]),
        .O(sect_addr[21]));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[22]_i_1 
       (.I0(p_0_in_0[10]),
        .I1(first_sect),
        .I2(sect_cnt_reg[10]),
        .O(sect_addr[22]));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[23]_i_1 
       (.I0(p_0_in_0[11]),
        .I1(first_sect),
        .I2(sect_cnt_reg[11]),
        .O(sect_addr[23]));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[24]_i_1 
       (.I0(p_0_in_0[12]),
        .I1(first_sect),
        .I2(sect_cnt_reg[12]),
        .O(sect_addr[24]));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[25]_i_1 
       (.I0(p_0_in_0[13]),
        .I1(first_sect),
        .I2(sect_cnt_reg[13]),
        .O(sect_addr[25]));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[26]_i_1 
       (.I0(p_0_in_0[14]),
        .I1(first_sect),
        .I2(sect_cnt_reg[14]),
        .O(sect_addr[26]));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[27]_i_1 
       (.I0(p_0_in_0[15]),
        .I1(first_sect),
        .I2(sect_cnt_reg[15]),
        .O(sect_addr[27]));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[28]_i_1 
       (.I0(p_0_in_0[16]),
        .I1(first_sect),
        .I2(sect_cnt_reg[16]),
        .O(sect_addr[28]));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[29]_i_1 
       (.I0(p_0_in_0[17]),
        .I1(first_sect),
        .I2(sect_cnt_reg[17]),
        .O(sect_addr[29]));
  (* SOFT_HLUTNM = "soft_lutpair120" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[2]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[2] ),
        .O(sect_addr[2]));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[30]_i_1 
       (.I0(p_0_in_0[18]),
        .I1(first_sect),
        .I2(sect_cnt_reg[18]),
        .O(sect_addr[30]));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[31]_i_1 
       (.I0(p_0_in_0[19]),
        .I1(first_sect),
        .I2(sect_cnt_reg[19]),
        .O(sect_addr[31]));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[3]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[3] ),
        .O(sect_addr[3]));
  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[4]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[4] ),
        .O(sect_addr[4]));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[5]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[5] ),
        .O(sect_addr[5]));
  (* SOFT_HLUTNM = "soft_lutpair119" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[6]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[6] ),
        .O(sect_addr[6]));
  (* SOFT_HLUTNM = "soft_lutpair120" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[7]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[7] ),
        .O(sect_addr[7]));
  (* SOFT_HLUTNM = "soft_lutpair119" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[8]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[8] ),
        .O(sect_addr[8]));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[9]_i_1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[9] ),
        .O(sect_addr[9]));
  FDRE \sect_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[10]),
        .Q(\sect_addr_buf_reg_n_2_[10] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[11]),
        .Q(\sect_addr_buf_reg_n_2_[11] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[12]),
        .Q(\sect_addr_buf_reg_n_2_[12] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[13]),
        .Q(\sect_addr_buf_reg_n_2_[13] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[14]),
        .Q(\sect_addr_buf_reg_n_2_[14] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[15]),
        .Q(\sect_addr_buf_reg_n_2_[15] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[16]),
        .Q(\sect_addr_buf_reg_n_2_[16] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[17]),
        .Q(\sect_addr_buf_reg_n_2_[17] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[18]),
        .Q(\sect_addr_buf_reg_n_2_[18] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[19]),
        .Q(\sect_addr_buf_reg_n_2_[19] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[20]),
        .Q(\sect_addr_buf_reg_n_2_[20] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[21]),
        .Q(\sect_addr_buf_reg_n_2_[21] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[22]),
        .Q(\sect_addr_buf_reg_n_2_[22] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[23]),
        .Q(\sect_addr_buf_reg_n_2_[23] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[24]),
        .Q(\sect_addr_buf_reg_n_2_[24] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[25]),
        .Q(\sect_addr_buf_reg_n_2_[25] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[26]),
        .Q(\sect_addr_buf_reg_n_2_[26] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[27]),
        .Q(\sect_addr_buf_reg_n_2_[27] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[28]),
        .Q(\sect_addr_buf_reg_n_2_[28] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[29]),
        .Q(\sect_addr_buf_reg_n_2_[29] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[2]),
        .Q(\sect_addr_buf_reg_n_2_[2] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[30]),
        .Q(\sect_addr_buf_reg_n_2_[30] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[31]),
        .Q(\sect_addr_buf_reg_n_2_[31] ),
        .R(ap_rst_n_0));
  FDRE \sect_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[3]),
        .Q(\sect_addr_buf_reg_n_2_[3] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[4]),
        .Q(\sect_addr_buf_reg_n_2_[4] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[5]),
        .Q(\sect_addr_buf_reg_n_2_[5] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[6]),
        .Q(\sect_addr_buf_reg_n_2_[6] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[7]),
        .Q(\sect_addr_buf_reg_n_2_[7] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[8]),
        .Q(\sect_addr_buf_reg_n_2_[8] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[9]),
        .Q(\sect_addr_buf_reg_n_2_[9] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_cnt_reg[0] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_49),
        .Q(sect_cnt_reg[0]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[10] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_55),
        .Q(sect_cnt_reg[10]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[11] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_54),
        .Q(sect_cnt_reg[11]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[12] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_61),
        .Q(sect_cnt_reg[12]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[13] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_60),
        .Q(sect_cnt_reg[13]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[14] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_59),
        .Q(sect_cnt_reg[14]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[15] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_58),
        .Q(sect_cnt_reg[15]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[16] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_65),
        .Q(sect_cnt_reg[16]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[17] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_64),
        .Q(sect_cnt_reg[17]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[18] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_63),
        .Q(sect_cnt_reg[18]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[19] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_62),
        .Q(sect_cnt_reg[19]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[1] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_48),
        .Q(sect_cnt_reg[1]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[2] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_47),
        .Q(sect_cnt_reg[2]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[3] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_46),
        .Q(sect_cnt_reg[3]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[4] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_53),
        .Q(sect_cnt_reg[4]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[5] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_52),
        .Q(sect_cnt_reg[5]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[6] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_51),
        .Q(sect_cnt_reg[6]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[7] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_50),
        .Q(sect_cnt_reg[7]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[8] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_57),
        .Q(sect_cnt_reg[8]),
        .R(ap_rst_n_0));
  FDRE \sect_cnt_reg[9] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_56),
        .Q(sect_cnt_reg[9]),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[0] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_21),
        .Q(\sect_len_buf_reg_n_2_[0] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[1] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_20),
        .Q(\sect_len_buf_reg_n_2_[1] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_19),
        .Q(\sect_len_buf_reg_n_2_[2] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_18),
        .Q(\sect_len_buf_reg_n_2_[3] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_17),
        .Q(\sect_len_buf_reg_n_2_[4] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_16),
        .Q(\sect_len_buf_reg_n_2_[5] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_15),
        .Q(\sect_len_buf_reg_n_2_[6] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_14),
        .Q(\sect_len_buf_reg_n_2_[7] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_13),
        .Q(\sect_len_buf_reg_n_2_[8] ),
        .R(ap_rst_n_0));
  FDRE \sect_len_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_12),
        .Q(\sect_len_buf_reg_n_2_[9] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[10] ),
        .Q(\start_addr_buf_reg_n_2_[10] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[11] ),
        .Q(\start_addr_buf_reg_n_2_[11] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[0]),
        .Q(p_0_in_0[0]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[1]),
        .Q(p_0_in_0[1]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[2]),
        .Q(p_0_in_0[2]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[3]),
        .Q(p_0_in_0[3]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[4]),
        .Q(p_0_in_0[4]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[5]),
        .Q(p_0_in_0[5]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[6]),
        .Q(p_0_in_0[6]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[7]),
        .Q(p_0_in_0[7]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[8]),
        .Q(p_0_in_0[8]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[9]),
        .Q(p_0_in_0[9]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[10]),
        .Q(p_0_in_0[10]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[11]),
        .Q(p_0_in_0[11]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[12]),
        .Q(p_0_in_0[12]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[13]),
        .Q(p_0_in_0[13]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[14]),
        .Q(p_0_in_0[14]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[15]),
        .Q(p_0_in_0[15]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[16]),
        .Q(p_0_in_0[16]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[17]),
        .Q(p_0_in_0[17]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[2] ),
        .Q(\start_addr_buf_reg_n_2_[2] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[18]),
        .Q(p_0_in_0[18]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[19]),
        .Q(p_0_in_0[19]),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[3] ),
        .Q(\start_addr_buf_reg_n_2_[3] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[4] ),
        .Q(\start_addr_buf_reg_n_2_[4] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[5] ),
        .Q(\start_addr_buf_reg_n_2_[5] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[6] ),
        .Q(\start_addr_buf_reg_n_2_[6] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[7] ),
        .Q(\start_addr_buf_reg_n_2_[7] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[8] ),
        .Q(\start_addr_buf_reg_n_2_[8] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[9] ),
        .Q(\start_addr_buf_reg_n_2_[9] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[10] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[8]),
        .Q(\start_addr_reg_n_2_[10] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[11] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[9]),
        .Q(\start_addr_reg_n_2_[11] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[12] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[10]),
        .Q(data[0]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[13] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[11]),
        .Q(data[1]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[14] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[12]),
        .Q(data[2]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[15] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[13]),
        .Q(data[3]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[16] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[14]),
        .Q(data[4]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[17] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[15]),
        .Q(data[5]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[18] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[16]),
        .Q(data[6]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[19] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[17]),
        .Q(data[7]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[20] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[18]),
        .Q(data[8]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[21] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[19]),
        .Q(data[9]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[22] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[20]),
        .Q(data[10]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[23] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[21]),
        .Q(data[11]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[24] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[22]),
        .Q(data[12]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[25] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[23]),
        .Q(data[13]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[26] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[24]),
        .Q(data[14]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[27] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[25]),
        .Q(data[15]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[28] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[26]),
        .Q(data[16]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[29] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[27]),
        .Q(data[17]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[2] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[0]),
        .Q(\start_addr_reg_n_2_[2] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[30] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[28]),
        .Q(data[18]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[31] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[29]),
        .Q(data[19]),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[3] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[1]),
        .Q(\start_addr_reg_n_2_[3] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[4] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[2]),
        .Q(\start_addr_reg_n_2_[4] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[5] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[3]),
        .Q(\start_addr_reg_n_2_[5] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[6] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[4]),
        .Q(\start_addr_reg_n_2_[6] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[7] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[5]),
        .Q(\start_addr_reg_n_2_[7] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[8] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[6]),
        .Q(\start_addr_reg_n_2_[8] ),
        .R(ap_rst_n_0));
  FDRE \start_addr_reg[9] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[7]),
        .Q(\start_addr_reg_n_2_[9] ),
        .R(ap_rst_n_0));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi_reg_slice" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_reg_slice
   (s_ready_t_reg_0,
    D,
    s_ready_t_reg_1,
    push,
    \q_reg[29] ,
    ap_rst_n,
    ap_clk,
    ap_reg_ioackin_DATA_A_ARREADY,
    DATA_B_ARREADY,
    ap_reg_ioackin_DATA_B_ARREADY_reg,
    Q,
    rs2f_rreq_ack,
    \a1_reg_246_reg[29] );
  output s_ready_t_reg_0;
  output [0:0]D;
  output [0:0]s_ready_t_reg_1;
  output push;
  output [29:0]\q_reg[29] ;
  input [0:0]ap_rst_n;
  input ap_clk;
  input ap_reg_ioackin_DATA_A_ARREADY;
  input DATA_B_ARREADY;
  input ap_reg_ioackin_DATA_B_ARREADY_reg;
  input [0:0]Q;
  input rs2f_rreq_ack;
  input [29:0]\a1_reg_246_reg[29] ;

  wire [0:0]D;
  wire DATA_B_ARREADY;
  wire [0:0]Q;
  wire [29:0]\a1_reg_246_reg[29] ;
  wire ap_clk;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg;
  wire [0:0]ap_rst_n;
  wire \data_p1[0]_i_1_n_2 ;
  wire \data_p1[10]_i_1_n_2 ;
  wire \data_p1[11]_i_1_n_2 ;
  wire \data_p1[12]_i_1_n_2 ;
  wire \data_p1[13]_i_1_n_2 ;
  wire \data_p1[14]_i_1_n_2 ;
  wire \data_p1[15]_i_1_n_2 ;
  wire \data_p1[16]_i_1_n_2 ;
  wire \data_p1[17]_i_1_n_2 ;
  wire \data_p1[18]_i_1_n_2 ;
  wire \data_p1[19]_i_1_n_2 ;
  wire \data_p1[1]_i_1_n_2 ;
  wire \data_p1[20]_i_1_n_2 ;
  wire \data_p1[21]_i_1_n_2 ;
  wire \data_p1[22]_i_1_n_2 ;
  wire \data_p1[23]_i_1_n_2 ;
  wire \data_p1[24]_i_1_n_2 ;
  wire \data_p1[25]_i_1_n_2 ;
  wire \data_p1[26]_i_1_n_2 ;
  wire \data_p1[27]_i_1_n_2 ;
  wire \data_p1[28]_i_1_n_2 ;
  wire \data_p1[29]_i_2_n_2 ;
  wire \data_p1[2]_i_1_n_2 ;
  wire \data_p1[3]_i_1_n_2 ;
  wire \data_p1[4]_i_1_n_2 ;
  wire \data_p1[5]_i_1_n_2 ;
  wire \data_p1[6]_i_1_n_2 ;
  wire \data_p1[7]_i_1_n_2 ;
  wire \data_p1[8]_i_1_n_2 ;
  wire \data_p1[9]_i_1_n_2 ;
  wire [29:0]data_p2;
  wire load_p1;
  wire load_p2;
  wire push;
  wire [29:0]\q_reg[29] ;
  wire rs2f_rreq_ack;
  wire s_ready_t_i_1_n_2;
  wire s_ready_t_reg_0;
  wire [0:0]s_ready_t_reg_1;
  wire [1:1]state;
  wire \state[0]_i_1__0_n_2 ;
  wire \state[1]_i_1__0_n_2 ;

  LUT5 #(
    .INIT(32'hEEE00000)) 
    \ap_CS_fsm[2]_i_1 
       (.I0(s_ready_t_reg_0),
        .I1(ap_reg_ioackin_DATA_A_ARREADY),
        .I2(DATA_B_ARREADY),
        .I3(ap_reg_ioackin_DATA_B_ARREADY_reg),
        .I4(Q),
        .O(D));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[0]_i_1 
       (.I0(\a1_reg_246_reg[29] [0]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[0]),
        .O(\data_p1[0]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[10]_i_1 
       (.I0(\a1_reg_246_reg[29] [10]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[10]),
        .O(\data_p1[10]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[11]_i_1 
       (.I0(\a1_reg_246_reg[29] [11]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[11]),
        .O(\data_p1[11]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[12]_i_1 
       (.I0(\a1_reg_246_reg[29] [12]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[12]),
        .O(\data_p1[12]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[13]_i_1 
       (.I0(\a1_reg_246_reg[29] [13]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[13]),
        .O(\data_p1[13]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[14]_i_1 
       (.I0(\a1_reg_246_reg[29] [14]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[14]),
        .O(\data_p1[14]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[15]_i_1 
       (.I0(\a1_reg_246_reg[29] [15]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[15]),
        .O(\data_p1[15]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[16]_i_1 
       (.I0(\a1_reg_246_reg[29] [16]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[16]),
        .O(\data_p1[16]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[17]_i_1 
       (.I0(\a1_reg_246_reg[29] [17]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[17]),
        .O(\data_p1[17]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[18]_i_1 
       (.I0(\a1_reg_246_reg[29] [18]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[18]),
        .O(\data_p1[18]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[19]_i_1 
       (.I0(\a1_reg_246_reg[29] [19]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[19]),
        .O(\data_p1[19]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[1]_i_1 
       (.I0(\a1_reg_246_reg[29] [1]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[1]),
        .O(\data_p1[1]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[20]_i_1 
       (.I0(\a1_reg_246_reg[29] [20]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[20]),
        .O(\data_p1[20]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[21]_i_1 
       (.I0(\a1_reg_246_reg[29] [21]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[21]),
        .O(\data_p1[21]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[22]_i_1 
       (.I0(\a1_reg_246_reg[29] [22]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[22]),
        .O(\data_p1[22]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[23]_i_1 
       (.I0(\a1_reg_246_reg[29] [23]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[23]),
        .O(\data_p1[23]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[24]_i_1 
       (.I0(\a1_reg_246_reg[29] [24]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[24]),
        .O(\data_p1[24]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[25]_i_1 
       (.I0(\a1_reg_246_reg[29] [25]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[25]),
        .O(\data_p1[25]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[26]_i_1 
       (.I0(\a1_reg_246_reg[29] [26]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[26]),
        .O(\data_p1[26]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[27]_i_1 
       (.I0(\a1_reg_246_reg[29] [27]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[27]),
        .O(\data_p1[27]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[28]_i_1 
       (.I0(\a1_reg_246_reg[29] [28]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[28]),
        .O(\data_p1[28]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'h00D08888)) 
    \data_p1[29]_i_1 
       (.I0(s_ready_t_reg_1),
        .I1(rs2f_rreq_ack),
        .I2(Q),
        .I3(ap_reg_ioackin_DATA_A_ARREADY),
        .I4(state),
        .O(load_p1));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[29]_i_2 
       (.I0(\a1_reg_246_reg[29] [29]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[29]),
        .O(\data_p1[29]_i_2_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[2]_i_1 
       (.I0(\a1_reg_246_reg[29] [2]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[2]),
        .O(\data_p1[2]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[3]_i_1 
       (.I0(\a1_reg_246_reg[29] [3]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[3]),
        .O(\data_p1[3]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[4]_i_1 
       (.I0(\a1_reg_246_reg[29] [4]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[4]),
        .O(\data_p1[4]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[5]_i_1 
       (.I0(\a1_reg_246_reg[29] [5]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[5]),
        .O(\data_p1[5]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[6]_i_1 
       (.I0(\a1_reg_246_reg[29] [6]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[6]),
        .O(\data_p1[6]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[7]_i_1 
       (.I0(\a1_reg_246_reg[29] [7]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[7]),
        .O(\data_p1[7]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[8]_i_1 
       (.I0(\a1_reg_246_reg[29] [8]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[8]),
        .O(\data_p1[8]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[9]_i_1 
       (.I0(\a1_reg_246_reg[29] [9]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[9]),
        .O(\data_p1[9]_i_1_n_2 ));
  FDRE \data_p1_reg[0] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[0]_i_1_n_2 ),
        .Q(\q_reg[29] [0]),
        .R(1'b0));
  FDRE \data_p1_reg[10] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[10]_i_1_n_2 ),
        .Q(\q_reg[29] [10]),
        .R(1'b0));
  FDRE \data_p1_reg[11] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[11]_i_1_n_2 ),
        .Q(\q_reg[29] [11]),
        .R(1'b0));
  FDRE \data_p1_reg[12] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[12]_i_1_n_2 ),
        .Q(\q_reg[29] [12]),
        .R(1'b0));
  FDRE \data_p1_reg[13] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[13]_i_1_n_2 ),
        .Q(\q_reg[29] [13]),
        .R(1'b0));
  FDRE \data_p1_reg[14] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[14]_i_1_n_2 ),
        .Q(\q_reg[29] [14]),
        .R(1'b0));
  FDRE \data_p1_reg[15] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[15]_i_1_n_2 ),
        .Q(\q_reg[29] [15]),
        .R(1'b0));
  FDRE \data_p1_reg[16] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[16]_i_1_n_2 ),
        .Q(\q_reg[29] [16]),
        .R(1'b0));
  FDRE \data_p1_reg[17] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[17]_i_1_n_2 ),
        .Q(\q_reg[29] [17]),
        .R(1'b0));
  FDRE \data_p1_reg[18] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[18]_i_1_n_2 ),
        .Q(\q_reg[29] [18]),
        .R(1'b0));
  FDRE \data_p1_reg[19] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[19]_i_1_n_2 ),
        .Q(\q_reg[29] [19]),
        .R(1'b0));
  FDRE \data_p1_reg[1] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[1]_i_1_n_2 ),
        .Q(\q_reg[29] [1]),
        .R(1'b0));
  FDRE \data_p1_reg[20] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[20]_i_1_n_2 ),
        .Q(\q_reg[29] [20]),
        .R(1'b0));
  FDRE \data_p1_reg[21] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[21]_i_1_n_2 ),
        .Q(\q_reg[29] [21]),
        .R(1'b0));
  FDRE \data_p1_reg[22] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[22]_i_1_n_2 ),
        .Q(\q_reg[29] [22]),
        .R(1'b0));
  FDRE \data_p1_reg[23] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[23]_i_1_n_2 ),
        .Q(\q_reg[29] [23]),
        .R(1'b0));
  FDRE \data_p1_reg[24] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[24]_i_1_n_2 ),
        .Q(\q_reg[29] [24]),
        .R(1'b0));
  FDRE \data_p1_reg[25] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[25]_i_1_n_2 ),
        .Q(\q_reg[29] [25]),
        .R(1'b0));
  FDRE \data_p1_reg[26] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[26]_i_1_n_2 ),
        .Q(\q_reg[29] [26]),
        .R(1'b0));
  FDRE \data_p1_reg[27] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[27]_i_1_n_2 ),
        .Q(\q_reg[29] [27]),
        .R(1'b0));
  FDRE \data_p1_reg[28] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[28]_i_1_n_2 ),
        .Q(\q_reg[29] [28]),
        .R(1'b0));
  FDRE \data_p1_reg[29] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[29]_i_2_n_2 ),
        .Q(\q_reg[29] [29]),
        .R(1'b0));
  FDRE \data_p1_reg[2] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[2]_i_1_n_2 ),
        .Q(\q_reg[29] [2]),
        .R(1'b0));
  FDRE \data_p1_reg[3] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[3]_i_1_n_2 ),
        .Q(\q_reg[29] [3]),
        .R(1'b0));
  FDRE \data_p1_reg[4] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[4]_i_1_n_2 ),
        .Q(\q_reg[29] [4]),
        .R(1'b0));
  FDRE \data_p1_reg[5] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[5]_i_1_n_2 ),
        .Q(\q_reg[29] [5]),
        .R(1'b0));
  FDRE \data_p1_reg[6] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[6]_i_1_n_2 ),
        .Q(\q_reg[29] [6]),
        .R(1'b0));
  FDRE \data_p1_reg[7] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[7]_i_1_n_2 ),
        .Q(\q_reg[29] [7]),
        .R(1'b0));
  FDRE \data_p1_reg[8] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[8]_i_1_n_2 ),
        .Q(\q_reg[29] [8]),
        .R(1'b0));
  FDRE \data_p1_reg[9] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[9]_i_1_n_2 ),
        .Q(\q_reg[29] [9]),
        .R(1'b0));
  LUT3 #(
    .INIT(8'h20)) 
    \data_p2[29]_i_1 
       (.I0(s_ready_t_reg_0),
        .I1(ap_reg_ioackin_DATA_A_ARREADY),
        .I2(Q),
        .O(load_p2));
  FDRE \data_p2_reg[0] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [0]),
        .Q(data_p2[0]),
        .R(1'b0));
  FDRE \data_p2_reg[10] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [10]),
        .Q(data_p2[10]),
        .R(1'b0));
  FDRE \data_p2_reg[11] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [11]),
        .Q(data_p2[11]),
        .R(1'b0));
  FDRE \data_p2_reg[12] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [12]),
        .Q(data_p2[12]),
        .R(1'b0));
  FDRE \data_p2_reg[13] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [13]),
        .Q(data_p2[13]),
        .R(1'b0));
  FDRE \data_p2_reg[14] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [14]),
        .Q(data_p2[14]),
        .R(1'b0));
  FDRE \data_p2_reg[15] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [15]),
        .Q(data_p2[15]),
        .R(1'b0));
  FDRE \data_p2_reg[16] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [16]),
        .Q(data_p2[16]),
        .R(1'b0));
  FDRE \data_p2_reg[17] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [17]),
        .Q(data_p2[17]),
        .R(1'b0));
  FDRE \data_p2_reg[18] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [18]),
        .Q(data_p2[18]),
        .R(1'b0));
  FDRE \data_p2_reg[19] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [19]),
        .Q(data_p2[19]),
        .R(1'b0));
  FDRE \data_p2_reg[1] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [1]),
        .Q(data_p2[1]),
        .R(1'b0));
  FDRE \data_p2_reg[20] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [20]),
        .Q(data_p2[20]),
        .R(1'b0));
  FDRE \data_p2_reg[21] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [21]),
        .Q(data_p2[21]),
        .R(1'b0));
  FDRE \data_p2_reg[22] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [22]),
        .Q(data_p2[22]),
        .R(1'b0));
  FDRE \data_p2_reg[23] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [23]),
        .Q(data_p2[23]),
        .R(1'b0));
  FDRE \data_p2_reg[24] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [24]),
        .Q(data_p2[24]),
        .R(1'b0));
  FDRE \data_p2_reg[25] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [25]),
        .Q(data_p2[25]),
        .R(1'b0));
  FDRE \data_p2_reg[26] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [26]),
        .Q(data_p2[26]),
        .R(1'b0));
  FDRE \data_p2_reg[27] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [27]),
        .Q(data_p2[27]),
        .R(1'b0));
  FDRE \data_p2_reg[28] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [28]),
        .Q(data_p2[28]),
        .R(1'b0));
  FDRE \data_p2_reg[29] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [29]),
        .Q(data_p2[29]),
        .R(1'b0));
  FDRE \data_p2_reg[2] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [2]),
        .Q(data_p2[2]),
        .R(1'b0));
  FDRE \data_p2_reg[3] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [3]),
        .Q(data_p2[3]),
        .R(1'b0));
  FDRE \data_p2_reg[4] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [4]),
        .Q(data_p2[4]),
        .R(1'b0));
  FDRE \data_p2_reg[5] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [5]),
        .Q(data_p2[5]),
        .R(1'b0));
  FDRE \data_p2_reg[6] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [6]),
        .Q(data_p2[6]),
        .R(1'b0));
  FDRE \data_p2_reg[7] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [7]),
        .Q(data_p2[7]),
        .R(1'b0));
  FDRE \data_p2_reg[8] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [8]),
        .Q(data_p2[8]),
        .R(1'b0));
  FDRE \data_p2_reg[9] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\a1_reg_246_reg[29] [9]),
        .Q(data_p2[9]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \mem_reg[4][0]_srl5_i_1 
       (.I0(s_ready_t_reg_1),
        .I1(rs2f_rreq_ack),
        .O(push));
  LUT6 #(
    .INIT(64'hFFDFFFFF0F00F0F0)) 
    s_ready_t_i_1
       (.I0(Q),
        .I1(ap_reg_ioackin_DATA_A_ARREADY),
        .I2(state),
        .I3(rs2f_rreq_ack),
        .I4(s_ready_t_reg_1),
        .I5(s_ready_t_reg_0),
        .O(s_ready_t_i_1_n_2));
  FDRE s_ready_t_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(s_ready_t_i_1_n_2),
        .Q(s_ready_t_reg_0),
        .R(ap_rst_n));
  LUT6 #(
    .INIT(64'h0CCCEECC0CCC0CCC)) 
    \state[0]_i_1__0 
       (.I0(s_ready_t_reg_0),
        .I1(s_ready_t_reg_1),
        .I2(rs2f_rreq_ack),
        .I3(state),
        .I4(ap_reg_ioackin_DATA_A_ARREADY),
        .I5(Q),
        .O(\state[0]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT5 #(
    .INIT(32'hFFD0FFFF)) 
    \state[1]_i_1__0 
       (.I0(Q),
        .I1(ap_reg_ioackin_DATA_A_ARREADY),
        .I2(state),
        .I3(rs2f_rreq_ack),
        .I4(s_ready_t_reg_1),
        .O(\state[1]_i_1__0_n_2 ));
  FDRE \state_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[0]_i_1__0_n_2 ),
        .Q(s_ready_t_reg_1),
        .R(ap_rst_n));
  FDSE \state_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[1]_i_1__0_n_2 ),
        .Q(state),
        .S(ap_rst_n));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_A_m_axi_reg_slice" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_A_m_axi_reg_slice__parameterized0
   (rdata_ack_t,
    D,
    \ap_CS_fsm_reg[9] ,
    ap_enable_reg_pp0_iter1_reg,
    DATA_A_RREADY,
    tmp_product,
    E,
    WEBWE,
    ap_enable_reg_pp0_iter1_reg_0,
    ap_enable_reg_pp0_iter3_reg,
    ap_enable_reg_pp0_iter2_reg,
    \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ,
    \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ,
    \tmp_reg_287_reg[0] ,
    \DATA_B_addr_read_reg_282_reg[31] ,
    ap_reg_ioackin_DATA_C_WREADY_reg,
    SR,
    \DATA_A_addr_read_reg_277_reg[31] ,
    ap_rst_n_0,
    ap_clk,
    Q,
    ap_enable_reg_pp0_iter4_reg,
    ap_enable_reg_pp0_iter3,
    ap_enable_reg_pp0_iter0,
    ap_enable_reg_pp0_iter1_reg_1,
    exitcond_fu_220_p2,
    \exitcond_reg_268_reg[0] ,
    ap_reg_ioackin_DATA_C_WREADY_reg_0,
    DATA_C_WREADY,
    ap_reg_pp0_iter3_exitcond_reg_268,
    ap_enable_reg_pp0_iter4_reg_0,
    rdata_valid,
    ap_rst_n,
    ap_enable_reg_pp0_iter2,
    ap_reg_pp0_iter2_exitcond_reg_268,
    ap_reg_pp0_iter1_exitcond_reg_268,
    DATA_C_AWREADY,
    \bus_equal_gen.rdata_valid_t_reg ,
    \bus_equal_gen.data_buf_reg[31] );
  output rdata_ack_t;
  output [0:0]D;
  output \ap_CS_fsm_reg[9] ;
  output ap_enable_reg_pp0_iter1_reg;
  output DATA_A_RREADY;
  output tmp_product;
  output [0:0]E;
  output [0:0]WEBWE;
  output ap_enable_reg_pp0_iter1_reg_0;
  output ap_enable_reg_pp0_iter3_reg;
  output ap_enable_reg_pp0_iter2_reg;
  output \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ;
  output \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ;
  output [0:0]\tmp_reg_287_reg[0] ;
  output [0:0]\DATA_B_addr_read_reg_282_reg[31] ;
  output ap_reg_ioackin_DATA_C_WREADY_reg;
  output [0:0]SR;
  output [31:0]\DATA_A_addr_read_reg_277_reg[31] ;
  input [0:0]ap_rst_n_0;
  input ap_clk;
  input [1:0]Q;
  input ap_enable_reg_pp0_iter4_reg;
  input ap_enable_reg_pp0_iter3;
  input ap_enable_reg_pp0_iter0;
  input ap_enable_reg_pp0_iter1_reg_1;
  input exitcond_fu_220_p2;
  input \exitcond_reg_268_reg[0] ;
  input ap_reg_ioackin_DATA_C_WREADY_reg_0;
  input DATA_C_WREADY;
  input ap_reg_pp0_iter3_exitcond_reg_268;
  input ap_enable_reg_pp0_iter4_reg_0;
  input rdata_valid;
  input ap_rst_n;
  input ap_enable_reg_pp0_iter2;
  input ap_reg_pp0_iter2_exitcond_reg_268;
  input ap_reg_pp0_iter1_exitcond_reg_268;
  input DATA_C_AWREADY;
  input \bus_equal_gen.rdata_valid_t_reg ;
  input [31:0]\bus_equal_gen.data_buf_reg[31] ;

  wire [0:0]D;
  wire DATA_A_RREADY;
  wire DATA_A_RVALID;
  wire [31:0]\DATA_A_addr_read_reg_277_reg[31] ;
  wire [0:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire DATA_C_AWREADY;
  wire DATA_C_WREADY;
  wire [0:0]E;
  wire [1:0]Q;
  wire [0:0]SR;
  wire [0:0]WEBWE;
  wire \ap_CS_fsm_reg[9] ;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter1_reg;
  wire ap_enable_reg_pp0_iter1_reg_0;
  wire ap_enable_reg_pp0_iter1_reg_1;
  wire ap_enable_reg_pp0_iter2;
  wire ap_enable_reg_pp0_iter2_reg;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter3_reg;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_enable_reg_pp0_iter4_reg_0;
  wire ap_reg_ioackin_DATA_C_WREADY_i_2_n_2;
  wire ap_reg_ioackin_DATA_C_WREADY_reg;
  wire ap_reg_ioackin_DATA_C_WREADY_reg_0;
  wire ap_reg_pp0_iter1_exitcond_reg_268;
  wire ap_reg_pp0_iter2_exitcond_reg_268;
  wire \ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire \ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ;
  wire ap_rst_n;
  wire [0:0]ap_rst_n_0;
  wire [31:0]\bus_equal_gen.data_buf_reg[31] ;
  wire \bus_equal_gen.rdata_valid_t_reg ;
  wire \data_p1[0]_i_1__0_n_2 ;
  wire \data_p1[10]_i_1__0_n_2 ;
  wire \data_p1[11]_i_1__0_n_2 ;
  wire \data_p1[12]_i_1__0_n_2 ;
  wire \data_p1[13]_i_1__0_n_2 ;
  wire \data_p1[14]_i_1__0_n_2 ;
  wire \data_p1[15]_i_1__0_n_2 ;
  wire \data_p1[16]_i_1__0_n_2 ;
  wire \data_p1[17]_i_1__0_n_2 ;
  wire \data_p1[18]_i_1__0_n_2 ;
  wire \data_p1[19]_i_1__0_n_2 ;
  wire \data_p1[1]_i_1__0_n_2 ;
  wire \data_p1[20]_i_1__0_n_2 ;
  wire \data_p1[21]_i_1__0_n_2 ;
  wire \data_p1[22]_i_1__0_n_2 ;
  wire \data_p1[23]_i_1__0_n_2 ;
  wire \data_p1[24]_i_1__0_n_2 ;
  wire \data_p1[25]_i_1__0_n_2 ;
  wire \data_p1[26]_i_1__0_n_2 ;
  wire \data_p1[27]_i_1__0_n_2 ;
  wire \data_p1[28]_i_1__0_n_2 ;
  wire \data_p1[29]_i_1__0_n_2 ;
  wire \data_p1[2]_i_1__0_n_2 ;
  wire \data_p1[30]_i_1_n_2 ;
  wire \data_p1[31]_i_2_n_2 ;
  wire \data_p1[3]_i_1__0_n_2 ;
  wire \data_p1[4]_i_1__0_n_2 ;
  wire \data_p1[5]_i_1__0_n_2 ;
  wire \data_p1[6]_i_1__0_n_2 ;
  wire \data_p1[7]_i_1__0_n_2 ;
  wire \data_p1[8]_i_1__0_n_2 ;
  wire \data_p1[9]_i_1__0_n_2 ;
  wire \data_p2_reg_n_2_[0] ;
  wire \data_p2_reg_n_2_[10] ;
  wire \data_p2_reg_n_2_[11] ;
  wire \data_p2_reg_n_2_[12] ;
  wire \data_p2_reg_n_2_[13] ;
  wire \data_p2_reg_n_2_[14] ;
  wire \data_p2_reg_n_2_[15] ;
  wire \data_p2_reg_n_2_[16] ;
  wire \data_p2_reg_n_2_[17] ;
  wire \data_p2_reg_n_2_[18] ;
  wire \data_p2_reg_n_2_[19] ;
  wire \data_p2_reg_n_2_[1] ;
  wire \data_p2_reg_n_2_[20] ;
  wire \data_p2_reg_n_2_[21] ;
  wire \data_p2_reg_n_2_[22] ;
  wire \data_p2_reg_n_2_[23] ;
  wire \data_p2_reg_n_2_[24] ;
  wire \data_p2_reg_n_2_[25] ;
  wire \data_p2_reg_n_2_[26] ;
  wire \data_p2_reg_n_2_[27] ;
  wire \data_p2_reg_n_2_[28] ;
  wire \data_p2_reg_n_2_[29] ;
  wire \data_p2_reg_n_2_[2] ;
  wire \data_p2_reg_n_2_[30] ;
  wire \data_p2_reg_n_2_[31] ;
  wire \data_p2_reg_n_2_[3] ;
  wire \data_p2_reg_n_2_[4] ;
  wire \data_p2_reg_n_2_[5] ;
  wire \data_p2_reg_n_2_[6] ;
  wire \data_p2_reg_n_2_[7] ;
  wire \data_p2_reg_n_2_[8] ;
  wire \data_p2_reg_n_2_[9] ;
  wire exitcond_fu_220_p2;
  wire \exitcond_reg_268_reg[0] ;
  wire load_p1;
  wire load_p2;
  wire rdata_ack_t;
  wire rdata_valid;
  wire s_ready_t_i_1__0_n_2;
  wire [1:1]state;
  wire \state[0]_i_1_n_2 ;
  wire \state[0]_i_2_n_2 ;
  wire \state[1]_i_1_n_2 ;
  wire tmp_product;
  wire [0:0]\tmp_reg_287_reg[0] ;

  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \DATA_B_addr_read_reg_282[31]_i_1 
       (.I0(tmp_product),
        .I1(\exitcond_reg_268_reg[0] ),
        .O(\DATA_B_addr_read_reg_282_reg[31] ));
  LUT2 #(
    .INIT(4'h8)) 
    \ap_CS_fsm[9]_i_1 
       (.I0(Q[1]),
        .I1(\ap_CS_fsm_reg[9] ),
        .O(D));
  LUT6 #(
    .INIT(64'h02020F0202020202)) 
    \ap_CS_fsm[9]_i_2 
       (.I0(ap_enable_reg_pp0_iter4_reg),
        .I1(ap_enable_reg_pp0_iter3),
        .I2(ap_enable_reg_pp0_iter1_reg),
        .I3(ap_enable_reg_pp0_iter0),
        .I4(ap_enable_reg_pp0_iter1_reg_1),
        .I5(exitcond_fu_220_p2),
        .O(\ap_CS_fsm_reg[9] ));
  LUT5 #(
    .INIT(32'hC0C000A0)) 
    ap_enable_reg_pp0_iter1_i_1
       (.I0(ap_enable_reg_pp0_iter0),
        .I1(ap_enable_reg_pp0_iter1_reg_1),
        .I2(ap_rst_n),
        .I3(exitcond_fu_220_p2),
        .I4(ap_enable_reg_pp0_iter1_reg),
        .O(ap_enable_reg_pp0_iter1_reg_0));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT3 #(
    .INIT(8'hE2)) 
    ap_enable_reg_pp0_iter2_i_1
       (.I0(ap_enable_reg_pp0_iter1_reg_1),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .I2(ap_enable_reg_pp0_iter2),
        .O(ap_enable_reg_pp0_iter2_reg));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT3 #(
    .INIT(8'hE2)) 
    ap_enable_reg_pp0_iter3_i_1
       (.I0(ap_enable_reg_pp0_iter2),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .I2(ap_enable_reg_pp0_iter3),
        .O(ap_enable_reg_pp0_iter3_reg));
  LUT5 #(
    .INIT(32'hAA008A00)) 
    ap_reg_ioackin_DATA_C_WREADY_i_1
       (.I0(ap_rst_n),
        .I1(ap_reg_pp0_iter3_exitcond_reg_268),
        .I2(ap_enable_reg_pp0_iter4_reg),
        .I3(ap_reg_ioackin_DATA_C_WREADY_reg_0),
        .I4(ap_reg_ioackin_DATA_C_WREADY_i_2_n_2),
        .O(ap_reg_ioackin_DATA_C_WREADY_reg));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT4 #(
    .INIT(16'h0070)) 
    ap_reg_ioackin_DATA_C_WREADY_i_2
       (.I0(DATA_A_RVALID),
        .I1(rdata_valid),
        .I2(ap_enable_reg_pp0_iter1_reg_1),
        .I3(\exitcond_reg_268_reg[0] ),
        .O(ap_reg_ioackin_DATA_C_WREADY_i_2_n_2));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT3 #(
    .INIT(8'hE2)) 
    \ap_reg_pp0_iter2_exitcond_reg_268[0]_i_1 
       (.I0(ap_reg_pp0_iter1_exitcond_reg_268),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .I2(ap_reg_pp0_iter2_exitcond_reg_268),
        .O(\ap_reg_pp0_iter2_exitcond_reg_268_reg[0] ));
  LUT3 #(
    .INIT(8'hE2)) 
    \ap_reg_pp0_iter3_exitcond_reg_268[0]_i_1 
       (.I0(ap_reg_pp0_iter2_exitcond_reg_268),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .I2(ap_reg_pp0_iter3_exitcond_reg_268),
        .O(\ap_reg_pp0_iter3_exitcond_reg_268_reg[0] ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[0]_i_1__0 
       (.I0(\data_p2_reg_n_2_[0] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [0]),
        .O(\data_p1[0]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[10]_i_1__0 
       (.I0(\data_p2_reg_n_2_[10] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [10]),
        .O(\data_p1[10]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[11]_i_1__0 
       (.I0(\data_p2_reg_n_2_[11] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [11]),
        .O(\data_p1[11]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[12]_i_1__0 
       (.I0(\data_p2_reg_n_2_[12] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [12]),
        .O(\data_p1[12]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[13]_i_1__0 
       (.I0(\data_p2_reg_n_2_[13] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [13]),
        .O(\data_p1[13]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[14]_i_1__0 
       (.I0(\data_p2_reg_n_2_[14] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [14]),
        .O(\data_p1[14]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[15]_i_1__0 
       (.I0(\data_p2_reg_n_2_[15] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [15]),
        .O(\data_p1[15]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[16]_i_1__0 
       (.I0(\data_p2_reg_n_2_[16] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [16]),
        .O(\data_p1[16]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[17]_i_1__0 
       (.I0(\data_p2_reg_n_2_[17] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [17]),
        .O(\data_p1[17]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[18]_i_1__0 
       (.I0(\data_p2_reg_n_2_[18] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [18]),
        .O(\data_p1[18]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[19]_i_1__0 
       (.I0(\data_p2_reg_n_2_[19] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [19]),
        .O(\data_p1[19]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[1]_i_1__0 
       (.I0(\data_p2_reg_n_2_[1] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [1]),
        .O(\data_p1[1]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[20]_i_1__0 
       (.I0(\data_p2_reg_n_2_[20] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [20]),
        .O(\data_p1[20]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[21]_i_1__0 
       (.I0(\data_p2_reg_n_2_[21] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [21]),
        .O(\data_p1[21]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[22]_i_1__0 
       (.I0(\data_p2_reg_n_2_[22] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [22]),
        .O(\data_p1[22]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[23]_i_1__0 
       (.I0(\data_p2_reg_n_2_[23] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [23]),
        .O(\data_p1[23]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[24]_i_1__0 
       (.I0(\data_p2_reg_n_2_[24] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [24]),
        .O(\data_p1[24]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[25]_i_1__0 
       (.I0(\data_p2_reg_n_2_[25] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [25]),
        .O(\data_p1[25]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[26]_i_1__0 
       (.I0(\data_p2_reg_n_2_[26] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [26]),
        .O(\data_p1[26]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[27]_i_1__0 
       (.I0(\data_p2_reg_n_2_[27] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [27]),
        .O(\data_p1[27]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[28]_i_1__0 
       (.I0(\data_p2_reg_n_2_[28] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [28]),
        .O(\data_p1[28]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[29]_i_1__0 
       (.I0(\data_p2_reg_n_2_[29] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [29]),
        .O(\data_p1[29]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[2]_i_1__0 
       (.I0(\data_p2_reg_n_2_[2] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [2]),
        .O(\data_p1[2]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[30]_i_1 
       (.I0(\data_p2_reg_n_2_[30] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [30]),
        .O(\data_p1[30]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'h00B0000088888888)) 
    \data_p1[31]_i_1 
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(state),
        .I2(tmp_product),
        .I3(\exitcond_reg_268_reg[0] ),
        .I4(ap_enable_reg_pp0_iter1_reg_1),
        .I5(DATA_A_RVALID),
        .O(load_p1));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[31]_i_2 
       (.I0(\data_p2_reg_n_2_[31] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [31]),
        .O(\data_p1[31]_i_2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[3]_i_1__0 
       (.I0(\data_p2_reg_n_2_[3] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [3]),
        .O(\data_p1[3]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[4]_i_1__0 
       (.I0(\data_p2_reg_n_2_[4] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [4]),
        .O(\data_p1[4]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[5]_i_1__0 
       (.I0(\data_p2_reg_n_2_[5] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [5]),
        .O(\data_p1[5]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[6]_i_1__0 
       (.I0(\data_p2_reg_n_2_[6] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [6]),
        .O(\data_p1[6]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[7]_i_1__0 
       (.I0(\data_p2_reg_n_2_[7] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [7]),
        .O(\data_p1[7]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[8]_i_1__0 
       (.I0(\data_p2_reg_n_2_[8] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [8]),
        .O(\data_p1[8]_i_1__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[9]_i_1__0 
       (.I0(\data_p2_reg_n_2_[9] ),
        .I1(DATA_A_RVALID),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [9]),
        .O(\data_p1[9]_i_1__0_n_2 ));
  FDRE \data_p1_reg[0] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[0]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [0]),
        .R(1'b0));
  FDRE \data_p1_reg[10] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[10]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [10]),
        .R(1'b0));
  FDRE \data_p1_reg[11] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[11]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [11]),
        .R(1'b0));
  FDRE \data_p1_reg[12] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[12]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [12]),
        .R(1'b0));
  FDRE \data_p1_reg[13] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[13]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [13]),
        .R(1'b0));
  FDRE \data_p1_reg[14] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[14]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [14]),
        .R(1'b0));
  FDRE \data_p1_reg[15] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[15]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [15]),
        .R(1'b0));
  FDRE \data_p1_reg[16] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[16]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [16]),
        .R(1'b0));
  FDRE \data_p1_reg[17] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[17]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [17]),
        .R(1'b0));
  FDRE \data_p1_reg[18] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[18]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [18]),
        .R(1'b0));
  FDRE \data_p1_reg[19] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[19]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [19]),
        .R(1'b0));
  FDRE \data_p1_reg[1] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[1]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [1]),
        .R(1'b0));
  FDRE \data_p1_reg[20] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[20]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [20]),
        .R(1'b0));
  FDRE \data_p1_reg[21] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[21]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [21]),
        .R(1'b0));
  FDRE \data_p1_reg[22] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[22]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [22]),
        .R(1'b0));
  FDRE \data_p1_reg[23] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[23]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [23]),
        .R(1'b0));
  FDRE \data_p1_reg[24] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[24]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [24]),
        .R(1'b0));
  FDRE \data_p1_reg[25] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[25]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [25]),
        .R(1'b0));
  FDRE \data_p1_reg[26] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[26]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [26]),
        .R(1'b0));
  FDRE \data_p1_reg[27] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[27]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [27]),
        .R(1'b0));
  FDRE \data_p1_reg[28] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[28]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [28]),
        .R(1'b0));
  FDRE \data_p1_reg[29] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[29]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [29]),
        .R(1'b0));
  FDRE \data_p1_reg[2] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[2]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [2]),
        .R(1'b0));
  FDRE \data_p1_reg[30] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[30]_i_1_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [30]),
        .R(1'b0));
  FDRE \data_p1_reg[31] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[31]_i_2_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [31]),
        .R(1'b0));
  FDRE \data_p1_reg[3] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[3]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [3]),
        .R(1'b0));
  FDRE \data_p1_reg[4] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[4]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [4]),
        .R(1'b0));
  FDRE \data_p1_reg[5] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[5]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [5]),
        .R(1'b0));
  FDRE \data_p1_reg[6] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[6]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [6]),
        .R(1'b0));
  FDRE \data_p1_reg[7] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[7]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [7]),
        .R(1'b0));
  FDRE \data_p1_reg[8] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[8]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [8]),
        .R(1'b0));
  FDRE \data_p1_reg[9] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[9]_i_1__0_n_2 ),
        .Q(\DATA_A_addr_read_reg_277_reg[31] [9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    \data_p2[31]_i_1 
       (.I0(rdata_ack_t),
        .I1(\bus_equal_gen.rdata_valid_t_reg ),
        .O(load_p2));
  FDRE \data_p2_reg[0] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [0]),
        .Q(\data_p2_reg_n_2_[0] ),
        .R(1'b0));
  FDRE \data_p2_reg[10] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [10]),
        .Q(\data_p2_reg_n_2_[10] ),
        .R(1'b0));
  FDRE \data_p2_reg[11] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [11]),
        .Q(\data_p2_reg_n_2_[11] ),
        .R(1'b0));
  FDRE \data_p2_reg[12] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [12]),
        .Q(\data_p2_reg_n_2_[12] ),
        .R(1'b0));
  FDRE \data_p2_reg[13] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [13]),
        .Q(\data_p2_reg_n_2_[13] ),
        .R(1'b0));
  FDRE \data_p2_reg[14] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [14]),
        .Q(\data_p2_reg_n_2_[14] ),
        .R(1'b0));
  FDRE \data_p2_reg[15] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [15]),
        .Q(\data_p2_reg_n_2_[15] ),
        .R(1'b0));
  FDRE \data_p2_reg[16] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [16]),
        .Q(\data_p2_reg_n_2_[16] ),
        .R(1'b0));
  FDRE \data_p2_reg[17] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [17]),
        .Q(\data_p2_reg_n_2_[17] ),
        .R(1'b0));
  FDRE \data_p2_reg[18] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [18]),
        .Q(\data_p2_reg_n_2_[18] ),
        .R(1'b0));
  FDRE \data_p2_reg[19] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [19]),
        .Q(\data_p2_reg_n_2_[19] ),
        .R(1'b0));
  FDRE \data_p2_reg[1] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [1]),
        .Q(\data_p2_reg_n_2_[1] ),
        .R(1'b0));
  FDRE \data_p2_reg[20] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [20]),
        .Q(\data_p2_reg_n_2_[20] ),
        .R(1'b0));
  FDRE \data_p2_reg[21] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [21]),
        .Q(\data_p2_reg_n_2_[21] ),
        .R(1'b0));
  FDRE \data_p2_reg[22] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [22]),
        .Q(\data_p2_reg_n_2_[22] ),
        .R(1'b0));
  FDRE \data_p2_reg[23] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [23]),
        .Q(\data_p2_reg_n_2_[23] ),
        .R(1'b0));
  FDRE \data_p2_reg[24] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [24]),
        .Q(\data_p2_reg_n_2_[24] ),
        .R(1'b0));
  FDRE \data_p2_reg[25] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [25]),
        .Q(\data_p2_reg_n_2_[25] ),
        .R(1'b0));
  FDRE \data_p2_reg[26] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [26]),
        .Q(\data_p2_reg_n_2_[26] ),
        .R(1'b0));
  FDRE \data_p2_reg[27] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [27]),
        .Q(\data_p2_reg_n_2_[27] ),
        .R(1'b0));
  FDRE \data_p2_reg[28] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [28]),
        .Q(\data_p2_reg_n_2_[28] ),
        .R(1'b0));
  FDRE \data_p2_reg[29] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [29]),
        .Q(\data_p2_reg_n_2_[29] ),
        .R(1'b0));
  FDRE \data_p2_reg[2] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [2]),
        .Q(\data_p2_reg_n_2_[2] ),
        .R(1'b0));
  FDRE \data_p2_reg[30] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [30]),
        .Q(\data_p2_reg_n_2_[30] ),
        .R(1'b0));
  FDRE \data_p2_reg[31] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [31]),
        .Q(\data_p2_reg_n_2_[31] ),
        .R(1'b0));
  FDRE \data_p2_reg[3] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [3]),
        .Q(\data_p2_reg_n_2_[3] ),
        .R(1'b0));
  FDRE \data_p2_reg[4] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [4]),
        .Q(\data_p2_reg_n_2_[4] ),
        .R(1'b0));
  FDRE \data_p2_reg[5] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [5]),
        .Q(\data_p2_reg_n_2_[5] ),
        .R(1'b0));
  FDRE \data_p2_reg[6] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [6]),
        .Q(\data_p2_reg_n_2_[6] ),
        .R(1'b0));
  FDRE \data_p2_reg[7] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [7]),
        .Q(\data_p2_reg_n_2_[7] ),
        .R(1'b0));
  FDRE \data_p2_reg[8] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [8]),
        .Q(\data_p2_reg_n_2_[8] ),
        .R(1'b0));
  FDRE \data_p2_reg[9] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [9]),
        .Q(\data_p2_reg_n_2_[9] ),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h2)) 
    \exitcond_reg_268[0]_i_1 
       (.I0(Q[1]),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .O(tmp_product));
  LUT5 #(
    .INIT(32'hAAAAABAA)) 
    \exitcond_reg_268[0]_i_3 
       (.I0(ap_reg_ioackin_DATA_C_WREADY_i_2_n_2),
        .I1(ap_reg_ioackin_DATA_C_WREADY_reg_0),
        .I2(DATA_C_WREADY),
        .I3(ap_enable_reg_pp0_iter4_reg),
        .I4(ap_reg_pp0_iter3_exitcond_reg_268),
        .O(ap_enable_reg_pp0_iter1_reg));
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT5 #(
    .INIT(32'hBF000000)) 
    \i_reg_149[6]_i_1 
       (.I0(exitcond_fu_220_p2),
        .I1(tmp_product),
        .I2(ap_enable_reg_pp0_iter0),
        .I3(DATA_C_AWREADY),
        .I4(Q[0]),
        .O(SR));
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT3 #(
    .INIT(8'h40)) 
    \i_reg_149[6]_i_2 
       (.I0(exitcond_fu_220_p2),
        .I1(tmp_product),
        .I2(ap_enable_reg_pp0_iter0),
        .O(E));
  LUT6 #(
    .INIT(64'h4444444440004444)) 
    mem_reg_i_9__1
       (.I0(ap_reg_ioackin_DATA_C_WREADY_reg_0),
        .I1(ap_enable_reg_pp0_iter4_reg_0),
        .I2(DATA_A_RVALID),
        .I3(rdata_valid),
        .I4(ap_enable_reg_pp0_iter1_reg_1),
        .I5(\exitcond_reg_268_reg[0] ),
        .O(WEBWE));
  LUT5 #(
    .INIT(32'hFF7F3C0C)) 
    s_ready_t_i_1__0
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(state),
        .I2(DATA_A_RVALID),
        .I3(DATA_A_RREADY),
        .I4(rdata_ack_t),
        .O(s_ready_t_i_1__0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT3 #(
    .INIT(8'h20)) 
    s_ready_t_i_2
       (.I0(tmp_product),
        .I1(\exitcond_reg_268_reg[0] ),
        .I2(ap_enable_reg_pp0_iter1_reg_1),
        .O(DATA_A_RREADY));
  FDRE s_ready_t_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(s_ready_t_i_1__0_n_2),
        .Q(rdata_ack_t),
        .R(ap_rst_n_0));
  LUT5 #(
    .INIT(32'hEECCE0CC)) 
    \state[0]_i_1 
       (.I0(rdata_ack_t),
        .I1(DATA_A_RVALID),
        .I2(\state[0]_i_2_n_2 ),
        .I3(state),
        .I4(\bus_equal_gen.rdata_valid_t_reg ),
        .O(\state[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT4 #(
    .INIT(16'hA2AA)) 
    \state[0]_i_2 
       (.I0(DATA_A_RVALID),
        .I1(ap_enable_reg_pp0_iter1_reg_1),
        .I2(\exitcond_reg_268_reg[0] ),
        .I3(tmp_product),
        .O(\state[0]_i_2_n_2 ));
  LUT6 #(
    .INIT(64'h44F44444FFFFFFFF)) 
    \state[1]_i_1 
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(state),
        .I2(tmp_product),
        .I3(\exitcond_reg_268_reg[0] ),
        .I4(ap_enable_reg_pp0_iter1_reg_1),
        .I5(DATA_A_RVALID),
        .O(\state[1]_i_1_n_2 ));
  FDRE \state_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[0]_i_1_n_2 ),
        .Q(DATA_A_RVALID),
        .R(ap_rst_n_0));
  FDSE \state_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[1]_i_1_n_2 ),
        .Q(state),
        .S(ap_rst_n_0));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \tmp_reg_287[31]_i_1 
       (.I0(ap_reg_pp0_iter2_exitcond_reg_268),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .O(\tmp_reg_287_reg[0] ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi
   (m_axi_DATA_B_RREADY,
    ap_reg_ioackin_DATA_B_ARREADY_reg,
    DATA_B_ARREADY,
    ap_reg_ioackin_DATA_A_ARREADY_reg,
    \ap_CS_fsm_reg[1] ,
    m_axi_DATA_B_ARADDR,
    \m_axi_DATA_B_ARLEN[3] ,
    m_axi_DATA_B_ARVALID,
    s_ready_t_reg,
    \DATA_B_addr_read_reg_282_reg[31] ,
    ap_rst_n,
    m_axi_DATA_B_RVALID,
    Q,
    ap_reg_ioackin_DATA_B_ARREADY_reg_0,
    ap_reg_ioackin_DATA_A_ARREADY,
    DATA_A_ARREADY,
    m_axi_DATA_B_ARREADY,
    ap_clk,
    D,
    m_axi_DATA_B_RRESP,
    SR,
    \b3_reg_241_reg[29] ,
    \ap_CS_fsm_reg[8] ,
    \exitcond_reg_268_reg[0] ,
    ap_enable_reg_pp0_iter1_reg,
    DATA_A_RREADY);
  output m_axi_DATA_B_RREADY;
  output ap_reg_ioackin_DATA_B_ARREADY_reg;
  output DATA_B_ARREADY;
  output ap_reg_ioackin_DATA_A_ARREADY_reg;
  output \ap_CS_fsm_reg[1] ;
  output [29:0]m_axi_DATA_B_ARADDR;
  output [3:0]\m_axi_DATA_B_ARLEN[3] ;
  output m_axi_DATA_B_ARVALID;
  output [0:0]s_ready_t_reg;
  output [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  input ap_rst_n;
  input m_axi_DATA_B_RVALID;
  input [0:0]Q;
  input ap_reg_ioackin_DATA_B_ARREADY_reg_0;
  input ap_reg_ioackin_DATA_A_ARREADY;
  input DATA_A_ARREADY;
  input m_axi_DATA_B_ARREADY;
  input ap_clk;
  input [32:0]D;
  input [1:0]m_axi_DATA_B_RRESP;
  input [0:0]SR;
  input [29:0]\b3_reg_241_reg[29] ;
  input \ap_CS_fsm_reg[8] ;
  input \exitcond_reg_268_reg[0] ;
  input ap_enable_reg_pp0_iter1_reg;
  input DATA_A_RREADY;

  wire [32:0]D;
  wire DATA_A_ARREADY;
  wire DATA_A_RREADY;
  wire DATA_B_ARREADY;
  wire [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire [0:0]Q;
  wire [0:0]SR;
  wire \ap_CS_fsm_reg[1] ;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter1_reg;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_A_ARREADY_reg;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg_0;
  wire ap_rst_n;
  wire [29:0]\b3_reg_241_reg[29] ;
  wire \exitcond_reg_268_reg[0] ;
  wire [29:0]m_axi_DATA_B_ARADDR;
  wire [3:0]\m_axi_DATA_B_ARLEN[3] ;
  wire m_axi_DATA_B_ARREADY;
  wire m_axi_DATA_B_ARVALID;
  wire m_axi_DATA_B_RREADY;
  wire [1:0]m_axi_DATA_B_RRESP;
  wire m_axi_DATA_B_RVALID;
  wire [0:0]s_ready_t_reg;

  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_read bus_read
       (.ARLEN(\m_axi_DATA_B_ARLEN[3] ),
        .D(D),
        .DATA_A_ARREADY(DATA_A_ARREADY),
        .DATA_A_RREADY(DATA_A_RREADY),
        .\DATA_B_addr_read_reg_282_reg[31] (\DATA_B_addr_read_reg_282_reg[31] ),
        .Q(Q),
        .SR(SR),
        .\ap_CS_fsm_reg[1] (\ap_CS_fsm_reg[1] ),
        .\ap_CS_fsm_reg[8] (\ap_CS_fsm_reg[8] ),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter1_reg(ap_enable_reg_pp0_iter1_reg),
        .ap_reg_ioackin_DATA_A_ARREADY(ap_reg_ioackin_DATA_A_ARREADY),
        .ap_reg_ioackin_DATA_A_ARREADY_reg(ap_reg_ioackin_DATA_A_ARREADY_reg),
        .ap_reg_ioackin_DATA_B_ARREADY_reg(ap_reg_ioackin_DATA_B_ARREADY_reg),
        .ap_reg_ioackin_DATA_B_ARREADY_reg_0(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .ap_rst_n(ap_rst_n),
        .\b3_reg_241_reg[29] (\b3_reg_241_reg[29] ),
        .\exitcond_reg_268_reg[0] (\exitcond_reg_268_reg[0] ),
        .m_axi_DATA_B_ARADDR(m_axi_DATA_B_ARADDR),
        .m_axi_DATA_B_ARREADY(m_axi_DATA_B_ARREADY),
        .m_axi_DATA_B_ARVALID(m_axi_DATA_B_ARVALID),
        .m_axi_DATA_B_RREADY(m_axi_DATA_B_RREADY),
        .m_axi_DATA_B_RRESP(m_axi_DATA_B_RRESP),
        .m_axi_DATA_B_RVALID(m_axi_DATA_B_RVALID),
        .rdata_valid(s_ready_t_reg),
        .s_ready_t_reg(DATA_B_ARREADY));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi_buffer" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_buffer__parameterized0
   (m_axi_DATA_B_RREADY,
    beat_valid,
    S,
    Q,
    \usedw_reg[7]_0 ,
    E,
    DI,
    \bus_equal_gen.rdata_valid_t_reg ,
    full_n_reg_0,
    ap_clk,
    D,
    m_axi_DATA_B_RRESP,
    m_axi_DATA_B_RVALID,
    SR,
    \bus_equal_gen.rdata_valid_t_reg_0 ,
    rdata_ack_t,
    ap_rst_n,
    \usedw_reg[5]_0 );
  output m_axi_DATA_B_RREADY;
  output beat_valid;
  output [3:0]S;
  output [5:0]Q;
  output [2:0]\usedw_reg[7]_0 ;
  output [0:0]E;
  output [0:0]DI;
  output \bus_equal_gen.rdata_valid_t_reg ;
  output [32:0]full_n_reg_0;
  input ap_clk;
  input [32:0]D;
  input [1:0]m_axi_DATA_B_RRESP;
  input m_axi_DATA_B_RVALID;
  input [0:0]SR;
  input \bus_equal_gen.rdata_valid_t_reg_0 ;
  input rdata_ack_t;
  input ap_rst_n;
  input [6:0]\usedw_reg[5]_0 ;

  wire [32:0]D;
  wire [0:0]DI;
  wire [0:0]E;
  wire [5:0]Q;
  wire [3:0]S;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire beat_valid;
  wire \bus_equal_gen.rdata_valid_t_reg ;
  wire \bus_equal_gen.rdata_valid_t_reg_0 ;
  wire \dout_buf[0]_i_1_n_2 ;
  wire \dout_buf[10]_i_1_n_2 ;
  wire \dout_buf[11]_i_1_n_2 ;
  wire \dout_buf[12]_i_1_n_2 ;
  wire \dout_buf[13]_i_1_n_2 ;
  wire \dout_buf[14]_i_1_n_2 ;
  wire \dout_buf[15]_i_1_n_2 ;
  wire \dout_buf[16]_i_1_n_2 ;
  wire \dout_buf[17]_i_1_n_2 ;
  wire \dout_buf[18]_i_1_n_2 ;
  wire \dout_buf[19]_i_1_n_2 ;
  wire \dout_buf[1]_i_1_n_2 ;
  wire \dout_buf[20]_i_1_n_2 ;
  wire \dout_buf[21]_i_1_n_2 ;
  wire \dout_buf[22]_i_1_n_2 ;
  wire \dout_buf[23]_i_1_n_2 ;
  wire \dout_buf[24]_i_1_n_2 ;
  wire \dout_buf[25]_i_1_n_2 ;
  wire \dout_buf[26]_i_1_n_2 ;
  wire \dout_buf[27]_i_1_n_2 ;
  wire \dout_buf[28]_i_1_n_2 ;
  wire \dout_buf[29]_i_1_n_2 ;
  wire \dout_buf[2]_i_1_n_2 ;
  wire \dout_buf[30]_i_1_n_2 ;
  wire \dout_buf[31]_i_1_n_2 ;
  wire \dout_buf[34]_i_2_n_2 ;
  wire \dout_buf[3]_i_1_n_2 ;
  wire \dout_buf[4]_i_1_n_2 ;
  wire \dout_buf[5]_i_1_n_2 ;
  wire \dout_buf[6]_i_1_n_2 ;
  wire \dout_buf[7]_i_1_n_2 ;
  wire \dout_buf[8]_i_1_n_2 ;
  wire \dout_buf[9]_i_1_n_2 ;
  wire dout_valid_i_1__0_n_2;
  wire empty_n_i_1__0_n_2;
  wire empty_n_i_2__0_n_2;
  wire empty_n_i_3__0_n_2;
  wire empty_n_reg_n_2;
  wire full_n_i_1__0_n_2;
  wire full_n_i_2__2_n_2;
  wire full_n_i_3__2_n_2;
  wire full_n_i_4__2_n_2;
  wire [32:0]full_n_reg_0;
  wire m_axi_DATA_B_RREADY;
  wire [1:0]m_axi_DATA_B_RRESP;
  wire m_axi_DATA_B_RVALID;
  wire mem_reg_i_10__0_n_2;
  wire mem_reg_i_8__0_n_2;
  wire mem_reg_i_9__0_n_2;
  wire mem_reg_n_34;
  wire mem_reg_n_35;
  wire pop;
  wire push;
  wire [34:0]q_buf;
  wire [34:0]q_tmp;
  wire [7:0]raddr;
  wire rdata_ack_t;
  wire [7:1]rnext;
  wire show_ahead;
  wire show_ahead0;
  wire \usedw[0]_i_1__0_n_2 ;
  wire \usedw[7]_i_1__1_n_2 ;
  wire [7:6]usedw_reg;
  wire [6:0]\usedw_reg[5]_0 ;
  wire [2:0]\usedw_reg[7]_0 ;
  wire [7:0]waddr;
  wire \waddr[0]_i_1__0_n_2 ;
  wire \waddr[1]_i_1__0_n_2 ;
  wire \waddr[2]_i_1__0_n_2 ;
  wire \waddr[3]_i_1__0_n_2 ;
  wire \waddr[4]_i_1__0_n_2 ;
  wire \waddr[5]_i_1__0_n_2 ;
  wire \waddr[6]_i_1__0_n_2 ;
  wire \waddr[6]_i_2__0_n_2 ;
  wire \waddr[7]_i_2__0_n_2 ;
  wire \waddr[7]_i_3__0_n_2 ;
  wire \waddr[7]_i_4__0_n_2 ;
  wire [1:1]NLW_mem_reg_DOPBDOP_UNCONNECTED;

  (* SOFT_HLUTNM = "soft_lutpair138" *) 
  LUT3 #(
    .INIT(8'hA2)) 
    \bus_equal_gen.data_buf[31]_i_1__0 
       (.I0(beat_valid),
        .I1(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I2(rdata_ack_t),
        .O(E));
  (* SOFT_HLUTNM = "soft_lutpair138" *) 
  LUT3 #(
    .INIT(8'hBA)) 
    \bus_equal_gen.rdata_valid_t_i_1__0 
       (.I0(beat_valid),
        .I1(rdata_ack_t),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .O(\bus_equal_gen.rdata_valid_t_reg ));
  (* SOFT_HLUTNM = "soft_lutpair125" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[0]_i_1 
       (.I0(q_tmp[0]),
        .I1(q_buf[0]),
        .I2(show_ahead),
        .O(\dout_buf[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair133" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[10]_i_1 
       (.I0(q_tmp[10]),
        .I1(q_buf[10]),
        .I2(show_ahead),
        .O(\dout_buf[10]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair135" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[11]_i_1 
       (.I0(q_tmp[11]),
        .I1(q_buf[11]),
        .I2(show_ahead),
        .O(\dout_buf[11]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair136" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[12]_i_1 
       (.I0(q_tmp[12]),
        .I1(q_buf[12]),
        .I2(show_ahead),
        .O(\dout_buf[12]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair137" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[13]_i_1 
       (.I0(q_tmp[13]),
        .I1(q_buf[13]),
        .I2(show_ahead),
        .O(\dout_buf[13]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair139" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[14]_i_1 
       (.I0(q_tmp[14]),
        .I1(q_buf[14]),
        .I2(show_ahead),
        .O(\dout_buf[14]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair134" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[15]_i_1 
       (.I0(q_tmp[15]),
        .I1(q_buf[15]),
        .I2(show_ahead),
        .O(\dout_buf[15]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair131" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[16]_i_1 
       (.I0(q_tmp[16]),
        .I1(q_buf[16]),
        .I2(show_ahead),
        .O(\dout_buf[16]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair125" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[17]_i_1 
       (.I0(q_tmp[17]),
        .I1(q_buf[17]),
        .I2(show_ahead),
        .O(\dout_buf[17]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair127" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[18]_i_1 
       (.I0(q_tmp[18]),
        .I1(q_buf[18]),
        .I2(show_ahead),
        .O(\dout_buf[18]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair126" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[19]_i_1 
       (.I0(q_tmp[19]),
        .I1(q_buf[19]),
        .I2(show_ahead),
        .O(\dout_buf[19]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair126" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[1]_i_1 
       (.I0(q_tmp[1]),
        .I1(q_buf[1]),
        .I2(show_ahead),
        .O(\dout_buf[1]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair128" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[20]_i_1 
       (.I0(q_tmp[20]),
        .I1(q_buf[20]),
        .I2(show_ahead),
        .O(\dout_buf[20]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair132" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[21]_i_1 
       (.I0(q_tmp[21]),
        .I1(q_buf[21]),
        .I2(show_ahead),
        .O(\dout_buf[21]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair129" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[22]_i_1 
       (.I0(q_tmp[22]),
        .I1(q_buf[22]),
        .I2(show_ahead),
        .O(\dout_buf[22]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair130" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[23]_i_1 
       (.I0(q_tmp[23]),
        .I1(q_buf[23]),
        .I2(show_ahead),
        .O(\dout_buf[23]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair139" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[24]_i_1 
       (.I0(q_tmp[24]),
        .I1(q_buf[24]),
        .I2(show_ahead),
        .O(\dout_buf[24]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair140" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[25]_i_1 
       (.I0(q_tmp[25]),
        .I1(q_buf[25]),
        .I2(show_ahead),
        .O(\dout_buf[25]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair141" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[26]_i_1 
       (.I0(q_tmp[26]),
        .I1(q_buf[26]),
        .I2(show_ahead),
        .O(\dout_buf[26]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair140" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[27]_i_1 
       (.I0(q_tmp[27]),
        .I1(q_buf[27]),
        .I2(show_ahead),
        .O(\dout_buf[27]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair141" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[28]_i_1 
       (.I0(q_tmp[28]),
        .I1(q_buf[28]),
        .I2(show_ahead),
        .O(\dout_buf[28]_i_1_n_2 ));
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[29]_i_1 
       (.I0(q_tmp[29]),
        .I1(q_buf[29]),
        .I2(show_ahead),
        .O(\dout_buf[29]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair127" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[2]_i_1 
       (.I0(q_tmp[2]),
        .I1(q_buf[2]),
        .I2(show_ahead),
        .O(\dout_buf[2]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair135" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[30]_i_1 
       (.I0(q_tmp[30]),
        .I1(q_buf[30]),
        .I2(show_ahead),
        .O(\dout_buf[30]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair136" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[31]_i_1 
       (.I0(q_tmp[31]),
        .I1(q_buf[31]),
        .I2(show_ahead),
        .O(\dout_buf[31]_i_1_n_2 ));
  LUT4 #(
    .INIT(16'hAA2A)) 
    \dout_buf[34]_i_1__0 
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(rdata_ack_t),
        .O(pop));
  (* SOFT_HLUTNM = "soft_lutpair137" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[34]_i_2 
       (.I0(q_tmp[34]),
        .I1(q_buf[34]),
        .I2(show_ahead),
        .O(\dout_buf[34]_i_2_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair128" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[3]_i_1 
       (.I0(q_tmp[3]),
        .I1(q_buf[3]),
        .I2(show_ahead),
        .O(\dout_buf[3]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair129" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[4]_i_1 
       (.I0(q_tmp[4]),
        .I1(q_buf[4]),
        .I2(show_ahead),
        .O(\dout_buf[4]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair130" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[5]_i_1 
       (.I0(q_tmp[5]),
        .I1(q_buf[5]),
        .I2(show_ahead),
        .O(\dout_buf[5]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair131" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[6]_i_1 
       (.I0(q_tmp[6]),
        .I1(q_buf[6]),
        .I2(show_ahead),
        .O(\dout_buf[6]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair132" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[7]_i_1 
       (.I0(q_tmp[7]),
        .I1(q_buf[7]),
        .I2(show_ahead),
        .O(\dout_buf[7]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair133" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[8]_i_1 
       (.I0(q_tmp[8]),
        .I1(q_buf[8]),
        .I2(show_ahead),
        .O(\dout_buf[8]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair134" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[9]_i_1 
       (.I0(q_tmp[9]),
        .I1(q_buf[9]),
        .I2(show_ahead),
        .O(\dout_buf[9]_i_1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[0] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[0]_i_1_n_2 ),
        .Q(full_n_reg_0[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[10] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[10]_i_1_n_2 ),
        .Q(full_n_reg_0[10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[11] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[11]_i_1_n_2 ),
        .Q(full_n_reg_0[11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[12] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[12]_i_1_n_2 ),
        .Q(full_n_reg_0[12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[13] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[13]_i_1_n_2 ),
        .Q(full_n_reg_0[13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[14] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[14]_i_1_n_2 ),
        .Q(full_n_reg_0[14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[15] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[15]_i_1_n_2 ),
        .Q(full_n_reg_0[15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[16] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[16]_i_1_n_2 ),
        .Q(full_n_reg_0[16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[17] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[17]_i_1_n_2 ),
        .Q(full_n_reg_0[17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[18] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[18]_i_1_n_2 ),
        .Q(full_n_reg_0[18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[19] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[19]_i_1_n_2 ),
        .Q(full_n_reg_0[19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[1] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[1]_i_1_n_2 ),
        .Q(full_n_reg_0[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[20] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[20]_i_1_n_2 ),
        .Q(full_n_reg_0[20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[21] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[21]_i_1_n_2 ),
        .Q(full_n_reg_0[21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[22] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[22]_i_1_n_2 ),
        .Q(full_n_reg_0[22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[23] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[23]_i_1_n_2 ),
        .Q(full_n_reg_0[23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[24] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[24]_i_1_n_2 ),
        .Q(full_n_reg_0[24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[25] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[25]_i_1_n_2 ),
        .Q(full_n_reg_0[25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[26] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[26]_i_1_n_2 ),
        .Q(full_n_reg_0[26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[27] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[27]_i_1_n_2 ),
        .Q(full_n_reg_0[27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[28] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[28]_i_1_n_2 ),
        .Q(full_n_reg_0[28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[29] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[29]_i_1_n_2 ),
        .Q(full_n_reg_0[29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[2] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[2]_i_1_n_2 ),
        .Q(full_n_reg_0[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[30] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[30]_i_1_n_2 ),
        .Q(full_n_reg_0[30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[31] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[31]_i_1_n_2 ),
        .Q(full_n_reg_0[31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[34] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[34]_i_2_n_2 ),
        .Q(full_n_reg_0[32]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[3] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[3]_i_1_n_2 ),
        .Q(full_n_reg_0[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[4] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[4]_i_1_n_2 ),
        .Q(full_n_reg_0[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[5] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[5]_i_1_n_2 ),
        .Q(full_n_reg_0[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[6] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[6]_i_1_n_2 ),
        .Q(full_n_reg_0[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[7] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[7]_i_1_n_2 ),
        .Q(full_n_reg_0[7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[8] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[8]_i_1_n_2 ),
        .Q(full_n_reg_0[8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[9] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[9]_i_1_n_2 ),
        .Q(full_n_reg_0[9]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair122" *) 
  LUT4 #(
    .INIT(16'hAAEA)) 
    dout_valid_i_1__0
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(rdata_ack_t),
        .O(dout_valid_i_1__0_n_2));
  FDRE #(
    .INIT(1'b0)) 
    dout_valid_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(dout_valid_i_1__0_n_2),
        .Q(beat_valid),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFFDDDF0000DDD)) 
    empty_n_i_1__0
       (.I0(Q[0]),
        .I1(empty_n_i_2__0_n_2),
        .I2(m_axi_DATA_B_RREADY),
        .I3(m_axi_DATA_B_RVALID),
        .I4(full_n_i_4__2_n_2),
        .I5(empty_n_reg_n_2),
        .O(empty_n_i_1__0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair123" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_2__0
       (.I0(Q[5]),
        .I1(Q[3]),
        .I2(Q[2]),
        .I3(empty_n_i_3__0_n_2),
        .O(empty_n_i_2__0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair124" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_3__0
       (.I0(usedw_reg[7]),
        .I1(usedw_reg[6]),
        .I2(Q[1]),
        .I3(Q[4]),
        .O(empty_n_i_3__0_n_2));
  FDRE #(
    .INIT(1'b0)) 
    empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1__0_n_2),
        .Q(empty_n_reg_n_2),
        .R(SR));
  LUT6 #(
    .INIT(64'hEFFF0F0FFFFFFFFF)) 
    full_n_i_1__0
       (.I0(full_n_i_2__2_n_2),
        .I1(full_n_i_3__2_n_2),
        .I2(ap_rst_n),
        .I3(m_axi_DATA_B_RVALID),
        .I4(m_axi_DATA_B_RREADY),
        .I5(full_n_i_4__2_n_2),
        .O(full_n_i_1__0_n_2));
  (* SOFT_HLUTNM = "soft_lutpair124" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_2__2
       (.I0(usedw_reg[7]),
        .I1(usedw_reg[6]),
        .I2(Q[1]),
        .I3(Q[0]),
        .O(full_n_i_2__2_n_2));
  (* SOFT_HLUTNM = "soft_lutpair123" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_3__2
       (.I0(Q[2]),
        .I1(Q[5]),
        .I2(Q[3]),
        .I3(Q[4]),
        .O(full_n_i_3__2_n_2));
  (* SOFT_HLUTNM = "soft_lutpair122" *) 
  LUT4 #(
    .INIT(16'h40FF)) 
    full_n_i_4__2
       (.I0(rdata_ack_t),
        .I1(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I2(beat_valid),
        .I3(empty_n_reg_n_2),
        .O(full_n_i_4__2_n_2));
  FDRE #(
    .INIT(1'b1)) 
    full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1__0_n_2),
        .Q(m_axi_DATA_B_RREADY),
        .R(1'b0));
  (* \MEM.PORTA.DATA_BIT_LAYOUT  = "p3_d32" *) 
  (* \MEM.PORTB.DATA_BIT_LAYOUT  = "p3_d32" *) 
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-6 {cell *THIS*}}" *) 
  (* RTL_RAM_BITS = "8960" *) 
  (* RTL_RAM_NAME = "mem" *) 
  (* bram_addr_begin = "0" *) 
  (* bram_addr_end = "511" *) 
  (* bram_slice_begin = "0" *) 
  (* bram_slice_end = "34" *) 
  RAMB18E1 #(
    .DOA_REG(0),
    .DOB_REG(0),
    .INIT_A(18'h00000),
    .INIT_B(18'h00000),
    .RAM_MODE("SDP"),
    .RDADDR_COLLISION_HWCONFIG("DELAYED_WRITE"),
    .READ_WIDTH_A(36),
    .READ_WIDTH_B(0),
    .RSTREG_PRIORITY_A("RSTREG"),
    .RSTREG_PRIORITY_B("RSTREG"),
    .SIM_COLLISION_CHECK("ALL"),
    .SIM_DEVICE("7SERIES"),
    .SRVAL_A(18'h00000),
    .SRVAL_B(18'h00000),
    .WRITE_MODE_A("READ_FIRST"),
    .WRITE_MODE_B("READ_FIRST"),
    .WRITE_WIDTH_A(0),
    .WRITE_WIDTH_B(36)) 
    mem_reg
       (.ADDRARDADDR({1'b1,rnext,mem_reg_i_8__0_n_2,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .ADDRBWRADDR({1'b1,waddr,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CLKARDCLK(ap_clk),
        .CLKBWRCLK(ap_clk),
        .DIADI(D[15:0]),
        .DIBDI(D[31:16]),
        .DIPADIP(m_axi_DATA_B_RRESP),
        .DIPBDIP({1'b1,D[32]}),
        .DOADO(q_buf[15:0]),
        .DOBDO(q_buf[31:16]),
        .DOPADOP({mem_reg_n_34,mem_reg_n_35}),
        .DOPBDOP({NLW_mem_reg_DOPBDOP_UNCONNECTED[1],q_buf[34]}),
        .ENARDEN(1'b1),
        .ENBWREN(m_axi_DATA_B_RREADY),
        .REGCEAREGCE(1'b0),
        .REGCEB(1'b0),
        .RSTRAMARSTRAM(1'b0),
        .RSTRAMB(1'b0),
        .RSTREGARSTREG(1'b0),
        .RSTREGB(1'b0),
        .WEA({1'b0,1'b0}),
        .WEBWE({m_axi_DATA_B_RVALID,m_axi_DATA_B_RVALID,m_axi_DATA_B_RVALID,m_axi_DATA_B_RVALID}));
  LUT6 #(
    .INIT(64'h7555FFFFFFFFFFFF)) 
    mem_reg_i_10__0
       (.I0(raddr[0]),
        .I1(rdata_ack_t),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(beat_valid),
        .I4(empty_n_reg_n_2),
        .I5(raddr[1]),
        .O(mem_reg_i_10__0_n_2));
  LUT4 #(
    .INIT(16'h6AAA)) 
    mem_reg_i_1__0
       (.I0(raddr[7]),
        .I1(raddr[5]),
        .I2(mem_reg_i_9__0_n_2),
        .I3(raddr[6]),
        .O(rnext[7]));
  LUT6 #(
    .INIT(64'hAA6AAAAAAAAAAAAA)) 
    mem_reg_i_2__0
       (.I0(raddr[6]),
        .I1(raddr[4]),
        .I2(raddr[3]),
        .I3(mem_reg_i_10__0_n_2),
        .I4(raddr[2]),
        .I5(raddr[5]),
        .O(rnext[6]));
  LUT5 #(
    .INIT(32'hA6AAAAAA)) 
    mem_reg_i_3__0
       (.I0(raddr[5]),
        .I1(raddr[2]),
        .I2(mem_reg_i_10__0_n_2),
        .I3(raddr[3]),
        .I4(raddr[4]),
        .O(rnext[5]));
  LUT6 #(
    .INIT(64'hF7FFFFFF08000000)) 
    mem_reg_i_4__0
       (.I0(raddr[2]),
        .I1(raddr[0]),
        .I2(full_n_i_4__2_n_2),
        .I3(raddr[1]),
        .I4(raddr[3]),
        .I5(raddr[4]),
        .O(rnext[4]));
  LUT5 #(
    .INIT(32'hA6AAAAAA)) 
    mem_reg_i_5__0
       (.I0(raddr[3]),
        .I1(raddr[1]),
        .I2(full_n_i_4__2_n_2),
        .I3(raddr[0]),
        .I4(raddr[2]),
        .O(rnext[3]));
  LUT4 #(
    .INIT(16'hA6AA)) 
    mem_reg_i_6__0
       (.I0(raddr[2]),
        .I1(raddr[0]),
        .I2(full_n_i_4__2_n_2),
        .I3(raddr[1]),
        .O(rnext[2]));
  LUT6 #(
    .INIT(64'h6666A666AAAAAAAA)) 
    mem_reg_i_7__0
       (.I0(raddr[1]),
        .I1(empty_n_reg_n_2),
        .I2(beat_valid),
        .I3(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I4(rdata_ack_t),
        .I5(raddr[0]),
        .O(rnext[1]));
  LUT5 #(
    .INIT(32'h6666A666)) 
    mem_reg_i_8__0
       (.I0(raddr[0]),
        .I1(empty_n_reg_n_2),
        .I2(beat_valid),
        .I3(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I4(rdata_ack_t),
        .O(mem_reg_i_8__0_n_2));
  LUT6 #(
    .INIT(64'h0080000000000000)) 
    mem_reg_i_9__0
       (.I0(raddr[4]),
        .I1(raddr[3]),
        .I2(raddr[1]),
        .I3(full_n_i_4__2_n_2),
        .I4(raddr[0]),
        .I5(raddr[2]),
        .O(mem_reg_i_9__0_n_2));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_1__0
       (.I0(usedw_reg[6]),
        .I1(usedw_reg[7]),
        .O(\usedw_reg[7]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_2__0
       (.I0(Q[5]),
        .I1(usedw_reg[6]),
        .O(\usedw_reg[7]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_3__0
       (.I0(Q[4]),
        .I1(Q[5]),
        .O(\usedw_reg[7]_0 [0]));
  LUT1 #(
    .INIT(2'h1)) 
    p_0_out_carry_i_1__0
       (.I0(Q[1]),
        .O(DI));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_2__0
       (.I0(Q[3]),
        .I1(Q[4]),
        .O(S[3]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_3__0
       (.I0(Q[2]),
        .I1(Q[3]),
        .O(S[2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_4__0
       (.I0(Q[1]),
        .I1(Q[2]),
        .O(S[1]));
  LUT6 #(
    .INIT(64'h5955555599999999)) 
    p_0_out_carry_i_5__0
       (.I0(Q[1]),
        .I1(push),
        .I2(rdata_ack_t),
        .I3(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I4(beat_valid),
        .I5(empty_n_reg_n_2),
        .O(S[0]));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[0] 
       (.C(ap_clk),
        .CE(push),
        .D(D[0]),
        .Q(q_tmp[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[10] 
       (.C(ap_clk),
        .CE(push),
        .D(D[10]),
        .Q(q_tmp[10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[11] 
       (.C(ap_clk),
        .CE(push),
        .D(D[11]),
        .Q(q_tmp[11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[12] 
       (.C(ap_clk),
        .CE(push),
        .D(D[12]),
        .Q(q_tmp[12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[13] 
       (.C(ap_clk),
        .CE(push),
        .D(D[13]),
        .Q(q_tmp[13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[14] 
       (.C(ap_clk),
        .CE(push),
        .D(D[14]),
        .Q(q_tmp[14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[15] 
       (.C(ap_clk),
        .CE(push),
        .D(D[15]),
        .Q(q_tmp[15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[16] 
       (.C(ap_clk),
        .CE(push),
        .D(D[16]),
        .Q(q_tmp[16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[17] 
       (.C(ap_clk),
        .CE(push),
        .D(D[17]),
        .Q(q_tmp[17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[18] 
       (.C(ap_clk),
        .CE(push),
        .D(D[18]),
        .Q(q_tmp[18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[19] 
       (.C(ap_clk),
        .CE(push),
        .D(D[19]),
        .Q(q_tmp[19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[1] 
       (.C(ap_clk),
        .CE(push),
        .D(D[1]),
        .Q(q_tmp[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[20] 
       (.C(ap_clk),
        .CE(push),
        .D(D[20]),
        .Q(q_tmp[20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[21] 
       (.C(ap_clk),
        .CE(push),
        .D(D[21]),
        .Q(q_tmp[21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[22] 
       (.C(ap_clk),
        .CE(push),
        .D(D[22]),
        .Q(q_tmp[22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[23] 
       (.C(ap_clk),
        .CE(push),
        .D(D[23]),
        .Q(q_tmp[23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[24] 
       (.C(ap_clk),
        .CE(push),
        .D(D[24]),
        .Q(q_tmp[24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[25] 
       (.C(ap_clk),
        .CE(push),
        .D(D[25]),
        .Q(q_tmp[25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[26] 
       (.C(ap_clk),
        .CE(push),
        .D(D[26]),
        .Q(q_tmp[26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[27] 
       (.C(ap_clk),
        .CE(push),
        .D(D[27]),
        .Q(q_tmp[27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[28] 
       (.C(ap_clk),
        .CE(push),
        .D(D[28]),
        .Q(q_tmp[28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[29] 
       (.C(ap_clk),
        .CE(push),
        .D(D[29]),
        .Q(q_tmp[29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[2] 
       (.C(ap_clk),
        .CE(push),
        .D(D[2]),
        .Q(q_tmp[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[30] 
       (.C(ap_clk),
        .CE(push),
        .D(D[30]),
        .Q(q_tmp[30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[31] 
       (.C(ap_clk),
        .CE(push),
        .D(D[31]),
        .Q(q_tmp[31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[34] 
       (.C(ap_clk),
        .CE(push),
        .D(D[32]),
        .Q(q_tmp[34]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[3] 
       (.C(ap_clk),
        .CE(push),
        .D(D[3]),
        .Q(q_tmp[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[4] 
       (.C(ap_clk),
        .CE(push),
        .D(D[4]),
        .Q(q_tmp[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[5] 
       (.C(ap_clk),
        .CE(push),
        .D(D[5]),
        .Q(q_tmp[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[6] 
       (.C(ap_clk),
        .CE(push),
        .D(D[6]),
        .Q(q_tmp[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[7] 
       (.C(ap_clk),
        .CE(push),
        .D(D[7]),
        .Q(q_tmp[7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[8] 
       (.C(ap_clk),
        .CE(push),
        .D(D[8]),
        .Q(q_tmp[8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[9] 
       (.C(ap_clk),
        .CE(push),
        .D(D[9]),
        .Q(q_tmp[9]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(mem_reg_i_8__0_n_2),
        .Q(raddr[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[1]),
        .Q(raddr[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[2]),
        .Q(raddr[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[3]),
        .Q(raddr[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[4]),
        .Q(raddr[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[5]),
        .Q(raddr[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[6]),
        .Q(raddr[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[7]),
        .Q(raddr[7]),
        .R(SR));
  LUT5 #(
    .INIT(32'h00404000)) 
    show_ahead_i_1__0
       (.I0(empty_n_i_2__0_n_2),
        .I1(m_axi_DATA_B_RVALID),
        .I2(m_axi_DATA_B_RREADY),
        .I3(full_n_i_4__2_n_2),
        .I4(Q[0]),
        .O(show_ahead0));
  FDRE #(
    .INIT(1'b0)) 
    show_ahead_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(show_ahead0),
        .Q(show_ahead),
        .R(SR));
  LUT1 #(
    .INIT(2'h1)) 
    \usedw[0]_i_1__0 
       (.I0(Q[0]),
        .O(\usedw[0]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'h55D5AA2AAA2AAA2A)) 
    \usedw[7]_i_1__1 
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(rdata_ack_t),
        .I4(m_axi_DATA_B_RVALID),
        .I5(m_axi_DATA_B_RREADY),
        .O(\usedw[7]_i_1__1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[0] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw[0]_i_1__0_n_2 ),
        .Q(Q[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[1] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [0]),
        .Q(Q[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[2] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [1]),
        .Q(Q[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[3] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [2]),
        .Q(Q[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[4] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [3]),
        .Q(Q[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[5] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [4]),
        .Q(Q[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[6] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [5]),
        .Q(usedw_reg[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[7] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__1_n_2 ),
        .D(\usedw_reg[5]_0 [6]),
        .Q(usedw_reg[7]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair143" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \waddr[0]_i_1__0 
       (.I0(waddr[0]),
        .O(\waddr[0]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair143" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \waddr[1]_i_1__0 
       (.I0(waddr[0]),
        .I1(waddr[1]),
        .O(\waddr[1]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair142" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \waddr[2]_i_1__0 
       (.I0(waddr[2]),
        .I1(waddr[0]),
        .I2(waddr[1]),
        .O(\waddr[2]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair121" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \waddr[3]_i_1__0 
       (.I0(waddr[3]),
        .I1(waddr[0]),
        .I2(waddr[1]),
        .I3(waddr[2]),
        .O(\waddr[3]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair121" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \waddr[4]_i_1__0 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[1]),
        .I3(waddr[0]),
        .I4(waddr[3]),
        .O(\waddr[4]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \waddr[5]_i_1__0 
       (.I0(waddr[5]),
        .I1(waddr[3]),
        .I2(waddr[0]),
        .I3(waddr[1]),
        .I4(waddr[2]),
        .I5(waddr[4]),
        .O(\waddr[5]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \waddr[6]_i_1__0 
       (.I0(waddr[6]),
        .I1(waddr[4]),
        .I2(waddr[2]),
        .I3(\waddr[6]_i_2__0_n_2 ),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[6]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair142" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[6]_i_2__0 
       (.I0(waddr[1]),
        .I1(waddr[0]),
        .O(\waddr[6]_i_2__0_n_2 ));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[7]_i_1__0 
       (.I0(m_axi_DATA_B_RREADY),
        .I1(m_axi_DATA_B_RVALID),
        .O(push));
  LUT4 #(
    .INIT(16'hB8CC)) 
    \waddr[7]_i_2__0 
       (.I0(\waddr[7]_i_3__0_n_2 ),
        .I1(waddr[7]),
        .I2(\waddr[7]_i_4__0_n_2 ),
        .I3(waddr[6]),
        .O(\waddr[7]_i_2__0_n_2 ));
  LUT6 #(
    .INIT(64'h7FFFFFFFFFFFFFFF)) 
    \waddr[7]_i_3__0 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[0]),
        .I3(waddr[1]),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[7]_i_3__0_n_2 ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \waddr[7]_i_4__0 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[1]),
        .I3(waddr[0]),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[7]_i_4__0_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[0] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[0]_i_1__0_n_2 ),
        .Q(waddr[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[1] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[1]_i_1__0_n_2 ),
        .Q(waddr[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[2] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[2]_i_1__0_n_2 ),
        .Q(waddr[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[3] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[3]_i_1__0_n_2 ),
        .Q(waddr[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[4] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[4]_i_1__0_n_2 ),
        .Q(waddr[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[5] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[5]_i_1__0_n_2 ),
        .Q(waddr[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[6] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[6]_i_1__0_n_2 ),
        .Q(waddr[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[7] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[7]_i_2__0_n_2 ),
        .Q(waddr[7]),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_fifo__parameterized0
   (fifo_rreq_valid,
    E,
    \align_len_reg[7] ,
    \sect_len_buf_reg[9] ,
    rs2f_rreq_ack,
    S,
    fifo_rreq_valid_buf_reg,
    \align_len_reg[31] ,
    invalid_len_event_reg,
    O,
    \sect_cnt_reg[7] ,
    \sect_cnt_reg[11] ,
    \sect_cnt_reg[15] ,
    \sect_cnt_reg[19] ,
    invalid_len_event_reg_0,
    fifo_rreq_valid_buf_reg_0,
    SR,
    ap_clk,
    sect_cnt_reg,
    Q,
    invalid_len_event,
    fifo_rreq_valid_buf_reg_1,
    rreq_handling_reg,
    p_15_in,
    \end_addr_buf_reg[31] ,
    \sect_len_buf_reg[4] ,
    \could_multi_bursts.loop_cnt_reg[5] ,
    \sect_len_buf_reg[5] ,
    \sect_len_buf_reg[6] ,
    \sect_len_buf_reg[7] ,
    \sect_len_buf_reg[8] ,
    \sect_len_buf_reg[9]_0 ,
    \state_reg[0] ,
    \end_addr_buf_reg[31]_0 ,
    push,
    rreq_handling_reg_0,
    \data_p1_reg[29] ,
    ap_rst_n);
  output fifo_rreq_valid;
  output [0:0]E;
  output [0:0]\align_len_reg[7] ;
  output \sect_len_buf_reg[9] ;
  output rs2f_rreq_ack;
  output [3:0]S;
  output [2:0]fifo_rreq_valid_buf_reg;
  output [0:0]\align_len_reg[31] ;
  output [30:0]invalid_len_event_reg;
  output [3:0]O;
  output [3:0]\sect_cnt_reg[7] ;
  output [3:0]\sect_cnt_reg[11] ;
  output [3:0]\sect_cnt_reg[15] ;
  output [3:0]\sect_cnt_reg[19] ;
  output invalid_len_event_reg_0;
  output fifo_rreq_valid_buf_reg_0;
  input [0:0]SR;
  input ap_clk;
  input [19:0]sect_cnt_reg;
  input [19:0]Q;
  input invalid_len_event;
  input fifo_rreq_valid_buf_reg_1;
  input rreq_handling_reg;
  input p_15_in;
  input [0:0]\end_addr_buf_reg[31] ;
  input \sect_len_buf_reg[4] ;
  input [5:0]\could_multi_bursts.loop_cnt_reg[5] ;
  input \sect_len_buf_reg[5] ;
  input \sect_len_buf_reg[6] ;
  input \sect_len_buf_reg[7] ;
  input \sect_len_buf_reg[8] ;
  input \sect_len_buf_reg[9]_0 ;
  input [0:0]\state_reg[0] ;
  input [19:0]\end_addr_buf_reg[31]_0 ;
  input push;
  input rreq_handling_reg_0;
  input [29:0]\data_p1_reg[29] ;
  input ap_rst_n;

  wire [0:0]E;
  wire [3:0]O;
  wire [19:0]Q;
  wire [3:0]S;
  wire [0:0]SR;
  wire [0:0]\align_len_reg[31] ;
  wire [0:0]\align_len_reg[7] ;
  wire ap_clk;
  wire ap_rst_n;
  wire \could_multi_bursts.arlen_buf[3]_i_4__0_n_2 ;
  wire \could_multi_bursts.arlen_buf[3]_i_5__0_n_2 ;
  wire [5:0]\could_multi_bursts.loop_cnt_reg[5] ;
  wire [29:0]\data_p1_reg[29] ;
  wire data_vld_i_1__1_n_2;
  wire data_vld_reg_n_2;
  wire [0:0]\end_addr_buf_reg[31] ;
  wire [19:0]\end_addr_buf_reg[31]_0 ;
  wire fifo_rreq_valid;
  wire [2:0]fifo_rreq_valid_buf_reg;
  wire fifo_rreq_valid_buf_reg_0;
  wire fifo_rreq_valid_buf_reg_1;
  wire full_n_i_1__0_n_2;
  wire full_n_i_2__1_n_2;
  wire full_n_i_3__1_n_2;
  wire full_n_i_4__1_n_2;
  wire full_n_i_5__0_n_2;
  wire invalid_len_event;
  wire [30:0]invalid_len_event_reg;
  wire invalid_len_event_reg_0;
  wire \mem_reg[4][0]_srl5_n_2 ;
  wire \mem_reg[4][10]_srl5_n_2 ;
  wire \mem_reg[4][11]_srl5_n_2 ;
  wire \mem_reg[4][12]_srl5_n_2 ;
  wire \mem_reg[4][13]_srl5_n_2 ;
  wire \mem_reg[4][14]_srl5_n_2 ;
  wire \mem_reg[4][15]_srl5_n_2 ;
  wire \mem_reg[4][16]_srl5_n_2 ;
  wire \mem_reg[4][17]_srl5_n_2 ;
  wire \mem_reg[4][18]_srl5_n_2 ;
  wire \mem_reg[4][19]_srl5_n_2 ;
  wire \mem_reg[4][1]_srl5_n_2 ;
  wire \mem_reg[4][20]_srl5_n_2 ;
  wire \mem_reg[4][21]_srl5_n_2 ;
  wire \mem_reg[4][22]_srl5_n_2 ;
  wire \mem_reg[4][23]_srl5_n_2 ;
  wire \mem_reg[4][24]_srl5_n_2 ;
  wire \mem_reg[4][25]_srl5_n_2 ;
  wire \mem_reg[4][26]_srl5_n_2 ;
  wire \mem_reg[4][27]_srl5_n_2 ;
  wire \mem_reg[4][28]_srl5_n_2 ;
  wire \mem_reg[4][29]_srl5_n_2 ;
  wire \mem_reg[4][2]_srl5_n_2 ;
  wire \mem_reg[4][38]_srl5_n_2 ;
  wire \mem_reg[4][3]_srl5_n_2 ;
  wire \mem_reg[4][4]_srl5_n_2 ;
  wire \mem_reg[4][5]_srl5_n_2 ;
  wire \mem_reg[4][6]_srl5_n_2 ;
  wire \mem_reg[4][7]_srl5_n_2 ;
  wire \mem_reg[4][8]_srl5_n_2 ;
  wire \mem_reg[4][9]_srl5_n_2 ;
  wire p_15_in;
  wire pop0;
  wire \pout[0]_i_1__0_n_2 ;
  wire \pout[1]_i_1__0_n_2 ;
  wire \pout[2]_i_1__0_n_2 ;
  wire \pout_reg_n_2_[0] ;
  wire \pout_reg_n_2_[1] ;
  wire \pout_reg_n_2_[2] ;
  wire push;
  wire rreq_handling_reg;
  wire rreq_handling_reg_0;
  wire rs2f_rreq_ack;
  wire \sect_cnt[0]_i_3__0_n_2 ;
  wire \sect_cnt[0]_i_4__0_n_2 ;
  wire \sect_cnt[0]_i_5__0_n_2 ;
  wire \sect_cnt[0]_i_6__0_n_2 ;
  wire \sect_cnt[12]_i_2__0_n_2 ;
  wire \sect_cnt[12]_i_3__0_n_2 ;
  wire \sect_cnt[12]_i_4__0_n_2 ;
  wire \sect_cnt[12]_i_5__0_n_2 ;
  wire \sect_cnt[16]_i_2__0_n_2 ;
  wire \sect_cnt[16]_i_3__0_n_2 ;
  wire \sect_cnt[16]_i_4__0_n_2 ;
  wire \sect_cnt[16]_i_5__0_n_2 ;
  wire \sect_cnt[4]_i_2__0_n_2 ;
  wire \sect_cnt[4]_i_3__0_n_2 ;
  wire \sect_cnt[4]_i_4__0_n_2 ;
  wire \sect_cnt[4]_i_5__0_n_2 ;
  wire \sect_cnt[8]_i_2__0_n_2 ;
  wire \sect_cnt[8]_i_3__0_n_2 ;
  wire \sect_cnt[8]_i_4__0_n_2 ;
  wire \sect_cnt[8]_i_5__0_n_2 ;
  wire [19:0]sect_cnt_reg;
  wire \sect_cnt_reg[0]_i_2__0_n_2 ;
  wire \sect_cnt_reg[0]_i_2__0_n_3 ;
  wire \sect_cnt_reg[0]_i_2__0_n_4 ;
  wire \sect_cnt_reg[0]_i_2__0_n_5 ;
  wire [3:0]\sect_cnt_reg[11] ;
  wire \sect_cnt_reg[12]_i_1__0_n_2 ;
  wire \sect_cnt_reg[12]_i_1__0_n_3 ;
  wire \sect_cnt_reg[12]_i_1__0_n_4 ;
  wire \sect_cnt_reg[12]_i_1__0_n_5 ;
  wire [3:0]\sect_cnt_reg[15] ;
  wire \sect_cnt_reg[16]_i_1__0_n_3 ;
  wire \sect_cnt_reg[16]_i_1__0_n_4 ;
  wire \sect_cnt_reg[16]_i_1__0_n_5 ;
  wire [3:0]\sect_cnt_reg[19] ;
  wire \sect_cnt_reg[4]_i_1__0_n_2 ;
  wire \sect_cnt_reg[4]_i_1__0_n_3 ;
  wire \sect_cnt_reg[4]_i_1__0_n_4 ;
  wire \sect_cnt_reg[4]_i_1__0_n_5 ;
  wire [3:0]\sect_cnt_reg[7] ;
  wire \sect_cnt_reg[8]_i_1__0_n_2 ;
  wire \sect_cnt_reg[8]_i_1__0_n_3 ;
  wire \sect_cnt_reg[8]_i_1__0_n_4 ;
  wire \sect_cnt_reg[8]_i_1__0_n_5 ;
  wire \sect_len_buf_reg[4] ;
  wire \sect_len_buf_reg[5] ;
  wire \sect_len_buf_reg[6] ;
  wire \sect_len_buf_reg[7] ;
  wire \sect_len_buf_reg[8] ;
  wire \sect_len_buf_reg[9] ;
  wire \sect_len_buf_reg[9]_0 ;
  wire \start_addr_buf[31]_i_2__0_n_2 ;
  wire [0:0]\state_reg[0] ;
  wire [3:3]\NLW_sect_cnt_reg[16]_i_1__0_CO_UNCONNECTED ;

  LUT1 #(
    .INIT(2'h1)) 
    align_len0_carry_i_1__0
       (.I0(invalid_len_event_reg[30]),
        .O(\align_len_reg[31] ));
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.arlen_buf[3]_i_3__0 
       (.I0(\could_multi_bursts.arlen_buf[3]_i_4__0_n_2 ),
        .I1(\could_multi_bursts.arlen_buf[3]_i_5__0_n_2 ),
        .O(\sect_len_buf_reg[9] ));
  LUT6 #(
    .INIT(64'h6FF6FFFFFFFF6FF6)) 
    \could_multi_bursts.arlen_buf[3]_i_4__0 
       (.I0(\sect_len_buf_reg[7] ),
        .I1(\could_multi_bursts.loop_cnt_reg[5] [3]),
        .I2(\could_multi_bursts.loop_cnt_reg[5] [4]),
        .I3(\sect_len_buf_reg[8] ),
        .I4(\could_multi_bursts.loop_cnt_reg[5] [5]),
        .I5(\sect_len_buf_reg[9]_0 ),
        .O(\could_multi_bursts.arlen_buf[3]_i_4__0_n_2 ));
  LUT6 #(
    .INIT(64'h6FF6FFFFFFFF6FF6)) 
    \could_multi_bursts.arlen_buf[3]_i_5__0 
       (.I0(\sect_len_buf_reg[4] ),
        .I1(\could_multi_bursts.loop_cnt_reg[5] [0]),
        .I2(\could_multi_bursts.loop_cnt_reg[5] [1]),
        .I3(\sect_len_buf_reg[5] ),
        .I4(\could_multi_bursts.loop_cnt_reg[5] [2]),
        .I5(\sect_len_buf_reg[6] ),
        .O(\could_multi_bursts.arlen_buf[3]_i_5__0_n_2 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFE00FF00)) 
    data_vld_i_1__1
       (.I0(\pout_reg_n_2_[0] ),
        .I1(\pout_reg_n_2_[1] ),
        .I2(\pout_reg_n_2_[2] ),
        .I3(data_vld_reg_n_2),
        .I4(pop0),
        .I5(push),
        .O(data_vld_i_1__1_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__1_n_2),
        .Q(data_vld_reg_n_2),
        .R(SR));
  LUT5 #(
    .INIT(32'hFDDDFFFF)) 
    empty_n_i_1__1
       (.I0(fifo_rreq_valid),
        .I1(invalid_len_event),
        .I2(\end_addr_buf_reg[31] ),
        .I3(p_15_in),
        .I4(rreq_handling_reg),
        .O(pop0));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(pop0),
        .D(data_vld_reg_n_2),
        .Q(fifo_rreq_valid),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair150" *) 
  LUT5 #(
    .INIT(32'hAACACACA)) 
    fifo_rreq_valid_buf_i_1__0
       (.I0(fifo_rreq_valid),
        .I1(fifo_rreq_valid_buf_reg_1),
        .I2(rreq_handling_reg),
        .I3(p_15_in),
        .I4(\end_addr_buf_reg[31] ),
        .O(fifo_rreq_valid_buf_reg_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFB00FFFF)) 
    full_n_i_1__0
       (.I0(full_n_i_2__1_n_2),
        .I1(full_n_i_3__1_n_2),
        .I2(\pout_reg_n_2_[2] ),
        .I3(rs2f_rreq_ack),
        .I4(ap_rst_n),
        .I5(full_n_i_4__1_n_2),
        .O(full_n_i_1__0_n_2));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFD5FFFF)) 
    full_n_i_2__1
       (.I0(rreq_handling_reg),
        .I1(p_15_in),
        .I2(\end_addr_buf_reg[31] ),
        .I3(invalid_len_event),
        .I4(fifo_rreq_valid),
        .I5(full_n_i_5__0_n_2),
        .O(full_n_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h8)) 
    full_n_i_3__1
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[0] ),
        .O(full_n_i_3__1_n_2));
  LUT6 #(
    .INIT(64'hAAAAA222AAAAAAAA)) 
    full_n_i_4__1
       (.I0(data_vld_reg_n_2),
        .I1(rreq_handling_reg),
        .I2(p_15_in),
        .I3(\end_addr_buf_reg[31] ),
        .I4(invalid_len_event),
        .I5(fifo_rreq_valid),
        .O(full_n_i_4__1_n_2));
  LUT3 #(
    .INIT(8'h7F)) 
    full_n_i_5__0
       (.I0(data_vld_reg_n_2),
        .I1(rs2f_rreq_ack),
        .I2(\state_reg[0] ),
        .O(full_n_i_5__0_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1__0_n_2),
        .Q(rs2f_rreq_ack),
        .R(1'b0));
  LUT5 #(
    .INIT(32'hFF470044)) 
    invalid_len_event_i_1__0
       (.I0(invalid_len_event_reg[30]),
        .I1(fifo_rreq_valid),
        .I2(fifo_rreq_valid_buf_reg_1),
        .I3(rreq_handling_reg_0),
        .I4(invalid_len_event),
        .O(invalid_len_event_reg_0));
  LUT4 #(
    .INIT(16'h9009)) 
    last_sect_carry__0_i_1__0
       (.I0(\end_addr_buf_reg[31]_0 [19]),
        .I1(sect_cnt_reg[19]),
        .I2(\end_addr_buf_reg[31]_0 [18]),
        .I3(sect_cnt_reg[18]),
        .O(fifo_rreq_valid_buf_reg[2]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry__0_i_2__0
       (.I0(sect_cnt_reg[15]),
        .I1(\end_addr_buf_reg[31]_0 [15]),
        .I2(sect_cnt_reg[16]),
        .I3(\end_addr_buf_reg[31]_0 [16]),
        .I4(\end_addr_buf_reg[31]_0 [17]),
        .I5(sect_cnt_reg[17]),
        .O(fifo_rreq_valid_buf_reg[1]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry__0_i_3__0
       (.I0(\end_addr_buf_reg[31]_0 [14]),
        .I1(sect_cnt_reg[14]),
        .I2(sect_cnt_reg[12]),
        .I3(\end_addr_buf_reg[31]_0 [12]),
        .I4(sect_cnt_reg[13]),
        .I5(\end_addr_buf_reg[31]_0 [13]),
        .O(fifo_rreq_valid_buf_reg[0]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_1__0
       (.I0(\end_addr_buf_reg[31]_0 [11]),
        .I1(sect_cnt_reg[11]),
        .I2(sect_cnt_reg[9]),
        .I3(\end_addr_buf_reg[31]_0 [9]),
        .I4(sect_cnt_reg[10]),
        .I5(\end_addr_buf_reg[31]_0 [10]),
        .O(S[3]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_2__0
       (.I0(sect_cnt_reg[6]),
        .I1(\end_addr_buf_reg[31]_0 [6]),
        .I2(sect_cnt_reg[7]),
        .I3(\end_addr_buf_reg[31]_0 [7]),
        .I4(\end_addr_buf_reg[31]_0 [8]),
        .I5(sect_cnt_reg[8]),
        .O(S[2]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_3__0
       (.I0(\end_addr_buf_reg[31]_0 [4]),
        .I1(sect_cnt_reg[4]),
        .I2(sect_cnt_reg[5]),
        .I3(\end_addr_buf_reg[31]_0 [5]),
        .I4(sect_cnt_reg[3]),
        .I5(\end_addr_buf_reg[31]_0 [3]),
        .O(S[1]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_4__0
       (.I0(\end_addr_buf_reg[31]_0 [2]),
        .I1(sect_cnt_reg[2]),
        .I2(sect_cnt_reg[1]),
        .I3(\end_addr_buf_reg[31]_0 [1]),
        .I4(sect_cnt_reg[0]),
        .I5(\end_addr_buf_reg[31]_0 [0]),
        .O(S[0]));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][0]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][0]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [0]),
        .Q(\mem_reg[4][0]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][10]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][10]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [10]),
        .Q(\mem_reg[4][10]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][11]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][11]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [11]),
        .Q(\mem_reg[4][11]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][12]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][12]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [12]),
        .Q(\mem_reg[4][12]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][13]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][13]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [13]),
        .Q(\mem_reg[4][13]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][14]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][14]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [14]),
        .Q(\mem_reg[4][14]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][15]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][15]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [15]),
        .Q(\mem_reg[4][15]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][16]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][16]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [16]),
        .Q(\mem_reg[4][16]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][17]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][17]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [17]),
        .Q(\mem_reg[4][17]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][18]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][18]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [18]),
        .Q(\mem_reg[4][18]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][19]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][19]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [19]),
        .Q(\mem_reg[4][19]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][1]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][1]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [1]),
        .Q(\mem_reg[4][1]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][20]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][20]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [20]),
        .Q(\mem_reg[4][20]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][21]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][21]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [21]),
        .Q(\mem_reg[4][21]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][22]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][22]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [22]),
        .Q(\mem_reg[4][22]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][23]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][23]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [23]),
        .Q(\mem_reg[4][23]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][24]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][24]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [24]),
        .Q(\mem_reg[4][24]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][25]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][25]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [25]),
        .Q(\mem_reg[4][25]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][26]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][26]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [26]),
        .Q(\mem_reg[4][26]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][27]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][27]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [27]),
        .Q(\mem_reg[4][27]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][28]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][28]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [28]),
        .Q(\mem_reg[4][28]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][29]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][29]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [29]),
        .Q(\mem_reg[4][29]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][2]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][2]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [2]),
        .Q(\mem_reg[4][2]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][38]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][38]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(1'b1),
        .Q(\mem_reg[4][38]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][3]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][3]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [3]),
        .Q(\mem_reg[4][3]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][4]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][4]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [4]),
        .Q(\mem_reg[4][4]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][5]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][5]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [5]),
        .Q(\mem_reg[4][5]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][6]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][6]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [6]),
        .Q(\mem_reg[4][6]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][7]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][7]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [7]),
        .Q(\mem_reg[4][7]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][8]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][8]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [8]),
        .Q(\mem_reg[4][8]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_B_m_axi_U/bus_read/fifo_rreq/mem_reg[4][9]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][9]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [9]),
        .Q(\mem_reg[4][9]_srl5_n_2 ));
  LUT6 #(
    .INIT(64'hF00FFFFF0EF00000)) 
    \pout[0]_i_1__0 
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[2] ),
        .I2(push),
        .I3(pop0),
        .I4(data_vld_reg_n_2),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[0]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'hDFDF2020F7F70800)) 
    \pout[1]_i_1__0 
       (.I0(data_vld_reg_n_2),
        .I1(pop0),
        .I2(push),
        .I3(\pout_reg_n_2_[2] ),
        .I4(\pout_reg_n_2_[1] ),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[1]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'hDF20FF00FF00F700)) 
    \pout[2]_i_1__0 
       (.I0(data_vld_reg_n_2),
        .I1(pop0),
        .I2(push),
        .I3(\pout_reg_n_2_[2] ),
        .I4(\pout_reg_n_2_[1] ),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[2]_i_1__0_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[0]_i_1__0_n_2 ),
        .Q(\pout_reg_n_2_[0] ),
        .R(SR));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[1]_i_1__0_n_2 ),
        .Q(\pout_reg_n_2_[1] ),
        .R(SR));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[2]_i_1__0_n_2 ),
        .Q(\pout_reg_n_2_[2] ),
        .R(SR));
  FDRE \q_reg[0] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][0]_srl5_n_2 ),
        .Q(invalid_len_event_reg[0]),
        .R(SR));
  FDRE \q_reg[10] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][10]_srl5_n_2 ),
        .Q(invalid_len_event_reg[10]),
        .R(SR));
  FDRE \q_reg[11] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][11]_srl5_n_2 ),
        .Q(invalid_len_event_reg[11]),
        .R(SR));
  FDRE \q_reg[12] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][12]_srl5_n_2 ),
        .Q(invalid_len_event_reg[12]),
        .R(SR));
  FDRE \q_reg[13] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][13]_srl5_n_2 ),
        .Q(invalid_len_event_reg[13]),
        .R(SR));
  FDRE \q_reg[14] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][14]_srl5_n_2 ),
        .Q(invalid_len_event_reg[14]),
        .R(SR));
  FDRE \q_reg[15] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][15]_srl5_n_2 ),
        .Q(invalid_len_event_reg[15]),
        .R(SR));
  FDRE \q_reg[16] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][16]_srl5_n_2 ),
        .Q(invalid_len_event_reg[16]),
        .R(SR));
  FDRE \q_reg[17] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][17]_srl5_n_2 ),
        .Q(invalid_len_event_reg[17]),
        .R(SR));
  FDRE \q_reg[18] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][18]_srl5_n_2 ),
        .Q(invalid_len_event_reg[18]),
        .R(SR));
  FDRE \q_reg[19] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][19]_srl5_n_2 ),
        .Q(invalid_len_event_reg[19]),
        .R(SR));
  FDRE \q_reg[1] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][1]_srl5_n_2 ),
        .Q(invalid_len_event_reg[1]),
        .R(SR));
  FDRE \q_reg[20] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][20]_srl5_n_2 ),
        .Q(invalid_len_event_reg[20]),
        .R(SR));
  FDRE \q_reg[21] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][21]_srl5_n_2 ),
        .Q(invalid_len_event_reg[21]),
        .R(SR));
  FDRE \q_reg[22] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][22]_srl5_n_2 ),
        .Q(invalid_len_event_reg[22]),
        .R(SR));
  FDRE \q_reg[23] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][23]_srl5_n_2 ),
        .Q(invalid_len_event_reg[23]),
        .R(SR));
  FDRE \q_reg[24] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][24]_srl5_n_2 ),
        .Q(invalid_len_event_reg[24]),
        .R(SR));
  FDRE \q_reg[25] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][25]_srl5_n_2 ),
        .Q(invalid_len_event_reg[25]),
        .R(SR));
  FDRE \q_reg[26] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][26]_srl5_n_2 ),
        .Q(invalid_len_event_reg[26]),
        .R(SR));
  FDRE \q_reg[27] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][27]_srl5_n_2 ),
        .Q(invalid_len_event_reg[27]),
        .R(SR));
  FDRE \q_reg[28] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][28]_srl5_n_2 ),
        .Q(invalid_len_event_reg[28]),
        .R(SR));
  FDRE \q_reg[29] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][29]_srl5_n_2 ),
        .Q(invalid_len_event_reg[29]),
        .R(SR));
  FDRE \q_reg[2] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][2]_srl5_n_2 ),
        .Q(invalid_len_event_reg[2]),
        .R(SR));
  FDRE \q_reg[38] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][38]_srl5_n_2 ),
        .Q(invalid_len_event_reg[30]),
        .R(SR));
  FDRE \q_reg[3] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][3]_srl5_n_2 ),
        .Q(invalid_len_event_reg[3]),
        .R(SR));
  FDRE \q_reg[4] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][4]_srl5_n_2 ),
        .Q(invalid_len_event_reg[4]),
        .R(SR));
  FDRE \q_reg[5] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][5]_srl5_n_2 ),
        .Q(invalid_len_event_reg[5]),
        .R(SR));
  FDRE \q_reg[6] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][6]_srl5_n_2 ),
        .Q(invalid_len_event_reg[6]),
        .R(SR));
  FDRE \q_reg[7] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][7]_srl5_n_2 ),
        .Q(invalid_len_event_reg[7]),
        .R(SR));
  FDRE \q_reg[8] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][8]_srl5_n_2 ),
        .Q(invalid_len_event_reg[8]),
        .R(SR));
  FDRE \q_reg[9] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][9]_srl5_n_2 ),
        .Q(invalid_len_event_reg[9]),
        .R(SR));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_3__0 
       (.I0(sect_cnt_reg[3]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[3]),
        .O(\sect_cnt[0]_i_3__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_4__0 
       (.I0(sect_cnt_reg[2]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[2]),
        .O(\sect_cnt[0]_i_4__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_5__0 
       (.I0(sect_cnt_reg[1]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[1]),
        .O(\sect_cnt[0]_i_5__0_n_2 ));
  LUT3 #(
    .INIT(8'h3A)) 
    \sect_cnt[0]_i_6__0 
       (.I0(Q[0]),
        .I1(sect_cnt_reg[0]),
        .I2(\start_addr_buf[31]_i_2__0_n_2 ),
        .O(\sect_cnt[0]_i_6__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_2__0 
       (.I0(sect_cnt_reg[15]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[15]),
        .O(\sect_cnt[12]_i_2__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_3__0 
       (.I0(sect_cnt_reg[14]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[14]),
        .O(\sect_cnt[12]_i_3__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_4__0 
       (.I0(sect_cnt_reg[13]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[13]),
        .O(\sect_cnt[12]_i_4__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_5__0 
       (.I0(sect_cnt_reg[12]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[12]),
        .O(\sect_cnt[12]_i_5__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_2__0 
       (.I0(sect_cnt_reg[19]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[19]),
        .O(\sect_cnt[16]_i_2__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_3__0 
       (.I0(sect_cnt_reg[18]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[18]),
        .O(\sect_cnt[16]_i_3__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_4__0 
       (.I0(sect_cnt_reg[17]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[17]),
        .O(\sect_cnt[16]_i_4__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_5__0 
       (.I0(sect_cnt_reg[16]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[16]),
        .O(\sect_cnt[16]_i_5__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_2__0 
       (.I0(sect_cnt_reg[7]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[7]),
        .O(\sect_cnt[4]_i_2__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_3__0 
       (.I0(sect_cnt_reg[6]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[6]),
        .O(\sect_cnt[4]_i_3__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_4__0 
       (.I0(sect_cnt_reg[5]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[5]),
        .O(\sect_cnt[4]_i_4__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_5__0 
       (.I0(sect_cnt_reg[4]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[4]),
        .O(\sect_cnt[4]_i_5__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_2__0 
       (.I0(sect_cnt_reg[11]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[11]),
        .O(\sect_cnt[8]_i_2__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_3__0 
       (.I0(sect_cnt_reg[10]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[10]),
        .O(\sect_cnt[8]_i_3__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_4__0 
       (.I0(sect_cnt_reg[9]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[9]),
        .O(\sect_cnt[8]_i_4__0_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_5__0 
       (.I0(sect_cnt_reg[8]),
        .I1(\start_addr_buf[31]_i_2__0_n_2 ),
        .I2(Q[8]),
        .O(\sect_cnt[8]_i_5__0_n_2 ));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[0]_i_2__0 
       (.CI(1'b0),
        .CO({\sect_cnt_reg[0]_i_2__0_n_2 ,\sect_cnt_reg[0]_i_2__0_n_3 ,\sect_cnt_reg[0]_i_2__0_n_4 ,\sect_cnt_reg[0]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\start_addr_buf[31]_i_2__0_n_2 }),
        .O(O),
        .S({\sect_cnt[0]_i_3__0_n_2 ,\sect_cnt[0]_i_4__0_n_2 ,\sect_cnt[0]_i_5__0_n_2 ,\sect_cnt[0]_i_6__0_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[12]_i_1__0 
       (.CI(\sect_cnt_reg[8]_i_1__0_n_2 ),
        .CO({\sect_cnt_reg[12]_i_1__0_n_2 ,\sect_cnt_reg[12]_i_1__0_n_3 ,\sect_cnt_reg[12]_i_1__0_n_4 ,\sect_cnt_reg[12]_i_1__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[15] ),
        .S({\sect_cnt[12]_i_2__0_n_2 ,\sect_cnt[12]_i_3__0_n_2 ,\sect_cnt[12]_i_4__0_n_2 ,\sect_cnt[12]_i_5__0_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[16]_i_1__0 
       (.CI(\sect_cnt_reg[12]_i_1__0_n_2 ),
        .CO({\NLW_sect_cnt_reg[16]_i_1__0_CO_UNCONNECTED [3],\sect_cnt_reg[16]_i_1__0_n_3 ,\sect_cnt_reg[16]_i_1__0_n_4 ,\sect_cnt_reg[16]_i_1__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[19] ),
        .S({\sect_cnt[16]_i_2__0_n_2 ,\sect_cnt[16]_i_3__0_n_2 ,\sect_cnt[16]_i_4__0_n_2 ,\sect_cnt[16]_i_5__0_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[4]_i_1__0 
       (.CI(\sect_cnt_reg[0]_i_2__0_n_2 ),
        .CO({\sect_cnt_reg[4]_i_1__0_n_2 ,\sect_cnt_reg[4]_i_1__0_n_3 ,\sect_cnt_reg[4]_i_1__0_n_4 ,\sect_cnt_reg[4]_i_1__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[7] ),
        .S({\sect_cnt[4]_i_2__0_n_2 ,\sect_cnt[4]_i_3__0_n_2 ,\sect_cnt[4]_i_4__0_n_2 ,\sect_cnt[4]_i_5__0_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[8]_i_1__0 
       (.CI(\sect_cnt_reg[4]_i_1__0_n_2 ),
        .CO({\sect_cnt_reg[8]_i_1__0_n_2 ,\sect_cnt_reg[8]_i_1__0_n_3 ,\sect_cnt_reg[8]_i_1__0_n_4 ,\sect_cnt_reg[8]_i_1__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[11] ),
        .S({\sect_cnt[8]_i_2__0_n_2 ,\sect_cnt[8]_i_3__0_n_2 ,\sect_cnt[8]_i_4__0_n_2 ,\sect_cnt[8]_i_5__0_n_2 }));
  (* SOFT_HLUTNM = "soft_lutpair150" *) 
  LUT4 #(
    .INIT(16'h80AA)) 
    \start_addr[31]_i_1__0 
       (.I0(fifo_rreq_valid),
        .I1(\end_addr_buf_reg[31] ),
        .I2(p_15_in),
        .I3(rreq_handling_reg),
        .O(\align_len_reg[7] ));
  LUT1 #(
    .INIT(2'h1)) 
    \start_addr_buf[31]_i_1__0 
       (.I0(\start_addr_buf[31]_i_2__0_n_2 ),
        .O(E));
  LUT6 #(
    .INIT(64'hABABFFABFFABFFAB)) 
    \start_addr_buf[31]_i_2__0 
       (.I0(invalid_len_event),
        .I1(fifo_rreq_valid),
        .I2(fifo_rreq_valid_buf_reg_1),
        .I3(rreq_handling_reg),
        .I4(p_15_in),
        .I5(\end_addr_buf_reg[31] ),
        .O(\start_addr_buf[31]_i_2__0_n_2 ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_fifo__parameterized1
   (\could_multi_bursts.loop_cnt_reg[5] ,
    p_15_in,
    \sect_addr_buf_reg[2] ,
    p_14_in,
    \could_multi_bursts.arlen_buf_reg[0] ,
    \could_multi_bursts.arlen_buf_reg[1] ,
    \could_multi_bursts.arlen_buf_reg[2] ,
    \could_multi_bursts.arlen_buf_reg[0]_0 ,
    \could_multi_bursts.arlen_buf_reg[3] ,
    \could_multi_bursts.sect_handling_reg ,
    \sect_len_buf_reg[9] ,
    \sect_len_buf_reg[8] ,
    \sect_len_buf_reg[7] ,
    \sect_len_buf_reg[6] ,
    \sect_len_buf_reg[5] ,
    \sect_len_buf_reg[4] ,
    \sect_len_buf_reg[3] ,
    \sect_len_buf_reg[2] ,
    \sect_len_buf_reg[1] ,
    \sect_len_buf_reg[0] ,
    invalid_len_event_reg,
    \sect_cnt_reg[0] ,
    \could_multi_bursts.ARVALID_Dummy_reg ,
    rreq_handling_reg,
    SR,
    ap_clk,
    ap_rst_n,
    CO,
    \dout_buf_reg[34] ,
    beat_valid,
    \could_multi_bursts.sect_handling_reg_0 ,
    m_axi_DATA_B_ARREADY,
    \could_multi_bursts.ARVALID_Dummy_reg_0 ,
    \sect_len_buf_reg[7]_0 ,
    \sect_len_buf_reg[0]_0 ,
    \sect_len_buf_reg[1]_0 ,
    \sect_len_buf_reg[2]_0 ,
    \sect_len_buf_reg[3]_0 ,
    rreq_handling_reg_0,
    Q,
    \start_addr_buf_reg[11] ,
    \beat_len_buf_reg[9] ,
    \end_addr_buf_reg[31] ,
    fifo_rreq_valid_buf_reg,
    fifo_rreq_valid,
    invalid_len_event);
  output [0:0]\could_multi_bursts.loop_cnt_reg[5] ;
  output p_15_in;
  output [0:0]\sect_addr_buf_reg[2] ;
  output p_14_in;
  output \could_multi_bursts.arlen_buf_reg[0] ;
  output \could_multi_bursts.arlen_buf_reg[1] ;
  output \could_multi_bursts.arlen_buf_reg[2] ;
  output \could_multi_bursts.arlen_buf_reg[0]_0 ;
  output \could_multi_bursts.arlen_buf_reg[3] ;
  output \could_multi_bursts.sect_handling_reg ;
  output \sect_len_buf_reg[9] ;
  output \sect_len_buf_reg[8] ;
  output \sect_len_buf_reg[7] ;
  output \sect_len_buf_reg[6] ;
  output \sect_len_buf_reg[5] ;
  output \sect_len_buf_reg[4] ;
  output \sect_len_buf_reg[3] ;
  output \sect_len_buf_reg[2] ;
  output \sect_len_buf_reg[1] ;
  output \sect_len_buf_reg[0] ;
  output invalid_len_event_reg;
  output \sect_cnt_reg[0] ;
  output \could_multi_bursts.ARVALID_Dummy_reg ;
  output rreq_handling_reg;
  input [0:0]SR;
  input ap_clk;
  input ap_rst_n;
  input [0:0]CO;
  input [0:0]\dout_buf_reg[34] ;
  input beat_valid;
  input \could_multi_bursts.sect_handling_reg_0 ;
  input m_axi_DATA_B_ARREADY;
  input \could_multi_bursts.ARVALID_Dummy_reg_0 ;
  input \sect_len_buf_reg[7]_0 ;
  input \sect_len_buf_reg[0]_0 ;
  input \sect_len_buf_reg[1]_0 ;
  input \sect_len_buf_reg[2]_0 ;
  input \sect_len_buf_reg[3]_0 ;
  input rreq_handling_reg_0;
  input [9:0]Q;
  input [9:0]\start_addr_buf_reg[11] ;
  input [2:0]\beat_len_buf_reg[9] ;
  input [0:0]\end_addr_buf_reg[31] ;
  input fifo_rreq_valid_buf_reg;
  input fifo_rreq_valid;
  input invalid_len_event;

  wire [0:0]CO;
  wire [9:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire [2:0]\beat_len_buf_reg[9] ;
  wire beat_valid;
  wire \could_multi_bursts.ARVALID_Dummy_reg ;
  wire \could_multi_bursts.ARVALID_Dummy_reg_0 ;
  wire \could_multi_bursts.arlen_buf_reg[0] ;
  wire \could_multi_bursts.arlen_buf_reg[0]_0 ;
  wire \could_multi_bursts.arlen_buf_reg[1] ;
  wire \could_multi_bursts.arlen_buf_reg[2] ;
  wire \could_multi_bursts.arlen_buf_reg[3] ;
  wire [0:0]\could_multi_bursts.loop_cnt_reg[5] ;
  wire \could_multi_bursts.sect_handling_reg ;
  wire \could_multi_bursts.sect_handling_reg_0 ;
  wire data_vld_i_1__2_n_2;
  wire data_vld_reg_n_2;
  wire [0:0]\dout_buf_reg[34] ;
  wire empty_n_i_1__2_n_2;
  wire empty_n_reg_n_2;
  wire [0:0]\end_addr_buf_reg[31] ;
  wire fifo_rctl_ready;
  wire fifo_rreq_valid;
  wire fifo_rreq_valid_buf_reg;
  wire full_n_i_1__0_n_2;
  wire full_n_i_2__9_n_2;
  wire invalid_len_event;
  wire invalid_len_event_reg;
  wire m_axi_DATA_B_ARREADY;
  wire p_14_in;
  wire p_15_in;
  wire \pout[0]_i_1__0_n_2 ;
  wire \pout[1]_i_1__0_n_2 ;
  wire \pout[2]_i_1__0_n_2 ;
  wire \pout[3]_i_1__0_n_2 ;
  wire \pout[3]_i_2__0_n_2 ;
  wire \pout[3]_i_3__0_n_2 ;
  wire \pout[3]_i_4__1_n_2 ;
  wire [3:0]pout_reg;
  wire rreq_handling_reg;
  wire rreq_handling_reg_0;
  wire [0:0]\sect_addr_buf_reg[2] ;
  wire \sect_cnt_reg[0] ;
  wire \sect_len_buf_reg[0] ;
  wire \sect_len_buf_reg[0]_0 ;
  wire \sect_len_buf_reg[1] ;
  wire \sect_len_buf_reg[1]_0 ;
  wire \sect_len_buf_reg[2] ;
  wire \sect_len_buf_reg[2]_0 ;
  wire \sect_len_buf_reg[3] ;
  wire \sect_len_buf_reg[3]_0 ;
  wire \sect_len_buf_reg[4] ;
  wire \sect_len_buf_reg[5] ;
  wire \sect_len_buf_reg[6] ;
  wire \sect_len_buf_reg[7] ;
  wire \sect_len_buf_reg[7]_0 ;
  wire \sect_len_buf_reg[8] ;
  wire \sect_len_buf_reg[9] ;
  wire [9:0]\start_addr_buf_reg[11] ;

  LUT4 #(
    .INIT(16'h8F88)) 
    \could_multi_bursts.ARVALID_Dummy_i_1 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .O(\could_multi_bursts.ARVALID_Dummy_reg ));
  (* SOFT_HLUTNM = "soft_lutpair147" *) 
  LUT4 #(
    .INIT(16'hD000)) 
    \could_multi_bursts.araddr_buf[31]_i_1__0 
       (.I0(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I1(m_axi_DATA_B_ARREADY),
        .I2(\could_multi_bursts.sect_handling_reg_0 ),
        .I3(fifo_rctl_ready),
        .O(p_14_in));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[0]_i_1__0 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[0]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[0] ));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[1]_i_1__0 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[1]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[1] ));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[2]_i_1__0 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[2]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[2] ));
  (* SOFT_HLUTNM = "soft_lutpair147" *) 
  LUT4 #(
    .INIT(16'h8088)) 
    \could_multi_bursts.arlen_buf[3]_i_1__0 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[0]_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF80880000)) 
    \could_multi_bursts.arlen_buf[3]_i_2__0 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(\sect_len_buf_reg[3]_0 ),
        .O(\could_multi_bursts.arlen_buf_reg[3] ));
  (* SOFT_HLUTNM = "soft_lutpair149" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \could_multi_bursts.loop_cnt[5]_i_1__0 
       (.I0(p_15_in),
        .I1(ap_rst_n),
        .O(\could_multi_bursts.loop_cnt_reg[5] ));
  LUT6 #(
    .INIT(64'hFFFFFFFFCCCC4C44)) 
    \could_multi_bursts.sect_handling_i_1__1 
       (.I0(fifo_rctl_ready),
        .I1(\could_multi_bursts.sect_handling_reg_0 ),
        .I2(m_axi_DATA_B_ARREADY),
        .I3(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I4(\sect_len_buf_reg[7]_0 ),
        .I5(rreq_handling_reg_0),
        .O(\could_multi_bursts.sect_handling_reg ));
  LUT6 #(
    .INIT(64'hBAFAFAFABABABABA)) 
    data_vld_i_1__2
       (.I0(p_14_in),
        .I1(\pout[3]_i_3__0_n_2 ),
        .I2(data_vld_reg_n_2),
        .I3(\dout_buf_reg[34] ),
        .I4(beat_valid),
        .I5(empty_n_reg_n_2),
        .O(data_vld_i_1__2_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__2_n_2),
        .Q(data_vld_reg_n_2),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair145" *) 
  LUT4 #(
    .INIT(16'hFF2A)) 
    empty_n_i_1__2
       (.I0(empty_n_reg_n_2),
        .I1(beat_valid),
        .I2(\dout_buf_reg[34] ),
        .I3(data_vld_reg_n_2),
        .O(empty_n_i_1__2_n_2));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1__2_n_2),
        .Q(empty_n_reg_n_2),
        .R(SR));
  LUT6 #(
    .INIT(64'hFBBBBBBBFBFBFBFB)) 
    full_n_i_1__0
       (.I0(full_n_i_2__9_n_2),
        .I1(ap_rst_n),
        .I2(data_vld_reg_n_2),
        .I3(\dout_buf_reg[34] ),
        .I4(beat_valid),
        .I5(empty_n_reg_n_2),
        .O(full_n_i_1__0_n_2));
  LUT6 #(
    .INIT(64'hAA8AAAAAAAAAAAAA)) 
    full_n_i_2__9
       (.I0(fifo_rctl_ready),
        .I1(\pout[3]_i_4__1_n_2 ),
        .I2(pout_reg[0]),
        .I3(pout_reg[1]),
        .I4(pout_reg[3]),
        .I5(pout_reg[2]),
        .O(full_n_i_2__9_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1__0_n_2),
        .Q(fifo_rctl_ready),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair144" *) 
  LUT3 #(
    .INIT(8'h2A)) 
    invalid_len_event_i_2__0
       (.I0(rreq_handling_reg_0),
        .I1(p_15_in),
        .I2(\end_addr_buf_reg[31] ),
        .O(invalid_len_event_reg));
  LUT1 #(
    .INIT(2'h1)) 
    \pout[0]_i_1__0 
       (.I0(pout_reg[0]),
        .O(\pout[0]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair148" *) 
  LUT3 #(
    .INIT(8'h96)) 
    \pout[1]_i_1__0 
       (.I0(\pout[3]_i_4__1_n_2 ),
        .I1(pout_reg[0]),
        .I2(pout_reg[1]),
        .O(\pout[1]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair148" *) 
  LUT4 #(
    .INIT(16'hA96A)) 
    \pout[2]_i_1__0 
       (.I0(pout_reg[2]),
        .I1(pout_reg[1]),
        .I2(pout_reg[0]),
        .I3(\pout[3]_i_4__1_n_2 ),
        .O(\pout[2]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'h0CCC000051110000)) 
    \pout[3]_i_1__0 
       (.I0(\pout[3]_i_3__0_n_2 ),
        .I1(empty_n_reg_n_2),
        .I2(beat_valid),
        .I3(\dout_buf_reg[34] ),
        .I4(data_vld_reg_n_2),
        .I5(p_14_in),
        .O(\pout[3]_i_1__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair146" *) 
  LUT5 #(
    .INIT(32'h9AAAAAA6)) 
    \pout[3]_i_2__0 
       (.I0(pout_reg[3]),
        .I1(\pout[3]_i_4__1_n_2 ),
        .I2(pout_reg[0]),
        .I3(pout_reg[1]),
        .I4(pout_reg[2]),
        .O(\pout[3]_i_2__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair146" *) 
  LUT4 #(
    .INIT(16'h0001)) 
    \pout[3]_i_3__0 
       (.I0(pout_reg[0]),
        .I1(pout_reg[1]),
        .I2(pout_reg[3]),
        .I3(pout_reg[2]),
        .O(\pout[3]_i_3__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair145" *) 
  LUT5 #(
    .INIT(32'hF777FFFF)) 
    \pout[3]_i_4__1 
       (.I0(p_14_in),
        .I1(data_vld_reg_n_2),
        .I2(\dout_buf_reg[34] ),
        .I3(beat_valid),
        .I4(empty_n_reg_n_2),
        .O(\pout[3]_i_4__1_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__0_n_2 ),
        .D(\pout[0]_i_1__0_n_2 ),
        .Q(pout_reg[0]),
        .R(SR));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__0_n_2 ),
        .D(\pout[1]_i_1__0_n_2 ),
        .Q(pout_reg[1]),
        .R(SR));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__0_n_2 ),
        .D(\pout[2]_i_1__0_n_2 ),
        .Q(pout_reg[2]),
        .R(SR));
  FDRE \pout_reg[3] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__0_n_2 ),
        .D(\pout[3]_i_2__0_n_2 ),
        .Q(pout_reg[3]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair144" *) 
  LUT5 #(
    .INIT(32'h7070FF70)) 
    rreq_handling_i_1__0
       (.I0(\end_addr_buf_reg[31] ),
        .I1(p_15_in),
        .I2(rreq_handling_reg_0),
        .I3(fifo_rreq_valid_buf_reg),
        .I4(invalid_len_event),
        .O(rreq_handling_reg));
  (* SOFT_HLUTNM = "soft_lutpair149" *) 
  LUT3 #(
    .INIT(8'h4F)) 
    \sect_addr_buf[11]_i_1__0 
       (.I0(CO),
        .I1(p_15_in),
        .I2(ap_rst_n),
        .O(\sect_addr_buf_reg[2] ));
  LUT5 #(
    .INIT(32'hAAAABBBA)) 
    \sect_cnt[0]_i_1__0 
       (.I0(p_15_in),
        .I1(rreq_handling_reg_0),
        .I2(fifo_rreq_valid_buf_reg),
        .I3(fifo_rreq_valid),
        .I4(invalid_len_event),
        .O(\sect_cnt_reg[0] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[0]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [0]),
        .I1(Q[0]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[0] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[1]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [1]),
        .I1(Q[1]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[1] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[2]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [2]),
        .I1(Q[2]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[2] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[3]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [3]),
        .I1(Q[3]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[3] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[4]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [4]),
        .I1(Q[4]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[4] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[5]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [5]),
        .I1(Q[5]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[5] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[6]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [6]),
        .I1(Q[6]),
        .I2(\beat_len_buf_reg[9] [1]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[6] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[7]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [7]),
        .I1(Q[7]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[7] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[8]_i_1__0 
       (.I0(\start_addr_buf_reg[11] [8]),
        .I1(Q[8]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[8] ));
  LUT6 #(
    .INIT(64'h0A0A0A0A8A0A8A8A)) 
    \sect_len_buf[9]_i_1__0 
       (.I0(rreq_handling_reg_0),
        .I1(fifo_rctl_ready),
        .I2(\could_multi_bursts.sect_handling_reg_0 ),
        .I3(m_axi_DATA_B_ARREADY),
        .I4(\could_multi_bursts.ARVALID_Dummy_reg_0 ),
        .I5(\sect_len_buf_reg[7]_0 ),
        .O(p_15_in));
  LUT6 #(
    .INIT(64'hF033F033AAFFAAAA)) 
    \sect_len_buf[9]_i_2__0 
       (.I0(Q[9]),
        .I1(\start_addr_buf_reg[11] [9]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(p_15_in),
        .I5(CO),
        .O(\sect_len_buf_reg[9] ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi_read" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_read
   (m_axi_DATA_B_RREADY,
    ap_reg_ioackin_DATA_B_ARREADY_reg,
    s_ready_t_reg,
    ap_reg_ioackin_DATA_A_ARREADY_reg,
    \ap_CS_fsm_reg[1] ,
    m_axi_DATA_B_ARADDR,
    ARLEN,
    m_axi_DATA_B_ARVALID,
    rdata_valid,
    \DATA_B_addr_read_reg_282_reg[31] ,
    ap_rst_n,
    m_axi_DATA_B_RVALID,
    Q,
    ap_reg_ioackin_DATA_B_ARREADY_reg_0,
    ap_reg_ioackin_DATA_A_ARREADY,
    DATA_A_ARREADY,
    m_axi_DATA_B_ARREADY,
    ap_clk,
    D,
    m_axi_DATA_B_RRESP,
    SR,
    \b3_reg_241_reg[29] ,
    \ap_CS_fsm_reg[8] ,
    \exitcond_reg_268_reg[0] ,
    ap_enable_reg_pp0_iter1_reg,
    DATA_A_RREADY);
  output m_axi_DATA_B_RREADY;
  output ap_reg_ioackin_DATA_B_ARREADY_reg;
  output s_ready_t_reg;
  output ap_reg_ioackin_DATA_A_ARREADY_reg;
  output \ap_CS_fsm_reg[1] ;
  output [29:0]m_axi_DATA_B_ARADDR;
  output [3:0]ARLEN;
  output m_axi_DATA_B_ARVALID;
  output rdata_valid;
  output [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  input ap_rst_n;
  input m_axi_DATA_B_RVALID;
  input [0:0]Q;
  input ap_reg_ioackin_DATA_B_ARREADY_reg_0;
  input ap_reg_ioackin_DATA_A_ARREADY;
  input DATA_A_ARREADY;
  input m_axi_DATA_B_ARREADY;
  input ap_clk;
  input [32:0]D;
  input [1:0]m_axi_DATA_B_RRESP;
  input [0:0]SR;
  input [29:0]\b3_reg_241_reg[29] ;
  input \ap_CS_fsm_reg[8] ;
  input \exitcond_reg_268_reg[0] ;
  input ap_enable_reg_pp0_iter1_reg;
  input DATA_A_RREADY;

  wire [3:0]ARLEN;
  wire [32:0]D;
  wire DATA_A_ARREADY;
  wire DATA_A_RREADY;
  wire [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire [0:0]Q;
  wire [0:0]SR;
  wire align_len;
  wire [31:7]align_len0;
  wire align_len0_carry_n_3;
  wire align_len0_carry_n_4;
  wire align_len0_carry_n_5;
  wire \align_len_reg_n_2_[31] ;
  wire \align_len_reg_n_2_[7] ;
  wire \align_len_reg_n_2_[8] ;
  wire \ap_CS_fsm_reg[1] ;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter1_reg;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_A_ARREADY_reg;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg_0;
  wire ap_rst_n;
  wire [31:2]araddr_tmp;
  wire [29:0]\b3_reg_241_reg[29] ;
  wire [9:5]beat_len_buf;
  wire beat_valid;
  wire buff_rdata_n_14;
  wire buff_rdata_n_15;
  wire buff_rdata_n_16;
  wire buff_rdata_n_18;
  wire buff_rdata_n_19;
  wire buff_rdata_n_21;
  wire buff_rdata_n_22;
  wire buff_rdata_n_23;
  wire buff_rdata_n_24;
  wire buff_rdata_n_25;
  wire buff_rdata_n_26;
  wire buff_rdata_n_27;
  wire buff_rdata_n_28;
  wire buff_rdata_n_29;
  wire buff_rdata_n_30;
  wire buff_rdata_n_31;
  wire buff_rdata_n_32;
  wire buff_rdata_n_33;
  wire buff_rdata_n_34;
  wire buff_rdata_n_35;
  wire buff_rdata_n_36;
  wire buff_rdata_n_37;
  wire buff_rdata_n_38;
  wire buff_rdata_n_39;
  wire buff_rdata_n_4;
  wire buff_rdata_n_40;
  wire buff_rdata_n_41;
  wire buff_rdata_n_42;
  wire buff_rdata_n_43;
  wire buff_rdata_n_44;
  wire buff_rdata_n_45;
  wire buff_rdata_n_46;
  wire buff_rdata_n_47;
  wire buff_rdata_n_48;
  wire buff_rdata_n_49;
  wire buff_rdata_n_5;
  wire buff_rdata_n_50;
  wire buff_rdata_n_51;
  wire buff_rdata_n_52;
  wire buff_rdata_n_6;
  wire buff_rdata_n_7;
  wire \bus_equal_gen.data_buf_reg_n_2_[0] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[10] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[11] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[12] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[13] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[14] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[15] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[16] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[17] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[18] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[19] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[1] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[20] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[21] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[22] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[23] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[24] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[25] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[26] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[27] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[28] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[29] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[2] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[30] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[31] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[3] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[4] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[5] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[6] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[7] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[8] ;
  wire \bus_equal_gen.data_buf_reg_n_2_[9] ;
  wire \bus_equal_gen.rdata_valid_t_reg_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[12]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[16]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[20]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[24]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[28]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[31]_i_7__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[4]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[4]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[4]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_3__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_4__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_5__0_n_2 ;
  wire \could_multi_bursts.araddr_buf[8]_i_6__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[31]_i_3__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[31]_i_3__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_5 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_2 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_3 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_4 ;
  wire \could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_5 ;
  wire [5:0]\could_multi_bursts.loop_cnt_reg ;
  wire \could_multi_bursts.sect_handling_reg_n_2 ;
  wire [19:0]data;
  wire [31:2]data1;
  wire [34:34]data_pack;
  wire [31:2]end_addr;
  wire \end_addr_buf_reg_n_2_[10] ;
  wire \end_addr_buf_reg_n_2_[11] ;
  wire \end_addr_buf_reg_n_2_[2] ;
  wire \end_addr_buf_reg_n_2_[3] ;
  wire \end_addr_buf_reg_n_2_[4] ;
  wire \end_addr_buf_reg_n_2_[5] ;
  wire \end_addr_buf_reg_n_2_[6] ;
  wire \end_addr_buf_reg_n_2_[7] ;
  wire \end_addr_buf_reg_n_2_[8] ;
  wire \end_addr_buf_reg_n_2_[9] ;
  wire end_addr_carry__0_i_1__0_n_2;
  wire end_addr_carry__0_i_2__0_n_2;
  wire end_addr_carry__0_i_3__0_n_2;
  wire end_addr_carry__0_i_4__0_n_2;
  wire end_addr_carry__0_n_2;
  wire end_addr_carry__0_n_3;
  wire end_addr_carry__0_n_4;
  wire end_addr_carry__0_n_5;
  wire end_addr_carry__1_i_1__0_n_2;
  wire end_addr_carry__1_i_2__0_n_2;
  wire end_addr_carry__1_i_3__0_n_2;
  wire end_addr_carry__1_i_4__0_n_2;
  wire end_addr_carry__1_n_2;
  wire end_addr_carry__1_n_3;
  wire end_addr_carry__1_n_4;
  wire end_addr_carry__1_n_5;
  wire end_addr_carry__2_i_1__0_n_2;
  wire end_addr_carry__2_i_2__0_n_2;
  wire end_addr_carry__2_i_3__0_n_2;
  wire end_addr_carry__2_i_4__0_n_2;
  wire end_addr_carry__2_n_2;
  wire end_addr_carry__2_n_3;
  wire end_addr_carry__2_n_4;
  wire end_addr_carry__2_n_5;
  wire end_addr_carry__3_i_1__0_n_2;
  wire end_addr_carry__3_i_2__0_n_2;
  wire end_addr_carry__3_i_3__0_n_2;
  wire end_addr_carry__3_i_4__0_n_2;
  wire end_addr_carry__3_n_2;
  wire end_addr_carry__3_n_3;
  wire end_addr_carry__3_n_4;
  wire end_addr_carry__3_n_5;
  wire end_addr_carry__4_i_1__0_n_2;
  wire end_addr_carry__4_i_2__0_n_2;
  wire end_addr_carry__4_i_3__0_n_2;
  wire end_addr_carry__4_i_4__0_n_2;
  wire end_addr_carry__4_n_2;
  wire end_addr_carry__4_n_3;
  wire end_addr_carry__4_n_4;
  wire end_addr_carry__4_n_5;
  wire end_addr_carry__5_i_1__0_n_2;
  wire end_addr_carry__5_i_2__0_n_2;
  wire end_addr_carry__5_i_3__0_n_2;
  wire end_addr_carry__5_i_4__0_n_2;
  wire end_addr_carry__5_n_2;
  wire end_addr_carry__5_n_3;
  wire end_addr_carry__5_n_4;
  wire end_addr_carry__5_n_5;
  wire end_addr_carry__6_i_1__0_n_2;
  wire end_addr_carry__6_i_2__0_n_2;
  wire end_addr_carry__6_n_5;
  wire end_addr_carry_i_1__0_n_2;
  wire end_addr_carry_i_2__0_n_2;
  wire end_addr_carry_i_3__0_n_2;
  wire end_addr_carry_i_4__0_n_2;
  wire end_addr_carry_n_2;
  wire end_addr_carry_n_3;
  wire end_addr_carry_n_4;
  wire end_addr_carry_n_5;
  wire \exitcond_reg_268_reg[0] ;
  wire fifo_rctl_n_10;
  wire fifo_rctl_n_11;
  wire fifo_rctl_n_12;
  wire fifo_rctl_n_13;
  wire fifo_rctl_n_14;
  wire fifo_rctl_n_15;
  wire fifo_rctl_n_16;
  wire fifo_rctl_n_17;
  wire fifo_rctl_n_18;
  wire fifo_rctl_n_19;
  wire fifo_rctl_n_2;
  wire fifo_rctl_n_20;
  wire fifo_rctl_n_21;
  wire fifo_rctl_n_22;
  wire fifo_rctl_n_23;
  wire fifo_rctl_n_24;
  wire fifo_rctl_n_25;
  wire fifo_rctl_n_4;
  wire fifo_rctl_n_6;
  wire fifo_rctl_n_7;
  wire fifo_rctl_n_8;
  wire fifo_rctl_n_9;
  wire [38:38]fifo_rreq_data;
  wire fifo_rreq_n_10;
  wire fifo_rreq_n_11;
  wire fifo_rreq_n_12;
  wire fifo_rreq_n_13;
  wire fifo_rreq_n_14;
  wire fifo_rreq_n_46;
  wire fifo_rreq_n_47;
  wire fifo_rreq_n_48;
  wire fifo_rreq_n_49;
  wire fifo_rreq_n_5;
  wire fifo_rreq_n_50;
  wire fifo_rreq_n_51;
  wire fifo_rreq_n_52;
  wire fifo_rreq_n_53;
  wire fifo_rreq_n_54;
  wire fifo_rreq_n_55;
  wire fifo_rreq_n_56;
  wire fifo_rreq_n_57;
  wire fifo_rreq_n_58;
  wire fifo_rreq_n_59;
  wire fifo_rreq_n_60;
  wire fifo_rreq_n_61;
  wire fifo_rreq_n_62;
  wire fifo_rreq_n_63;
  wire fifo_rreq_n_64;
  wire fifo_rreq_n_65;
  wire fifo_rreq_n_66;
  wire fifo_rreq_n_67;
  wire fifo_rreq_n_7;
  wire fifo_rreq_n_8;
  wire fifo_rreq_n_9;
  wire fifo_rreq_valid;
  wire fifo_rreq_valid_buf_reg_n_2;
  wire first_sect;
  wire first_sect_carry__0_i_1__0_n_2;
  wire first_sect_carry__0_i_2__0_n_2;
  wire first_sect_carry__0_i_3__0_n_2;
  wire first_sect_carry__0_n_4;
  wire first_sect_carry__0_n_5;
  wire first_sect_carry_i_1__0_n_2;
  wire first_sect_carry_i_2__0_n_2;
  wire first_sect_carry_i_3__0_n_2;
  wire first_sect_carry_i_4__0_n_2;
  wire first_sect_carry_n_2;
  wire first_sect_carry_n_3;
  wire first_sect_carry_n_4;
  wire first_sect_carry_n_5;
  wire invalid_len_event;
  wire last_sect;
  wire last_sect_carry__0_n_4;
  wire last_sect_carry__0_n_5;
  wire last_sect_carry_n_2;
  wire last_sect_carry_n_3;
  wire last_sect_carry_n_4;
  wire last_sect_carry_n_5;
  wire [29:0]m_axi_DATA_B_ARADDR;
  wire m_axi_DATA_B_ARREADY;
  wire m_axi_DATA_B_ARVALID;
  wire m_axi_DATA_B_RREADY;
  wire [1:0]m_axi_DATA_B_RRESP;
  wire m_axi_DATA_B_RVALID;
  wire next_beat;
  wire next_rreq;
  wire [5:0]p_0_in;
  wire [19:0]p_0_in0_in;
  wire [19:0]p_0_in_0;
  wire p_0_out_carry__0_n_4;
  wire p_0_out_carry__0_n_5;
  wire p_0_out_carry__0_n_7;
  wire p_0_out_carry__0_n_8;
  wire p_0_out_carry__0_n_9;
  wire p_0_out_carry_n_2;
  wire p_0_out_carry_n_3;
  wire p_0_out_carry_n_4;
  wire p_0_out_carry_n_5;
  wire p_0_out_carry_n_6;
  wire p_0_out_carry_n_7;
  wire p_0_out_carry_n_8;
  wire p_0_out_carry_n_9;
  wire p_14_in;
  wire p_15_in;
  wire push;
  wire [29:0]q;
  wire rdata_ack_t;
  wire rdata_valid;
  wire rreq_handling_reg_n_2;
  wire rs2f_rreq_ack;
  wire [29:0]rs2f_rreq_data;
  wire rs2f_rreq_valid;
  wire s_ready_t_reg;
  wire [31:2]sect_addr;
  wire \sect_addr_buf_reg_n_2_[10] ;
  wire \sect_addr_buf_reg_n_2_[11] ;
  wire \sect_addr_buf_reg_n_2_[12] ;
  wire \sect_addr_buf_reg_n_2_[13] ;
  wire \sect_addr_buf_reg_n_2_[14] ;
  wire \sect_addr_buf_reg_n_2_[15] ;
  wire \sect_addr_buf_reg_n_2_[16] ;
  wire \sect_addr_buf_reg_n_2_[17] ;
  wire \sect_addr_buf_reg_n_2_[18] ;
  wire \sect_addr_buf_reg_n_2_[19] ;
  wire \sect_addr_buf_reg_n_2_[20] ;
  wire \sect_addr_buf_reg_n_2_[21] ;
  wire \sect_addr_buf_reg_n_2_[22] ;
  wire \sect_addr_buf_reg_n_2_[23] ;
  wire \sect_addr_buf_reg_n_2_[24] ;
  wire \sect_addr_buf_reg_n_2_[25] ;
  wire \sect_addr_buf_reg_n_2_[26] ;
  wire \sect_addr_buf_reg_n_2_[27] ;
  wire \sect_addr_buf_reg_n_2_[28] ;
  wire \sect_addr_buf_reg_n_2_[29] ;
  wire \sect_addr_buf_reg_n_2_[2] ;
  wire \sect_addr_buf_reg_n_2_[30] ;
  wire \sect_addr_buf_reg_n_2_[31] ;
  wire \sect_addr_buf_reg_n_2_[3] ;
  wire \sect_addr_buf_reg_n_2_[4] ;
  wire \sect_addr_buf_reg_n_2_[5] ;
  wire \sect_addr_buf_reg_n_2_[6] ;
  wire \sect_addr_buf_reg_n_2_[7] ;
  wire \sect_addr_buf_reg_n_2_[8] ;
  wire \sect_addr_buf_reg_n_2_[9] ;
  wire [19:0]sect_cnt_reg;
  wire \sect_len_buf_reg_n_2_[0] ;
  wire \sect_len_buf_reg_n_2_[1] ;
  wire \sect_len_buf_reg_n_2_[2] ;
  wire \sect_len_buf_reg_n_2_[3] ;
  wire \sect_len_buf_reg_n_2_[4] ;
  wire \sect_len_buf_reg_n_2_[5] ;
  wire \sect_len_buf_reg_n_2_[6] ;
  wire \sect_len_buf_reg_n_2_[7] ;
  wire \sect_len_buf_reg_n_2_[8] ;
  wire \sect_len_buf_reg_n_2_[9] ;
  wire \start_addr_buf_reg_n_2_[10] ;
  wire \start_addr_buf_reg_n_2_[11] ;
  wire \start_addr_buf_reg_n_2_[2] ;
  wire \start_addr_buf_reg_n_2_[3] ;
  wire \start_addr_buf_reg_n_2_[4] ;
  wire \start_addr_buf_reg_n_2_[5] ;
  wire \start_addr_buf_reg_n_2_[6] ;
  wire \start_addr_buf_reg_n_2_[7] ;
  wire \start_addr_buf_reg_n_2_[8] ;
  wire \start_addr_buf_reg_n_2_[9] ;
  wire \start_addr_reg_n_2_[10] ;
  wire \start_addr_reg_n_2_[11] ;
  wire \start_addr_reg_n_2_[2] ;
  wire \start_addr_reg_n_2_[3] ;
  wire \start_addr_reg_n_2_[4] ;
  wire \start_addr_reg_n_2_[5] ;
  wire \start_addr_reg_n_2_[6] ;
  wire \start_addr_reg_n_2_[7] ;
  wire \start_addr_reg_n_2_[8] ;
  wire \start_addr_reg_n_2_[9] ;
  wire [5:0]usedw_reg;
  wire [3:3]NLW_align_len0_carry_CO_UNCONNECTED;
  wire [0:0]NLW_align_len0_carry_O_UNCONNECTED;
  wire [3:2]\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3__0_CO_UNCONNECTED ;
  wire [3:3]\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3__0_O_UNCONNECTED ;
  wire [0:0]\NLW_could_multi_bursts.araddr_buf_reg[4]_i_2__0_O_UNCONNECTED ;
  wire [0:0]NLW_end_addr_carry_O_UNCONNECTED;
  wire [3:1]NLW_end_addr_carry__6_CO_UNCONNECTED;
  wire [3:2]NLW_end_addr_carry__6_O_UNCONNECTED;
  wire [3:0]NLW_first_sect_carry_O_UNCONNECTED;
  wire [3:3]NLW_first_sect_carry__0_CO_UNCONNECTED;
  wire [3:0]NLW_first_sect_carry__0_O_UNCONNECTED;
  wire [3:0]NLW_last_sect_carry_O_UNCONNECTED;
  wire [3:3]NLW_last_sect_carry__0_CO_UNCONNECTED;
  wire [3:0]NLW_last_sect_carry__0_O_UNCONNECTED;
  wire [3:2]NLW_p_0_out_carry__0_CO_UNCONNECTED;
  wire [3:3]NLW_p_0_out_carry__0_O_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 align_len0_carry
       (.CI(1'b0),
        .CO({NLW_align_len0_carry_CO_UNCONNECTED[3],align_len0_carry_n_3,align_len0_carry_n_4,align_len0_carry_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,fifo_rreq_data,1'b0,1'b0}),
        .O({align_len0[31],align_len0[8:7],NLW_align_len0_carry_O_UNCONNECTED[0]}),
        .S({1'b1,fifo_rreq_n_14,1'b1,1'b1}));
  FDRE \align_len_reg[31] 
       (.C(ap_clk),
        .CE(align_len),
        .D(align_len0[31]),
        .Q(\align_len_reg_n_2_[31] ),
        .R(SR));
  FDRE \align_len_reg[7] 
       (.C(ap_clk),
        .CE(align_len),
        .D(align_len0[7]),
        .Q(\align_len_reg_n_2_[7] ),
        .R(SR));
  FDRE \align_len_reg[8] 
       (.C(ap_clk),
        .CE(align_len),
        .D(align_len0[8]),
        .Q(\align_len_reg_n_2_[8] ),
        .R(SR));
  FDRE \beat_len_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\align_len_reg_n_2_[7] ),
        .Q(beat_len_buf[5]),
        .R(SR));
  FDRE \beat_len_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\align_len_reg_n_2_[8] ),
        .Q(beat_len_buf[6]),
        .R(SR));
  FDRE \beat_len_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\align_len_reg_n_2_[31] ),
        .Q(beat_len_buf[9]),
        .R(SR));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_buffer__parameterized0 buff_rdata
       (.D(D),
        .DI(buff_rdata_n_18),
        .E(next_beat),
        .Q(usedw_reg),
        .S({buff_rdata_n_4,buff_rdata_n_5,buff_rdata_n_6,buff_rdata_n_7}),
        .SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .beat_valid(beat_valid),
        .\bus_equal_gen.rdata_valid_t_reg (buff_rdata_n_19),
        .\bus_equal_gen.rdata_valid_t_reg_0 (\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .full_n_reg_0({data_pack,buff_rdata_n_21,buff_rdata_n_22,buff_rdata_n_23,buff_rdata_n_24,buff_rdata_n_25,buff_rdata_n_26,buff_rdata_n_27,buff_rdata_n_28,buff_rdata_n_29,buff_rdata_n_30,buff_rdata_n_31,buff_rdata_n_32,buff_rdata_n_33,buff_rdata_n_34,buff_rdata_n_35,buff_rdata_n_36,buff_rdata_n_37,buff_rdata_n_38,buff_rdata_n_39,buff_rdata_n_40,buff_rdata_n_41,buff_rdata_n_42,buff_rdata_n_43,buff_rdata_n_44,buff_rdata_n_45,buff_rdata_n_46,buff_rdata_n_47,buff_rdata_n_48,buff_rdata_n_49,buff_rdata_n_50,buff_rdata_n_51,buff_rdata_n_52}),
        .m_axi_DATA_B_RREADY(m_axi_DATA_B_RREADY),
        .m_axi_DATA_B_RRESP(m_axi_DATA_B_RRESP),
        .m_axi_DATA_B_RVALID(m_axi_DATA_B_RVALID),
        .rdata_ack_t(rdata_ack_t),
        .\usedw_reg[5]_0 ({p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9,p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .\usedw_reg[7]_0 ({buff_rdata_n_14,buff_rdata_n_15,buff_rdata_n_16}));
  FDRE \bus_equal_gen.data_buf_reg[0] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_52),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[0] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_42),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[10] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_41),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[11] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_40),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[12] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_39),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[13] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_38),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[14] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_37),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[15] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_36),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[16] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_35),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[17] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_34),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[18] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_33),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[19] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[1] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_51),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[1] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_32),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[20] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_31),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[21] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_30),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[22] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_29),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[23] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_28),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[24] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_27),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[25] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_26),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[26] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_25),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[27] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_24),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[28] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_23),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[29] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_50),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[2] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_22),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[30] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_21),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[31] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_49),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[3] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_48),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[4] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_47),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[5] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_46),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[6] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_45),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[7] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_44),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[8] ),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_beat),
        .D(buff_rdata_n_43),
        .Q(\bus_equal_gen.data_buf_reg_n_2_[9] ),
        .R(1'b0));
  FDRE \bus_equal_gen.rdata_valid_t_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff_rdata_n_19),
        .Q(\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .R(SR));
  FDRE \could_multi_bursts.ARVALID_Dummy_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rctl_n_24),
        .Q(m_axi_DATA_B_ARVALID),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair162" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[10]_i_1__0 
       (.I0(data1[10]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[10] ),
        .O(araddr_tmp[10]));
  (* SOFT_HLUTNM = "soft_lutpair163" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[11]_i_1__0 
       (.I0(data1[11]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[11] ),
        .O(araddr_tmp[11]));
  (* SOFT_HLUTNM = "soft_lutpair163" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[12]_i_1__0 
       (.I0(data1[12]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[12] ),
        .O(araddr_tmp[12]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[10]),
        .O(\could_multi_bursts.araddr_buf[12]_i_3__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[9]),
        .O(\could_multi_bursts.araddr_buf[12]_i_4__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[8]),
        .O(\could_multi_bursts.araddr_buf[12]_i_5__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[12]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[7]),
        .O(\could_multi_bursts.araddr_buf[12]_i_6__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair162" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[13]_i_1__0 
       (.I0(data1[13]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[13] ),
        .O(araddr_tmp[13]));
  (* SOFT_HLUTNM = "soft_lutpair160" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[14]_i_1__0 
       (.I0(data1[14]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[14] ),
        .O(araddr_tmp[14]));
  (* SOFT_HLUTNM = "soft_lutpair161" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[15]_i_1__0 
       (.I0(data1[15]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[15] ),
        .O(araddr_tmp[15]));
  (* SOFT_HLUTNM = "soft_lutpair161" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[16]_i_1__0 
       (.I0(data1[16]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[16] ),
        .O(araddr_tmp[16]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[14]),
        .O(\could_multi_bursts.araddr_buf[16]_i_3__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[13]),
        .O(\could_multi_bursts.araddr_buf[16]_i_4__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[12]),
        .O(\could_multi_bursts.araddr_buf[16]_i_5__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[16]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[11]),
        .O(\could_multi_bursts.araddr_buf[16]_i_6__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair159" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[17]_i_1__0 
       (.I0(data1[17]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[17] ),
        .O(araddr_tmp[17]));
  (* SOFT_HLUTNM = "soft_lutpair158" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[18]_i_1__0 
       (.I0(data1[18]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[18] ),
        .O(araddr_tmp[18]));
  (* SOFT_HLUTNM = "soft_lutpair160" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[19]_i_1__0 
       (.I0(data1[19]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[19] ),
        .O(araddr_tmp[19]));
  (* SOFT_HLUTNM = "soft_lutpair159" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[20]_i_1__0 
       (.I0(data1[20]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[20] ),
        .O(araddr_tmp[20]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[18]),
        .O(\could_multi_bursts.araddr_buf[20]_i_3__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[17]),
        .O(\could_multi_bursts.araddr_buf[20]_i_4__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[16]),
        .O(\could_multi_bursts.araddr_buf[20]_i_5__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[20]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[15]),
        .O(\could_multi_bursts.araddr_buf[20]_i_6__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair158" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[21]_i_1__0 
       (.I0(data1[21]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[21] ),
        .O(araddr_tmp[21]));
  (* SOFT_HLUTNM = "soft_lutpair156" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[22]_i_1__0 
       (.I0(data1[22]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[22] ),
        .O(araddr_tmp[22]));
  (* SOFT_HLUTNM = "soft_lutpair157" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[23]_i_1__0 
       (.I0(data1[23]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[23] ),
        .O(araddr_tmp[23]));
  (* SOFT_HLUTNM = "soft_lutpair157" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[24]_i_1__0 
       (.I0(data1[24]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[24] ),
        .O(araddr_tmp[24]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[22]),
        .O(\could_multi_bursts.araddr_buf[24]_i_3__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[21]),
        .O(\could_multi_bursts.araddr_buf[24]_i_4__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[20]),
        .O(\could_multi_bursts.araddr_buf[24]_i_5__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[24]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[19]),
        .O(\could_multi_bursts.araddr_buf[24]_i_6__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair156" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[25]_i_1__0 
       (.I0(data1[25]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[25] ),
        .O(araddr_tmp[25]));
  (* SOFT_HLUTNM = "soft_lutpair154" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[26]_i_1__0 
       (.I0(data1[26]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[26] ),
        .O(araddr_tmp[26]));
  (* SOFT_HLUTNM = "soft_lutpair155" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[27]_i_1__0 
       (.I0(data1[27]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[27] ),
        .O(araddr_tmp[27]));
  (* SOFT_HLUTNM = "soft_lutpair155" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[28]_i_1__0 
       (.I0(data1[28]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[28] ),
        .O(araddr_tmp[28]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[26]),
        .O(\could_multi_bursts.araddr_buf[28]_i_3__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[25]),
        .O(\could_multi_bursts.araddr_buf[28]_i_4__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[24]),
        .O(\could_multi_bursts.araddr_buf[28]_i_5__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[28]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[23]),
        .O(\could_multi_bursts.araddr_buf[28]_i_6__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair153" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[29]_i_1__0 
       (.I0(data1[29]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[29] ),
        .O(araddr_tmp[29]));
  (* SOFT_HLUTNM = "soft_lutpair178" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[2]_i_1__0 
       (.I0(data1[2]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[2] ),
        .O(araddr_tmp[2]));
  (* SOFT_HLUTNM = "soft_lutpair153" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[30]_i_1__0 
       (.I0(data1[30]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[30] ),
        .O(araddr_tmp[30]));
  (* SOFT_HLUTNM = "soft_lutpair154" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[31]_i_2__0 
       (.I0(data1[31]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[31] ),
        .O(araddr_tmp[31]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \could_multi_bursts.araddr_buf[31]_i_4__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [2]),
        .I1(\could_multi_bursts.loop_cnt_reg [3]),
        .I2(\could_multi_bursts.loop_cnt_reg [4]),
        .I3(\could_multi_bursts.loop_cnt_reg [5]),
        .I4(\could_multi_bursts.loop_cnt_reg [0]),
        .I5(\could_multi_bursts.loop_cnt_reg [1]),
        .O(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[31]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[29]),
        .O(\could_multi_bursts.araddr_buf[31]_i_5__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[31]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[28]),
        .O(\could_multi_bursts.araddr_buf[31]_i_6__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[31]_i_7__0 
       (.I0(m_axi_DATA_B_ARADDR[27]),
        .O(\could_multi_bursts.araddr_buf[31]_i_7__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair176" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[3]_i_1__0 
       (.I0(data1[3]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[3] ),
        .O(araddr_tmp[3]));
  (* SOFT_HLUTNM = "soft_lutpair178" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[4]_i_1__0 
       (.I0(data1[4]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[4] ),
        .O(araddr_tmp[4]));
  LUT4 #(
    .INIT(16'h956A)) 
    \could_multi_bursts.araddr_buf[4]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[2]),
        .I1(ARLEN[0]),
        .I2(ARLEN[1]),
        .I3(ARLEN[2]),
        .O(\could_multi_bursts.araddr_buf[4]_i_3__0_n_2 ));
  LUT3 #(
    .INIT(8'h96)) 
    \could_multi_bursts.araddr_buf[4]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[1]),
        .I1(ARLEN[1]),
        .I2(ARLEN[0]),
        .O(\could_multi_bursts.araddr_buf[4]_i_4__0_n_2 ));
  LUT2 #(
    .INIT(4'h9)) 
    \could_multi_bursts.araddr_buf[4]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[0]),
        .I1(ARLEN[0]),
        .O(\could_multi_bursts.araddr_buf[4]_i_5__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair176" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[5]_i_1__0 
       (.I0(data1[5]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[5] ),
        .O(araddr_tmp[5]));
  (* SOFT_HLUTNM = "soft_lutpair164" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[6]_i_1__0 
       (.I0(data1[6]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[6] ),
        .O(araddr_tmp[6]));
  (* SOFT_HLUTNM = "soft_lutpair165" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[7]_i_1__0 
       (.I0(data1[7]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[7] ),
        .O(araddr_tmp[7]));
  (* SOFT_HLUTNM = "soft_lutpair165" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[8]_i_1__0 
       (.I0(data1[8]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[8] ),
        .O(araddr_tmp[8]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[8]_i_3__0 
       (.I0(m_axi_DATA_B_ARADDR[6]),
        .O(\could_multi_bursts.araddr_buf[8]_i_3__0_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.araddr_buf[8]_i_4__0 
       (.I0(m_axi_DATA_B_ARADDR[5]),
        .O(\could_multi_bursts.araddr_buf[8]_i_4__0_n_2 ));
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \could_multi_bursts.araddr_buf[8]_i_5__0 
       (.I0(m_axi_DATA_B_ARADDR[4]),
        .I1(ARLEN[2]),
        .I2(ARLEN[1]),
        .I3(ARLEN[0]),
        .I4(ARLEN[3]),
        .O(\could_multi_bursts.araddr_buf[8]_i_5__0_n_2 ));
  LUT5 #(
    .INIT(32'h95556AAA)) 
    \could_multi_bursts.araddr_buf[8]_i_6__0 
       (.I0(m_axi_DATA_B_ARADDR[3]),
        .I1(ARLEN[2]),
        .I2(ARLEN[1]),
        .I3(ARLEN[0]),
        .I4(ARLEN[3]),
        .O(\could_multi_bursts.araddr_buf[8]_i_6__0_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair164" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.araddr_buf[9]_i_1__0 
       (.I0(data1[9]),
        .I1(\could_multi_bursts.araddr_buf[31]_i_4__0_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[9] ),
        .O(araddr_tmp[9]));
  FDRE \could_multi_bursts.araddr_buf_reg[10] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[10]),
        .Q(m_axi_DATA_B_ARADDR[8]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[11] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[11]),
        .Q(m_axi_DATA_B_ARADDR[9]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[12] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[12]),
        .Q(m_axi_DATA_B_ARADDR[10]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[12]_i_2__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,m_axi_DATA_B_ARADDR[8:7]}),
        .O(data1[12:9]),
        .S({\could_multi_bursts.araddr_buf[12]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[12]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[12]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[12]_i_6__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[13] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[13]),
        .Q(m_axi_DATA_B_ARADDR[11]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[14] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[14]),
        .Q(m_axi_DATA_B_ARADDR[12]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[15] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[15]),
        .Q(m_axi_DATA_B_ARADDR[13]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[16] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[16]),
        .Q(m_axi_DATA_B_ARADDR[14]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[16]_i_2__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[12]_i_2__0_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[16:13]),
        .S({\could_multi_bursts.araddr_buf[16]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[16]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[16]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[16]_i_6__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[17] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[17]),
        .Q(m_axi_DATA_B_ARADDR[15]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[18] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[18]),
        .Q(m_axi_DATA_B_ARADDR[16]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[19] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[19]),
        .Q(m_axi_DATA_B_ARADDR[17]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[20] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[20]),
        .Q(m_axi_DATA_B_ARADDR[18]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[20]_i_2__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[16]_i_2__0_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[20:17]),
        .S({\could_multi_bursts.araddr_buf[20]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[20]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[20]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[20]_i_6__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[21] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[21]),
        .Q(m_axi_DATA_B_ARADDR[19]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[22] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[22]),
        .Q(m_axi_DATA_B_ARADDR[20]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[23] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[23]),
        .Q(m_axi_DATA_B_ARADDR[21]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[24] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[24]),
        .Q(m_axi_DATA_B_ARADDR[22]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[24]_i_2__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[20]_i_2__0_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[24:21]),
        .S({\could_multi_bursts.araddr_buf[24]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[24]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[24]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[24]_i_6__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[25] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[25]),
        .Q(m_axi_DATA_B_ARADDR[23]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[26] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[26]),
        .Q(m_axi_DATA_B_ARADDR[24]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[27] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[27]),
        .Q(m_axi_DATA_B_ARADDR[25]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[28] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[28]),
        .Q(m_axi_DATA_B_ARADDR[26]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[28]_i_2__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[24]_i_2__0_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[28:25]),
        .S({\could_multi_bursts.araddr_buf[28]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[28]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[28]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[28]_i_6__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[29] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[29]),
        .Q(m_axi_DATA_B_ARADDR[27]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[2]),
        .Q(m_axi_DATA_B_ARADDR[0]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[30] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[30]),
        .Q(m_axi_DATA_B_ARADDR[28]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[31] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[31]),
        .Q(m_axi_DATA_B_ARADDR[29]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[31]_i_3__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[28]_i_2__0_n_2 ),
        .CO({\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3__0_CO_UNCONNECTED [3:2],\could_multi_bursts.araddr_buf_reg[31]_i_3__0_n_4 ,\could_multi_bursts.araddr_buf_reg[31]_i_3__0_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_could_multi_bursts.araddr_buf_reg[31]_i_3__0_O_UNCONNECTED [3],data1[31:29]}),
        .S({1'b0,\could_multi_bursts.araddr_buf[31]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[31]_i_6__0_n_2 ,\could_multi_bursts.araddr_buf[31]_i_7__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[3]),
        .Q(m_axi_DATA_B_ARADDR[1]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[4]),
        .Q(m_axi_DATA_B_ARADDR[2]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[4]_i_2__0 
       (.CI(1'b0),
        .CO({\could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI({m_axi_DATA_B_ARADDR[2:0],1'b0}),
        .O({data1[4:2],\NLW_could_multi_bursts.araddr_buf_reg[4]_i_2__0_O_UNCONNECTED [0]}),
        .S({\could_multi_bursts.araddr_buf[4]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[4]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[4]_i_5__0_n_2 ,1'b0}));
  FDRE \could_multi_bursts.araddr_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[5]),
        .Q(m_axi_DATA_B_ARADDR[3]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[6]),
        .Q(m_axi_DATA_B_ARADDR[4]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[7]),
        .Q(m_axi_DATA_B_ARADDR[5]),
        .R(SR));
  FDRE \could_multi_bursts.araddr_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[8]),
        .Q(m_axi_DATA_B_ARADDR[6]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.araddr_buf_reg[8]_i_2__0 
       (.CI(\could_multi_bursts.araddr_buf_reg[4]_i_2__0_n_2 ),
        .CO({\could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_2 ,\could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_3 ,\could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_4 ,\could_multi_bursts.araddr_buf_reg[8]_i_2__0_n_5 }),
        .CYINIT(1'b0),
        .DI(m_axi_DATA_B_ARADDR[6:3]),
        .O(data1[8:5]),
        .S({\could_multi_bursts.araddr_buf[8]_i_3__0_n_2 ,\could_multi_bursts.araddr_buf[8]_i_4__0_n_2 ,\could_multi_bursts.araddr_buf[8]_i_5__0_n_2 ,\could_multi_bursts.araddr_buf[8]_i_6__0_n_2 }));
  FDRE \could_multi_bursts.araddr_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(araddr_tmp[9]),
        .Q(m_axi_DATA_B_ARADDR[7]),
        .R(SR));
  FDRE \could_multi_bursts.arlen_buf_reg[0] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_6),
        .Q(ARLEN[0]),
        .R(SR));
  FDRE \could_multi_bursts.arlen_buf_reg[1] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_7),
        .Q(ARLEN[1]),
        .R(SR));
  FDRE \could_multi_bursts.arlen_buf_reg[2] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_8),
        .Q(ARLEN[2]),
        .R(SR));
  FDRE \could_multi_bursts.arlen_buf_reg[3] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_9),
        .D(fifo_rctl_n_10),
        .Q(ARLEN[3]),
        .R(SR));
  LUT1 #(
    .INIT(2'h1)) 
    \could_multi_bursts.loop_cnt[0]_i_1__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [0]),
        .O(p_0_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair177" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \could_multi_bursts.loop_cnt[1]_i_1__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [0]),
        .I1(\could_multi_bursts.loop_cnt_reg [1]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair177" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \could_multi_bursts.loop_cnt[2]_i_1__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [2]),
        .I1(\could_multi_bursts.loop_cnt_reg [1]),
        .I2(\could_multi_bursts.loop_cnt_reg [0]),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair152" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \could_multi_bursts.loop_cnt[3]_i_1__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [3]),
        .I1(\could_multi_bursts.loop_cnt_reg [0]),
        .I2(\could_multi_bursts.loop_cnt_reg [1]),
        .I3(\could_multi_bursts.loop_cnt_reg [2]),
        .O(p_0_in[3]));
  (* SOFT_HLUTNM = "soft_lutpair152" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \could_multi_bursts.loop_cnt[4]_i_1__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [4]),
        .I1(\could_multi_bursts.loop_cnt_reg [2]),
        .I2(\could_multi_bursts.loop_cnt_reg [1]),
        .I3(\could_multi_bursts.loop_cnt_reg [0]),
        .I4(\could_multi_bursts.loop_cnt_reg [3]),
        .O(p_0_in[4]));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \could_multi_bursts.loop_cnt[5]_i_2__0 
       (.I0(\could_multi_bursts.loop_cnt_reg [5]),
        .I1(\could_multi_bursts.loop_cnt_reg [3]),
        .I2(\could_multi_bursts.loop_cnt_reg [0]),
        .I3(\could_multi_bursts.loop_cnt_reg [1]),
        .I4(\could_multi_bursts.loop_cnt_reg [2]),
        .I5(\could_multi_bursts.loop_cnt_reg [4]),
        .O(p_0_in[5]));
  FDRE \could_multi_bursts.loop_cnt_reg[0] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[0]),
        .Q(\could_multi_bursts.loop_cnt_reg [0]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[1] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[1]),
        .Q(\could_multi_bursts.loop_cnt_reg [1]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[2] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[2]),
        .Q(\could_multi_bursts.loop_cnt_reg [2]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[3] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[3]),
        .Q(\could_multi_bursts.loop_cnt_reg [3]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[4] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[4]),
        .Q(\could_multi_bursts.loop_cnt_reg [4]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.loop_cnt_reg[5] 
       (.C(ap_clk),
        .CE(p_14_in),
        .D(p_0_in[5]),
        .Q(\could_multi_bursts.loop_cnt_reg [5]),
        .R(fifo_rctl_n_2));
  FDRE \could_multi_bursts.sect_handling_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rctl_n_11),
        .Q(\could_multi_bursts.sect_handling_reg_n_2 ),
        .R(SR));
  LUT2 #(
    .INIT(4'h6)) 
    \end_addr_buf[2]_i_1__0 
       (.I0(\start_addr_reg_n_2_[2] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr[2]));
  FDRE \end_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[10]),
        .Q(\end_addr_buf_reg_n_2_[10] ),
        .R(SR));
  FDRE \end_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[11]),
        .Q(\end_addr_buf_reg_n_2_[11] ),
        .R(SR));
  FDRE \end_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[12]),
        .Q(p_0_in0_in[0]),
        .R(SR));
  FDRE \end_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[13]),
        .Q(p_0_in0_in[1]),
        .R(SR));
  FDRE \end_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[14]),
        .Q(p_0_in0_in[2]),
        .R(SR));
  FDRE \end_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[15]),
        .Q(p_0_in0_in[3]),
        .R(SR));
  FDRE \end_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[16]),
        .Q(p_0_in0_in[4]),
        .R(SR));
  FDRE \end_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[17]),
        .Q(p_0_in0_in[5]),
        .R(SR));
  FDRE \end_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[18]),
        .Q(p_0_in0_in[6]),
        .R(SR));
  FDRE \end_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[19]),
        .Q(p_0_in0_in[7]),
        .R(SR));
  FDRE \end_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[20]),
        .Q(p_0_in0_in[8]),
        .R(SR));
  FDRE \end_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[21]),
        .Q(p_0_in0_in[9]),
        .R(SR));
  FDRE \end_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[22]),
        .Q(p_0_in0_in[10]),
        .R(SR));
  FDRE \end_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[23]),
        .Q(p_0_in0_in[11]),
        .R(SR));
  FDRE \end_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[24]),
        .Q(p_0_in0_in[12]),
        .R(SR));
  FDRE \end_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[25]),
        .Q(p_0_in0_in[13]),
        .R(SR));
  FDRE \end_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[26]),
        .Q(p_0_in0_in[14]),
        .R(SR));
  FDRE \end_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[27]),
        .Q(p_0_in0_in[15]),
        .R(SR));
  FDRE \end_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[28]),
        .Q(p_0_in0_in[16]),
        .R(SR));
  FDRE \end_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[29]),
        .Q(p_0_in0_in[17]),
        .R(SR));
  FDRE \end_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[2]),
        .Q(\end_addr_buf_reg_n_2_[2] ),
        .R(SR));
  FDRE \end_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[30]),
        .Q(p_0_in0_in[18]),
        .R(SR));
  FDRE \end_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[31]),
        .Q(p_0_in0_in[19]),
        .R(SR));
  FDRE \end_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[3]),
        .Q(\end_addr_buf_reg_n_2_[3] ),
        .R(SR));
  FDRE \end_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[4]),
        .Q(\end_addr_buf_reg_n_2_[4] ),
        .R(SR));
  FDRE \end_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[5]),
        .Q(\end_addr_buf_reg_n_2_[5] ),
        .R(SR));
  FDRE \end_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[6]),
        .Q(\end_addr_buf_reg_n_2_[6] ),
        .R(SR));
  FDRE \end_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[7]),
        .Q(\end_addr_buf_reg_n_2_[7] ),
        .R(SR));
  FDRE \end_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[8]),
        .Q(\end_addr_buf_reg_n_2_[8] ),
        .R(SR));
  FDRE \end_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(end_addr[9]),
        .Q(\end_addr_buf_reg_n_2_[9] ),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry
       (.CI(1'b0),
        .CO({end_addr_carry_n_2,end_addr_carry_n_3,end_addr_carry_n_4,end_addr_carry_n_5}),
        .CYINIT(1'b0),
        .DI({\start_addr_reg_n_2_[5] ,\start_addr_reg_n_2_[4] ,\start_addr_reg_n_2_[3] ,\start_addr_reg_n_2_[2] }),
        .O({end_addr[5:3],NLW_end_addr_carry_O_UNCONNECTED[0]}),
        .S({end_addr_carry_i_1__0_n_2,end_addr_carry_i_2__0_n_2,end_addr_carry_i_3__0_n_2,end_addr_carry_i_4__0_n_2}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__0
       (.CI(end_addr_carry_n_2),
        .CO({end_addr_carry__0_n_2,end_addr_carry__0_n_3,end_addr_carry__0_n_4,end_addr_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({\start_addr_reg_n_2_[9] ,\start_addr_reg_n_2_[8] ,\start_addr_reg_n_2_[7] ,\start_addr_reg_n_2_[6] }),
        .O(end_addr[9:6]),
        .S({end_addr_carry__0_i_1__0_n_2,end_addr_carry__0_i_2__0_n_2,end_addr_carry__0_i_3__0_n_2,end_addr_carry__0_i_4__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_1__0
       (.I0(\start_addr_reg_n_2_[9] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__0_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_2__0
       (.I0(\start_addr_reg_n_2_[8] ),
        .I1(\align_len_reg_n_2_[8] ),
        .O(end_addr_carry__0_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_3__0
       (.I0(\start_addr_reg_n_2_[7] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry__0_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_4__0
       (.I0(\start_addr_reg_n_2_[6] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry__0_i_4__0_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__1
       (.CI(end_addr_carry__0_n_2),
        .CO({end_addr_carry__1_n_2,end_addr_carry__1_n_3,end_addr_carry__1_n_4,end_addr_carry__1_n_5}),
        .CYINIT(1'b0),
        .DI({data[1:0],\start_addr_reg_n_2_[11] ,\start_addr_reg_n_2_[10] }),
        .O(end_addr[13:10]),
        .S({end_addr_carry__1_i_1__0_n_2,end_addr_carry__1_i_2__0_n_2,end_addr_carry__1_i_3__0_n_2,end_addr_carry__1_i_4__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_1__0
       (.I0(data[1]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_2__0
       (.I0(data[0]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_3__0
       (.I0(\start_addr_reg_n_2_[11] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_4__0
       (.I0(\start_addr_reg_n_2_[10] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_4__0_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__2
       (.CI(end_addr_carry__1_n_2),
        .CO({end_addr_carry__2_n_2,end_addr_carry__2_n_3,end_addr_carry__2_n_4,end_addr_carry__2_n_5}),
        .CYINIT(1'b0),
        .DI(data[5:2]),
        .O(end_addr[17:14]),
        .S({end_addr_carry__2_i_1__0_n_2,end_addr_carry__2_i_2__0_n_2,end_addr_carry__2_i_3__0_n_2,end_addr_carry__2_i_4__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_1__0
       (.I0(data[5]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_2__0
       (.I0(data[4]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_3__0
       (.I0(data[3]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_4__0
       (.I0(data[2]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_4__0_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__3
       (.CI(end_addr_carry__2_n_2),
        .CO({end_addr_carry__3_n_2,end_addr_carry__3_n_3,end_addr_carry__3_n_4,end_addr_carry__3_n_5}),
        .CYINIT(1'b0),
        .DI(data[9:6]),
        .O(end_addr[21:18]),
        .S({end_addr_carry__3_i_1__0_n_2,end_addr_carry__3_i_2__0_n_2,end_addr_carry__3_i_3__0_n_2,end_addr_carry__3_i_4__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_1__0
       (.I0(data[9]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_2__0
       (.I0(data[8]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_3__0
       (.I0(data[7]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_4__0
       (.I0(data[6]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_4__0_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__4
       (.CI(end_addr_carry__3_n_2),
        .CO({end_addr_carry__4_n_2,end_addr_carry__4_n_3,end_addr_carry__4_n_4,end_addr_carry__4_n_5}),
        .CYINIT(1'b0),
        .DI(data[13:10]),
        .O(end_addr[25:22]),
        .S({end_addr_carry__4_i_1__0_n_2,end_addr_carry__4_i_2__0_n_2,end_addr_carry__4_i_3__0_n_2,end_addr_carry__4_i_4__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_1__0
       (.I0(data[13]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_2__0
       (.I0(data[12]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_3__0
       (.I0(data[11]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_4__0
       (.I0(data[10]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_4__0_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__5
       (.CI(end_addr_carry__4_n_2),
        .CO({end_addr_carry__5_n_2,end_addr_carry__5_n_3,end_addr_carry__5_n_4,end_addr_carry__5_n_5}),
        .CYINIT(1'b0),
        .DI(data[17:14]),
        .O(end_addr[29:26]),
        .S({end_addr_carry__5_i_1__0_n_2,end_addr_carry__5_i_2__0_n_2,end_addr_carry__5_i_3__0_n_2,end_addr_carry__5_i_4__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_1__0
       (.I0(data[17]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_2__0
       (.I0(data[16]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_3__0
       (.I0(data[15]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_4__0
       (.I0(data[14]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_4__0_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__6
       (.CI(end_addr_carry__5_n_2),
        .CO({NLW_end_addr_carry__6_CO_UNCONNECTED[3:1],end_addr_carry__6_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,data[18]}),
        .O({NLW_end_addr_carry__6_O_UNCONNECTED[3:2],end_addr[31:30]}),
        .S({1'b0,1'b0,end_addr_carry__6_i_1__0_n_2,end_addr_carry__6_i_2__0_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__6_i_1__0
       (.I0(data[19]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__6_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__6_i_2__0
       (.I0(data[18]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__6_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_1__0
       (.I0(\start_addr_reg_n_2_[5] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_1__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_2__0
       (.I0(\start_addr_reg_n_2_[4] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_2__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_3__0
       (.I0(\start_addr_reg_n_2_[3] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_3__0_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_4__0
       (.I0(\start_addr_reg_n_2_[2] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_4__0_n_2));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_fifo__parameterized1 fifo_rctl
       (.CO(first_sect),
        .Q({\end_addr_buf_reg_n_2_[11] ,\end_addr_buf_reg_n_2_[10] ,\end_addr_buf_reg_n_2_[9] ,\end_addr_buf_reg_n_2_[8] ,\end_addr_buf_reg_n_2_[7] ,\end_addr_buf_reg_n_2_[6] ,\end_addr_buf_reg_n_2_[5] ,\end_addr_buf_reg_n_2_[4] ,\end_addr_buf_reg_n_2_[3] ,\end_addr_buf_reg_n_2_[2] }),
        .SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .\beat_len_buf_reg[9] ({beat_len_buf[9],beat_len_buf[6:5]}),
        .beat_valid(beat_valid),
        .\could_multi_bursts.ARVALID_Dummy_reg (fifo_rctl_n_24),
        .\could_multi_bursts.ARVALID_Dummy_reg_0 (m_axi_DATA_B_ARVALID),
        .\could_multi_bursts.arlen_buf_reg[0] (fifo_rctl_n_6),
        .\could_multi_bursts.arlen_buf_reg[0]_0 (fifo_rctl_n_9),
        .\could_multi_bursts.arlen_buf_reg[1] (fifo_rctl_n_7),
        .\could_multi_bursts.arlen_buf_reg[2] (fifo_rctl_n_8),
        .\could_multi_bursts.arlen_buf_reg[3] (fifo_rctl_n_10),
        .\could_multi_bursts.loop_cnt_reg[5] (fifo_rctl_n_2),
        .\could_multi_bursts.sect_handling_reg (fifo_rctl_n_11),
        .\could_multi_bursts.sect_handling_reg_0 (\could_multi_bursts.sect_handling_reg_n_2 ),
        .\dout_buf_reg[34] (data_pack),
        .\end_addr_buf_reg[31] (last_sect),
        .fifo_rreq_valid(fifo_rreq_valid),
        .fifo_rreq_valid_buf_reg(fifo_rreq_valid_buf_reg_n_2),
        .invalid_len_event(invalid_len_event),
        .invalid_len_event_reg(fifo_rctl_n_22),
        .m_axi_DATA_B_ARREADY(m_axi_DATA_B_ARREADY),
        .p_14_in(p_14_in),
        .p_15_in(p_15_in),
        .rreq_handling_reg(fifo_rctl_n_25),
        .rreq_handling_reg_0(rreq_handling_reg_n_2),
        .\sect_addr_buf_reg[2] (fifo_rctl_n_4),
        .\sect_cnt_reg[0] (fifo_rctl_n_23),
        .\sect_len_buf_reg[0] (fifo_rctl_n_21),
        .\sect_len_buf_reg[0]_0 (\sect_len_buf_reg_n_2_[0] ),
        .\sect_len_buf_reg[1] (fifo_rctl_n_20),
        .\sect_len_buf_reg[1]_0 (\sect_len_buf_reg_n_2_[1] ),
        .\sect_len_buf_reg[2] (fifo_rctl_n_19),
        .\sect_len_buf_reg[2]_0 (\sect_len_buf_reg_n_2_[2] ),
        .\sect_len_buf_reg[3] (fifo_rctl_n_18),
        .\sect_len_buf_reg[3]_0 (\sect_len_buf_reg_n_2_[3] ),
        .\sect_len_buf_reg[4] (fifo_rctl_n_17),
        .\sect_len_buf_reg[5] (fifo_rctl_n_16),
        .\sect_len_buf_reg[6] (fifo_rctl_n_15),
        .\sect_len_buf_reg[7] (fifo_rctl_n_14),
        .\sect_len_buf_reg[7]_0 (fifo_rreq_n_5),
        .\sect_len_buf_reg[8] (fifo_rctl_n_13),
        .\sect_len_buf_reg[9] (fifo_rctl_n_12),
        .\start_addr_buf_reg[11] ({\start_addr_buf_reg_n_2_[11] ,\start_addr_buf_reg_n_2_[10] ,\start_addr_buf_reg_n_2_[9] ,\start_addr_buf_reg_n_2_[8] ,\start_addr_buf_reg_n_2_[7] ,\start_addr_buf_reg_n_2_[6] ,\start_addr_buf_reg_n_2_[5] ,\start_addr_buf_reg_n_2_[4] ,\start_addr_buf_reg_n_2_[3] ,\start_addr_buf_reg_n_2_[2] }));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_fifo__parameterized0 fifo_rreq
       (.E(next_rreq),
        .O({fifo_rreq_n_46,fifo_rreq_n_47,fifo_rreq_n_48,fifo_rreq_n_49}),
        .Q(data),
        .S({fifo_rreq_n_7,fifo_rreq_n_8,fifo_rreq_n_9,fifo_rreq_n_10}),
        .SR(SR),
        .\align_len_reg[31] (fifo_rreq_n_14),
        .\align_len_reg[7] (align_len),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .\could_multi_bursts.loop_cnt_reg[5] (\could_multi_bursts.loop_cnt_reg ),
        .\data_p1_reg[29] (rs2f_rreq_data),
        .\end_addr_buf_reg[31] (last_sect),
        .\end_addr_buf_reg[31]_0 (p_0_in0_in),
        .fifo_rreq_valid(fifo_rreq_valid),
        .fifo_rreq_valid_buf_reg({fifo_rreq_n_11,fifo_rreq_n_12,fifo_rreq_n_13}),
        .fifo_rreq_valid_buf_reg_0(fifo_rreq_n_67),
        .fifo_rreq_valid_buf_reg_1(fifo_rreq_valid_buf_reg_n_2),
        .invalid_len_event(invalid_len_event),
        .invalid_len_event_reg({fifo_rreq_data,q}),
        .invalid_len_event_reg_0(fifo_rreq_n_66),
        .p_15_in(p_15_in),
        .push(push),
        .rreq_handling_reg(rreq_handling_reg_n_2),
        .rreq_handling_reg_0(fifo_rctl_n_22),
        .rs2f_rreq_ack(rs2f_rreq_ack),
        .sect_cnt_reg(sect_cnt_reg),
        .\sect_cnt_reg[11] ({fifo_rreq_n_54,fifo_rreq_n_55,fifo_rreq_n_56,fifo_rreq_n_57}),
        .\sect_cnt_reg[15] ({fifo_rreq_n_58,fifo_rreq_n_59,fifo_rreq_n_60,fifo_rreq_n_61}),
        .\sect_cnt_reg[19] ({fifo_rreq_n_62,fifo_rreq_n_63,fifo_rreq_n_64,fifo_rreq_n_65}),
        .\sect_cnt_reg[7] ({fifo_rreq_n_50,fifo_rreq_n_51,fifo_rreq_n_52,fifo_rreq_n_53}),
        .\sect_len_buf_reg[4] (\sect_len_buf_reg_n_2_[4] ),
        .\sect_len_buf_reg[5] (\sect_len_buf_reg_n_2_[5] ),
        .\sect_len_buf_reg[6] (\sect_len_buf_reg_n_2_[6] ),
        .\sect_len_buf_reg[7] (\sect_len_buf_reg_n_2_[7] ),
        .\sect_len_buf_reg[8] (\sect_len_buf_reg_n_2_[8] ),
        .\sect_len_buf_reg[9] (fifo_rreq_n_5),
        .\sect_len_buf_reg[9]_0 (\sect_len_buf_reg_n_2_[9] ),
        .\state_reg[0] (rs2f_rreq_valid));
  FDRE fifo_rreq_valid_buf_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rreq_n_67),
        .Q(fifo_rreq_valid_buf_reg_n_2),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 first_sect_carry
       (.CI(1'b0),
        .CO({first_sect_carry_n_2,first_sect_carry_n_3,first_sect_carry_n_4,first_sect_carry_n_5}),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_first_sect_carry_O_UNCONNECTED[3:0]),
        .S({first_sect_carry_i_1__0_n_2,first_sect_carry_i_2__0_n_2,first_sect_carry_i_3__0_n_2,first_sect_carry_i_4__0_n_2}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 first_sect_carry__0
       (.CI(first_sect_carry_n_2),
        .CO({NLW_first_sect_carry__0_CO_UNCONNECTED[3],first_sect,first_sect_carry__0_n_4,first_sect_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_first_sect_carry__0_O_UNCONNECTED[3:0]),
        .S({1'b0,first_sect_carry__0_i_1__0_n_2,first_sect_carry__0_i_2__0_n_2,first_sect_carry__0_i_3__0_n_2}));
  LUT4 #(
    .INIT(16'h9009)) 
    first_sect_carry__0_i_1__0
       (.I0(p_0_in_0[19]),
        .I1(sect_cnt_reg[19]),
        .I2(p_0_in_0[18]),
        .I3(sect_cnt_reg[18]),
        .O(first_sect_carry__0_i_1__0_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry__0_i_2__0
       (.I0(sect_cnt_reg[17]),
        .I1(p_0_in_0[17]),
        .I2(sect_cnt_reg[15]),
        .I3(p_0_in_0[15]),
        .I4(p_0_in_0[16]),
        .I5(sect_cnt_reg[16]),
        .O(first_sect_carry__0_i_2__0_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry__0_i_3__0
       (.I0(p_0_in_0[14]),
        .I1(sect_cnt_reg[14]),
        .I2(sect_cnt_reg[12]),
        .I3(p_0_in_0[12]),
        .I4(sect_cnt_reg[13]),
        .I5(p_0_in_0[13]),
        .O(first_sect_carry__0_i_3__0_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_1__0
       (.I0(p_0_in_0[11]),
        .I1(sect_cnt_reg[11]),
        .I2(sect_cnt_reg[9]),
        .I3(p_0_in_0[9]),
        .I4(sect_cnt_reg[10]),
        .I5(p_0_in_0[10]),
        .O(first_sect_carry_i_1__0_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_2__0
       (.I0(sect_cnt_reg[8]),
        .I1(p_0_in_0[8]),
        .I2(sect_cnt_reg[6]),
        .I3(p_0_in_0[6]),
        .I4(p_0_in_0[7]),
        .I5(sect_cnt_reg[7]),
        .O(first_sect_carry_i_2__0_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_3__0
       (.I0(p_0_in_0[4]),
        .I1(sect_cnt_reg[4]),
        .I2(sect_cnt_reg[5]),
        .I3(p_0_in_0[5]),
        .I4(sect_cnt_reg[3]),
        .I5(p_0_in_0[3]),
        .O(first_sect_carry_i_3__0_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_4__0
       (.I0(p_0_in_0[2]),
        .I1(sect_cnt_reg[2]),
        .I2(sect_cnt_reg[0]),
        .I3(p_0_in_0[0]),
        .I4(sect_cnt_reg[1]),
        .I5(p_0_in_0[1]),
        .O(first_sect_carry_i_4__0_n_2));
  FDRE invalid_len_event_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rreq_n_66),
        .Q(invalid_len_event),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 last_sect_carry
       (.CI(1'b0),
        .CO({last_sect_carry_n_2,last_sect_carry_n_3,last_sect_carry_n_4,last_sect_carry_n_5}),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_last_sect_carry_O_UNCONNECTED[3:0]),
        .S({fifo_rreq_n_7,fifo_rreq_n_8,fifo_rreq_n_9,fifo_rreq_n_10}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 last_sect_carry__0
       (.CI(last_sect_carry_n_2),
        .CO({NLW_last_sect_carry__0_CO_UNCONNECTED[3],last_sect,last_sect_carry__0_n_4,last_sect_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_last_sect_carry__0_O_UNCONNECTED[3:0]),
        .S({1'b0,fifo_rreq_n_11,fifo_rreq_n_12,fifo_rreq_n_13}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry
       (.CI(1'b0),
        .CO({p_0_out_carry_n_2,p_0_out_carry_n_3,p_0_out_carry_n_4,p_0_out_carry_n_5}),
        .CYINIT(usedw_reg[0]),
        .DI({usedw_reg[3:1],buff_rdata_n_18}),
        .O({p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .S({buff_rdata_n_4,buff_rdata_n_5,buff_rdata_n_6,buff_rdata_n_7}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry__0
       (.CI(p_0_out_carry_n_2),
        .CO({NLW_p_0_out_carry__0_CO_UNCONNECTED[3:2],p_0_out_carry__0_n_4,p_0_out_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,usedw_reg[5:4]}),
        .O({NLW_p_0_out_carry__0_O_UNCONNECTED[3],p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9}),
        .S({1'b0,buff_rdata_n_14,buff_rdata_n_15,buff_rdata_n_16}));
  FDRE rreq_handling_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(fifo_rctl_n_25),
        .Q(rreq_handling_reg_n_2),
        .R(SR));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_reg_slice__parameterized0 rs_rdata
       (.DATA_A_RREADY(DATA_A_RREADY),
        .\DATA_B_addr_read_reg_282_reg[31] (\DATA_B_addr_read_reg_282_reg[31] ),
        .Q(rdata_valid),
        .SR(SR),
        .\ap_CS_fsm_reg[8] (\ap_CS_fsm_reg[8] ),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter1_reg(ap_enable_reg_pp0_iter1_reg),
        .\bus_equal_gen.data_buf_reg[31] ({\bus_equal_gen.data_buf_reg_n_2_[31] ,\bus_equal_gen.data_buf_reg_n_2_[30] ,\bus_equal_gen.data_buf_reg_n_2_[29] ,\bus_equal_gen.data_buf_reg_n_2_[28] ,\bus_equal_gen.data_buf_reg_n_2_[27] ,\bus_equal_gen.data_buf_reg_n_2_[26] ,\bus_equal_gen.data_buf_reg_n_2_[25] ,\bus_equal_gen.data_buf_reg_n_2_[24] ,\bus_equal_gen.data_buf_reg_n_2_[23] ,\bus_equal_gen.data_buf_reg_n_2_[22] ,\bus_equal_gen.data_buf_reg_n_2_[21] ,\bus_equal_gen.data_buf_reg_n_2_[20] ,\bus_equal_gen.data_buf_reg_n_2_[19] ,\bus_equal_gen.data_buf_reg_n_2_[18] ,\bus_equal_gen.data_buf_reg_n_2_[17] ,\bus_equal_gen.data_buf_reg_n_2_[16] ,\bus_equal_gen.data_buf_reg_n_2_[15] ,\bus_equal_gen.data_buf_reg_n_2_[14] ,\bus_equal_gen.data_buf_reg_n_2_[13] ,\bus_equal_gen.data_buf_reg_n_2_[12] ,\bus_equal_gen.data_buf_reg_n_2_[11] ,\bus_equal_gen.data_buf_reg_n_2_[10] ,\bus_equal_gen.data_buf_reg_n_2_[9] ,\bus_equal_gen.data_buf_reg_n_2_[8] ,\bus_equal_gen.data_buf_reg_n_2_[7] ,\bus_equal_gen.data_buf_reg_n_2_[6] ,\bus_equal_gen.data_buf_reg_n_2_[5] ,\bus_equal_gen.data_buf_reg_n_2_[4] ,\bus_equal_gen.data_buf_reg_n_2_[3] ,\bus_equal_gen.data_buf_reg_n_2_[2] ,\bus_equal_gen.data_buf_reg_n_2_[1] ,\bus_equal_gen.data_buf_reg_n_2_[0] }),
        .\bus_equal_gen.rdata_valid_t_reg (\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .\exitcond_reg_268_reg[0] (\exitcond_reg_268_reg[0] ),
        .rdata_ack_t(rdata_ack_t));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_reg_slice rs_rreq
       (.DATA_A_ARREADY(DATA_A_ARREADY),
        .Q(Q),
        .SR(SR),
        .\ap_CS_fsm_reg[1] (\ap_CS_fsm_reg[1] ),
        .ap_clk(ap_clk),
        .ap_reg_ioackin_DATA_A_ARREADY(ap_reg_ioackin_DATA_A_ARREADY),
        .ap_reg_ioackin_DATA_A_ARREADY_reg(ap_reg_ioackin_DATA_A_ARREADY_reg),
        .ap_reg_ioackin_DATA_B_ARREADY_reg(ap_reg_ioackin_DATA_B_ARREADY_reg),
        .ap_reg_ioackin_DATA_B_ARREADY_reg_0(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .ap_rst_n(ap_rst_n),
        .\b3_reg_241_reg[29] (\b3_reg_241_reg[29] ),
        .push(push),
        .\q_reg[29] (rs2f_rreq_data),
        .rs2f_rreq_ack(rs2f_rreq_ack),
        .s_ready_t_reg_0(s_ready_t_reg),
        .s_ready_t_reg_1(rs2f_rreq_valid));
  (* SOFT_HLUTNM = "soft_lutpair180" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[10]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[10] ),
        .O(sect_addr[10]));
  (* SOFT_HLUTNM = "soft_lutpair179" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[11]_i_2__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[11] ),
        .O(sect_addr[11]));
  (* SOFT_HLUTNM = "soft_lutpair175" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[12]_i_1__0 
       (.I0(p_0_in_0[0]),
        .I1(first_sect),
        .I2(sect_cnt_reg[0]),
        .O(sect_addr[12]));
  (* SOFT_HLUTNM = "soft_lutpair175" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[13]_i_1__0 
       (.I0(p_0_in_0[1]),
        .I1(first_sect),
        .I2(sect_cnt_reg[1]),
        .O(sect_addr[13]));
  (* SOFT_HLUTNM = "soft_lutpair174" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[14]_i_1__0 
       (.I0(p_0_in_0[2]),
        .I1(first_sect),
        .I2(sect_cnt_reg[2]),
        .O(sect_addr[14]));
  (* SOFT_HLUTNM = "soft_lutpair174" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[15]_i_1__0 
       (.I0(p_0_in_0[3]),
        .I1(first_sect),
        .I2(sect_cnt_reg[3]),
        .O(sect_addr[15]));
  (* SOFT_HLUTNM = "soft_lutpair173" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[16]_i_1__0 
       (.I0(p_0_in_0[4]),
        .I1(first_sect),
        .I2(sect_cnt_reg[4]),
        .O(sect_addr[16]));
  (* SOFT_HLUTNM = "soft_lutpair173" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[17]_i_1__0 
       (.I0(p_0_in_0[5]),
        .I1(first_sect),
        .I2(sect_cnt_reg[5]),
        .O(sect_addr[17]));
  (* SOFT_HLUTNM = "soft_lutpair172" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[18]_i_1__0 
       (.I0(p_0_in_0[6]),
        .I1(first_sect),
        .I2(sect_cnt_reg[6]),
        .O(sect_addr[18]));
  (* SOFT_HLUTNM = "soft_lutpair172" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[19]_i_1__0 
       (.I0(p_0_in_0[7]),
        .I1(first_sect),
        .I2(sect_cnt_reg[7]),
        .O(sect_addr[19]));
  (* SOFT_HLUTNM = "soft_lutpair171" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[20]_i_1__0 
       (.I0(p_0_in_0[8]),
        .I1(first_sect),
        .I2(sect_cnt_reg[8]),
        .O(sect_addr[20]));
  (* SOFT_HLUTNM = "soft_lutpair171" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[21]_i_1__0 
       (.I0(p_0_in_0[9]),
        .I1(first_sect),
        .I2(sect_cnt_reg[9]),
        .O(sect_addr[21]));
  (* SOFT_HLUTNM = "soft_lutpair170" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[22]_i_1__0 
       (.I0(p_0_in_0[10]),
        .I1(first_sect),
        .I2(sect_cnt_reg[10]),
        .O(sect_addr[22]));
  (* SOFT_HLUTNM = "soft_lutpair170" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[23]_i_1__0 
       (.I0(p_0_in_0[11]),
        .I1(first_sect),
        .I2(sect_cnt_reg[11]),
        .O(sect_addr[23]));
  (* SOFT_HLUTNM = "soft_lutpair169" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[24]_i_1__0 
       (.I0(p_0_in_0[12]),
        .I1(first_sect),
        .I2(sect_cnt_reg[12]),
        .O(sect_addr[24]));
  (* SOFT_HLUTNM = "soft_lutpair169" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[25]_i_1__0 
       (.I0(p_0_in_0[13]),
        .I1(first_sect),
        .I2(sect_cnt_reg[13]),
        .O(sect_addr[25]));
  (* SOFT_HLUTNM = "soft_lutpair168" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[26]_i_1__0 
       (.I0(p_0_in_0[14]),
        .I1(first_sect),
        .I2(sect_cnt_reg[14]),
        .O(sect_addr[26]));
  (* SOFT_HLUTNM = "soft_lutpair168" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[27]_i_1__0 
       (.I0(p_0_in_0[15]),
        .I1(first_sect),
        .I2(sect_cnt_reg[15]),
        .O(sect_addr[27]));
  (* SOFT_HLUTNM = "soft_lutpair167" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[28]_i_1__0 
       (.I0(p_0_in_0[16]),
        .I1(first_sect),
        .I2(sect_cnt_reg[16]),
        .O(sect_addr[28]));
  (* SOFT_HLUTNM = "soft_lutpair167" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[29]_i_1__0 
       (.I0(p_0_in_0[17]),
        .I1(first_sect),
        .I2(sect_cnt_reg[17]),
        .O(sect_addr[29]));
  (* SOFT_HLUTNM = "soft_lutpair183" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[2]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[2] ),
        .O(sect_addr[2]));
  (* SOFT_HLUTNM = "soft_lutpair166" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[30]_i_1__0 
       (.I0(p_0_in_0[18]),
        .I1(first_sect),
        .I2(sect_cnt_reg[18]),
        .O(sect_addr[30]));
  (* SOFT_HLUTNM = "soft_lutpair166" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[31]_i_1__0 
       (.I0(p_0_in_0[19]),
        .I1(first_sect),
        .I2(sect_cnt_reg[19]),
        .O(sect_addr[31]));
  (* SOFT_HLUTNM = "soft_lutpair181" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[3]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[3] ),
        .O(sect_addr[3]));
  (* SOFT_HLUTNM = "soft_lutpair179" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[4]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[4] ),
        .O(sect_addr[4]));
  (* SOFT_HLUTNM = "soft_lutpair180" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[5]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[5] ),
        .O(sect_addr[5]));
  (* SOFT_HLUTNM = "soft_lutpair182" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[6]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[6] ),
        .O(sect_addr[6]));
  (* SOFT_HLUTNM = "soft_lutpair183" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[7]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[7] ),
        .O(sect_addr[7]));
  (* SOFT_HLUTNM = "soft_lutpair182" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[8]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[8] ),
        .O(sect_addr[8]));
  (* SOFT_HLUTNM = "soft_lutpair181" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[9]_i_1__0 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[9] ),
        .O(sect_addr[9]));
  FDRE \sect_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[10]),
        .Q(\sect_addr_buf_reg_n_2_[10] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[11]),
        .Q(\sect_addr_buf_reg_n_2_[11] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[12]),
        .Q(\sect_addr_buf_reg_n_2_[12] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[13]),
        .Q(\sect_addr_buf_reg_n_2_[13] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[14]),
        .Q(\sect_addr_buf_reg_n_2_[14] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[15]),
        .Q(\sect_addr_buf_reg_n_2_[15] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[16]),
        .Q(\sect_addr_buf_reg_n_2_[16] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[17]),
        .Q(\sect_addr_buf_reg_n_2_[17] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[18]),
        .Q(\sect_addr_buf_reg_n_2_[18] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[19]),
        .Q(\sect_addr_buf_reg_n_2_[19] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[20]),
        .Q(\sect_addr_buf_reg_n_2_[20] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[21]),
        .Q(\sect_addr_buf_reg_n_2_[21] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[22]),
        .Q(\sect_addr_buf_reg_n_2_[22] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[23]),
        .Q(\sect_addr_buf_reg_n_2_[23] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[24]),
        .Q(\sect_addr_buf_reg_n_2_[24] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[25]),
        .Q(\sect_addr_buf_reg_n_2_[25] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[26]),
        .Q(\sect_addr_buf_reg_n_2_[26] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[27]),
        .Q(\sect_addr_buf_reg_n_2_[27] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[28]),
        .Q(\sect_addr_buf_reg_n_2_[28] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[29]),
        .Q(\sect_addr_buf_reg_n_2_[29] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[2]),
        .Q(\sect_addr_buf_reg_n_2_[2] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[30]),
        .Q(\sect_addr_buf_reg_n_2_[30] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[31]),
        .Q(\sect_addr_buf_reg_n_2_[31] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[3]),
        .Q(\sect_addr_buf_reg_n_2_[3] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[4]),
        .Q(\sect_addr_buf_reg_n_2_[4] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[5]),
        .Q(\sect_addr_buf_reg_n_2_[5] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[6]),
        .Q(\sect_addr_buf_reg_n_2_[6] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[7]),
        .Q(\sect_addr_buf_reg_n_2_[7] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[8]),
        .Q(\sect_addr_buf_reg_n_2_[8] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(sect_addr[9]),
        .Q(\sect_addr_buf_reg_n_2_[9] ),
        .R(fifo_rctl_n_4));
  FDRE \sect_cnt_reg[0] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_49),
        .Q(sect_cnt_reg[0]),
        .R(SR));
  FDRE \sect_cnt_reg[10] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_55),
        .Q(sect_cnt_reg[10]),
        .R(SR));
  FDRE \sect_cnt_reg[11] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_54),
        .Q(sect_cnt_reg[11]),
        .R(SR));
  FDRE \sect_cnt_reg[12] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_61),
        .Q(sect_cnt_reg[12]),
        .R(SR));
  FDRE \sect_cnt_reg[13] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_60),
        .Q(sect_cnt_reg[13]),
        .R(SR));
  FDRE \sect_cnt_reg[14] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_59),
        .Q(sect_cnt_reg[14]),
        .R(SR));
  FDRE \sect_cnt_reg[15] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_58),
        .Q(sect_cnt_reg[15]),
        .R(SR));
  FDRE \sect_cnt_reg[16] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_65),
        .Q(sect_cnt_reg[16]),
        .R(SR));
  FDRE \sect_cnt_reg[17] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_64),
        .Q(sect_cnt_reg[17]),
        .R(SR));
  FDRE \sect_cnt_reg[18] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_63),
        .Q(sect_cnt_reg[18]),
        .R(SR));
  FDRE \sect_cnt_reg[19] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_62),
        .Q(sect_cnt_reg[19]),
        .R(SR));
  FDRE \sect_cnt_reg[1] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_48),
        .Q(sect_cnt_reg[1]),
        .R(SR));
  FDRE \sect_cnt_reg[2] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_47),
        .Q(sect_cnt_reg[2]),
        .R(SR));
  FDRE \sect_cnt_reg[3] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_46),
        .Q(sect_cnt_reg[3]),
        .R(SR));
  FDRE \sect_cnt_reg[4] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_53),
        .Q(sect_cnt_reg[4]),
        .R(SR));
  FDRE \sect_cnt_reg[5] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_52),
        .Q(sect_cnt_reg[5]),
        .R(SR));
  FDRE \sect_cnt_reg[6] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_51),
        .Q(sect_cnt_reg[6]),
        .R(SR));
  FDRE \sect_cnt_reg[7] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_50),
        .Q(sect_cnt_reg[7]),
        .R(SR));
  FDRE \sect_cnt_reg[8] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_57),
        .Q(sect_cnt_reg[8]),
        .R(SR));
  FDRE \sect_cnt_reg[9] 
       (.C(ap_clk),
        .CE(fifo_rctl_n_23),
        .D(fifo_rreq_n_56),
        .Q(sect_cnt_reg[9]),
        .R(SR));
  FDRE \sect_len_buf_reg[0] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_21),
        .Q(\sect_len_buf_reg_n_2_[0] ),
        .R(SR));
  FDRE \sect_len_buf_reg[1] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_20),
        .Q(\sect_len_buf_reg_n_2_[1] ),
        .R(SR));
  FDRE \sect_len_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_19),
        .Q(\sect_len_buf_reg_n_2_[2] ),
        .R(SR));
  FDRE \sect_len_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_18),
        .Q(\sect_len_buf_reg_n_2_[3] ),
        .R(SR));
  FDRE \sect_len_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_17),
        .Q(\sect_len_buf_reg_n_2_[4] ),
        .R(SR));
  FDRE \sect_len_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_16),
        .Q(\sect_len_buf_reg_n_2_[5] ),
        .R(SR));
  FDRE \sect_len_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_15),
        .Q(\sect_len_buf_reg_n_2_[6] ),
        .R(SR));
  FDRE \sect_len_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_14),
        .Q(\sect_len_buf_reg_n_2_[7] ),
        .R(SR));
  FDRE \sect_len_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_13),
        .Q(\sect_len_buf_reg_n_2_[8] ),
        .R(SR));
  FDRE \sect_len_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_15_in),
        .D(fifo_rctl_n_12),
        .Q(\sect_len_buf_reg_n_2_[9] ),
        .R(SR));
  FDRE \start_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[10] ),
        .Q(\start_addr_buf_reg_n_2_[10] ),
        .R(SR));
  FDRE \start_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[11] ),
        .Q(\start_addr_buf_reg_n_2_[11] ),
        .R(SR));
  FDRE \start_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[0]),
        .Q(p_0_in_0[0]),
        .R(SR));
  FDRE \start_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[1]),
        .Q(p_0_in_0[1]),
        .R(SR));
  FDRE \start_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[2]),
        .Q(p_0_in_0[2]),
        .R(SR));
  FDRE \start_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[3]),
        .Q(p_0_in_0[3]),
        .R(SR));
  FDRE \start_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[4]),
        .Q(p_0_in_0[4]),
        .R(SR));
  FDRE \start_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[5]),
        .Q(p_0_in_0[5]),
        .R(SR));
  FDRE \start_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[6]),
        .Q(p_0_in_0[6]),
        .R(SR));
  FDRE \start_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[7]),
        .Q(p_0_in_0[7]),
        .R(SR));
  FDRE \start_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[8]),
        .Q(p_0_in_0[8]),
        .R(SR));
  FDRE \start_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[9]),
        .Q(p_0_in_0[9]),
        .R(SR));
  FDRE \start_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[10]),
        .Q(p_0_in_0[10]),
        .R(SR));
  FDRE \start_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[11]),
        .Q(p_0_in_0[11]),
        .R(SR));
  FDRE \start_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[12]),
        .Q(p_0_in_0[12]),
        .R(SR));
  FDRE \start_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[13]),
        .Q(p_0_in_0[13]),
        .R(SR));
  FDRE \start_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[14]),
        .Q(p_0_in_0[14]),
        .R(SR));
  FDRE \start_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[15]),
        .Q(p_0_in_0[15]),
        .R(SR));
  FDRE \start_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[16]),
        .Q(p_0_in_0[16]),
        .R(SR));
  FDRE \start_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[17]),
        .Q(p_0_in_0[17]),
        .R(SR));
  FDRE \start_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[2] ),
        .Q(\start_addr_buf_reg_n_2_[2] ),
        .R(SR));
  FDRE \start_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[18]),
        .Q(p_0_in_0[18]),
        .R(SR));
  FDRE \start_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(data[19]),
        .Q(p_0_in_0[19]),
        .R(SR));
  FDRE \start_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[3] ),
        .Q(\start_addr_buf_reg_n_2_[3] ),
        .R(SR));
  FDRE \start_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[4] ),
        .Q(\start_addr_buf_reg_n_2_[4] ),
        .R(SR));
  FDRE \start_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[5] ),
        .Q(\start_addr_buf_reg_n_2_[5] ),
        .R(SR));
  FDRE \start_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[6] ),
        .Q(\start_addr_buf_reg_n_2_[6] ),
        .R(SR));
  FDRE \start_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[7] ),
        .Q(\start_addr_buf_reg_n_2_[7] ),
        .R(SR));
  FDRE \start_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[8] ),
        .Q(\start_addr_buf_reg_n_2_[8] ),
        .R(SR));
  FDRE \start_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_rreq),
        .D(\start_addr_reg_n_2_[9] ),
        .Q(\start_addr_buf_reg_n_2_[9] ),
        .R(SR));
  FDRE \start_addr_reg[10] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[8]),
        .Q(\start_addr_reg_n_2_[10] ),
        .R(SR));
  FDRE \start_addr_reg[11] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[9]),
        .Q(\start_addr_reg_n_2_[11] ),
        .R(SR));
  FDRE \start_addr_reg[12] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[10]),
        .Q(data[0]),
        .R(SR));
  FDRE \start_addr_reg[13] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[11]),
        .Q(data[1]),
        .R(SR));
  FDRE \start_addr_reg[14] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[12]),
        .Q(data[2]),
        .R(SR));
  FDRE \start_addr_reg[15] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[13]),
        .Q(data[3]),
        .R(SR));
  FDRE \start_addr_reg[16] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[14]),
        .Q(data[4]),
        .R(SR));
  FDRE \start_addr_reg[17] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[15]),
        .Q(data[5]),
        .R(SR));
  FDRE \start_addr_reg[18] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[16]),
        .Q(data[6]),
        .R(SR));
  FDRE \start_addr_reg[19] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[17]),
        .Q(data[7]),
        .R(SR));
  FDRE \start_addr_reg[20] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[18]),
        .Q(data[8]),
        .R(SR));
  FDRE \start_addr_reg[21] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[19]),
        .Q(data[9]),
        .R(SR));
  FDRE \start_addr_reg[22] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[20]),
        .Q(data[10]),
        .R(SR));
  FDRE \start_addr_reg[23] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[21]),
        .Q(data[11]),
        .R(SR));
  FDRE \start_addr_reg[24] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[22]),
        .Q(data[12]),
        .R(SR));
  FDRE \start_addr_reg[25] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[23]),
        .Q(data[13]),
        .R(SR));
  FDRE \start_addr_reg[26] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[24]),
        .Q(data[14]),
        .R(SR));
  FDRE \start_addr_reg[27] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[25]),
        .Q(data[15]),
        .R(SR));
  FDRE \start_addr_reg[28] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[26]),
        .Q(data[16]),
        .R(SR));
  FDRE \start_addr_reg[29] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[27]),
        .Q(data[17]),
        .R(SR));
  FDRE \start_addr_reg[2] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[0]),
        .Q(\start_addr_reg_n_2_[2] ),
        .R(SR));
  FDRE \start_addr_reg[30] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[28]),
        .Q(data[18]),
        .R(SR));
  FDRE \start_addr_reg[31] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[29]),
        .Q(data[19]),
        .R(SR));
  FDRE \start_addr_reg[3] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[1]),
        .Q(\start_addr_reg_n_2_[3] ),
        .R(SR));
  FDRE \start_addr_reg[4] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[2]),
        .Q(\start_addr_reg_n_2_[4] ),
        .R(SR));
  FDRE \start_addr_reg[5] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[3]),
        .Q(\start_addr_reg_n_2_[5] ),
        .R(SR));
  FDRE \start_addr_reg[6] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[4]),
        .Q(\start_addr_reg_n_2_[6] ),
        .R(SR));
  FDRE \start_addr_reg[7] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[5]),
        .Q(\start_addr_reg_n_2_[7] ),
        .R(SR));
  FDRE \start_addr_reg[8] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[6]),
        .Q(\start_addr_reg_n_2_[8] ),
        .R(SR));
  FDRE \start_addr_reg[9] 
       (.C(ap_clk),
        .CE(align_len),
        .D(q[7]),
        .Q(\start_addr_reg_n_2_[9] ),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi_reg_slice" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_reg_slice
   (s_ready_t_reg_0,
    ap_reg_ioackin_DATA_B_ARREADY_reg,
    ap_reg_ioackin_DATA_A_ARREADY_reg,
    \ap_CS_fsm_reg[1] ,
    s_ready_t_reg_1,
    push,
    \q_reg[29] ,
    SR,
    ap_clk,
    ap_rst_n,
    Q,
    ap_reg_ioackin_DATA_B_ARREADY_reg_0,
    ap_reg_ioackin_DATA_A_ARREADY,
    DATA_A_ARREADY,
    rs2f_rreq_ack,
    \b3_reg_241_reg[29] );
  output s_ready_t_reg_0;
  output ap_reg_ioackin_DATA_B_ARREADY_reg;
  output ap_reg_ioackin_DATA_A_ARREADY_reg;
  output \ap_CS_fsm_reg[1] ;
  output [0:0]s_ready_t_reg_1;
  output push;
  output [29:0]\q_reg[29] ;
  input [0:0]SR;
  input ap_clk;
  input ap_rst_n;
  input [0:0]Q;
  input ap_reg_ioackin_DATA_B_ARREADY_reg_0;
  input ap_reg_ioackin_DATA_A_ARREADY;
  input DATA_A_ARREADY;
  input rs2f_rreq_ack;
  input [29:0]\b3_reg_241_reg[29] ;

  wire DATA_A_ARREADY;
  wire [0:0]Q;
  wire [0:0]SR;
  wire \ap_CS_fsm_reg[1] ;
  wire ap_clk;
  wire ap_reg_ioackin_DATA_A_ARREADY;
  wire ap_reg_ioackin_DATA_A_ARREADY_reg;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg;
  wire ap_reg_ioackin_DATA_B_ARREADY_reg_0;
  wire ap_rst_n;
  wire [29:0]\b3_reg_241_reg[29] ;
  wire \data_p1[0]_i_1__1_n_2 ;
  wire \data_p1[10]_i_1__1_n_2 ;
  wire \data_p1[11]_i_1__1_n_2 ;
  wire \data_p1[12]_i_1__1_n_2 ;
  wire \data_p1[13]_i_1__1_n_2 ;
  wire \data_p1[14]_i_1__1_n_2 ;
  wire \data_p1[15]_i_1__1_n_2 ;
  wire \data_p1[16]_i_1__1_n_2 ;
  wire \data_p1[17]_i_1__1_n_2 ;
  wire \data_p1[18]_i_1__1_n_2 ;
  wire \data_p1[19]_i_1__1_n_2 ;
  wire \data_p1[1]_i_1__1_n_2 ;
  wire \data_p1[20]_i_1__1_n_2 ;
  wire \data_p1[21]_i_1__1_n_2 ;
  wire \data_p1[22]_i_1__1_n_2 ;
  wire \data_p1[23]_i_1__1_n_2 ;
  wire \data_p1[24]_i_1__1_n_2 ;
  wire \data_p1[25]_i_1__1_n_2 ;
  wire \data_p1[26]_i_1__1_n_2 ;
  wire \data_p1[27]_i_1__1_n_2 ;
  wire \data_p1[28]_i_1__1_n_2 ;
  wire \data_p1[29]_i_2__0_n_2 ;
  wire \data_p1[2]_i_1__1_n_2 ;
  wire \data_p1[3]_i_1__1_n_2 ;
  wire \data_p1[4]_i_1__1_n_2 ;
  wire \data_p1[5]_i_1__1_n_2 ;
  wire \data_p1[6]_i_1__1_n_2 ;
  wire \data_p1[7]_i_1__1_n_2 ;
  wire \data_p1[8]_i_1__1_n_2 ;
  wire \data_p1[9]_i_1__1_n_2 ;
  wire [29:0]data_p2;
  wire load_p1;
  wire load_p2;
  wire push;
  wire [29:0]\q_reg[29] ;
  wire rs2f_rreq_ack;
  wire s_ready_t_i_1__1_n_2;
  wire s_ready_t_reg_0;
  wire [0:0]s_ready_t_reg_1;
  wire [1:1]state;
  wire \state[0]_i_1__2_n_2 ;
  wire \state[1]_i_1__2_n_2 ;

  LUT5 #(
    .INIT(32'hA8A8A800)) 
    \ap_CS_fsm[1]_i_3 
       (.I0(Q),
        .I1(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I2(s_ready_t_reg_0),
        .I3(ap_reg_ioackin_DATA_A_ARREADY),
        .I4(DATA_A_ARREADY),
        .O(\ap_CS_fsm_reg[1] ));
  LUT6 #(
    .INIT(64'h222A0008222A0000)) 
    ap_reg_ioackin_DATA_A_ARREADY_i_1
       (.I0(ap_rst_n),
        .I1(Q),
        .I2(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I3(s_ready_t_reg_0),
        .I4(ap_reg_ioackin_DATA_A_ARREADY),
        .I5(DATA_A_ARREADY),
        .O(ap_reg_ioackin_DATA_A_ARREADY_reg));
  LUT6 #(
    .INIT(64'h202020202020A8A0)) 
    ap_reg_ioackin_DATA_B_ARREADY_i_1
       (.I0(ap_rst_n),
        .I1(Q),
        .I2(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I3(s_ready_t_reg_0),
        .I4(ap_reg_ioackin_DATA_A_ARREADY),
        .I5(DATA_A_ARREADY),
        .O(ap_reg_ioackin_DATA_B_ARREADY_reg));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[0]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [0]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[0]),
        .O(\data_p1[0]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[10]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [10]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[10]),
        .O(\data_p1[10]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[11]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [11]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[11]),
        .O(\data_p1[11]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[12]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [12]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[12]),
        .O(\data_p1[12]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[13]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [13]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[13]),
        .O(\data_p1[13]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[14]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [14]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[14]),
        .O(\data_p1[14]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[15]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [15]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[15]),
        .O(\data_p1[15]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[16]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [16]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[16]),
        .O(\data_p1[16]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[17]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [17]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[17]),
        .O(\data_p1[17]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[18]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [18]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[18]),
        .O(\data_p1[18]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[19]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [19]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[19]),
        .O(\data_p1[19]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[1]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [1]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[1]),
        .O(\data_p1[1]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[20]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [20]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[20]),
        .O(\data_p1[20]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[21]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [21]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[21]),
        .O(\data_p1[21]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[22]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [22]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[22]),
        .O(\data_p1[22]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[23]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [23]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[23]),
        .O(\data_p1[23]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[24]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [24]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[24]),
        .O(\data_p1[24]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[25]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [25]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[25]),
        .O(\data_p1[25]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[26]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [26]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[26]),
        .O(\data_p1[26]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[27]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [27]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[27]),
        .O(\data_p1[27]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[28]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [28]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[28]),
        .O(\data_p1[28]_i_1__1_n_2 ));
  LUT5 #(
    .INIT(32'h00D08888)) 
    \data_p1[29]_i_1__1 
       (.I0(s_ready_t_reg_1),
        .I1(rs2f_rreq_ack),
        .I2(Q),
        .I3(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I4(state),
        .O(load_p1));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[29]_i_2__0 
       (.I0(\b3_reg_241_reg[29] [29]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[29]),
        .O(\data_p1[29]_i_2__0_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[2]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [2]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[2]),
        .O(\data_p1[2]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[3]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [3]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[3]),
        .O(\data_p1[3]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[4]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [4]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[4]),
        .O(\data_p1[4]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[5]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [5]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[5]),
        .O(\data_p1[5]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[6]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [6]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[6]),
        .O(\data_p1[6]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[7]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [7]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[7]),
        .O(\data_p1[7]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[8]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [8]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[8]),
        .O(\data_p1[8]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[9]_i_1__1 
       (.I0(\b3_reg_241_reg[29] [9]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[9]),
        .O(\data_p1[9]_i_1__1_n_2 ));
  FDRE \data_p1_reg[0] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[0]_i_1__1_n_2 ),
        .Q(\q_reg[29] [0]),
        .R(1'b0));
  FDRE \data_p1_reg[10] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[10]_i_1__1_n_2 ),
        .Q(\q_reg[29] [10]),
        .R(1'b0));
  FDRE \data_p1_reg[11] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[11]_i_1__1_n_2 ),
        .Q(\q_reg[29] [11]),
        .R(1'b0));
  FDRE \data_p1_reg[12] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[12]_i_1__1_n_2 ),
        .Q(\q_reg[29] [12]),
        .R(1'b0));
  FDRE \data_p1_reg[13] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[13]_i_1__1_n_2 ),
        .Q(\q_reg[29] [13]),
        .R(1'b0));
  FDRE \data_p1_reg[14] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[14]_i_1__1_n_2 ),
        .Q(\q_reg[29] [14]),
        .R(1'b0));
  FDRE \data_p1_reg[15] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[15]_i_1__1_n_2 ),
        .Q(\q_reg[29] [15]),
        .R(1'b0));
  FDRE \data_p1_reg[16] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[16]_i_1__1_n_2 ),
        .Q(\q_reg[29] [16]),
        .R(1'b0));
  FDRE \data_p1_reg[17] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[17]_i_1__1_n_2 ),
        .Q(\q_reg[29] [17]),
        .R(1'b0));
  FDRE \data_p1_reg[18] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[18]_i_1__1_n_2 ),
        .Q(\q_reg[29] [18]),
        .R(1'b0));
  FDRE \data_p1_reg[19] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[19]_i_1__1_n_2 ),
        .Q(\q_reg[29] [19]),
        .R(1'b0));
  FDRE \data_p1_reg[1] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[1]_i_1__1_n_2 ),
        .Q(\q_reg[29] [1]),
        .R(1'b0));
  FDRE \data_p1_reg[20] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[20]_i_1__1_n_2 ),
        .Q(\q_reg[29] [20]),
        .R(1'b0));
  FDRE \data_p1_reg[21] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[21]_i_1__1_n_2 ),
        .Q(\q_reg[29] [21]),
        .R(1'b0));
  FDRE \data_p1_reg[22] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[22]_i_1__1_n_2 ),
        .Q(\q_reg[29] [22]),
        .R(1'b0));
  FDRE \data_p1_reg[23] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[23]_i_1__1_n_2 ),
        .Q(\q_reg[29] [23]),
        .R(1'b0));
  FDRE \data_p1_reg[24] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[24]_i_1__1_n_2 ),
        .Q(\q_reg[29] [24]),
        .R(1'b0));
  FDRE \data_p1_reg[25] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[25]_i_1__1_n_2 ),
        .Q(\q_reg[29] [25]),
        .R(1'b0));
  FDRE \data_p1_reg[26] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[26]_i_1__1_n_2 ),
        .Q(\q_reg[29] [26]),
        .R(1'b0));
  FDRE \data_p1_reg[27] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[27]_i_1__1_n_2 ),
        .Q(\q_reg[29] [27]),
        .R(1'b0));
  FDRE \data_p1_reg[28] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[28]_i_1__1_n_2 ),
        .Q(\q_reg[29] [28]),
        .R(1'b0));
  FDRE \data_p1_reg[29] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[29]_i_2__0_n_2 ),
        .Q(\q_reg[29] [29]),
        .R(1'b0));
  FDRE \data_p1_reg[2] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[2]_i_1__1_n_2 ),
        .Q(\q_reg[29] [2]),
        .R(1'b0));
  FDRE \data_p1_reg[3] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[3]_i_1__1_n_2 ),
        .Q(\q_reg[29] [3]),
        .R(1'b0));
  FDRE \data_p1_reg[4] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[4]_i_1__1_n_2 ),
        .Q(\q_reg[29] [4]),
        .R(1'b0));
  FDRE \data_p1_reg[5] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[5]_i_1__1_n_2 ),
        .Q(\q_reg[29] [5]),
        .R(1'b0));
  FDRE \data_p1_reg[6] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[6]_i_1__1_n_2 ),
        .Q(\q_reg[29] [6]),
        .R(1'b0));
  FDRE \data_p1_reg[7] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[7]_i_1__1_n_2 ),
        .Q(\q_reg[29] [7]),
        .R(1'b0));
  FDRE \data_p1_reg[8] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[8]_i_1__1_n_2 ),
        .Q(\q_reg[29] [8]),
        .R(1'b0));
  FDRE \data_p1_reg[9] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[9]_i_1__1_n_2 ),
        .Q(\q_reg[29] [9]),
        .R(1'b0));
  LUT3 #(
    .INIT(8'h20)) 
    \data_p2[29]_i_1__0 
       (.I0(s_ready_t_reg_0),
        .I1(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I2(Q),
        .O(load_p2));
  FDRE \data_p2_reg[0] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [0]),
        .Q(data_p2[0]),
        .R(1'b0));
  FDRE \data_p2_reg[10] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [10]),
        .Q(data_p2[10]),
        .R(1'b0));
  FDRE \data_p2_reg[11] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [11]),
        .Q(data_p2[11]),
        .R(1'b0));
  FDRE \data_p2_reg[12] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [12]),
        .Q(data_p2[12]),
        .R(1'b0));
  FDRE \data_p2_reg[13] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [13]),
        .Q(data_p2[13]),
        .R(1'b0));
  FDRE \data_p2_reg[14] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [14]),
        .Q(data_p2[14]),
        .R(1'b0));
  FDRE \data_p2_reg[15] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [15]),
        .Q(data_p2[15]),
        .R(1'b0));
  FDRE \data_p2_reg[16] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [16]),
        .Q(data_p2[16]),
        .R(1'b0));
  FDRE \data_p2_reg[17] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [17]),
        .Q(data_p2[17]),
        .R(1'b0));
  FDRE \data_p2_reg[18] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [18]),
        .Q(data_p2[18]),
        .R(1'b0));
  FDRE \data_p2_reg[19] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [19]),
        .Q(data_p2[19]),
        .R(1'b0));
  FDRE \data_p2_reg[1] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [1]),
        .Q(data_p2[1]),
        .R(1'b0));
  FDRE \data_p2_reg[20] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [20]),
        .Q(data_p2[20]),
        .R(1'b0));
  FDRE \data_p2_reg[21] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [21]),
        .Q(data_p2[21]),
        .R(1'b0));
  FDRE \data_p2_reg[22] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [22]),
        .Q(data_p2[22]),
        .R(1'b0));
  FDRE \data_p2_reg[23] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [23]),
        .Q(data_p2[23]),
        .R(1'b0));
  FDRE \data_p2_reg[24] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [24]),
        .Q(data_p2[24]),
        .R(1'b0));
  FDRE \data_p2_reg[25] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [25]),
        .Q(data_p2[25]),
        .R(1'b0));
  FDRE \data_p2_reg[26] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [26]),
        .Q(data_p2[26]),
        .R(1'b0));
  FDRE \data_p2_reg[27] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [27]),
        .Q(data_p2[27]),
        .R(1'b0));
  FDRE \data_p2_reg[28] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [28]),
        .Q(data_p2[28]),
        .R(1'b0));
  FDRE \data_p2_reg[29] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [29]),
        .Q(data_p2[29]),
        .R(1'b0));
  FDRE \data_p2_reg[2] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [2]),
        .Q(data_p2[2]),
        .R(1'b0));
  FDRE \data_p2_reg[3] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [3]),
        .Q(data_p2[3]),
        .R(1'b0));
  FDRE \data_p2_reg[4] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [4]),
        .Q(data_p2[4]),
        .R(1'b0));
  FDRE \data_p2_reg[5] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [5]),
        .Q(data_p2[5]),
        .R(1'b0));
  FDRE \data_p2_reg[6] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [6]),
        .Q(data_p2[6]),
        .R(1'b0));
  FDRE \data_p2_reg[7] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [7]),
        .Q(data_p2[7]),
        .R(1'b0));
  FDRE \data_p2_reg[8] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [8]),
        .Q(data_p2[8]),
        .R(1'b0));
  FDRE \data_p2_reg[9] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\b3_reg_241_reg[29] [9]),
        .Q(data_p2[9]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair151" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \mem_reg[4][0]_srl5_i_1__0 
       (.I0(s_ready_t_reg_1),
        .I1(rs2f_rreq_ack),
        .O(push));
  LUT6 #(
    .INIT(64'hFFDFFFFF0F00F0F0)) 
    s_ready_t_i_1__1
       (.I0(Q),
        .I1(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I2(state),
        .I3(rs2f_rreq_ack),
        .I4(s_ready_t_reg_1),
        .I5(s_ready_t_reg_0),
        .O(s_ready_t_i_1__1_n_2));
  FDRE s_ready_t_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(s_ready_t_i_1__1_n_2),
        .Q(s_ready_t_reg_0),
        .R(SR));
  LUT6 #(
    .INIT(64'h0CCCEECC0CCC0CCC)) 
    \state[0]_i_1__2 
       (.I0(s_ready_t_reg_0),
        .I1(s_ready_t_reg_1),
        .I2(rs2f_rreq_ack),
        .I3(state),
        .I4(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I5(Q),
        .O(\state[0]_i_1__2_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair151" *) 
  LUT5 #(
    .INIT(32'hFFD0FFFF)) 
    \state[1]_i_1__2 
       (.I0(Q),
        .I1(ap_reg_ioackin_DATA_B_ARREADY_reg_0),
        .I2(state),
        .I3(rs2f_rreq_ack),
        .I4(s_ready_t_reg_1),
        .O(\state[1]_i_1__2_n_2 ));
  FDRE \state_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[0]_i_1__2_n_2 ),
        .Q(s_ready_t_reg_1),
        .R(SR));
  FDSE \state_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[1]_i_1__2_n_2 ),
        .Q(state),
        .S(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_B_m_axi_reg_slice" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_B_m_axi_reg_slice__parameterized0
   (rdata_ack_t,
    Q,
    \DATA_B_addr_read_reg_282_reg[31] ,
    SR,
    ap_clk,
    \bus_equal_gen.rdata_valid_t_reg ,
    \ap_CS_fsm_reg[8] ,
    \exitcond_reg_268_reg[0] ,
    ap_enable_reg_pp0_iter1_reg,
    \bus_equal_gen.data_buf_reg[31] ,
    DATA_A_RREADY);
  output rdata_ack_t;
  output [0:0]Q;
  output [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  input [0:0]SR;
  input ap_clk;
  input \bus_equal_gen.rdata_valid_t_reg ;
  input \ap_CS_fsm_reg[8] ;
  input \exitcond_reg_268_reg[0] ;
  input ap_enable_reg_pp0_iter1_reg;
  input [31:0]\bus_equal_gen.data_buf_reg[31] ;
  input DATA_A_RREADY;

  wire DATA_A_RREADY;
  wire [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire [0:0]Q;
  wire [0:0]SR;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter1_reg;
  wire [31:0]\bus_equal_gen.data_buf_reg[31] ;
  wire \bus_equal_gen.rdata_valid_t_reg ;
  wire \data_p1[0]_i_1__2_n_2 ;
  wire \data_p1[10]_i_1__2_n_2 ;
  wire \data_p1[11]_i_1__2_n_2 ;
  wire \data_p1[12]_i_1__2_n_2 ;
  wire \data_p1[13]_i_1__2_n_2 ;
  wire \data_p1[14]_i_1__2_n_2 ;
  wire \data_p1[15]_i_1__2_n_2 ;
  wire \data_p1[16]_i_1__2_n_2 ;
  wire \data_p1[17]_i_1__2_n_2 ;
  wire \data_p1[18]_i_1__2_n_2 ;
  wire \data_p1[19]_i_1__2_n_2 ;
  wire \data_p1[1]_i_1__2_n_2 ;
  wire \data_p1[20]_i_1__2_n_2 ;
  wire \data_p1[21]_i_1__2_n_2 ;
  wire \data_p1[22]_i_1__2_n_2 ;
  wire \data_p1[23]_i_1__2_n_2 ;
  wire \data_p1[24]_i_1__2_n_2 ;
  wire \data_p1[25]_i_1__2_n_2 ;
  wire \data_p1[26]_i_1__2_n_2 ;
  wire \data_p1[27]_i_1__2_n_2 ;
  wire \data_p1[28]_i_1__2_n_2 ;
  wire \data_p1[29]_i_1__2_n_2 ;
  wire \data_p1[2]_i_1__2_n_2 ;
  wire \data_p1[30]_i_1__0_n_2 ;
  wire \data_p1[31]_i_2__0_n_2 ;
  wire \data_p1[3]_i_1__2_n_2 ;
  wire \data_p1[4]_i_1__2_n_2 ;
  wire \data_p1[5]_i_1__2_n_2 ;
  wire \data_p1[6]_i_1__2_n_2 ;
  wire \data_p1[7]_i_1__2_n_2 ;
  wire \data_p1[8]_i_1__2_n_2 ;
  wire \data_p1[9]_i_1__2_n_2 ;
  wire \data_p2_reg_n_2_[0] ;
  wire \data_p2_reg_n_2_[10] ;
  wire \data_p2_reg_n_2_[11] ;
  wire \data_p2_reg_n_2_[12] ;
  wire \data_p2_reg_n_2_[13] ;
  wire \data_p2_reg_n_2_[14] ;
  wire \data_p2_reg_n_2_[15] ;
  wire \data_p2_reg_n_2_[16] ;
  wire \data_p2_reg_n_2_[17] ;
  wire \data_p2_reg_n_2_[18] ;
  wire \data_p2_reg_n_2_[19] ;
  wire \data_p2_reg_n_2_[1] ;
  wire \data_p2_reg_n_2_[20] ;
  wire \data_p2_reg_n_2_[21] ;
  wire \data_p2_reg_n_2_[22] ;
  wire \data_p2_reg_n_2_[23] ;
  wire \data_p2_reg_n_2_[24] ;
  wire \data_p2_reg_n_2_[25] ;
  wire \data_p2_reg_n_2_[26] ;
  wire \data_p2_reg_n_2_[27] ;
  wire \data_p2_reg_n_2_[28] ;
  wire \data_p2_reg_n_2_[29] ;
  wire \data_p2_reg_n_2_[2] ;
  wire \data_p2_reg_n_2_[30] ;
  wire \data_p2_reg_n_2_[31] ;
  wire \data_p2_reg_n_2_[3] ;
  wire \data_p2_reg_n_2_[4] ;
  wire \data_p2_reg_n_2_[5] ;
  wire \data_p2_reg_n_2_[6] ;
  wire \data_p2_reg_n_2_[7] ;
  wire \data_p2_reg_n_2_[8] ;
  wire \data_p2_reg_n_2_[9] ;
  wire \exitcond_reg_268_reg[0] ;
  wire load_p1;
  wire load_p2;
  wire rdata_ack_t;
  wire s_ready_t_i_1__2_n_2;
  wire [1:1]state;
  wire \state[0]_i_1__1_n_2 ;
  wire \state[0]_i_2__0_n_2 ;
  wire \state[1]_i_1__1_n_2 ;

  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[0]_i_1__2 
       (.I0(\data_p2_reg_n_2_[0] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [0]),
        .O(\data_p1[0]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[10]_i_1__2 
       (.I0(\data_p2_reg_n_2_[10] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [10]),
        .O(\data_p1[10]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[11]_i_1__2 
       (.I0(\data_p2_reg_n_2_[11] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [11]),
        .O(\data_p1[11]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[12]_i_1__2 
       (.I0(\data_p2_reg_n_2_[12] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [12]),
        .O(\data_p1[12]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[13]_i_1__2 
       (.I0(\data_p2_reg_n_2_[13] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [13]),
        .O(\data_p1[13]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[14]_i_1__2 
       (.I0(\data_p2_reg_n_2_[14] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [14]),
        .O(\data_p1[14]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[15]_i_1__2 
       (.I0(\data_p2_reg_n_2_[15] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [15]),
        .O(\data_p1[15]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[16]_i_1__2 
       (.I0(\data_p2_reg_n_2_[16] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [16]),
        .O(\data_p1[16]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[17]_i_1__2 
       (.I0(\data_p2_reg_n_2_[17] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [17]),
        .O(\data_p1[17]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[18]_i_1__2 
       (.I0(\data_p2_reg_n_2_[18] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [18]),
        .O(\data_p1[18]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[19]_i_1__2 
       (.I0(\data_p2_reg_n_2_[19] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [19]),
        .O(\data_p1[19]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[1]_i_1__2 
       (.I0(\data_p2_reg_n_2_[1] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [1]),
        .O(\data_p1[1]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[20]_i_1__2 
       (.I0(\data_p2_reg_n_2_[20] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [20]),
        .O(\data_p1[20]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[21]_i_1__2 
       (.I0(\data_p2_reg_n_2_[21] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [21]),
        .O(\data_p1[21]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[22]_i_1__2 
       (.I0(\data_p2_reg_n_2_[22] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [22]),
        .O(\data_p1[22]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[23]_i_1__2 
       (.I0(\data_p2_reg_n_2_[23] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [23]),
        .O(\data_p1[23]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[24]_i_1__2 
       (.I0(\data_p2_reg_n_2_[24] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [24]),
        .O(\data_p1[24]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[25]_i_1__2 
       (.I0(\data_p2_reg_n_2_[25] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [25]),
        .O(\data_p1[25]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[26]_i_1__2 
       (.I0(\data_p2_reg_n_2_[26] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [26]),
        .O(\data_p1[26]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[27]_i_1__2 
       (.I0(\data_p2_reg_n_2_[27] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [27]),
        .O(\data_p1[27]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[28]_i_1__2 
       (.I0(\data_p2_reg_n_2_[28] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [28]),
        .O(\data_p1[28]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[29]_i_1__2 
       (.I0(\data_p2_reg_n_2_[29] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [29]),
        .O(\data_p1[29]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[2]_i_1__2 
       (.I0(\data_p2_reg_n_2_[2] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [2]),
        .O(\data_p1[2]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[30]_i_1__0 
       (.I0(\data_p2_reg_n_2_[30] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [30]),
        .O(\data_p1[30]_i_1__0_n_2 ));
  LUT6 #(
    .INIT(64'h00B0000088888888)) 
    \data_p1[31]_i_1__0 
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(state),
        .I2(\ap_CS_fsm_reg[8] ),
        .I3(\exitcond_reg_268_reg[0] ),
        .I4(ap_enable_reg_pp0_iter1_reg),
        .I5(Q),
        .O(load_p1));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[31]_i_2__0 
       (.I0(\data_p2_reg_n_2_[31] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [31]),
        .O(\data_p1[31]_i_2__0_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[3]_i_1__2 
       (.I0(\data_p2_reg_n_2_[3] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [3]),
        .O(\data_p1[3]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[4]_i_1__2 
       (.I0(\data_p2_reg_n_2_[4] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [4]),
        .O(\data_p1[4]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[5]_i_1__2 
       (.I0(\data_p2_reg_n_2_[5] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [5]),
        .O(\data_p1[5]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[6]_i_1__2 
       (.I0(\data_p2_reg_n_2_[6] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [6]),
        .O(\data_p1[6]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[7]_i_1__2 
       (.I0(\data_p2_reg_n_2_[7] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [7]),
        .O(\data_p1[7]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[8]_i_1__2 
       (.I0(\data_p2_reg_n_2_[8] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [8]),
        .O(\data_p1[8]_i_1__2_n_2 ));
  LUT4 #(
    .INIT(16'hFB08)) 
    \data_p1[9]_i_1__2 
       (.I0(\data_p2_reg_n_2_[9] ),
        .I1(Q),
        .I2(state),
        .I3(\bus_equal_gen.data_buf_reg[31] [9]),
        .O(\data_p1[9]_i_1__2_n_2 ));
  FDRE \data_p1_reg[0] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[0]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [0]),
        .R(1'b0));
  FDRE \data_p1_reg[10] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[10]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [10]),
        .R(1'b0));
  FDRE \data_p1_reg[11] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[11]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [11]),
        .R(1'b0));
  FDRE \data_p1_reg[12] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[12]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [12]),
        .R(1'b0));
  FDRE \data_p1_reg[13] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[13]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [13]),
        .R(1'b0));
  FDRE \data_p1_reg[14] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[14]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [14]),
        .R(1'b0));
  FDRE \data_p1_reg[15] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[15]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [15]),
        .R(1'b0));
  FDRE \data_p1_reg[16] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[16]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [16]),
        .R(1'b0));
  FDRE \data_p1_reg[17] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[17]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [17]),
        .R(1'b0));
  FDRE \data_p1_reg[18] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[18]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [18]),
        .R(1'b0));
  FDRE \data_p1_reg[19] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[19]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [19]),
        .R(1'b0));
  FDRE \data_p1_reg[1] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[1]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [1]),
        .R(1'b0));
  FDRE \data_p1_reg[20] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[20]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [20]),
        .R(1'b0));
  FDRE \data_p1_reg[21] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[21]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [21]),
        .R(1'b0));
  FDRE \data_p1_reg[22] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[22]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [22]),
        .R(1'b0));
  FDRE \data_p1_reg[23] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[23]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [23]),
        .R(1'b0));
  FDRE \data_p1_reg[24] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[24]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [24]),
        .R(1'b0));
  FDRE \data_p1_reg[25] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[25]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [25]),
        .R(1'b0));
  FDRE \data_p1_reg[26] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[26]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [26]),
        .R(1'b0));
  FDRE \data_p1_reg[27] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[27]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [27]),
        .R(1'b0));
  FDRE \data_p1_reg[28] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[28]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [28]),
        .R(1'b0));
  FDRE \data_p1_reg[29] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[29]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [29]),
        .R(1'b0));
  FDRE \data_p1_reg[2] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[2]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [2]),
        .R(1'b0));
  FDRE \data_p1_reg[30] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[30]_i_1__0_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [30]),
        .R(1'b0));
  FDRE \data_p1_reg[31] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[31]_i_2__0_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [31]),
        .R(1'b0));
  FDRE \data_p1_reg[3] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[3]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [3]),
        .R(1'b0));
  FDRE \data_p1_reg[4] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[4]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [4]),
        .R(1'b0));
  FDRE \data_p1_reg[5] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[5]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [5]),
        .R(1'b0));
  FDRE \data_p1_reg[6] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[6]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [6]),
        .R(1'b0));
  FDRE \data_p1_reg[7] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[7]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [7]),
        .R(1'b0));
  FDRE \data_p1_reg[8] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[8]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [8]),
        .R(1'b0));
  FDRE \data_p1_reg[9] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[9]_i_1__2_n_2 ),
        .Q(\DATA_B_addr_read_reg_282_reg[31] [9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    \data_p2[31]_i_1__0 
       (.I0(rdata_ack_t),
        .I1(\bus_equal_gen.rdata_valid_t_reg ),
        .O(load_p2));
  FDRE \data_p2_reg[0] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [0]),
        .Q(\data_p2_reg_n_2_[0] ),
        .R(1'b0));
  FDRE \data_p2_reg[10] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [10]),
        .Q(\data_p2_reg_n_2_[10] ),
        .R(1'b0));
  FDRE \data_p2_reg[11] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [11]),
        .Q(\data_p2_reg_n_2_[11] ),
        .R(1'b0));
  FDRE \data_p2_reg[12] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [12]),
        .Q(\data_p2_reg_n_2_[12] ),
        .R(1'b0));
  FDRE \data_p2_reg[13] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [13]),
        .Q(\data_p2_reg_n_2_[13] ),
        .R(1'b0));
  FDRE \data_p2_reg[14] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [14]),
        .Q(\data_p2_reg_n_2_[14] ),
        .R(1'b0));
  FDRE \data_p2_reg[15] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [15]),
        .Q(\data_p2_reg_n_2_[15] ),
        .R(1'b0));
  FDRE \data_p2_reg[16] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [16]),
        .Q(\data_p2_reg_n_2_[16] ),
        .R(1'b0));
  FDRE \data_p2_reg[17] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [17]),
        .Q(\data_p2_reg_n_2_[17] ),
        .R(1'b0));
  FDRE \data_p2_reg[18] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [18]),
        .Q(\data_p2_reg_n_2_[18] ),
        .R(1'b0));
  FDRE \data_p2_reg[19] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [19]),
        .Q(\data_p2_reg_n_2_[19] ),
        .R(1'b0));
  FDRE \data_p2_reg[1] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [1]),
        .Q(\data_p2_reg_n_2_[1] ),
        .R(1'b0));
  FDRE \data_p2_reg[20] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [20]),
        .Q(\data_p2_reg_n_2_[20] ),
        .R(1'b0));
  FDRE \data_p2_reg[21] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [21]),
        .Q(\data_p2_reg_n_2_[21] ),
        .R(1'b0));
  FDRE \data_p2_reg[22] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [22]),
        .Q(\data_p2_reg_n_2_[22] ),
        .R(1'b0));
  FDRE \data_p2_reg[23] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [23]),
        .Q(\data_p2_reg_n_2_[23] ),
        .R(1'b0));
  FDRE \data_p2_reg[24] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [24]),
        .Q(\data_p2_reg_n_2_[24] ),
        .R(1'b0));
  FDRE \data_p2_reg[25] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [25]),
        .Q(\data_p2_reg_n_2_[25] ),
        .R(1'b0));
  FDRE \data_p2_reg[26] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [26]),
        .Q(\data_p2_reg_n_2_[26] ),
        .R(1'b0));
  FDRE \data_p2_reg[27] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [27]),
        .Q(\data_p2_reg_n_2_[27] ),
        .R(1'b0));
  FDRE \data_p2_reg[28] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [28]),
        .Q(\data_p2_reg_n_2_[28] ),
        .R(1'b0));
  FDRE \data_p2_reg[29] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [29]),
        .Q(\data_p2_reg_n_2_[29] ),
        .R(1'b0));
  FDRE \data_p2_reg[2] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [2]),
        .Q(\data_p2_reg_n_2_[2] ),
        .R(1'b0));
  FDRE \data_p2_reg[30] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [30]),
        .Q(\data_p2_reg_n_2_[30] ),
        .R(1'b0));
  FDRE \data_p2_reg[31] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [31]),
        .Q(\data_p2_reg_n_2_[31] ),
        .R(1'b0));
  FDRE \data_p2_reg[3] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [3]),
        .Q(\data_p2_reg_n_2_[3] ),
        .R(1'b0));
  FDRE \data_p2_reg[4] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [4]),
        .Q(\data_p2_reg_n_2_[4] ),
        .R(1'b0));
  FDRE \data_p2_reg[5] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [5]),
        .Q(\data_p2_reg_n_2_[5] ),
        .R(1'b0));
  FDRE \data_p2_reg[6] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [6]),
        .Q(\data_p2_reg_n_2_[6] ),
        .R(1'b0));
  FDRE \data_p2_reg[7] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [7]),
        .Q(\data_p2_reg_n_2_[7] ),
        .R(1'b0));
  FDRE \data_p2_reg[8] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [8]),
        .Q(\data_p2_reg_n_2_[8] ),
        .R(1'b0));
  FDRE \data_p2_reg[9] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\bus_equal_gen.data_buf_reg[31] [9]),
        .Q(\data_p2_reg_n_2_[9] ),
        .R(1'b0));
  LUT5 #(
    .INIT(32'hFF7F3C0C)) 
    s_ready_t_i_1__2
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(state),
        .I2(Q),
        .I3(DATA_A_RREADY),
        .I4(rdata_ack_t),
        .O(s_ready_t_i_1__2_n_2));
  FDRE s_ready_t_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(s_ready_t_i_1__2_n_2),
        .Q(rdata_ack_t),
        .R(SR));
  LUT5 #(
    .INIT(32'hEECCE0CC)) 
    \state[0]_i_1__1 
       (.I0(rdata_ack_t),
        .I1(Q),
        .I2(\state[0]_i_2__0_n_2 ),
        .I3(state),
        .I4(\bus_equal_gen.rdata_valid_t_reg ),
        .O(\state[0]_i_1__1_n_2 ));
  LUT4 #(
    .INIT(16'hA2AA)) 
    \state[0]_i_2__0 
       (.I0(Q),
        .I1(ap_enable_reg_pp0_iter1_reg),
        .I2(\exitcond_reg_268_reg[0] ),
        .I3(\ap_CS_fsm_reg[8] ),
        .O(\state[0]_i_2__0_n_2 ));
  LUT6 #(
    .INIT(64'h44F44444FFFFFFFF)) 
    \state[1]_i_1__1 
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(state),
        .I2(\ap_CS_fsm_reg[8] ),
        .I3(\exitcond_reg_268_reg[0] ),
        .I4(ap_enable_reg_pp0_iter1_reg),
        .I5(Q),
        .O(\state[1]_i_1__1_n_2 ));
  FDRE \state_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[0]_i_1__1_n_2 ),
        .Q(Q),
        .R(SR));
  FDSE \state_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[1]_i_1__1_n_2 ),
        .Q(state),
        .S(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi
   (D,
    DATA_C_AWREADY,
    DATA_C_BVALID,
    \rdata_reg[3] ,
    DATA_C_BREADY,
    SR,
    m_axi_DATA_C_WVALID,
    m_axi_DATA_C_RREADY,
    ap_enable_reg_pp0_iter0_reg,
    ap_enable_reg_pp0_iter4_reg,
    m_axi_DATA_C_AWADDR,
    AWLEN,
    mem_reg,
    DATA_C_WREADY,
    m_axi_DATA_C_BREADY,
    m_axi_DATA_C_WDATA,
    m_axi_DATA_C_WSTRB,
    m_axi_DATA_C_AWVALID,
    m_axi_DATA_C_WLAST,
    Q,
    ap_enable_reg_pp0_iter4_reg_0,
    s_axi_CTL_ARADDR,
    \int_a_reg[3] ,
    ap_rst_n,
    m_axi_DATA_C_WREADY,
    m_axi_DATA_C_RVALID,
    ap_enable_reg_pp0_iter0,
    exitcond_fu_220_p2,
    \ap_CS_fsm_reg[8] ,
    ap_enable_reg_pp0_iter3,
    ap_enable_reg_pp0_iter4_reg_1,
    ap_block_pp0_stage0_flag00011011,
    \int_b_reg[3] ,
    ap_reg_pp0_iter3_exitcond_reg_268,
    ap_clk,
    \tmp_reg_287_reg[31] ,
    WEBWE,
    \c5_reg_236_reg[29] ,
    m_axi_DATA_C_AWREADY,
    m_axi_DATA_C_BVALID);
  output [2:0]D;
  output DATA_C_AWREADY;
  output DATA_C_BVALID;
  output [0:0]\rdata_reg[3] ;
  output DATA_C_BREADY;
  output [0:0]SR;
  output m_axi_DATA_C_WVALID;
  output m_axi_DATA_C_RREADY;
  output ap_enable_reg_pp0_iter0_reg;
  output ap_enable_reg_pp0_iter4_reg;
  output [29:0]m_axi_DATA_C_AWADDR;
  output [3:0]AWLEN;
  output mem_reg;
  output DATA_C_WREADY;
  output m_axi_DATA_C_BREADY;
  output [31:0]m_axi_DATA_C_WDATA;
  output [3:0]m_axi_DATA_C_WSTRB;
  output m_axi_DATA_C_AWVALID;
  output m_axi_DATA_C_WLAST;
  input [4:0]Q;
  input ap_enable_reg_pp0_iter4_reg_0;
  input [5:0]s_axi_CTL_ARADDR;
  input \int_a_reg[3] ;
  input ap_rst_n;
  input m_axi_DATA_C_WREADY;
  input m_axi_DATA_C_RVALID;
  input ap_enable_reg_pp0_iter0;
  input exitcond_fu_220_p2;
  input \ap_CS_fsm_reg[8] ;
  input ap_enable_reg_pp0_iter3;
  input ap_enable_reg_pp0_iter4_reg_1;
  input ap_block_pp0_stage0_flag00011011;
  input [0:0]\int_b_reg[3] ;
  input ap_reg_pp0_iter3_exitcond_reg_268;
  input ap_clk;
  input [31:0]\tmp_reg_287_reg[31] ;
  input [0:0]WEBWE;
  input [29:0]\c5_reg_236_reg[29] ;
  input m_axi_DATA_C_AWREADY;
  input m_axi_DATA_C_BVALID;

  wire [3:0]AWLEN;
  wire AWVALID_Dummy;
  wire [2:0]D;
  wire DATA_C_AWREADY;
  wire DATA_C_BREADY;
  wire DATA_C_BVALID;
  wire DATA_C_WREADY;
  wire [4:0]Q;
  wire [0:0]SR;
  wire [0:0]WEBWE;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_block_pp0_stage0_flag00011011;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter0_reg;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_enable_reg_pp0_iter4_reg_0;
  wire ap_enable_reg_pp0_iter4_reg_1;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire ap_rst_n;
  wire bus_write_n_51;
  wire bus_write_n_52;
  wire [29:0]\c5_reg_236_reg[29] ;
  wire exitcond_fu_220_p2;
  wire \int_a_reg[3] ;
  wire [0:0]\int_b_reg[3] ;
  wire [29:0]m_axi_DATA_C_AWADDR;
  wire m_axi_DATA_C_AWREADY;
  wire m_axi_DATA_C_AWVALID;
  wire m_axi_DATA_C_BREADY;
  wire m_axi_DATA_C_BVALID;
  wire m_axi_DATA_C_RREADY;
  wire m_axi_DATA_C_RVALID;
  wire [31:0]m_axi_DATA_C_WDATA;
  wire m_axi_DATA_C_WLAST;
  wire m_axi_DATA_C_WREADY;
  wire [3:0]m_axi_DATA_C_WSTRB;
  wire m_axi_DATA_C_WVALID;
  wire mem_reg;
  wire [0:0]p_0_in__1;
  wire [0:0]\rdata_reg[3] ;
  wire [5:0]s_axi_CTL_ARADDR;
  wire [0:0]throttl_cnt_reg;
  wire [31:0]\tmp_reg_287_reg[31] ;
  wire wreq_throttl_n_3;
  wire wreq_throttl_n_5;
  wire wreq_throttl_n_6;

  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_read bus_read
       (.SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .m_axi_DATA_C_RREADY(m_axi_DATA_C_RREADY),
        .m_axi_DATA_C_RVALID(m_axi_DATA_C_RVALID));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_write bus_write
       (.AWVALID_Dummy(AWVALID_Dummy),
        .D(D),
        .DATA_C_BREADY(DATA_C_BREADY),
        .E(bus_write_n_51),
        .Q(Q),
        .SR(SR),
        .WEBWE(WEBWE),
        .\ap_CS_fsm_reg[8] (\ap_CS_fsm_reg[8] ),
        .ap_block_pp0_stage0_flag00011011(ap_block_pp0_stage0_flag00011011),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter0(ap_enable_reg_pp0_iter0),
        .ap_enable_reg_pp0_iter0_reg(ap_enable_reg_pp0_iter0_reg),
        .ap_enable_reg_pp0_iter3(ap_enable_reg_pp0_iter3),
        .ap_enable_reg_pp0_iter4_reg(ap_enable_reg_pp0_iter4_reg),
        .ap_enable_reg_pp0_iter4_reg_0(ap_enable_reg_pp0_iter4_reg_0),
        .ap_enable_reg_pp0_iter4_reg_1(ap_enable_reg_pp0_iter4_reg_1),
        .ap_reg_pp0_iter3_exitcond_reg_268(ap_reg_pp0_iter3_exitcond_reg_268),
        .ap_rst_n(ap_rst_n),
        .\c5_reg_236_reg[29] (\c5_reg_236_reg[29] ),
        .empty_n_reg(DATA_C_BVALID),
        .exitcond_fu_220_p2(exitcond_fu_220_p2),
        .\int_a_reg[3] (\int_a_reg[3] ),
        .\int_b_reg[3] (\int_b_reg[3] ),
        .m_axi_DATA_C_AWADDR(m_axi_DATA_C_AWADDR),
        .\m_axi_DATA_C_AWLEN[3] (AWLEN),
        .m_axi_DATA_C_AWREADY(m_axi_DATA_C_AWREADY),
        .m_axi_DATA_C_AWVALID(m_axi_DATA_C_AWVALID),
        .m_axi_DATA_C_BREADY(m_axi_DATA_C_BREADY),
        .m_axi_DATA_C_BVALID(m_axi_DATA_C_BVALID),
        .m_axi_DATA_C_WDATA(m_axi_DATA_C_WDATA),
        .m_axi_DATA_C_WLAST(m_axi_DATA_C_WLAST),
        .m_axi_DATA_C_WREADY(m_axi_DATA_C_WREADY),
        .m_axi_DATA_C_WSTRB(m_axi_DATA_C_WSTRB),
        .m_axi_DATA_C_WVALID(m_axi_DATA_C_WVALID),
        .mem_reg(DATA_C_WREADY),
        .mem_reg_0(mem_reg),
        .\rdata_reg[3] (\rdata_reg[3] ),
        .s_axi_CTL_ARADDR(s_axi_CTL_ARADDR),
        .s_ready_t_reg(DATA_C_AWREADY),
        .\throttl_cnt_reg[0] (p_0_in__1),
        .\throttl_cnt_reg[0]_0 (throttl_cnt_reg),
        .\throttl_cnt_reg[1] (wreq_throttl_n_3),
        .\throttl_cnt_reg[5] (wreq_throttl_n_6),
        .\throttl_cnt_reg[6] (wreq_throttl_n_5),
        .\throttl_cnt_reg[7] (bus_write_n_52),
        .\tmp_reg_287_reg[31] (\tmp_reg_287_reg[31] ));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_throttl wreq_throttl
       (.AWLEN(AWLEN[3:1]),
        .AWVALID_Dummy(AWVALID_Dummy),
        .D(p_0_in__1),
        .E(bus_write_n_51),
        .Q(throttl_cnt_reg),
        .SR(SR),
        .ap_clk(ap_clk),
        .\could_multi_bursts.AWVALID_Dummy_reg (wreq_throttl_n_5),
        .\could_multi_bursts.awlen_buf_reg[1] (bus_write_n_52),
        .\could_multi_bursts.loop_cnt_reg[5] (wreq_throttl_n_6),
        .m_axi_DATA_C_AWVALID(m_axi_DATA_C_AWVALID),
        .\throttl_cnt_reg[5]_0 (wreq_throttl_n_3));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_buffer" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_buffer
   (mem_reg_0,
    SR,
    S,
    Q,
    p_27_in,
    \usedw_reg[7]_0 ,
    mem_reg_1,
    DI,
    \bus_equal_gen.WVALID_Dummy_reg ,
    \bus_equal_gen.strb_buf_reg[3] ,
    ap_clk,
    \tmp_reg_287_reg[31] ,
    WEBWE,
    ap_rst_n,
    burst_valid,
    m_axi_DATA_C_WREADY,
    \bus_equal_gen.WVALID_Dummy_reg_0 ,
    ap_enable_reg_pp0_iter4_reg,
    ap_reg_pp0_iter3_exitcond_reg_268,
    D);
  output mem_reg_0;
  output [0:0]SR;
  output [3:0]S;
  output [5:0]Q;
  output p_27_in;
  output [2:0]\usedw_reg[7]_0 ;
  output mem_reg_1;
  output [0:0]DI;
  output \bus_equal_gen.WVALID_Dummy_reg ;
  output [35:0]\bus_equal_gen.strb_buf_reg[3] ;
  input ap_clk;
  input [31:0]\tmp_reg_287_reg[31] ;
  input [0:0]WEBWE;
  input ap_rst_n;
  input burst_valid;
  input m_axi_DATA_C_WREADY;
  input \bus_equal_gen.WVALID_Dummy_reg_0 ;
  input ap_enable_reg_pp0_iter4_reg;
  input ap_reg_pp0_iter3_exitcond_reg_268;
  input [6:0]D;

  wire [6:0]D;
  wire [0:0]DI;
  wire [5:0]Q;
  wire [3:0]S;
  wire [0:0]SR;
  wire [0:0]WEBWE;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire ap_rst_n;
  wire burst_valid;
  wire \bus_equal_gen.WVALID_Dummy_reg ;
  wire \bus_equal_gen.WVALID_Dummy_reg_0 ;
  wire [35:0]\bus_equal_gen.strb_buf_reg[3] ;
  wire data_valid;
  wire \dout_buf[0]_i_1_n_2 ;
  wire \dout_buf[10]_i_1_n_2 ;
  wire \dout_buf[11]_i_1_n_2 ;
  wire \dout_buf[12]_i_1_n_2 ;
  wire \dout_buf[13]_i_1_n_2 ;
  wire \dout_buf[14]_i_1_n_2 ;
  wire \dout_buf[15]_i_1_n_2 ;
  wire \dout_buf[16]_i_1_n_2 ;
  wire \dout_buf[17]_i_1_n_2 ;
  wire \dout_buf[18]_i_1_n_2 ;
  wire \dout_buf[19]_i_1_n_2 ;
  wire \dout_buf[1]_i_1_n_2 ;
  wire \dout_buf[20]_i_1_n_2 ;
  wire \dout_buf[21]_i_1_n_2 ;
  wire \dout_buf[22]_i_1_n_2 ;
  wire \dout_buf[23]_i_1_n_2 ;
  wire \dout_buf[24]_i_1_n_2 ;
  wire \dout_buf[25]_i_1_n_2 ;
  wire \dout_buf[26]_i_1_n_2 ;
  wire \dout_buf[27]_i_1_n_2 ;
  wire \dout_buf[28]_i_1_n_2 ;
  wire \dout_buf[29]_i_1_n_2 ;
  wire \dout_buf[2]_i_1_n_2 ;
  wire \dout_buf[30]_i_1_n_2 ;
  wire \dout_buf[31]_i_1_n_2 ;
  wire \dout_buf[32]_i_1_n_2 ;
  wire \dout_buf[33]_i_1_n_2 ;
  wire \dout_buf[34]_i_1_n_2 ;
  wire \dout_buf[35]_i_2_n_2 ;
  wire \dout_buf[3]_i_1_n_2 ;
  wire \dout_buf[4]_i_1_n_2 ;
  wire \dout_buf[5]_i_1_n_2 ;
  wire \dout_buf[6]_i_1_n_2 ;
  wire \dout_buf[7]_i_1_n_2 ;
  wire \dout_buf[8]_i_1_n_2 ;
  wire \dout_buf[9]_i_1_n_2 ;
  wire dout_valid_i_1__1_n_2;
  wire empty_n_i_1_n_2;
  wire empty_n_i_2__1_n_2;
  wire empty_n_i_3__1_n_2;
  wire empty_n_reg_n_2;
  wire full_n_i_1__1_n_2;
  wire full_n_i_2__6_n_2;
  wire full_n_i_3__5_n_2;
  wire m_axi_DATA_C_WREADY;
  wire mem_reg_0;
  wire mem_reg_1;
  wire mem_reg_i_10__1_n_2;
  wire mem_reg_i_11_n_2;
  wire mem_reg_i_8__1_n_2;
  wire p_27_in;
  wire pop;
  wire push;
  wire [35:0]q_buf;
  wire [35:0]q_tmp;
  wire [7:0]raddr;
  wire [7:1]rnext;
  wire show_ahead;
  wire show_ahead0;
  wire [31:0]\tmp_reg_287_reg[31] ;
  wire \usedw[0]_i_1__1_n_2 ;
  wire \usedw[7]_i_1__2_n_2 ;
  wire [2:0]\usedw_reg[7]_0 ;
  wire [7:6]usedw_reg__0;
  wire [7:0]waddr;
  wire \waddr[0]_i_1__1_n_2 ;
  wire \waddr[1]_i_1__1_n_2 ;
  wire \waddr[2]_i_1__1_n_2 ;
  wire \waddr[3]_i_1__1_n_2 ;
  wire \waddr[4]_i_1__1_n_2 ;
  wire \waddr[5]_i_1__1_n_2 ;
  wire \waddr[6]_i_1__1_n_2 ;
  wire \waddr[6]_i_2__1_n_2 ;
  wire \waddr[7]_i_2__1_n_2 ;
  wire \waddr[7]_i_3__1_n_2 ;
  wire \waddr[7]_i_4__1_n_2 ;

  (* SOFT_HLUTNM = "soft_lutpair189" *) 
  LUT4 #(
    .INIT(16'h8F88)) 
    \bus_equal_gen.WVALID_Dummy_i_1 
       (.I0(data_valid),
        .I1(burst_valid),
        .I2(m_axi_DATA_C_WREADY),
        .I3(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .O(\bus_equal_gen.WVALID_Dummy_reg ));
  (* SOFT_HLUTNM = "soft_lutpair189" *) 
  LUT4 #(
    .INIT(16'hD000)) 
    \bus_equal_gen.data_buf[31]_i_1__1 
       (.I0(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .I1(m_axi_DATA_C_WREADY),
        .I2(data_valid),
        .I3(burst_valid),
        .O(p_27_in));
  LUT1 #(
    .INIT(2'h1)) 
    \could_multi_bursts.ARVALID_Dummy_i_1__0 
       (.I0(ap_rst_n),
        .O(SR));
  (* SOFT_HLUTNM = "soft_lutpair191" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[0]_i_1 
       (.I0(q_tmp[0]),
        .I1(q_buf[0]),
        .I2(show_ahead),
        .O(\dout_buf[0]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair201" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[10]_i_1 
       (.I0(q_tmp[10]),
        .I1(q_buf[10]),
        .I2(show_ahead),
        .O(\dout_buf[10]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair199" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[11]_i_1 
       (.I0(q_tmp[11]),
        .I1(q_buf[11]),
        .I2(show_ahead),
        .O(\dout_buf[11]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair202" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[12]_i_1 
       (.I0(q_tmp[12]),
        .I1(q_buf[12]),
        .I2(show_ahead),
        .O(\dout_buf[12]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair203" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[13]_i_1 
       (.I0(q_tmp[13]),
        .I1(q_buf[13]),
        .I2(show_ahead),
        .O(\dout_buf[13]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair206" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[14]_i_1 
       (.I0(q_tmp[14]),
        .I1(q_buf[14]),
        .I2(show_ahead),
        .O(\dout_buf[14]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair206" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[15]_i_1 
       (.I0(q_tmp[15]),
        .I1(q_buf[15]),
        .I2(show_ahead),
        .O(\dout_buf[15]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair198" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[16]_i_1 
       (.I0(q_tmp[16]),
        .I1(q_buf[16]),
        .I2(show_ahead),
        .O(\dout_buf[16]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair201" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[17]_i_1 
       (.I0(q_tmp[17]),
        .I1(q_buf[17]),
        .I2(show_ahead),
        .O(\dout_buf[17]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair191" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[18]_i_1 
       (.I0(q_tmp[18]),
        .I1(q_buf[18]),
        .I2(show_ahead),
        .O(\dout_buf[18]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair192" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[19]_i_1 
       (.I0(q_tmp[19]),
        .I1(q_buf[19]),
        .I2(show_ahead),
        .O(\dout_buf[19]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair192" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[1]_i_1 
       (.I0(q_tmp[1]),
        .I1(q_buf[1]),
        .I2(show_ahead),
        .O(\dout_buf[1]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair193" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[20]_i_1 
       (.I0(q_tmp[20]),
        .I1(q_buf[20]),
        .I2(show_ahead),
        .O(\dout_buf[20]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair195" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[21]_i_1 
       (.I0(q_tmp[21]),
        .I1(q_buf[21]),
        .I2(show_ahead),
        .O(\dout_buf[21]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair194" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[22]_i_1 
       (.I0(q_tmp[22]),
        .I1(q_buf[22]),
        .I2(show_ahead),
        .O(\dout_buf[22]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair202" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[23]_i_1 
       (.I0(q_tmp[23]),
        .I1(q_buf[23]),
        .I2(show_ahead),
        .O(\dout_buf[23]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair196" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[24]_i_1 
       (.I0(q_tmp[24]),
        .I1(q_buf[24]),
        .I2(show_ahead),
        .O(\dout_buf[24]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair197" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[25]_i_1 
       (.I0(q_tmp[25]),
        .I1(q_buf[25]),
        .I2(show_ahead),
        .O(\dout_buf[25]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair207" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[26]_i_1 
       (.I0(q_tmp[26]),
        .I1(q_buf[26]),
        .I2(show_ahead),
        .O(\dout_buf[26]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair208" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[27]_i_1 
       (.I0(q_tmp[27]),
        .I1(q_buf[27]),
        .I2(show_ahead),
        .O(\dout_buf[27]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair200" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[28]_i_1 
       (.I0(q_tmp[28]),
        .I1(q_buf[28]),
        .I2(show_ahead),
        .O(\dout_buf[28]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair207" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[29]_i_1 
       (.I0(q_tmp[29]),
        .I1(q_buf[29]),
        .I2(show_ahead),
        .O(\dout_buf[29]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair193" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[2]_i_1 
       (.I0(q_tmp[2]),
        .I1(q_buf[2]),
        .I2(show_ahead),
        .O(\dout_buf[2]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair208" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[30]_i_1 
       (.I0(q_tmp[30]),
        .I1(q_buf[30]),
        .I2(show_ahead),
        .O(\dout_buf[30]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair203" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[31]_i_1 
       (.I0(q_tmp[31]),
        .I1(q_buf[31]),
        .I2(show_ahead),
        .O(\dout_buf[31]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair204" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[32]_i_1 
       (.I0(q_tmp[35]),
        .I1(q_buf[32]),
        .I2(show_ahead),
        .O(\dout_buf[32]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair204" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[33]_i_1 
       (.I0(q_tmp[35]),
        .I1(q_buf[33]),
        .I2(show_ahead),
        .O(\dout_buf[33]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair205" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[34]_i_1 
       (.I0(q_tmp[35]),
        .I1(q_buf[34]),
        .I2(show_ahead),
        .O(\dout_buf[34]_i_1_n_2 ));
  LUT5 #(
    .INIT(32'h8A0A8A8A)) 
    \dout_buf[35]_i_1 
       (.I0(empty_n_reg_n_2),
        .I1(burst_valid),
        .I2(data_valid),
        .I3(m_axi_DATA_C_WREADY),
        .I4(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .O(pop));
  (* SOFT_HLUTNM = "soft_lutpair205" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[35]_i_2 
       (.I0(q_tmp[35]),
        .I1(q_buf[35]),
        .I2(show_ahead),
        .O(\dout_buf[35]_i_2_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair194" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[3]_i_1 
       (.I0(q_tmp[3]),
        .I1(q_buf[3]),
        .I2(show_ahead),
        .O(\dout_buf[3]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair195" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[4]_i_1 
       (.I0(q_tmp[4]),
        .I1(q_buf[4]),
        .I2(show_ahead),
        .O(\dout_buf[4]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair196" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[5]_i_1 
       (.I0(q_tmp[5]),
        .I1(q_buf[5]),
        .I2(show_ahead),
        .O(\dout_buf[5]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair197" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[6]_i_1 
       (.I0(q_tmp[6]),
        .I1(q_buf[6]),
        .I2(show_ahead),
        .O(\dout_buf[6]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair198" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[7]_i_1 
       (.I0(q_tmp[7]),
        .I1(q_buf[7]),
        .I2(show_ahead),
        .O(\dout_buf[7]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair199" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[8]_i_1 
       (.I0(q_tmp[8]),
        .I1(q_buf[8]),
        .I2(show_ahead),
        .O(\dout_buf[8]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair200" *) 
  LUT3 #(
    .INIT(8'hAC)) 
    \dout_buf[9]_i_1 
       (.I0(q_tmp[9]),
        .I1(q_buf[9]),
        .I2(show_ahead),
        .O(\dout_buf[9]_i_1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[0] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[0]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[10] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[10]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[11] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[11]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[12] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[12]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[13] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[13]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[14] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[14]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[15] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[15]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[16] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[16]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[17] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[17]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[18] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[18]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[19] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[19]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[1] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[1]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[20] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[20]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[21] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[21]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[22] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[22]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[23] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[23]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[24] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[24]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[25] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[25]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[26] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[26]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[27] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[27]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[28] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[28]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[29] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[29]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[2] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[2]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[30] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[30]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[31] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[31]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[32] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[32]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [32]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[33] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[33]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [33]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[34] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[34]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [34]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[35] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[35]_i_2_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [35]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[3] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[3]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[4] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[4]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[5] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[5]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[6] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[6]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[7] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[7]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[8] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[8]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \dout_buf_reg[9] 
       (.C(ap_clk),
        .CE(pop),
        .D(\dout_buf[9]_i_1_n_2 ),
        .Q(\bus_equal_gen.strb_buf_reg[3] [9]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair187" *) 
  LUT5 #(
    .INIT(32'hBAFABABA)) 
    dout_valid_i_1__1
       (.I0(empty_n_reg_n_2),
        .I1(burst_valid),
        .I2(data_valid),
        .I3(m_axi_DATA_C_WREADY),
        .I4(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .O(dout_valid_i_1__1_n_2));
  FDRE #(
    .INIT(1'b0)) 
    dout_valid_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(dout_valid_i_1__1_n_2),
        .Q(data_valid),
        .R(SR));
  LUT6 #(
    .INIT(64'hFDFFFDFDF0F0F0F0)) 
    empty_n_i_1
       (.I0(Q[0]),
        .I1(empty_n_i_2__1_n_2),
        .I2(push),
        .I3(p_27_in),
        .I4(data_valid),
        .I5(empty_n_reg_n_2),
        .O(empty_n_i_1_n_2));
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_2__1
       (.I0(Q[5]),
        .I1(Q[3]),
        .I2(Q[2]),
        .I3(empty_n_i_3__1_n_2),
        .O(empty_n_i_2__1_n_2));
  (* SOFT_HLUTNM = "soft_lutpair190" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_3__1
       (.I0(usedw_reg__0[7]),
        .I1(usedw_reg__0[6]),
        .I2(Q[1]),
        .I3(Q[4]),
        .O(empty_n_i_3__1_n_2));
  FDRE #(
    .INIT(1'b0)) 
    empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1_n_2),
        .Q(empty_n_reg_n_2),
        .R(SR));
  LUT5 #(
    .INIT(32'hCFAFAFFF)) 
    full_n_i_1__1
       (.I0(mem_reg_0),
        .I1(full_n_i_2__6_n_2),
        .I2(ap_rst_n),
        .I3(push),
        .I4(mem_reg_i_11_n_2),
        .O(full_n_i_1__1_n_2));
  LUT5 #(
    .INIT(32'hFFFF7FFF)) 
    full_n_i_2__6
       (.I0(Q[4]),
        .I1(Q[3]),
        .I2(Q[5]),
        .I3(Q[2]),
        .I4(full_n_i_3__5_n_2),
        .O(full_n_i_2__6_n_2));
  (* SOFT_HLUTNM = "soft_lutpair190" *) 
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_3__5
       (.I0(usedw_reg__0[7]),
        .I1(usedw_reg__0[6]),
        .I2(Q[1]),
        .I3(Q[0]),
        .O(full_n_i_3__5_n_2));
  FDRE #(
    .INIT(1'b1)) 
    full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1__1_n_2),
        .Q(mem_reg_0),
        .R(1'b0));
  (* \MEM.PORTA.DATA_BIT_LAYOUT  = "p4_d32" *) 
  (* \MEM.PORTB.DATA_BIT_LAYOUT  = "p4_d32" *) 
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-6 {cell *THIS*}}" *) 
  (* RTL_RAM_BITS = "9216" *) 
  (* RTL_RAM_NAME = "mem" *) 
  (* bram_addr_begin = "0" *) 
  (* bram_addr_end = "511" *) 
  (* bram_slice_begin = "0" *) 
  (* bram_slice_end = "35" *) 
  RAMB18E1 #(
    .DOA_REG(0),
    .DOB_REG(0),
    .INIT_A(18'h00000),
    .INIT_B(18'h00000),
    .RAM_MODE("SDP"),
    .RDADDR_COLLISION_HWCONFIG("DELAYED_WRITE"),
    .READ_WIDTH_A(36),
    .READ_WIDTH_B(0),
    .RSTREG_PRIORITY_A("RSTREG"),
    .RSTREG_PRIORITY_B("RSTREG"),
    .SIM_COLLISION_CHECK("ALL"),
    .SIM_DEVICE("7SERIES"),
    .SRVAL_A(18'h00000),
    .SRVAL_B(18'h00000),
    .WRITE_MODE_A("READ_FIRST"),
    .WRITE_MODE_B("READ_FIRST"),
    .WRITE_WIDTH_A(0),
    .WRITE_WIDTH_B(36)) 
    mem_reg
       (.ADDRARDADDR({1'b1,rnext,mem_reg_i_8__1_n_2,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .ADDRBWRADDR({1'b1,waddr,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CLKARDCLK(ap_clk),
        .CLKBWRCLK(ap_clk),
        .DIADI(\tmp_reg_287_reg[31] [15:0]),
        .DIBDI(\tmp_reg_287_reg[31] [31:16]),
        .DIPADIP({1'b1,1'b1}),
        .DIPBDIP({1'b1,1'b1}),
        .DOADO(q_buf[15:0]),
        .DOBDO(q_buf[31:16]),
        .DOPADOP(q_buf[33:32]),
        .DOPBDOP(q_buf[35:34]),
        .ENARDEN(1'b1),
        .ENBWREN(mem_reg_0),
        .REGCEAREGCE(1'b0),
        .REGCEB(1'b0),
        .RSTRAMARSTRAM(1'b0),
        .RSTRAMB(1'b0),
        .RSTREGARSTREG(1'b0),
        .RSTREGB(1'b0),
        .WEA({1'b0,1'b0}),
        .WEBWE({WEBWE,WEBWE,WEBWE,WEBWE}));
  LUT6 #(
    .INIT(64'h77F7FFFFFFFFFFFF)) 
    mem_reg_i_10__1
       (.I0(raddr[1]),
        .I1(empty_n_reg_n_2),
        .I2(data_valid),
        .I3(p_27_in),
        .I4(raddr[0]),
        .I5(raddr[2]),
        .O(mem_reg_i_10__1_n_2));
  (* SOFT_HLUTNM = "soft_lutpair187" *) 
  LUT5 #(
    .INIT(32'h20F0FFFF)) 
    mem_reg_i_11
       (.I0(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .I1(m_axi_DATA_C_WREADY),
        .I2(data_valid),
        .I3(burst_valid),
        .I4(empty_n_reg_n_2),
        .O(mem_reg_i_11_n_2));
  LUT2 #(
    .INIT(4'h2)) 
    mem_reg_i_12
       (.I0(ap_enable_reg_pp0_iter4_reg),
        .I1(ap_reg_pp0_iter3_exitcond_reg_268),
        .O(mem_reg_1));
  LUT6 #(
    .INIT(64'hAA6AAAAAAAAAAAAA)) 
    mem_reg_i_1__1
       (.I0(raddr[7]),
        .I1(raddr[5]),
        .I2(raddr[4]),
        .I3(mem_reg_i_10__1_n_2),
        .I4(raddr[3]),
        .I5(raddr[6]),
        .O(rnext[7]));
  LUT5 #(
    .INIT(32'hA6AAAAAA)) 
    mem_reg_i_2__1
       (.I0(raddr[6]),
        .I1(raddr[3]),
        .I2(mem_reg_i_10__1_n_2),
        .I3(raddr[4]),
        .I4(raddr[5]),
        .O(rnext[6]));
  LUT4 #(
    .INIT(16'hDF20)) 
    mem_reg_i_3__1
       (.I0(raddr[3]),
        .I1(mem_reg_i_10__1_n_2),
        .I2(raddr[4]),
        .I3(raddr[5]),
        .O(rnext[5]));
  LUT6 #(
    .INIT(64'hAA6AAAAAAAAAAAAA)) 
    mem_reg_i_4__1
       (.I0(raddr[4]),
        .I1(raddr[2]),
        .I2(raddr[0]),
        .I3(mem_reg_i_11_n_2),
        .I4(raddr[1]),
        .I5(raddr[3]),
        .O(rnext[4]));
  LUT5 #(
    .INIT(32'hA6AAAAAA)) 
    mem_reg_i_5__1
       (.I0(raddr[3]),
        .I1(raddr[1]),
        .I2(mem_reg_i_11_n_2),
        .I3(raddr[0]),
        .I4(raddr[2]),
        .O(rnext[3]));
  LUT6 #(
    .INIT(64'h6A66AAAAAAAAAAAA)) 
    mem_reg_i_6__1
       (.I0(raddr[2]),
        .I1(raddr[0]),
        .I2(p_27_in),
        .I3(data_valid),
        .I4(empty_n_reg_n_2),
        .I5(raddr[1]),
        .O(rnext[2]));
  LUT5 #(
    .INIT(32'h66A6AAAA)) 
    mem_reg_i_7__1
       (.I0(raddr[1]),
        .I1(empty_n_reg_n_2),
        .I2(data_valid),
        .I3(p_27_in),
        .I4(raddr[0]),
        .O(rnext[1]));
  LUT6 #(
    .INIT(64'h6A66AA666A666A66)) 
    mem_reg_i_8__1
       (.I0(raddr[0]),
        .I1(empty_n_reg_n_2),
        .I2(burst_valid),
        .I3(data_valid),
        .I4(m_axi_DATA_C_WREADY),
        .I5(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .O(mem_reg_i_8__1_n_2));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_1__1
       (.I0(usedw_reg__0[6]),
        .I1(usedw_reg__0[7]),
        .O(\usedw_reg[7]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_2__1
       (.I0(Q[5]),
        .I1(usedw_reg__0[6]),
        .O(\usedw_reg[7]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_3__2
       (.I0(Q[4]),
        .I1(Q[5]),
        .O(\usedw_reg[7]_0 [0]));
  LUT1 #(
    .INIT(2'h1)) 
    p_0_out_carry_i_1__2
       (.I0(Q[1]),
        .O(DI));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_2__2
       (.I0(Q[3]),
        .I1(Q[4]),
        .O(S[3]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_3__2
       (.I0(Q[2]),
        .I1(Q[3]),
        .O(S[2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_4__2
       (.I0(Q[1]),
        .I1(Q[2]),
        .O(S[1]));
  LUT5 #(
    .INIT(32'h59559999)) 
    p_0_out_carry_i_5__1
       (.I0(Q[1]),
        .I1(push),
        .I2(p_27_in),
        .I3(data_valid),
        .I4(empty_n_reg_n_2),
        .O(S[0]));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[0] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [0]),
        .Q(q_tmp[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[10] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [10]),
        .Q(q_tmp[10]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[11] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [11]),
        .Q(q_tmp[11]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[12] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [12]),
        .Q(q_tmp[12]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[13] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [13]),
        .Q(q_tmp[13]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[14] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [14]),
        .Q(q_tmp[14]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[15] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [15]),
        .Q(q_tmp[15]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[16] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [16]),
        .Q(q_tmp[16]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[17] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [17]),
        .Q(q_tmp[17]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[18] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [18]),
        .Q(q_tmp[18]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[19] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [19]),
        .Q(q_tmp[19]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[1] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [1]),
        .Q(q_tmp[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[20] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [20]),
        .Q(q_tmp[20]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[21] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [21]),
        .Q(q_tmp[21]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[22] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [22]),
        .Q(q_tmp[22]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[23] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [23]),
        .Q(q_tmp[23]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[24] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [24]),
        .Q(q_tmp[24]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[25] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [25]),
        .Q(q_tmp[25]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[26] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [26]),
        .Q(q_tmp[26]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[27] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [27]),
        .Q(q_tmp[27]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[28] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [28]),
        .Q(q_tmp[28]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[29] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [29]),
        .Q(q_tmp[29]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[2] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [2]),
        .Q(q_tmp[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[30] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [30]),
        .Q(q_tmp[30]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[31] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [31]),
        .Q(q_tmp[31]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[35] 
       (.C(ap_clk),
        .CE(push),
        .D(1'b1),
        .Q(q_tmp[35]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[3] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [3]),
        .Q(q_tmp[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[4] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [4]),
        .Q(q_tmp[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[5] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [5]),
        .Q(q_tmp[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[6] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [6]),
        .Q(q_tmp[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[7] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [7]),
        .Q(q_tmp[7]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[8] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [8]),
        .Q(q_tmp[8]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \q_tmp_reg[9] 
       (.C(ap_clk),
        .CE(push),
        .D(\tmp_reg_287_reg[31] [9]),
        .Q(q_tmp[9]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(mem_reg_i_8__1_n_2),
        .Q(raddr[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[1]),
        .Q(raddr[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[2]),
        .Q(raddr[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[3] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[3]),
        .Q(raddr[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[4] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[4]),
        .Q(raddr[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[5] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[5]),
        .Q(raddr[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[6] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[6]),
        .Q(raddr[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \raddr_reg[7] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(rnext[7]),
        .Q(raddr[7]),
        .R(SR));
  LUT6 #(
    .INIT(64'h0000A25D00000000)) 
    show_ahead_i_1__1
       (.I0(empty_n_reg_n_2),
        .I1(data_valid),
        .I2(p_27_in),
        .I3(Q[0]),
        .I4(empty_n_i_2__1_n_2),
        .I5(push),
        .O(show_ahead0));
  FDRE #(
    .INIT(1'b0)) 
    show_ahead_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(show_ahead0),
        .Q(show_ahead),
        .R(SR));
  LUT1 #(
    .INIT(2'h1)) 
    \usedw[0]_i_1__1 
       (.I0(Q[0]),
        .O(\usedw[0]_i_1__1_n_2 ));
  LUT6 #(
    .INIT(64'h75F575758A0A8A8A)) 
    \usedw[7]_i_1__2 
       (.I0(empty_n_reg_n_2),
        .I1(burst_valid),
        .I2(data_valid),
        .I3(m_axi_DATA_C_WREADY),
        .I4(\bus_equal_gen.WVALID_Dummy_reg_0 ),
        .I5(push),
        .O(\usedw[7]_i_1__2_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[0] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(\usedw[0]_i_1__1_n_2 ),
        .Q(Q[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[1] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[0]),
        .Q(Q[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[2] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[1]),
        .Q(Q[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[3] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[2]),
        .Q(Q[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[4] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[3]),
        .Q(Q[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[5] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[4]),
        .Q(Q[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[6] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[5]),
        .Q(usedw_reg__0[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[7] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1__2_n_2 ),
        .D(D[6]),
        .Q(usedw_reg__0[7]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair210" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \waddr[0]_i_1__1 
       (.I0(waddr[0]),
        .O(\waddr[0]_i_1__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair210" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \waddr[1]_i_1__1 
       (.I0(waddr[0]),
        .I1(waddr[1]),
        .O(\waddr[1]_i_1__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair209" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \waddr[2]_i_1__1 
       (.I0(waddr[2]),
        .I1(waddr[0]),
        .I2(waddr[1]),
        .O(\waddr[2]_i_1__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair188" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \waddr[3]_i_1__1 
       (.I0(waddr[3]),
        .I1(waddr[0]),
        .I2(waddr[1]),
        .I3(waddr[2]),
        .O(\waddr[3]_i_1__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair188" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \waddr[4]_i_1__1 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[1]),
        .I3(waddr[0]),
        .I4(waddr[3]),
        .O(\waddr[4]_i_1__1_n_2 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \waddr[5]_i_1__1 
       (.I0(waddr[5]),
        .I1(waddr[3]),
        .I2(waddr[0]),
        .I3(waddr[1]),
        .I4(waddr[2]),
        .I5(waddr[4]),
        .O(\waddr[5]_i_1__1_n_2 ));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \waddr[6]_i_1__1 
       (.I0(waddr[6]),
        .I1(waddr[4]),
        .I2(waddr[2]),
        .I3(\waddr[6]_i_2__1_n_2 ),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[6]_i_1__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair209" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[6]_i_2__1 
       (.I0(waddr[1]),
        .I1(waddr[0]),
        .O(\waddr[6]_i_2__1_n_2 ));
  LUT2 #(
    .INIT(4'h8)) 
    \waddr[7]_i_1__1 
       (.I0(mem_reg_0),
        .I1(WEBWE),
        .O(push));
  LUT4 #(
    .INIT(16'hB8CC)) 
    \waddr[7]_i_2__1 
       (.I0(\waddr[7]_i_3__1_n_2 ),
        .I1(waddr[7]),
        .I2(\waddr[7]_i_4__1_n_2 ),
        .I3(waddr[6]),
        .O(\waddr[7]_i_2__1_n_2 ));
  LUT6 #(
    .INIT(64'h7FFFFFFFFFFFFFFF)) 
    \waddr[7]_i_3__1 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[0]),
        .I3(waddr[1]),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[7]_i_3__1_n_2 ));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \waddr[7]_i_4__1 
       (.I0(waddr[4]),
        .I1(waddr[2]),
        .I2(waddr[1]),
        .I3(waddr[0]),
        .I4(waddr[3]),
        .I5(waddr[5]),
        .O(\waddr[7]_i_4__1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[0] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[0]_i_1__1_n_2 ),
        .Q(waddr[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[1] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[1]_i_1__1_n_2 ),
        .Q(waddr[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[2] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[2]_i_1__1_n_2 ),
        .Q(waddr[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[3] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[3]_i_1__1_n_2 ),
        .Q(waddr[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[4] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[4]_i_1__1_n_2 ),
        .Q(waddr[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[5] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[5]_i_1__1_n_2 ),
        .Q(waddr[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[6] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[6]_i_1__1_n_2 ),
        .Q(waddr[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \waddr_reg[7] 
       (.C(ap_clk),
        .CE(push),
        .D(\waddr[7]_i_2__1_n_2 ),
        .Q(waddr[7]),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_buffer" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_buffer__parameterized0
   (m_axi_DATA_C_RREADY,
    S,
    Q,
    \usedw_reg[7]_0 ,
    DI,
    \bus_equal_gen.rdata_valid_t_reg ,
    SR,
    ap_clk,
    m_axi_DATA_C_RVALID,
    \bus_equal_gen.rdata_valid_t_reg_0 ,
    rdata_ack_t,
    ap_rst_n,
    D);
  output m_axi_DATA_C_RREADY;
  output [3:0]S;
  output [5:0]Q;
  output [2:0]\usedw_reg[7]_0 ;
  output [0:0]DI;
  output \bus_equal_gen.rdata_valid_t_reg ;
  input [0:0]SR;
  input ap_clk;
  input m_axi_DATA_C_RVALID;
  input \bus_equal_gen.rdata_valid_t_reg_0 ;
  input rdata_ack_t;
  input ap_rst_n;
  input [6:0]D;

  wire [6:0]D;
  wire [0:0]DI;
  wire [5:0]Q;
  wire [3:0]S;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire beat_valid;
  wire \bus_equal_gen.rdata_valid_t_reg ;
  wire \bus_equal_gen.rdata_valid_t_reg_0 ;
  wire dout_valid_i_1__2_n_2;
  wire empty_n_i_1__1_n_2;
  wire empty_n_i_2__2_n_2;
  wire empty_n_i_3__2_n_2;
  wire empty_n_reg_n_2;
  wire full_n_i_1__2_n_2;
  wire full_n_i_2__7_n_2;
  wire full_n_i_3__6_n_2;
  wire m_axi_DATA_C_RREADY;
  wire m_axi_DATA_C_RVALID;
  wire pop;
  wire rdata_ack_t;
  wire \usedw[0]_i_1__2_n_2 ;
  wire \usedw[7]_i_1_n_2 ;
  wire [7:6]usedw_reg;
  wire [2:0]\usedw_reg[7]_0 ;

  LUT3 #(
    .INIT(8'hBA)) 
    \bus_equal_gen.rdata_valid_t_i_1__1 
       (.I0(beat_valid),
        .I1(rdata_ack_t),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .O(\bus_equal_gen.rdata_valid_t_reg ));
  (* SOFT_HLUTNM = "soft_lutpair185" *) 
  LUT4 #(
    .INIT(16'hFF08)) 
    dout_valid_i_1__2
       (.I0(beat_valid),
        .I1(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I2(rdata_ack_t),
        .I3(empty_n_reg_n_2),
        .O(dout_valid_i_1__2_n_2));
  FDRE #(
    .INIT(1'b0)) 
    dout_valid_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(dout_valid_i_1__2_n_2),
        .Q(beat_valid),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFEFEFEF0FE0E0E0)) 
    empty_n_i_1__1
       (.I0(empty_n_i_2__2_n_2),
        .I1(empty_n_i_3__2_n_2),
        .I2(pop),
        .I3(m_axi_DATA_C_RREADY),
        .I4(m_axi_DATA_C_RVALID),
        .I5(empty_n_reg_n_2),
        .O(empty_n_i_1__1_n_2));
  LUT4 #(
    .INIT(16'hFFFE)) 
    empty_n_i_2__2
       (.I0(usedw_reg[7]),
        .I1(usedw_reg[6]),
        .I2(Q[3]),
        .I3(Q[2]),
        .O(empty_n_i_2__2_n_2));
  (* SOFT_HLUTNM = "soft_lutpair184" *) 
  LUT4 #(
    .INIT(16'hFFFD)) 
    empty_n_i_3__2
       (.I0(Q[0]),
        .I1(Q[5]),
        .I2(Q[4]),
        .I3(Q[1]),
        .O(empty_n_i_3__2_n_2));
  FDRE #(
    .INIT(1'b0)) 
    empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1__1_n_2),
        .Q(empty_n_reg_n_2),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFEFFFFFFF0FFF0F)) 
    full_n_i_1__2
       (.I0(full_n_i_2__7_n_2),
        .I1(full_n_i_3__6_n_2),
        .I2(ap_rst_n),
        .I3(pop),
        .I4(m_axi_DATA_C_RVALID),
        .I5(m_axi_DATA_C_RREADY),
        .O(full_n_i_1__2_n_2));
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_2__7
       (.I0(usedw_reg[7]),
        .I1(usedw_reg[6]),
        .I2(Q[0]),
        .I3(Q[1]),
        .O(full_n_i_2__7_n_2));
  LUT4 #(
    .INIT(16'h7FFF)) 
    full_n_i_3__6
       (.I0(Q[5]),
        .I1(Q[2]),
        .I2(Q[4]),
        .I3(Q[3]),
        .O(full_n_i_3__6_n_2));
  (* SOFT_HLUTNM = "soft_lutpair185" *) 
  LUT4 #(
    .INIT(16'h8AAA)) 
    full_n_i_4__4
       (.I0(empty_n_reg_n_2),
        .I1(rdata_ack_t),
        .I2(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I3(beat_valid),
        .O(pop));
  FDRE #(
    .INIT(1'b1)) 
    full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1__2_n_2),
        .Q(m_axi_DATA_C_RREADY),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_1__2
       (.I0(usedw_reg[6]),
        .I1(usedw_reg[7]),
        .O(\usedw_reg[7]_0 [2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_2__2
       (.I0(Q[5]),
        .I1(usedw_reg[6]),
        .O(\usedw_reg[7]_0 [1]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry__0_i_3__1
       (.I0(Q[4]),
        .I1(Q[5]),
        .O(\usedw_reg[7]_0 [0]));
  LUT1 #(
    .INIT(2'h1)) 
    p_0_out_carry_i_1__1
       (.I0(Q[1]),
        .O(DI));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_2__1
       (.I0(Q[3]),
        .I1(Q[4]),
        .O(S[3]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_3__1
       (.I0(Q[2]),
        .I1(Q[3]),
        .O(S[2]));
  LUT2 #(
    .INIT(4'h9)) 
    p_0_out_carry_i_4__1
       (.I0(Q[1]),
        .I1(Q[2]),
        .O(S[1]));
  LUT4 #(
    .INIT(16'h6555)) 
    p_0_out_carry_i_5__2
       (.I0(Q[1]),
        .I1(pop),
        .I2(m_axi_DATA_C_RREADY),
        .I3(m_axi_DATA_C_RVALID),
        .O(S[0]));
  (* SOFT_HLUTNM = "soft_lutpair184" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \usedw[0]_i_1__2 
       (.I0(Q[0]),
        .O(\usedw[0]_i_1__2_n_2 ));
  LUT6 #(
    .INIT(64'h08FFF700F700F700)) 
    \usedw[7]_i_1 
       (.I0(beat_valid),
        .I1(\bus_equal_gen.rdata_valid_t_reg_0 ),
        .I2(rdata_ack_t),
        .I3(empty_n_reg_n_2),
        .I4(m_axi_DATA_C_RVALID),
        .I5(m_axi_DATA_C_RREADY),
        .O(\usedw[7]_i_1_n_2 ));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[0] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(\usedw[0]_i_1__2_n_2 ),
        .Q(Q[0]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[1] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[0]),
        .Q(Q[1]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[2] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[1]),
        .Q(Q[2]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[3] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[2]),
        .Q(Q[3]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[4] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[3]),
        .Q(Q[4]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[5] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[4]),
        .Q(Q[5]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[6] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[5]),
        .Q(usedw_reg[6]),
        .R(SR));
  FDRE #(
    .INIT(1'b0)) 
    \usedw_reg[7] 
       (.C(ap_clk),
        .CE(\usedw[7]_i_1_n_2 ),
        .D(D[6]),
        .Q(usedw_reg[7]),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo
   (burst_valid,
    \bus_equal_gen.len_cnt_reg[7] ,
    \could_multi_bursts.loop_cnt_reg[5] ,
    last_sect_buf,
    next_wreq,
    \sect_addr_buf_reg[2] ,
    next_loop,
    \could_multi_bursts.sect_handling_reg ,
    in,
    O,
    \sect_cnt_reg[7] ,
    \sect_cnt_reg[11] ,
    \sect_cnt_reg[15] ,
    \sect_cnt_reg[19] ,
    wreq_handling_reg,
    \could_multi_bursts.sect_handling_reg_0 ,
    \could_multi_bursts.AWVALID_Dummy_reg ,
    \bus_equal_gen.WLAST_Dummy_reg ,
    \could_multi_bursts.last_sect_buf_reg ,
    \sect_len_buf_reg[9] ,
    \sect_len_buf_reg[8] ,
    \sect_len_buf_reg[7] ,
    \sect_len_buf_reg[6] ,
    \sect_len_buf_reg[5] ,
    \sect_len_buf_reg[4] ,
    \sect_len_buf_reg[3] ,
    \sect_len_buf_reg[2] ,
    \sect_len_buf_reg[1] ,
    \sect_len_buf_reg[0] ,
    SR,
    ap_clk,
    ap_rst_n,
    sect_cnt_reg,
    Q,
    CO,
    invalid_len_event_reg2,
    \bus_equal_gen.len_cnt_reg[7]_0 ,
    E,
    wreq_handling_reg_0,
    \end_addr_buf_reg[31] ,
    fifo_wreq_valid_buf_reg,
    fifo_wreq_valid,
    \could_multi_bursts.sect_handling_reg_1 ,
    AWVALID_Dummy,
    m_axi_DATA_C_AWREADY,
    \throttl_cnt_reg[5] ,
    \throttl_cnt_reg[1] ,
    fifo_resp_ready,
    \sect_len_buf_reg[0]_0 ,
    \sect_len_buf_reg[1]_0 ,
    \sect_len_buf_reg[2]_0 ,
    \sect_len_buf_reg[3]_0 ,
    \sect_len_buf_reg[4]_0 ,
    \could_multi_bursts.loop_cnt_reg[5]_0 ,
    \sect_len_buf_reg[6]_0 ,
    \sect_len_buf_reg[5]_0 ,
    \sect_len_buf_reg[7]_0 ,
    \sect_len_buf_reg[9]_0 ,
    \sect_len_buf_reg[8]_0 ,
    \throttl_cnt_reg[6] ,
    m_axi_DATA_C_WREADY,
    \bus_equal_gen.WVALID_Dummy_reg ,
    m_axi_DATA_C_WLAST,
    \could_multi_bursts.last_sect_buf_reg_0 ,
    \start_addr_buf_reg[11] ,
    \end_addr_buf_reg[11] ,
    \beat_len_buf_reg[9] );
  output burst_valid;
  output [0:0]\bus_equal_gen.len_cnt_reg[7] ;
  output [0:0]\could_multi_bursts.loop_cnt_reg[5] ;
  output last_sect_buf;
  output next_wreq;
  output [0:0]\sect_addr_buf_reg[2] ;
  output next_loop;
  output \could_multi_bursts.sect_handling_reg ;
  output [3:0]in;
  output [3:0]O;
  output [3:0]\sect_cnt_reg[7] ;
  output [3:0]\sect_cnt_reg[11] ;
  output [3:0]\sect_cnt_reg[15] ;
  output [3:0]\sect_cnt_reg[19] ;
  output wreq_handling_reg;
  output \could_multi_bursts.sect_handling_reg_0 ;
  output \could_multi_bursts.AWVALID_Dummy_reg ;
  output \bus_equal_gen.WLAST_Dummy_reg ;
  output \could_multi_bursts.last_sect_buf_reg ;
  output \sect_len_buf_reg[9] ;
  output \sect_len_buf_reg[8] ;
  output \sect_len_buf_reg[7] ;
  output \sect_len_buf_reg[6] ;
  output \sect_len_buf_reg[5] ;
  output \sect_len_buf_reg[4] ;
  output \sect_len_buf_reg[3] ;
  output \sect_len_buf_reg[2] ;
  output \sect_len_buf_reg[1] ;
  output \sect_len_buf_reg[0] ;
  input [0:0]SR;
  input ap_clk;
  input ap_rst_n;
  input [19:0]sect_cnt_reg;
  input [19:0]Q;
  input [0:0]CO;
  input invalid_len_event_reg2;
  input [7:0]\bus_equal_gen.len_cnt_reg[7]_0 ;
  input [0:0]E;
  input wreq_handling_reg_0;
  input [0:0]\end_addr_buf_reg[31] ;
  input fifo_wreq_valid_buf_reg;
  input fifo_wreq_valid;
  input \could_multi_bursts.sect_handling_reg_1 ;
  input AWVALID_Dummy;
  input m_axi_DATA_C_AWREADY;
  input \throttl_cnt_reg[5] ;
  input \throttl_cnt_reg[1] ;
  input fifo_resp_ready;
  input \sect_len_buf_reg[0]_0 ;
  input \sect_len_buf_reg[1]_0 ;
  input \sect_len_buf_reg[2]_0 ;
  input \sect_len_buf_reg[3]_0 ;
  input \sect_len_buf_reg[4]_0 ;
  input [5:0]\could_multi_bursts.loop_cnt_reg[5]_0 ;
  input \sect_len_buf_reg[6]_0 ;
  input \sect_len_buf_reg[5]_0 ;
  input \sect_len_buf_reg[7]_0 ;
  input \sect_len_buf_reg[9]_0 ;
  input \sect_len_buf_reg[8]_0 ;
  input \throttl_cnt_reg[6] ;
  input m_axi_DATA_C_WREADY;
  input \bus_equal_gen.WVALID_Dummy_reg ;
  input m_axi_DATA_C_WLAST;
  input \could_multi_bursts.last_sect_buf_reg_0 ;
  input [9:0]\start_addr_buf_reg[11] ;
  input [9:0]\end_addr_buf_reg[11] ;
  input [2:0]\beat_len_buf_reg[9] ;

  wire AWVALID_Dummy;
  wire [0:0]CO;
  wire [0:0]E;
  wire [3:0]O;
  wire [19:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire [2:0]\beat_len_buf_reg[9] ;
  wire burst_valid;
  wire \bus_equal_gen.WLAST_Dummy_i_3_n_2 ;
  wire \bus_equal_gen.WLAST_Dummy_i_4_n_2 ;
  wire \bus_equal_gen.WLAST_Dummy_i_5_n_2 ;
  wire \bus_equal_gen.WLAST_Dummy_reg ;
  wire \bus_equal_gen.WVALID_Dummy_reg ;
  wire [0:0]\bus_equal_gen.len_cnt_reg[7] ;
  wire [7:0]\bus_equal_gen.len_cnt_reg[7]_0 ;
  wire \could_multi_bursts.AWVALID_Dummy_reg ;
  wire \could_multi_bursts.awaddr_buf[31]_i_4_n_2 ;
  wire \could_multi_bursts.awlen_buf[3]_i_3_n_2 ;
  wire \could_multi_bursts.awlen_buf[3]_i_4_n_2 ;
  wire \could_multi_bursts.last_sect_buf_reg ;
  wire \could_multi_bursts.last_sect_buf_reg_0 ;
  wire [0:0]\could_multi_bursts.loop_cnt_reg[5] ;
  wire [5:0]\could_multi_bursts.loop_cnt_reg[5]_0 ;
  wire \could_multi_bursts.sect_handling_reg ;
  wire \could_multi_bursts.sect_handling_reg_0 ;
  wire \could_multi_bursts.sect_handling_reg_1 ;
  wire data_vld_i_1__3_n_2;
  wire data_vld_reg_n_2;
  wire [9:0]\end_addr_buf_reg[11] ;
  wire [0:0]\end_addr_buf_reg[31] ;
  wire fifo_burst_ready;
  wire fifo_resp_ready;
  wire fifo_wreq_valid;
  wire fifo_wreq_valid_buf_reg;
  wire full_n_i_1_n_2;
  wire full_n_i_2__4_n_2;
  wire full_n_i_3__3_n_2;
  wire full_n_i_4__5_n_2;
  wire [3:0]in;
  wire invalid_len_event_reg2;
  wire last_sect_buf;
  wire m_axi_DATA_C_AWREADY;
  wire m_axi_DATA_C_WLAST;
  wire m_axi_DATA_C_WREADY;
  wire \mem_reg[4][0]_srl5_n_2 ;
  wire \mem_reg[4][1]_srl5_n_2 ;
  wire \mem_reg[4][2]_srl5_n_2 ;
  wire \mem_reg[4][3]_srl5_n_2 ;
  wire next_burst;
  wire next_loop;
  wire next_wreq;
  wire pop0;
  wire \pout[0]_i_1_n_2 ;
  wire \pout[1]_i_1_n_2 ;
  wire \pout[2]_i_1_n_2 ;
  wire \pout_reg_n_2_[0] ;
  wire \pout_reg_n_2_[1] ;
  wire \pout_reg_n_2_[2] ;
  wire push;
  wire [3:0]q;
  wire [0:0]\sect_addr_buf_reg[2] ;
  wire \sect_cnt[0]_i_3__1_n_2 ;
  wire \sect_cnt[0]_i_4__1_n_2 ;
  wire \sect_cnt[0]_i_5__1_n_2 ;
  wire \sect_cnt[0]_i_6__1_n_2 ;
  wire \sect_cnt[0]_i_7_n_2 ;
  wire \sect_cnt[12]_i_2__1_n_2 ;
  wire \sect_cnt[12]_i_3__1_n_2 ;
  wire \sect_cnt[12]_i_4__1_n_2 ;
  wire \sect_cnt[12]_i_5__1_n_2 ;
  wire \sect_cnt[16]_i_2__1_n_2 ;
  wire \sect_cnt[16]_i_3__1_n_2 ;
  wire \sect_cnt[16]_i_4__1_n_2 ;
  wire \sect_cnt[16]_i_5__1_n_2 ;
  wire \sect_cnt[4]_i_2__1_n_2 ;
  wire \sect_cnt[4]_i_3__1_n_2 ;
  wire \sect_cnt[4]_i_4__1_n_2 ;
  wire \sect_cnt[4]_i_5__1_n_2 ;
  wire \sect_cnt[8]_i_2__1_n_2 ;
  wire \sect_cnt[8]_i_3__1_n_2 ;
  wire \sect_cnt[8]_i_4__1_n_2 ;
  wire \sect_cnt[8]_i_5__1_n_2 ;
  wire [19:0]sect_cnt_reg;
  wire \sect_cnt_reg[0]_i_2__1_n_2 ;
  wire \sect_cnt_reg[0]_i_2__1_n_3 ;
  wire \sect_cnt_reg[0]_i_2__1_n_4 ;
  wire \sect_cnt_reg[0]_i_2__1_n_5 ;
  wire [3:0]\sect_cnt_reg[11] ;
  wire \sect_cnt_reg[12]_i_1__1_n_2 ;
  wire \sect_cnt_reg[12]_i_1__1_n_3 ;
  wire \sect_cnt_reg[12]_i_1__1_n_4 ;
  wire \sect_cnt_reg[12]_i_1__1_n_5 ;
  wire [3:0]\sect_cnt_reg[15] ;
  wire \sect_cnt_reg[16]_i_1__1_n_3 ;
  wire \sect_cnt_reg[16]_i_1__1_n_4 ;
  wire \sect_cnt_reg[16]_i_1__1_n_5 ;
  wire [3:0]\sect_cnt_reg[19] ;
  wire \sect_cnt_reg[4]_i_1__1_n_2 ;
  wire \sect_cnt_reg[4]_i_1__1_n_3 ;
  wire \sect_cnt_reg[4]_i_1__1_n_4 ;
  wire \sect_cnt_reg[4]_i_1__1_n_5 ;
  wire [3:0]\sect_cnt_reg[7] ;
  wire \sect_cnt_reg[8]_i_1__1_n_2 ;
  wire \sect_cnt_reg[8]_i_1__1_n_3 ;
  wire \sect_cnt_reg[8]_i_1__1_n_4 ;
  wire \sect_cnt_reg[8]_i_1__1_n_5 ;
  wire \sect_len_buf_reg[0] ;
  wire \sect_len_buf_reg[0]_0 ;
  wire \sect_len_buf_reg[1] ;
  wire \sect_len_buf_reg[1]_0 ;
  wire \sect_len_buf_reg[2] ;
  wire \sect_len_buf_reg[2]_0 ;
  wire \sect_len_buf_reg[3] ;
  wire \sect_len_buf_reg[3]_0 ;
  wire \sect_len_buf_reg[4] ;
  wire \sect_len_buf_reg[4]_0 ;
  wire \sect_len_buf_reg[5] ;
  wire \sect_len_buf_reg[5]_0 ;
  wire \sect_len_buf_reg[6] ;
  wire \sect_len_buf_reg[6]_0 ;
  wire \sect_len_buf_reg[7] ;
  wire \sect_len_buf_reg[7]_0 ;
  wire \sect_len_buf_reg[8] ;
  wire \sect_len_buf_reg[8]_0 ;
  wire \sect_len_buf_reg[9] ;
  wire \sect_len_buf_reg[9]_0 ;
  wire [9:0]\start_addr_buf_reg[11] ;
  wire \throttl_cnt_reg[1] ;
  wire \throttl_cnt_reg[5] ;
  wire \throttl_cnt_reg[6] ;
  wire wreq_handling_reg;
  wire wreq_handling_reg_0;
  wire [3:3]\NLW_sect_cnt_reg[16]_i_1__1_CO_UNCONNECTED ;

  (* SOFT_HLUTNM = "soft_lutpair214" *) 
  LUT4 #(
    .INIT(16'hBA8A)) 
    \bus_equal_gen.WLAST_Dummy_i_1 
       (.I0(next_burst),
        .I1(m_axi_DATA_C_WREADY),
        .I2(\bus_equal_gen.WVALID_Dummy_reg ),
        .I3(m_axi_DATA_C_WLAST),
        .O(\bus_equal_gen.WLAST_Dummy_reg ));
  LUT6 #(
    .INIT(64'h0000000010010000)) 
    \bus_equal_gen.WLAST_Dummy_i_2 
       (.I0(\bus_equal_gen.WLAST_Dummy_i_3_n_2 ),
        .I1(\bus_equal_gen.WLAST_Dummy_i_4_n_2 ),
        .I2(\bus_equal_gen.len_cnt_reg[7]_0 [0]),
        .I3(q[0]),
        .I4(E),
        .I5(\bus_equal_gen.WLAST_Dummy_i_5_n_2 ),
        .O(next_burst));
  LUT4 #(
    .INIT(16'hFFFE)) 
    \bus_equal_gen.WLAST_Dummy_i_3 
       (.I0(\bus_equal_gen.len_cnt_reg[7]_0 [5]),
        .I1(\bus_equal_gen.len_cnt_reg[7]_0 [4]),
        .I2(\bus_equal_gen.len_cnt_reg[7]_0 [7]),
        .I3(\bus_equal_gen.len_cnt_reg[7]_0 [6]),
        .O(\bus_equal_gen.WLAST_Dummy_i_3_n_2 ));
  LUT4 #(
    .INIT(16'h4F44)) 
    \bus_equal_gen.WLAST_Dummy_i_4 
       (.I0(\bus_equal_gen.len_cnt_reg[7]_0 [1]),
        .I1(q[1]),
        .I2(\bus_equal_gen.len_cnt_reg[7]_0 [3]),
        .I3(q[3]),
        .O(\bus_equal_gen.WLAST_Dummy_i_4_n_2 ));
  LUT6 #(
    .INIT(64'h2FF22FF2FFFF2FF2)) 
    \bus_equal_gen.WLAST_Dummy_i_5 
       (.I0(\bus_equal_gen.len_cnt_reg[7]_0 [3]),
        .I1(q[3]),
        .I2(q[2]),
        .I3(\bus_equal_gen.len_cnt_reg[7]_0 [2]),
        .I4(\bus_equal_gen.len_cnt_reg[7]_0 [1]),
        .I5(q[1]),
        .O(\bus_equal_gen.WLAST_Dummy_i_5_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair214" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \bus_equal_gen.len_cnt[7]_i_1 
       (.I0(next_burst),
        .I1(ap_rst_n),
        .O(\bus_equal_gen.len_cnt_reg[7] ));
  LUT6 #(
    .INIT(64'h00000000EECE0000)) 
    \could_multi_bursts.AWVALID_Dummy_i_1 
       (.I0(AWVALID_Dummy),
        .I1(next_loop),
        .I2(m_axi_DATA_C_AWREADY),
        .I3(\throttl_cnt_reg[6] ),
        .I4(ap_rst_n),
        .I5(invalid_len_event_reg2),
        .O(\could_multi_bursts.AWVALID_Dummy_reg ));
  LUT5 #(
    .INIT(32'h0000555D)) 
    \could_multi_bursts.awaddr_buf[31]_i_1 
       (.I0(AWVALID_Dummy),
        .I1(m_axi_DATA_C_AWREADY),
        .I2(\throttl_cnt_reg[5] ),
        .I3(\throttl_cnt_reg[1] ),
        .I4(\could_multi_bursts.awaddr_buf[31]_i_4_n_2 ),
        .O(next_loop));
  LUT3 #(
    .INIT(8'h7F)) 
    \could_multi_bursts.awaddr_buf[31]_i_4 
       (.I0(fifo_burst_ready),
        .I1(\could_multi_bursts.sect_handling_reg_1 ),
        .I2(fifo_resp_ready),
        .O(\could_multi_bursts.awaddr_buf[31]_i_4_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair216" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.awlen_buf[0]_i_1 
       (.I0(\sect_len_buf_reg[0]_0 ),
        .I1(\could_multi_bursts.sect_handling_reg ),
        .O(in[0]));
  (* SOFT_HLUTNM = "soft_lutpair216" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.awlen_buf[1]_i_1 
       (.I0(\sect_len_buf_reg[1]_0 ),
        .I1(\could_multi_bursts.sect_handling_reg ),
        .O(in[1]));
  (* SOFT_HLUTNM = "soft_lutpair217" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.awlen_buf[2]_i_1 
       (.I0(\sect_len_buf_reg[2]_0 ),
        .I1(\could_multi_bursts.sect_handling_reg ),
        .O(in[2]));
  (* SOFT_HLUTNM = "soft_lutpair217" *) 
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.awlen_buf[3]_i_1 
       (.I0(\sect_len_buf_reg[3]_0 ),
        .I1(\could_multi_bursts.sect_handling_reg ),
        .O(in[3]));
  LUT2 #(
    .INIT(4'hE)) 
    \could_multi_bursts.awlen_buf[3]_i_2 
       (.I0(\could_multi_bursts.awlen_buf[3]_i_3_n_2 ),
        .I1(\could_multi_bursts.awlen_buf[3]_i_4_n_2 ),
        .O(\could_multi_bursts.sect_handling_reg ));
  LUT6 #(
    .INIT(64'h6FF6FFFFFFFF6FF6)) 
    \could_multi_bursts.awlen_buf[3]_i_3 
       (.I0(\sect_len_buf_reg[7]_0 ),
        .I1(\could_multi_bursts.loop_cnt_reg[5]_0 [3]),
        .I2(\could_multi_bursts.loop_cnt_reg[5]_0 [5]),
        .I3(\sect_len_buf_reg[9]_0 ),
        .I4(\could_multi_bursts.loop_cnt_reg[5]_0 [4]),
        .I5(\sect_len_buf_reg[8]_0 ),
        .O(\could_multi_bursts.awlen_buf[3]_i_3_n_2 ));
  LUT6 #(
    .INIT(64'h6FF6FFFFFFFF6FF6)) 
    \could_multi_bursts.awlen_buf[3]_i_4 
       (.I0(\sect_len_buf_reg[4]_0 ),
        .I1(\could_multi_bursts.loop_cnt_reg[5]_0 [0]),
        .I2(\could_multi_bursts.loop_cnt_reg[5]_0 [2]),
        .I3(\sect_len_buf_reg[6]_0 ),
        .I4(\could_multi_bursts.loop_cnt_reg[5]_0 [1]),
        .I5(\sect_len_buf_reg[5]_0 ),
        .O(\could_multi_bursts.awlen_buf[3]_i_4_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.last_sect_buf_i_1 
       (.I0(\end_addr_buf_reg[31] ),
        .I1(last_sect_buf),
        .I2(\could_multi_bursts.last_sect_buf_reg_0 ),
        .O(\could_multi_bursts.last_sect_buf_reg ));
  (* SOFT_HLUTNM = "soft_lutpair215" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \could_multi_bursts.loop_cnt[5]_i_1__1 
       (.I0(last_sect_buf),
        .I1(ap_rst_n),
        .O(\could_multi_bursts.loop_cnt_reg[5] ));
  (* SOFT_HLUTNM = "soft_lutpair212" *) 
  LUT4 #(
    .INIT(16'hEECE)) 
    \could_multi_bursts.sect_handling_i_1 
       (.I0(\could_multi_bursts.sect_handling_reg_1 ),
        .I1(wreq_handling_reg_0),
        .I2(next_loop),
        .I3(\could_multi_bursts.sect_handling_reg ),
        .O(\could_multi_bursts.sect_handling_reg_0 ));
  LUT6 #(
    .INIT(64'hFFFEFFFFAAAAAAAA)) 
    data_vld_i_1__3
       (.I0(push),
        .I1(\pout_reg_n_2_[2] ),
        .I2(\pout_reg_n_2_[0] ),
        .I3(\pout_reg_n_2_[1] ),
        .I4(pop0),
        .I5(data_vld_reg_n_2),
        .O(data_vld_i_1__3_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__3_n_2),
        .Q(data_vld_reg_n_2),
        .R(SR));
  LUT2 #(
    .INIT(4'hB)) 
    empty_n_i_1__3
       (.I0(next_burst),
        .I1(burst_valid),
        .O(pop0));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(pop0),
        .D(data_vld_reg_n_2),
        .Q(burst_valid),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair211" *) 
  LUT5 #(
    .INIT(32'hD5D5D500)) 
    fifo_wreq_valid_buf_i_1
       (.I0(wreq_handling_reg_0),
        .I1(\end_addr_buf_reg[31] ),
        .I2(last_sect_buf),
        .I3(fifo_wreq_valid_buf_reg),
        .I4(fifo_wreq_valid),
        .O(next_wreq));
  LUT6 #(
    .INIT(64'hFFFFFFFFFE00FFFF)) 
    full_n_i_1
       (.I0(\pout_reg_n_2_[2] ),
        .I1(full_n_i_2__4_n_2),
        .I2(full_n_i_3__3_n_2),
        .I3(fifo_burst_ready),
        .I4(ap_rst_n),
        .I5(full_n_i_4__5_n_2),
        .O(full_n_i_1_n_2));
  LUT2 #(
    .INIT(4'h7)) 
    full_n_i_2__4
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[0] ),
        .O(full_n_i_2__4_n_2));
  (* SOFT_HLUTNM = "soft_lutpair213" *) 
  LUT4 #(
    .INIT(16'hFBFF)) 
    full_n_i_3__3
       (.I0(invalid_len_event_reg2),
        .I1(next_loop),
        .I2(pop0),
        .I3(data_vld_reg_n_2),
        .O(full_n_i_3__3_n_2));
  (* SOFT_HLUTNM = "soft_lutpair213" *) 
  LUT2 #(
    .INIT(4'h8)) 
    full_n_i_4__5
       (.I0(pop0),
        .I1(data_vld_reg_n_2),
        .O(full_n_i_4__5_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(fifo_burst_ready),
        .R(1'b0));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4][0]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][0]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(in[0]),
        .Q(\mem_reg[4][0]_srl5_n_2 ));
  LUT2 #(
    .INIT(4'h2)) 
    \mem_reg[4][0]_srl5_i_1__1 
       (.I0(next_loop),
        .I1(invalid_len_event_reg2),
        .O(push));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4][1]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][1]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(in[1]),
        .Q(\mem_reg[4][1]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4][2]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][2]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(in[2]),
        .Q(\mem_reg[4][2]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/bus_equal_gen.fifo_burst/mem_reg[4][3]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][3]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(in[3]),
        .Q(\mem_reg[4][3]_srl5_n_2 ));
  LUT6 #(
    .INIT(64'hF0FF0FFF0F00E000)) 
    \pout[0]_i_1 
       (.I0(\pout_reg_n_2_[2] ),
        .I1(\pout_reg_n_2_[1] ),
        .I2(pop0),
        .I3(data_vld_reg_n_2),
        .I4(push),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hF708BF40F708BF00)) 
    \pout[1]_i_1 
       (.I0(push),
        .I1(data_vld_reg_n_2),
        .I2(pop0),
        .I3(\pout_reg_n_2_[1] ),
        .I4(\pout_reg_n_2_[0] ),
        .I5(\pout_reg_n_2_[2] ),
        .O(\pout[1]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hF7FFFFBF08000000)) 
    \pout[2]_i_1 
       (.I0(push),
        .I1(data_vld_reg_n_2),
        .I2(pop0),
        .I3(\pout_reg_n_2_[1] ),
        .I4(\pout_reg_n_2_[0] ),
        .I5(\pout_reg_n_2_[2] ),
        .O(\pout[2]_i_1_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[0]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[0] ),
        .R(SR));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[1]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[1] ),
        .R(SR));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[2]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[2] ),
        .R(SR));
  FDRE \q_reg[0] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][0]_srl5_n_2 ),
        .Q(q[0]),
        .R(SR));
  FDRE \q_reg[1] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][1]_srl5_n_2 ),
        .Q(q[1]),
        .R(SR));
  FDRE \q_reg[2] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][2]_srl5_n_2 ),
        .Q(q[2]),
        .R(SR));
  FDRE \q_reg[3] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][3]_srl5_n_2 ),
        .Q(q[3]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair215" *) 
  LUT3 #(
    .INIT(8'h4F)) 
    \sect_addr_buf[11]_i_1__1 
       (.I0(CO),
        .I1(last_sect_buf),
        .I2(ap_rst_n),
        .O(\sect_addr_buf_reg[2] ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_3__1 
       (.I0(Q[0]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[0]),
        .O(\sect_cnt[0]_i_3__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_4__1 
       (.I0(Q[3]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[3]),
        .O(\sect_cnt[0]_i_4__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_5__1 
       (.I0(Q[2]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[2]),
        .O(\sect_cnt[0]_i_5__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[0]_i_6__1 
       (.I0(Q[1]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[1]),
        .O(\sect_cnt[0]_i_6__1_n_2 ));
  LUT3 #(
    .INIT(8'hC5)) 
    \sect_cnt[0]_i_7 
       (.I0(sect_cnt_reg[0]),
        .I1(Q[0]),
        .I2(next_wreq),
        .O(\sect_cnt[0]_i_7_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_2__1 
       (.I0(Q[15]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[15]),
        .O(\sect_cnt[12]_i_2__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_3__1 
       (.I0(Q[14]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[14]),
        .O(\sect_cnt[12]_i_3__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_4__1 
       (.I0(Q[13]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[13]),
        .O(\sect_cnt[12]_i_4__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[12]_i_5__1 
       (.I0(Q[12]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[12]),
        .O(\sect_cnt[12]_i_5__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_2__1 
       (.I0(Q[19]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[19]),
        .O(\sect_cnt[16]_i_2__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_3__1 
       (.I0(Q[18]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[18]),
        .O(\sect_cnt[16]_i_3__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_4__1 
       (.I0(Q[17]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[17]),
        .O(\sect_cnt[16]_i_4__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[16]_i_5__1 
       (.I0(Q[16]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[16]),
        .O(\sect_cnt[16]_i_5__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_2__1 
       (.I0(Q[7]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[7]),
        .O(\sect_cnt[4]_i_2__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_3__1 
       (.I0(Q[6]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[6]),
        .O(\sect_cnt[4]_i_3__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_4__1 
       (.I0(Q[5]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[5]),
        .O(\sect_cnt[4]_i_4__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[4]_i_5__1 
       (.I0(Q[4]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[4]),
        .O(\sect_cnt[4]_i_5__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_2__1 
       (.I0(Q[11]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[11]),
        .O(\sect_cnt[8]_i_2__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_3__1 
       (.I0(Q[10]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[10]),
        .O(\sect_cnt[8]_i_3__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_4__1 
       (.I0(Q[9]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[9]),
        .O(\sect_cnt[8]_i_4__1_n_2 ));
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_cnt[8]_i_5__1 
       (.I0(Q[8]),
        .I1(next_wreq),
        .I2(sect_cnt_reg[8]),
        .O(\sect_cnt[8]_i_5__1_n_2 ));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[0]_i_2__1 
       (.CI(1'b0),
        .CO({\sect_cnt_reg[0]_i_2__1_n_2 ,\sect_cnt_reg[0]_i_2__1_n_3 ,\sect_cnt_reg[0]_i_2__1_n_4 ,\sect_cnt_reg[0]_i_2__1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,\sect_cnt[0]_i_3__1_n_2 }),
        .O(O),
        .S({\sect_cnt[0]_i_4__1_n_2 ,\sect_cnt[0]_i_5__1_n_2 ,\sect_cnt[0]_i_6__1_n_2 ,\sect_cnt[0]_i_7_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[12]_i_1__1 
       (.CI(\sect_cnt_reg[8]_i_1__1_n_2 ),
        .CO({\sect_cnt_reg[12]_i_1__1_n_2 ,\sect_cnt_reg[12]_i_1__1_n_3 ,\sect_cnt_reg[12]_i_1__1_n_4 ,\sect_cnt_reg[12]_i_1__1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[15] ),
        .S({\sect_cnt[12]_i_2__1_n_2 ,\sect_cnt[12]_i_3__1_n_2 ,\sect_cnt[12]_i_4__1_n_2 ,\sect_cnt[12]_i_5__1_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[16]_i_1__1 
       (.CI(\sect_cnt_reg[12]_i_1__1_n_2 ),
        .CO({\NLW_sect_cnt_reg[16]_i_1__1_CO_UNCONNECTED [3],\sect_cnt_reg[16]_i_1__1_n_3 ,\sect_cnt_reg[16]_i_1__1_n_4 ,\sect_cnt_reg[16]_i_1__1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[19] ),
        .S({\sect_cnt[16]_i_2__1_n_2 ,\sect_cnt[16]_i_3__1_n_2 ,\sect_cnt[16]_i_4__1_n_2 ,\sect_cnt[16]_i_5__1_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[4]_i_1__1 
       (.CI(\sect_cnt_reg[0]_i_2__1_n_2 ),
        .CO({\sect_cnt_reg[4]_i_1__1_n_2 ,\sect_cnt_reg[4]_i_1__1_n_3 ,\sect_cnt_reg[4]_i_1__1_n_4 ,\sect_cnt_reg[4]_i_1__1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[7] ),
        .S({\sect_cnt[4]_i_2__1_n_2 ,\sect_cnt[4]_i_3__1_n_2 ,\sect_cnt[4]_i_4__1_n_2 ,\sect_cnt[4]_i_5__1_n_2 }));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \sect_cnt_reg[8]_i_1__1 
       (.CI(\sect_cnt_reg[4]_i_1__1_n_2 ),
        .CO({\sect_cnt_reg[8]_i_1__1_n_2 ,\sect_cnt_reg[8]_i_1__1_n_3 ,\sect_cnt_reg[8]_i_1__1_n_4 ,\sect_cnt_reg[8]_i_1__1_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(\sect_cnt_reg[11] ),
        .S({\sect_cnt[8]_i_2__1_n_2 ,\sect_cnt[8]_i_3__1_n_2 ,\sect_cnt[8]_i_4__1_n_2 ,\sect_cnt[8]_i_5__1_n_2 }));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[0]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [0]),
        .I1(\end_addr_buf_reg[11] [0]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[0] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[1]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [1]),
        .I1(\end_addr_buf_reg[11] [1]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[1] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[2]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [2]),
        .I1(\end_addr_buf_reg[11] [2]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[2] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[3]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [3]),
        .I1(\end_addr_buf_reg[11] [3]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[3] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[4]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [4]),
        .I1(\end_addr_buf_reg[11] [4]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[4] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[5]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [5]),
        .I1(\end_addr_buf_reg[11] [5]),
        .I2(\beat_len_buf_reg[9] [0]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[5] ));
  LUT6 #(
    .INIT(64'hCC0FCC0FAAFFAAAA)) 
    \sect_len_buf[6]_i_1__1 
       (.I0(\end_addr_buf_reg[11] [6]),
        .I1(\beat_len_buf_reg[9] [1]),
        .I2(\start_addr_buf_reg[11] [6]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[6] ));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[7]_i_1__1 
       (.I0(\start_addr_buf_reg[11] [7]),
        .I1(\end_addr_buf_reg[11] [7]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[7] ));
  LUT6 #(
    .INIT(64'hF033F033AAFFAAAA)) 
    \sect_len_buf[8]_i_1__1 
       (.I0(\end_addr_buf_reg[11] [8]),
        .I1(\start_addr_buf_reg[11] [8]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[8] ));
  (* SOFT_HLUTNM = "soft_lutpair212" *) 
  LUT4 #(
    .INIT(16'h08AA)) 
    \sect_len_buf[9]_i_1__1 
       (.I0(wreq_handling_reg_0),
        .I1(next_loop),
        .I2(\could_multi_bursts.sect_handling_reg ),
        .I3(\could_multi_bursts.sect_handling_reg_1 ),
        .O(last_sect_buf));
  LUT6 #(
    .INIT(64'hF055F055CCFFCCCC)) 
    \sect_len_buf[9]_i_2__1 
       (.I0(\start_addr_buf_reg[11] [9]),
        .I1(\end_addr_buf_reg[11] [9]),
        .I2(\beat_len_buf_reg[9] [2]),
        .I3(\end_addr_buf_reg[31] ),
        .I4(last_sect_buf),
        .I5(CO),
        .O(\sect_len_buf_reg[9] ));
  (* SOFT_HLUTNM = "soft_lutpair211" *) 
  LUT4 #(
    .INIT(16'hCEEE)) 
    wreq_handling_i_1
       (.I0(wreq_handling_reg_0),
        .I1(fifo_wreq_valid_buf_reg),
        .I2(\end_addr_buf_reg[31] ),
        .I3(last_sect_buf),
        .O(wreq_handling_reg));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo__parameterized0
   (fifo_wreq_valid,
    \align_len_reg[31] ,
    Q,
    rs2f_wreq_ack,
    \start_addr_reg[31] ,
    invalid_len_event_reg,
    S,
    \q_reg[0]_0 ,
    \align_len_reg[31]_0 ,
    \sect_cnt_reg_0__s_port_] ,
    SR,
    ap_clk,
    last_sect_buf,
    \end_addr_buf_reg[31] ,
    wreq_handling_reg,
    ap_rst_n,
    \state_reg[0] ,
    E,
    \sect_len_buf_reg[7] ,
    \could_multi_bursts.sect_handling_reg ,
    sect_cnt_reg,
    \end_addr_buf_reg[31]_0 ,
    fifo_wreq_valid_buf_reg,
    push,
    \data_p1_reg[29] );
  output fifo_wreq_valid;
  output [0:0]\align_len_reg[31] ;
  output [30:0]Q;
  output rs2f_wreq_ack;
  output [0:0]\start_addr_reg[31] ;
  output invalid_len_event_reg;
  output [3:0]S;
  output [2:0]\q_reg[0]_0 ;
  output [0:0]\align_len_reg[31]_0 ;
  output \sect_cnt_reg_0__s_port_] ;
  input [0:0]SR;
  input ap_clk;
  input last_sect_buf;
  input [0:0]\end_addr_buf_reg[31] ;
  input wreq_handling_reg;
  input ap_rst_n;
  input [0:0]\state_reg[0] ;
  input [0:0]E;
  input \sect_len_buf_reg[7] ;
  input \could_multi_bursts.sect_handling_reg ;
  input [19:0]sect_cnt_reg;
  input [19:0]\end_addr_buf_reg[31]_0 ;
  input fifo_wreq_valid_buf_reg;
  input push;
  input [29:0]\data_p1_reg[29] ;

  wire [0:0]E;
  wire [30:0]Q;
  wire [3:0]S;
  wire [0:0]SR;
  wire [0:0]\align_len_reg[31] ;
  wire [0:0]\align_len_reg[31]_0 ;
  wire ap_clk;
  wire ap_rst_n;
  wire \could_multi_bursts.sect_handling_reg ;
  wire [29:0]\data_p1_reg[29] ;
  wire data_vld_i_1__4_n_2;
  wire data_vld_reg_n_2;
  wire [0:0]\end_addr_buf_reg[31] ;
  wire [19:0]\end_addr_buf_reg[31]_0 ;
  wire fifo_wreq_valid;
  wire fifo_wreq_valid_buf_reg;
  wire full_n_i_1_n_2;
  wire full_n_i_2__3_n_2;
  wire invalid_len_event_reg;
  wire last_sect_buf;
  wire \mem_reg[4][0]_srl5_n_2 ;
  wire \mem_reg[4][10]_srl5_n_2 ;
  wire \mem_reg[4][11]_srl5_n_2 ;
  wire \mem_reg[4][12]_srl5_n_2 ;
  wire \mem_reg[4][13]_srl5_n_2 ;
  wire \mem_reg[4][14]_srl5_n_2 ;
  wire \mem_reg[4][15]_srl5_n_2 ;
  wire \mem_reg[4][16]_srl5_n_2 ;
  wire \mem_reg[4][17]_srl5_n_2 ;
  wire \mem_reg[4][18]_srl5_n_2 ;
  wire \mem_reg[4][19]_srl5_n_2 ;
  wire \mem_reg[4][1]_srl5_n_2 ;
  wire \mem_reg[4][20]_srl5_n_2 ;
  wire \mem_reg[4][21]_srl5_n_2 ;
  wire \mem_reg[4][22]_srl5_n_2 ;
  wire \mem_reg[4][23]_srl5_n_2 ;
  wire \mem_reg[4][24]_srl5_n_2 ;
  wire \mem_reg[4][25]_srl5_n_2 ;
  wire \mem_reg[4][26]_srl5_n_2 ;
  wire \mem_reg[4][27]_srl5_n_2 ;
  wire \mem_reg[4][28]_srl5_n_2 ;
  wire \mem_reg[4][29]_srl5_n_2 ;
  wire \mem_reg[4][2]_srl5_n_2 ;
  wire \mem_reg[4][38]_srl5_n_2 ;
  wire \mem_reg[4][3]_srl5_n_2 ;
  wire \mem_reg[4][4]_srl5_n_2 ;
  wire \mem_reg[4][5]_srl5_n_2 ;
  wire \mem_reg[4][6]_srl5_n_2 ;
  wire \mem_reg[4][7]_srl5_n_2 ;
  wire \mem_reg[4][8]_srl5_n_2 ;
  wire \mem_reg[4][9]_srl5_n_2 ;
  wire pop0;
  wire \pout[0]_i_1_n_2 ;
  wire \pout[1]_i_1_n_2 ;
  wire \pout[2]_i_1_n_2 ;
  wire \pout_reg_n_2_[0] ;
  wire \pout_reg_n_2_[1] ;
  wire \pout_reg_n_2_[2] ;
  wire push;
  wire [2:0]\q_reg[0]_0 ;
  wire rs2f_wreq_ack;
  wire [19:0]sect_cnt_reg;
  wire sect_cnt_reg_0__s_net_1;
  wire \sect_len_buf_reg[7] ;
  wire [0:0]\start_addr_reg[31] ;
  wire [0:0]\state_reg[0] ;
  wire wreq_handling_reg;

  assign \sect_cnt_reg_0__s_port_]  = sect_cnt_reg_0__s_net_1;
  LUT6 #(
    .INIT(64'h000080AAFFFFFFFF)) 
    \align_len[31]_i_1 
       (.I0(fifo_wreq_valid),
        .I1(last_sect_buf),
        .I2(\end_addr_buf_reg[31] ),
        .I3(wreq_handling_reg),
        .I4(Q[30]),
        .I5(ap_rst_n),
        .O(\align_len_reg[31] ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFE00FF00)) 
    data_vld_i_1__4
       (.I0(\pout_reg_n_2_[0] ),
        .I1(\pout_reg_n_2_[1] ),
        .I2(\pout_reg_n_2_[2] ),
        .I3(data_vld_reg_n_2),
        .I4(pop0),
        .I5(push),
        .O(data_vld_i_1__4_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__4_n_2),
        .Q(data_vld_reg_n_2),
        .R(SR));
  LUT6 #(
    .INIT(64'h5DFF5555FFFFFFFF)) 
    empty_n_i_1__4
       (.I0(fifo_wreq_valid),
        .I1(E),
        .I2(\sect_len_buf_reg[7] ),
        .I3(\could_multi_bursts.sect_handling_reg ),
        .I4(\end_addr_buf_reg[31] ),
        .I5(wreq_handling_reg),
        .O(pop0));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(pop0),
        .D(data_vld_reg_n_2),
        .Q(fifo_wreq_valid),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFD0FFD0FFD0FF)) 
    full_n_i_1
       (.I0(full_n_i_2__3_n_2),
        .I1(\pout_reg_n_2_[2] ),
        .I2(rs2f_wreq_ack),
        .I3(ap_rst_n),
        .I4(data_vld_reg_n_2),
        .I5(pop0),
        .O(full_n_i_1_n_2));
  LUT6 #(
    .INIT(64'h0000000080000000)) 
    full_n_i_2__3
       (.I0(\pout_reg_n_2_[0] ),
        .I1(\pout_reg_n_2_[1] ),
        .I2(data_vld_reg_n_2),
        .I3(rs2f_wreq_ack),
        .I4(\state_reg[0] ),
        .I5(pop0),
        .O(full_n_i_2__3_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(rs2f_wreq_ack),
        .R(1'b0));
  LUT1 #(
    .INIT(2'h1)) 
    i__carry_i_1
       (.I0(Q[30]),
        .O(\align_len_reg[31]_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    invalid_len_event_i_1__1
       (.I0(fifo_wreq_valid),
        .I1(Q[30]),
        .O(invalid_len_event_reg));
  LUT4 #(
    .INIT(16'h9009)) 
    last_sect_carry__0_i_1__1
       (.I0(\end_addr_buf_reg[31]_0 [19]),
        .I1(sect_cnt_reg[19]),
        .I2(\end_addr_buf_reg[31]_0 [18]),
        .I3(sect_cnt_reg[18]),
        .O(\q_reg[0]_0 [2]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry__0_i_2__1
       (.I0(\end_addr_buf_reg[31]_0 [17]),
        .I1(sect_cnt_reg[17]),
        .I2(sect_cnt_reg[16]),
        .I3(\end_addr_buf_reg[31]_0 [16]),
        .I4(sect_cnt_reg[15]),
        .I5(\end_addr_buf_reg[31]_0 [15]),
        .O(\q_reg[0]_0 [1]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry__0_i_3__1
       (.I0(\end_addr_buf_reg[31]_0 [14]),
        .I1(sect_cnt_reg[14]),
        .I2(sect_cnt_reg[13]),
        .I3(\end_addr_buf_reg[31]_0 [13]),
        .I4(sect_cnt_reg[12]),
        .I5(\end_addr_buf_reg[31]_0 [12]),
        .O(\q_reg[0]_0 [0]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_1__1
       (.I0(\end_addr_buf_reg[31]_0 [11]),
        .I1(sect_cnt_reg[11]),
        .I2(sect_cnt_reg[9]),
        .I3(\end_addr_buf_reg[31]_0 [9]),
        .I4(sect_cnt_reg[10]),
        .I5(\end_addr_buf_reg[31]_0 [10]),
        .O(S[3]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_2__1
       (.I0(sect_cnt_reg[6]),
        .I1(\end_addr_buf_reg[31]_0 [6]),
        .I2(sect_cnt_reg[7]),
        .I3(\end_addr_buf_reg[31]_0 [7]),
        .I4(\end_addr_buf_reg[31]_0 [8]),
        .I5(sect_cnt_reg[8]),
        .O(S[2]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_3__1
       (.I0(\end_addr_buf_reg[31]_0 [5]),
        .I1(sect_cnt_reg[5]),
        .I2(sect_cnt_reg[3]),
        .I3(\end_addr_buf_reg[31]_0 [3]),
        .I4(sect_cnt_reg[4]),
        .I5(\end_addr_buf_reg[31]_0 [4]),
        .O(S[1]));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    last_sect_carry_i_4__1
       (.I0(sect_cnt_reg[0]),
        .I1(\end_addr_buf_reg[31]_0 [0]),
        .I2(sect_cnt_reg[1]),
        .I3(\end_addr_buf_reg[31]_0 [1]),
        .I4(\end_addr_buf_reg[31]_0 [2]),
        .I5(sect_cnt_reg[2]),
        .O(S[0]));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][0]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][0]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [0]),
        .Q(\mem_reg[4][0]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][10]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][10]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [10]),
        .Q(\mem_reg[4][10]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][11]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][11]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [11]),
        .Q(\mem_reg[4][11]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][12]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][12]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [12]),
        .Q(\mem_reg[4][12]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][13]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][13]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [13]),
        .Q(\mem_reg[4][13]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][14]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][14]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [14]),
        .Q(\mem_reg[4][14]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][15]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][15]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [15]),
        .Q(\mem_reg[4][15]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][16]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][16]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [16]),
        .Q(\mem_reg[4][16]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][17]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][17]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [17]),
        .Q(\mem_reg[4][17]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][18]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][18]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [18]),
        .Q(\mem_reg[4][18]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][19]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][19]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [19]),
        .Q(\mem_reg[4][19]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][1]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][1]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [1]),
        .Q(\mem_reg[4][1]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][20]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][20]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [20]),
        .Q(\mem_reg[4][20]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][21]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][21]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [21]),
        .Q(\mem_reg[4][21]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][22]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][22]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [22]),
        .Q(\mem_reg[4][22]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][23]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][23]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [23]),
        .Q(\mem_reg[4][23]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][24]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][24]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [24]),
        .Q(\mem_reg[4][24]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][25]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][25]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [25]),
        .Q(\mem_reg[4][25]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][26]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][26]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [26]),
        .Q(\mem_reg[4][26]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][27]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][27]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [27]),
        .Q(\mem_reg[4][27]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][28]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][28]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [28]),
        .Q(\mem_reg[4][28]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][29]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][29]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [29]),
        .Q(\mem_reg[4][29]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][2]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][2]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [2]),
        .Q(\mem_reg[4][2]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][38]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][38]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(1'b1),
        .Q(\mem_reg[4][38]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][3]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][3]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [3]),
        .Q(\mem_reg[4][3]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][4]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][4]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [4]),
        .Q(\mem_reg[4][4]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][5]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][5]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [5]),
        .Q(\mem_reg[4][5]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][6]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][6]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [6]),
        .Q(\mem_reg[4][6]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][7]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][7]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [7]),
        .Q(\mem_reg[4][7]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][8]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][8]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [8]),
        .Q(\mem_reg[4][8]_srl5_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_wreq/mem_reg[4][9]_srl5 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[4][9]_srl5 
       (.A0(\pout_reg_n_2_[0] ),
        .A1(\pout_reg_n_2_[1] ),
        .A2(\pout_reg_n_2_[2] ),
        .A3(1'b0),
        .CE(push),
        .CLK(ap_clk),
        .D(\data_p1_reg[29] [9]),
        .Q(\mem_reg[4][9]_srl5_n_2 ));
  LUT6 #(
    .INIT(64'hF00FFFFF0EF00000)) 
    \pout[0]_i_1 
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[2] ),
        .I2(push),
        .I3(pop0),
        .I4(data_vld_reg_n_2),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[0]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hDFDF2020F7F70800)) 
    \pout[1]_i_1 
       (.I0(data_vld_reg_n_2),
        .I1(pop0),
        .I2(push),
        .I3(\pout_reg_n_2_[2] ),
        .I4(\pout_reg_n_2_[1] ),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[1]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hDF20FF00FF00F700)) 
    \pout[2]_i_1 
       (.I0(data_vld_reg_n_2),
        .I1(pop0),
        .I2(push),
        .I3(\pout_reg_n_2_[2] ),
        .I4(\pout_reg_n_2_[1] ),
        .I5(\pout_reg_n_2_[0] ),
        .O(\pout[2]_i_1_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[0]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[0] ),
        .R(SR));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[1]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[1] ),
        .R(SR));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[2]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[2] ),
        .R(SR));
  FDRE \q_reg[0] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][0]_srl5_n_2 ),
        .Q(Q[0]),
        .R(SR));
  FDRE \q_reg[10] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][10]_srl5_n_2 ),
        .Q(Q[10]),
        .R(SR));
  FDRE \q_reg[11] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][11]_srl5_n_2 ),
        .Q(Q[11]),
        .R(SR));
  FDRE \q_reg[12] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][12]_srl5_n_2 ),
        .Q(Q[12]),
        .R(SR));
  FDRE \q_reg[13] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][13]_srl5_n_2 ),
        .Q(Q[13]),
        .R(SR));
  FDRE \q_reg[14] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][14]_srl5_n_2 ),
        .Q(Q[14]),
        .R(SR));
  FDRE \q_reg[15] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][15]_srl5_n_2 ),
        .Q(Q[15]),
        .R(SR));
  FDRE \q_reg[16] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][16]_srl5_n_2 ),
        .Q(Q[16]),
        .R(SR));
  FDRE \q_reg[17] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][17]_srl5_n_2 ),
        .Q(Q[17]),
        .R(SR));
  FDRE \q_reg[18] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][18]_srl5_n_2 ),
        .Q(Q[18]),
        .R(SR));
  FDRE \q_reg[19] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][19]_srl5_n_2 ),
        .Q(Q[19]),
        .R(SR));
  FDRE \q_reg[1] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][1]_srl5_n_2 ),
        .Q(Q[1]),
        .R(SR));
  FDRE \q_reg[20] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][20]_srl5_n_2 ),
        .Q(Q[20]),
        .R(SR));
  FDRE \q_reg[21] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][21]_srl5_n_2 ),
        .Q(Q[21]),
        .R(SR));
  FDRE \q_reg[22] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][22]_srl5_n_2 ),
        .Q(Q[22]),
        .R(SR));
  FDRE \q_reg[23] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][23]_srl5_n_2 ),
        .Q(Q[23]),
        .R(SR));
  FDRE \q_reg[24] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][24]_srl5_n_2 ),
        .Q(Q[24]),
        .R(SR));
  FDRE \q_reg[25] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][25]_srl5_n_2 ),
        .Q(Q[25]),
        .R(SR));
  FDRE \q_reg[26] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][26]_srl5_n_2 ),
        .Q(Q[26]),
        .R(SR));
  FDRE \q_reg[27] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][27]_srl5_n_2 ),
        .Q(Q[27]),
        .R(SR));
  FDRE \q_reg[28] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][28]_srl5_n_2 ),
        .Q(Q[28]),
        .R(SR));
  FDRE \q_reg[29] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][29]_srl5_n_2 ),
        .Q(Q[29]),
        .R(SR));
  FDRE \q_reg[2] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][2]_srl5_n_2 ),
        .Q(Q[2]),
        .R(SR));
  FDRE \q_reg[38] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][38]_srl5_n_2 ),
        .Q(Q[30]),
        .R(SR));
  FDRE \q_reg[3] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][3]_srl5_n_2 ),
        .Q(Q[3]),
        .R(SR));
  FDRE \q_reg[4] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][4]_srl5_n_2 ),
        .Q(Q[4]),
        .R(SR));
  FDRE \q_reg[5] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][5]_srl5_n_2 ),
        .Q(Q[5]),
        .R(SR));
  FDRE \q_reg[6] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][6]_srl5_n_2 ),
        .Q(Q[6]),
        .R(SR));
  FDRE \q_reg[7] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][7]_srl5_n_2 ),
        .Q(Q[7]),
        .R(SR));
  FDRE \q_reg[8] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][8]_srl5_n_2 ),
        .Q(Q[8]),
        .R(SR));
  FDRE \q_reg[9] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[4][9]_srl5_n_2 ),
        .Q(Q[9]),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair223" *) 
  LUT4 #(
    .INIT(16'hF0FE)) 
    \sect_cnt[0]_i_1__1 
       (.I0(fifo_wreq_valid),
        .I1(fifo_wreq_valid_buf_reg),
        .I2(last_sect_buf),
        .I3(wreq_handling_reg),
        .O(sect_cnt_reg_0__s_net_1));
  (* SOFT_HLUTNM = "soft_lutpair223" *) 
  LUT4 #(
    .INIT(16'h80AA)) 
    \start_addr[31]_i_1__1 
       (.I0(fifo_wreq_valid),
        .I1(last_sect_buf),
        .I2(\end_addr_buf_reg[31] ),
        .I3(wreq_handling_reg),
        .O(\start_addr_reg[31] ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo__parameterized1
   (fifo_resp_ready,
    next_resp0,
    push,
    SR,
    ap_clk,
    next_loop,
    next_resp,
    \could_multi_bursts.last_sect_buf_reg ,
    \sect_len_buf_reg[7] ,
    m_axi_DATA_C_BVALID,
    full_n_reg_0,
    in,
    ap_rst_n);
  output fifo_resp_ready;
  output next_resp0;
  output push;
  input [0:0]SR;
  input ap_clk;
  input next_loop;
  input next_resp;
  input \could_multi_bursts.last_sect_buf_reg ;
  input \sect_len_buf_reg[7] ;
  input m_axi_DATA_C_BVALID;
  input full_n_reg_0;
  input [0:0]in;
  input ap_rst_n;

  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire [1:1]aw2b_awdata;
  wire [1:0]aw2b_bdata;
  wire \could_multi_bursts.last_sect_buf_reg ;
  wire data_vld_i_1__5_n_2;
  wire data_vld_reg_n_2;
  wire empty_n_i_1__6_n_2;
  wire fifo_resp_ready;
  wire full_n_i_1_n_2;
  wire full_n_i_2__10_n_2;
  wire full_n_reg_0;
  wire [0:0]in;
  wire m_axi_DATA_C_BVALID;
  wire \mem_reg[14][0]_srl15_n_2 ;
  wire \mem_reg[14][1]_srl15_n_2 ;
  wire need_wrsp;
  wire next_loop;
  wire next_resp;
  wire next_resp0;
  wire pop0;
  wire \pout[0]_i_1__1_n_2 ;
  wire \pout[1]_i_1__1_n_2 ;
  wire \pout[2]_i_1__1_n_2 ;
  wire \pout[3]_i_1__1_n_2 ;
  wire \pout[3]_i_2__1_n_2 ;
  wire \pout[3]_i_3__1_n_2 ;
  wire \pout[3]_i_4_n_2 ;
  wire [3:0]pout_reg__0;
  wire push;
  wire \sect_len_buf_reg[7] ;

  (* SOFT_HLUTNM = "soft_lutpair219" *) 
  LUT5 #(
    .INIT(32'hBABAFABA)) 
    data_vld_i_1__5
       (.I0(next_loop),
        .I1(\pout[3]_i_3__1_n_2 ),
        .I2(data_vld_reg_n_2),
        .I3(need_wrsp),
        .I4(next_resp),
        .O(data_vld_i_1__5_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__5_n_2),
        .Q(data_vld_reg_n_2),
        .R(SR));
  LUT3 #(
    .INIT(8'hBA)) 
    empty_n_i_1__6
       (.I0(data_vld_reg_n_2),
        .I1(next_resp),
        .I2(need_wrsp),
        .O(empty_n_i_1__6_n_2));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1__6_n_2),
        .Q(need_wrsp),
        .R(SR));
  LUT5 #(
    .INIT(32'hFBFBBBFB)) 
    full_n_i_1
       (.I0(full_n_i_2__10_n_2),
        .I1(ap_rst_n),
        .I2(data_vld_reg_n_2),
        .I3(need_wrsp),
        .I4(next_resp),
        .O(full_n_i_1_n_2));
  LUT6 #(
    .INIT(64'hAA8AAAAAAAAAAAAA)) 
    full_n_i_2__10
       (.I0(fifo_resp_ready),
        .I1(\pout[3]_i_4_n_2 ),
        .I2(pout_reg__0[0]),
        .I3(pout_reg__0[1]),
        .I4(pout_reg__0[3]),
        .I5(pout_reg__0[2]),
        .O(full_n_i_2__10_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(fifo_resp_ready),
        .R(1'b0));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_resp/mem_reg[14] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_resp/mem_reg[14][0]_srl15 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[14][0]_srl15 
       (.A0(pout_reg__0[0]),
        .A1(pout_reg__0[1]),
        .A2(pout_reg__0[2]),
        .A3(pout_reg__0[3]),
        .CE(next_loop),
        .CLK(ap_clk),
        .D(in),
        .Q(\mem_reg[14][0]_srl15_n_2 ));
  (* srl_bus_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_resp/mem_reg[14] " *) 
  (* srl_name = "inst/\vector_multiplier_DATA_C_m_axi_U/bus_write/fifo_resp/mem_reg[14][1]_srl15 " *) 
  SRL16E #(
    .INIT(16'h0000)) 
    \mem_reg[14][1]_srl15 
       (.A0(pout_reg__0[0]),
        .A1(pout_reg__0[1]),
        .A2(pout_reg__0[2]),
        .A3(pout_reg__0[3]),
        .CE(next_loop),
        .CLK(ap_clk),
        .D(aw2b_awdata),
        .Q(\mem_reg[14][1]_srl15_n_2 ));
  LUT2 #(
    .INIT(4'h2)) 
    \mem_reg[14][1]_srl15_i_1 
       (.I0(\could_multi_bursts.last_sect_buf_reg ),
        .I1(\sect_len_buf_reg[7] ),
        .O(aw2b_awdata));
  LUT5 #(
    .INIT(32'hFF404040)) 
    next_resp_i_1
       (.I0(next_resp),
        .I1(need_wrsp),
        .I2(aw2b_bdata[0]),
        .I3(m_axi_DATA_C_BVALID),
        .I4(full_n_reg_0),
        .O(next_resp0));
  LUT1 #(
    .INIT(2'h1)) 
    \pout[0]_i_1__1 
       (.I0(pout_reg__0[0]),
        .O(\pout[0]_i_1__1_n_2 ));
  LUT6 #(
    .INIT(64'hF7FF08000800F7FF)) 
    \pout[1]_i_1__1 
       (.I0(data_vld_reg_n_2),
        .I1(need_wrsp),
        .I2(next_resp),
        .I3(next_loop),
        .I4(pout_reg__0[0]),
        .I5(pout_reg__0[1]),
        .O(\pout[1]_i_1__1_n_2 ));
  LUT6 #(
    .INIT(64'hA9A96AA9A9A9A9A9)) 
    \pout[2]_i_1__1 
       (.I0(pout_reg__0[2]),
        .I1(pout_reg__0[1]),
        .I2(pout_reg__0[0]),
        .I3(next_loop),
        .I4(pop0),
        .I5(data_vld_reg_n_2),
        .O(\pout[2]_i_1__1_n_2 ));
  LUT5 #(
    .INIT(32'hE0000000)) 
    \pout[2]_i_2 
       (.I0(aw2b_bdata[1]),
        .I1(aw2b_bdata[0]),
        .I2(full_n_reg_0),
        .I3(next_resp),
        .I4(need_wrsp),
        .O(push));
  LUT5 #(
    .INIT(32'h20006500)) 
    \pout[3]_i_1__1 
       (.I0(next_loop),
        .I1(next_resp),
        .I2(need_wrsp),
        .I3(data_vld_reg_n_2),
        .I4(\pout[3]_i_3__1_n_2 ),
        .O(\pout[3]_i_1__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair218" *) 
  LUT5 #(
    .INIT(32'hA6AAAA9A)) 
    \pout[3]_i_2__1 
       (.I0(pout_reg__0[3]),
        .I1(pout_reg__0[2]),
        .I2(\pout[3]_i_4_n_2 ),
        .I3(pout_reg__0[0]),
        .I4(pout_reg__0[1]),
        .O(\pout[3]_i_2__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair218" *) 
  LUT4 #(
    .INIT(16'h0001)) 
    \pout[3]_i_3__1 
       (.I0(pout_reg__0[0]),
        .I1(pout_reg__0[1]),
        .I2(pout_reg__0[3]),
        .I3(pout_reg__0[2]),
        .O(\pout[3]_i_3__1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair219" *) 
  LUT4 #(
    .INIT(16'hDFFF)) 
    \pout[3]_i_4 
       (.I0(next_loop),
        .I1(next_resp),
        .I2(need_wrsp),
        .I3(data_vld_reg_n_2),
        .O(\pout[3]_i_4_n_2 ));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__1_n_2 ),
        .D(\pout[0]_i_1__1_n_2 ),
        .Q(pout_reg__0[0]),
        .R(SR));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__1_n_2 ),
        .D(\pout[1]_i_1__1_n_2 ),
        .Q(pout_reg__0[1]),
        .R(SR));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__1_n_2 ),
        .D(\pout[2]_i_1__1_n_2 ),
        .Q(pout_reg__0[2]),
        .R(SR));
  FDRE \pout_reg[3] 
       (.C(ap_clk),
        .CE(\pout[3]_i_1__1_n_2 ),
        .D(\pout[3]_i_2__1_n_2 ),
        .Q(pout_reg__0[3]),
        .R(SR));
  LUT2 #(
    .INIT(4'hB)) 
    \q[1]_i_1 
       (.I0(next_resp),
        .I1(need_wrsp),
        .O(pop0));
  FDRE \q_reg[0] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[14][0]_srl15_n_2 ),
        .Q(aw2b_bdata[0]),
        .R(SR));
  FDRE \q_reg[1] 
       (.C(ap_clk),
        .CE(pop0),
        .D(\mem_reg[14][1]_srl15_n_2 ),
        .Q(aw2b_bdata[1]),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_fifo" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo__parameterized2
   (empty_n_reg_0,
    D,
    \rdata_reg[3] ,
    DATA_C_BREADY,
    m_axi_DATA_C_BREADY,
    SR,
    ap_clk,
    Q,
    s_axi_CTL_ARADDR,
    \int_a_reg[3] ,
    \int_b_reg[3] ,
    push,
    ap_rst_n);
  output empty_n_reg_0;
  output [0:0]D;
  output [0:0]\rdata_reg[3] ;
  output DATA_C_BREADY;
  output m_axi_DATA_C_BREADY;
  input [0:0]SR;
  input ap_clk;
  input [1:0]Q;
  input [5:0]s_axi_CTL_ARADDR;
  input \int_a_reg[3] ;
  input [0:0]\int_b_reg[3] ;
  input push;
  input ap_rst_n;

  wire [0:0]D;
  wire DATA_C_BREADY;
  wire [1:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire data_vld_i_1__6_n_2;
  wire data_vld_reg_n_2;
  wire empty_n_i_1__5_n_2;
  wire empty_n_reg_0;
  wire full_n_i_1_n_2;
  wire full_n_i_2__5_n_2;
  wire full_n_i_3__4_n_2;
  wire full_n_i_4__3_n_2;
  wire \int_a_reg[3] ;
  wire [0:0]\int_b_reg[3] ;
  wire m_axi_DATA_C_BREADY;
  wire pop0;
  wire \pout[0]_i_1__2_n_2 ;
  wire \pout[1]_i_1_n_2 ;
  wire \pout[2]_i_1_n_2 ;
  wire \pout_reg_n_2_[0] ;
  wire \pout_reg_n_2_[1] ;
  wire \pout_reg_n_2_[2] ;
  wire push;
  wire \rdata[3]_i_2_n_2 ;
  wire [0:0]\rdata_reg[3] ;
  wire [5:0]s_axi_CTL_ARADDR;

  LUT3 #(
    .INIT(8'hBA)) 
    \ap_CS_fsm[13]_i_1 
       (.I0(Q[0]),
        .I1(empty_n_reg_0),
        .I2(Q[1]),
        .O(D));
  LUT6 #(
    .INIT(64'hFFFEFFFFAAAAAAAA)) 
    data_vld_i_1__6
       (.I0(push),
        .I1(\pout_reg_n_2_[2] ),
        .I2(\pout_reg_n_2_[0] ),
        .I3(\pout_reg_n_2_[1] ),
        .I4(full_n_i_4__3_n_2),
        .I5(data_vld_reg_n_2),
        .O(data_vld_i_1__6_n_2));
  FDRE data_vld_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(data_vld_i_1__6_n_2),
        .Q(data_vld_reg_n_2),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair222" *) 
  LUT3 #(
    .INIT(8'hBA)) 
    empty_n_i_1__5
       (.I0(data_vld_reg_n_2),
        .I1(Q[1]),
        .I2(empty_n_reg_0),
        .O(empty_n_i_1__5_n_2));
  FDRE empty_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(empty_n_i_1__5_n_2),
        .Q(empty_n_reg_0),
        .R(SR));
  LUT6 #(
    .INIT(64'hFFFFFFFFFE00FFFF)) 
    full_n_i_1
       (.I0(\pout_reg_n_2_[2] ),
        .I1(full_n_i_2__5_n_2),
        .I2(full_n_i_3__4_n_2),
        .I3(m_axi_DATA_C_BREADY),
        .I4(ap_rst_n),
        .I5(full_n_i_4__3_n_2),
        .O(full_n_i_1_n_2));
  LUT2 #(
    .INIT(4'h7)) 
    full_n_i_2__5
       (.I0(\pout_reg_n_2_[1] ),
        .I1(\pout_reg_n_2_[0] ),
        .O(full_n_i_2__5_n_2));
  (* SOFT_HLUTNM = "soft_lutpair221" *) 
  LUT4 #(
    .INIT(16'hDFFF)) 
    full_n_i_3__4
       (.I0(push),
        .I1(Q[1]),
        .I2(empty_n_reg_0),
        .I3(data_vld_reg_n_2),
        .O(full_n_i_3__4_n_2));
  (* SOFT_HLUTNM = "soft_lutpair221" *) 
  LUT3 #(
    .INIT(8'hA2)) 
    full_n_i_4__3
       (.I0(data_vld_reg_n_2),
        .I1(empty_n_reg_0),
        .I2(Q[1]),
        .O(full_n_i_4__3_n_2));
  FDRE full_n_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(full_n_i_1_n_2),
        .Q(m_axi_DATA_C_BREADY),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair220" *) 
  LUT2 #(
    .INIT(4'h8)) 
    int_ap_done_i_2
       (.I0(empty_n_reg_0),
        .I1(Q[1]),
        .O(DATA_C_BREADY));
  LUT6 #(
    .INIT(64'h9F9F60609F9F6020)) 
    \pout[0]_i_1__2 
       (.I0(push),
        .I1(pop0),
        .I2(data_vld_reg_n_2),
        .I3(\pout_reg_n_2_[1] ),
        .I4(\pout_reg_n_2_[0] ),
        .I5(\pout_reg_n_2_[2] ),
        .O(\pout[0]_i_1__2_n_2 ));
  LUT6 #(
    .INIT(64'hDF20BF40DF20BF00)) 
    \pout[1]_i_1 
       (.I0(push),
        .I1(pop0),
        .I2(data_vld_reg_n_2),
        .I3(\pout_reg_n_2_[1] ),
        .I4(\pout_reg_n_2_[0] ),
        .I5(\pout_reg_n_2_[2] ),
        .O(\pout[1]_i_1_n_2 ));
  LUT6 #(
    .INIT(64'hDFFFFFBF20000000)) 
    \pout[2]_i_1 
       (.I0(push),
        .I1(pop0),
        .I2(data_vld_reg_n_2),
        .I3(\pout_reg_n_2_[1] ),
        .I4(\pout_reg_n_2_[0] ),
        .I5(\pout_reg_n_2_[2] ),
        .O(\pout[2]_i_1_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair222" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \pout[2]_i_3 
       (.I0(Q[1]),
        .I1(empty_n_reg_0),
        .O(pop0));
  FDRE \pout_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[0]_i_1__2_n_2 ),
        .Q(\pout_reg_n_2_[0] ),
        .R(SR));
  FDRE \pout_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[1]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[1] ),
        .R(SR));
  FDRE \pout_reg[2] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\pout[2]_i_1_n_2 ),
        .Q(\pout_reg_n_2_[2] ),
        .R(SR));
  LUT6 #(
    .INIT(64'h0101010000000100)) 
    \rdata[3]_i_1 
       (.I0(s_axi_CTL_ARADDR[1]),
        .I1(s_axi_CTL_ARADDR[0]),
        .I2(s_axi_CTL_ARADDR[2]),
        .I3(\rdata[3]_i_2_n_2 ),
        .I4(s_axi_CTL_ARADDR[3]),
        .I5(\int_a_reg[3] ),
        .O(\rdata_reg[3] ));
  (* SOFT_HLUTNM = "soft_lutpair220" *) 
  LUT5 #(
    .INIT(32'h0000F808)) 
    \rdata[3]_i_2 
       (.I0(Q[1]),
        .I1(empty_n_reg_0),
        .I2(s_axi_CTL_ARADDR[5]),
        .I3(\int_b_reg[3] ),
        .I4(s_axi_CTL_ARADDR[4]),
        .O(\rdata[3]_i_2_n_2 ));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_read" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_read
   (m_axi_DATA_C_RREADY,
    SR,
    ap_clk,
    m_axi_DATA_C_RVALID,
    ap_rst_n);
  output m_axi_DATA_C_RREADY;
  input [0:0]SR;
  input ap_clk;
  input m_axi_DATA_C_RVALID;
  input ap_rst_n;

  wire [0:0]SR;
  wire ap_clk;
  wire ap_rst_n;
  wire buff_rdata_n_13;
  wire buff_rdata_n_14;
  wire buff_rdata_n_15;
  wire buff_rdata_n_16;
  wire buff_rdata_n_17;
  wire buff_rdata_n_3;
  wire buff_rdata_n_4;
  wire buff_rdata_n_5;
  wire buff_rdata_n_6;
  wire \bus_equal_gen.rdata_valid_t_reg_n_2 ;
  wire m_axi_DATA_C_RREADY;
  wire m_axi_DATA_C_RVALID;
  wire p_0_out_carry__0_n_4;
  wire p_0_out_carry__0_n_5;
  wire p_0_out_carry__0_n_7;
  wire p_0_out_carry__0_n_8;
  wire p_0_out_carry__0_n_9;
  wire p_0_out_carry_n_2;
  wire p_0_out_carry_n_3;
  wire p_0_out_carry_n_4;
  wire p_0_out_carry_n_5;
  wire p_0_out_carry_n_6;
  wire p_0_out_carry_n_7;
  wire p_0_out_carry_n_8;
  wire p_0_out_carry_n_9;
  wire rdata_ack_t;
  wire [5:0]usedw_reg;
  wire [3:2]NLW_p_0_out_carry__0_CO_UNCONNECTED;
  wire [3:3]NLW_p_0_out_carry__0_O_UNCONNECTED;

  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_buffer__parameterized0 buff_rdata
       (.D({p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9,p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .DI(buff_rdata_n_16),
        .Q(usedw_reg),
        .S({buff_rdata_n_3,buff_rdata_n_4,buff_rdata_n_5,buff_rdata_n_6}),
        .SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .\bus_equal_gen.rdata_valid_t_reg (buff_rdata_n_17),
        .\bus_equal_gen.rdata_valid_t_reg_0 (\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .m_axi_DATA_C_RREADY(m_axi_DATA_C_RREADY),
        .m_axi_DATA_C_RVALID(m_axi_DATA_C_RVALID),
        .rdata_ack_t(rdata_ack_t),
        .\usedw_reg[7]_0 ({buff_rdata_n_13,buff_rdata_n_14,buff_rdata_n_15}));
  FDRE \bus_equal_gen.rdata_valid_t_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff_rdata_n_17),
        .Q(\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry
       (.CI(1'b0),
        .CO({p_0_out_carry_n_2,p_0_out_carry_n_3,p_0_out_carry_n_4,p_0_out_carry_n_5}),
        .CYINIT(usedw_reg[0]),
        .DI({usedw_reg[3:1],buff_rdata_n_16}),
        .O({p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .S({buff_rdata_n_3,buff_rdata_n_4,buff_rdata_n_5,buff_rdata_n_6}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry__0
       (.CI(p_0_out_carry_n_2),
        .CO({NLW_p_0_out_carry__0_CO_UNCONNECTED[3:2],p_0_out_carry__0_n_4,p_0_out_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,usedw_reg[5:4]}),
        .O({NLW_p_0_out_carry__0_O_UNCONNECTED[3],p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9}),
        .S({1'b0,buff_rdata_n_13,buff_rdata_n_14,buff_rdata_n_15}));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_reg_slice__parameterized0 rs_rdata
       (.SR(SR),
        .ap_clk(ap_clk),
        .\bus_equal_gen.rdata_valid_t_reg (\bus_equal_gen.rdata_valid_t_reg_n_2 ),
        .rdata_ack_t(rdata_ack_t));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_reg_slice" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_reg_slice
   (s_ready_t_reg_0,
    D,
    ap_enable_reg_pp0_iter0_reg,
    ap_enable_reg_pp0_iter4_reg,
    s_ready_t_reg_1,
    push,
    \q_reg[29] ,
    SR,
    ap_clk,
    Q,
    ap_enable_reg_pp0_iter4_reg_0,
    ap_enable_reg_pp0_iter0,
    ap_rst_n,
    exitcond_fu_220_p2,
    \ap_CS_fsm_reg[8] ,
    ap_enable_reg_pp0_iter3,
    ap_enable_reg_pp0_iter4_reg_1,
    ap_block_pp0_stage0_flag00011011,
    rs2f_wreq_ack,
    \c5_reg_236_reg[29] );
  output s_ready_t_reg_0;
  output [1:0]D;
  output ap_enable_reg_pp0_iter0_reg;
  output ap_enable_reg_pp0_iter4_reg;
  output [0:0]s_ready_t_reg_1;
  output push;
  output [29:0]\q_reg[29] ;
  input [0:0]SR;
  input ap_clk;
  input [2:0]Q;
  input ap_enable_reg_pp0_iter4_reg_0;
  input ap_enable_reg_pp0_iter0;
  input ap_rst_n;
  input exitcond_fu_220_p2;
  input \ap_CS_fsm_reg[8] ;
  input ap_enable_reg_pp0_iter3;
  input ap_enable_reg_pp0_iter4_reg_1;
  input ap_block_pp0_stage0_flag00011011;
  input rs2f_wreq_ack;
  input [29:0]\c5_reg_236_reg[29] ;

  wire [1:0]D;
  wire [2:0]Q;
  wire [0:0]SR;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_block_pp0_stage0_flag00011011;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter0_reg;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_enable_reg_pp0_iter4_reg_0;
  wire ap_enable_reg_pp0_iter4_reg_1;
  wire ap_rst_n;
  wire [29:0]\c5_reg_236_reg[29] ;
  wire \data_p1[0]_i_1__3_n_2 ;
  wire \data_p1[10]_i_1__3_n_2 ;
  wire \data_p1[11]_i_1__3_n_2 ;
  wire \data_p1[12]_i_1__3_n_2 ;
  wire \data_p1[13]_i_1__3_n_2 ;
  wire \data_p1[14]_i_1__3_n_2 ;
  wire \data_p1[15]_i_1__3_n_2 ;
  wire \data_p1[16]_i_1__3_n_2 ;
  wire \data_p1[17]_i_1__3_n_2 ;
  wire \data_p1[18]_i_1__3_n_2 ;
  wire \data_p1[19]_i_1__3_n_2 ;
  wire \data_p1[1]_i_1__3_n_2 ;
  wire \data_p1[20]_i_1__3_n_2 ;
  wire \data_p1[21]_i_1__3_n_2 ;
  wire \data_p1[22]_i_1__3_n_2 ;
  wire \data_p1[23]_i_1__3_n_2 ;
  wire \data_p1[24]_i_1__3_n_2 ;
  wire \data_p1[25]_i_1__3_n_2 ;
  wire \data_p1[26]_i_1__3_n_2 ;
  wire \data_p1[27]_i_1__3_n_2 ;
  wire \data_p1[28]_i_1__3_n_2 ;
  wire \data_p1[29]_i_2__1_n_2 ;
  wire \data_p1[2]_i_1__3_n_2 ;
  wire \data_p1[3]_i_1__3_n_2 ;
  wire \data_p1[4]_i_1__3_n_2 ;
  wire \data_p1[5]_i_1__3_n_2 ;
  wire \data_p1[6]_i_1__3_n_2 ;
  wire \data_p1[7]_i_1__3_n_2 ;
  wire \data_p1[8]_i_1__3_n_2 ;
  wire \data_p1[9]_i_1__3_n_2 ;
  wire [29:0]data_p2;
  wire exitcond_fu_220_p2;
  wire load_p1;
  wire load_p2;
  wire push;
  wire [29:0]\q_reg[29] ;
  wire rs2f_wreq_ack;
  wire s_ready_t_i_1__3_n_2;
  wire s_ready_t_reg_0;
  wire [0:0]s_ready_t_reg_1;
  wire [1:1]state;
  wire \state[0]_i_1__4_n_2 ;
  wire \state[1]_i_1__4_n_2 ;

  (* SOFT_HLUTNM = "soft_lutpair225" *) 
  LUT3 #(
    .INIT(8'hAE)) 
    \ap_CS_fsm[7]_i_1 
       (.I0(Q[0]),
        .I1(Q[1]),
        .I2(s_ready_t_reg_0),
        .O(D[0]));
  (* SOFT_HLUTNM = "soft_lutpair225" *) 
  LUT4 #(
    .INIT(16'h88B8)) 
    \ap_CS_fsm[8]_i_1 
       (.I0(s_ready_t_reg_0),
        .I1(Q[1]),
        .I2(Q[2]),
        .I3(ap_enable_reg_pp0_iter4_reg_0),
        .O(D[1]));
  LUT6 #(
    .INIT(64'h0000EA00EA00EA00)) 
    ap_enable_reg_pp0_iter0_i_1
       (.I0(ap_enable_reg_pp0_iter0),
        .I1(Q[1]),
        .I2(s_ready_t_reg_0),
        .I3(ap_rst_n),
        .I4(exitcond_fu_220_p2),
        .I5(\ap_CS_fsm_reg[8] ),
        .O(ap_enable_reg_pp0_iter0_reg));
  LUT6 #(
    .INIT(64'h00C0C0C0A0A0A0A0)) 
    ap_enable_reg_pp0_iter4_i_1
       (.I0(ap_enable_reg_pp0_iter3),
        .I1(ap_enable_reg_pp0_iter4_reg_1),
        .I2(ap_rst_n),
        .I3(s_ready_t_reg_0),
        .I4(Q[1]),
        .I5(ap_block_pp0_stage0_flag00011011),
        .O(ap_enable_reg_pp0_iter4_reg));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[0]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [0]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[0]),
        .O(\data_p1[0]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[10]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [10]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[10]),
        .O(\data_p1[10]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[11]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [11]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[11]),
        .O(\data_p1[11]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[12]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [12]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[12]),
        .O(\data_p1[12]_i_1__3_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair226" *) 
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[13]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [13]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[13]),
        .O(\data_p1[13]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[14]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [14]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[14]),
        .O(\data_p1[14]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[15]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [15]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[15]),
        .O(\data_p1[15]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[16]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [16]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[16]),
        .O(\data_p1[16]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[17]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [17]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[17]),
        .O(\data_p1[17]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[18]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [18]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[18]),
        .O(\data_p1[18]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[19]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [19]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[19]),
        .O(\data_p1[19]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[1]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [1]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[1]),
        .O(\data_p1[1]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[20]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [20]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[20]),
        .O(\data_p1[20]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[21]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [21]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[21]),
        .O(\data_p1[21]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[22]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [22]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[22]),
        .O(\data_p1[22]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[23]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [23]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[23]),
        .O(\data_p1[23]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[24]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [24]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[24]),
        .O(\data_p1[24]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[25]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [25]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[25]),
        .O(\data_p1[25]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[26]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [26]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[26]),
        .O(\data_p1[26]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[27]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [27]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[27]),
        .O(\data_p1[27]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[28]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [28]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[28]),
        .O(\data_p1[28]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hD088)) 
    \data_p1[29]_i_1__3 
       (.I0(s_ready_t_reg_1),
        .I1(rs2f_wreq_ack),
        .I2(Q[1]),
        .I3(state),
        .O(load_p1));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[29]_i_2__1 
       (.I0(\c5_reg_236_reg[29] [29]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[29]),
        .O(\data_p1[29]_i_2__1_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[2]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [2]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[2]),
        .O(\data_p1[2]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[3]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [3]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[3]),
        .O(\data_p1[3]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[4]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [4]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[4]),
        .O(\data_p1[4]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[5]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [5]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[5]),
        .O(\data_p1[5]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[6]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [6]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[6]),
        .O(\data_p1[6]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[7]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [7]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[7]),
        .O(\data_p1[7]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[8]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [8]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[8]),
        .O(\data_p1[8]_i_1__3_n_2 ));
  LUT4 #(
    .INIT(16'hBA8A)) 
    \data_p1[9]_i_1__3 
       (.I0(\c5_reg_236_reg[29] [9]),
        .I1(state),
        .I2(s_ready_t_reg_1),
        .I3(data_p2[9]),
        .O(\data_p1[9]_i_1__3_n_2 ));
  FDRE \data_p1_reg[0] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[0]_i_1__3_n_2 ),
        .Q(\q_reg[29] [0]),
        .R(1'b0));
  FDRE \data_p1_reg[10] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[10]_i_1__3_n_2 ),
        .Q(\q_reg[29] [10]),
        .R(1'b0));
  FDRE \data_p1_reg[11] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[11]_i_1__3_n_2 ),
        .Q(\q_reg[29] [11]),
        .R(1'b0));
  FDRE \data_p1_reg[12] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[12]_i_1__3_n_2 ),
        .Q(\q_reg[29] [12]),
        .R(1'b0));
  FDRE \data_p1_reg[13] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[13]_i_1__3_n_2 ),
        .Q(\q_reg[29] [13]),
        .R(1'b0));
  FDRE \data_p1_reg[14] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[14]_i_1__3_n_2 ),
        .Q(\q_reg[29] [14]),
        .R(1'b0));
  FDRE \data_p1_reg[15] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[15]_i_1__3_n_2 ),
        .Q(\q_reg[29] [15]),
        .R(1'b0));
  FDRE \data_p1_reg[16] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[16]_i_1__3_n_2 ),
        .Q(\q_reg[29] [16]),
        .R(1'b0));
  FDRE \data_p1_reg[17] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[17]_i_1__3_n_2 ),
        .Q(\q_reg[29] [17]),
        .R(1'b0));
  FDRE \data_p1_reg[18] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[18]_i_1__3_n_2 ),
        .Q(\q_reg[29] [18]),
        .R(1'b0));
  FDRE \data_p1_reg[19] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[19]_i_1__3_n_2 ),
        .Q(\q_reg[29] [19]),
        .R(1'b0));
  FDRE \data_p1_reg[1] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[1]_i_1__3_n_2 ),
        .Q(\q_reg[29] [1]),
        .R(1'b0));
  FDRE \data_p1_reg[20] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[20]_i_1__3_n_2 ),
        .Q(\q_reg[29] [20]),
        .R(1'b0));
  FDRE \data_p1_reg[21] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[21]_i_1__3_n_2 ),
        .Q(\q_reg[29] [21]),
        .R(1'b0));
  FDRE \data_p1_reg[22] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[22]_i_1__3_n_2 ),
        .Q(\q_reg[29] [22]),
        .R(1'b0));
  FDRE \data_p1_reg[23] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[23]_i_1__3_n_2 ),
        .Q(\q_reg[29] [23]),
        .R(1'b0));
  FDRE \data_p1_reg[24] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[24]_i_1__3_n_2 ),
        .Q(\q_reg[29] [24]),
        .R(1'b0));
  FDRE \data_p1_reg[25] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[25]_i_1__3_n_2 ),
        .Q(\q_reg[29] [25]),
        .R(1'b0));
  FDRE \data_p1_reg[26] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[26]_i_1__3_n_2 ),
        .Q(\q_reg[29] [26]),
        .R(1'b0));
  FDRE \data_p1_reg[27] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[27]_i_1__3_n_2 ),
        .Q(\q_reg[29] [27]),
        .R(1'b0));
  FDRE \data_p1_reg[28] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[28]_i_1__3_n_2 ),
        .Q(\q_reg[29] [28]),
        .R(1'b0));
  FDRE \data_p1_reg[29] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[29]_i_2__1_n_2 ),
        .Q(\q_reg[29] [29]),
        .R(1'b0));
  FDRE \data_p1_reg[2] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[2]_i_1__3_n_2 ),
        .Q(\q_reg[29] [2]),
        .R(1'b0));
  FDRE \data_p1_reg[3] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[3]_i_1__3_n_2 ),
        .Q(\q_reg[29] [3]),
        .R(1'b0));
  FDRE \data_p1_reg[4] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[4]_i_1__3_n_2 ),
        .Q(\q_reg[29] [4]),
        .R(1'b0));
  FDRE \data_p1_reg[5] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[5]_i_1__3_n_2 ),
        .Q(\q_reg[29] [5]),
        .R(1'b0));
  FDRE \data_p1_reg[6] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[6]_i_1__3_n_2 ),
        .Q(\q_reg[29] [6]),
        .R(1'b0));
  FDRE \data_p1_reg[7] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[7]_i_1__3_n_2 ),
        .Q(\q_reg[29] [7]),
        .R(1'b0));
  FDRE \data_p1_reg[8] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[8]_i_1__3_n_2 ),
        .Q(\q_reg[29] [8]),
        .R(1'b0));
  FDRE \data_p1_reg[9] 
       (.C(ap_clk),
        .CE(load_p1),
        .D(\data_p1[9]_i_1__3_n_2 ),
        .Q(\q_reg[29] [9]),
        .R(1'b0));
  LUT2 #(
    .INIT(4'h8)) 
    \data_p2[29]_i_1__1 
       (.I0(s_ready_t_reg_0),
        .I1(Q[1]),
        .O(load_p2));
  FDRE \data_p2_reg[0] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [0]),
        .Q(data_p2[0]),
        .R(1'b0));
  FDRE \data_p2_reg[10] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [10]),
        .Q(data_p2[10]),
        .R(1'b0));
  FDRE \data_p2_reg[11] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [11]),
        .Q(data_p2[11]),
        .R(1'b0));
  FDRE \data_p2_reg[12] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [12]),
        .Q(data_p2[12]),
        .R(1'b0));
  FDRE \data_p2_reg[13] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [13]),
        .Q(data_p2[13]),
        .R(1'b0));
  FDRE \data_p2_reg[14] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [14]),
        .Q(data_p2[14]),
        .R(1'b0));
  FDRE \data_p2_reg[15] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [15]),
        .Q(data_p2[15]),
        .R(1'b0));
  FDRE \data_p2_reg[16] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [16]),
        .Q(data_p2[16]),
        .R(1'b0));
  FDRE \data_p2_reg[17] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [17]),
        .Q(data_p2[17]),
        .R(1'b0));
  FDRE \data_p2_reg[18] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [18]),
        .Q(data_p2[18]),
        .R(1'b0));
  FDRE \data_p2_reg[19] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [19]),
        .Q(data_p2[19]),
        .R(1'b0));
  FDRE \data_p2_reg[1] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [1]),
        .Q(data_p2[1]),
        .R(1'b0));
  FDRE \data_p2_reg[20] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [20]),
        .Q(data_p2[20]),
        .R(1'b0));
  FDRE \data_p2_reg[21] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [21]),
        .Q(data_p2[21]),
        .R(1'b0));
  FDRE \data_p2_reg[22] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [22]),
        .Q(data_p2[22]),
        .R(1'b0));
  FDRE \data_p2_reg[23] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [23]),
        .Q(data_p2[23]),
        .R(1'b0));
  FDRE \data_p2_reg[24] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [24]),
        .Q(data_p2[24]),
        .R(1'b0));
  FDRE \data_p2_reg[25] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [25]),
        .Q(data_p2[25]),
        .R(1'b0));
  FDRE \data_p2_reg[26] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [26]),
        .Q(data_p2[26]),
        .R(1'b0));
  FDRE \data_p2_reg[27] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [27]),
        .Q(data_p2[27]),
        .R(1'b0));
  FDRE \data_p2_reg[28] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [28]),
        .Q(data_p2[28]),
        .R(1'b0));
  FDRE \data_p2_reg[29] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [29]),
        .Q(data_p2[29]),
        .R(1'b0));
  FDRE \data_p2_reg[2] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [2]),
        .Q(data_p2[2]),
        .R(1'b0));
  FDRE \data_p2_reg[3] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [3]),
        .Q(data_p2[3]),
        .R(1'b0));
  FDRE \data_p2_reg[4] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [4]),
        .Q(data_p2[4]),
        .R(1'b0));
  FDRE \data_p2_reg[5] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [5]),
        .Q(data_p2[5]),
        .R(1'b0));
  FDRE \data_p2_reg[6] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [6]),
        .Q(data_p2[6]),
        .R(1'b0));
  FDRE \data_p2_reg[7] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [7]),
        .Q(data_p2[7]),
        .R(1'b0));
  FDRE \data_p2_reg[8] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [8]),
        .Q(data_p2[8]),
        .R(1'b0));
  FDRE \data_p2_reg[9] 
       (.C(ap_clk),
        .CE(load_p2),
        .D(\c5_reg_236_reg[29] [9]),
        .Q(data_p2[9]),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair226" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \mem_reg[4][0]_srl5_i_1__2 
       (.I0(s_ready_t_reg_1),
        .I1(rs2f_wreq_ack),
        .O(push));
  (* SOFT_HLUTNM = "soft_lutpair224" *) 
  LUT5 #(
    .INIT(32'hF7FF30CC)) 
    s_ready_t_i_1__3
       (.I0(Q[1]),
        .I1(state),
        .I2(rs2f_wreq_ack),
        .I3(s_ready_t_reg_1),
        .I4(s_ready_t_reg_0),
        .O(s_ready_t_i_1__3_n_2));
  FDRE s_ready_t_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(s_ready_t_i_1__3_n_2),
        .Q(s_ready_t_reg_0),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair224" *) 
  LUT5 #(
    .INIT(32'hEECC0CCC)) 
    \state[0]_i_1__4 
       (.I0(s_ready_t_reg_0),
        .I1(s_ready_t_reg_1),
        .I2(rs2f_wreq_ack),
        .I3(state),
        .I4(Q[1]),
        .O(\state[0]_i_1__4_n_2 ));
  LUT4 #(
    .INIT(16'hF4FF)) 
    \state[1]_i_1__4 
       (.I0(Q[1]),
        .I1(state),
        .I2(rs2f_wreq_ack),
        .I3(s_ready_t_reg_1),
        .O(\state[1]_i_1__4_n_2 ));
  FDRE \state_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[0]_i_1__4_n_2 ),
        .Q(s_ready_t_reg_1),
        .R(SR));
  FDSE \state_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[1]_i_1__4_n_2 ),
        .Q(state),
        .S(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_reg_slice" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_reg_slice__parameterized0
   (rdata_ack_t,
    SR,
    ap_clk,
    \bus_equal_gen.rdata_valid_t_reg );
  output rdata_ack_t;
  input [0:0]SR;
  input ap_clk;
  input \bus_equal_gen.rdata_valid_t_reg ;

  wire [0:0]SR;
  wire ap_clk;
  wire \bus_equal_gen.rdata_valid_t_reg ;
  wire rdata_ack_t;
  wire s_ready_t_i_1__4_n_2;
  wire [1:1]state;
  wire \state[0]_i_1__3_n_2 ;
  wire \state[1]_i_1__3_n_2 ;
  wire \state_reg_n_2_[0] ;

  (* SOFT_HLUTNM = "soft_lutpair186" *) 
  LUT4 #(
    .INIT(16'h7F30)) 
    s_ready_t_i_1__4
       (.I0(\bus_equal_gen.rdata_valid_t_reg ),
        .I1(\state_reg_n_2_[0] ),
        .I2(state),
        .I3(rdata_ack_t),
        .O(s_ready_t_i_1__4_n_2));
  FDRE s_ready_t_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(s_ready_t_i_1__4_n_2),
        .Q(rdata_ack_t),
        .R(SR));
  (* SOFT_HLUTNM = "soft_lutpair186" *) 
  LUT4 #(
    .INIT(16'hEAAA)) 
    \state[0]_i_1__3 
       (.I0(\state_reg_n_2_[0] ),
        .I1(\bus_equal_gen.rdata_valid_t_reg ),
        .I2(state),
        .I3(rdata_ack_t),
        .O(\state[0]_i_1__3_n_2 ));
  LUT3 #(
    .INIT(8'h5D)) 
    \state[1]_i_1__3 
       (.I0(\state_reg_n_2_[0] ),
        .I1(state),
        .I2(\bus_equal_gen.rdata_valid_t_reg ),
        .O(\state[1]_i_1__3_n_2 ));
  FDRE \state_reg[0] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[0]_i_1__3_n_2 ),
        .Q(\state_reg_n_2_[0] ),
        .R(SR));
  FDSE \state_reg[1] 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\state[1]_i_1__3_n_2 ),
        .Q(state),
        .S(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_throttl" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_throttl
   (Q,
    \throttl_cnt_reg[5]_0 ,
    m_axi_DATA_C_AWVALID,
    \could_multi_bursts.AWVALID_Dummy_reg ,
    \could_multi_bursts.loop_cnt_reg[5] ,
    D,
    \could_multi_bursts.awlen_buf_reg[1] ,
    AWLEN,
    AWVALID_Dummy,
    SR,
    E,
    ap_clk);
  output [0:0]Q;
  output \throttl_cnt_reg[5]_0 ;
  output m_axi_DATA_C_AWVALID;
  output \could_multi_bursts.AWVALID_Dummy_reg ;
  output \could_multi_bursts.loop_cnt_reg[5] ;
  input [0:0]D;
  input \could_multi_bursts.awlen_buf_reg[1] ;
  input [2:0]AWLEN;
  input AWVALID_Dummy;
  input [0:0]SR;
  input [0:0]E;
  input ap_clk;

  wire [2:0]AWLEN;
  wire AWVALID_Dummy;
  wire [0:0]D;
  wire [0:0]E;
  wire [0:0]Q;
  wire [0:0]SR;
  wire ap_clk;
  wire \could_multi_bursts.AWVALID_Dummy_reg ;
  wire \could_multi_bursts.awlen_buf_reg[1] ;
  wire \could_multi_bursts.loop_cnt_reg[5] ;
  wire m_axi_DATA_C_AWVALID;
  wire [7:1]p_0_in__1;
  wire [7:1]throttl_cnt_reg;
  wire \throttl_cnt_reg[5]_0 ;

  (* SOFT_HLUTNM = "soft_lutpair262" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    \could_multi_bursts.awaddr_buf[31]_i_3 
       (.I0(throttl_cnt_reg[5]),
        .I1(throttl_cnt_reg[4]),
        .I2(throttl_cnt_reg[7]),
        .I3(throttl_cnt_reg[6]),
        .O(\could_multi_bursts.loop_cnt_reg[5] ));
  LUT6 #(
    .INIT(64'h0000000000000002)) 
    m_axi_DATA_C_AWVALID_INST_0
       (.I0(AWVALID_Dummy),
        .I1(throttl_cnt_reg[5]),
        .I2(throttl_cnt_reg[4]),
        .I3(throttl_cnt_reg[7]),
        .I4(throttl_cnt_reg[6]),
        .I5(\throttl_cnt_reg[5]_0 ),
        .O(m_axi_DATA_C_AWVALID));
  LUT4 #(
    .INIT(16'hFFFE)) 
    m_axi_DATA_C_AWVALID_INST_0_i_1
       (.I0(throttl_cnt_reg[1]),
        .I1(Q),
        .I2(throttl_cnt_reg[3]),
        .I3(throttl_cnt_reg[2]),
        .O(\throttl_cnt_reg[5]_0 ));
  LUT4 #(
    .INIT(16'h9099)) 
    \throttl_cnt[1]_i_1 
       (.I0(throttl_cnt_reg[1]),
        .I1(Q),
        .I2(AWLEN[0]),
        .I3(\could_multi_bursts.awlen_buf_reg[1] ),
        .O(p_0_in__1[1]));
  LUT5 #(
    .INIT(32'hDDD0000D)) 
    \throttl_cnt[2]_i_1 
       (.I0(\could_multi_bursts.awlen_buf_reg[1] ),
        .I1(AWLEN[1]),
        .I2(Q),
        .I3(throttl_cnt_reg[1]),
        .I4(throttl_cnt_reg[2]),
        .O(p_0_in__1[2]));
  LUT6 #(
    .INIT(64'hFE010000FE01FE01)) 
    \throttl_cnt[3]_i_1 
       (.I0(throttl_cnt_reg[2]),
        .I1(throttl_cnt_reg[1]),
        .I2(Q),
        .I3(throttl_cnt_reg[3]),
        .I4(AWLEN[2]),
        .I5(\could_multi_bursts.awlen_buf_reg[1] ),
        .O(p_0_in__1[3]));
  LUT6 #(
    .INIT(64'h00000000FFFE0001)) 
    \throttl_cnt[4]_i_1 
       (.I0(throttl_cnt_reg[1]),
        .I1(Q),
        .I2(throttl_cnt_reg[3]),
        .I3(throttl_cnt_reg[2]),
        .I4(throttl_cnt_reg[4]),
        .I5(\could_multi_bursts.awlen_buf_reg[1] ),
        .O(p_0_in__1[4]));
  (* SOFT_HLUTNM = "soft_lutpair263" *) 
  LUT4 #(
    .INIT(16'h00E1)) 
    \throttl_cnt[5]_i_1 
       (.I0(throttl_cnt_reg[4]),
        .I1(\throttl_cnt_reg[5]_0 ),
        .I2(throttl_cnt_reg[5]),
        .I3(\could_multi_bursts.awlen_buf_reg[1] ),
        .O(p_0_in__1[5]));
  (* SOFT_HLUTNM = "soft_lutpair263" *) 
  LUT5 #(
    .INIT(32'h0000FE01)) 
    \throttl_cnt[6]_i_1 
       (.I0(\throttl_cnt_reg[5]_0 ),
        .I1(throttl_cnt_reg[5]),
        .I2(throttl_cnt_reg[4]),
        .I3(throttl_cnt_reg[6]),
        .I4(\could_multi_bursts.awlen_buf_reg[1] ),
        .O(p_0_in__1[6]));
  LUT6 #(
    .INIT(64'h00000000FFFE0001)) 
    \throttl_cnt[7]_i_2 
       (.I0(throttl_cnt_reg[4]),
        .I1(throttl_cnt_reg[5]),
        .I2(\throttl_cnt_reg[5]_0 ),
        .I3(throttl_cnt_reg[6]),
        .I4(throttl_cnt_reg[7]),
        .I5(\could_multi_bursts.awlen_buf_reg[1] ),
        .O(p_0_in__1[7]));
  (* SOFT_HLUTNM = "soft_lutpair262" *) 
  LUT5 #(
    .INIT(32'hFFFFFFFE)) 
    \throttl_cnt[7]_i_3 
       (.I0(\throttl_cnt_reg[5]_0 ),
        .I1(throttl_cnt_reg[6]),
        .I2(throttl_cnt_reg[7]),
        .I3(throttl_cnt_reg[4]),
        .I4(throttl_cnt_reg[5]),
        .O(\could_multi_bursts.AWVALID_Dummy_reg ));
  FDRE \throttl_cnt_reg[0] 
       (.C(ap_clk),
        .CE(E),
        .D(D),
        .Q(Q),
        .R(SR));
  FDRE \throttl_cnt_reg[1] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[1]),
        .Q(throttl_cnt_reg[1]),
        .R(SR));
  FDRE \throttl_cnt_reg[2] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[2]),
        .Q(throttl_cnt_reg[2]),
        .R(SR));
  FDRE \throttl_cnt_reg[3] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[3]),
        .Q(throttl_cnt_reg[3]),
        .R(SR));
  FDRE \throttl_cnt_reg[4] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[4]),
        .Q(throttl_cnt_reg[4]),
        .R(SR));
  FDRE \throttl_cnt_reg[5] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[5]),
        .Q(throttl_cnt_reg[5]),
        .R(SR));
  FDRE \throttl_cnt_reg[6] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[6]),
        .Q(throttl_cnt_reg[6]),
        .R(SR));
  FDRE \throttl_cnt_reg[7] 
       (.C(ap_clk),
        .CE(E),
        .D(p_0_in__1[7]),
        .Q(throttl_cnt_reg[7]),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplier_DATA_C_m_axi_write" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_write
   (mem_reg,
    SR,
    s_ready_t_reg,
    empty_n_reg,
    AWVALID_Dummy,
    m_axi_DATA_C_WVALID,
    m_axi_DATA_C_WLAST,
    D,
    \rdata_reg[3] ,
    DATA_C_BREADY,
    ap_enable_reg_pp0_iter0_reg,
    ap_enable_reg_pp0_iter4_reg,
    m_axi_DATA_C_AWADDR,
    \m_axi_DATA_C_AWLEN[3] ,
    mem_reg_0,
    E,
    \throttl_cnt_reg[7] ,
    \throttl_cnt_reg[0] ,
    m_axi_DATA_C_BREADY,
    m_axi_DATA_C_WDATA,
    m_axi_DATA_C_WSTRB,
    ap_clk,
    \tmp_reg_287_reg[31] ,
    WEBWE,
    Q,
    ap_enable_reg_pp0_iter4_reg_0,
    s_axi_CTL_ARADDR,
    \int_a_reg[3] ,
    ap_rst_n,
    m_axi_DATA_C_WREADY,
    ap_enable_reg_pp0_iter0,
    exitcond_fu_220_p2,
    \ap_CS_fsm_reg[8] ,
    ap_enable_reg_pp0_iter3,
    ap_enable_reg_pp0_iter4_reg_1,
    ap_block_pp0_stage0_flag00011011,
    \int_b_reg[3] ,
    ap_reg_pp0_iter3_exitcond_reg_268,
    m_axi_DATA_C_AWREADY,
    \throttl_cnt_reg[5] ,
    \throttl_cnt_reg[1] ,
    \throttl_cnt_reg[6] ,
    \throttl_cnt_reg[0]_0 ,
    m_axi_DATA_C_AWVALID,
    m_axi_DATA_C_BVALID,
    \c5_reg_236_reg[29] );
  output mem_reg;
  output [0:0]SR;
  output s_ready_t_reg;
  output empty_n_reg;
  output AWVALID_Dummy;
  output m_axi_DATA_C_WVALID;
  output m_axi_DATA_C_WLAST;
  output [2:0]D;
  output [0:0]\rdata_reg[3] ;
  output DATA_C_BREADY;
  output ap_enable_reg_pp0_iter0_reg;
  output ap_enable_reg_pp0_iter4_reg;
  output [29:0]m_axi_DATA_C_AWADDR;
  output [3:0]\m_axi_DATA_C_AWLEN[3] ;
  output mem_reg_0;
  output [0:0]E;
  output \throttl_cnt_reg[7] ;
  output [0:0]\throttl_cnt_reg[0] ;
  output m_axi_DATA_C_BREADY;
  output [31:0]m_axi_DATA_C_WDATA;
  output [3:0]m_axi_DATA_C_WSTRB;
  input ap_clk;
  input [31:0]\tmp_reg_287_reg[31] ;
  input [0:0]WEBWE;
  input [4:0]Q;
  input ap_enable_reg_pp0_iter4_reg_0;
  input [5:0]s_axi_CTL_ARADDR;
  input \int_a_reg[3] ;
  input ap_rst_n;
  input m_axi_DATA_C_WREADY;
  input ap_enable_reg_pp0_iter0;
  input exitcond_fu_220_p2;
  input \ap_CS_fsm_reg[8] ;
  input ap_enable_reg_pp0_iter3;
  input ap_enable_reg_pp0_iter4_reg_1;
  input ap_block_pp0_stage0_flag00011011;
  input [0:0]\int_b_reg[3] ;
  input ap_reg_pp0_iter3_exitcond_reg_268;
  input m_axi_DATA_C_AWREADY;
  input \throttl_cnt_reg[5] ;
  input \throttl_cnt_reg[1] ;
  input \throttl_cnt_reg[6] ;
  input [0:0]\throttl_cnt_reg[0]_0 ;
  input m_axi_DATA_C_AWVALID;
  input m_axi_DATA_C_BVALID;
  input [29:0]\c5_reg_236_reg[29] ;

  wire AWVALID_Dummy;
  wire [2:0]D;
  wire DATA_C_BREADY;
  wire [0:0]E;
  wire [4:0]Q;
  wire [0:0]SR;
  wire [0:0]WEBWE;
  wire align_len0;
  wire [31:7]align_len0__0;
  wire \align_len0_inferred__1/i__carry_n_3 ;
  wire \align_len0_inferred__1/i__carry_n_4 ;
  wire \align_len0_inferred__1/i__carry_n_5 ;
  wire \align_len_reg_n_2_[31] ;
  wire \align_len_reg_n_2_[7] ;
  wire \align_len_reg_n_2_[8] ;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_block_pp0_stage0_flag00011011;
  wire ap_clk;
  wire ap_enable_reg_pp0_iter0;
  wire ap_enable_reg_pp0_iter0_reg;
  wire ap_enable_reg_pp0_iter3;
  wire ap_enable_reg_pp0_iter4_reg;
  wire ap_enable_reg_pp0_iter4_reg_0;
  wire ap_enable_reg_pp0_iter4_reg_1;
  wire ap_reg_pp0_iter3_exitcond_reg_268;
  wire ap_rst_n;
  wire [31:2]awaddr_tmp;
  wire [3:0]awlen_tmp;
  wire [9:3]beat_len_buf;
  wire buff_wdata_n_15;
  wire buff_wdata_n_16;
  wire buff_wdata_n_17;
  wire buff_wdata_n_19;
  wire buff_wdata_n_20;
  wire buff_wdata_n_25;
  wire buff_wdata_n_26;
  wire buff_wdata_n_27;
  wire buff_wdata_n_28;
  wire buff_wdata_n_29;
  wire buff_wdata_n_30;
  wire buff_wdata_n_31;
  wire buff_wdata_n_32;
  wire buff_wdata_n_33;
  wire buff_wdata_n_34;
  wire buff_wdata_n_35;
  wire buff_wdata_n_36;
  wire buff_wdata_n_37;
  wire buff_wdata_n_38;
  wire buff_wdata_n_39;
  wire buff_wdata_n_4;
  wire buff_wdata_n_40;
  wire buff_wdata_n_41;
  wire buff_wdata_n_42;
  wire buff_wdata_n_43;
  wire buff_wdata_n_44;
  wire buff_wdata_n_45;
  wire buff_wdata_n_46;
  wire buff_wdata_n_47;
  wire buff_wdata_n_48;
  wire buff_wdata_n_49;
  wire buff_wdata_n_5;
  wire buff_wdata_n_50;
  wire buff_wdata_n_51;
  wire buff_wdata_n_52;
  wire buff_wdata_n_53;
  wire buff_wdata_n_54;
  wire buff_wdata_n_55;
  wire buff_wdata_n_56;
  wire buff_wdata_n_6;
  wire buff_wdata_n_7;
  wire burst_valid;
  wire \bus_equal_gen.fifo_burst_n_14 ;
  wire \bus_equal_gen.fifo_burst_n_15 ;
  wire \bus_equal_gen.fifo_burst_n_16 ;
  wire \bus_equal_gen.fifo_burst_n_17 ;
  wire \bus_equal_gen.fifo_burst_n_18 ;
  wire \bus_equal_gen.fifo_burst_n_19 ;
  wire \bus_equal_gen.fifo_burst_n_20 ;
  wire \bus_equal_gen.fifo_burst_n_21 ;
  wire \bus_equal_gen.fifo_burst_n_22 ;
  wire \bus_equal_gen.fifo_burst_n_23 ;
  wire \bus_equal_gen.fifo_burst_n_24 ;
  wire \bus_equal_gen.fifo_burst_n_25 ;
  wire \bus_equal_gen.fifo_burst_n_26 ;
  wire \bus_equal_gen.fifo_burst_n_27 ;
  wire \bus_equal_gen.fifo_burst_n_28 ;
  wire \bus_equal_gen.fifo_burst_n_29 ;
  wire \bus_equal_gen.fifo_burst_n_3 ;
  wire \bus_equal_gen.fifo_burst_n_30 ;
  wire \bus_equal_gen.fifo_burst_n_31 ;
  wire \bus_equal_gen.fifo_burst_n_32 ;
  wire \bus_equal_gen.fifo_burst_n_33 ;
  wire \bus_equal_gen.fifo_burst_n_34 ;
  wire \bus_equal_gen.fifo_burst_n_35 ;
  wire \bus_equal_gen.fifo_burst_n_36 ;
  wire \bus_equal_gen.fifo_burst_n_37 ;
  wire \bus_equal_gen.fifo_burst_n_38 ;
  wire \bus_equal_gen.fifo_burst_n_39 ;
  wire \bus_equal_gen.fifo_burst_n_4 ;
  wire \bus_equal_gen.fifo_burst_n_40 ;
  wire \bus_equal_gen.fifo_burst_n_41 ;
  wire \bus_equal_gen.fifo_burst_n_42 ;
  wire \bus_equal_gen.fifo_burst_n_43 ;
  wire \bus_equal_gen.fifo_burst_n_44 ;
  wire \bus_equal_gen.fifo_burst_n_45 ;
  wire \bus_equal_gen.fifo_burst_n_46 ;
  wire \bus_equal_gen.fifo_burst_n_47 ;
  wire \bus_equal_gen.fifo_burst_n_48 ;
  wire \bus_equal_gen.fifo_burst_n_7 ;
  wire \bus_equal_gen.fifo_burst_n_9 ;
  wire \bus_equal_gen.len_cnt[7]_i_3_n_2 ;
  wire [7:0]\bus_equal_gen.len_cnt_reg__0 ;
  wire [29:0]\c5_reg_236_reg[29] ;
  wire \could_multi_bursts.awaddr_buf[12]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[12]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[12]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[12]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf[16]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[16]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[16]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[16]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf[20]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[20]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[20]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[20]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf[24]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[24]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[24]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[24]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf[28]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[28]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[28]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[28]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf[31]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf[31]_i_7_n_2 ;
  wire \could_multi_bursts.awaddr_buf[31]_i_8_n_2 ;
  wire \could_multi_bursts.awaddr_buf[31]_i_9_n_2 ;
  wire \could_multi_bursts.awaddr_buf[4]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[4]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[4]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[8]_i_3_n_2 ;
  wire \could_multi_bursts.awaddr_buf[8]_i_4_n_2 ;
  wire \could_multi_bursts.awaddr_buf[8]_i_5_n_2 ;
  wire \could_multi_bursts.awaddr_buf[8]_i_6_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[12]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[12]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[12]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[12]_i_2_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[16]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[16]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[16]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[16]_i_2_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[20]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[20]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[20]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[20]_i_2_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[24]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[24]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[24]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[24]_i_2_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[28]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[28]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[28]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[28]_i_2_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[31]_i_5_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[31]_i_5_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[4]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[4]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[4]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[4]_i_2_n_5 ;
  wire \could_multi_bursts.awaddr_buf_reg[8]_i_2_n_2 ;
  wire \could_multi_bursts.awaddr_buf_reg[8]_i_2_n_3 ;
  wire \could_multi_bursts.awaddr_buf_reg[8]_i_2_n_4 ;
  wire \could_multi_bursts.awaddr_buf_reg[8]_i_2_n_5 ;
  wire \could_multi_bursts.last_sect_buf_reg_n_2 ;
  wire [5:0]\could_multi_bursts.loop_cnt_reg ;
  wire \could_multi_bursts.sect_handling_reg_n_2 ;
  wire [19:0]data;
  wire [31:2]data1;
  wire empty_n_reg;
  wire [31:2]end_addr;
  wire \end_addr_buf_reg_n_2_[10] ;
  wire \end_addr_buf_reg_n_2_[11] ;
  wire \end_addr_buf_reg_n_2_[2] ;
  wire \end_addr_buf_reg_n_2_[3] ;
  wire \end_addr_buf_reg_n_2_[4] ;
  wire \end_addr_buf_reg_n_2_[5] ;
  wire \end_addr_buf_reg_n_2_[6] ;
  wire \end_addr_buf_reg_n_2_[7] ;
  wire \end_addr_buf_reg_n_2_[8] ;
  wire \end_addr_buf_reg_n_2_[9] ;
  wire end_addr_carry__0_i_1__1_n_2;
  wire end_addr_carry__0_i_2__1_n_2;
  wire end_addr_carry__0_i_3__1_n_2;
  wire end_addr_carry__0_i_4__1_n_2;
  wire end_addr_carry__0_n_2;
  wire end_addr_carry__0_n_3;
  wire end_addr_carry__0_n_4;
  wire end_addr_carry__0_n_5;
  wire end_addr_carry__1_i_1__1_n_2;
  wire end_addr_carry__1_i_2__1_n_2;
  wire end_addr_carry__1_i_3__1_n_2;
  wire end_addr_carry__1_i_4__1_n_2;
  wire end_addr_carry__1_n_2;
  wire end_addr_carry__1_n_3;
  wire end_addr_carry__1_n_4;
  wire end_addr_carry__1_n_5;
  wire end_addr_carry__2_i_1__1_n_2;
  wire end_addr_carry__2_i_2__1_n_2;
  wire end_addr_carry__2_i_3__1_n_2;
  wire end_addr_carry__2_i_4__1_n_2;
  wire end_addr_carry__2_n_2;
  wire end_addr_carry__2_n_3;
  wire end_addr_carry__2_n_4;
  wire end_addr_carry__2_n_5;
  wire end_addr_carry__3_i_1__1_n_2;
  wire end_addr_carry__3_i_2__1_n_2;
  wire end_addr_carry__3_i_3__1_n_2;
  wire end_addr_carry__3_i_4__1_n_2;
  wire end_addr_carry__3_n_2;
  wire end_addr_carry__3_n_3;
  wire end_addr_carry__3_n_4;
  wire end_addr_carry__3_n_5;
  wire end_addr_carry__4_i_1__1_n_2;
  wire end_addr_carry__4_i_2__1_n_2;
  wire end_addr_carry__4_i_3__1_n_2;
  wire end_addr_carry__4_i_4__1_n_2;
  wire end_addr_carry__4_n_2;
  wire end_addr_carry__4_n_3;
  wire end_addr_carry__4_n_4;
  wire end_addr_carry__4_n_5;
  wire end_addr_carry__5_i_1__1_n_2;
  wire end_addr_carry__5_i_2__1_n_2;
  wire end_addr_carry__5_i_3__1_n_2;
  wire end_addr_carry__5_i_4__1_n_2;
  wire end_addr_carry__5_n_2;
  wire end_addr_carry__5_n_3;
  wire end_addr_carry__5_n_4;
  wire end_addr_carry__5_n_5;
  wire end_addr_carry__6_i_1__1_n_2;
  wire end_addr_carry__6_i_2__1_n_2;
  wire end_addr_carry__6_n_5;
  wire end_addr_carry_i_1__1_n_2;
  wire end_addr_carry_i_2__1_n_2;
  wire end_addr_carry_i_3__1_n_2;
  wire end_addr_carry_i_4__1_n_2;
  wire end_addr_carry_n_2;
  wire end_addr_carry_n_3;
  wire end_addr_carry_n_4;
  wire end_addr_carry_n_5;
  wire exitcond_fu_220_p2;
  wire fifo_resp_ready;
  wire [38:38]fifo_wreq_data;
  wire fifo_wreq_n_10;
  wire fifo_wreq_n_11;
  wire fifo_wreq_n_12;
  wire fifo_wreq_n_13;
  wire fifo_wreq_n_14;
  wire fifo_wreq_n_15;
  wire fifo_wreq_n_16;
  wire fifo_wreq_n_17;
  wire fifo_wreq_n_18;
  wire fifo_wreq_n_19;
  wire fifo_wreq_n_20;
  wire fifo_wreq_n_21;
  wire fifo_wreq_n_22;
  wire fifo_wreq_n_23;
  wire fifo_wreq_n_24;
  wire fifo_wreq_n_25;
  wire fifo_wreq_n_26;
  wire fifo_wreq_n_27;
  wire fifo_wreq_n_28;
  wire fifo_wreq_n_29;
  wire fifo_wreq_n_3;
  wire fifo_wreq_n_30;
  wire fifo_wreq_n_31;
  wire fifo_wreq_n_32;
  wire fifo_wreq_n_33;
  wire fifo_wreq_n_34;
  wire fifo_wreq_n_37;
  wire fifo_wreq_n_38;
  wire fifo_wreq_n_39;
  wire fifo_wreq_n_40;
  wire fifo_wreq_n_41;
  wire fifo_wreq_n_42;
  wire fifo_wreq_n_43;
  wire fifo_wreq_n_44;
  wire fifo_wreq_n_45;
  wire fifo_wreq_n_46;
  wire fifo_wreq_n_5;
  wire fifo_wreq_n_6;
  wire fifo_wreq_n_7;
  wire fifo_wreq_n_8;
  wire fifo_wreq_n_9;
  wire fifo_wreq_valid;
  wire fifo_wreq_valid_buf_reg_n_2;
  wire first_sect;
  wire first_sect_carry__0_i_1__1_n_2;
  wire first_sect_carry__0_i_2__1_n_2;
  wire first_sect_carry__0_i_3__1_n_2;
  wire first_sect_carry__0_n_4;
  wire first_sect_carry__0_n_5;
  wire first_sect_carry_i_1__1_n_2;
  wire first_sect_carry_i_2__1_n_2;
  wire first_sect_carry_i_3__1_n_2;
  wire first_sect_carry_i_4__1_n_2;
  wire first_sect_carry_n_2;
  wire first_sect_carry_n_3;
  wire first_sect_carry_n_4;
  wire first_sect_carry_n_5;
  wire \int_a_reg[3] ;
  wire [0:0]\int_b_reg[3] ;
  wire invalid_len_event;
  wire invalid_len_event_reg1;
  wire invalid_len_event_reg2;
  wire last_sect;
  wire last_sect_buf;
  wire last_sect_carry__0_n_4;
  wire last_sect_carry__0_n_5;
  wire last_sect_carry_n_2;
  wire last_sect_carry_n_3;
  wire last_sect_carry_n_4;
  wire last_sect_carry_n_5;
  wire [29:0]m_axi_DATA_C_AWADDR;
  wire [3:0]\m_axi_DATA_C_AWLEN[3] ;
  wire m_axi_DATA_C_AWREADY;
  wire m_axi_DATA_C_AWVALID;
  wire m_axi_DATA_C_BREADY;
  wire m_axi_DATA_C_BVALID;
  wire [31:0]m_axi_DATA_C_WDATA;
  wire m_axi_DATA_C_WLAST;
  wire m_axi_DATA_C_WREADY;
  wire [3:0]m_axi_DATA_C_WSTRB;
  wire m_axi_DATA_C_WVALID;
  wire mem_reg;
  wire mem_reg_0;
  wire next_loop;
  wire next_resp;
  wire next_resp0;
  wire next_wreq;
  wire [5:0]p_0_in;
  wire [19:0]p_0_in0_in;
  wire [19:0]p_0_in_0;
  wire [7:0]p_0_in__0;
  wire p_0_out_carry__0_n_4;
  wire p_0_out_carry__0_n_5;
  wire p_0_out_carry__0_n_7;
  wire p_0_out_carry__0_n_8;
  wire p_0_out_carry__0_n_9;
  wire p_0_out_carry_n_2;
  wire p_0_out_carry_n_3;
  wire p_0_out_carry_n_4;
  wire p_0_out_carry_n_5;
  wire p_0_out_carry_n_6;
  wire p_0_out_carry_n_7;
  wire p_0_out_carry_n_8;
  wire p_0_out_carry_n_9;
  wire p_27_in;
  wire push;
  wire push_0;
  wire [0:0]\rdata_reg[3] ;
  wire rs2f_wreq_ack;
  wire [29:0]rs2f_wreq_data;
  wire rs2f_wreq_valid;
  wire [5:0]s_axi_CTL_ARADDR;
  wire s_ready_t_reg;
  wire [31:2]sect_addr;
  wire \sect_addr_buf_reg_n_2_[10] ;
  wire \sect_addr_buf_reg_n_2_[11] ;
  wire \sect_addr_buf_reg_n_2_[12] ;
  wire \sect_addr_buf_reg_n_2_[13] ;
  wire \sect_addr_buf_reg_n_2_[14] ;
  wire \sect_addr_buf_reg_n_2_[15] ;
  wire \sect_addr_buf_reg_n_2_[16] ;
  wire \sect_addr_buf_reg_n_2_[17] ;
  wire \sect_addr_buf_reg_n_2_[18] ;
  wire \sect_addr_buf_reg_n_2_[19] ;
  wire \sect_addr_buf_reg_n_2_[20] ;
  wire \sect_addr_buf_reg_n_2_[21] ;
  wire \sect_addr_buf_reg_n_2_[22] ;
  wire \sect_addr_buf_reg_n_2_[23] ;
  wire \sect_addr_buf_reg_n_2_[24] ;
  wire \sect_addr_buf_reg_n_2_[25] ;
  wire \sect_addr_buf_reg_n_2_[26] ;
  wire \sect_addr_buf_reg_n_2_[27] ;
  wire \sect_addr_buf_reg_n_2_[28] ;
  wire \sect_addr_buf_reg_n_2_[29] ;
  wire \sect_addr_buf_reg_n_2_[2] ;
  wire \sect_addr_buf_reg_n_2_[30] ;
  wire \sect_addr_buf_reg_n_2_[31] ;
  wire \sect_addr_buf_reg_n_2_[3] ;
  wire \sect_addr_buf_reg_n_2_[4] ;
  wire \sect_addr_buf_reg_n_2_[5] ;
  wire \sect_addr_buf_reg_n_2_[6] ;
  wire \sect_addr_buf_reg_n_2_[7] ;
  wire \sect_addr_buf_reg_n_2_[8] ;
  wire \sect_addr_buf_reg_n_2_[9] ;
  wire [19:0]sect_cnt_reg;
  wire \sect_len_buf_reg_n_2_[0] ;
  wire \sect_len_buf_reg_n_2_[1] ;
  wire \sect_len_buf_reg_n_2_[2] ;
  wire \sect_len_buf_reg_n_2_[3] ;
  wire \sect_len_buf_reg_n_2_[4] ;
  wire \sect_len_buf_reg_n_2_[5] ;
  wire \sect_len_buf_reg_n_2_[6] ;
  wire \sect_len_buf_reg_n_2_[7] ;
  wire \sect_len_buf_reg_n_2_[8] ;
  wire \sect_len_buf_reg_n_2_[9] ;
  wire \start_addr_buf_reg_n_2_[10] ;
  wire \start_addr_buf_reg_n_2_[11] ;
  wire \start_addr_buf_reg_n_2_[2] ;
  wire \start_addr_buf_reg_n_2_[3] ;
  wire \start_addr_buf_reg_n_2_[4] ;
  wire \start_addr_buf_reg_n_2_[5] ;
  wire \start_addr_buf_reg_n_2_[6] ;
  wire \start_addr_buf_reg_n_2_[7] ;
  wire \start_addr_buf_reg_n_2_[8] ;
  wire \start_addr_buf_reg_n_2_[9] ;
  wire \start_addr_reg_n_2_[10] ;
  wire \start_addr_reg_n_2_[11] ;
  wire \start_addr_reg_n_2_[2] ;
  wire \start_addr_reg_n_2_[3] ;
  wire \start_addr_reg_n_2_[4] ;
  wire \start_addr_reg_n_2_[5] ;
  wire \start_addr_reg_n_2_[6] ;
  wire \start_addr_reg_n_2_[7] ;
  wire \start_addr_reg_n_2_[8] ;
  wire \start_addr_reg_n_2_[9] ;
  wire [0:0]\throttl_cnt_reg[0] ;
  wire [0:0]\throttl_cnt_reg[0]_0 ;
  wire \throttl_cnt_reg[1] ;
  wire \throttl_cnt_reg[5] ;
  wire \throttl_cnt_reg[6] ;
  wire \throttl_cnt_reg[7] ;
  wire [31:0]\tmp_reg_287_reg[31] ;
  wire [3:0]tmp_strb;
  wire [5:0]usedw_reg;
  wire wreq_handling_reg_n_2;
  wire [3:3]\NLW_align_len0_inferred__1/i__carry_CO_UNCONNECTED ;
  wire [0:0]\NLW_align_len0_inferred__1/i__carry_O_UNCONNECTED ;
  wire [3:2]\NLW_could_multi_bursts.awaddr_buf_reg[31]_i_5_CO_UNCONNECTED ;
  wire [3:3]\NLW_could_multi_bursts.awaddr_buf_reg[31]_i_5_O_UNCONNECTED ;
  wire [0:0]\NLW_could_multi_bursts.awaddr_buf_reg[4]_i_2_O_UNCONNECTED ;
  wire [0:0]NLW_end_addr_carry_O_UNCONNECTED;
  wire [3:1]NLW_end_addr_carry__6_CO_UNCONNECTED;
  wire [3:2]NLW_end_addr_carry__6_O_UNCONNECTED;
  wire [3:0]NLW_first_sect_carry_O_UNCONNECTED;
  wire [3:3]NLW_first_sect_carry__0_CO_UNCONNECTED;
  wire [3:0]NLW_first_sect_carry__0_O_UNCONNECTED;
  wire [3:0]NLW_last_sect_carry_O_UNCONNECTED;
  wire [3:3]NLW_last_sect_carry__0_CO_UNCONNECTED;
  wire [3:0]NLW_last_sect_carry__0_O_UNCONNECTED;
  wire [3:2]NLW_p_0_out_carry__0_CO_UNCONNECTED;
  wire [3:3]NLW_p_0_out_carry__0_O_UNCONNECTED;

  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \align_len0_inferred__1/i__carry 
       (.CI(1'b0),
        .CO({\NLW_align_len0_inferred__1/i__carry_CO_UNCONNECTED [3],\align_len0_inferred__1/i__carry_n_3 ,\align_len0_inferred__1/i__carry_n_4 ,\align_len0_inferred__1/i__carry_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,fifo_wreq_data,1'b0,1'b0}),
        .O({align_len0__0[31],align_len0__0[8:7],\NLW_align_len0_inferred__1/i__carry_O_UNCONNECTED [0]}),
        .S({1'b1,fifo_wreq_n_45,1'b1,1'b1}));
  FDRE \align_len_reg[31] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(align_len0__0[31]),
        .Q(\align_len_reg_n_2_[31] ),
        .R(fifo_wreq_n_3));
  FDRE \align_len_reg[7] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(align_len0__0[7]),
        .Q(\align_len_reg_n_2_[7] ),
        .R(fifo_wreq_n_3));
  FDRE \align_len_reg[8] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(align_len0__0[8]),
        .Q(\align_len_reg_n_2_[8] ),
        .R(fifo_wreq_n_3));
  FDRE \beat_len_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\align_len_reg_n_2_[7] ),
        .Q(beat_len_buf[3]),
        .R(SR));
  FDRE \beat_len_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\align_len_reg_n_2_[8] ),
        .Q(beat_len_buf[6]),
        .R(SR));
  FDRE \beat_len_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\align_len_reg_n_2_[31] ),
        .Q(beat_len_buf[9]),
        .R(SR));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_buffer buff_wdata
       (.D({p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9,p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .DI(buff_wdata_n_19),
        .Q(usedw_reg),
        .S({buff_wdata_n_4,buff_wdata_n_5,buff_wdata_n_6,buff_wdata_n_7}),
        .SR(SR),
        .WEBWE(WEBWE),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter4_reg(ap_enable_reg_pp0_iter4_reg_1),
        .ap_reg_pp0_iter3_exitcond_reg_268(ap_reg_pp0_iter3_exitcond_reg_268),
        .ap_rst_n(ap_rst_n),
        .burst_valid(burst_valid),
        .\bus_equal_gen.WVALID_Dummy_reg (buff_wdata_n_20),
        .\bus_equal_gen.WVALID_Dummy_reg_0 (m_axi_DATA_C_WVALID),
        .\bus_equal_gen.strb_buf_reg[3] ({tmp_strb,buff_wdata_n_25,buff_wdata_n_26,buff_wdata_n_27,buff_wdata_n_28,buff_wdata_n_29,buff_wdata_n_30,buff_wdata_n_31,buff_wdata_n_32,buff_wdata_n_33,buff_wdata_n_34,buff_wdata_n_35,buff_wdata_n_36,buff_wdata_n_37,buff_wdata_n_38,buff_wdata_n_39,buff_wdata_n_40,buff_wdata_n_41,buff_wdata_n_42,buff_wdata_n_43,buff_wdata_n_44,buff_wdata_n_45,buff_wdata_n_46,buff_wdata_n_47,buff_wdata_n_48,buff_wdata_n_49,buff_wdata_n_50,buff_wdata_n_51,buff_wdata_n_52,buff_wdata_n_53,buff_wdata_n_54,buff_wdata_n_55,buff_wdata_n_56}),
        .m_axi_DATA_C_WREADY(m_axi_DATA_C_WREADY),
        .mem_reg_0(mem_reg),
        .mem_reg_1(mem_reg_0),
        .p_27_in(p_27_in),
        .\tmp_reg_287_reg[31] (\tmp_reg_287_reg[31] ),
        .\usedw_reg[7]_0 ({buff_wdata_n_15,buff_wdata_n_16,buff_wdata_n_17}));
  FDRE \bus_equal_gen.WLAST_Dummy_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\bus_equal_gen.fifo_burst_n_37 ),
        .Q(m_axi_DATA_C_WLAST),
        .R(SR));
  FDRE \bus_equal_gen.WVALID_Dummy_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(buff_wdata_n_20),
        .Q(m_axi_DATA_C_WVALID),
        .R(SR));
  FDRE \bus_equal_gen.data_buf_reg[0] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_56),
        .Q(m_axi_DATA_C_WDATA[0]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[10] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_46),
        .Q(m_axi_DATA_C_WDATA[10]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[11] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_45),
        .Q(m_axi_DATA_C_WDATA[11]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[12] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_44),
        .Q(m_axi_DATA_C_WDATA[12]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[13] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_43),
        .Q(m_axi_DATA_C_WDATA[13]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[14] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_42),
        .Q(m_axi_DATA_C_WDATA[14]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[15] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_41),
        .Q(m_axi_DATA_C_WDATA[15]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[16] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_40),
        .Q(m_axi_DATA_C_WDATA[16]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[17] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_39),
        .Q(m_axi_DATA_C_WDATA[17]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[18] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_38),
        .Q(m_axi_DATA_C_WDATA[18]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[19] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_37),
        .Q(m_axi_DATA_C_WDATA[19]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[1] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_55),
        .Q(m_axi_DATA_C_WDATA[1]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[20] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_36),
        .Q(m_axi_DATA_C_WDATA[20]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[21] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_35),
        .Q(m_axi_DATA_C_WDATA[21]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[22] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_34),
        .Q(m_axi_DATA_C_WDATA[22]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[23] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_33),
        .Q(m_axi_DATA_C_WDATA[23]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[24] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_32),
        .Q(m_axi_DATA_C_WDATA[24]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[25] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_31),
        .Q(m_axi_DATA_C_WDATA[25]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[26] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_30),
        .Q(m_axi_DATA_C_WDATA[26]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[27] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_29),
        .Q(m_axi_DATA_C_WDATA[27]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[28] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_28),
        .Q(m_axi_DATA_C_WDATA[28]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[29] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_27),
        .Q(m_axi_DATA_C_WDATA[29]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_54),
        .Q(m_axi_DATA_C_WDATA[2]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[30] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_26),
        .Q(m_axi_DATA_C_WDATA[30]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[31] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_25),
        .Q(m_axi_DATA_C_WDATA[31]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_53),
        .Q(m_axi_DATA_C_WDATA[3]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[4] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_52),
        .Q(m_axi_DATA_C_WDATA[4]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[5] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_51),
        .Q(m_axi_DATA_C_WDATA[5]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[6] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_50),
        .Q(m_axi_DATA_C_WDATA[6]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[7] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_49),
        .Q(m_axi_DATA_C_WDATA[7]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[8] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_48),
        .Q(m_axi_DATA_C_WDATA[8]),
        .R(1'b0));
  FDRE \bus_equal_gen.data_buf_reg[9] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(buff_wdata_n_47),
        .Q(m_axi_DATA_C_WDATA[9]),
        .R(1'b0));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo \bus_equal_gen.fifo_burst 
       (.AWVALID_Dummy(AWVALID_Dummy),
        .CO(first_sect),
        .E(p_27_in),
        .O({\bus_equal_gen.fifo_burst_n_14 ,\bus_equal_gen.fifo_burst_n_15 ,\bus_equal_gen.fifo_burst_n_16 ,\bus_equal_gen.fifo_burst_n_17 }),
        .Q(data),
        .SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .\beat_len_buf_reg[9] ({beat_len_buf[9],beat_len_buf[6],beat_len_buf[3]}),
        .burst_valid(burst_valid),
        .\bus_equal_gen.WLAST_Dummy_reg (\bus_equal_gen.fifo_burst_n_37 ),
        .\bus_equal_gen.WVALID_Dummy_reg (m_axi_DATA_C_WVALID),
        .\bus_equal_gen.len_cnt_reg[7] (\bus_equal_gen.fifo_burst_n_3 ),
        .\bus_equal_gen.len_cnt_reg[7]_0 (\bus_equal_gen.len_cnt_reg__0 ),
        .\could_multi_bursts.AWVALID_Dummy_reg (\bus_equal_gen.fifo_burst_n_36 ),
        .\could_multi_bursts.last_sect_buf_reg (\bus_equal_gen.fifo_burst_n_38 ),
        .\could_multi_bursts.last_sect_buf_reg_0 (\could_multi_bursts.last_sect_buf_reg_n_2 ),
        .\could_multi_bursts.loop_cnt_reg[5] (\bus_equal_gen.fifo_burst_n_4 ),
        .\could_multi_bursts.loop_cnt_reg[5]_0 (\could_multi_bursts.loop_cnt_reg ),
        .\could_multi_bursts.sect_handling_reg (\bus_equal_gen.fifo_burst_n_9 ),
        .\could_multi_bursts.sect_handling_reg_0 (\bus_equal_gen.fifo_burst_n_35 ),
        .\could_multi_bursts.sect_handling_reg_1 (\could_multi_bursts.sect_handling_reg_n_2 ),
        .\end_addr_buf_reg[11] ({\end_addr_buf_reg_n_2_[11] ,\end_addr_buf_reg_n_2_[10] ,\end_addr_buf_reg_n_2_[9] ,\end_addr_buf_reg_n_2_[8] ,\end_addr_buf_reg_n_2_[7] ,\end_addr_buf_reg_n_2_[6] ,\end_addr_buf_reg_n_2_[5] ,\end_addr_buf_reg_n_2_[4] ,\end_addr_buf_reg_n_2_[3] ,\end_addr_buf_reg_n_2_[2] }),
        .\end_addr_buf_reg[31] (last_sect),
        .fifo_resp_ready(fifo_resp_ready),
        .fifo_wreq_valid(fifo_wreq_valid),
        .fifo_wreq_valid_buf_reg(fifo_wreq_valid_buf_reg_n_2),
        .in(awlen_tmp),
        .invalid_len_event_reg2(invalid_len_event_reg2),
        .last_sect_buf(last_sect_buf),
        .m_axi_DATA_C_AWREADY(m_axi_DATA_C_AWREADY),
        .m_axi_DATA_C_WLAST(m_axi_DATA_C_WLAST),
        .m_axi_DATA_C_WREADY(m_axi_DATA_C_WREADY),
        .next_loop(next_loop),
        .next_wreq(next_wreq),
        .\sect_addr_buf_reg[2] (\bus_equal_gen.fifo_burst_n_7 ),
        .sect_cnt_reg(sect_cnt_reg),
        .\sect_cnt_reg[11] ({\bus_equal_gen.fifo_burst_n_22 ,\bus_equal_gen.fifo_burst_n_23 ,\bus_equal_gen.fifo_burst_n_24 ,\bus_equal_gen.fifo_burst_n_25 }),
        .\sect_cnt_reg[15] ({\bus_equal_gen.fifo_burst_n_26 ,\bus_equal_gen.fifo_burst_n_27 ,\bus_equal_gen.fifo_burst_n_28 ,\bus_equal_gen.fifo_burst_n_29 }),
        .\sect_cnt_reg[19] ({\bus_equal_gen.fifo_burst_n_30 ,\bus_equal_gen.fifo_burst_n_31 ,\bus_equal_gen.fifo_burst_n_32 ,\bus_equal_gen.fifo_burst_n_33 }),
        .\sect_cnt_reg[7] ({\bus_equal_gen.fifo_burst_n_18 ,\bus_equal_gen.fifo_burst_n_19 ,\bus_equal_gen.fifo_burst_n_20 ,\bus_equal_gen.fifo_burst_n_21 }),
        .\sect_len_buf_reg[0] (\bus_equal_gen.fifo_burst_n_48 ),
        .\sect_len_buf_reg[0]_0 (\sect_len_buf_reg_n_2_[0] ),
        .\sect_len_buf_reg[1] (\bus_equal_gen.fifo_burst_n_47 ),
        .\sect_len_buf_reg[1]_0 (\sect_len_buf_reg_n_2_[1] ),
        .\sect_len_buf_reg[2] (\bus_equal_gen.fifo_burst_n_46 ),
        .\sect_len_buf_reg[2]_0 (\sect_len_buf_reg_n_2_[2] ),
        .\sect_len_buf_reg[3] (\bus_equal_gen.fifo_burst_n_45 ),
        .\sect_len_buf_reg[3]_0 (\sect_len_buf_reg_n_2_[3] ),
        .\sect_len_buf_reg[4] (\bus_equal_gen.fifo_burst_n_44 ),
        .\sect_len_buf_reg[4]_0 (\sect_len_buf_reg_n_2_[4] ),
        .\sect_len_buf_reg[5] (\bus_equal_gen.fifo_burst_n_43 ),
        .\sect_len_buf_reg[5]_0 (\sect_len_buf_reg_n_2_[5] ),
        .\sect_len_buf_reg[6] (\bus_equal_gen.fifo_burst_n_42 ),
        .\sect_len_buf_reg[6]_0 (\sect_len_buf_reg_n_2_[6] ),
        .\sect_len_buf_reg[7] (\bus_equal_gen.fifo_burst_n_41 ),
        .\sect_len_buf_reg[7]_0 (\sect_len_buf_reg_n_2_[7] ),
        .\sect_len_buf_reg[8] (\bus_equal_gen.fifo_burst_n_40 ),
        .\sect_len_buf_reg[8]_0 (\sect_len_buf_reg_n_2_[8] ),
        .\sect_len_buf_reg[9] (\bus_equal_gen.fifo_burst_n_39 ),
        .\sect_len_buf_reg[9]_0 (\sect_len_buf_reg_n_2_[9] ),
        .\start_addr_buf_reg[11] ({\start_addr_buf_reg_n_2_[11] ,\start_addr_buf_reg_n_2_[10] ,\start_addr_buf_reg_n_2_[9] ,\start_addr_buf_reg_n_2_[8] ,\start_addr_buf_reg_n_2_[7] ,\start_addr_buf_reg_n_2_[6] ,\start_addr_buf_reg_n_2_[5] ,\start_addr_buf_reg_n_2_[4] ,\start_addr_buf_reg_n_2_[3] ,\start_addr_buf_reg_n_2_[2] }),
        .\throttl_cnt_reg[1] (\throttl_cnt_reg[1] ),
        .\throttl_cnt_reg[5] (\throttl_cnt_reg[5] ),
        .\throttl_cnt_reg[6] (\throttl_cnt_reg[6] ),
        .wreq_handling_reg(\bus_equal_gen.fifo_burst_n_34 ),
        .wreq_handling_reg_0(wreq_handling_reg_n_2));
  LUT1 #(
    .INIT(2'h1)) 
    \bus_equal_gen.len_cnt[0]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [0]),
        .O(p_0_in__0[0]));
  (* SOFT_HLUTNM = "soft_lutpair256" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \bus_equal_gen.len_cnt[1]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [0]),
        .I1(\bus_equal_gen.len_cnt_reg__0 [1]),
        .O(p_0_in__0[1]));
  (* SOFT_HLUTNM = "soft_lutpair256" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \bus_equal_gen.len_cnt[2]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [2]),
        .I1(\bus_equal_gen.len_cnt_reg__0 [1]),
        .I2(\bus_equal_gen.len_cnt_reg__0 [0]),
        .O(p_0_in__0[2]));
  (* SOFT_HLUTNM = "soft_lutpair227" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \bus_equal_gen.len_cnt[3]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [3]),
        .I1(\bus_equal_gen.len_cnt_reg__0 [0]),
        .I2(\bus_equal_gen.len_cnt_reg__0 [1]),
        .I3(\bus_equal_gen.len_cnt_reg__0 [2]),
        .O(p_0_in__0[3]));
  (* SOFT_HLUTNM = "soft_lutpair227" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \bus_equal_gen.len_cnt[4]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [4]),
        .I1(\bus_equal_gen.len_cnt_reg__0 [2]),
        .I2(\bus_equal_gen.len_cnt_reg__0 [1]),
        .I3(\bus_equal_gen.len_cnt_reg__0 [0]),
        .I4(\bus_equal_gen.len_cnt_reg__0 [3]),
        .O(p_0_in__0[4]));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \bus_equal_gen.len_cnt[5]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [5]),
        .I1(\bus_equal_gen.len_cnt_reg__0 [3]),
        .I2(\bus_equal_gen.len_cnt_reg__0 [0]),
        .I3(\bus_equal_gen.len_cnt_reg__0 [1]),
        .I4(\bus_equal_gen.len_cnt_reg__0 [2]),
        .I5(\bus_equal_gen.len_cnt_reg__0 [4]),
        .O(p_0_in__0[5]));
  (* SOFT_HLUTNM = "soft_lutpair255" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \bus_equal_gen.len_cnt[6]_i_1 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [6]),
        .I1(\bus_equal_gen.len_cnt[7]_i_3_n_2 ),
        .O(p_0_in__0[6]));
  (* SOFT_HLUTNM = "soft_lutpair255" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \bus_equal_gen.len_cnt[7]_i_2 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [7]),
        .I1(\bus_equal_gen.len_cnt[7]_i_3_n_2 ),
        .I2(\bus_equal_gen.len_cnt_reg__0 [6]),
        .O(p_0_in__0[7]));
  LUT6 #(
    .INIT(64'h8000000000000000)) 
    \bus_equal_gen.len_cnt[7]_i_3 
       (.I0(\bus_equal_gen.len_cnt_reg__0 [5]),
        .I1(\bus_equal_gen.len_cnt_reg__0 [3]),
        .I2(\bus_equal_gen.len_cnt_reg__0 [0]),
        .I3(\bus_equal_gen.len_cnt_reg__0 [1]),
        .I4(\bus_equal_gen.len_cnt_reg__0 [2]),
        .I5(\bus_equal_gen.len_cnt_reg__0 [4]),
        .O(\bus_equal_gen.len_cnt[7]_i_3_n_2 ));
  FDRE \bus_equal_gen.len_cnt_reg[0] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[0]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [0]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[1] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[1]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [1]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[2] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[2]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [2]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[3] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[3]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [3]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[4] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[4]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [4]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[5] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[5]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [5]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[6] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[6]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [6]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.len_cnt_reg[7] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(p_0_in__0[7]),
        .Q(\bus_equal_gen.len_cnt_reg__0 [7]),
        .R(\bus_equal_gen.fifo_burst_n_3 ));
  FDRE \bus_equal_gen.strb_buf_reg[0] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(tmp_strb[0]),
        .Q(m_axi_DATA_C_WSTRB[0]),
        .R(SR));
  FDRE \bus_equal_gen.strb_buf_reg[1] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(tmp_strb[1]),
        .Q(m_axi_DATA_C_WSTRB[1]),
        .R(SR));
  FDRE \bus_equal_gen.strb_buf_reg[2] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(tmp_strb[2]),
        .Q(m_axi_DATA_C_WSTRB[2]),
        .R(SR));
  FDRE \bus_equal_gen.strb_buf_reg[3] 
       (.C(ap_clk),
        .CE(p_27_in),
        .D(tmp_strb[3]),
        .Q(m_axi_DATA_C_WSTRB[3]),
        .R(SR));
  FDRE \could_multi_bursts.AWVALID_Dummy_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\bus_equal_gen.fifo_burst_n_36 ),
        .Q(AWVALID_Dummy),
        .R(1'b0));
  (* SOFT_HLUTNM = "soft_lutpair238" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[10]_i_1 
       (.I0(data1[10]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[10] ),
        .O(awaddr_tmp[10]));
  (* SOFT_HLUTNM = "soft_lutpair239" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[11]_i_1 
       (.I0(data1[11]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[11] ),
        .O(awaddr_tmp[11]));
  (* SOFT_HLUTNM = "soft_lutpair239" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[12]_i_1 
       (.I0(data1[12]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[12] ),
        .O(awaddr_tmp[12]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[12]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[10]),
        .O(\could_multi_bursts.awaddr_buf[12]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[12]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[9]),
        .O(\could_multi_bursts.awaddr_buf[12]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[12]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[8]),
        .O(\could_multi_bursts.awaddr_buf[12]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[12]_i_6 
       (.I0(m_axi_DATA_C_AWADDR[7]),
        .O(\could_multi_bursts.awaddr_buf[12]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair238" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[13]_i_1 
       (.I0(data1[13]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[13] ),
        .O(awaddr_tmp[13]));
  (* SOFT_HLUTNM = "soft_lutpair235" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[14]_i_1 
       (.I0(data1[14]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[14] ),
        .O(awaddr_tmp[14]));
  (* SOFT_HLUTNM = "soft_lutpair237" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[15]_i_1 
       (.I0(data1[15]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[15] ),
        .O(awaddr_tmp[15]));
  (* SOFT_HLUTNM = "soft_lutpair236" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[16]_i_1 
       (.I0(data1[16]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[16] ),
        .O(awaddr_tmp[16]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[16]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[14]),
        .O(\could_multi_bursts.awaddr_buf[16]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[16]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[13]),
        .O(\could_multi_bursts.awaddr_buf[16]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[16]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[12]),
        .O(\could_multi_bursts.awaddr_buf[16]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[16]_i_6 
       (.I0(m_axi_DATA_C_AWADDR[11]),
        .O(\could_multi_bursts.awaddr_buf[16]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair234" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[17]_i_1 
       (.I0(data1[17]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[17] ),
        .O(awaddr_tmp[17]));
  (* SOFT_HLUTNM = "soft_lutpair231" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[18]_i_1 
       (.I0(data1[18]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[18] ),
        .O(awaddr_tmp[18]));
  (* SOFT_HLUTNM = "soft_lutpair230" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[19]_i_1 
       (.I0(data1[19]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[19] ),
        .O(awaddr_tmp[19]));
  (* SOFT_HLUTNM = "soft_lutpair233" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[20]_i_1 
       (.I0(data1[20]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[20] ),
        .O(awaddr_tmp[20]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[20]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[18]),
        .O(\could_multi_bursts.awaddr_buf[20]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[20]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[17]),
        .O(\could_multi_bursts.awaddr_buf[20]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[20]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[16]),
        .O(\could_multi_bursts.awaddr_buf[20]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[20]_i_6 
       (.I0(m_axi_DATA_C_AWADDR[15]),
        .O(\could_multi_bursts.awaddr_buf[20]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair232" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[21]_i_1 
       (.I0(data1[21]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[21] ),
        .O(awaddr_tmp[21]));
  (* SOFT_HLUTNM = "soft_lutpair236" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[22]_i_1 
       (.I0(data1[22]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[22] ),
        .O(awaddr_tmp[22]));
  (* SOFT_HLUTNM = "soft_lutpair229" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[23]_i_1 
       (.I0(data1[23]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[23] ),
        .O(awaddr_tmp[23]));
  (* SOFT_HLUTNM = "soft_lutpair237" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[24]_i_1 
       (.I0(data1[24]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[24] ),
        .O(awaddr_tmp[24]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[24]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[22]),
        .O(\could_multi_bursts.awaddr_buf[24]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[24]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[21]),
        .O(\could_multi_bursts.awaddr_buf[24]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[24]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[20]),
        .O(\could_multi_bursts.awaddr_buf[24]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[24]_i_6 
       (.I0(m_axi_DATA_C_AWADDR[19]),
        .O(\could_multi_bursts.awaddr_buf[24]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair235" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[25]_i_1 
       (.I0(data1[25]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[25] ),
        .O(awaddr_tmp[25]));
  (* SOFT_HLUTNM = "soft_lutpair232" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[26]_i_1 
       (.I0(data1[26]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[26] ),
        .O(awaddr_tmp[26]));
  (* SOFT_HLUTNM = "soft_lutpair234" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[27]_i_1 
       (.I0(data1[27]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[27] ),
        .O(awaddr_tmp[27]));
  (* SOFT_HLUTNM = "soft_lutpair233" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[28]_i_1 
       (.I0(data1[28]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[28] ),
        .O(awaddr_tmp[28]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[28]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[26]),
        .O(\could_multi_bursts.awaddr_buf[28]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[28]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[25]),
        .O(\could_multi_bursts.awaddr_buf[28]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[28]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[24]),
        .O(\could_multi_bursts.awaddr_buf[28]_i_5_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[28]_i_6 
       (.I0(m_axi_DATA_C_AWADDR[23]),
        .O(\could_multi_bursts.awaddr_buf[28]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair231" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[29]_i_1 
       (.I0(data1[29]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[29] ),
        .O(awaddr_tmp[29]));
  (* SOFT_HLUTNM = "soft_lutpair253" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[2]_i_1 
       (.I0(data1[2]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[2] ),
        .O(awaddr_tmp[2]));
  (* SOFT_HLUTNM = "soft_lutpair229" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[30]_i_1 
       (.I0(data1[30]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[30] ),
        .O(awaddr_tmp[30]));
  (* SOFT_HLUTNM = "soft_lutpair230" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[31]_i_2 
       (.I0(data1[31]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[31] ),
        .O(awaddr_tmp[31]));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFFE)) 
    \could_multi_bursts.awaddr_buf[31]_i_6 
       (.I0(\could_multi_bursts.loop_cnt_reg [2]),
        .I1(\could_multi_bursts.loop_cnt_reg [3]),
        .I2(\could_multi_bursts.loop_cnt_reg [4]),
        .I3(\could_multi_bursts.loop_cnt_reg [5]),
        .I4(\could_multi_bursts.loop_cnt_reg [0]),
        .I5(\could_multi_bursts.loop_cnt_reg [1]),
        .O(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[31]_i_7 
       (.I0(m_axi_DATA_C_AWADDR[29]),
        .O(\could_multi_bursts.awaddr_buf[31]_i_7_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[31]_i_8 
       (.I0(m_axi_DATA_C_AWADDR[28]),
        .O(\could_multi_bursts.awaddr_buf[31]_i_8_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[31]_i_9 
       (.I0(m_axi_DATA_C_AWADDR[27]),
        .O(\could_multi_bursts.awaddr_buf[31]_i_9_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair254" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[3]_i_1 
       (.I0(data1[3]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[3] ),
        .O(awaddr_tmp[3]));
  (* SOFT_HLUTNM = "soft_lutpair254" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[4]_i_1 
       (.I0(data1[4]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[4] ),
        .O(awaddr_tmp[4]));
  LUT4 #(
    .INIT(16'h956A)) 
    \could_multi_bursts.awaddr_buf[4]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[2]),
        .I1(\m_axi_DATA_C_AWLEN[3] [0]),
        .I2(\m_axi_DATA_C_AWLEN[3] [1]),
        .I3(\m_axi_DATA_C_AWLEN[3] [2]),
        .O(\could_multi_bursts.awaddr_buf[4]_i_3_n_2 ));
  LUT3 #(
    .INIT(8'h96)) 
    \could_multi_bursts.awaddr_buf[4]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[1]),
        .I1(\m_axi_DATA_C_AWLEN[3] [1]),
        .I2(\m_axi_DATA_C_AWLEN[3] [0]),
        .O(\could_multi_bursts.awaddr_buf[4]_i_4_n_2 ));
  LUT2 #(
    .INIT(4'h9)) 
    \could_multi_bursts.awaddr_buf[4]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[0]),
        .I1(\m_axi_DATA_C_AWLEN[3] [0]),
        .O(\could_multi_bursts.awaddr_buf[4]_i_5_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair253" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[5]_i_1 
       (.I0(data1[5]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[5] ),
        .O(awaddr_tmp[5]));
  (* SOFT_HLUTNM = "soft_lutpair240" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[6]_i_1 
       (.I0(data1[6]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[6] ),
        .O(awaddr_tmp[6]));
  (* SOFT_HLUTNM = "soft_lutpair251" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[7]_i_1 
       (.I0(data1[7]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[7] ),
        .O(awaddr_tmp[7]));
  (* SOFT_HLUTNM = "soft_lutpair251" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[8]_i_1 
       (.I0(data1[8]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[8] ),
        .O(awaddr_tmp[8]));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[8]_i_3 
       (.I0(m_axi_DATA_C_AWADDR[6]),
        .O(\could_multi_bursts.awaddr_buf[8]_i_3_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \could_multi_bursts.awaddr_buf[8]_i_4 
       (.I0(m_axi_DATA_C_AWADDR[5]),
        .O(\could_multi_bursts.awaddr_buf[8]_i_4_n_2 ));
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \could_multi_bursts.awaddr_buf[8]_i_5 
       (.I0(m_axi_DATA_C_AWADDR[4]),
        .I1(\m_axi_DATA_C_AWLEN[3] [1]),
        .I2(\m_axi_DATA_C_AWLEN[3] [0]),
        .I3(\m_axi_DATA_C_AWLEN[3] [2]),
        .I4(\m_axi_DATA_C_AWLEN[3] [3]),
        .O(\could_multi_bursts.awaddr_buf[8]_i_5_n_2 ));
  LUT5 #(
    .INIT(32'h95556AAA)) 
    \could_multi_bursts.awaddr_buf[8]_i_6 
       (.I0(m_axi_DATA_C_AWADDR[3]),
        .I1(\m_axi_DATA_C_AWLEN[3] [1]),
        .I2(\m_axi_DATA_C_AWLEN[3] [0]),
        .I3(\m_axi_DATA_C_AWLEN[3] [2]),
        .I4(\m_axi_DATA_C_AWLEN[3] [3]),
        .O(\could_multi_bursts.awaddr_buf[8]_i_6_n_2 ));
  (* SOFT_HLUTNM = "soft_lutpair240" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \could_multi_bursts.awaddr_buf[9]_i_1 
       (.I0(data1[9]),
        .I1(\could_multi_bursts.awaddr_buf[31]_i_6_n_2 ),
        .I2(\sect_addr_buf_reg_n_2_[9] ),
        .O(awaddr_tmp[9]));
  FDRE \could_multi_bursts.awaddr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[10]),
        .Q(m_axi_DATA_C_AWADDR[8]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[11]),
        .Q(m_axi_DATA_C_AWADDR[9]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[12]),
        .Q(m_axi_DATA_C_AWADDR[10]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[12]_i_2 
       (.CI(\could_multi_bursts.awaddr_buf_reg[8]_i_2_n_2 ),
        .CO({\could_multi_bursts.awaddr_buf_reg[12]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[12]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[12]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[12]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,m_axi_DATA_C_AWADDR[8:7]}),
        .O(data1[12:9]),
        .S({\could_multi_bursts.awaddr_buf[12]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[12]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[12]_i_5_n_2 ,\could_multi_bursts.awaddr_buf[12]_i_6_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[13]),
        .Q(m_axi_DATA_C_AWADDR[11]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[14]),
        .Q(m_axi_DATA_C_AWADDR[12]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[15]),
        .Q(m_axi_DATA_C_AWADDR[13]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[16]),
        .Q(m_axi_DATA_C_AWADDR[14]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[16]_i_2 
       (.CI(\could_multi_bursts.awaddr_buf_reg[12]_i_2_n_2 ),
        .CO({\could_multi_bursts.awaddr_buf_reg[16]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[16]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[16]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[16]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[16:13]),
        .S({\could_multi_bursts.awaddr_buf[16]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[16]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[16]_i_5_n_2 ,\could_multi_bursts.awaddr_buf[16]_i_6_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[17]),
        .Q(m_axi_DATA_C_AWADDR[15]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[18]),
        .Q(m_axi_DATA_C_AWADDR[16]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[19]),
        .Q(m_axi_DATA_C_AWADDR[17]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[20]),
        .Q(m_axi_DATA_C_AWADDR[18]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[20]_i_2 
       (.CI(\could_multi_bursts.awaddr_buf_reg[16]_i_2_n_2 ),
        .CO({\could_multi_bursts.awaddr_buf_reg[20]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[20]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[20]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[20]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[20:17]),
        .S({\could_multi_bursts.awaddr_buf[20]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[20]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[20]_i_5_n_2 ,\could_multi_bursts.awaddr_buf[20]_i_6_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[21]),
        .Q(m_axi_DATA_C_AWADDR[19]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[22]),
        .Q(m_axi_DATA_C_AWADDR[20]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[23]),
        .Q(m_axi_DATA_C_AWADDR[21]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[24]),
        .Q(m_axi_DATA_C_AWADDR[22]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[24]_i_2 
       (.CI(\could_multi_bursts.awaddr_buf_reg[20]_i_2_n_2 ),
        .CO({\could_multi_bursts.awaddr_buf_reg[24]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[24]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[24]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[24]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[24:21]),
        .S({\could_multi_bursts.awaddr_buf[24]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[24]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[24]_i_5_n_2 ,\could_multi_bursts.awaddr_buf[24]_i_6_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[25]),
        .Q(m_axi_DATA_C_AWADDR[23]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[26]),
        .Q(m_axi_DATA_C_AWADDR[24]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[27]),
        .Q(m_axi_DATA_C_AWADDR[25]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[28]),
        .Q(m_axi_DATA_C_AWADDR[26]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[28]_i_2 
       (.CI(\could_multi_bursts.awaddr_buf_reg[24]_i_2_n_2 ),
        .CO({\could_multi_bursts.awaddr_buf_reg[28]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[28]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[28]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[28]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(data1[28:25]),
        .S({\could_multi_bursts.awaddr_buf[28]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[28]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[28]_i_5_n_2 ,\could_multi_bursts.awaddr_buf[28]_i_6_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[29]),
        .Q(m_axi_DATA_C_AWADDR[27]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[2]),
        .Q(m_axi_DATA_C_AWADDR[0]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[30]),
        .Q(m_axi_DATA_C_AWADDR[28]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[31]),
        .Q(m_axi_DATA_C_AWADDR[29]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[31]_i_5 
       (.CI(\could_multi_bursts.awaddr_buf_reg[28]_i_2_n_2 ),
        .CO({\NLW_could_multi_bursts.awaddr_buf_reg[31]_i_5_CO_UNCONNECTED [3:2],\could_multi_bursts.awaddr_buf_reg[31]_i_5_n_4 ,\could_multi_bursts.awaddr_buf_reg[31]_i_5_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_could_multi_bursts.awaddr_buf_reg[31]_i_5_O_UNCONNECTED [3],data1[31:29]}),
        .S({1'b0,\could_multi_bursts.awaddr_buf[31]_i_7_n_2 ,\could_multi_bursts.awaddr_buf[31]_i_8_n_2 ,\could_multi_bursts.awaddr_buf[31]_i_9_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[3]),
        .Q(m_axi_DATA_C_AWADDR[1]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[4]),
        .Q(m_axi_DATA_C_AWADDR[2]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[4]_i_2 
       (.CI(1'b0),
        .CO({\could_multi_bursts.awaddr_buf_reg[4]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[4]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[4]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[4]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({m_axi_DATA_C_AWADDR[2:0],1'b0}),
        .O({data1[4:2],\NLW_could_multi_bursts.awaddr_buf_reg[4]_i_2_O_UNCONNECTED [0]}),
        .S({\could_multi_bursts.awaddr_buf[4]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[4]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[4]_i_5_n_2 ,1'b0}));
  FDRE \could_multi_bursts.awaddr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[5]),
        .Q(m_axi_DATA_C_AWADDR[3]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[6]),
        .Q(m_axi_DATA_C_AWADDR[4]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[7]),
        .Q(m_axi_DATA_C_AWADDR[5]),
        .R(SR));
  FDRE \could_multi_bursts.awaddr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[8]),
        .Q(m_axi_DATA_C_AWADDR[6]),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 \could_multi_bursts.awaddr_buf_reg[8]_i_2 
       (.CI(\could_multi_bursts.awaddr_buf_reg[4]_i_2_n_2 ),
        .CO({\could_multi_bursts.awaddr_buf_reg[8]_i_2_n_2 ,\could_multi_bursts.awaddr_buf_reg[8]_i_2_n_3 ,\could_multi_bursts.awaddr_buf_reg[8]_i_2_n_4 ,\could_multi_bursts.awaddr_buf_reg[8]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI(m_axi_DATA_C_AWADDR[6:3]),
        .O(data1[8:5]),
        .S({\could_multi_bursts.awaddr_buf[8]_i_3_n_2 ,\could_multi_bursts.awaddr_buf[8]_i_4_n_2 ,\could_multi_bursts.awaddr_buf[8]_i_5_n_2 ,\could_multi_bursts.awaddr_buf[8]_i_6_n_2 }));
  FDRE \could_multi_bursts.awaddr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awaddr_tmp[9]),
        .Q(m_axi_DATA_C_AWADDR[7]),
        .R(SR));
  FDRE \could_multi_bursts.awlen_buf_reg[0] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awlen_tmp[0]),
        .Q(\m_axi_DATA_C_AWLEN[3] [0]),
        .R(SR));
  FDRE \could_multi_bursts.awlen_buf_reg[1] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awlen_tmp[1]),
        .Q(\m_axi_DATA_C_AWLEN[3] [1]),
        .R(SR));
  FDRE \could_multi_bursts.awlen_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awlen_tmp[2]),
        .Q(\m_axi_DATA_C_AWLEN[3] [2]),
        .R(SR));
  FDRE \could_multi_bursts.awlen_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(awlen_tmp[3]),
        .Q(\m_axi_DATA_C_AWLEN[3] [3]),
        .R(SR));
  FDRE \could_multi_bursts.last_sect_buf_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\bus_equal_gen.fifo_burst_n_38 ),
        .Q(\could_multi_bursts.last_sect_buf_reg_n_2 ),
        .R(SR));
  LUT1 #(
    .INIT(2'h1)) 
    \could_multi_bursts.loop_cnt[0]_i_1__1 
       (.I0(\could_multi_bursts.loop_cnt_reg [0]),
        .O(p_0_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair252" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \could_multi_bursts.loop_cnt[1]_i_1__1 
       (.I0(\could_multi_bursts.loop_cnt_reg [0]),
        .I1(\could_multi_bursts.loop_cnt_reg [1]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair252" *) 
  LUT3 #(
    .INIT(8'h6A)) 
    \could_multi_bursts.loop_cnt[2]_i_1__1 
       (.I0(\could_multi_bursts.loop_cnt_reg [2]),
        .I1(\could_multi_bursts.loop_cnt_reg [1]),
        .I2(\could_multi_bursts.loop_cnt_reg [0]),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair228" *) 
  LUT4 #(
    .INIT(16'h6AAA)) 
    \could_multi_bursts.loop_cnt[3]_i_1__1 
       (.I0(\could_multi_bursts.loop_cnt_reg [3]),
        .I1(\could_multi_bursts.loop_cnt_reg [0]),
        .I2(\could_multi_bursts.loop_cnt_reg [1]),
        .I3(\could_multi_bursts.loop_cnt_reg [2]),
        .O(p_0_in[3]));
  (* SOFT_HLUTNM = "soft_lutpair228" *) 
  LUT5 #(
    .INIT(32'h6AAAAAAA)) 
    \could_multi_bursts.loop_cnt[4]_i_1__1 
       (.I0(\could_multi_bursts.loop_cnt_reg [4]),
        .I1(\could_multi_bursts.loop_cnt_reg [2]),
        .I2(\could_multi_bursts.loop_cnt_reg [1]),
        .I3(\could_multi_bursts.loop_cnt_reg [0]),
        .I4(\could_multi_bursts.loop_cnt_reg [3]),
        .O(p_0_in[4]));
  LUT6 #(
    .INIT(64'h6AAAAAAAAAAAAAAA)) 
    \could_multi_bursts.loop_cnt[5]_i_2__1 
       (.I0(\could_multi_bursts.loop_cnt_reg [5]),
        .I1(\could_multi_bursts.loop_cnt_reg [3]),
        .I2(\could_multi_bursts.loop_cnt_reg [0]),
        .I3(\could_multi_bursts.loop_cnt_reg [1]),
        .I4(\could_multi_bursts.loop_cnt_reg [2]),
        .I5(\could_multi_bursts.loop_cnt_reg [4]),
        .O(p_0_in[5]));
  FDRE \could_multi_bursts.loop_cnt_reg[0] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(p_0_in[0]),
        .Q(\could_multi_bursts.loop_cnt_reg [0]),
        .R(\bus_equal_gen.fifo_burst_n_4 ));
  FDRE \could_multi_bursts.loop_cnt_reg[1] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(p_0_in[1]),
        .Q(\could_multi_bursts.loop_cnt_reg [1]),
        .R(\bus_equal_gen.fifo_burst_n_4 ));
  FDRE \could_multi_bursts.loop_cnt_reg[2] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(p_0_in[2]),
        .Q(\could_multi_bursts.loop_cnt_reg [2]),
        .R(\bus_equal_gen.fifo_burst_n_4 ));
  FDRE \could_multi_bursts.loop_cnt_reg[3] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(p_0_in[3]),
        .Q(\could_multi_bursts.loop_cnt_reg [3]),
        .R(\bus_equal_gen.fifo_burst_n_4 ));
  FDRE \could_multi_bursts.loop_cnt_reg[4] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(p_0_in[4]),
        .Q(\could_multi_bursts.loop_cnt_reg [4]),
        .R(\bus_equal_gen.fifo_burst_n_4 ));
  FDRE \could_multi_bursts.loop_cnt_reg[5] 
       (.C(ap_clk),
        .CE(next_loop),
        .D(p_0_in[5]),
        .Q(\could_multi_bursts.loop_cnt_reg [5]),
        .R(\bus_equal_gen.fifo_burst_n_4 ));
  FDRE \could_multi_bursts.sect_handling_reg 
       (.C(ap_clk),
        .CE(1'b1),
        .D(\bus_equal_gen.fifo_burst_n_35 ),
        .Q(\could_multi_bursts.sect_handling_reg_n_2 ),
        .R(SR));
  LUT2 #(
    .INIT(4'h6)) 
    \end_addr_buf[2]_i_1__1 
       (.I0(\start_addr_reg_n_2_[2] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr[2]));
  FDRE \end_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[10]),
        .Q(\end_addr_buf_reg_n_2_[10] ),
        .R(SR));
  FDRE \end_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[11]),
        .Q(\end_addr_buf_reg_n_2_[11] ),
        .R(SR));
  FDRE \end_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[12]),
        .Q(p_0_in0_in[0]),
        .R(SR));
  FDRE \end_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[13]),
        .Q(p_0_in0_in[1]),
        .R(SR));
  FDRE \end_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[14]),
        .Q(p_0_in0_in[2]),
        .R(SR));
  FDRE \end_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[15]),
        .Q(p_0_in0_in[3]),
        .R(SR));
  FDRE \end_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[16]),
        .Q(p_0_in0_in[4]),
        .R(SR));
  FDRE \end_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[17]),
        .Q(p_0_in0_in[5]),
        .R(SR));
  FDRE \end_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[18]),
        .Q(p_0_in0_in[6]),
        .R(SR));
  FDRE \end_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[19]),
        .Q(p_0_in0_in[7]),
        .R(SR));
  FDRE \end_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[20]),
        .Q(p_0_in0_in[8]),
        .R(SR));
  FDRE \end_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[21]),
        .Q(p_0_in0_in[9]),
        .R(SR));
  FDRE \end_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[22]),
        .Q(p_0_in0_in[10]),
        .R(SR));
  FDRE \end_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[23]),
        .Q(p_0_in0_in[11]),
        .R(SR));
  FDRE \end_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[24]),
        .Q(p_0_in0_in[12]),
        .R(SR));
  FDRE \end_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[25]),
        .Q(p_0_in0_in[13]),
        .R(SR));
  FDRE \end_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[26]),
        .Q(p_0_in0_in[14]),
        .R(SR));
  FDRE \end_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[27]),
        .Q(p_0_in0_in[15]),
        .R(SR));
  FDRE \end_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[28]),
        .Q(p_0_in0_in[16]),
        .R(SR));
  FDRE \end_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[29]),
        .Q(p_0_in0_in[17]),
        .R(SR));
  FDRE \end_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[2]),
        .Q(\end_addr_buf_reg_n_2_[2] ),
        .R(SR));
  FDRE \end_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[30]),
        .Q(p_0_in0_in[18]),
        .R(SR));
  FDRE \end_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[31]),
        .Q(p_0_in0_in[19]),
        .R(SR));
  FDRE \end_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[3]),
        .Q(\end_addr_buf_reg_n_2_[3] ),
        .R(SR));
  FDRE \end_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[4]),
        .Q(\end_addr_buf_reg_n_2_[4] ),
        .R(SR));
  FDRE \end_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[5]),
        .Q(\end_addr_buf_reg_n_2_[5] ),
        .R(SR));
  FDRE \end_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[6]),
        .Q(\end_addr_buf_reg_n_2_[6] ),
        .R(SR));
  FDRE \end_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[7]),
        .Q(\end_addr_buf_reg_n_2_[7] ),
        .R(SR));
  FDRE \end_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[8]),
        .Q(\end_addr_buf_reg_n_2_[8] ),
        .R(SR));
  FDRE \end_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(end_addr[9]),
        .Q(\end_addr_buf_reg_n_2_[9] ),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry
       (.CI(1'b0),
        .CO({end_addr_carry_n_2,end_addr_carry_n_3,end_addr_carry_n_4,end_addr_carry_n_5}),
        .CYINIT(1'b0),
        .DI({\start_addr_reg_n_2_[5] ,\start_addr_reg_n_2_[4] ,\start_addr_reg_n_2_[3] ,\start_addr_reg_n_2_[2] }),
        .O({end_addr[5:3],NLW_end_addr_carry_O_UNCONNECTED[0]}),
        .S({end_addr_carry_i_1__1_n_2,end_addr_carry_i_2__1_n_2,end_addr_carry_i_3__1_n_2,end_addr_carry_i_4__1_n_2}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__0
       (.CI(end_addr_carry_n_2),
        .CO({end_addr_carry__0_n_2,end_addr_carry__0_n_3,end_addr_carry__0_n_4,end_addr_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({\start_addr_reg_n_2_[9] ,\start_addr_reg_n_2_[8] ,\start_addr_reg_n_2_[7] ,\start_addr_reg_n_2_[6] }),
        .O(end_addr[9:6]),
        .S({end_addr_carry__0_i_1__1_n_2,end_addr_carry__0_i_2__1_n_2,end_addr_carry__0_i_3__1_n_2,end_addr_carry__0_i_4__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_1__1
       (.I0(\start_addr_reg_n_2_[9] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__0_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_2__1
       (.I0(\start_addr_reg_n_2_[8] ),
        .I1(\align_len_reg_n_2_[8] ),
        .O(end_addr_carry__0_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_3__1
       (.I0(\start_addr_reg_n_2_[7] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry__0_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__0_i_4__1
       (.I0(\start_addr_reg_n_2_[6] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry__0_i_4__1_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__1
       (.CI(end_addr_carry__0_n_2),
        .CO({end_addr_carry__1_n_2,end_addr_carry__1_n_3,end_addr_carry__1_n_4,end_addr_carry__1_n_5}),
        .CYINIT(1'b0),
        .DI({data[1:0],\start_addr_reg_n_2_[11] ,\start_addr_reg_n_2_[10] }),
        .O(end_addr[13:10]),
        .S({end_addr_carry__1_i_1__1_n_2,end_addr_carry__1_i_2__1_n_2,end_addr_carry__1_i_3__1_n_2,end_addr_carry__1_i_4__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_1__1
       (.I0(data[1]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_2__1
       (.I0(data[0]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_3__1
       (.I0(\start_addr_reg_n_2_[11] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__1_i_4__1
       (.I0(\start_addr_reg_n_2_[10] ),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__1_i_4__1_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__2
       (.CI(end_addr_carry__1_n_2),
        .CO({end_addr_carry__2_n_2,end_addr_carry__2_n_3,end_addr_carry__2_n_4,end_addr_carry__2_n_5}),
        .CYINIT(1'b0),
        .DI(data[5:2]),
        .O(end_addr[17:14]),
        .S({end_addr_carry__2_i_1__1_n_2,end_addr_carry__2_i_2__1_n_2,end_addr_carry__2_i_3__1_n_2,end_addr_carry__2_i_4__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_1__1
       (.I0(data[5]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_2__1
       (.I0(data[4]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_3__1
       (.I0(data[3]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__2_i_4__1
       (.I0(data[2]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__2_i_4__1_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__3
       (.CI(end_addr_carry__2_n_2),
        .CO({end_addr_carry__3_n_2,end_addr_carry__3_n_3,end_addr_carry__3_n_4,end_addr_carry__3_n_5}),
        .CYINIT(1'b0),
        .DI(data[9:6]),
        .O(end_addr[21:18]),
        .S({end_addr_carry__3_i_1__1_n_2,end_addr_carry__3_i_2__1_n_2,end_addr_carry__3_i_3__1_n_2,end_addr_carry__3_i_4__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_1__1
       (.I0(data[9]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_2__1
       (.I0(data[8]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_3__1
       (.I0(data[7]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__3_i_4__1
       (.I0(data[6]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__3_i_4__1_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__4
       (.CI(end_addr_carry__3_n_2),
        .CO({end_addr_carry__4_n_2,end_addr_carry__4_n_3,end_addr_carry__4_n_4,end_addr_carry__4_n_5}),
        .CYINIT(1'b0),
        .DI(data[13:10]),
        .O(end_addr[25:22]),
        .S({end_addr_carry__4_i_1__1_n_2,end_addr_carry__4_i_2__1_n_2,end_addr_carry__4_i_3__1_n_2,end_addr_carry__4_i_4__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_1__1
       (.I0(data[13]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_2__1
       (.I0(data[12]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_3__1
       (.I0(data[11]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__4_i_4__1
       (.I0(data[10]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__4_i_4__1_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__5
       (.CI(end_addr_carry__4_n_2),
        .CO({end_addr_carry__5_n_2,end_addr_carry__5_n_3,end_addr_carry__5_n_4,end_addr_carry__5_n_5}),
        .CYINIT(1'b0),
        .DI(data[17:14]),
        .O(end_addr[29:26]),
        .S({end_addr_carry__5_i_1__1_n_2,end_addr_carry__5_i_2__1_n_2,end_addr_carry__5_i_3__1_n_2,end_addr_carry__5_i_4__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_1__1
       (.I0(data[17]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_2__1
       (.I0(data[16]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_3__1
       (.I0(data[15]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__5_i_4__1
       (.I0(data[14]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__5_i_4__1_n_2));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 end_addr_carry__6
       (.CI(end_addr_carry__5_n_2),
        .CO({NLW_end_addr_carry__6_CO_UNCONNECTED[3:1],end_addr_carry__6_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,data[18]}),
        .O({NLW_end_addr_carry__6_O_UNCONNECTED[3:2],end_addr[31:30]}),
        .S({1'b0,1'b0,end_addr_carry__6_i_1__1_n_2,end_addr_carry__6_i_2__1_n_2}));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__6_i_1__1
       (.I0(data[19]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__6_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry__6_i_2__1
       (.I0(data[18]),
        .I1(\align_len_reg_n_2_[31] ),
        .O(end_addr_carry__6_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_1__1
       (.I0(\start_addr_reg_n_2_[5] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_1__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_2__1
       (.I0(\start_addr_reg_n_2_[4] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_2__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_3__1
       (.I0(\start_addr_reg_n_2_[3] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_3__1_n_2));
  LUT2 #(
    .INIT(4'h6)) 
    end_addr_carry_i_4__1
       (.I0(\start_addr_reg_n_2_[2] ),
        .I1(\align_len_reg_n_2_[7] ),
        .O(end_addr_carry_i_4__1_n_2));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo__parameterized1 fifo_resp
       (.SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .\could_multi_bursts.last_sect_buf_reg (\could_multi_bursts.last_sect_buf_reg_n_2 ),
        .fifo_resp_ready(fifo_resp_ready),
        .full_n_reg_0(m_axi_DATA_C_BREADY),
        .in(invalid_len_event_reg2),
        .m_axi_DATA_C_BVALID(m_axi_DATA_C_BVALID),
        .next_loop(next_loop),
        .next_resp(next_resp),
        .next_resp0(next_resp0),
        .push(push),
        .\sect_len_buf_reg[7] (\bus_equal_gen.fifo_burst_n_9 ));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo__parameterized2 fifo_resp_to_user
       (.D(D[2]),
        .DATA_C_BREADY(DATA_C_BREADY),
        .Q(Q[4:3]),
        .SR(SR),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .empty_n_reg_0(empty_n_reg),
        .\int_a_reg[3] (\int_a_reg[3] ),
        .\int_b_reg[3] (\int_b_reg[3] ),
        .m_axi_DATA_C_BREADY(m_axi_DATA_C_BREADY),
        .push(push),
        .\rdata_reg[3] (\rdata_reg[3] ),
        .s_axi_CTL_ARADDR(s_axi_CTL_ARADDR));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_fifo__parameterized0 fifo_wreq
       (.E(next_loop),
        .Q({fifo_wreq_data,fifo_wreq_n_5,fifo_wreq_n_6,fifo_wreq_n_7,fifo_wreq_n_8,fifo_wreq_n_9,fifo_wreq_n_10,fifo_wreq_n_11,fifo_wreq_n_12,fifo_wreq_n_13,fifo_wreq_n_14,fifo_wreq_n_15,fifo_wreq_n_16,fifo_wreq_n_17,fifo_wreq_n_18,fifo_wreq_n_19,fifo_wreq_n_20,fifo_wreq_n_21,fifo_wreq_n_22,fifo_wreq_n_23,fifo_wreq_n_24,fifo_wreq_n_25,fifo_wreq_n_26,fifo_wreq_n_27,fifo_wreq_n_28,fifo_wreq_n_29,fifo_wreq_n_30,fifo_wreq_n_31,fifo_wreq_n_32,fifo_wreq_n_33,fifo_wreq_n_34}),
        .S({fifo_wreq_n_38,fifo_wreq_n_39,fifo_wreq_n_40,fifo_wreq_n_41}),
        .SR(SR),
        .\align_len_reg[31] (fifo_wreq_n_3),
        .\align_len_reg[31]_0 (fifo_wreq_n_45),
        .ap_clk(ap_clk),
        .ap_rst_n(ap_rst_n),
        .\could_multi_bursts.sect_handling_reg (\could_multi_bursts.sect_handling_reg_n_2 ),
        .\data_p1_reg[29] (rs2f_wreq_data),
        .\end_addr_buf_reg[31] (last_sect),
        .\end_addr_buf_reg[31]_0 (p_0_in0_in),
        .fifo_wreq_valid(fifo_wreq_valid),
        .fifo_wreq_valid_buf_reg(fifo_wreq_valid_buf_reg_n_2),
        .invalid_len_event_reg(fifo_wreq_n_37),
        .last_sect_buf(last_sect_buf),
        .push(push_0),
        .\q_reg[0]_0 ({fifo_wreq_n_42,fifo_wreq_n_43,fifo_wreq_n_44}),
        .rs2f_wreq_ack(rs2f_wreq_ack),
        .sect_cnt_reg(sect_cnt_reg),
        .\sect_cnt_reg_0__s_port_] (fifo_wreq_n_46),
        .\sect_len_buf_reg[7] (\bus_equal_gen.fifo_burst_n_9 ),
        .\start_addr_reg[31] (align_len0),
        .\state_reg[0] (rs2f_wreq_valid),
        .wreq_handling_reg(wreq_handling_reg_n_2));
  FDRE fifo_wreq_valid_buf_reg
       (.C(ap_clk),
        .CE(next_wreq),
        .D(fifo_wreq_valid),
        .Q(fifo_wreq_valid_buf_reg_n_2),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 first_sect_carry
       (.CI(1'b0),
        .CO({first_sect_carry_n_2,first_sect_carry_n_3,first_sect_carry_n_4,first_sect_carry_n_5}),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_first_sect_carry_O_UNCONNECTED[3:0]),
        .S({first_sect_carry_i_1__1_n_2,first_sect_carry_i_2__1_n_2,first_sect_carry_i_3__1_n_2,first_sect_carry_i_4__1_n_2}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 first_sect_carry__0
       (.CI(first_sect_carry_n_2),
        .CO({NLW_first_sect_carry__0_CO_UNCONNECTED[3],first_sect,first_sect_carry__0_n_4,first_sect_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_first_sect_carry__0_O_UNCONNECTED[3:0]),
        .S({1'b0,first_sect_carry__0_i_1__1_n_2,first_sect_carry__0_i_2__1_n_2,first_sect_carry__0_i_3__1_n_2}));
  LUT4 #(
    .INIT(16'h9009)) 
    first_sect_carry__0_i_1__1
       (.I0(p_0_in_0[19]),
        .I1(sect_cnt_reg[19]),
        .I2(p_0_in_0[18]),
        .I3(sect_cnt_reg[18]),
        .O(first_sect_carry__0_i_1__1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry__0_i_2__1
       (.I0(p_0_in_0[17]),
        .I1(sect_cnt_reg[17]),
        .I2(sect_cnt_reg[15]),
        .I3(p_0_in_0[15]),
        .I4(sect_cnt_reg[16]),
        .I5(p_0_in_0[16]),
        .O(first_sect_carry__0_i_2__1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry__0_i_3__1
       (.I0(p_0_in_0[14]),
        .I1(sect_cnt_reg[14]),
        .I2(sect_cnt_reg[12]),
        .I3(p_0_in_0[12]),
        .I4(sect_cnt_reg[13]),
        .I5(p_0_in_0[13]),
        .O(first_sect_carry__0_i_3__1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_1__1
       (.I0(p_0_in_0[11]),
        .I1(sect_cnt_reg[11]),
        .I2(sect_cnt_reg[9]),
        .I3(p_0_in_0[9]),
        .I4(sect_cnt_reg[10]),
        .I5(p_0_in_0[10]),
        .O(first_sect_carry_i_1__1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_2__1
       (.I0(sect_cnt_reg[8]),
        .I1(p_0_in_0[8]),
        .I2(sect_cnt_reg[6]),
        .I3(p_0_in_0[6]),
        .I4(p_0_in_0[7]),
        .I5(sect_cnt_reg[7]),
        .O(first_sect_carry_i_2__1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_3__1
       (.I0(p_0_in_0[5]),
        .I1(sect_cnt_reg[5]),
        .I2(sect_cnt_reg[3]),
        .I3(p_0_in_0[3]),
        .I4(sect_cnt_reg[4]),
        .I5(p_0_in_0[4]),
        .O(first_sect_carry_i_3__1_n_2));
  LUT6 #(
    .INIT(64'h9009000000009009)) 
    first_sect_carry_i_4__1
       (.I0(sect_cnt_reg[2]),
        .I1(p_0_in_0[2]),
        .I2(sect_cnt_reg[0]),
        .I3(p_0_in_0[0]),
        .I4(p_0_in_0[1]),
        .I5(sect_cnt_reg[1]),
        .O(first_sect_carry_i_4__1_n_2));
  FDRE invalid_len_event_reg
       (.C(ap_clk),
        .CE(next_wreq),
        .D(fifo_wreq_n_37),
        .Q(invalid_len_event),
        .R(SR));
  FDRE invalid_len_event_reg1_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(invalid_len_event),
        .Q(invalid_len_event_reg1),
        .R(SR));
  FDRE invalid_len_event_reg2_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(invalid_len_event_reg1),
        .Q(invalid_len_event_reg2),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 last_sect_carry
       (.CI(1'b0),
        .CO({last_sect_carry_n_2,last_sect_carry_n_3,last_sect_carry_n_4,last_sect_carry_n_5}),
        .CYINIT(1'b1),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_last_sect_carry_O_UNCONNECTED[3:0]),
        .S({fifo_wreq_n_38,fifo_wreq_n_39,fifo_wreq_n_40,fifo_wreq_n_41}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 last_sect_carry__0
       (.CI(last_sect_carry_n_2),
        .CO({NLW_last_sect_carry__0_CO_UNCONNECTED[3],last_sect,last_sect_carry__0_n_4,last_sect_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O(NLW_last_sect_carry__0_O_UNCONNECTED[3:0]),
        .S({1'b0,fifo_wreq_n_42,fifo_wreq_n_43,fifo_wreq_n_44}));
  FDRE next_resp_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(next_resp0),
        .Q(next_resp),
        .R(SR));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry
       (.CI(1'b0),
        .CO({p_0_out_carry_n_2,p_0_out_carry_n_3,p_0_out_carry_n_4,p_0_out_carry_n_5}),
        .CYINIT(usedw_reg[0]),
        .DI({usedw_reg[3:1],buff_wdata_n_19}),
        .O({p_0_out_carry_n_6,p_0_out_carry_n_7,p_0_out_carry_n_8,p_0_out_carry_n_9}),
        .S({buff_wdata_n_4,buff_wdata_n_5,buff_wdata_n_6,buff_wdata_n_7}));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-8 {cell *THIS*}}" *) 
  CARRY4 p_0_out_carry__0
       (.CI(p_0_out_carry_n_2),
        .CO({NLW_p_0_out_carry__0_CO_UNCONNECTED[3:2],p_0_out_carry__0_n_4,p_0_out_carry__0_n_5}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,usedw_reg[5:4]}),
        .O({NLW_p_0_out_carry__0_O_UNCONNECTED[3],p_0_out_carry__0_n_7,p_0_out_carry__0_n_8,p_0_out_carry__0_n_9}),
        .S({1'b0,buff_wdata_n_15,buff_wdata_n_16,buff_wdata_n_17}));
  accelerator_bd_vector_multiplier_0_0_vector_multiplier_DATA_C_m_axi_reg_slice rs_wreq
       (.D(D[1:0]),
        .Q(Q[2:0]),
        .SR(SR),
        .\ap_CS_fsm_reg[8] (\ap_CS_fsm_reg[8] ),
        .ap_block_pp0_stage0_flag00011011(ap_block_pp0_stage0_flag00011011),
        .ap_clk(ap_clk),
        .ap_enable_reg_pp0_iter0(ap_enable_reg_pp0_iter0),
        .ap_enable_reg_pp0_iter0_reg(ap_enable_reg_pp0_iter0_reg),
        .ap_enable_reg_pp0_iter3(ap_enable_reg_pp0_iter3),
        .ap_enable_reg_pp0_iter4_reg(ap_enable_reg_pp0_iter4_reg),
        .ap_enable_reg_pp0_iter4_reg_0(ap_enable_reg_pp0_iter4_reg_0),
        .ap_enable_reg_pp0_iter4_reg_1(ap_enable_reg_pp0_iter4_reg_1),
        .ap_rst_n(ap_rst_n),
        .\c5_reg_236_reg[29] (\c5_reg_236_reg[29] ),
        .exitcond_fu_220_p2(exitcond_fu_220_p2),
        .push(push_0),
        .\q_reg[29] (rs2f_wreq_data),
        .rs2f_wreq_ack(rs2f_wreq_ack),
        .s_ready_t_reg_0(s_ready_t_reg),
        .s_ready_t_reg_1(rs2f_wreq_valid));
  (* SOFT_HLUTNM = "soft_lutpair258" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[10]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[10] ),
        .O(sect_addr[10]));
  (* SOFT_HLUTNM = "soft_lutpair257" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[11]_i_2__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[11] ),
        .O(sect_addr[11]));
  (* SOFT_HLUTNM = "soft_lutpair250" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[12]_i_1__1 
       (.I0(p_0_in_0[0]),
        .I1(first_sect),
        .I2(sect_cnt_reg[0]),
        .O(sect_addr[12]));
  (* SOFT_HLUTNM = "soft_lutpair250" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[13]_i_1__1 
       (.I0(p_0_in_0[1]),
        .I1(first_sect),
        .I2(sect_cnt_reg[1]),
        .O(sect_addr[13]));
  (* SOFT_HLUTNM = "soft_lutpair249" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[14]_i_1__1 
       (.I0(p_0_in_0[2]),
        .I1(first_sect),
        .I2(sect_cnt_reg[2]),
        .O(sect_addr[14]));
  (* SOFT_HLUTNM = "soft_lutpair249" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[15]_i_1__1 
       (.I0(p_0_in_0[3]),
        .I1(first_sect),
        .I2(sect_cnt_reg[3]),
        .O(sect_addr[15]));
  (* SOFT_HLUTNM = "soft_lutpair248" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[16]_i_1__1 
       (.I0(p_0_in_0[4]),
        .I1(first_sect),
        .I2(sect_cnt_reg[4]),
        .O(sect_addr[16]));
  (* SOFT_HLUTNM = "soft_lutpair248" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[17]_i_1__1 
       (.I0(p_0_in_0[5]),
        .I1(first_sect),
        .I2(sect_cnt_reg[5]),
        .O(sect_addr[17]));
  (* SOFT_HLUTNM = "soft_lutpair247" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[18]_i_1__1 
       (.I0(p_0_in_0[6]),
        .I1(first_sect),
        .I2(sect_cnt_reg[6]),
        .O(sect_addr[18]));
  (* SOFT_HLUTNM = "soft_lutpair247" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[19]_i_1__1 
       (.I0(p_0_in_0[7]),
        .I1(first_sect),
        .I2(sect_cnt_reg[7]),
        .O(sect_addr[19]));
  (* SOFT_HLUTNM = "soft_lutpair246" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[20]_i_1__1 
       (.I0(p_0_in_0[8]),
        .I1(first_sect),
        .I2(sect_cnt_reg[8]),
        .O(sect_addr[20]));
  (* SOFT_HLUTNM = "soft_lutpair246" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[21]_i_1__1 
       (.I0(p_0_in_0[9]),
        .I1(first_sect),
        .I2(sect_cnt_reg[9]),
        .O(sect_addr[21]));
  (* SOFT_HLUTNM = "soft_lutpair245" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[22]_i_1__1 
       (.I0(p_0_in_0[10]),
        .I1(first_sect),
        .I2(sect_cnt_reg[10]),
        .O(sect_addr[22]));
  (* SOFT_HLUTNM = "soft_lutpair245" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[23]_i_1__1 
       (.I0(p_0_in_0[11]),
        .I1(first_sect),
        .I2(sect_cnt_reg[11]),
        .O(sect_addr[23]));
  (* SOFT_HLUTNM = "soft_lutpair244" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[24]_i_1__1 
       (.I0(p_0_in_0[12]),
        .I1(first_sect),
        .I2(sect_cnt_reg[12]),
        .O(sect_addr[24]));
  (* SOFT_HLUTNM = "soft_lutpair244" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[25]_i_1__1 
       (.I0(p_0_in_0[13]),
        .I1(first_sect),
        .I2(sect_cnt_reg[13]),
        .O(sect_addr[25]));
  (* SOFT_HLUTNM = "soft_lutpair243" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[26]_i_1__1 
       (.I0(p_0_in_0[14]),
        .I1(first_sect),
        .I2(sect_cnt_reg[14]),
        .O(sect_addr[26]));
  (* SOFT_HLUTNM = "soft_lutpair243" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[27]_i_1__1 
       (.I0(p_0_in_0[15]),
        .I1(first_sect),
        .I2(sect_cnt_reg[15]),
        .O(sect_addr[27]));
  (* SOFT_HLUTNM = "soft_lutpair242" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[28]_i_1__1 
       (.I0(p_0_in_0[16]),
        .I1(first_sect),
        .I2(sect_cnt_reg[16]),
        .O(sect_addr[28]));
  (* SOFT_HLUTNM = "soft_lutpair242" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[29]_i_1__1 
       (.I0(p_0_in_0[17]),
        .I1(first_sect),
        .I2(sect_cnt_reg[17]),
        .O(sect_addr[29]));
  (* SOFT_HLUTNM = "soft_lutpair257" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[2]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[2] ),
        .O(sect_addr[2]));
  (* SOFT_HLUTNM = "soft_lutpair241" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[30]_i_1__1 
       (.I0(p_0_in_0[18]),
        .I1(first_sect),
        .I2(sect_cnt_reg[18]),
        .O(sect_addr[30]));
  (* SOFT_HLUTNM = "soft_lutpair241" *) 
  LUT3 #(
    .INIT(8'hB8)) 
    \sect_addr_buf[31]_i_1__1 
       (.I0(p_0_in_0[19]),
        .I1(first_sect),
        .I2(sect_cnt_reg[19]),
        .O(sect_addr[31]));
  (* SOFT_HLUTNM = "soft_lutpair259" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[3]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[3] ),
        .O(sect_addr[3]));
  (* SOFT_HLUTNM = "soft_lutpair260" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[4]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[4] ),
        .O(sect_addr[4]));
  (* SOFT_HLUTNM = "soft_lutpair258" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[5]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[5] ),
        .O(sect_addr[5]));
  (* SOFT_HLUTNM = "soft_lutpair261" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[6]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[6] ),
        .O(sect_addr[6]));
  (* SOFT_HLUTNM = "soft_lutpair261" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[7]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[7] ),
        .O(sect_addr[7]));
  (* SOFT_HLUTNM = "soft_lutpair260" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[8]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[8] ),
        .O(sect_addr[8]));
  (* SOFT_HLUTNM = "soft_lutpair259" *) 
  LUT2 #(
    .INIT(4'h8)) 
    \sect_addr_buf[9]_i_1__1 
       (.I0(first_sect),
        .I1(\start_addr_buf_reg_n_2_[9] ),
        .O(sect_addr[9]));
  FDRE \sect_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[10]),
        .Q(\sect_addr_buf_reg_n_2_[10] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[11]),
        .Q(\sect_addr_buf_reg_n_2_[11] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[12]),
        .Q(\sect_addr_buf_reg_n_2_[12] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[13]),
        .Q(\sect_addr_buf_reg_n_2_[13] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[14]),
        .Q(\sect_addr_buf_reg_n_2_[14] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[15]),
        .Q(\sect_addr_buf_reg_n_2_[15] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[16]),
        .Q(\sect_addr_buf_reg_n_2_[16] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[17]),
        .Q(\sect_addr_buf_reg_n_2_[17] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[18]),
        .Q(\sect_addr_buf_reg_n_2_[18] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[19]),
        .Q(\sect_addr_buf_reg_n_2_[19] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[20]),
        .Q(\sect_addr_buf_reg_n_2_[20] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[21]),
        .Q(\sect_addr_buf_reg_n_2_[21] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[22]),
        .Q(\sect_addr_buf_reg_n_2_[22] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[23]),
        .Q(\sect_addr_buf_reg_n_2_[23] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[24]),
        .Q(\sect_addr_buf_reg_n_2_[24] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[25]),
        .Q(\sect_addr_buf_reg_n_2_[25] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[26]),
        .Q(\sect_addr_buf_reg_n_2_[26] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[27]),
        .Q(\sect_addr_buf_reg_n_2_[27] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[28]),
        .Q(\sect_addr_buf_reg_n_2_[28] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[29]),
        .Q(\sect_addr_buf_reg_n_2_[29] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[2]),
        .Q(\sect_addr_buf_reg_n_2_[2] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[30]),
        .Q(\sect_addr_buf_reg_n_2_[30] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[31]),
        .Q(\sect_addr_buf_reg_n_2_[31] ),
        .R(SR));
  FDRE \sect_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[3]),
        .Q(\sect_addr_buf_reg_n_2_[3] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[4]),
        .Q(\sect_addr_buf_reg_n_2_[4] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[5]),
        .Q(\sect_addr_buf_reg_n_2_[5] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[6]),
        .Q(\sect_addr_buf_reg_n_2_[6] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[7]),
        .Q(\sect_addr_buf_reg_n_2_[7] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[8]),
        .Q(\sect_addr_buf_reg_n_2_[8] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(sect_addr[9]),
        .Q(\sect_addr_buf_reg_n_2_[9] ),
        .R(\bus_equal_gen.fifo_burst_n_7 ));
  FDRE \sect_cnt_reg[0] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_17 ),
        .Q(sect_cnt_reg[0]),
        .R(SR));
  FDRE \sect_cnt_reg[10] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_23 ),
        .Q(sect_cnt_reg[10]),
        .R(SR));
  FDRE \sect_cnt_reg[11] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_22 ),
        .Q(sect_cnt_reg[11]),
        .R(SR));
  FDRE \sect_cnt_reg[12] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_29 ),
        .Q(sect_cnt_reg[12]),
        .R(SR));
  FDRE \sect_cnt_reg[13] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_28 ),
        .Q(sect_cnt_reg[13]),
        .R(SR));
  FDRE \sect_cnt_reg[14] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_27 ),
        .Q(sect_cnt_reg[14]),
        .R(SR));
  FDRE \sect_cnt_reg[15] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_26 ),
        .Q(sect_cnt_reg[15]),
        .R(SR));
  FDRE \sect_cnt_reg[16] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_33 ),
        .Q(sect_cnt_reg[16]),
        .R(SR));
  FDRE \sect_cnt_reg[17] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_32 ),
        .Q(sect_cnt_reg[17]),
        .R(SR));
  FDRE \sect_cnt_reg[18] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_31 ),
        .Q(sect_cnt_reg[18]),
        .R(SR));
  FDRE \sect_cnt_reg[19] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_30 ),
        .Q(sect_cnt_reg[19]),
        .R(SR));
  FDRE \sect_cnt_reg[1] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_16 ),
        .Q(sect_cnt_reg[1]),
        .R(SR));
  FDRE \sect_cnt_reg[2] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_15 ),
        .Q(sect_cnt_reg[2]),
        .R(SR));
  FDRE \sect_cnt_reg[3] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_14 ),
        .Q(sect_cnt_reg[3]),
        .R(SR));
  FDRE \sect_cnt_reg[4] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_21 ),
        .Q(sect_cnt_reg[4]),
        .R(SR));
  FDRE \sect_cnt_reg[5] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_20 ),
        .Q(sect_cnt_reg[5]),
        .R(SR));
  FDRE \sect_cnt_reg[6] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_19 ),
        .Q(sect_cnt_reg[6]),
        .R(SR));
  FDRE \sect_cnt_reg[7] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_18 ),
        .Q(sect_cnt_reg[7]),
        .R(SR));
  FDRE \sect_cnt_reg[8] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_25 ),
        .Q(sect_cnt_reg[8]),
        .R(SR));
  FDRE \sect_cnt_reg[9] 
       (.C(ap_clk),
        .CE(fifo_wreq_n_46),
        .D(\bus_equal_gen.fifo_burst_n_24 ),
        .Q(sect_cnt_reg[9]),
        .R(SR));
  FDRE \sect_len_buf_reg[0] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_48 ),
        .Q(\sect_len_buf_reg_n_2_[0] ),
        .R(SR));
  FDRE \sect_len_buf_reg[1] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_47 ),
        .Q(\sect_len_buf_reg_n_2_[1] ),
        .R(SR));
  FDRE \sect_len_buf_reg[2] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_46 ),
        .Q(\sect_len_buf_reg_n_2_[2] ),
        .R(SR));
  FDRE \sect_len_buf_reg[3] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_45 ),
        .Q(\sect_len_buf_reg_n_2_[3] ),
        .R(SR));
  FDRE \sect_len_buf_reg[4] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_44 ),
        .Q(\sect_len_buf_reg_n_2_[4] ),
        .R(SR));
  FDRE \sect_len_buf_reg[5] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_43 ),
        .Q(\sect_len_buf_reg_n_2_[5] ),
        .R(SR));
  FDRE \sect_len_buf_reg[6] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_42 ),
        .Q(\sect_len_buf_reg_n_2_[6] ),
        .R(SR));
  FDRE \sect_len_buf_reg[7] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_41 ),
        .Q(\sect_len_buf_reg_n_2_[7] ),
        .R(SR));
  FDRE \sect_len_buf_reg[8] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_40 ),
        .Q(\sect_len_buf_reg_n_2_[8] ),
        .R(SR));
  FDRE \sect_len_buf_reg[9] 
       (.C(ap_clk),
        .CE(last_sect_buf),
        .D(\bus_equal_gen.fifo_burst_n_39 ),
        .Q(\sect_len_buf_reg_n_2_[9] ),
        .R(SR));
  FDRE \start_addr_buf_reg[10] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[10] ),
        .Q(\start_addr_buf_reg_n_2_[10] ),
        .R(SR));
  FDRE \start_addr_buf_reg[11] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[11] ),
        .Q(\start_addr_buf_reg_n_2_[11] ),
        .R(SR));
  FDRE \start_addr_buf_reg[12] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[0]),
        .Q(p_0_in_0[0]),
        .R(SR));
  FDRE \start_addr_buf_reg[13] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[1]),
        .Q(p_0_in_0[1]),
        .R(SR));
  FDRE \start_addr_buf_reg[14] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[2]),
        .Q(p_0_in_0[2]),
        .R(SR));
  FDRE \start_addr_buf_reg[15] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[3]),
        .Q(p_0_in_0[3]),
        .R(SR));
  FDRE \start_addr_buf_reg[16] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[4]),
        .Q(p_0_in_0[4]),
        .R(SR));
  FDRE \start_addr_buf_reg[17] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[5]),
        .Q(p_0_in_0[5]),
        .R(SR));
  FDRE \start_addr_buf_reg[18] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[6]),
        .Q(p_0_in_0[6]),
        .R(SR));
  FDRE \start_addr_buf_reg[19] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[7]),
        .Q(p_0_in_0[7]),
        .R(SR));
  FDRE \start_addr_buf_reg[20] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[8]),
        .Q(p_0_in_0[8]),
        .R(SR));
  FDRE \start_addr_buf_reg[21] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[9]),
        .Q(p_0_in_0[9]),
        .R(SR));
  FDRE \start_addr_buf_reg[22] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[10]),
        .Q(p_0_in_0[10]),
        .R(SR));
  FDRE \start_addr_buf_reg[23] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[11]),
        .Q(p_0_in_0[11]),
        .R(SR));
  FDRE \start_addr_buf_reg[24] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[12]),
        .Q(p_0_in_0[12]),
        .R(SR));
  FDRE \start_addr_buf_reg[25] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[13]),
        .Q(p_0_in_0[13]),
        .R(SR));
  FDRE \start_addr_buf_reg[26] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[14]),
        .Q(p_0_in_0[14]),
        .R(SR));
  FDRE \start_addr_buf_reg[27] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[15]),
        .Q(p_0_in_0[15]),
        .R(SR));
  FDRE \start_addr_buf_reg[28] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[16]),
        .Q(p_0_in_0[16]),
        .R(SR));
  FDRE \start_addr_buf_reg[29] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[17]),
        .Q(p_0_in_0[17]),
        .R(SR));
  FDRE \start_addr_buf_reg[2] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[2] ),
        .Q(\start_addr_buf_reg_n_2_[2] ),
        .R(SR));
  FDRE \start_addr_buf_reg[30] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[18]),
        .Q(p_0_in_0[18]),
        .R(SR));
  FDRE \start_addr_buf_reg[31] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(data[19]),
        .Q(p_0_in_0[19]),
        .R(SR));
  FDRE \start_addr_buf_reg[3] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[3] ),
        .Q(\start_addr_buf_reg_n_2_[3] ),
        .R(SR));
  FDRE \start_addr_buf_reg[4] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[4] ),
        .Q(\start_addr_buf_reg_n_2_[4] ),
        .R(SR));
  FDRE \start_addr_buf_reg[5] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[5] ),
        .Q(\start_addr_buf_reg_n_2_[5] ),
        .R(SR));
  FDRE \start_addr_buf_reg[6] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[6] ),
        .Q(\start_addr_buf_reg_n_2_[6] ),
        .R(SR));
  FDRE \start_addr_buf_reg[7] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[7] ),
        .Q(\start_addr_buf_reg_n_2_[7] ),
        .R(SR));
  FDRE \start_addr_buf_reg[8] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[8] ),
        .Q(\start_addr_buf_reg_n_2_[8] ),
        .R(SR));
  FDRE \start_addr_buf_reg[9] 
       (.C(ap_clk),
        .CE(next_wreq),
        .D(\start_addr_reg_n_2_[9] ),
        .Q(\start_addr_buf_reg_n_2_[9] ),
        .R(SR));
  FDRE \start_addr_reg[10] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_26),
        .Q(\start_addr_reg_n_2_[10] ),
        .R(SR));
  FDRE \start_addr_reg[11] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_25),
        .Q(\start_addr_reg_n_2_[11] ),
        .R(SR));
  FDRE \start_addr_reg[12] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_24),
        .Q(data[0]),
        .R(SR));
  FDRE \start_addr_reg[13] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_23),
        .Q(data[1]),
        .R(SR));
  FDRE \start_addr_reg[14] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_22),
        .Q(data[2]),
        .R(SR));
  FDRE \start_addr_reg[15] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_21),
        .Q(data[3]),
        .R(SR));
  FDRE \start_addr_reg[16] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_20),
        .Q(data[4]),
        .R(SR));
  FDRE \start_addr_reg[17] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_19),
        .Q(data[5]),
        .R(SR));
  FDRE \start_addr_reg[18] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_18),
        .Q(data[6]),
        .R(SR));
  FDRE \start_addr_reg[19] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_17),
        .Q(data[7]),
        .R(SR));
  FDRE \start_addr_reg[20] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_16),
        .Q(data[8]),
        .R(SR));
  FDRE \start_addr_reg[21] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_15),
        .Q(data[9]),
        .R(SR));
  FDRE \start_addr_reg[22] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_14),
        .Q(data[10]),
        .R(SR));
  FDRE \start_addr_reg[23] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_13),
        .Q(data[11]),
        .R(SR));
  FDRE \start_addr_reg[24] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_12),
        .Q(data[12]),
        .R(SR));
  FDRE \start_addr_reg[25] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_11),
        .Q(data[13]),
        .R(SR));
  FDRE \start_addr_reg[26] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_10),
        .Q(data[14]),
        .R(SR));
  FDRE \start_addr_reg[27] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_9),
        .Q(data[15]),
        .R(SR));
  FDRE \start_addr_reg[28] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_8),
        .Q(data[16]),
        .R(SR));
  FDRE \start_addr_reg[29] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_7),
        .Q(data[17]),
        .R(SR));
  FDRE \start_addr_reg[2] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_34),
        .Q(\start_addr_reg_n_2_[2] ),
        .R(SR));
  FDRE \start_addr_reg[30] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_6),
        .Q(data[18]),
        .R(SR));
  FDRE \start_addr_reg[31] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_5),
        .Q(data[19]),
        .R(SR));
  FDRE \start_addr_reg[3] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_33),
        .Q(\start_addr_reg_n_2_[3] ),
        .R(SR));
  FDRE \start_addr_reg[4] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_32),
        .Q(\start_addr_reg_n_2_[4] ),
        .R(SR));
  FDRE \start_addr_reg[5] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_31),
        .Q(\start_addr_reg_n_2_[5] ),
        .R(SR));
  FDRE \start_addr_reg[6] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_30),
        .Q(\start_addr_reg_n_2_[6] ),
        .R(SR));
  FDRE \start_addr_reg[7] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_29),
        .Q(\start_addr_reg_n_2_[7] ),
        .R(SR));
  FDRE \start_addr_reg[8] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_28),
        .Q(\start_addr_reg_n_2_[8] ),
        .R(SR));
  FDRE \start_addr_reg[9] 
       (.C(ap_clk),
        .CE(align_len0),
        .D(fifo_wreq_n_27),
        .Q(\start_addr_reg_n_2_[9] ),
        .R(SR));
  LUT3 #(
    .INIT(8'h8B)) 
    \throttl_cnt[0]_i_1 
       (.I0(\m_axi_DATA_C_AWLEN[3] [0]),
        .I1(\throttl_cnt_reg[7] ),
        .I2(\throttl_cnt_reg[0]_0 ),
        .O(\throttl_cnt_reg[0] ));
  LUT4 #(
    .INIT(16'hFF80)) 
    \throttl_cnt[7]_i_1 
       (.I0(m_axi_DATA_C_WREADY),
        .I1(m_axi_DATA_C_WVALID),
        .I2(\throttl_cnt_reg[6] ),
        .I3(\throttl_cnt_reg[7] ),
        .O(E));
  LUT6 #(
    .INIT(64'h8888888888888880)) 
    \throttl_cnt[7]_i_4 
       (.I0(m_axi_DATA_C_AWVALID),
        .I1(m_axi_DATA_C_AWREADY),
        .I2(\m_axi_DATA_C_AWLEN[3] [1]),
        .I3(\m_axi_DATA_C_AWLEN[3] [0]),
        .I4(\m_axi_DATA_C_AWLEN[3] [3]),
        .I5(\m_axi_DATA_C_AWLEN[3] [2]),
        .O(\throttl_cnt_reg[7] ));
  FDRE wreq_handling_reg
       (.C(ap_clk),
        .CE(1'b1),
        .D(\bus_equal_gen.fifo_burst_n_34 ),
        .Q(wreq_handling_reg_n_2),
        .R(SR));
endmodule

(* ORIG_REF_NAME = "vector_multiplierbkb" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplierbkb
   (D,
    Q,
    \DATA_B_addr_read_reg_282_reg[31] ,
    \ap_CS_fsm_reg[8] ,
    ap_clk);
  output [31:0]D;
  input [31:0]Q;
  input [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  input \ap_CS_fsm_reg[8] ;
  input ap_clk;

  wire [31:0]D;
  wire [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  wire [31:0]Q;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_clk;

  accelerator_bd_vector_multiplier_0_0_vector_multiplierbkb_MulnS_0 vector_multiplierbkb_MulnS_0_U
       (.D(D),
        .\DATA_B_addr_read_reg_282_reg[31] (\DATA_B_addr_read_reg_282_reg[31] ),
        .Q(Q),
        .\ap_CS_fsm_reg[8] (\ap_CS_fsm_reg[8] ),
        .ap_clk(ap_clk));
endmodule

(* ORIG_REF_NAME = "vector_multiplierbkb_MulnS_0" *) 
module accelerator_bd_vector_multiplier_0_0_vector_multiplierbkb_MulnS_0
   (D,
    Q,
    \DATA_B_addr_read_reg_282_reg[31] ,
    \ap_CS_fsm_reg[8] ,
    ap_clk);
  output [31:0]D;
  input [31:0]Q;
  input [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  input \ap_CS_fsm_reg[8] ;
  input ap_clk;

  wire [31:0]D;
  (* RTL_KEEP = "true" *) wire [31:0]\DATA_B_addr_read_reg_282_reg[31] ;
  (* RTL_KEEP = "true" *) wire [31:0]Q;
  wire \ap_CS_fsm_reg[8] ;
  wire ap_clk;
  wire \p_reg[16]__0_n_2 ;
  wire p_reg__0_n_100;
  wire p_reg__0_n_101;
  wire p_reg__0_n_102;
  wire p_reg__0_n_103;
  wire p_reg__0_n_104;
  wire p_reg__0_n_105;
  wire p_reg__0_n_106;
  wire p_reg__0_n_107;
  wire p_reg__0_n_60;
  wire p_reg__0_n_61;
  wire p_reg__0_n_62;
  wire p_reg__0_n_63;
  wire p_reg__0_n_64;
  wire p_reg__0_n_65;
  wire p_reg__0_n_66;
  wire p_reg__0_n_67;
  wire p_reg__0_n_68;
  wire p_reg__0_n_69;
  wire p_reg__0_n_70;
  wire p_reg__0_n_71;
  wire p_reg__0_n_72;
  wire p_reg__0_n_73;
  wire p_reg__0_n_74;
  wire p_reg__0_n_75;
  wire p_reg__0_n_76;
  wire p_reg__0_n_77;
  wire p_reg__0_n_78;
  wire p_reg__0_n_79;
  wire p_reg__0_n_80;
  wire p_reg__0_n_81;
  wire p_reg__0_n_82;
  wire p_reg__0_n_83;
  wire p_reg__0_n_84;
  wire p_reg__0_n_85;
  wire p_reg__0_n_86;
  wire p_reg__0_n_87;
  wire p_reg__0_n_88;
  wire p_reg__0_n_89;
  wire p_reg__0_n_90;
  wire p_reg__0_n_91;
  wire p_reg__0_n_92;
  wire p_reg__0_n_93;
  wire p_reg__0_n_94;
  wire p_reg__0_n_95;
  wire p_reg__0_n_96;
  wire p_reg__0_n_97;
  wire p_reg__0_n_98;
  wire p_reg__0_n_99;
  wire tmp_product__0_n_100;
  wire tmp_product__0_n_101;
  wire tmp_product__0_n_102;
  wire tmp_product__0_n_103;
  wire tmp_product__0_n_104;
  wire tmp_product__0_n_105;
  wire tmp_product__0_n_106;
  wire tmp_product__0_n_107;
  wire tmp_product__0_n_108;
  wire tmp_product__0_n_109;
  wire tmp_product__0_n_110;
  wire tmp_product__0_n_111;
  wire tmp_product__0_n_112;
  wire tmp_product__0_n_113;
  wire tmp_product__0_n_114;
  wire tmp_product__0_n_115;
  wire tmp_product__0_n_116;
  wire tmp_product__0_n_117;
  wire tmp_product__0_n_118;
  wire tmp_product__0_n_119;
  wire tmp_product__0_n_120;
  wire tmp_product__0_n_121;
  wire tmp_product__0_n_122;
  wire tmp_product__0_n_123;
  wire tmp_product__0_n_124;
  wire tmp_product__0_n_125;
  wire tmp_product__0_n_126;
  wire tmp_product__0_n_127;
  wire tmp_product__0_n_128;
  wire tmp_product__0_n_129;
  wire tmp_product__0_n_130;
  wire tmp_product__0_n_131;
  wire tmp_product__0_n_132;
  wire tmp_product__0_n_133;
  wire tmp_product__0_n_134;
  wire tmp_product__0_n_135;
  wire tmp_product__0_n_136;
  wire tmp_product__0_n_137;
  wire tmp_product__0_n_138;
  wire tmp_product__0_n_139;
  wire tmp_product__0_n_140;
  wire tmp_product__0_n_141;
  wire tmp_product__0_n_142;
  wire tmp_product__0_n_143;
  wire tmp_product__0_n_144;
  wire tmp_product__0_n_145;
  wire tmp_product__0_n_146;
  wire tmp_product__0_n_147;
  wire tmp_product__0_n_148;
  wire tmp_product__0_n_149;
  wire tmp_product__0_n_150;
  wire tmp_product__0_n_151;
  wire tmp_product__0_n_152;
  wire tmp_product__0_n_153;
  wire tmp_product__0_n_154;
  wire tmp_product__0_n_155;
  wire tmp_product__0_n_26;
  wire tmp_product__0_n_27;
  wire tmp_product__0_n_28;
  wire tmp_product__0_n_29;
  wire tmp_product__0_n_30;
  wire tmp_product__0_n_31;
  wire tmp_product__0_n_32;
  wire tmp_product__0_n_33;
  wire tmp_product__0_n_34;
  wire tmp_product__0_n_35;
  wire tmp_product__0_n_36;
  wire tmp_product__0_n_37;
  wire tmp_product__0_n_38;
  wire tmp_product__0_n_39;
  wire tmp_product__0_n_40;
  wire tmp_product__0_n_41;
  wire tmp_product__0_n_42;
  wire tmp_product__0_n_43;
  wire tmp_product__0_n_44;
  wire tmp_product__0_n_45;
  wire tmp_product__0_n_46;
  wire tmp_product__0_n_47;
  wire tmp_product__0_n_48;
  wire tmp_product__0_n_49;
  wire tmp_product__0_n_50;
  wire tmp_product__0_n_51;
  wire tmp_product__0_n_52;
  wire tmp_product__0_n_53;
  wire tmp_product__0_n_54;
  wire tmp_product__0_n_55;
  wire tmp_product__0_n_60;
  wire tmp_product__0_n_61;
  wire tmp_product__0_n_62;
  wire tmp_product__0_n_63;
  wire tmp_product__0_n_64;
  wire tmp_product__0_n_65;
  wire tmp_product__0_n_66;
  wire tmp_product__0_n_67;
  wire tmp_product__0_n_68;
  wire tmp_product__0_n_69;
  wire tmp_product__0_n_70;
  wire tmp_product__0_n_71;
  wire tmp_product__0_n_72;
  wire tmp_product__0_n_73;
  wire tmp_product__0_n_74;
  wire tmp_product__0_n_75;
  wire tmp_product__0_n_76;
  wire tmp_product__0_n_77;
  wire tmp_product__0_n_78;
  wire tmp_product__0_n_79;
  wire tmp_product__0_n_80;
  wire tmp_product__0_n_81;
  wire tmp_product__0_n_82;
  wire tmp_product__0_n_83;
  wire tmp_product__0_n_84;
  wire tmp_product__0_n_85;
  wire tmp_product__0_n_86;
  wire tmp_product__0_n_87;
  wire tmp_product__0_n_88;
  wire tmp_product__0_n_89;
  wire tmp_product__0_n_90;
  wire tmp_product__0_n_91;
  wire tmp_product__0_n_92;
  wire tmp_product__0_n_93;
  wire tmp_product__0_n_94;
  wire tmp_product__0_n_95;
  wire tmp_product__0_n_96;
  wire tmp_product__0_n_97;
  wire tmp_product__0_n_98;
  wire tmp_product__0_n_99;
  wire tmp_product_n_100;
  wire tmp_product_n_101;
  wire tmp_product_n_102;
  wire tmp_product_n_103;
  wire tmp_product_n_104;
  wire tmp_product_n_105;
  wire tmp_product_n_106;
  wire tmp_product_n_107;
  wire tmp_product_n_108;
  wire tmp_product_n_109;
  wire tmp_product_n_110;
  wire tmp_product_n_111;
  wire tmp_product_n_112;
  wire tmp_product_n_113;
  wire tmp_product_n_114;
  wire tmp_product_n_115;
  wire tmp_product_n_116;
  wire tmp_product_n_117;
  wire tmp_product_n_118;
  wire tmp_product_n_119;
  wire tmp_product_n_120;
  wire tmp_product_n_121;
  wire tmp_product_n_122;
  wire tmp_product_n_123;
  wire tmp_product_n_124;
  wire tmp_product_n_125;
  wire tmp_product_n_126;
  wire tmp_product_n_127;
  wire tmp_product_n_128;
  wire tmp_product_n_129;
  wire tmp_product_n_130;
  wire tmp_product_n_131;
  wire tmp_product_n_132;
  wire tmp_product_n_133;
  wire tmp_product_n_134;
  wire tmp_product_n_135;
  wire tmp_product_n_136;
  wire tmp_product_n_137;
  wire tmp_product_n_138;
  wire tmp_product_n_139;
  wire tmp_product_n_140;
  wire tmp_product_n_141;
  wire tmp_product_n_142;
  wire tmp_product_n_143;
  wire tmp_product_n_144;
  wire tmp_product_n_145;
  wire tmp_product_n_146;
  wire tmp_product_n_147;
  wire tmp_product_n_148;
  wire tmp_product_n_149;
  wire tmp_product_n_150;
  wire tmp_product_n_151;
  wire tmp_product_n_152;
  wire tmp_product_n_153;
  wire tmp_product_n_154;
  wire tmp_product_n_155;
  wire tmp_product_n_60;
  wire tmp_product_n_61;
  wire tmp_product_n_62;
  wire tmp_product_n_63;
  wire tmp_product_n_64;
  wire tmp_product_n_65;
  wire tmp_product_n_66;
  wire tmp_product_n_67;
  wire tmp_product_n_68;
  wire tmp_product_n_69;
  wire tmp_product_n_70;
  wire tmp_product_n_71;
  wire tmp_product_n_72;
  wire tmp_product_n_73;
  wire tmp_product_n_74;
  wire tmp_product_n_75;
  wire tmp_product_n_76;
  wire tmp_product_n_77;
  wire tmp_product_n_78;
  wire tmp_product_n_79;
  wire tmp_product_n_80;
  wire tmp_product_n_81;
  wire tmp_product_n_82;
  wire tmp_product_n_83;
  wire tmp_product_n_84;
  wire tmp_product_n_85;
  wire tmp_product_n_86;
  wire tmp_product_n_87;
  wire tmp_product_n_88;
  wire tmp_product_n_89;
  wire tmp_product_n_90;
  wire tmp_product_n_91;
  wire tmp_product_n_92;
  wire tmp_product_n_93;
  wire tmp_product_n_94;
  wire tmp_product_n_95;
  wire tmp_product_n_96;
  wire tmp_product_n_97;
  wire tmp_product_n_98;
  wire tmp_product_n_99;
  wire \tmp_reg_287[19]_i_2_n_2 ;
  wire \tmp_reg_287[19]_i_3_n_2 ;
  wire \tmp_reg_287[19]_i_4_n_2 ;
  wire \tmp_reg_287[19]_i_5_n_2 ;
  wire \tmp_reg_287[23]_i_2_n_2 ;
  wire \tmp_reg_287[23]_i_3_n_2 ;
  wire \tmp_reg_287[23]_i_4_n_2 ;
  wire \tmp_reg_287[23]_i_5_n_2 ;
  wire \tmp_reg_287[27]_i_2_n_2 ;
  wire \tmp_reg_287[27]_i_3_n_2 ;
  wire \tmp_reg_287[27]_i_4_n_2 ;
  wire \tmp_reg_287[27]_i_5_n_2 ;
  wire \tmp_reg_287[31]_i_3_n_2 ;
  wire \tmp_reg_287[31]_i_4_n_2 ;
  wire \tmp_reg_287[31]_i_5_n_2 ;
  wire \tmp_reg_287[31]_i_6_n_2 ;
  wire \tmp_reg_287_reg[19]_i_1_n_2 ;
  wire \tmp_reg_287_reg[19]_i_1_n_3 ;
  wire \tmp_reg_287_reg[19]_i_1_n_4 ;
  wire \tmp_reg_287_reg[19]_i_1_n_5 ;
  wire \tmp_reg_287_reg[23]_i_1_n_2 ;
  wire \tmp_reg_287_reg[23]_i_1_n_3 ;
  wire \tmp_reg_287_reg[23]_i_1_n_4 ;
  wire \tmp_reg_287_reg[23]_i_1_n_5 ;
  wire \tmp_reg_287_reg[27]_i_1_n_2 ;
  wire \tmp_reg_287_reg[27]_i_1_n_3 ;
  wire \tmp_reg_287_reg[27]_i_1_n_4 ;
  wire \tmp_reg_287_reg[27]_i_1_n_5 ;
  wire \tmp_reg_287_reg[31]_i_2_n_3 ;
  wire \tmp_reg_287_reg[31]_i_2_n_4 ;
  wire \tmp_reg_287_reg[31]_i_2_n_5 ;
  wire NLW_p_reg__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_p_reg__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_p_reg__0_OVERFLOW_UNCONNECTED;
  wire NLW_p_reg__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_p_reg__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_p_reg__0_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_p_reg__0_ACOUT_UNCONNECTED;
  wire [17:0]NLW_p_reg__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_p_reg__0_CARRYOUT_UNCONNECTED;
  wire [47:0]NLW_p_reg__0_PCOUT_UNCONNECTED;
  wire NLW_tmp_product_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product_UNDERFLOW_UNCONNECTED;
  wire [29:0]NLW_tmp_product_ACOUT_UNCONNECTED;
  wire [17:0]NLW_tmp_product_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product_CARRYOUT_UNCONNECTED;
  wire NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED;
  wire NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED;
  wire NLW_tmp_product__0_OVERFLOW_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED;
  wire NLW_tmp_product__0_UNDERFLOW_UNCONNECTED;
  wire [17:0]NLW_tmp_product__0_BCOUT_UNCONNECTED;
  wire [3:0]NLW_tmp_product__0_CARRYOUT_UNCONNECTED;
  wire [3:3]\NLW_tmp_reg_287_reg[31]_i_2_CO_UNCONNECTED ;

  FDRE \p_reg[0]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_107),
        .Q(D[0]),
        .R(1'b0));
  FDRE \p_reg[10]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_97),
        .Q(D[10]),
        .R(1'b0));
  FDRE \p_reg[11]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_96),
        .Q(D[11]),
        .R(1'b0));
  FDRE \p_reg[12]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_95),
        .Q(D[12]),
        .R(1'b0));
  FDRE \p_reg[13]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_94),
        .Q(D[13]),
        .R(1'b0));
  FDRE \p_reg[14]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_93),
        .Q(D[14]),
        .R(1'b0));
  FDRE \p_reg[15]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_92),
        .Q(D[15]),
        .R(1'b0));
  FDRE \p_reg[16]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_91),
        .Q(\p_reg[16]__0_n_2 ),
        .R(1'b0));
  FDRE \p_reg[1]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_106),
        .Q(D[1]),
        .R(1'b0));
  FDRE \p_reg[2]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_105),
        .Q(D[2]),
        .R(1'b0));
  FDRE \p_reg[3]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_104),
        .Q(D[3]),
        .R(1'b0));
  FDRE \p_reg[4]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_103),
        .Q(D[4]),
        .R(1'b0));
  FDRE \p_reg[5]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_102),
        .Q(D[5]),
        .R(1'b0));
  FDRE \p_reg[6]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_101),
        .Q(D[6]),
        .R(1'b0));
  FDRE \p_reg[7]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_100),
        .Q(D[7]),
        .R(1'b0));
  FDRE \p_reg[8]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_99),
        .Q(D[8]),
        .R(1'b0));
  FDRE \p_reg[9]__0 
       (.C(ap_clk),
        .CE(\ap_CS_fsm_reg[8] ),
        .D(tmp_product__0_n_98),
        .Q(D[9]),
        .R(1'b0));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x15 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("CASCADE"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    p_reg__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACIN({tmp_product__0_n_26,tmp_product__0_n_27,tmp_product__0_n_28,tmp_product__0_n_29,tmp_product__0_n_30,tmp_product__0_n_31,tmp_product__0_n_32,tmp_product__0_n_33,tmp_product__0_n_34,tmp_product__0_n_35,tmp_product__0_n_36,tmp_product__0_n_37,tmp_product__0_n_38,tmp_product__0_n_39,tmp_product__0_n_40,tmp_product__0_n_41,tmp_product__0_n_42,tmp_product__0_n_43,tmp_product__0_n_44,tmp_product__0_n_45,tmp_product__0_n_46,tmp_product__0_n_47,tmp_product__0_n_48,tmp_product__0_n_49,tmp_product__0_n_50,tmp_product__0_n_51,tmp_product__0_n_52,tmp_product__0_n_53,tmp_product__0_n_54,tmp_product__0_n_55}),
        .ACOUT(NLW_p_reg__0_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({Q[31],Q[31],Q[31],Q[31:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_p_reg__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_p_reg__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_p_reg__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(\ap_CS_fsm_reg[8] ),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_p_reg__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b1,1'b0,1'b1,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_p_reg__0_OVERFLOW_UNCONNECTED),
        .P({p_reg__0_n_60,p_reg__0_n_61,p_reg__0_n_62,p_reg__0_n_63,p_reg__0_n_64,p_reg__0_n_65,p_reg__0_n_66,p_reg__0_n_67,p_reg__0_n_68,p_reg__0_n_69,p_reg__0_n_70,p_reg__0_n_71,p_reg__0_n_72,p_reg__0_n_73,p_reg__0_n_74,p_reg__0_n_75,p_reg__0_n_76,p_reg__0_n_77,p_reg__0_n_78,p_reg__0_n_79,p_reg__0_n_80,p_reg__0_n_81,p_reg__0_n_82,p_reg__0_n_83,p_reg__0_n_84,p_reg__0_n_85,p_reg__0_n_86,p_reg__0_n_87,p_reg__0_n_88,p_reg__0_n_89,p_reg__0_n_90,p_reg__0_n_91,p_reg__0_n_92,p_reg__0_n_93,p_reg__0_n_94,p_reg__0_n_95,p_reg__0_n_96,p_reg__0_n_97,p_reg__0_n_98,p_reg__0_n_99,p_reg__0_n_100,p_reg__0_n_101,p_reg__0_n_102,p_reg__0_n_103,p_reg__0_n_104,p_reg__0_n_105,p_reg__0_n_106,p_reg__0_n_107}),
        .PATTERNBDETECT(NLW_p_reg__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_p_reg__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153,tmp_product__0_n_154,tmp_product__0_n_155}),
        .PCOUT(NLW_p_reg__0_PCOUT_UNCONNECTED[47:0]),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_p_reg__0_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 15x18 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(1),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,Q[16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT(NLW_tmp_product_ACOUT_UNCONNECTED[29:0]),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({\DATA_B_addr_read_reg_282_reg[31] [31],\DATA_B_addr_read_reg_282_reg[31] [31],\DATA_B_addr_read_reg_282_reg[31] [31],\DATA_B_addr_read_reg_282_reg[31] [31:17]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(\ap_CS_fsm_reg[8] ),
        .CLK(ap_clk),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product_OVERFLOW_UNCONNECTED),
        .P({tmp_product_n_60,tmp_product_n_61,tmp_product_n_62,tmp_product_n_63,tmp_product_n_64,tmp_product_n_65,tmp_product_n_66,tmp_product_n_67,tmp_product_n_68,tmp_product_n_69,tmp_product_n_70,tmp_product_n_71,tmp_product_n_72,tmp_product_n_73,tmp_product_n_74,tmp_product_n_75,tmp_product_n_76,tmp_product_n_77,tmp_product_n_78,tmp_product_n_79,tmp_product_n_80,tmp_product_n_81,tmp_product_n_82,tmp_product_n_83,tmp_product_n_84,tmp_product_n_85,tmp_product_n_86,tmp_product_n_87,tmp_product_n_88,tmp_product_n_89,tmp_product_n_90,tmp_product_n_91,tmp_product_n_92,tmp_product_n_93,tmp_product_n_94,tmp_product_n_95,tmp_product_n_96,tmp_product_n_97,tmp_product_n_98,tmp_product_n_99,tmp_product_n_100,tmp_product_n_101,tmp_product_n_102,tmp_product_n_103,tmp_product_n_104,tmp_product_n_105,tmp_product_n_106,tmp_product_n_107}),
        .PATTERNBDETECT(NLW_tmp_product_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({tmp_product_n_108,tmp_product_n_109,tmp_product_n_110,tmp_product_n_111,tmp_product_n_112,tmp_product_n_113,tmp_product_n_114,tmp_product_n_115,tmp_product_n_116,tmp_product_n_117,tmp_product_n_118,tmp_product_n_119,tmp_product_n_120,tmp_product_n_121,tmp_product_n_122,tmp_product_n_123,tmp_product_n_124,tmp_product_n_125,tmp_product_n_126,tmp_product_n_127,tmp_product_n_128,tmp_product_n_129,tmp_product_n_130,tmp_product_n_131,tmp_product_n_132,tmp_product_n_133,tmp_product_n_134,tmp_product_n_135,tmp_product_n_136,tmp_product_n_137,tmp_product_n_138,tmp_product_n_139,tmp_product_n_140,tmp_product_n_141,tmp_product_n_142,tmp_product_n_143,tmp_product_n_144,tmp_product_n_145,tmp_product_n_146,tmp_product_n_147,tmp_product_n_148,tmp_product_n_149,tmp_product_n_150,tmp_product_n_151,tmp_product_n_152,tmp_product_n_153,tmp_product_n_154,tmp_product_n_155}),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_tmp_product_UNDERFLOW_UNCONNECTED));
  (* METHODOLOGY_DRC_VIOS = "{SYNTH-10 {cell *THIS*} {string 18x18 4}}" *) 
  DSP48E1 #(
    .ACASCREG(0),
    .ADREG(1),
    .ALUMODEREG(0),
    .AREG(0),
    .AUTORESET_PATDET("NO_RESET"),
    .A_INPUT("DIRECT"),
    .BCASCREG(0),
    .BREG(0),
    .B_INPUT("DIRECT"),
    .CARRYINREG(0),
    .CARRYINSELREG(0),
    .CREG(1),
    .DREG(1),
    .INMODEREG(0),
    .MASK(48'h3FFFFFFFFFFF),
    .MREG(0),
    .OPMODEREG(0),
    .PATTERN(48'h000000000000),
    .PREG(0),
    .SEL_MASK("MASK"),
    .SEL_PATTERN("PATTERN"),
    .USE_DPORT("FALSE"),
    .USE_MULT("MULTIPLY"),
    .USE_PATTERN_DETECT("NO_PATDET"),
    .USE_SIMD("ONE48")) 
    tmp_product__0
       (.A({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,\DATA_B_addr_read_reg_282_reg[31] [16:0]}),
        .ACIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .ACOUT({tmp_product__0_n_26,tmp_product__0_n_27,tmp_product__0_n_28,tmp_product__0_n_29,tmp_product__0_n_30,tmp_product__0_n_31,tmp_product__0_n_32,tmp_product__0_n_33,tmp_product__0_n_34,tmp_product__0_n_35,tmp_product__0_n_36,tmp_product__0_n_37,tmp_product__0_n_38,tmp_product__0_n_39,tmp_product__0_n_40,tmp_product__0_n_41,tmp_product__0_n_42,tmp_product__0_n_43,tmp_product__0_n_44,tmp_product__0_n_45,tmp_product__0_n_46,tmp_product__0_n_47,tmp_product__0_n_48,tmp_product__0_n_49,tmp_product__0_n_50,tmp_product__0_n_51,tmp_product__0_n_52,tmp_product__0_n_53,tmp_product__0_n_54,tmp_product__0_n_55}),
        .ALUMODE({1'b0,1'b0,1'b0,1'b0}),
        .B({1'b0,Q[16:0]}),
        .BCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .BCOUT(NLW_tmp_product__0_BCOUT_UNCONNECTED[17:0]),
        .C({1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1,1'b1}),
        .CARRYCASCIN(1'b0),
        .CARRYCASCOUT(NLW_tmp_product__0_CARRYCASCOUT_UNCONNECTED),
        .CARRYIN(1'b0),
        .CARRYINSEL({1'b0,1'b0,1'b0}),
        .CARRYOUT(NLW_tmp_product__0_CARRYOUT_UNCONNECTED[3:0]),
        .CEA1(1'b0),
        .CEA2(1'b0),
        .CEAD(1'b0),
        .CEALUMODE(1'b0),
        .CEB1(1'b0),
        .CEB2(1'b0),
        .CEC(1'b0),
        .CECARRYIN(1'b0),
        .CECTRL(1'b0),
        .CED(1'b0),
        .CEINMODE(1'b0),
        .CEM(1'b0),
        .CEP(1'b0),
        .CLK(1'b0),
        .D({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .INMODE({1'b0,1'b0,1'b0,1'b0,1'b0}),
        .MULTSIGNIN(1'b0),
        .MULTSIGNOUT(NLW_tmp_product__0_MULTSIGNOUT_UNCONNECTED),
        .OPMODE({1'b0,1'b0,1'b0,1'b0,1'b1,1'b0,1'b1}),
        .OVERFLOW(NLW_tmp_product__0_OVERFLOW_UNCONNECTED),
        .P({tmp_product__0_n_60,tmp_product__0_n_61,tmp_product__0_n_62,tmp_product__0_n_63,tmp_product__0_n_64,tmp_product__0_n_65,tmp_product__0_n_66,tmp_product__0_n_67,tmp_product__0_n_68,tmp_product__0_n_69,tmp_product__0_n_70,tmp_product__0_n_71,tmp_product__0_n_72,tmp_product__0_n_73,tmp_product__0_n_74,tmp_product__0_n_75,tmp_product__0_n_76,tmp_product__0_n_77,tmp_product__0_n_78,tmp_product__0_n_79,tmp_product__0_n_80,tmp_product__0_n_81,tmp_product__0_n_82,tmp_product__0_n_83,tmp_product__0_n_84,tmp_product__0_n_85,tmp_product__0_n_86,tmp_product__0_n_87,tmp_product__0_n_88,tmp_product__0_n_89,tmp_product__0_n_90,tmp_product__0_n_91,tmp_product__0_n_92,tmp_product__0_n_93,tmp_product__0_n_94,tmp_product__0_n_95,tmp_product__0_n_96,tmp_product__0_n_97,tmp_product__0_n_98,tmp_product__0_n_99,tmp_product__0_n_100,tmp_product__0_n_101,tmp_product__0_n_102,tmp_product__0_n_103,tmp_product__0_n_104,tmp_product__0_n_105,tmp_product__0_n_106,tmp_product__0_n_107}),
        .PATTERNBDETECT(NLW_tmp_product__0_PATTERNBDETECT_UNCONNECTED),
        .PATTERNDETECT(NLW_tmp_product__0_PATTERNDETECT_UNCONNECTED),
        .PCIN({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .PCOUT({tmp_product__0_n_108,tmp_product__0_n_109,tmp_product__0_n_110,tmp_product__0_n_111,tmp_product__0_n_112,tmp_product__0_n_113,tmp_product__0_n_114,tmp_product__0_n_115,tmp_product__0_n_116,tmp_product__0_n_117,tmp_product__0_n_118,tmp_product__0_n_119,tmp_product__0_n_120,tmp_product__0_n_121,tmp_product__0_n_122,tmp_product__0_n_123,tmp_product__0_n_124,tmp_product__0_n_125,tmp_product__0_n_126,tmp_product__0_n_127,tmp_product__0_n_128,tmp_product__0_n_129,tmp_product__0_n_130,tmp_product__0_n_131,tmp_product__0_n_132,tmp_product__0_n_133,tmp_product__0_n_134,tmp_product__0_n_135,tmp_product__0_n_136,tmp_product__0_n_137,tmp_product__0_n_138,tmp_product__0_n_139,tmp_product__0_n_140,tmp_product__0_n_141,tmp_product__0_n_142,tmp_product__0_n_143,tmp_product__0_n_144,tmp_product__0_n_145,tmp_product__0_n_146,tmp_product__0_n_147,tmp_product__0_n_148,tmp_product__0_n_149,tmp_product__0_n_150,tmp_product__0_n_151,tmp_product__0_n_152,tmp_product__0_n_153,tmp_product__0_n_154,tmp_product__0_n_155}),
        .RSTA(1'b0),
        .RSTALLCARRYIN(1'b0),
        .RSTALUMODE(1'b0),
        .RSTB(1'b0),
        .RSTC(1'b0),
        .RSTCTRL(1'b0),
        .RSTD(1'b0),
        .RSTINMODE(1'b0),
        .RSTM(1'b0),
        .RSTP(1'b0),
        .UNDERFLOW(NLW_tmp_product__0_UNDERFLOW_UNCONNECTED));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[19]_i_2 
       (.I0(p_reg__0_n_105),
        .I1(tmp_product_n_105),
        .O(\tmp_reg_287[19]_i_2_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[19]_i_3 
       (.I0(p_reg__0_n_106),
        .I1(tmp_product_n_106),
        .O(\tmp_reg_287[19]_i_3_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[19]_i_4 
       (.I0(p_reg__0_n_107),
        .I1(tmp_product_n_107),
        .O(\tmp_reg_287[19]_i_4_n_2 ));
  LUT1 #(
    .INIT(2'h2)) 
    \tmp_reg_287[19]_i_5 
       (.I0(\p_reg[16]__0_n_2 ),
        .O(\tmp_reg_287[19]_i_5_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[23]_i_2 
       (.I0(p_reg__0_n_101),
        .I1(tmp_product_n_101),
        .O(\tmp_reg_287[23]_i_2_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[23]_i_3 
       (.I0(p_reg__0_n_102),
        .I1(tmp_product_n_102),
        .O(\tmp_reg_287[23]_i_3_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[23]_i_4 
       (.I0(p_reg__0_n_103),
        .I1(tmp_product_n_103),
        .O(\tmp_reg_287[23]_i_4_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[23]_i_5 
       (.I0(p_reg__0_n_104),
        .I1(tmp_product_n_104),
        .O(\tmp_reg_287[23]_i_5_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[27]_i_2 
       (.I0(p_reg__0_n_97),
        .I1(tmp_product_n_97),
        .O(\tmp_reg_287[27]_i_2_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[27]_i_3 
       (.I0(p_reg__0_n_98),
        .I1(tmp_product_n_98),
        .O(\tmp_reg_287[27]_i_3_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[27]_i_4 
       (.I0(p_reg__0_n_99),
        .I1(tmp_product_n_99),
        .O(\tmp_reg_287[27]_i_4_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[27]_i_5 
       (.I0(p_reg__0_n_100),
        .I1(tmp_product_n_100),
        .O(\tmp_reg_287[27]_i_5_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[31]_i_3 
       (.I0(p_reg__0_n_93),
        .I1(tmp_product_n_93),
        .O(\tmp_reg_287[31]_i_3_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[31]_i_4 
       (.I0(p_reg__0_n_94),
        .I1(tmp_product_n_94),
        .O(\tmp_reg_287[31]_i_4_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[31]_i_5 
       (.I0(p_reg__0_n_95),
        .I1(tmp_product_n_95),
        .O(\tmp_reg_287[31]_i_5_n_2 ));
  LUT2 #(
    .INIT(4'h6)) 
    \tmp_reg_287[31]_i_6 
       (.I0(p_reg__0_n_96),
        .I1(tmp_product_n_96),
        .O(\tmp_reg_287[31]_i_6_n_2 ));
  CARRY4 \tmp_reg_287_reg[19]_i_1 
       (.CI(1'b0),
        .CO({\tmp_reg_287_reg[19]_i_1_n_2 ,\tmp_reg_287_reg[19]_i_1_n_3 ,\tmp_reg_287_reg[19]_i_1_n_4 ,\tmp_reg_287_reg[19]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({p_reg__0_n_105,p_reg__0_n_106,p_reg__0_n_107,1'b0}),
        .O(D[19:16]),
        .S({\tmp_reg_287[19]_i_2_n_2 ,\tmp_reg_287[19]_i_3_n_2 ,\tmp_reg_287[19]_i_4_n_2 ,\tmp_reg_287[19]_i_5_n_2 }));
  CARRY4 \tmp_reg_287_reg[23]_i_1 
       (.CI(\tmp_reg_287_reg[19]_i_1_n_2 ),
        .CO({\tmp_reg_287_reg[23]_i_1_n_2 ,\tmp_reg_287_reg[23]_i_1_n_3 ,\tmp_reg_287_reg[23]_i_1_n_4 ,\tmp_reg_287_reg[23]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({p_reg__0_n_101,p_reg__0_n_102,p_reg__0_n_103,p_reg__0_n_104}),
        .O(D[23:20]),
        .S({\tmp_reg_287[23]_i_2_n_2 ,\tmp_reg_287[23]_i_3_n_2 ,\tmp_reg_287[23]_i_4_n_2 ,\tmp_reg_287[23]_i_5_n_2 }));
  CARRY4 \tmp_reg_287_reg[27]_i_1 
       (.CI(\tmp_reg_287_reg[23]_i_1_n_2 ),
        .CO({\tmp_reg_287_reg[27]_i_1_n_2 ,\tmp_reg_287_reg[27]_i_1_n_3 ,\tmp_reg_287_reg[27]_i_1_n_4 ,\tmp_reg_287_reg[27]_i_1_n_5 }),
        .CYINIT(1'b0),
        .DI({p_reg__0_n_97,p_reg__0_n_98,p_reg__0_n_99,p_reg__0_n_100}),
        .O(D[27:24]),
        .S({\tmp_reg_287[27]_i_2_n_2 ,\tmp_reg_287[27]_i_3_n_2 ,\tmp_reg_287[27]_i_4_n_2 ,\tmp_reg_287[27]_i_5_n_2 }));
  CARRY4 \tmp_reg_287_reg[31]_i_2 
       (.CI(\tmp_reg_287_reg[27]_i_1_n_2 ),
        .CO({\NLW_tmp_reg_287_reg[31]_i_2_CO_UNCONNECTED [3],\tmp_reg_287_reg[31]_i_2_n_3 ,\tmp_reg_287_reg[31]_i_2_n_4 ,\tmp_reg_287_reg[31]_i_2_n_5 }),
        .CYINIT(1'b0),
        .DI({1'b0,p_reg__0_n_94,p_reg__0_n_95,p_reg__0_n_96}),
        .O(D[31:28]),
        .S({\tmp_reg_287[31]_i_3_n_2 ,\tmp_reg_287[31]_i_4_n_2 ,\tmp_reg_287[31]_i_5_n_2 ,\tmp_reg_287[31]_i_6_n_2 }));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
