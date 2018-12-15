-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity subconv_1x1_8p_p is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    weight_V_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    weight_V_ce0 : OUT STD_LOGIC;
    weight_V_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    bias_V_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    bias_V_ce0 : OUT STD_LOGIC;
    bias_V_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    shuffleunit1_7_outpu_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    shuffleunit1_7_outpu_ce0 : OUT STD_LOGIC;
    shuffleunit1_7_outpu_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    ShuffleConvs_2_Downs_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    ShuffleConvs_2_Downs_ce0 : OUT STD_LOGIC;
    ShuffleConvs_2_Downs_we0 : OUT STD_LOGIC;
    ShuffleConvs_2_Downs_d0 : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of subconv_1x1_8p_p is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (13 downto 0) := "00000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (13 downto 0) := "00000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (13 downto 0) := "00000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (13 downto 0) := "00000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (13 downto 0) := "00000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (13 downto 0) := "00000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (13 downto 0) := "00000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (13 downto 0) := "00001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (13 downto 0) := "00010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (13 downto 0) := "00100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (13 downto 0) := "01000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (13 downto 0) := "10000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_9 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001001";
    constant ap_const_lv32_A : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001010";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv32_D : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001101";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv7_60 : STD_LOGIC_VECTOR (6 downto 0) := "1100000";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv4_9 : STD_LOGIC_VECTOR (3 downto 0) := "1001";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_E : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001110";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv8_7F : STD_LOGIC_VECTOR (7 downto 0) := "01111111";
    constant ap_const_lv8_80 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (13 downto 0) := "00000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal co_7_fu_194_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal co_7_reg_776 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_126_fu_229_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_126_reg_781 : STD_LOGIC_VECTOR (14 downto 0);
    signal exitcond7_fu_188_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_129_fu_259_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_129_reg_786 : STD_LOGIC_VECTOR (10 downto 0);
    signal bias_V_addr_reg_791 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_cast_fu_271_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_cast_reg_799 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal exitcond8_fu_265_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_133_fu_304_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_133_reg_804 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_104_cast_fu_316_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_104_cast_reg_812 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal exitcond9_fu_310_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ShuffleConvs_2_Downs_reg_817 : STD_LOGIC_VECTOR (13 downto 0);
    signal h_7_fu_330_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ci_1_fu_342_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal ci_1_reg_830 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal exitcond_fu_336_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_144_fu_427_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_144_reg_840 : STD_LOGIC_VECTOR (14 downto 0);
    signal w_7_fu_432_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal w_7_reg_845 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal weight_V_load_reg_855 : STD_LOGIC_VECTOR (7 downto 0);
    signal shuffleunit1_7_outpu_1_reg_860 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal p_Val2_47_fu_448_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal p_Val2_47_reg_865 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_146_reg_870 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_48_fu_474_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal p_Val2_48_reg_875 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal signbit_reg_880 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_50_fu_508_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_50_reg_887 : STD_LOGIC_VECTOR (7 downto 0);
    signal newsignbit_fu_514_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal newsignbit_reg_893 : STD_LOGIC_VECTOR (0 downto 0);
    signal carry_fu_528_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal carry_reg_899 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_114_reg_906 : STD_LOGIC_VECTOR (1 downto 0);
    signal p_38_i_i_fu_586_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_38_i_i_reg_912 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal tmp_115_fu_602_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_115_reg_917 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge40_demorgan_i_fu_613_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge40_demorgan_i_reg_922 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_fu_630_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_reg_927 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge_i_i_i_fu_635_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge_i_i_i_reg_932 : STD_LOGIC_VECTOR (0 downto 0);
    signal sum_V_fu_662_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state11 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state11 : signal is "none";
    signal isneg_reg_942 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal result_V_fu_692_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal result_V_reg_949 : STD_LOGIC_VECTOR (7 downto 0);
    signal newsignbit_7_reg_955 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_137_fu_752_p1 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_137_reg_962 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal tmp_108_fu_756_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_108_reg_967 : STD_LOGIC_VECTOR (0 downto 0);
    signal co_reg_130 : STD_LOGIC_VECTOR (6 downto 0);
    signal h_reg_141 : STD_LOGIC_VECTOR (3 downto 0);
    signal w_reg_153 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state14 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state14 : signal is "none";
    signal p_Val2_s_reg_165 : STD_LOGIC_VECTOR (7 downto 0);
    signal ci_reg_177 : STD_LOGIC_VECTOR (6 downto 0);
    signal tmp_fu_200_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_152_cast_fu_325_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_153_cast_fu_357_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_161_cast_fu_438_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_s_fu_205_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_125_fu_217_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_shl2_cast_fu_213_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal p_shl3_cast_fu_225_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_127_fu_235_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_128_fu_247_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl1_cast_fu_255_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_shl_cast_fu_243_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_130_fu_275_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_131_fu_280_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_132_fu_292_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_shl4_cast_fu_288_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal p_shl5_cast_fu_300_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_134_fu_320_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_109_cast_fu_348_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_135_fu_352_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_136_fu_362_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_138_fu_374_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_shl8_cast_fu_370_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal p_shl9_cast_fu_382_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_139_fu_386_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_140_fu_392_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_141_fu_397_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_142_fu_409_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal p_shl6_cast_fu_405_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal p_shl7_cast_fu_417_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_143_fu_421_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal p_Val2_47_fu_448_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_47_fu_448_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_110_fu_462_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_144_cast_fu_470_p1 : STD_LOGIC_VECTOR (15 downto 0);
    signal p_Val2_49_fu_487_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_111_fu_497_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_147_fu_500_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_112_fu_522_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal Range1_all_ones_fu_551_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal Range1_all_zeros_fu_556_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_149_fu_544_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_113_fu_568_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_41_i_i_fu_574_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal deleted_zeros_fu_561_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_not_i_i_fu_591_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge_i_i7_fu_597_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal deleted_ones_fu_579_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp2_demorgan_fu_618_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp2_fu_624_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal overflow_fu_607_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp3_fu_641_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_not_fu_645_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_Val2_55_mux_fu_650_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_Val2_s_51_fu_656_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_106_fu_674_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_105_fu_670_p1 : STD_LOGIC_VECTOR (8 downto 0);
    signal p_Val2_45_fu_678_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_107_fu_706_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal isneg_not_fu_720_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge_i_i_fu_716_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal underflow_7_fu_711_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal brmerge9_fu_725_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal result_V_mux_fu_730_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_result_V_fu_737_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal result_1_fu_744_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal p_s_fu_762_p3 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (13 downto 0);


