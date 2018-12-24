-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.2 (win64) Build 1909853 Thu Jun 15 18:39:09 MDT 2017
-- Date        : Sat Dec 22 01:11:09 2018
-- Host        : DESKTOP-2C3UA9R running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ accelerator_bd_ShuffleNetV2_0_0_stub.vhdl
-- Design      : accelerator_bd_ShuffleNetV2_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_CTL_AWADDR : in STD_LOGIC_VECTOR ( 7 downto 0 );
    s_axi_CTL_AWVALID : in STD_LOGIC;
    s_axi_CTL_AWREADY : out STD_LOGIC;
    s_axi_CTL_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_CTL_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_CTL_WVALID : in STD_LOGIC;
    s_axi_CTL_WREADY : out STD_LOGIC;
    s_axi_CTL_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_CTL_BVALID : out STD_LOGIC;
    s_axi_CTL_BREADY : in STD_LOGIC;
    s_axi_CTL_ARADDR : in STD_LOGIC_VECTOR ( 7 downto 0 );
    s_axi_CTL_ARVALID : in STD_LOGIC;
    s_axi_CTL_ARREADY : out STD_LOGIC;
    s_axi_CTL_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_CTL_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_CTL_RVALID : out STD_LOGIC;
    s_axi_CTL_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_AWVALID : out STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_AWREADY : in STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_WLAST : out STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_WVALID : out STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_WREADY : in STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_BVALID : in STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_BREADY : out STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_ARVALID : out STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_ARREADY : in STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_INPUT_OUTPUT_RLAST : in STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_RVALID : in STD_LOGIC;
    m_axi_DATA_INPUT_OUTPUT_RREADY : out STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_AWVALID : out STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_AWREADY : in STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_WLAST : out STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_WVALID : out STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_WREADY : in STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_BVALID : in STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_BREADY : out STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_ARVALID : out STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_ARREADY : in STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_OTHER_WEIGHTS_RLAST : in STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_RVALID : in STD_LOGIC;
    m_axi_DATA_OTHER_WEIGHTS_RREADY : out STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_AWVALID : out STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_AWREADY : in STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_WLAST : out STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_WVALID : out STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_WREADY : in STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_BVALID : in STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_BREADY : out STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_ARVALID : out STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_ARREADY : in STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_p3X3_1X1_WEIGHTS_RLAST : in STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_RVALID : in STD_LOGIC;
    m_axi_p3X3_1X1_WEIGHTS_RREADY : out STD_LOGIC;
    m_axi_DATA_BIAS_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_BIAS_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_BIAS_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_BIAS_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_BIAS_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_BIAS_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_BIAS_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_AWVALID : out STD_LOGIC;
    m_axi_DATA_BIAS_AWREADY : in STD_LOGIC;
    m_axi_DATA_BIAS_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_BIAS_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_WLAST : out STD_LOGIC;
    m_axi_DATA_BIAS_WVALID : out STD_LOGIC;
    m_axi_DATA_BIAS_WREADY : in STD_LOGIC;
    m_axi_DATA_BIAS_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_BIAS_BVALID : in STD_LOGIC;
    m_axi_DATA_BIAS_BREADY : out STD_LOGIC;
    m_axi_DATA_BIAS_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_BIAS_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_BIAS_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_BIAS_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_BIAS_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_BIAS_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_BIAS_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_BIAS_ARVALID : out STD_LOGIC;
    m_axi_DATA_BIAS_ARREADY : in STD_LOGIC;
    m_axi_DATA_BIAS_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_BIAS_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_BIAS_RLAST : in STD_LOGIC;
    m_axi_DATA_BIAS_RVALID : in STD_LOGIC;
    m_axi_DATA_BIAS_RREADY : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_CTL_AWADDR[7:0],s_axi_CTL_AWVALID,s_axi_CTL_AWREADY,s_axi_CTL_WDATA[31:0],s_axi_CTL_WSTRB[3:0],s_axi_CTL_WVALID,s_axi_CTL_WREADY,s_axi_CTL_BRESP[1:0],s_axi_CTL_BVALID,s_axi_CTL_BREADY,s_axi_CTL_ARADDR[7:0],s_axi_CTL_ARVALID,s_axi_CTL_ARREADY,s_axi_CTL_RDATA[31:0],s_axi_CTL_RRESP[1:0],s_axi_CTL_RVALID,s_axi_CTL_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_DATA_INPUT_OUTPUT_AWADDR[31:0],m_axi_DATA_INPUT_OUTPUT_AWLEN[7:0],m_axi_DATA_INPUT_OUTPUT_AWSIZE[2:0],m_axi_DATA_INPUT_OUTPUT_AWBURST[1:0],m_axi_DATA_INPUT_OUTPUT_AWLOCK[1:0],m_axi_DATA_INPUT_OUTPUT_AWREGION[3:0],m_axi_DATA_INPUT_OUTPUT_AWCACHE[3:0],m_axi_DATA_INPUT_OUTPUT_AWPROT[2:0],m_axi_DATA_INPUT_OUTPUT_AWQOS[3:0],m_axi_DATA_INPUT_OUTPUT_AWVALID,m_axi_DATA_INPUT_OUTPUT_AWREADY,m_axi_DATA_INPUT_OUTPUT_WDATA[31:0],m_axi_DATA_INPUT_OUTPUT_WSTRB[3:0],m_axi_DATA_INPUT_OUTPUT_WLAST,m_axi_DATA_INPUT_OUTPUT_WVALID,m_axi_DATA_INPUT_OUTPUT_WREADY,m_axi_DATA_INPUT_OUTPUT_BRESP[1:0],m_axi_DATA_INPUT_OUTPUT_BVALID,m_axi_DATA_INPUT_OUTPUT_BREADY,m_axi_DATA_INPUT_OUTPUT_ARADDR[31:0],m_axi_DATA_INPUT_OUTPUT_ARLEN[7:0],m_axi_DATA_INPUT_OUTPUT_ARSIZE[2:0],m_axi_DATA_INPUT_OUTPUT_ARBURST[1:0],m_axi_DATA_INPUT_OUTPUT_ARLOCK[1:0],m_axi_DATA_INPUT_OUTPUT_ARREGION[3:0],m_axi_DATA_INPUT_OUTPUT_ARCACHE[3:0],m_axi_DATA_INPUT_OUTPUT_ARPROT[2:0],m_axi_DATA_INPUT_OUTPUT_ARQOS[3:0],m_axi_DATA_INPUT_OUTPUT_ARVALID,m_axi_DATA_INPUT_OUTPUT_ARREADY,m_axi_DATA_INPUT_OUTPUT_RDATA[31:0],m_axi_DATA_INPUT_OUTPUT_RRESP[1:0],m_axi_DATA_INPUT_OUTPUT_RLAST,m_axi_DATA_INPUT_OUTPUT_RVALID,m_axi_DATA_INPUT_OUTPUT_RREADY,m_axi_DATA_OTHER_WEIGHTS_AWADDR[31:0],m_axi_DATA_OTHER_WEIGHTS_AWLEN[7:0],m_axi_DATA_OTHER_WEIGHTS_AWSIZE[2:0],m_axi_DATA_OTHER_WEIGHTS_AWBURST[1:0],m_axi_DATA_OTHER_WEIGHTS_AWLOCK[1:0],m_axi_DATA_OTHER_WEIGHTS_AWREGION[3:0],m_axi_DATA_OTHER_WEIGHTS_AWCACHE[3:0],m_axi_DATA_OTHER_WEIGHTS_AWPROT[2:0],m_axi_DATA_OTHER_WEIGHTS_AWQOS[3:0],m_axi_DATA_OTHER_WEIGHTS_AWVALID,m_axi_DATA_OTHER_WEIGHTS_AWREADY,m_axi_DATA_OTHER_WEIGHTS_WDATA[31:0],m_axi_DATA_OTHER_WEIGHTS_WSTRB[3:0],m_axi_DATA_OTHER_WEIGHTS_WLAST,m_axi_DATA_OTHER_WEIGHTS_WVALID,m_axi_DATA_OTHER_WEIGHTS_WREADY,m_axi_DATA_OTHER_WEIGHTS_BRESP[1:0],m_axi_DATA_OTHER_WEIGHTS_BVALID,m_axi_DATA_OTHER_WEIGHTS_BREADY,m_axi_DATA_OTHER_WEIGHTS_ARADDR[31:0],m_axi_DATA_OTHER_WEIGHTS_ARLEN[7:0],m_axi_DATA_OTHER_WEIGHTS_ARSIZE[2:0],m_axi_DATA_OTHER_WEIGHTS_ARBURST[1:0],m_axi_DATA_OTHER_WEIGHTS_ARLOCK[1:0],m_axi_DATA_OTHER_WEIGHTS_ARREGION[3:0],m_axi_DATA_OTHER_WEIGHTS_ARCACHE[3:0],m_axi_DATA_OTHER_WEIGHTS_ARPROT[2:0],m_axi_DATA_OTHER_WEIGHTS_ARQOS[3:0],m_axi_DATA_OTHER_WEIGHTS_ARVALID,m_axi_DATA_OTHER_WEIGHTS_ARREADY,m_axi_DATA_OTHER_WEIGHTS_RDATA[31:0],m_axi_DATA_OTHER_WEIGHTS_RRESP[1:0],m_axi_DATA_OTHER_WEIGHTS_RLAST,m_axi_DATA_OTHER_WEIGHTS_RVALID,m_axi_DATA_OTHER_WEIGHTS_RREADY,m_axi_p3X3_1X1_WEIGHTS_AWADDR[31:0],m_axi_p3X3_1X1_WEIGHTS_AWLEN[7:0],m_axi_p3X3_1X1_WEIGHTS_AWSIZE[2:0],m_axi_p3X3_1X1_WEIGHTS_AWBURST[1:0],m_axi_p3X3_1X1_WEIGHTS_AWLOCK[1:0],m_axi_p3X3_1X1_WEIGHTS_AWREGION[3:0],m_axi_p3X3_1X1_WEIGHTS_AWCACHE[3:0],m_axi_p3X3_1X1_WEIGHTS_AWPROT[2:0],m_axi_p3X3_1X1_WEIGHTS_AWQOS[3:0],m_axi_p3X3_1X1_WEIGHTS_AWVALID,m_axi_p3X3_1X1_WEIGHTS_AWREADY,m_axi_p3X3_1X1_WEIGHTS_WDATA[31:0],m_axi_p3X3_1X1_WEIGHTS_WSTRB[3:0],m_axi_p3X3_1X1_WEIGHTS_WLAST,m_axi_p3X3_1X1_WEIGHTS_WVALID,m_axi_p3X3_1X1_WEIGHTS_WREADY,m_axi_p3X3_1X1_WEIGHTS_BRESP[1:0],m_axi_p3X3_1X1_WEIGHTS_BVALID,m_axi_p3X3_1X1_WEIGHTS_BREADY,m_axi_p3X3_1X1_WEIGHTS_ARADDR[31:0],m_axi_p3X3_1X1_WEIGHTS_ARLEN[7:0],m_axi_p3X3_1X1_WEIGHTS_ARSIZE[2:0],m_axi_p3X3_1X1_WEIGHTS_ARBURST[1:0],m_axi_p3X3_1X1_WEIGHTS_ARLOCK[1:0],m_axi_p3X3_1X1_WEIGHTS_ARREGION[3:0],m_axi_p3X3_1X1_WEIGHTS_ARCACHE[3:0],m_axi_p3X3_1X1_WEIGHTS_ARPROT[2:0],m_axi_p3X3_1X1_WEIGHTS_ARQOS[3:0],m_axi_p3X3_1X1_WEIGHTS_ARVALID,m_axi_p3X3_1X1_WEIGHTS_ARREADY,m_axi_p3X3_1X1_WEIGHTS_RDATA[31:0],m_axi_p3X3_1X1_WEIGHTS_RRESP[1:0],m_axi_p3X3_1X1_WEIGHTS_RLAST,m_axi_p3X3_1X1_WEIGHTS_RVALID,m_axi_p3X3_1X1_WEIGHTS_RREADY,m_axi_DATA_BIAS_AWADDR[31:0],m_axi_DATA_BIAS_AWLEN[7:0],m_axi_DATA_BIAS_AWSIZE[2:0],m_axi_DATA_BIAS_AWBURST[1:0],m_axi_DATA_BIAS_AWLOCK[1:0],m_axi_DATA_BIAS_AWREGION[3:0],m_axi_DATA_BIAS_AWCACHE[3:0],m_axi_DATA_BIAS_AWPROT[2:0],m_axi_DATA_BIAS_AWQOS[3:0],m_axi_DATA_BIAS_AWVALID,m_axi_DATA_BIAS_AWREADY,m_axi_DATA_BIAS_WDATA[31:0],m_axi_DATA_BIAS_WSTRB[3:0],m_axi_DATA_BIAS_WLAST,m_axi_DATA_BIAS_WVALID,m_axi_DATA_BIAS_WREADY,m_axi_DATA_BIAS_BRESP[1:0],m_axi_DATA_BIAS_BVALID,m_axi_DATA_BIAS_BREADY,m_axi_DATA_BIAS_ARADDR[31:0],m_axi_DATA_BIAS_ARLEN[7:0],m_axi_DATA_BIAS_ARSIZE[2:0],m_axi_DATA_BIAS_ARBURST[1:0],m_axi_DATA_BIAS_ARLOCK[1:0],m_axi_DATA_BIAS_ARREGION[3:0],m_axi_DATA_BIAS_ARCACHE[3:0],m_axi_DATA_BIAS_ARPROT[2:0],m_axi_DATA_BIAS_ARQOS[3:0],m_axi_DATA_BIAS_ARVALID,m_axi_DATA_BIAS_ARREADY,m_axi_DATA_BIAS_RDATA[31:0],m_axi_DATA_BIAS_RRESP[1:0],m_axi_DATA_BIAS_RLAST,m_axi_DATA_BIAS_RVALID,m_axi_DATA_BIAS_RREADY";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "ShuffleNetV2,Vivado 2017.2";
begin
end;
