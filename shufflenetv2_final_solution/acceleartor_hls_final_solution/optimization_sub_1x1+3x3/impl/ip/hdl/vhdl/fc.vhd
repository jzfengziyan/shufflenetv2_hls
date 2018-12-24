-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity fc is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    m_axi_weight_V_AWVALID : OUT STD_LOGIC;
    m_axi_weight_V_AWREADY : IN STD_LOGIC;
    m_axi_weight_V_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weight_V_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weight_V_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weight_V_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weight_V_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weight_V_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weight_V_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weight_V_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weight_V_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weight_V_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_WVALID : OUT STD_LOGIC;
    m_axi_weight_V_WREADY : IN STD_LOGIC;
    m_axi_weight_V_WDATA : OUT STD_LOGIC_VECTOR (7 downto 0);
    m_axi_weight_V_WSTRB : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_WLAST : OUT STD_LOGIC;
    m_axi_weight_V_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_ARVALID : OUT STD_LOGIC;
    m_axi_weight_V_ARREADY : IN STD_LOGIC;
    m_axi_weight_V_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weight_V_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_weight_V_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weight_V_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weight_V_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weight_V_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weight_V_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_weight_V_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weight_V_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_weight_V_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_RVALID : IN STD_LOGIC;
    m_axi_weight_V_RREADY : OUT STD_LOGIC;
    m_axi_weight_V_RDATA : IN STD_LOGIC_VECTOR (7 downto 0);
    m_axi_weight_V_RLAST : IN STD_LOGIC;
    m_axi_weight_V_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weight_V_BVALID : IN STD_LOGIC;
    m_axi_weight_V_BREADY : OUT STD_LOGIC;
    m_axi_weight_V_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_weight_V_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_weight_V_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    fc_weight_V11 : IN STD_LOGIC_VECTOR (31 downto 0);
    bias_V_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    bias_V_ce0 : OUT STD_LOGIC;
    bias_V_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    m_axi_output_V_AWVALID : OUT STD_LOGIC;
    m_axi_output_V_AWREADY : IN STD_LOGIC;
    m_axi_output_V_AWADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_output_V_AWID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_AWLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_output_V_AWSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_output_V_AWBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_output_V_AWLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_output_V_AWCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_output_V_AWPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_output_V_AWQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_output_V_AWREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_output_V_AWUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_WVALID : OUT STD_LOGIC;
    m_axi_output_V_WREADY : IN STD_LOGIC;
    m_axi_output_V_WDATA : OUT STD_LOGIC_VECTOR (7 downto 0);
    m_axi_output_V_WSTRB : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_WLAST : OUT STD_LOGIC;
    m_axi_output_V_WID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_WUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_ARVALID : OUT STD_LOGIC;
    m_axi_output_V_ARREADY : IN STD_LOGIC;
    m_axi_output_V_ARADDR : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_output_V_ARID : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_ARLEN : OUT STD_LOGIC_VECTOR (31 downto 0);
    m_axi_output_V_ARSIZE : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_output_V_ARBURST : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_output_V_ARLOCK : OUT STD_LOGIC_VECTOR (1 downto 0);
    m_axi_output_V_ARCACHE : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_output_V_ARPROT : OUT STD_LOGIC_VECTOR (2 downto 0);
    m_axi_output_V_ARQOS : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_output_V_ARREGION : OUT STD_LOGIC_VECTOR (3 downto 0);
    m_axi_output_V_ARUSER : OUT STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_RVALID : IN STD_LOGIC;
    m_axi_output_V_RREADY : OUT STD_LOGIC;
    m_axi_output_V_RDATA : IN STD_LOGIC_VECTOR (7 downto 0);
    m_axi_output_V_RLAST : IN STD_LOGIC;
    m_axi_output_V_RID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_RUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_RRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_output_V_BVALID : IN STD_LOGIC;
    m_axi_output_V_BREADY : OUT STD_LOGIC;
    m_axi_output_V_BRESP : IN STD_LOGIC_VECTOR (1 downto 0);
    m_axi_output_V_BID : IN STD_LOGIC_VECTOR (0 downto 0);
    m_axi_output_V_BUSER : IN STD_LOGIC_VECTOR (0 downto 0);
    fc_output_V15 : IN STD_LOGIC_VECTOR (31 downto 0);
    avgpool_output_V_address0 : OUT STD_LOGIC_VECTOR (8 downto 0);
    avgpool_output_V_ce0 : OUT STD_LOGIC;
    avgpool_output_V_q0 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of fc is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (17 downto 0) := "000000000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (17 downto 0) := "000000000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (17 downto 0) := "000000000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (17 downto 0) := "000000000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (17 downto 0) := "000000001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (17 downto 0) := "000000010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (17 downto 0) := "000000100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (17 downto 0) := "000001000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (17 downto 0) := "000010000000000000";
    constant ap_ST_fsm_state15 : STD_LOGIC_VECTOR (17 downto 0) := "000100000000000000";
    constant ap_ST_fsm_state16 : STD_LOGIC_VECTOR (17 downto 0) := "001000000000000000";
    constant ap_ST_fsm_state17 : STD_LOGIC_VECTOR (17 downto 0) := "010000000000000000";
    constant ap_ST_fsm_state18 : STD_LOGIC_VECTOR (17 downto 0) := "100000000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv32_200 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000001000000000";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv4_A : STD_LOGIC_VECTOR (3 downto 0) := "1010";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv10_200 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (17 downto 0) := "000000000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal weight_V_blk_n_AR : STD_LOGIC;
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal weight_V_blk_n_R : STD_LOGIC;
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal output_V_blk_n_AW : STD_LOGIC;
    signal output_V_blk_n_W : STD_LOGIC;
    signal ap_CS_fsm_state14 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state14 : signal is "none";
    signal output_V_blk_n_B : STD_LOGIC;
    signal ap_CS_fsm_state18 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state18 : signal is "none";
    signal ap_sig_ioackin_m_axi_output_V_AWREADY : STD_LOGIC;
    signal co_cast2_fu_174_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal co_cast2_reg_252 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal co_33_fu_192_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal co_33_reg_260 : STD_LOGIC_VECTOR (3 downto 0);
    signal weight_V_addr_reg_265 : STD_LOGIC_VECTOR (31 downto 0);
    signal exitcond42_fu_186_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ci_15_fu_224_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal ci_15_reg_274 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal exitcond_fu_218_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal weight_V_addr_read_reg_289 : STD_LOGIC_VECTOR (7 downto 0);
    signal avgpool_output_V_loa_reg_294 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_fu_236_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal result_V_fu_230_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal result_V_reg_304 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal co_reg_133 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_sig_ioackin_m_axi_output_V_WREADY : STD_LOGIC;
    signal p_s_reg_144 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal ci_reg_156 : STD_LOGIC_VECTOR (9 downto 0);
    signal ci_cast1_fu_213_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_520_fu_202_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_reg_ioackin_m_axi_output_V_AWREADY : STD_LOGIC := '0';
    signal ap_reg_ioackin_m_axi_output_V_WREADY : STD_LOGIC := '0';
    signal ap_reg_ioackin_m_axi_weight_V_ARREADY : STD_LOGIC := '0';
    signal ap_sig_ioackin_m_axi_weight_V_ARREADY : STD_LOGIC;
    signal tmp_s_fu_178_p3 : STD_LOGIC_VECTOR (12 downto 0);
    signal tmp_519_fu_198_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (17 downto 0);

    component ShuffleNetV2_mac_cud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (7 downto 0);
        dout : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    ShuffleNetV2_mac_cud_x_U1629 : component ShuffleNetV2_mac_cud
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 8,
        din1_WIDTH => 8,
        din2_WIDTH => 8,
        dout_WIDTH => 8)
    port map (
        din0 => avgpool_output_V_loa_reg_294,
        din1 => weight_V_addr_read_reg_289,
        din2 => p_s_reg_144,
        dout => grp_fu_236_p3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_reg_ioackin_m_axi_output_V_AWREADY_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ioackin_m_axi_output_V_AWREADY <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state1)) then
                    if (not(((ap_const_logic_0 = ap_start) or (ap_const_logic_0 = ap_sig_ioackin_m_axi_output_V_AWREADY)))) then 
                        ap_reg_ioackin_m_axi_output_V_AWREADY <= ap_const_logic_0;
                    elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = m_axi_output_V_AWREADY))) then 
                        ap_reg_ioackin_m_axi_output_V_AWREADY <= ap_const_logic_1;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_ioackin_m_axi_output_V_WREADY_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ioackin_m_axi_output_V_WREADY <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state14)) then
                    if ((ap_sig_ioackin_m_axi_output_V_WREADY = ap_const_logic_1)) then 
                        ap_reg_ioackin_m_axi_output_V_WREADY <= ap_const_logic_0;
                    elsif ((ap_const_logic_1 = m_axi_output_V_WREADY)) then 
                        ap_reg_ioackin_m_axi_output_V_WREADY <= ap_const_logic_1;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ap_reg_ioackin_m_axi_weight_V_ARREADY_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_reg_ioackin_m_axi_weight_V_ARREADY <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                    if ((ap_sig_ioackin_m_axi_weight_V_ARREADY = ap_const_logic_1)) then 
                        ap_reg_ioackin_m_axi_weight_V_ARREADY <= ap_const_logic_0;
                    elsif ((ap_const_logic_1 = m_axi_weight_V_ARREADY)) then 
                        ap_reg_ioackin_m_axi_weight_V_ARREADY <= ap_const_logic_1;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ci_reg_156_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                ci_reg_156 <= ap_const_lv10_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
                ci_reg_156 <= ci_15_reg_274;
            end if; 
        end if;
    end process;

    co_reg_133_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state14) and (ap_sig_ioackin_m_axi_output_V_WREADY = ap_const_logic_1))) then 
                co_reg_133 <= co_33_reg_260;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and not(((ap_const_logic_0 = ap_start) or (ap_const_logic_0 = ap_sig_ioackin_m_axi_output_V_AWREADY))))) then 
                co_reg_133 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    p_s_reg_144_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then 
                p_s_reg_144 <= ap_const_lv8_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state12)) then 
                p_s_reg_144 <= grp_fu_236_p3;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state11) and (m_axi_weight_V_RVALID = ap_const_logic_1))) then
                avgpool_output_V_loa_reg_294 <= avgpool_output_V_q0;
                weight_V_addr_read_reg_289 <= m_axi_weight_V_RDATA;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                ci_15_reg_274 <= ci_15_fu_224_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                co_33_reg_260 <= co_33_fu_192_p2;
                    co_cast2_reg_252(3 downto 0) <= co_cast2_fu_174_p1(3 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then
                result_V_reg_304 <= result_V_fu_230_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (ap_const_lv1_0 = exitcond42_fu_186_p2))) then
                weight_V_addr_reg_265 <= tmp_520_fu_202_p2;
            end if;
        end if;
    end process;
    co_cast2_reg_252(31 downto 4) <= "0000000000000000000000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, m_axi_weight_V_RVALID, m_axi_output_V_BVALID, ap_CS_fsm_state3, ap_CS_fsm_state11, ap_CS_fsm_state14, ap_CS_fsm_state18, ap_sig_ioackin_m_axi_output_V_AWREADY, ap_CS_fsm_state2, exitcond42_fu_186_p2, ap_CS_fsm_state10, exitcond_fu_218_p2, ap_sig_ioackin_m_axi_output_V_WREADY, ap_sig_ioackin_m_axi_weight_V_ARREADY)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and not(((ap_const_logic_0 = ap_start) or (ap_const_logic_0 = ap_sig_ioackin_m_axi_output_V_AWREADY))))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond42_fu_186_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state15;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_sig_ioackin_m_axi_weight_V_ARREADY = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state10) and (exitcond_fu_218_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state13;
                else
                    ap_NS_fsm <= ap_ST_fsm_state11;
                end if;
            when ap_ST_fsm_state11 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state11) and (m_axi_weight_V_RVALID = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state12;
                else
                    ap_NS_fsm <= ap_ST_fsm_state11;
                end if;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state14;
            when ap_ST_fsm_state14 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state14) and (ap_sig_ioackin_m_axi_output_V_WREADY = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state14;
                end if;
            when ap_ST_fsm_state15 => 
                ap_NS_fsm <= ap_ST_fsm_state16;
            when ap_ST_fsm_state16 => 
                ap_NS_fsm <= ap_ST_fsm_state17;
            when ap_ST_fsm_state17 => 
                ap_NS_fsm <= ap_ST_fsm_state18;
            when ap_ST_fsm_state18 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state18) and (m_axi_output_V_BVALID = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state18;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state14 <= ap_CS_fsm(13);
    ap_CS_fsm_state18 <= ap_CS_fsm(17);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, m_axi_output_V_BVALID, ap_CS_fsm_state18)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state18) and (m_axi_output_V_BVALID = ap_const_logic_1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(m_axi_output_V_BVALID, ap_CS_fsm_state18)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state18) and (m_axi_output_V_BVALID = ap_const_logic_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_sig_ioackin_m_axi_output_V_AWREADY_assign_proc : process(m_axi_output_V_AWREADY, ap_reg_ioackin_m_axi_output_V_AWREADY)
    begin
        if ((ap_const_logic_0 = ap_reg_ioackin_m_axi_output_V_AWREADY)) then 
            ap_sig_ioackin_m_axi_output_V_AWREADY <= m_axi_output_V_AWREADY;
        else 
            ap_sig_ioackin_m_axi_output_V_AWREADY <= ap_const_logic_1;
        end if; 
    end process;


    ap_sig_ioackin_m_axi_output_V_WREADY_assign_proc : process(m_axi_output_V_WREADY, ap_reg_ioackin_m_axi_output_V_WREADY)
    begin
        if ((ap_const_logic_0 = ap_reg_ioackin_m_axi_output_V_WREADY)) then 
            ap_sig_ioackin_m_axi_output_V_WREADY <= m_axi_output_V_WREADY;
        else 
            ap_sig_ioackin_m_axi_output_V_WREADY <= ap_const_logic_1;
        end if; 
    end process;


    ap_sig_ioackin_m_axi_weight_V_ARREADY_assign_proc : process(m_axi_weight_V_ARREADY, ap_reg_ioackin_m_axi_weight_V_ARREADY)
    begin
        if ((ap_const_logic_0 = ap_reg_ioackin_m_axi_weight_V_ARREADY)) then 
            ap_sig_ioackin_m_axi_weight_V_ARREADY <= m_axi_weight_V_ARREADY;
        else 
            ap_sig_ioackin_m_axi_weight_V_ARREADY <= ap_const_logic_1;
        end if; 
    end process;

    avgpool_output_V_address0 <= ci_cast1_fu_213_p1(9 - 1 downto 0);

    avgpool_output_V_ce0_assign_proc : process(ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            avgpool_output_V_ce0 <= ap_const_logic_1;
        else 
            avgpool_output_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    bias_V_address0 <= co_cast2_reg_252(4 - 1 downto 0);

    bias_V_ce0_assign_proc : process(ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            bias_V_ce0 <= ap_const_logic_1;
        else 
            bias_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ci_15_fu_224_p2 <= std_logic_vector(unsigned(ci_reg_156) + unsigned(ap_const_lv10_1));
    ci_cast1_fu_213_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ci_reg_156),32));
    co_33_fu_192_p2 <= std_logic_vector(unsigned(co_reg_133) + unsigned(ap_const_lv4_1));
    co_cast2_fu_174_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(co_reg_133),32));
    exitcond42_fu_186_p2 <= "1" when (co_reg_133 = ap_const_lv4_A) else "0";
    exitcond_fu_218_p2 <= "1" when (ci_reg_156 = ap_const_lv10_200) else "0";
    m_axi_output_V_ARADDR <= ap_const_lv32_0;
    m_axi_output_V_ARBURST <= ap_const_lv2_0;
    m_axi_output_V_ARCACHE <= ap_const_lv4_0;
    m_axi_output_V_ARID <= ap_const_lv1_0;
    m_axi_output_V_ARLEN <= ap_const_lv32_0;
    m_axi_output_V_ARLOCK <= ap_const_lv2_0;
    m_axi_output_V_ARPROT <= ap_const_lv3_0;
    m_axi_output_V_ARQOS <= ap_const_lv4_0;
    m_axi_output_V_ARREGION <= ap_const_lv4_0;
    m_axi_output_V_ARSIZE <= ap_const_lv3_0;
    m_axi_output_V_ARUSER <= ap_const_lv1_0;
    m_axi_output_V_ARVALID <= ap_const_logic_0;
    m_axi_output_V_AWADDR <= fc_output_V15;
    m_axi_output_V_AWBURST <= ap_const_lv2_0;
    m_axi_output_V_AWCACHE <= ap_const_lv4_0;
    m_axi_output_V_AWID <= ap_const_lv1_0;
    m_axi_output_V_AWLEN <= ap_const_lv32_A;
    m_axi_output_V_AWLOCK <= ap_const_lv2_0;
    m_axi_output_V_AWPROT <= ap_const_lv3_0;
    m_axi_output_V_AWQOS <= ap_const_lv4_0;
    m_axi_output_V_AWREGION <= ap_const_lv4_0;
    m_axi_output_V_AWSIZE <= ap_const_lv3_0;
    m_axi_output_V_AWUSER <= ap_const_lv1_0;

    m_axi_output_V_AWVALID_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_reg_ioackin_m_axi_output_V_AWREADY)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1) and (ap_const_logic_0 = ap_reg_ioackin_m_axi_output_V_AWREADY))) then 
            m_axi_output_V_AWVALID <= ap_const_logic_1;
        else 
            m_axi_output_V_AWVALID <= ap_const_logic_0;
        end if; 
    end process;


    m_axi_output_V_BREADY_assign_proc : process(m_axi_output_V_BVALID, ap_CS_fsm_state18)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state18) and (m_axi_output_V_BVALID = ap_const_logic_1))) then 
            m_axi_output_V_BREADY <= ap_const_logic_1;
        else 
            m_axi_output_V_BREADY <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_output_V_RREADY <= ap_const_logic_0;
    m_axi_output_V_WDATA <= result_V_reg_304;
    m_axi_output_V_WID <= ap_const_lv1_0;
    m_axi_output_V_WLAST <= ap_const_logic_0;
    m_axi_output_V_WSTRB <= ap_const_lv1_1;
    m_axi_output_V_WUSER <= ap_const_lv1_0;

    m_axi_output_V_WVALID_assign_proc : process(ap_CS_fsm_state14, ap_reg_ioackin_m_axi_output_V_WREADY)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state14) and (ap_const_logic_0 = ap_reg_ioackin_m_axi_output_V_WREADY))) then 
            m_axi_output_V_WVALID <= ap_const_logic_1;
        else 
            m_axi_output_V_WVALID <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_weight_V_ARADDR <= weight_V_addr_reg_265;
    m_axi_weight_V_ARBURST <= ap_const_lv2_0;
    m_axi_weight_V_ARCACHE <= ap_const_lv4_0;
    m_axi_weight_V_ARID <= ap_const_lv1_0;
    m_axi_weight_V_ARLEN <= ap_const_lv32_200;
    m_axi_weight_V_ARLOCK <= ap_const_lv2_0;
    m_axi_weight_V_ARPROT <= ap_const_lv3_0;
    m_axi_weight_V_ARQOS <= ap_const_lv4_0;
    m_axi_weight_V_ARREGION <= ap_const_lv4_0;
    m_axi_weight_V_ARSIZE <= ap_const_lv3_0;
    m_axi_weight_V_ARUSER <= ap_const_lv1_0;

    m_axi_weight_V_ARVALID_assign_proc : process(ap_CS_fsm_state3, ap_reg_ioackin_m_axi_weight_V_ARREADY)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_logic_0 = ap_reg_ioackin_m_axi_weight_V_ARREADY))) then 
            m_axi_weight_V_ARVALID <= ap_const_logic_1;
        else 
            m_axi_weight_V_ARVALID <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_weight_V_AWADDR <= ap_const_lv32_0;
    m_axi_weight_V_AWBURST <= ap_const_lv2_0;
    m_axi_weight_V_AWCACHE <= ap_const_lv4_0;
    m_axi_weight_V_AWID <= ap_const_lv1_0;
    m_axi_weight_V_AWLEN <= ap_const_lv32_0;
    m_axi_weight_V_AWLOCK <= ap_const_lv2_0;
    m_axi_weight_V_AWPROT <= ap_const_lv3_0;
    m_axi_weight_V_AWQOS <= ap_const_lv4_0;
    m_axi_weight_V_AWREGION <= ap_const_lv4_0;
    m_axi_weight_V_AWSIZE <= ap_const_lv3_0;
    m_axi_weight_V_AWUSER <= ap_const_lv1_0;
    m_axi_weight_V_AWVALID <= ap_const_logic_0;
    m_axi_weight_V_BREADY <= ap_const_logic_0;

    m_axi_weight_V_RREADY_assign_proc : process(m_axi_weight_V_RVALID, ap_CS_fsm_state11)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state11) and (m_axi_weight_V_RVALID = ap_const_logic_1))) then 
            m_axi_weight_V_RREADY <= ap_const_logic_1;
        else 
            m_axi_weight_V_RREADY <= ap_const_logic_0;
        end if; 
    end process;

    m_axi_weight_V_WDATA <= ap_const_lv8_0;
    m_axi_weight_V_WID <= ap_const_lv1_0;
    m_axi_weight_V_WLAST <= ap_const_logic_0;
    m_axi_weight_V_WSTRB <= ap_const_lv1_0;
    m_axi_weight_V_WUSER <= ap_const_lv1_0;
    m_axi_weight_V_WVALID <= ap_const_logic_0;

    output_V_blk_n_AW_assign_proc : process(ap_start, ap_CS_fsm_state1, m_axi_output_V_AWREADY)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
            output_V_blk_n_AW <= m_axi_output_V_AWREADY;
        else 
            output_V_blk_n_AW <= ap_const_logic_1;
        end if; 
    end process;


    output_V_blk_n_B_assign_proc : process(m_axi_output_V_BVALID, ap_CS_fsm_state18)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state18)) then 
            output_V_blk_n_B <= m_axi_output_V_BVALID;
        else 
            output_V_blk_n_B <= ap_const_logic_1;
        end if; 
    end process;


    output_V_blk_n_W_assign_proc : process(m_axi_output_V_WREADY, ap_CS_fsm_state14)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
            output_V_blk_n_W <= m_axi_output_V_WREADY;
        else 
            output_V_blk_n_W <= ap_const_logic_1;
        end if; 
    end process;

    result_V_fu_230_p2 <= std_logic_vector(unsigned(bias_V_q0) + unsigned(p_s_reg_144));
    tmp_519_fu_198_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_178_p3),32));
    tmp_520_fu_202_p2 <= std_logic_vector(unsigned(tmp_519_fu_198_p1) + unsigned(fc_weight_V11));
    tmp_s_fu_178_p3 <= (co_reg_133 & ap_const_lv9_0);

    weight_V_blk_n_AR_assign_proc : process(m_axi_weight_V_ARREADY, ap_CS_fsm_state3)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            weight_V_blk_n_AR <= m_axi_weight_V_ARREADY;
        else 
            weight_V_blk_n_AR <= ap_const_logic_1;
        end if; 
    end process;


    weight_V_blk_n_R_assign_proc : process(m_axi_weight_V_RVALID, ap_CS_fsm_state11)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
            weight_V_blk_n_R <= m_axi_weight_V_RVALID;
        else 
            weight_V_blk_n_R <= ap_const_logic_1;
        end if; 
    end process;

end behav;