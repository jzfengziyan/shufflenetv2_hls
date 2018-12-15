// (c) Copyright 1995-2018 Xilinx, Inc. All rights reserved.
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


// IP VLNV: xilinx.com:hls:ShuffleNetV2:1.0
// IP Revision: 1812150229

(* X_CORE_INFO = "ShuffleNetV2,Vivado 2017.2" *)
(* CHECK_LICENSE_TYPE = "accelerator_bd_ShuffleNetV2_0_1,ShuffleNetV2,{}" *)
(* CORE_GENERATION_INFO = "accelerator_bd_ShuffleNetV2_0_1,ShuffleNetV2,{x_ipProduct=Vivado 2017.2,x_ipVendor=xilinx.com,x_ipLibrary=hls,x_ipName=ShuffleNetV2,x_ipVersion=1.0,x_ipCoreRevision=1812150229,x_ipLanguage=VERILOG,x_ipSimLanguage=MIXED,C_S_AXI_CTL_ADDR_WIDTH=7,C_S_AXI_CTL_DATA_WIDTH=32,C_M_AXI_DATA_INPUT_OUTPUT_ID_WIDTH=1,C_M_AXI_DATA_INPUT_OUTPUT_ADDR_WIDTH=32,C_M_AXI_DATA_INPUT_OUTPUT_DATA_WIDTH=32,C_M_AXI_DATA_INPUT_OUTPUT_AWUSER_WIDTH=1,C_M_AXI_DATA_INPUT_OUTPUT_ARUSER_WIDTH=1,C_M_AXI_DATA_INPUT_OUTPUT_WUSER\
_WIDTH=1,C_M_AXI_DATA_INPUT_OUTPUT_RUSER_WIDTH=1,C_M_AXI_DATA_INPUT_OUTPUT_BUSER_WIDTH=1,C_M_AXI_DATA_INPUT_OUTPUT_USER_VALUE=0x00000000,C_M_AXI_DATA_INPUT_OUTPUT_PROT_VALUE=000,C_M_AXI_DATA_INPUT_OUTPUT_CACHE_VALUE=0011,C_M_AXI_DATA_OTHER_WEIGHTS_ID_WIDTH=1,C_M_AXI_DATA_OTHER_WEIGHTS_ADDR_WIDTH=32,C_M_AXI_DATA_OTHER_WEIGHTS_DATA_WIDTH=32,C_M_AXI_DATA_OTHER_WEIGHTS_AWUSER_WIDTH=1,C_M_AXI_DATA_OTHER_WEIGHTS_ARUSER_WIDTH=1,C_M_AXI_DATA_OTHER_WEIGHTS_WUSER_WIDTH=1,C_M_AXI_DATA_OTHER_WEIGHTS_RUSER_W\
IDTH=1,C_M_AXI_DATA_OTHER_WEIGHTS_BUSER_WIDTH=1,C_M_AXI_DATA_OTHER_WEIGHTS_USER_VALUE=0x00000000,C_M_AXI_DATA_OTHER_WEIGHTS_PROT_VALUE=000,C_M_AXI_DATA_OTHER_WEIGHTS_CACHE_VALUE=0011,C_M_AXI_P3X3_1X1_WEIGHTS_ID_WIDTH=1,C_M_AXI_P3X3_1X1_WEIGHTS_ADDR_WIDTH=32,C_M_AXI_P3X3_1X1_WEIGHTS_DATA_WIDTH=32,C_M_AXI_P3X3_1X1_WEIGHTS_AWUSER_WIDTH=1,C_M_AXI_P3X3_1X1_WEIGHTS_ARUSER_WIDTH=1,C_M_AXI_P3X3_1X1_WEIGHTS_WUSER_WIDTH=1,C_M_AXI_P3X3_1X1_WEIGHTS_RUSER_WIDTH=1,C_M_AXI_P3X3_1X1_WEIGHTS_BUSER_WIDTH=1,C_M_AX\
I_P3X3_1X1_WEIGHTS_USER_VALUE=0x00000000,C_M_AXI_P3X3_1X1_WEIGHTS_PROT_VALUE=000,C_M_AXI_P3X3_1X1_WEIGHTS_CACHE_VALUE=0011,C_M_AXI_DATA_BIAS_ID_WIDTH=1,C_M_AXI_DATA_BIAS_ADDR_WIDTH=32,C_M_AXI_DATA_BIAS_DATA_WIDTH=32,C_M_AXI_DATA_BIAS_AWUSER_WIDTH=1,C_M_AXI_DATA_BIAS_ARUSER_WIDTH=1,C_M_AXI_DATA_BIAS_WUSER_WIDTH=1,C_M_AXI_DATA_BIAS_RUSER_WIDTH=1,C_M_AXI_DATA_BIAS_BUSER_WIDTH=1,C_M_AXI_DATA_BIAS_USER_VALUE=0x00000000,C_M_AXI_DATA_BIAS_PROT_VALUE=000,C_M_AXI_DATA_BIAS_CACHE_VALUE=0011}" *)
(* DowngradeIPIdentifiedWarnings = "yes" *)
module accelerator_bd_ShuffleNetV2_0_1 (
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
  m_axi_DATA_INPUT_OUTPUT_AWADDR,
  m_axi_DATA_INPUT_OUTPUT_AWLEN,
  m_axi_DATA_INPUT_OUTPUT_AWSIZE,
  m_axi_DATA_INPUT_OUTPUT_AWBURST,
  m_axi_DATA_INPUT_OUTPUT_AWLOCK,
  m_axi_DATA_INPUT_OUTPUT_AWREGION,
  m_axi_DATA_INPUT_OUTPUT_AWCACHE,
  m_axi_DATA_INPUT_OUTPUT_AWPROT,
  m_axi_DATA_INPUT_OUTPUT_AWQOS,
  m_axi_DATA_INPUT_OUTPUT_AWVALID,
  m_axi_DATA_INPUT_OUTPUT_AWREADY,
  m_axi_DATA_INPUT_OUTPUT_WDATA,
  m_axi_DATA_INPUT_OUTPUT_WSTRB,
  m_axi_DATA_INPUT_OUTPUT_WLAST,
  m_axi_DATA_INPUT_OUTPUT_WVALID,
  m_axi_DATA_INPUT_OUTPUT_WREADY,
  m_axi_DATA_INPUT_OUTPUT_BRESP,
  m_axi_DATA_INPUT_OUTPUT_BVALID,
  m_axi_DATA_INPUT_OUTPUT_BREADY,
  m_axi_DATA_INPUT_OUTPUT_ARADDR,
  m_axi_DATA_INPUT_OUTPUT_ARLEN,
  m_axi_DATA_INPUT_OUTPUT_ARSIZE,
  m_axi_DATA_INPUT_OUTPUT_ARBURST,
  m_axi_DATA_INPUT_OUTPUT_ARLOCK,
  m_axi_DATA_INPUT_OUTPUT_ARREGION,
  m_axi_DATA_INPUT_OUTPUT_ARCACHE,
  m_axi_DATA_INPUT_OUTPUT_ARPROT,
  m_axi_DATA_INPUT_OUTPUT_ARQOS,
  m_axi_DATA_INPUT_OUTPUT_ARVALID,
  m_axi_DATA_INPUT_OUTPUT_ARREADY,
  m_axi_DATA_INPUT_OUTPUT_RDATA,
  m_axi_DATA_INPUT_OUTPUT_RRESP,
  m_axi_DATA_INPUT_OUTPUT_RLAST,
  m_axi_DATA_INPUT_OUTPUT_RVALID,
  m_axi_DATA_INPUT_OUTPUT_RREADY,
  m_axi_DATA_OTHER_WEIGHTS_AWADDR,
  m_axi_DATA_OTHER_WEIGHTS_AWLEN,
  m_axi_DATA_OTHER_WEIGHTS_AWSIZE,
  m_axi_DATA_OTHER_WEIGHTS_AWBURST,
  m_axi_DATA_OTHER_WEIGHTS_AWLOCK,
  m_axi_DATA_OTHER_WEIGHTS_AWREGION,
  m_axi_DATA_OTHER_WEIGHTS_AWCACHE,
  m_axi_DATA_OTHER_WEIGHTS_AWPROT,
  m_axi_DATA_OTHER_WEIGHTS_AWQOS,
  m_axi_DATA_OTHER_WEIGHTS_AWVALID,
  m_axi_DATA_OTHER_WEIGHTS_AWREADY,
  m_axi_DATA_OTHER_WEIGHTS_WDATA,
  m_axi_DATA_OTHER_WEIGHTS_WSTRB,
  m_axi_DATA_OTHER_WEIGHTS_WLAST,
  m_axi_DATA_OTHER_WEIGHTS_WVALID,
  m_axi_DATA_OTHER_WEIGHTS_WREADY,
  m_axi_DATA_OTHER_WEIGHTS_BRESP,
  m_axi_DATA_OTHER_WEIGHTS_BVALID,
  m_axi_DATA_OTHER_WEIGHTS_BREADY,
  m_axi_DATA_OTHER_WEIGHTS_ARADDR,
  m_axi_DATA_OTHER_WEIGHTS_ARLEN,
  m_axi_DATA_OTHER_WEIGHTS_ARSIZE,
  m_axi_DATA_OTHER_WEIGHTS_ARBURST,
  m_axi_DATA_OTHER_WEIGHTS_ARLOCK,
  m_axi_DATA_OTHER_WEIGHTS_ARREGION,
  m_axi_DATA_OTHER_WEIGHTS_ARCACHE,
  m_axi_DATA_OTHER_WEIGHTS_ARPROT,
  m_axi_DATA_OTHER_WEIGHTS_ARQOS,
  m_axi_DATA_OTHER_WEIGHTS_ARVALID,
  m_axi_DATA_OTHER_WEIGHTS_ARREADY,
  m_axi_DATA_OTHER_WEIGHTS_RDATA,
  m_axi_DATA_OTHER_WEIGHTS_RRESP,
  m_axi_DATA_OTHER_WEIGHTS_RLAST,
  m_axi_DATA_OTHER_WEIGHTS_RVALID,
  m_axi_DATA_OTHER_WEIGHTS_RREADY,
  m_axi_p3X3_1X1_WEIGHTS_AWADDR,
  m_axi_p3X3_1X1_WEIGHTS_AWLEN,
  m_axi_p3X3_1X1_WEIGHTS_AWSIZE,
  m_axi_p3X3_1X1_WEIGHTS_AWBURST,
  m_axi_p3X3_1X1_WEIGHTS_AWLOCK,
  m_axi_p3X3_1X1_WEIGHTS_AWREGION,
  m_axi_p3X3_1X1_WEIGHTS_AWCACHE,
  m_axi_p3X3_1X1_WEIGHTS_AWPROT,
  m_axi_p3X3_1X1_WEIGHTS_AWQOS,
  m_axi_p3X3_1X1_WEIGHTS_AWVALID,
  m_axi_p3X3_1X1_WEIGHTS_AWREADY,
  m_axi_p3X3_1X1_WEIGHTS_WDATA,
  m_axi_p3X3_1X1_WEIGHTS_WSTRB,
  m_axi_p3X3_1X1_WEIGHTS_WLAST,
  m_axi_p3X3_1X1_WEIGHTS_WVALID,
  m_axi_p3X3_1X1_WEIGHTS_WREADY,
  m_axi_p3X3_1X1_WEIGHTS_BRESP,
  m_axi_p3X3_1X1_WEIGHTS_BVALID,
  m_axi_p3X3_1X1_WEIGHTS_BREADY,
  m_axi_p3X3_1X1_WEIGHTS_ARADDR,
  m_axi_p3X3_1X1_WEIGHTS_ARLEN,
  m_axi_p3X3_1X1_WEIGHTS_ARSIZE,
  m_axi_p3X3_1X1_WEIGHTS_ARBURST,
  m_axi_p3X3_1X1_WEIGHTS_ARLOCK,
  m_axi_p3X3_1X1_WEIGHTS_ARREGION,
  m_axi_p3X3_1X1_WEIGHTS_ARCACHE,
  m_axi_p3X3_1X1_WEIGHTS_ARPROT,
  m_axi_p3X3_1X1_WEIGHTS_ARQOS,
  m_axi_p3X3_1X1_WEIGHTS_ARVALID,
  m_axi_p3X3_1X1_WEIGHTS_ARREADY,
  m_axi_p3X3_1X1_WEIGHTS_RDATA,
  m_axi_p3X3_1X1_WEIGHTS_RRESP,
  m_axi_p3X3_1X1_WEIGHTS_RLAST,
  m_axi_p3X3_1X1_WEIGHTS_RVALID,
  m_axi_p3X3_1X1_WEIGHTS_RREADY,
  m_axi_DATA_BIAS_AWADDR,
  m_axi_DATA_BIAS_AWLEN,
  m_axi_DATA_BIAS_AWSIZE,
  m_axi_DATA_BIAS_AWBURST,
  m_axi_DATA_BIAS_AWLOCK,
  m_axi_DATA_BIAS_AWREGION,
  m_axi_DATA_BIAS_AWCACHE,
  m_axi_DATA_BIAS_AWPROT,
  m_axi_DATA_BIAS_AWQOS,
  m_axi_DATA_BIAS_AWVALID,
  m_axi_DATA_BIAS_AWREADY,
  m_axi_DATA_BIAS_WDATA,
  m_axi_DATA_BIAS_WSTRB,
  m_axi_DATA_BIAS_WLAST,
  m_axi_DATA_BIAS_WVALID,
  m_axi_DATA_BIAS_WREADY,
  m_axi_DATA_BIAS_BRESP,
  m_axi_DATA_BIAS_BVALID,
  m_axi_DATA_BIAS_BREADY,
  m_axi_DATA_BIAS_ARADDR,
  m_axi_DATA_BIAS_ARLEN,
  m_axi_DATA_BIAS_ARSIZE,
  m_axi_DATA_BIAS_ARBURST,
  m_axi_DATA_BIAS_ARLOCK,
  m_axi_DATA_BIAS_ARREGION,
  m_axi_DATA_BIAS_ARCACHE,
  m_axi_DATA_BIAS_ARPROT,
  m_axi_DATA_BIAS_ARQOS,
  m_axi_DATA_BIAS_ARVALID,
  m_axi_DATA_BIAS_ARREADY,
  m_axi_DATA_BIAS_RDATA,
  m_axi_DATA_BIAS_RRESP,
  m_axi_DATA_BIAS_RLAST,
  m_axi_DATA_BIAS_RVALID,
  m_axi_DATA_BIAS_RREADY
);

