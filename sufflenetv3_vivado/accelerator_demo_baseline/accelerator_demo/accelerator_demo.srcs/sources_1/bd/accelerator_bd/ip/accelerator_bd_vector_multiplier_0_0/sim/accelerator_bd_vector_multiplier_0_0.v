// (c) Copyright 1995-2017 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.


// IP VLNV: xilinx.com:hls:vector_multiplier:1.0
// IP Revision: 1710162333

`timescale 1ns/1ps

(* DowngradeIPIdentifiedWarnings = "yes" *)
module accelerator_bd_vector_multiplier_0_0 (
  s_axi_CTL_AWADDR,
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
  m_axi_DATA_C_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWADDR" *)
input wire [5 : 0] s_axi_CTL_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWVALID" *)
input wire s_axi_CTL_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWREADY" *)
output wire s_axi_CTL_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WDATA" *)
input wire [31 : 0] s_axi_CTL_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WSTRB" *)
input wire [3 : 0] s_axi_CTL_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WVALID" *)
input wire s_axi_CTL_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL WREADY" *)
output wire s_axi_CTL_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL BRESP" *)
output wire [1 : 0] s_axi_CTL_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL BVALID" *)
output wire s_axi_CTL_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL BREADY" *)
input wire s_axi_CTL_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL ARADDR" *)
input wire [5 : 0] s_axi_CTL_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL ARVALID" *)
input wire s_axi_CTL_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL ARREADY" *)
output wire s_axi_CTL_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RDATA" *)
output wire [31 : 0] s_axi_CTL_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RRESP" *)
output wire [1 : 0] s_axi_CTL_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RVALID" *)
output wire s_axi_CTL_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL RREADY" *)
input wire s_axi_CTL_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 ap_clk CLK" *)
input wire ap_clk;
(* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 ap_rst_n RST" *)
input wire ap_rst_n;
(* X_INTERFACE_INFO = "xilinx.com:signal:interrupt:1.0 interrupt INTERRUPT" *)
output wire interrupt;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWADDR" *)
output wire [31 : 0] m_axi_DATA_A_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWLEN" *)
output wire [7 : 0] m_axi_DATA_A_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWSIZE" *)
output wire [2 : 0] m_axi_DATA_A_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWBURST" *)
output wire [1 : 0] m_axi_DATA_A_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWLOCK" *)
output wire [1 : 0] m_axi_DATA_A_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWREGION" *)
output wire [3 : 0] m_axi_DATA_A_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWCACHE" *)
output wire [3 : 0] m_axi_DATA_A_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWPROT" *)
output wire [2 : 0] m_axi_DATA_A_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWQOS" *)
output wire [3 : 0] m_axi_DATA_A_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWVALID" *)
output wire m_axi_DATA_A_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A AWREADY" *)
input wire m_axi_DATA_A_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WDATA" *)
output wire [31 : 0] m_axi_DATA_A_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WSTRB" *)
output wire [3 : 0] m_axi_DATA_A_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WLAST" *)
output wire m_axi_DATA_A_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WVALID" *)
output wire m_axi_DATA_A_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A WREADY" *)
input wire m_axi_DATA_A_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A BRESP" *)
input wire [1 : 0] m_axi_DATA_A_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A BVALID" *)
input wire m_axi_DATA_A_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A BREADY" *)
output wire m_axi_DATA_A_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARADDR" *)
output wire [31 : 0] m_axi_DATA_A_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARLEN" *)
output wire [7 : 0] m_axi_DATA_A_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARSIZE" *)
output wire [2 : 0] m_axi_DATA_A_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARBURST" *)
output wire [1 : 0] m_axi_DATA_A_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARLOCK" *)
output wire [1 : 0] m_axi_DATA_A_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARREGION" *)
output wire [3 : 0] m_axi_DATA_A_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARCACHE" *)
output wire [3 : 0] m_axi_DATA_A_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARPROT" *)
output wire [2 : 0] m_axi_DATA_A_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARQOS" *)
output wire [3 : 0] m_axi_DATA_A_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARVALID" *)
output wire m_axi_DATA_A_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A ARREADY" *)
input wire m_axi_DATA_A_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RDATA" *)
input wire [31 : 0] m_axi_DATA_A_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RRESP" *)
input wire [1 : 0] m_axi_DATA_A_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RLAST" *)
input wire m_axi_DATA_A_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RVALID" *)
input wire m_axi_DATA_A_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_A RREADY" *)
output wire m_axi_DATA_A_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWADDR" *)
output wire [31 : 0] m_axi_DATA_B_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWLEN" *)
output wire [7 : 0] m_axi_DATA_B_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWSIZE" *)
output wire [2 : 0] m_axi_DATA_B_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWBURST" *)
output wire [1 : 0] m_axi_DATA_B_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWLOCK" *)
output wire [1 : 0] m_axi_DATA_B_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWREGION" *)
output wire [3 : 0] m_axi_DATA_B_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWCACHE" *)
output wire [3 : 0] m_axi_DATA_B_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWPROT" *)
output wire [2 : 0] m_axi_DATA_B_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWQOS" *)
output wire [3 : 0] m_axi_DATA_B_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWVALID" *)
output wire m_axi_DATA_B_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B AWREADY" *)
input wire m_axi_DATA_B_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WDATA" *)
output wire [31 : 0] m_axi_DATA_B_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WSTRB" *)
output wire [3 : 0] m_axi_DATA_B_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WLAST" *)
output wire m_axi_DATA_B_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WVALID" *)
output wire m_axi_DATA_B_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B WREADY" *)
input wire m_axi_DATA_B_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B BRESP" *)
input wire [1 : 0] m_axi_DATA_B_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B BVALID" *)
input wire m_axi_DATA_B_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B BREADY" *)
output wire m_axi_DATA_B_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARADDR" *)
output wire [31 : 0] m_axi_DATA_B_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARLEN" *)
output wire [7 : 0] m_axi_DATA_B_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARSIZE" *)
output wire [2 : 0] m_axi_DATA_B_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARBURST" *)
output wire [1 : 0] m_axi_DATA_B_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARLOCK" *)
output wire [1 : 0] m_axi_DATA_B_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARREGION" *)
output wire [3 : 0] m_axi_DATA_B_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARCACHE" *)
output wire [3 : 0] m_axi_DATA_B_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARPROT" *)
output wire [2 : 0] m_axi_DATA_B_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARQOS" *)
output wire [3 : 0] m_axi_DATA_B_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARVALID" *)
output wire m_axi_DATA_B_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B ARREADY" *)
input wire m_axi_DATA_B_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RDATA" *)
input wire [31 : 0] m_axi_DATA_B_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RRESP" *)
input wire [1 : 0] m_axi_DATA_B_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RLAST" *)
input wire m_axi_DATA_B_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RVALID" *)
input wire m_axi_DATA_B_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_B RREADY" *)
output wire m_axi_DATA_B_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWADDR" *)
output wire [31 : 0] m_axi_DATA_C_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWLEN" *)
output wire [7 : 0] m_axi_DATA_C_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWSIZE" *)
output wire [2 : 0] m_axi_DATA_C_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWBURST" *)
output wire [1 : 0] m_axi_DATA_C_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWLOCK" *)
output wire [1 : 0] m_axi_DATA_C_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWREGION" *)
output wire [3 : 0] m_axi_DATA_C_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWCACHE" *)
output wire [3 : 0] m_axi_DATA_C_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWPROT" *)
output wire [2 : 0] m_axi_DATA_C_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWQOS" *)
output wire [3 : 0] m_axi_DATA_C_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWVALID" *)
output wire m_axi_DATA_C_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C AWREADY" *)
input wire m_axi_DATA_C_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WDATA" *)
output wire [31 : 0] m_axi_DATA_C_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WSTRB" *)
output wire [3 : 0] m_axi_DATA_C_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WLAST" *)
output wire m_axi_DATA_C_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WVALID" *)
output wire m_axi_DATA_C_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C WREADY" *)
input wire m_axi_DATA_C_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C BRESP" *)
input wire [1 : 0] m_axi_DATA_C_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C BVALID" *)
input wire m_axi_DATA_C_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C BREADY" *)
output wire m_axi_DATA_C_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARADDR" *)
output wire [31 : 0] m_axi_DATA_C_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARLEN" *)
output wire [7 : 0] m_axi_DATA_C_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARSIZE" *)
output wire [2 : 0] m_axi_DATA_C_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARBURST" *)
output wire [1 : 0] m_axi_DATA_C_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARLOCK" *)
output wire [1 : 0] m_axi_DATA_C_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARREGION" *)
output wire [3 : 0] m_axi_DATA_C_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARCACHE" *)
output wire [3 : 0] m_axi_DATA_C_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARPROT" *)
output wire [2 : 0] m_axi_DATA_C_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARQOS" *)
output wire [3 : 0] m_axi_DATA_C_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARVALID" *)
output wire m_axi_DATA_C_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C ARREADY" *)
input wire m_axi_DATA_C_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RDATA" *)
input wire [31 : 0] m_axi_DATA_C_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RRESP" *)
input wire [1 : 0] m_axi_DATA_C_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RLAST" *)
input wire m_axi_DATA_C_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RVALID" *)
input wire m_axi_DATA_C_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_C RREADY" *)
output wire m_axi_DATA_C_RREADY;

  vector_multiplier #(
    .C_S_AXI_CTL_ADDR_WIDTH(6),
    .C_S_AXI_CTL_DATA_WIDTH(32),
    .C_M_AXI_DATA_A_ID_WIDTH(1),
    .C_M_AXI_DATA_A_ADDR_WIDTH(32),
    .C_M_AXI_DATA_A_DATA_WIDTH(32),
    .C_M_AXI_DATA_A_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_A_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_A_WUSER_WIDTH(1),
    .C_M_AXI_DATA_A_RUSER_WIDTH(1),
    .C_M_AXI_DATA_A_BUSER_WIDTH(1),
    .C_M_AXI_DATA_A_USER_VALUE('H00000000),
    .C_M_AXI_DATA_A_PROT_VALUE('B000),
    .C_M_AXI_DATA_A_CACHE_VALUE('B0011),
    .C_M_AXI_DATA_B_ID_WIDTH(1),
    .C_M_AXI_DATA_B_ADDR_WIDTH(32),
    .C_M_AXI_DATA_B_DATA_WIDTH(32),
    .C_M_AXI_DATA_B_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_B_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_B_WUSER_WIDTH(1),
    .C_M_AXI_DATA_B_RUSER_WIDTH(1),
    .C_M_AXI_DATA_B_BUSER_WIDTH(1),
    .C_M_AXI_DATA_B_USER_VALUE('H00000000),
    .C_M_AXI_DATA_B_PROT_VALUE('B000),
    .C_M_AXI_DATA_B_CACHE_VALUE('B0011),
    .C_M_AXI_DATA_C_ID_WIDTH(1),
    .C_M_AXI_DATA_C_ADDR_WIDTH(32),
    .C_M_AXI_DATA_C_DATA_WIDTH(32),
    .C_M_AXI_DATA_C_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_C_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_C_WUSER_WIDTH(1),
    .C_M_AXI_DATA_C_RUSER_WIDTH(1),
    .C_M_AXI_DATA_C_BUSER_WIDTH(1),
    .C_M_AXI_DATA_C_USER_VALUE('H00000000),
    .C_M_AXI_DATA_C_PROT_VALUE('B000),
    .C_M_AXI_DATA_C_CACHE_VALUE('B0011)
  ) inst (
    .s_axi_CTL_AWADDR(s_axi_CTL_AWADDR),
    .s_axi_CTL_AWVALID(s_axi_CTL_AWVALID),
    .s_axi_CTL_AWREADY(s_axi_CTL_AWREADY),
    .s_axi_CTL_WDATA(s_axi_CTL_WDATA),
    .s_axi_CTL_WSTRB(s_axi_CTL_WSTRB),
    .s_axi_CTL_WVALID(s_axi_CTL_WVALID),
    .s_axi_CTL_WREADY(s_axi_CTL_WREADY),
    .s_axi_CTL_BRESP(s_axi_CTL_BRESP),
    .s_axi_CTL_BVALID(s_axi_CTL_BVALID),
    .s_axi_CTL_BREADY(s_axi_CTL_BREADY),
    .s_axi_CTL_ARADDR(s_axi_CTL_ARADDR),
    .s_axi_CTL_ARVALID(s_axi_CTL_ARVALID),
    .s_axi_CTL_ARREADY(s_axi_CTL_ARREADY),
    .s_axi_CTL_RDATA(s_axi_CTL_RDATA),
    .s_axi_CTL_RRESP(s_axi_CTL_RRESP),
    .s_axi_CTL_RVALID(s_axi_CTL_RVALID),
    .s_axi_CTL_RREADY(s_axi_CTL_RREADY),
    .ap_clk(ap_clk),
    .ap_rst_n(ap_rst_n),
    .interrupt(interrupt),
    .m_axi_DATA_A_AWID(),
    .m_axi_DATA_A_AWADDR(m_axi_DATA_A_AWADDR),
    .m_axi_DATA_A_AWLEN(m_axi_DATA_A_AWLEN),
    .m_axi_DATA_A_AWSIZE(m_axi_DATA_A_AWSIZE),
    .m_axi_DATA_A_AWBURST(m_axi_DATA_A_AWBURST),
    .m_axi_DATA_A_AWLOCK(m_axi_DATA_A_AWLOCK),
    .m_axi_DATA_A_AWREGION(m_axi_DATA_A_AWREGION),
    .m_axi_DATA_A_AWCACHE(m_axi_DATA_A_AWCACHE),
    .m_axi_DATA_A_AWPROT(m_axi_DATA_A_AWPROT),
    .m_axi_DATA_A_AWQOS(m_axi_DATA_A_AWQOS),
    .m_axi_DATA_A_AWUSER(),
    .m_axi_DATA_A_AWVALID(m_axi_DATA_A_AWVALID),
    .m_axi_DATA_A_AWREADY(m_axi_DATA_A_AWREADY),
    .m_axi_DATA_A_WID(),
    .m_axi_DATA_A_WDATA(m_axi_DATA_A_WDATA),
    .m_axi_DATA_A_WSTRB(m_axi_DATA_A_WSTRB),
    .m_axi_DATA_A_WLAST(m_axi_DATA_A_WLAST),
    .m_axi_DATA_A_WUSER(),
    .m_axi_DATA_A_WVALID(m_axi_DATA_A_WVALID),
    .m_axi_DATA_A_WREADY(m_axi_DATA_A_WREADY),
    .m_axi_DATA_A_BID(1'B0),
    .m_axi_DATA_A_BRESP(m_axi_DATA_A_BRESP),
    .m_axi_DATA_A_BUSER(1'B0),
    .m_axi_DATA_A_BVALID(m_axi_DATA_A_BVALID),
    .m_axi_DATA_A_BREADY(m_axi_DATA_A_BREADY),
    .m_axi_DATA_A_ARID(),
    .m_axi_DATA_A_ARADDR(m_axi_DATA_A_ARADDR),
    .m_axi_DATA_A_ARLEN(m_axi_DATA_A_ARLEN),
    .m_axi_DATA_A_ARSIZE(m_axi_DATA_A_ARSIZE),
    .m_axi_DATA_A_ARBURST(m_axi_DATA_A_ARBURST),
    .m_axi_DATA_A_ARLOCK(m_axi_DATA_A_ARLOCK),
    .m_axi_DATA_A_ARREGION(m_axi_DATA_A_ARREGION),
    .m_axi_DATA_A_ARCACHE(m_axi_DATA_A_ARCACHE),
    .m_axi_DATA_A_ARPROT(m_axi_DATA_A_ARPROT),
    .m_axi_DATA_A_ARQOS(m_axi_DATA_A_ARQOS),
    .m_axi_DATA_A_ARUSER(),
    .m_axi_DATA_A_ARVALID(m_axi_DATA_A_ARVALID),
    .m_axi_DATA_A_ARREADY(m_axi_DATA_A_ARREADY),
    .m_axi_DATA_A_RID(1'B0),
    .m_axi_DATA_A_RDATA(m_axi_DATA_A_RDATA),
    .m_axi_DATA_A_RRESP(m_axi_DATA_A_RRESP),
    .m_axi_DATA_A_RLAST(m_axi_DATA_A_RLAST),
    .m_axi_DATA_A_RUSER(1'B0),
    .m_axi_DATA_A_RVALID(m_axi_DATA_A_RVALID),
    .m_axi_DATA_A_RREADY(m_axi_DATA_A_RREADY),
    .m_axi_DATA_B_AWID(),
    .m_axi_DATA_B_AWADDR(m_axi_DATA_B_AWADDR),
    .m_axi_DATA_B_AWLEN(m_axi_DATA_B_AWLEN),
    .m_axi_DATA_B_AWSIZE(m_axi_DATA_B_AWSIZE),
    .m_axi_DATA_B_AWBURST(m_axi_DATA_B_AWBURST),
    .m_axi_DATA_B_AWLOCK(m_axi_DATA_B_AWLOCK),
    .m_axi_DATA_B_AWREGION(m_axi_DATA_B_AWREGION),
    .m_axi_DATA_B_AWCACHE(m_axi_DATA_B_AWCACHE),
    .m_axi_DATA_B_AWPROT(m_axi_DATA_B_AWPROT),
    .m_axi_DATA_B_AWQOS(m_axi_DATA_B_AWQOS),
    .m_axi_DATA_B_AWUSER(),
    .m_axi_DATA_B_AWVALID(m_axi_DATA_B_AWVALID),
    .m_axi_DATA_B_AWREADY(m_axi_DATA_B_AWREADY),
    .m_axi_DATA_B_WID(),
    .m_axi_DATA_B_WDATA(m_axi_DATA_B_WDATA),
    .m_axi_DATA_B_WSTRB(m_axi_DATA_B_WSTRB),
    .m_axi_DATA_B_WLAST(m_axi_DATA_B_WLAST),
    .m_axi_DATA_B_WUSER(),
    .m_axi_DATA_B_WVALID(m_axi_DATA_B_WVALID),
    .m_axi_DATA_B_WREADY(m_axi_DATA_B_WREADY),
    .m_axi_DATA_B_BID(1'B0),
    .m_axi_DATA_B_BRESP(m_axi_DATA_B_BRESP),
    .m_axi_DATA_B_BUSER(1'B0),
    .m_axi_DATA_B_BVALID(m_axi_DATA_B_BVALID),
    .m_axi_DATA_B_BREADY(m_axi_DATA_B_BREADY),
    .m_axi_DATA_B_ARID(),
    .m_axi_DATA_B_ARADDR(m_axi_DATA_B_ARADDR),
    .m_axi_DATA_B_ARLEN(m_axi_DATA_B_ARLEN),
    .m_axi_DATA_B_ARSIZE(m_axi_DATA_B_ARSIZE),
    .m_axi_DATA_B_ARBURST(m_axi_DATA_B_ARBURST),
    .m_axi_DATA_B_ARLOCK(m_axi_DATA_B_ARLOCK),
    .m_axi_DATA_B_ARREGION(m_axi_DATA_B_ARREGION),
    .m_axi_DATA_B_ARCACHE(m_axi_DATA_B_ARCACHE),
    .m_axi_DATA_B_ARPROT(m_axi_DATA_B_ARPROT),
    .m_axi_DATA_B_ARQOS(m_axi_DATA_B_ARQOS),
    .m_axi_DATA_B_ARUSER(),
    .m_axi_DATA_B_ARVALID(m_axi_DATA_B_ARVALID),
    .m_axi_DATA_B_ARREADY(m_axi_DATA_B_ARREADY),
    .m_axi_DATA_B_RID(1'B0),
    .m_axi_DATA_B_RDATA(m_axi_DATA_B_RDATA),
    .m_axi_DATA_B_RRESP(m_axi_DATA_B_RRESP),
    .m_axi_DATA_B_RLAST(m_axi_DATA_B_RLAST),
    .m_axi_DATA_B_RUSER(1'B0),
    .m_axi_DATA_B_RVALID(m_axi_DATA_B_RVALID),
    .m_axi_DATA_B_RREADY(m_axi_DATA_B_RREADY),
    .m_axi_DATA_C_AWID(),
    .m_axi_DATA_C_AWADDR(m_axi_DATA_C_AWADDR),
    .m_axi_DATA_C_AWLEN(m_axi_DATA_C_AWLEN),
    .m_axi_DATA_C_AWSIZE(m_axi_DATA_C_AWSIZE),
    .m_axi_DATA_C_AWBURST(m_axi_DATA_C_AWBURST),
    .m_axi_DATA_C_AWLOCK(m_axi_DATA_C_AWLOCK),
    .m_axi_DATA_C_AWREGION(m_axi_DATA_C_AWREGION),
    .m_axi_DATA_C_AWCACHE(m_axi_DATA_C_AWCACHE),
    .m_axi_DATA_C_AWPROT(m_axi_DATA_C_AWPROT),
    .m_axi_DATA_C_AWQOS(m_axi_DATA_C_AWQOS),
    .m_axi_DATA_C_AWUSER(),
    .m_axi_DATA_C_AWVALID(m_axi_DATA_C_AWVALID),
    .m_axi_DATA_C_AWREADY(m_axi_DATA_C_AWREADY),
    .m_axi_DATA_C_WID(),
    .m_axi_DATA_C_WDATA(m_axi_DATA_C_WDATA),
    .m_axi_DATA_C_WSTRB(m_axi_DATA_C_WSTRB),
    .m_axi_DATA_C_WLAST(m_axi_DATA_C_WLAST),
    .m_axi_DATA_C_WUSER(),
    .m_axi_DATA_C_WVALID(m_axi_DATA_C_WVALID),
    .m_axi_DATA_C_WREADY(m_axi_DATA_C_WREADY),
    .m_axi_DATA_C_BID(1'B0),
    .m_axi_DATA_C_BRESP(m_axi_DATA_C_BRESP),
    .m_axi_DATA_C_BUSER(1'B0),
    .m_axi_DATA_C_BVALID(m_axi_DATA_C_BVALID),
    .m_axi_DATA_C_BREADY(m_axi_DATA_C_BREADY),
    .m_axi_DATA_C_ARID(),
    .m_axi_DATA_C_ARADDR(m_axi_DATA_C_ARADDR),
    .m_axi_DATA_C_ARLEN(m_axi_DATA_C_ARLEN),
    .m_axi_DATA_C_ARSIZE(m_axi_DATA_C_ARSIZE),
    .m_axi_DATA_C_ARBURST(m_axi_DATA_C_ARBURST),
    .m_axi_DATA_C_ARLOCK(m_axi_DATA_C_ARLOCK),
    .m_axi_DATA_C_ARREGION(m_axi_DATA_C_ARREGION),
    .m_axi_DATA_C_ARCACHE(m_axi_DATA_C_ARCACHE),
    .m_axi_DATA_C_ARPROT(m_axi_DATA_C_ARPROT),
    .m_axi_DATA_C_ARQOS(m_axi_DATA_C_ARQOS),
    .m_axi_DATA_C_ARUSER(),
    .m_axi_DATA_C_ARVALID(m_axi_DATA_C_ARVALID),
    .m_axi_DATA_C_ARREADY(m_axi_DATA_C_ARREADY),
    .m_axi_DATA_C_RID(1'B0),
    .m_axi_DATA_C_RDATA(m_axi_DATA_C_RDATA),
    .m_axi_DATA_C_RRESP(m_axi_DATA_C_RRESP),
    .m_axi_DATA_C_RLAST(m_axi_DATA_C_RLAST),
    .m_axi_DATA_C_RUSER(1'B0),
    .m_axi_DATA_C_RVALID(m_axi_DATA_C_RVALID),
    .m_axi_DATA_C_RREADY(m_axi_DATA_C_RREADY)
  );
endmodule
