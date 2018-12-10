-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.2 (win64) Build 1909853 Thu Jun 15 18:39:09 MDT 2017
-- Date        : Tue Oct 17 00:09:22 2017
-- Host        : RhoG_Squadron running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ accelerator_bd_vector_multiplier_0_0_stub.vhdl
-- Design      : accelerator_bd_vector_multiplier_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg484-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    s_axi_CTL_AWADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_CTL_AWVALID : in STD_LOGIC;
    s_axi_CTL_AWREADY : out STD_LOGIC;
    s_axi_CTL_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_CTL_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s_axi_CTL_WVALID : in STD_LOGIC;
    s_axi_CTL_WREADY : out STD_LOGIC;
    s_axi_CTL_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_CTL_BVALID : out STD_LOGIC;
    s_axi_CTL_BREADY : in STD_LOGIC;
    s_axi_CTL_ARADDR : in STD_LOGIC_VECTOR ( 5 downto 0 );
    s_axi_CTL_ARVALID : in STD_LOGIC;
    s_axi_CTL_ARREADY : out STD_LOGIC;
    s_axi_CTL_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    s_axi_CTL_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    s_axi_CTL_RVALID : out STD_LOGIC;
    s_axi_CTL_RREADY : in STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst_n : in STD_LOGIC;
    interrupt : out STD_LOGIC;
    m_axi_DATA_A_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_A_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_A_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_A_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_A_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_A_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_A_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_AWVALID : out STD_LOGIC;
    m_axi_DATA_A_AWREADY : in STD_LOGIC;
    m_axi_DATA_A_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_A_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_WLAST : out STD_LOGIC;
    m_axi_DATA_A_WVALID : out STD_LOGIC;
    m_axi_DATA_A_WREADY : in STD_LOGIC;
    m_axi_DATA_A_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_A_BVALID : in STD_LOGIC;
    m_axi_DATA_A_BREADY : out STD_LOGIC;
    m_axi_DATA_A_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_A_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_A_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_A_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_A_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_A_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_A_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_A_ARVALID : out STD_LOGIC;
    m_axi_DATA_A_ARREADY : in STD_LOGIC;
    m_axi_DATA_A_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_A_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_A_RLAST : in STD_LOGIC;
    m_axi_DATA_A_RVALID : in STD_LOGIC;
    m_axi_DATA_A_RREADY : out STD_LOGIC;
    m_axi_DATA_B_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_B_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_B_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_B_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_B_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_B_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_B_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_AWVALID : out STD_LOGIC;
    m_axi_DATA_B_AWREADY : in STD_LOGIC;
    m_axi_DATA_B_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_B_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_WLAST : out STD_LOGIC;
    m_axi_DATA_B_WVALID : out STD_LOGIC;
    m_axi_DATA_B_WREADY : in STD_LOGIC;
    m_axi_DATA_B_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_B_BVALID : in STD_LOGIC;
    m_axi_DATA_B_BREADY : out STD_LOGIC;
    m_axi_DATA_B_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_B_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_B_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_B_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_B_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_B_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_B_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_B_ARVALID : out STD_LOGIC;
    m_axi_DATA_B_ARREADY : in STD_LOGIC;
    m_axi_DATA_B_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_B_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_B_RLAST : in STD_LOGIC;
    m_axi_DATA_B_RVALID : in STD_LOGIC;
    m_axi_DATA_B_RREADY : out STD_LOGIC;
    m_axi_DATA_C_AWADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_C_AWLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_C_AWSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_C_AWBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_C_AWLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_C_AWREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_AWCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_AWPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_C_AWQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_AWVALID : out STD_LOGIC;
    m_axi_DATA_C_AWREADY : in STD_LOGIC;
    m_axi_DATA_C_WDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_C_WSTRB : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_WLAST : out STD_LOGIC;
    m_axi_DATA_C_WVALID : out STD_LOGIC;
    m_axi_DATA_C_WREADY : in STD_LOGIC;
    m_axi_DATA_C_BRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_C_BVALID : in STD_LOGIC;
    m_axi_DATA_C_BREADY : out STD_LOGIC;
    m_axi_DATA_C_ARADDR : out STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_C_ARLEN : out STD_LOGIC_VECTOR ( 7 downto 0 );
    m_axi_DATA_C_ARSIZE : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_C_ARBURST : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_C_ARLOCK : out STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_C_ARREGION : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_ARCACHE : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_ARPROT : out STD_LOGIC_VECTOR ( 2 downto 0 );
    m_axi_DATA_C_ARQOS : out STD_LOGIC_VECTOR ( 3 downto 0 );
    m_axi_DATA_C_ARVALID : out STD_LOGIC;
    m_axi_DATA_C_ARREADY : in STD_LOGIC;
    m_axi_DATA_C_RDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    m_axi_DATA_C_RRESP : in STD_LOGIC_VECTOR ( 1 downto 0 );
    m_axi_DATA_C_RLAST : in STD_LOGIC;
    m_axi_DATA_C_RVALID : in STD_LOGIC;
    m_axi_DATA_C_RREADY : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "s_axi_CTL_AWADDR[5:0],s_axi_CTL_AWVALID,s_axi_CTL_AWREADY,s_axi_CTL_WDATA[31:0],s_axi_CTL_WSTRB[3:0],s_axi_CTL_WVALID,s_axi_CTL_WREADY,s_axi_CTL_BRESP[1:0],s_axi_CTL_BVALID,s_axi_CTL_BREADY,s_axi_CTL_ARADDR[5:0],s_axi_CTL_ARVALID,s_axi_CTL_ARREADY,s_axi_CTL_RDATA[31:0],s_axi_CTL_RRESP[1:0],s_axi_CTL_RVALID,s_axi_CTL_RREADY,ap_clk,ap_rst_n,interrupt,m_axi_DATA_A_AWADDR[31:0],m_axi_DATA_A_AWLEN[7:0],m_axi_DATA_A_AWSIZE[2:0],m_axi_DATA_A_AWBURST[1:0],m_axi_DATA_A_AWLOCK[1:0],m_axi_DATA_A_AWREGION[3:0],m_axi_DATA_A_AWCACHE[3:0],m_axi_DATA_A_AWPROT[2:0],m_axi_DATA_A_AWQOS[3:0],m_axi_DATA_A_AWVALID,m_axi_DATA_A_AWREADY,m_axi_DATA_A_WDATA[31:0],m_axi_DATA_A_WSTRB[3:0],m_axi_DATA_A_WLAST,m_axi_DATA_A_WVALID,m_axi_DATA_A_WREADY,m_axi_DATA_A_BRESP[1:0],m_axi_DATA_A_BVALID,m_axi_DATA_A_BREADY,m_axi_DATA_A_ARADDR[31:0],m_axi_DATA_A_ARLEN[7:0],m_axi_DATA_A_ARSIZE[2:0],m_axi_DATA_A_ARBURST[1:0],m_axi_DATA_A_ARLOCK[1:0],m_axi_DATA_A_ARREGION[3:0],m_axi_DATA_A_ARCACHE[3:0],m_axi_DATA_A_ARPROT[2:0],m_axi_DATA_A_ARQOS[3:0],m_axi_DATA_A_ARVALID,m_axi_DATA_A_ARREADY,m_axi_DATA_A_RDATA[31:0],m_axi_DATA_A_RRESP[1:0],m_axi_DATA_A_RLAST,m_axi_DATA_A_RVALID,m_axi_DATA_A_RREADY,m_axi_DATA_B_AWADDR[31:0],m_axi_DATA_B_AWLEN[7:0],m_axi_DATA_B_AWSIZE[2:0],m_axi_DATA_B_AWBURST[1:0],m_axi_DATA_B_AWLOCK[1:0],m_axi_DATA_B_AWREGION[3:0],m_axi_DATA_B_AWCACHE[3:0],m_axi_DATA_B_AWPROT[2:0],m_axi_DATA_B_AWQOS[3:0],m_axi_DATA_B_AWVALID,m_axi_DATA_B_AWREADY,m_axi_DATA_B_WDATA[31:0],m_axi_DATA_B_WSTRB[3:0],m_axi_DATA_B_WLAST,m_axi_DATA_B_WVALID,m_axi_DATA_B_WREADY,m_axi_DATA_B_BRESP[1:0],m_axi_DATA_B_BVALID,m_axi_DATA_B_BREADY,m_axi_DATA_B_ARADDR[31:0],m_axi_DATA_B_ARLEN[7:0],m_axi_DATA_B_ARSIZE[2:0],m_axi_DATA_B_ARBURST[1:0],m_axi_DATA_B_ARLOCK[1:0],m_axi_DATA_B_ARREGION[3:0],m_axi_DATA_B_ARCACHE[3:0],m_axi_DATA_B_ARPROT[2:0],m_axi_DATA_B_ARQOS[3:0],m_axi_DATA_B_ARVALID,m_axi_DATA_B_ARREADY,m_axi_DATA_B_RDATA[31:0],m_axi_DATA_B_RRESP[1:0],m_axi_DATA_B_RLAST,m_axi_DATA_B_RVALID,m_axi_DATA_B_RREADY,m_axi_DATA_C_AWADDR[31:0],m_axi_DATA_C_AWLEN[7:0],m_axi_DATA_C_AWSIZE[2:0],m_axi_DATA_C_AWBURST[1:0],m_axi_DATA_C_AWLOCK[1:0],m_axi_DATA_C_AWREGION[3:0],m_axi_DATA_C_AWCACHE[3:0],m_axi_DATA_C_AWPROT[2:0],m_axi_DATA_C_AWQOS[3:0],m_axi_DATA_C_AWVALID,m_axi_DATA_C_AWREADY,m_axi_DATA_C_WDATA[31:0],m_axi_DATA_C_WSTRB[3:0],m_axi_DATA_C_WLAST,m_axi_DATA_C_WVALID,m_axi_DATA_C_WREADY,m_axi_DATA_C_BRESP[1:0],m_axi_DATA_C_BVALID,m_axi_DATA_C_BREADY,m_axi_DATA_C_ARADDR[31:0],m_axi_DATA_C_ARLEN[7:0],m_axi_DATA_C_ARSIZE[2:0],m_axi_DATA_C_ARBURST[1:0],m_axi_DATA_C_ARLOCK[1:0],m_axi_DATA_C_ARREGION[3:0],m_axi_DATA_C_ARCACHE[3:0],m_axi_DATA_C_ARPROT[2:0],m_axi_DATA_C_ARQOS[3:0],m_axi_DATA_C_ARVALID,m_axi_DATA_C_ARREADY,m_axi_DATA_C_RDATA[31:0],m_axi_DATA_C_RRESP[1:0],m_axi_DATA_C_RLAST,m_axi_DATA_C_RVALID,m_axi_DATA_C_RREADY";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "vector_multiplier,Vivado 2017.2";
begin
end;