(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 s_axi_CTL AWADDR" *)
input wire [6 : 0] s_axi_CTL_AWADDR;
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
input wire [6 : 0] s_axi_CTL_ARADDR;
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
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWADDR" *)
output wire [31 : 0] m_axi_DATA_INPUT_OUTPUT_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWLEN" *)
output wire [7 : 0] m_axi_DATA_INPUT_OUTPUT_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWSIZE" *)
output wire [2 : 0] m_axi_DATA_INPUT_OUTPUT_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWBURST" *)
output wire [1 : 0] m_axi_DATA_INPUT_OUTPUT_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWLOCK" *)
output wire [1 : 0] m_axi_DATA_INPUT_OUTPUT_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWREGION" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWCACHE" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWPROT" *)
output wire [2 : 0] m_axi_DATA_INPUT_OUTPUT_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWQOS" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWVALID" *)
output wire m_axi_DATA_INPUT_OUTPUT_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT AWREADY" *)
input wire m_axi_DATA_INPUT_OUTPUT_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT WDATA" *)
output wire [31 : 0] m_axi_DATA_INPUT_OUTPUT_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT WSTRB" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT WLAST" *)
output wire m_axi_DATA_INPUT_OUTPUT_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT WVALID" *)
output wire m_axi_DATA_INPUT_OUTPUT_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT WREADY" *)
input wire m_axi_DATA_INPUT_OUTPUT_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT BRESP" *)
input wire [1 : 0] m_axi_DATA_INPUT_OUTPUT_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT BVALID" *)
input wire m_axi_DATA_INPUT_OUTPUT_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT BREADY" *)
output wire m_axi_DATA_INPUT_OUTPUT_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARADDR" *)
output wire [31 : 0] m_axi_DATA_INPUT_OUTPUT_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARLEN" *)
output wire [7 : 0] m_axi_DATA_INPUT_OUTPUT_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARSIZE" *)
output wire [2 : 0] m_axi_DATA_INPUT_OUTPUT_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARBURST" *)
output wire [1 : 0] m_axi_DATA_INPUT_OUTPUT_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARLOCK" *)
output wire [1 : 0] m_axi_DATA_INPUT_OUTPUT_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARREGION" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARCACHE" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARPROT" *)
output wire [2 : 0] m_axi_DATA_INPUT_OUTPUT_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARQOS" *)
output wire [3 : 0] m_axi_DATA_INPUT_OUTPUT_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARVALID" *)
output wire m_axi_DATA_INPUT_OUTPUT_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT ARREADY" *)
input wire m_axi_DATA_INPUT_OUTPUT_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT RDATA" *)
input wire [31 : 0] m_axi_DATA_INPUT_OUTPUT_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT RRESP" *)
input wire [1 : 0] m_axi_DATA_INPUT_OUTPUT_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT RLAST" *)
input wire m_axi_DATA_INPUT_OUTPUT_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT RVALID" *)
input wire m_axi_DATA_INPUT_OUTPUT_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_INPUT_OUTPUT RREADY" *)
output wire m_axi_DATA_INPUT_OUTPUT_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWADDR" *)
output wire [31 : 0] m_axi_DATA_OTHER_WEIGHTS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWLEN" *)
output wire [7 : 0] m_axi_DATA_OTHER_WEIGHTS_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWSIZE" *)
output wire [2 : 0] m_axi_DATA_OTHER_WEIGHTS_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWBURST" *)
output wire [1 : 0] m_axi_DATA_OTHER_WEIGHTS_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWLOCK" *)
output wire [1 : 0] m_axi_DATA_OTHER_WEIGHTS_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWREGION" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWCACHE" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWPROT" *)
output wire [2 : 0] m_axi_DATA_OTHER_WEIGHTS_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWQOS" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWVALID" *)
output wire m_axi_DATA_OTHER_WEIGHTS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS AWREADY" *)
input wire m_axi_DATA_OTHER_WEIGHTS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS WDATA" *)
output wire [31 : 0] m_axi_DATA_OTHER_WEIGHTS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS WSTRB" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS WLAST" *)
output wire m_axi_DATA_OTHER_WEIGHTS_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS WVALID" *)
output wire m_axi_DATA_OTHER_WEIGHTS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS WREADY" *)
input wire m_axi_DATA_OTHER_WEIGHTS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS BRESP" *)
input wire [1 : 0] m_axi_DATA_OTHER_WEIGHTS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS BVALID" *)
input wire m_axi_DATA_OTHER_WEIGHTS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS BREADY" *)
output wire m_axi_DATA_OTHER_WEIGHTS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARADDR" *)
output wire [31 : 0] m_axi_DATA_OTHER_WEIGHTS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARLEN" *)
output wire [7 : 0] m_axi_DATA_OTHER_WEIGHTS_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARSIZE" *)
output wire [2 : 0] m_axi_DATA_OTHER_WEIGHTS_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARBURST" *)
output wire [1 : 0] m_axi_DATA_OTHER_WEIGHTS_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARLOCK" *)
output wire [1 : 0] m_axi_DATA_OTHER_WEIGHTS_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARREGION" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARCACHE" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARPROT" *)
output wire [2 : 0] m_axi_DATA_OTHER_WEIGHTS_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARQOS" *)
output wire [3 : 0] m_axi_DATA_OTHER_WEIGHTS_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARVALID" *)
output wire m_axi_DATA_OTHER_WEIGHTS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS ARREADY" *)
input wire m_axi_DATA_OTHER_WEIGHTS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS RDATA" *)
input wire [31 : 0] m_axi_DATA_OTHER_WEIGHTS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS RRESP" *)
input wire [1 : 0] m_axi_DATA_OTHER_WEIGHTS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS RLAST" *)
input wire m_axi_DATA_OTHER_WEIGHTS_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS RVALID" *)
input wire m_axi_DATA_OTHER_WEIGHTS_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_OTHER_WEIGHTS RREADY" *)
output wire m_axi_DATA_OTHER_WEIGHTS_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWADDR" *)
output wire [31 : 0] m_axi_p3X3_1X1_WEIGHTS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWLEN" *)
output wire [7 : 0] m_axi_p3X3_1X1_WEIGHTS_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWSIZE" *)
output wire [2 : 0] m_axi_p3X3_1X1_WEIGHTS_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWBURST" *)
output wire [1 : 0] m_axi_p3X3_1X1_WEIGHTS_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWLOCK" *)
output wire [1 : 0] m_axi_p3X3_1X1_WEIGHTS_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWREGION" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWCACHE" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWPROT" *)
output wire [2 : 0] m_axi_p3X3_1X1_WEIGHTS_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWQOS" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWVALID" *)
output wire m_axi_p3X3_1X1_WEIGHTS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS AWREADY" *)
input wire m_axi_p3X3_1X1_WEIGHTS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS WDATA" *)
output wire [31 : 0] m_axi_p3X3_1X1_WEIGHTS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS WSTRB" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS WLAST" *)
output wire m_axi_p3X3_1X1_WEIGHTS_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS WVALID" *)
output wire m_axi_p3X3_1X1_WEIGHTS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS WREADY" *)
input wire m_axi_p3X3_1X1_WEIGHTS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS BRESP" *)
input wire [1 : 0] m_axi_p3X3_1X1_WEIGHTS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS BVALID" *)
input wire m_axi_p3X3_1X1_WEIGHTS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS BREADY" *)
output wire m_axi_p3X3_1X1_WEIGHTS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARADDR" *)
output wire [31 : 0] m_axi_p3X3_1X1_WEIGHTS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARLEN" *)
output wire [7 : 0] m_axi_p3X3_1X1_WEIGHTS_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARSIZE" *)
output wire [2 : 0] m_axi_p3X3_1X1_WEIGHTS_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARBURST" *)
output wire [1 : 0] m_axi_p3X3_1X1_WEIGHTS_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARLOCK" *)
output wire [1 : 0] m_axi_p3X3_1X1_WEIGHTS_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARREGION" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARCACHE" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARPROT" *)
output wire [2 : 0] m_axi_p3X3_1X1_WEIGHTS_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARQOS" *)
output wire [3 : 0] m_axi_p3X3_1X1_WEIGHTS_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARVALID" *)
output wire m_axi_p3X3_1X1_WEIGHTS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS ARREADY" *)
input wire m_axi_p3X3_1X1_WEIGHTS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS RDATA" *)
input wire [31 : 0] m_axi_p3X3_1X1_WEIGHTS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS RRESP" *)
input wire [1 : 0] m_axi_p3X3_1X1_WEIGHTS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS RLAST" *)
input wire m_axi_p3X3_1X1_WEIGHTS_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS RVALID" *)
input wire m_axi_p3X3_1X1_WEIGHTS_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_p3X3_1X1_WEIGHTS RREADY" *)
output wire m_axi_p3X3_1X1_WEIGHTS_RREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWADDR" *)
output wire [31 : 0] m_axi_DATA_BIAS_AWADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWLEN" *)
output wire [7 : 0] m_axi_DATA_BIAS_AWLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWSIZE" *)
output wire [2 : 0] m_axi_DATA_BIAS_AWSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWBURST" *)
output wire [1 : 0] m_axi_DATA_BIAS_AWBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWLOCK" *)
output wire [1 : 0] m_axi_DATA_BIAS_AWLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWREGION" *)
output wire [3 : 0] m_axi_DATA_BIAS_AWREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWCACHE" *)
output wire [3 : 0] m_axi_DATA_BIAS_AWCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWPROT" *)
output wire [2 : 0] m_axi_DATA_BIAS_AWPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWQOS" *)
output wire [3 : 0] m_axi_DATA_BIAS_AWQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWVALID" *)
output wire m_axi_DATA_BIAS_AWVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS AWREADY" *)
input wire m_axi_DATA_BIAS_AWREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS WDATA" *)
output wire [31 : 0] m_axi_DATA_BIAS_WDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS WSTRB" *)
output wire [3 : 0] m_axi_DATA_BIAS_WSTRB;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS WLAST" *)
output wire m_axi_DATA_BIAS_WLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS WVALID" *)
output wire m_axi_DATA_BIAS_WVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS WREADY" *)
input wire m_axi_DATA_BIAS_WREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS BRESP" *)
input wire [1 : 0] m_axi_DATA_BIAS_BRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS BVALID" *)
input wire m_axi_DATA_BIAS_BVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS BREADY" *)
output wire m_axi_DATA_BIAS_BREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARADDR" *)
output wire [31 : 0] m_axi_DATA_BIAS_ARADDR;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARLEN" *)
output wire [7 : 0] m_axi_DATA_BIAS_ARLEN;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARSIZE" *)
output wire [2 : 0] m_axi_DATA_BIAS_ARSIZE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARBURST" *)
output wire [1 : 0] m_axi_DATA_BIAS_ARBURST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARLOCK" *)
output wire [1 : 0] m_axi_DATA_BIAS_ARLOCK;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARREGION" *)
output wire [3 : 0] m_axi_DATA_BIAS_ARREGION;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARCACHE" *)
output wire [3 : 0] m_axi_DATA_BIAS_ARCACHE;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARPROT" *)
output wire [2 : 0] m_axi_DATA_BIAS_ARPROT;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARQOS" *)
output wire [3 : 0] m_axi_DATA_BIAS_ARQOS;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARVALID" *)
output wire m_axi_DATA_BIAS_ARVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS ARREADY" *)
input wire m_axi_DATA_BIAS_ARREADY;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS RDATA" *)
input wire [31 : 0] m_axi_DATA_BIAS_RDATA;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS RRESP" *)
input wire [1 : 0] m_axi_DATA_BIAS_RRESP;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS RLAST" *)
input wire m_axi_DATA_BIAS_RLAST;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS RVALID" *)
input wire m_axi_DATA_BIAS_RVALID;
(* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 m_axi_DATA_BIAS RREADY" *)
output wire m_axi_DATA_BIAS_RREADY;

  ShuffleNetV2 #(
    .C_S_AXI_CTL_ADDR_WIDTH(7),
    .C_S_AXI_CTL_DATA_WIDTH(32),
    .C_M_AXI_DATA_INPUT_OUTPUT_ID_WIDTH(1),
    .C_M_AXI_DATA_INPUT_OUTPUT_ADDR_WIDTH(32),
    .C_M_AXI_DATA_INPUT_OUTPUT_DATA_WIDTH(32),
    .C_M_AXI_DATA_INPUT_OUTPUT_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_INPUT_OUTPUT_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_INPUT_OUTPUT_WUSER_WIDTH(1),
    .C_M_AXI_DATA_INPUT_OUTPUT_RUSER_WIDTH(1),
    .C_M_AXI_DATA_INPUT_OUTPUT_BUSER_WIDTH(1),
    .C_M_AXI_DATA_INPUT_OUTPUT_USER_VALUE('H00000000),
    .C_M_AXI_DATA_INPUT_OUTPUT_PROT_VALUE('B000),
    .C_M_AXI_DATA_INPUT_OUTPUT_CACHE_VALUE('B0011),
    .C_M_AXI_DATA_OTHER_WEIGHTS_ID_WIDTH(1),
    .C_M_AXI_DATA_OTHER_WEIGHTS_ADDR_WIDTH(32),
    .C_M_AXI_DATA_OTHER_WEIGHTS_DATA_WIDTH(32),
    .C_M_AXI_DATA_OTHER_WEIGHTS_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_OTHER_WEIGHTS_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_OTHER_WEIGHTS_WUSER_WIDTH(1),
    .C_M_AXI_DATA_OTHER_WEIGHTS_RUSER_WIDTH(1),
    .C_M_AXI_DATA_OTHER_WEIGHTS_BUSER_WIDTH(1),
    .C_M_AXI_DATA_OTHER_WEIGHTS_USER_VALUE('H00000000),
    .C_M_AXI_DATA_OTHER_WEIGHTS_PROT_VALUE('B000),
    .C_M_AXI_DATA_OTHER_WEIGHTS_CACHE_VALUE('B0011),
    .C_M_AXI_P3X3_1X1_WEIGHTS_ID_WIDTH(1),
    .C_M_AXI_P3X3_1X1_WEIGHTS_ADDR_WIDTH(32),
    .C_M_AXI_P3X3_1X1_WEIGHTS_DATA_WIDTH(32),
    .C_M_AXI_P3X3_1X1_WEIGHTS_AWUSER_WIDTH(1),
    .C_M_AXI_P3X3_1X1_WEIGHTS_ARUSER_WIDTH(1),
    .C_M_AXI_P3X3_1X1_WEIGHTS_WUSER_WIDTH(1),
    .C_M_AXI_P3X3_1X1_WEIGHTS_RUSER_WIDTH(1),
    .C_M_AXI_P3X3_1X1_WEIGHTS_BUSER_WIDTH(1),
    .C_M_AXI_P3X3_1X1_WEIGHTS_USER_VALUE('H00000000),
    .C_M_AXI_P3X3_1X1_WEIGHTS_PROT_VALUE('B000),
    .C_M_AXI_P3X3_1X1_WEIGHTS_CACHE_VALUE('B0011),
    .C_M_AXI_DATA_BIAS_ID_WIDTH(1),
    .C_M_AXI_DATA_BIAS_ADDR_WIDTH(32),
    .C_M_AXI_DATA_BIAS_DATA_WIDTH(32),
    .C_M_AXI_DATA_BIAS_AWUSER_WIDTH(1),
    .C_M_AXI_DATA_BIAS_ARUSER_WIDTH(1),
    .C_M_AXI_DATA_BIAS_WUSER_WIDTH(1),
    .C_M_AXI_DATA_BIAS_RUSER_WIDTH(1),
    .C_M_AXI_DATA_BIAS_BUSER_WIDTH(1),
    .C_M_AXI_DATA_BIAS_USER_VALUE('H00000000),
    .C_M_AXI_DATA_BIAS_PROT_VALUE('B000),
    .C_M_AXI_DATA_BIAS_CACHE_VALUE('B0011)
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
    .m_axi_DATA_INPUT_OUTPUT_AWID(),
    .m_axi_DATA_INPUT_OUTPUT_AWADDR(m_axi_DATA_INPUT_OUTPUT_AWADDR),
    .m_axi_DATA_INPUT_OUTPUT_AWLEN(m_axi_DATA_INPUT_OUTPUT_AWLEN),
    .m_axi_DATA_INPUT_OUTPUT_AWSIZE(m_axi_DATA_INPUT_OUTPUT_AWSIZE),
    .m_axi_DATA_INPUT_OUTPUT_AWBURST(m_axi_DATA_INPUT_OUTPUT_AWBURST),
    .m_axi_DATA_INPUT_OUTPUT_AWLOCK(m_axi_DATA_INPUT_OUTPUT_AWLOCK),
    .m_axi_DATA_INPUT_OUTPUT_AWREGION(m_axi_DATA_INPUT_OUTPUT_AWREGION),
    .m_axi_DATA_INPUT_OUTPUT_AWCACHE(m_axi_DATA_INPUT_OUTPUT_AWCACHE),
    .m_axi_DATA_INPUT_OUTPUT_AWPROT(m_axi_DATA_INPUT_OUTPUT_AWPROT),
    .m_axi_DATA_INPUT_OUTPUT_AWQOS(m_axi_DATA_INPUT_OUTPUT_AWQOS),
    .m_axi_DATA_INPUT_OUTPUT_AWUSER(),
    .m_axi_DATA_INPUT_OUTPUT_AWVALID(m_axi_DATA_INPUT_OUTPUT_AWVALID),
    .m_axi_DATA_INPUT_OUTPUT_AWREADY(m_axi_DATA_INPUT_OUTPUT_AWREADY),
    .m_axi_DATA_INPUT_OUTPUT_WID(),
    .m_axi_DATA_INPUT_OUTPUT_WDATA(m_axi_DATA_INPUT_OUTPUT_WDATA),
    .m_axi_DATA_INPUT_OUTPUT_WSTRB(m_axi_DATA_INPUT_OUTPUT_WSTRB),
    .m_axi_DATA_INPUT_OUTPUT_WLAST(m_axi_DATA_INPUT_OUTPUT_WLAST),
    .m_axi_DATA_INPUT_OUTPUT_WUSER(),
    .m_axi_DATA_INPUT_OUTPUT_WVALID(m_axi_DATA_INPUT_OUTPUT_WVALID),
    .m_axi_DATA_INPUT_OUTPUT_WREADY(m_axi_DATA_INPUT_OUTPUT_WREADY),
    .m_axi_DATA_INPUT_OUTPUT_BID(1'B0),
    .m_axi_DATA_INPUT_OUTPUT_BRESP(m_axi_DATA_INPUT_OUTPUT_BRESP),
    .m_axi_DATA_INPUT_OUTPUT_BUSER(1'B0),
    .m_axi_DATA_INPUT_OUTPUT_BVALID(m_axi_DATA_INPUT_OUTPUT_BVALID),
    .m_axi_DATA_INPUT_OUTPUT_BREADY(m_axi_DATA_INPUT_OUTPUT_BREADY),
    .m_axi_DATA_INPUT_OUTPUT_ARID(),
    .m_axi_DATA_INPUT_OUTPUT_ARADDR(m_axi_DATA_INPUT_OUTPUT_ARADDR),
    .m_axi_DATA_INPUT_OUTPUT_ARLEN(m_axi_DATA_INPUT_OUTPUT_ARLEN),
    .m_axi_DATA_INPUT_OUTPUT_ARSIZE(m_axi_DATA_INPUT_OUTPUT_ARSIZE),
    .m_axi_DATA_INPUT_OUTPUT_ARBURST(m_axi_DATA_INPUT_OUTPUT_ARBURST),
    .m_axi_DATA_INPUT_OUTPUT_ARLOCK(m_axi_DATA_INPUT_OUTPUT_ARLOCK),
    .m_axi_DATA_INPUT_OUTPUT_ARREGION(m_axi_DATA_INPUT_OUTPUT_ARREGION),
    .m_axi_DATA_INPUT_OUTPUT_ARCACHE(m_axi_DATA_INPUT_OUTPUT_ARCACHE),
    .m_axi_DATA_INPUT_OUTPUT_ARPROT(m_axi_DATA_INPUT_OUTPUT_ARPROT),
    .m_axi_DATA_INPUT_OUTPUT_ARQOS(m_axi_DATA_INPUT_OUTPUT_ARQOS),
    .m_axi_DATA_INPUT_OUTPUT_ARUSER(),
    .m_axi_DATA_INPUT_OUTPUT_ARVALID(m_axi_DATA_INPUT_OUTPUT_ARVALID),
    .m_axi_DATA_INPUT_OUTPUT_ARREADY(m_axi_DATA_INPUT_OUTPUT_ARREADY),
    .m_axi_DATA_INPUT_OUTPUT_RID(1'B0),
    .m_axi_DATA_INPUT_OUTPUT_RDATA(m_axi_DATA_INPUT_OUTPUT_RDATA),
    .m_axi_DATA_INPUT_OUTPUT_RRESP(m_axi_DATA_INPUT_OUTPUT_RRESP),
    .m_axi_DATA_INPUT_OUTPUT_RLAST(m_axi_DATA_INPUT_OUTPUT_RLAST),
    .m_axi_DATA_INPUT_OUTPUT_RUSER(1'B0),
    .m_axi_DATA_INPUT_OUTPUT_RVALID(m_axi_DATA_INPUT_OUTPUT_RVALID),
    .m_axi_DATA_INPUT_OUTPUT_RREADY(m_axi_DATA_INPUT_OUTPUT_RREADY),
    .m_axi_DATA_OTHER_WEIGHTS_AWID(),
    .m_axi_DATA_OTHER_WEIGHTS_AWADDR(m_axi_DATA_OTHER_WEIGHTS_AWADDR),
    .m_axi_DATA_OTHER_WEIGHTS_AWLEN(m_axi_DATA_OTHER_WEIGHTS_AWLEN),
    .m_axi_DATA_OTHER_WEIGHTS_AWSIZE(m_axi_DATA_OTHER_WEIGHTS_AWSIZE),
    .m_axi_DATA_OTHER_WEIGHTS_AWBURST(m_axi_DATA_OTHER_WEIGHTS_AWBURST),
    .m_axi_DATA_OTHER_WEIGHTS_AWLOCK(m_axi_DATA_OTHER_WEIGHTS_AWLOCK),
    .m_axi_DATA_OTHER_WEIGHTS_AWREGION(m_axi_DATA_OTHER_WEIGHTS_AWREGION),
    .m_axi_DATA_OTHER_WEIGHTS_AWCACHE(m_axi_DATA_OTHER_WEIGHTS_AWCACHE),
    .m_axi_DATA_OTHER_WEIGHTS_AWPROT(m_axi_DATA_OTHER_WEIGHTS_AWPROT),
    .m_axi_DATA_OTHER_WEIGHTS_AWQOS(m_axi_DATA_OTHER_WEIGHTS_AWQOS),
    .m_axi_DATA_OTHER_WEIGHTS_AWUSER(),
    .m_axi_DATA_OTHER_WEIGHTS_AWVALID(m_axi_DATA_OTHER_WEIGHTS_AWVALID),
    .m_axi_DATA_OTHER_WEIGHTS_AWREADY(m_axi_DATA_OTHER_WEIGHTS_AWREADY),
    .m_axi_DATA_OTHER_WEIGHTS_WID(),
    .m_axi_DATA_OTHER_WEIGHTS_WDATA(m_axi_DATA_OTHER_WEIGHTS_WDATA),
    .m_axi_DATA_OTHER_WEIGHTS_WSTRB(m_axi_DATA_OTHER_WEIGHTS_WSTRB),
    .m_axi_DATA_OTHER_WEIGHTS_WLAST(m_axi_DATA_OTHER_WEIGHTS_WLAST),
    .m_axi_DATA_OTHER_WEIGHTS_WUSER(),
    .m_axi_DATA_OTHER_WEIGHTS_WVALID(m_axi_DATA_OTHER_WEIGHTS_WVALID),
    .m_axi_DATA_OTHER_WEIGHTS_WREADY(m_axi_DATA_OTHER_WEIGHTS_WREADY),
    .m_axi_DATA_OTHER_WEIGHTS_BID(1'B0),
    .m_axi_DATA_OTHER_WEIGHTS_BRESP(m_axi_DATA_OTHER_WEIGHTS_BRESP),
    .m_axi_DATA_OTHER_WEIGHTS_BUSER(1'B0),
    .m_axi_DATA_OTHER_WEIGHTS_BVALID(m_axi_DATA_OTHER_WEIGHTS_BVALID),
    .m_axi_DATA_OTHER_WEIGHTS_BREADY(m_axi_DATA_OTHER_WEIGHTS_BREADY),
    .m_axi_DATA_OTHER_WEIGHTS_ARID(),
    .m_axi_DATA_OTHER_WEIGHTS_ARADDR(m_axi_DATA_OTHER_WEIGHTS_ARADDR),
    .m_axi_DATA_OTHER_WEIGHTS_ARLEN(m_axi_DATA_OTHER_WEIGHTS_ARLEN),
    .m_axi_DATA_OTHER_WEIGHTS_ARSIZE(m_axi_DATA_OTHER_WEIGHTS_ARSIZE),
    .m_axi_DATA_OTHER_WEIGHTS_ARBURST(m_axi_DATA_OTHER_WEIGHTS_ARBURST),
    .m_axi_DATA_OTHER_WEIGHTS_ARLOCK(m_axi_DATA_OTHER_WEIGHTS_ARLOCK),
    .m_axi_DATA_OTHER_WEIGHTS_ARREGION(m_axi_DATA_OTHER_WEIGHTS_ARREGION),
    .m_axi_DATA_OTHER_WEIGHTS_ARCACHE(m_axi_DATA_OTHER_WEIGHTS_ARCACHE),
    .m_axi_DATA_OTHER_WEIGHTS_ARPROT(m_axi_DATA_OTHER_WEIGHTS_ARPROT),
    .m_axi_DATA_OTHER_WEIGHTS_ARQOS(m_axi_DATA_OTHER_WEIGHTS_ARQOS),
    .m_axi_DATA_OTHER_WEIGHTS_ARUSER(),
    .m_axi_DATA_OTHER_WEIGHTS_ARVALID(m_axi_DATA_OTHER_WEIGHTS_ARVALID),
    .m_axi_DATA_OTHER_WEIGHTS_ARREADY(m_axi_DATA_OTHER_WEIGHTS_ARREADY),
    .m_axi_DATA_OTHER_WEIGHTS_RID(1'B0),
    .m_axi_DATA_OTHER_WEIGHTS_RDATA(m_axi_DATA_OTHER_WEIGHTS_RDATA),
    .m_axi_DATA_OTHER_WEIGHTS_RRESP(m_axi_DATA_OTHER_WEIGHTS_RRESP),
    .m_axi_DATA_OTHER_WEIGHTS_RLAST(m_axi_DATA_OTHER_WEIGHTS_RLAST),
    .m_axi_DATA_OTHER_WEIGHTS_RUSER(1'B0),
    .m_axi_DATA_OTHER_WEIGHTS_RVALID(m_axi_DATA_OTHER_WEIGHTS_RVALID),
    .m_axi_DATA_OTHER_WEIGHTS_RREADY(m_axi_DATA_OTHER_WEIGHTS_RREADY),
    .m_axi_p3X3_1X1_WEIGHTS_AWID(),
    .m_axi_p3X3_1X1_WEIGHTS_AWADDR(m_axi_p3X3_1X1_WEIGHTS_AWADDR),
    .m_axi_p3X3_1X1_WEIGHTS_AWLEN(m_axi_p3X3_1X1_WEIGHTS_AWLEN),
    .m_axi_p3X3_1X1_WEIGHTS_AWSIZE(m_axi_p3X3_1X1_WEIGHTS_AWSIZE),
    .m_axi_p3X3_1X1_WEIGHTS_AWBURST(m_axi_p3X3_1X1_WEIGHTS_AWBURST),
    .m_axi_p3X3_1X1_WEIGHTS_AWLOCK(m_axi_p3X3_1X1_WEIGHTS_AWLOCK),
    .m_axi_p3X3_1X1_WEIGHTS_AWREGION(m_axi_p3X3_1X1_WEIGHTS_AWREGION),
    .m_axi_p3X3_1X1_WEIGHTS_AWCACHE(m_axi_p3X3_1X1_WEIGHTS_AWCACHE),
    .m_axi_p3X3_1X1_WEIGHTS_AWPROT(m_axi_p3X3_1X1_WEIGHTS_AWPROT),
    .m_axi_p3X3_1X1_WEIGHTS_AWQOS(m_axi_p3X3_1X1_WEIGHTS_AWQOS),
    .m_axi_p3X3_1X1_WEIGHTS_AWUSER(),
    .m_axi_p3X3_1X1_WEIGHTS_AWVALID(m_axi_p3X3_1X1_WEIGHTS_AWVALID),
    .m_axi_p3X3_1X1_WEIGHTS_AWREADY(m_axi_p3X3_1X1_WEIGHTS_AWREADY),
    .m_axi_p3X3_1X1_WEIGHTS_WID(),
    .m_axi_p3X3_1X1_WEIGHTS_WDATA(m_axi_p3X3_1X1_WEIGHTS_WDATA),
    .m_axi_p3X3_1X1_WEIGHTS_WSTRB(m_axi_p3X3_1X1_WEIGHTS_WSTRB),
    .m_axi_p3X3_1X1_WEIGHTS_WLAST(m_axi_p3X3_1X1_WEIGHTS_WLAST),
    .m_axi_p3X3_1X1_WEIGHTS_WUSER(),
    .m_axi_p3X3_1X1_WEIGHTS_WVALID(m_axi_p3X3_1X1_WEIGHTS_WVALID),
    .m_axi_p3X3_1X1_WEIGHTS_WREADY(m_axi_p3X3_1X1_WEIGHTS_WREADY),
    .m_axi_p3X3_1X1_WEIGHTS_BID(1'B0),
    .m_axi_p3X3_1X1_WEIGHTS_BRESP(m_axi_p3X3_1X1_WEIGHTS_BRESP),
    .m_axi_p3X3_1X1_WEIGHTS_BUSER(1'B0),
    .m_axi_p3X3_1X1_WEIGHTS_BVALID(m_axi_p3X3_1X1_WEIGHTS_BVALID),
    .m_axi_p3X3_1X1_WEIGHTS_BREADY(m_axi_p3X3_1X1_WEIGHTS_BREADY),
    .m_axi_p3X3_1X1_WEIGHTS_ARID(),
    .m_axi_p3X3_1X1_WEIGHTS_ARADDR(m_axi_p3X3_1X1_WEIGHTS_ARADDR),
    .m_axi_p3X3_1X1_WEIGHTS_ARLEN(m_axi_p3X3_1X1_WEIGHTS_ARLEN),
    .m_axi_p3X3_1X1_WEIGHTS_ARSIZE(m_axi_p3X3_1X1_WEIGHTS_ARSIZE),
    .m_axi_p3X3_1X1_WEIGHTS_ARBURST(m_axi_p3X3_1X1_WEIGHTS_ARBURST),
    .m_axi_p3X3_1X1_WEIGHTS_ARLOCK(m_axi_p3X3_1X1_WEIGHTS_ARLOCK),
    .m_axi_p3X3_1X1_WEIGHTS_ARREGION(m_axi_p3X3_1X1_WEIGHTS_ARREGION),
    .m_axi_p3X3_1X1_WEIGHTS_ARCACHE(m_axi_p3X3_1X1_WEIGHTS_ARCACHE),
    .m_axi_p3X3_1X1_WEIGHTS_ARPROT(m_axi_p3X3_1X1_WEIGHTS_ARPROT),
    .m_axi_p3X3_1X1_WEIGHTS_ARQOS(m_axi_p3X3_1X1_WEIGHTS_ARQOS),
    .m_axi_p3X3_1X1_WEIGHTS_ARUSER(),
    .m_axi_p3X3_1X1_WEIGHTS_ARVALID(m_axi_p3X3_1X1_WEIGHTS_ARVALID),
    .m_axi_p3X3_1X1_WEIGHTS_ARREADY(m_axi_p3X3_1X1_WEIGHTS_ARREADY),
    .m_axi_p3X3_1X1_WEIGHTS_RID(1'B0),
    .m_axi_p3X3_1X1_WEIGHTS_RDATA(m_axi_p3X3_1X1_WEIGHTS_RDATA),
    .m_axi_p3X3_1X1_WEIGHTS_RRESP(m_axi_p3X3_1X1_WEIGHTS_RRESP),
    .m_axi_p3X3_1X1_WEIGHTS_RLAST(m_axi_p3X3_1X1_WEIGHTS_RLAST),
    .m_axi_p3X3_1X1_WEIGHTS_RUSER(1'B0),
    .m_axi_p3X3_1X1_WEIGHTS_RVALID(m_axi_p3X3_1X1_WEIGHTS_RVALID),
    .m_axi_p3X3_1X1_WEIGHTS_RREADY(m_axi_p3X3_1X1_WEIGHTS_RREADY),
    .m_axi_DATA_BIAS_AWID(),
    .m_axi_DATA_BIAS_AWADDR(m_axi_DATA_BIAS_AWADDR),
    .m_axi_DATA_BIAS_AWLEN(m_axi_DATA_BIAS_AWLEN),
    .m_axi_DATA_BIAS_AWSIZE(m_axi_DATA_BIAS_AWSIZE),
    .m_axi_DATA_BIAS_AWBURST(m_axi_DATA_BIAS_AWBURST),
    .m_axi_DATA_BIAS_AWLOCK(m_axi_DATA_BIAS_AWLOCK),
    .m_axi_DATA_BIAS_AWREGION(m_axi_DATA_BIAS_AWREGION),
    .m_axi_DATA_BIAS_AWCACHE(m_axi_DATA_BIAS_AWCACHE),
    .m_axi_DATA_BIAS_AWPROT(m_axi_DATA_BIAS_AWPROT),
    .m_axi_DATA_BIAS_AWQOS(m_axi_DATA_BIAS_AWQOS),
    .m_axi_DATA_BIAS_AWUSER(),
    .m_axi_DATA_BIAS_AWVALID(m_axi_DATA_BIAS_AWVALID),
    .m_axi_DATA_BIAS_AWREADY(m_axi_DATA_BIAS_AWREADY),
    .m_axi_DATA_BIAS_WID(),
    .m_axi_DATA_BIAS_WDATA(m_axi_DATA_BIAS_WDATA),
    .m_axi_DATA_BIAS_WSTRB(m_axi_DATA_BIAS_WSTRB),
    .m_axi_DATA_BIAS_WLAST(m_axi_DATA_BIAS_WLAST),
    .m_axi_DATA_BIAS_WUSER(),
    .m_axi_DATA_BIAS_WVALID(m_axi_DATA_BIAS_WVALID),
    .m_axi_DATA_BIAS_WREADY(m_axi_DATA_BIAS_WREADY),
    .m_axi_DATA_BIAS_BID(1'B0),
    .m_axi_DATA_BIAS_BRESP(m_axi_DATA_BIAS_BRESP),
    .m_axi_DATA_BIAS_BUSER(1'B0),
    .m_axi_DATA_BIAS_BVALID(m_axi_DATA_BIAS_BVALID),
    .m_axi_DATA_BIAS_BREADY(m_axi_DATA_BIAS_BREADY),
    .m_axi_DATA_BIAS_ARID(),
    .m_axi_DATA_BIAS_ARADDR(m_axi_DATA_BIAS_ARADDR),
    .m_axi_DATA_BIAS_ARLEN(m_axi_DATA_BIAS_ARLEN),
    .m_axi_DATA_BIAS_ARSIZE(m_axi_DATA_BIAS_ARSIZE),
    .m_axi_DATA_BIAS_ARBURST(m_axi_DATA_BIAS_ARBURST),
    .m_axi_DATA_BIAS_ARLOCK(m_axi_DATA_BIAS_ARLOCK),
    .m_axi_DATA_BIAS_ARREGION(m_axi_DATA_BIAS_ARREGION),
    .m_axi_DATA_BIAS_ARCACHE(m_axi_DATA_BIAS_ARCACHE),
    .m_axi_DATA_BIAS_ARPROT(m_axi_DATA_BIAS_ARPROT),
    .m_axi_DATA_BIAS_ARQOS(m_axi_DATA_BIAS_ARQOS),
    .m_axi_DATA_BIAS_ARUSER(),
    .m_axi_DATA_BIAS_ARVALID(m_axi_DATA_BIAS_ARVALID),
    .m_axi_DATA_BIAS_ARREADY(m_axi_DATA_BIAS_ARREADY),
    .m_axi_DATA_BIAS_RID(1'B0),
    .m_axi_DATA_BIAS_RDATA(m_axi_DATA_BIAS_RDATA),
    .m_axi_DATA_BIAS_RRESP(m_axi_DATA_BIAS_RRESP),
    .m_axi_DATA_BIAS_RLAST(m_axi_DATA_BIAS_RLAST),
    .m_axi_DATA_BIAS_RUSER(1'B0),
    .m_axi_DATA_BIAS_RVALID(m_axi_DATA_BIAS_RVALID),
    .m_axi_DATA_BIAS_RREADY(m_axi_DATA_BIAS_RREADY)
  );
endmodule