begin




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


    ci_reg_177_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
                ci_reg_177 <= ci_1_reg_830;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond9_fu_310_p2))) then 
                ci_reg_177 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    co_reg_130_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond8_fu_265_p2 = ap_const_lv1_1))) then 
                co_reg_130 <= co_7_reg_776;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                co_reg_130 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    h_reg_141_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond7_fu_188_p2 = ap_const_lv1_0))) then 
                h_reg_141 <= ap_const_lv4_1;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond9_fu_310_p2 = ap_const_lv1_1))) then 
                h_reg_141 <= h_7_fu_330_p2;
            end if; 
        end if;
    end process;

    p_Val2_s_reg_165_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state11)) then 
                p_Val2_s_reg_165 <= sum_V_fu_662_p3;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond9_fu_310_p2))) then 
                p_Val2_s_reg_165 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;

    w_reg_153_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond8_fu_265_p2))) then 
                w_reg_153 <= ap_const_lv4_1;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
                w_reg_153 <= w_7_reg_845;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond9_fu_310_p2))) then
                ShuffleConvs_2_Downs_reg_817 <= tmp_152_cast_fu_325_p1(14 - 1 downto 0);
                    tmp_104_cast_reg_812(3 downto 0) <= tmp_104_cast_fu_316_p1(3 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond7_fu_188_p2 = ap_const_lv1_0))) then
                bias_V_addr_reg_791 <= tmp_fu_200_p1(7 - 1 downto 0);
                    tmp_126_reg_781(14 downto 5) <= tmp_126_fu_229_p2(14 downto 5);
                    tmp_129_reg_786(10 downto 1) <= tmp_129_fu_259_p2(10 downto 1);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state10)) then
                brmerge40_demorgan_i_reg_922 <= brmerge40_demorgan_i_fu_613_p2;
                brmerge_i_i_i_reg_932 <= brmerge_i_i_i_fu_635_p2;
                p_38_i_i_reg_912 <= p_38_i_i_fu_586_p2;
                tmp_115_reg_917 <= tmp_115_fu_602_p2;
                underflow_reg_927 <= underflow_fu_630_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state9)) then
                carry_reg_899 <= carry_fu_528_p2;
                newsignbit_reg_893 <= p_Val2_50_fu_508_p2(7 downto 7);
                p_Val2_48_reg_875 <= p_Val2_48_fu_474_p2;
                p_Val2_50_reg_887 <= p_Val2_50_fu_508_p2;
                signbit_reg_880 <= p_Val2_48_fu_474_p2(15 downto 15);
                tmp_114_reg_906 <= p_Val2_48_fu_474_p2(15 downto 14);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                ci_1_reg_830 <= ci_1_fu_342_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                co_7_reg_776 <= co_7_fu_194_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state12)) then
                isneg_reg_942 <= p_Val2_45_fu_678_p2(8 downto 8);
                newsignbit_7_reg_955 <= result_V_fu_692_p2(7 downto 7);
                result_V_reg_949 <= result_V_fu_692_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                p_Val2_47_reg_865 <= p_Val2_47_fu_448_p2;
                tmp_146_reg_870 <= p_Val2_47_fu_448_p2(5 downto 5);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                shuffleunit1_7_outpu_1_reg_860 <= shuffleunit1_7_outpu_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state13)) then
                tmp_108_reg_967 <= tmp_108_fu_756_p2;
                tmp_137_reg_962 <= tmp_137_fu_752_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond8_fu_265_p2))) then
                    tmp_133_reg_804(14 downto 1) <= tmp_133_fu_304_p2(14 downto 1);
                    tmp_cast_reg_799(3 downto 0) <= tmp_cast_fu_271_p1(3 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond_fu_336_p2))) then
                tmp_144_reg_840 <= tmp_144_fu_427_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_1 = exitcond_fu_336_p2))) then
                w_7_reg_845 <= w_7_fu_432_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                weight_V_load_reg_855 <= weight_V_q0;
            end if;
        end if;
    end process;
    tmp_126_reg_781(4 downto 0) <= "00000";
    tmp_129_reg_786(0) <= '0';
    tmp_cast_reg_799(10 downto 4) <= "0000000";
    tmp_133_reg_804(0) <= '0';
    tmp_104_cast_reg_812(14 downto 4) <= "00000000000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond7_fu_188_p2, ap_CS_fsm_state3, exitcond8_fu_265_p2, ap_CS_fsm_state4, exitcond9_fu_310_p2, ap_CS_fsm_state5, exitcond_fu_336_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond7_fu_188_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond8_fu_265_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond9_fu_310_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_1 = exitcond_fu_336_p2))) then
                    ap_NS_fsm <= ap_ST_fsm_state12;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state14;
            when ap_ST_fsm_state14 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXX";
        end case;
    end process;
    Range1_all_ones_fu_551_p2 <= "1" when (tmp_114_reg_906 = ap_const_lv2_3) else "0";
    Range1_all_zeros_fu_556_p2 <= "1" when (tmp_114_reg_906 = ap_const_lv2_0) else "0";
    ShuffleConvs_2_Downs_address0 <= ShuffleConvs_2_Downs_reg_817;

    ShuffleConvs_2_Downs_ce0_assign_proc : process(ap_CS_fsm_state14)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
            ShuffleConvs_2_Downs_ce0 <= ap_const_logic_1;
        else 
            ShuffleConvs_2_Downs_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ShuffleConvs_2_Downs_d0 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_s_fu_762_p3),8));

    ShuffleConvs_2_Downs_we0_assign_proc : process(ap_CS_fsm_state14)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state14)) then 
            ShuffleConvs_2_Downs_we0 <= ap_const_logic_1;
        else 
            ShuffleConvs_2_Downs_we0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(9);
    ap_CS_fsm_state11 <= ap_CS_fsm(10);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state14 <= ap_CS_fsm(13);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond7_fu_188_p2)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond7_fu_188_p2 = ap_const_lv1_1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond7_fu_188_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond7_fu_188_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    bias_V_address0 <= bias_V_addr_reg_791;

    bias_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            bias_V_ce0 <= ap_const_logic_1;
        else 
            bias_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    brmerge40_demorgan_i_fu_613_p2 <= (newsignbit_reg_893 and deleted_ones_fu_579_p3);
    brmerge9_fu_725_p2 <= (newsignbit_7_reg_955 or isneg_not_fu_720_p2);
    brmerge_i_i7_fu_597_p2 <= (newsignbit_reg_893 or p_not_i_i_fu_591_p2);
    brmerge_i_i_fu_716_p2 <= (isneg_reg_942 xor newsignbit_7_reg_955);
    brmerge_i_i_i_fu_635_p2 <= (underflow_fu_630_p2 or overflow_fu_607_p2);
    carry_fu_528_p2 <= (tmp_147_fu_500_p3 and tmp_112_fu_522_p2);
    ci_1_fu_342_p2 <= std_logic_vector(unsigned(ci_reg_177) + unsigned(ap_const_lv7_1));
    co_7_fu_194_p2 <= std_logic_vector(unsigned(co_reg_130) + unsigned(ap_const_lv7_1));
    deleted_ones_fu_579_p3 <= 
        p_41_i_i_fu_574_p2 when (carry_reg_899(0) = '1') else 
        Range1_all_ones_fu_551_p2;
    deleted_zeros_fu_561_p3 <= 
        Range1_all_ones_fu_551_p2 when (carry_reg_899(0) = '1') else 
        Range1_all_zeros_fu_556_p2;
    exitcond7_fu_188_p2 <= "1" when (co_reg_130 = ap_const_lv7_60) else "0";
    exitcond8_fu_265_p2 <= "1" when (h_reg_141 = ap_const_lv4_9) else "0";
    exitcond9_fu_310_p2 <= "1" when (w_reg_153 = ap_const_lv4_9) else "0";
    exitcond_fu_336_p2 <= "1" when (ci_reg_177 = ap_const_lv7_60) else "0";
    h_7_fu_330_p2 <= std_logic_vector(unsigned(h_reg_141) + unsigned(ap_const_lv4_1));
    isneg_not_fu_720_p2 <= (isneg_reg_942 xor ap_const_lv1_1);
    newsignbit_fu_514_p3 <= p_Val2_50_fu_508_p2(7 downto 7);
    overflow_fu_607_p2 <= (brmerge_i_i7_fu_597_p2 and tmp_115_fu_602_p2);
    p_38_i_i_fu_586_p2 <= (carry_reg_899 and Range1_all_ones_fu_551_p2);
    p_41_i_i_fu_574_p2 <= (signbit_reg_880 and tmp_113_fu_568_p2);
    p_Val2_45_fu_678_p2 <= std_logic_vector(signed(tmp_106_fu_674_p1) + signed(tmp_105_fu_670_p1));
    p_Val2_47_fu_448_p0 <= weight_V_load_reg_855;
    p_Val2_47_fu_448_p1 <= shuffleunit1_7_outpu_1_reg_860;
    p_Val2_47_fu_448_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(p_Val2_47_fu_448_p0) * signed(p_Val2_47_fu_448_p1))), 16));
    p_Val2_48_fu_474_p2 <= std_logic_vector(signed(tmp_144_cast_fu_470_p1) + signed(p_Val2_47_reg_865));
    p_Val2_49_fu_487_p4 <= p_Val2_48_fu_474_p2(13 downto 6);
    p_Val2_50_fu_508_p2 <= std_logic_vector(unsigned(p_Val2_49_fu_487_p4) + unsigned(tmp_111_fu_497_p1));
    p_Val2_55_mux_fu_650_p3 <= 
        ap_const_lv8_7F when (brmerge_i_i_i_reg_932(0) = '1') else 
        p_Val2_50_reg_887;
    p_Val2_s_51_fu_656_p3 <= 
        ap_const_lv8_80 when (underflow_reg_927(0) = '1') else 
        p_Val2_50_reg_887;
    p_not_i_i_fu_591_p2 <= (deleted_zeros_fu_561_p3 xor ap_const_lv1_1);
    p_result_V_fu_737_p3 <= 
        ap_const_lv8_80 when (underflow_7_fu_711_p2(0) = '1') else 
        result_V_reg_949;
    p_s_fu_762_p3 <= 
        tmp_137_reg_962 when (tmp_108_reg_967(0) = '1') else 
        ap_const_lv7_0;
    p_shl1_cast_fu_255_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_128_fu_247_p3),11));
    p_shl2_cast_fu_213_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_205_p3),15));
    p_shl3_cast_fu_225_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_125_fu_217_p3),15));
    p_shl4_cast_fu_288_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_131_fu_280_p3),15));
    p_shl5_cast_fu_300_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_132_fu_292_p3),15));
    p_shl6_cast_fu_405_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_141_fu_397_p3),15));
    p_shl7_cast_fu_417_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_142_fu_409_p3),15));
    p_shl8_cast_fu_370_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_136_fu_362_p3),11));
    p_shl9_cast_fu_382_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_138_fu_374_p3),11));
    p_shl_cast_fu_243_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_127_fu_235_p3),11));
    result_1_fu_744_p3 <= 
        result_V_mux_fu_730_p3 when (brmerge9_fu_725_p2(0) = '1') else 
        p_result_V_fu_737_p3;
    result_V_fu_692_p2 <= std_logic_vector(unsigned(bias_V_q0) + unsigned(p_Val2_s_reg_165));
    result_V_mux_fu_730_p3 <= 
        ap_const_lv8_7F when (brmerge_i_i_fu_716_p2(0) = '1') else 
        result_V_reg_949;
    shuffleunit1_7_outpu_address0 <= tmp_161_cast_fu_438_p1(14 - 1 downto 0);

    shuffleunit1_7_outpu_ce0_assign_proc : process(ap_CS_fsm_state6)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state6)) then 
            shuffleunit1_7_outpu_ce0 <= ap_const_logic_1;
        else 
            shuffleunit1_7_outpu_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    sum_V_fu_662_p3 <= 
        p_Val2_55_mux_fu_650_p3 when (underflow_not_fu_645_p2(0) = '1') else 
        p_Val2_s_51_fu_656_p3;
    tmp2_demorgan_fu_618_p2 <= (p_38_i_i_fu_586_p2 or brmerge40_demorgan_i_fu_613_p2);
    tmp2_fu_624_p2 <= (tmp2_demorgan_fu_618_p2 xor ap_const_lv1_1);
    tmp3_fu_641_p2 <= (brmerge40_demorgan_i_reg_922 or tmp_115_reg_917);
    tmp_104_cast_fu_316_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(w_reg_153),15));
        tmp_105_fu_670_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(p_Val2_s_reg_165),9));

        tmp_106_fu_674_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(bias_V_q0),9));

    tmp_107_fu_706_p2 <= (newsignbit_7_reg_955 xor ap_const_lv1_1);
    tmp_108_fu_756_p2 <= "1" when (signed(result_1_fu_744_p3) > signed(ap_const_lv8_0)) else "0";
    tmp_109_cast_fu_348_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(ci_reg_177),15));
    tmp_110_fu_462_p3 <= (p_Val2_s_reg_165 & ap_const_lv6_0);
    tmp_111_fu_497_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_146_reg_870),8));
    tmp_112_fu_522_p2 <= (newsignbit_fu_514_p3 xor ap_const_lv1_1);
    tmp_113_fu_568_p2 <= (tmp_149_fu_544_p3 xor ap_const_lv1_1);
    tmp_115_fu_602_p2 <= (signbit_reg_880 xor ap_const_lv1_1);
    tmp_125_fu_217_p3 <= (co_reg_130 & ap_const_lv5_0);
    tmp_126_fu_229_p2 <= std_logic_vector(unsigned(p_shl2_cast_fu_213_p1) - unsigned(p_shl3_cast_fu_225_p1));
    tmp_127_fu_235_p3 <= (co_reg_130 & ap_const_lv3_0);
    tmp_128_fu_247_p3 <= (co_reg_130 & ap_const_lv1_0);
    tmp_129_fu_259_p2 <= std_logic_vector(unsigned(p_shl1_cast_fu_255_p1) + unsigned(p_shl_cast_fu_243_p1));
    tmp_130_fu_275_p2 <= std_logic_vector(unsigned(tmp_cast_fu_271_p1) + unsigned(tmp_129_reg_786));
    tmp_131_fu_280_p3 <= (tmp_130_fu_275_p2 & ap_const_lv3_0);
    tmp_132_fu_292_p3 <= (tmp_130_fu_275_p2 & ap_const_lv1_0);
    tmp_133_fu_304_p2 <= std_logic_vector(unsigned(p_shl4_cast_fu_288_p1) + unsigned(p_shl5_cast_fu_300_p1));
    tmp_134_fu_320_p2 <= std_logic_vector(unsigned(tmp_133_reg_804) + unsigned(tmp_104_cast_fu_316_p1));
    tmp_135_fu_352_p2 <= std_logic_vector(unsigned(tmp_109_cast_fu_348_p1) + unsigned(tmp_126_reg_781));
    tmp_136_fu_362_p3 <= (ci_reg_177 & ap_const_lv3_0);
    tmp_137_fu_752_p1 <= result_1_fu_744_p3(7 - 1 downto 0);
    tmp_138_fu_374_p3 <= (ci_reg_177 & ap_const_lv1_0);
    tmp_139_fu_386_p2 <= std_logic_vector(unsigned(p_shl8_cast_fu_370_p1) + unsigned(p_shl9_cast_fu_382_p1));
    tmp_140_fu_392_p2 <= std_logic_vector(unsigned(tmp_cast_reg_799) + unsigned(tmp_139_fu_386_p2));
    tmp_141_fu_397_p3 <= (tmp_140_fu_392_p2 & ap_const_lv3_0);
    tmp_142_fu_409_p3 <= (tmp_140_fu_392_p2 & ap_const_lv1_0);
    tmp_143_fu_421_p2 <= std_logic_vector(unsigned(p_shl6_cast_fu_405_p1) + unsigned(p_shl7_cast_fu_417_p1));
        tmp_144_cast_fu_470_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_110_fu_462_p3),16));

    tmp_144_fu_427_p2 <= std_logic_vector(unsigned(tmp_104_cast_reg_812) + unsigned(tmp_143_fu_421_p2));
    tmp_147_fu_500_p3 <= p_Val2_48_fu_474_p2(13 downto 13);
    tmp_149_fu_544_p3 <= p_Val2_48_reg_875(14 downto 14);
    tmp_152_cast_fu_325_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_134_fu_320_p2),64));
        tmp_153_cast_fu_357_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_135_fu_352_p2),64));

    tmp_161_cast_fu_438_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_144_reg_840),64));
    tmp_cast_fu_271_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(h_reg_141),11));
    tmp_fu_200_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(co_reg_130),64));
    tmp_s_fu_205_p3 <= (co_reg_130 & ap_const_lv7_0);
    underflow_7_fu_711_p2 <= (isneg_reg_942 and tmp_107_fu_706_p2);
    underflow_fu_630_p2 <= (signbit_reg_880 and tmp2_fu_624_p2);
    underflow_not_fu_645_p2 <= (tmp3_fu_641_p2 or p_38_i_i_reg_912);
    w_7_fu_432_p2 <= std_logic_vector(unsigned(ap_const_lv4_1) + unsigned(w_reg_153));
    weight_V_address0 <= tmp_153_cast_fu_357_p1(14 - 1 downto 0);

    weight_V_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            weight_V_ce0 <= ap_const_logic_1;
        else 
            weight_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;