-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity subconv_3x3_4_no_rel is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    input_r_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    input_r_ce0 : OUT STD_LOGIC;
    input_r_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    weight_address0 : OUT STD_LOGIC_VECTOR (9 downto 0);
    weight_ce0 : OUT STD_LOGIC;
    weight_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    bias_address0 : OUT STD_LOGIC_VECTOR (6 downto 0);
    bias_ce0 : OUT STD_LOGIC;
    bias_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    output_r_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    output_r_ce0 : OUT STD_LOGIC;
    output_r_we0 : OUT STD_LOGIC;
    output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of subconv_3x3_4_no_rel is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000100000000";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000001000000000";
    constant ap_ST_fsm_state11 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000010000000000";
    constant ap_ST_fsm_state12 : STD_LOGIC_VECTOR (23 downto 0) := "000000000000100000000000";
    constant ap_ST_fsm_state13 : STD_LOGIC_VECTOR (23 downto 0) := "000000000001000000000000";
    constant ap_ST_fsm_state14 : STD_LOGIC_VECTOR (23 downto 0) := "000000000010000000000000";
    constant ap_ST_fsm_state15 : STD_LOGIC_VECTOR (23 downto 0) := "000000000100000000000000";
    constant ap_ST_fsm_state16 : STD_LOGIC_VECTOR (23 downto 0) := "000000001000000000000000";
    constant ap_ST_fsm_state17 : STD_LOGIC_VECTOR (23 downto 0) := "000000010000000000000000";
    constant ap_ST_fsm_state18 : STD_LOGIC_VECTOR (23 downto 0) := "000000100000000000000000";
    constant ap_ST_fsm_state19 : STD_LOGIC_VECTOR (23 downto 0) := "000001000000000000000000";
    constant ap_ST_fsm_state20 : STD_LOGIC_VECTOR (23 downto 0) := "000010000000000000000000";
    constant ap_ST_fsm_state21 : STD_LOGIC_VECTOR (23 downto 0) := "000100000000000000000000";
    constant ap_ST_fsm_state22 : STD_LOGIC_VECTOR (23 downto 0) := "001000000000000000000000";
    constant ap_ST_fsm_state23 : STD_LOGIC_VECTOR (23 downto 0) := "010000000000000000000000";
    constant ap_ST_fsm_state24 : STD_LOGIC_VECTOR (23 downto 0) := "100000000000000000000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_B : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001011";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_11 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010001";
    constant ap_const_lv32_16 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010110";
    constant ap_const_lv7_0 : STD_LOGIC_VECTOR (6 downto 0) := "0000000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_C : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001100";
    constant ap_const_lv32_12 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010010";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv7_60 : STD_LOGIC_VECTOR (6 downto 0) := "1100000";
    constant ap_const_lv7_1 : STD_LOGIC_VECTOR (6 downto 0) := "0000001";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv11_2 : STD_LOGIC_VECTOR (10 downto 0) := "00000000010";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (23 downto 0) := "000000000000000000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal co_3_fu_194_p2 : STD_LOGIC_VECTOR (6 downto 0);
    signal co_3_reg_503 : STD_LOGIC_VECTOR (6 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_51_cast2_fu_217_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_51_cast2_reg_508 : STD_LOGIC_VECTOR (9 downto 0);
    signal exitcond4_fu_188_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_51_cast_fu_221_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_51_cast_reg_513 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_53_cast_fu_231_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_53_cast_reg_518 : STD_LOGIC_VECTOR (10 downto 0);
    signal bias_addr_reg_523 : STD_LOGIC_VECTOR (6 downto 0);
    signal h_cast_fu_235_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal h_cast_reg_528 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal h_3_fu_245_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal h_3_reg_536 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_56_cast_fu_260_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_56_cast_reg_541 : STD_LOGIC_VECTOR (11 downto 0);
    signal exitcond3_fu_239_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal w_cast_fu_268_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal w_cast_reg_546 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal w_3_fu_278_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal w_3_reg_554 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_37_fu_284_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_37_reg_559 : STD_LOGIC_VECTOR (2 downto 0);
    signal exitcond2_fu_272_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal m_3_fu_300_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal m_3_reg_567 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_42_fu_321_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_42_reg_572 : STD_LOGIC_VECTOR (10 downto 0);
    signal exitcond1_fu_294_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_30_fu_333_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_30_reg_577 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_63_cast_fu_363_p3 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_63_cast_reg_582 : STD_LOGIC_VECTOR (11 downto 0);
    signal icmp_fu_381_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp_reg_587 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_40_fu_391_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_40_reg_592 : STD_LOGIC_VECTOR (11 downto 0);
    signal n_3_fu_406_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal n_3_reg_600 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal tmp_45_fu_416_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_45_reg_605 : STD_LOGIC_VECTOR (10 downto 0);
    signal exitcond_fu_400_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp5_fu_446_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal icmp5_reg_610 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_47_fu_456_p2 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_47_reg_615 : STD_LOGIC_VECTOR (11 downto 0);
    signal notlhs_fu_461_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal notlhs_reg_620 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal weight_load_reg_635 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal tmp_38_fu_488_p3 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_38_reg_640 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_184_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_39_reg_645 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state12 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state12 : signal is "none";
    signal grp_fu_178_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state17 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state17 : signal is "none";
    signal bias_load_reg_655 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state18 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state18 : signal is "none";
    signal result_reg_660 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state23 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state23 : signal is "none";
    signal co_reg_97 : STD_LOGIC_VECTOR (6 downto 0);
    signal h_reg_108 : STD_LOGIC_VECTOR (2 downto 0);
    signal w_reg_120 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state24 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state24 : signal is "none";
    signal sum_reg_132 : STD_LOGIC_VECTOR (31 downto 0);
    signal m_reg_144 : STD_LOGIC_VECTOR (1 downto 0);
    signal sum_1_reg_155 : STD_LOGIC_VECTOR (31 downto 0);
    signal n_reg_167 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_fu_200_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_64_cast_fu_466_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_65_cast_fu_470_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_57_cast_fu_496_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal grp_fu_178_p0 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_178_p1 : STD_LOGIC_VECTOR (31 downto 0);
    signal ap_CS_fsm_state13 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state13 : signal is "none";
    signal ap_CS_fsm_state19 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state19 : signal is "none";
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal tmp_s_fu_209_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_cast_fu_205_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_35_fu_225_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_cast_25_fu_251_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_36_fu_255_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_28_cast_fu_306_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_41_fu_310_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_33_fu_315_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal m_cast_fu_290_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_29_fu_327_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp4_fu_339_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp4_cast_fu_345_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_31_fu_349_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_32_cast_fu_354_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_43_fu_358_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_44_fu_371_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_27_cast_fu_387_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal tmp_33_cast_fu_412_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp5_fu_421_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp5_cast_fu_427_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_34_fu_431_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_46_fu_436_p4 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_36_cast_fu_452_p1 : STD_LOGIC_VECTOR (11 downto 0);
    signal n_cast_fu_396_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp7_fu_478_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp6_fu_474_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal sel_tmp2_fu_482_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (23 downto 0);

    component ShuffleNetV2_faddbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;


    component ShuffleNetV2_fmulcud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    ShuffleNetV2_faddbkb_x_U98 : component ShuffleNetV2_faddbkb
    generic map (
        ID => 1,
        NUM_STAGE => 5,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => grp_fu_178_p0,
        din1 => grp_fu_178_p1,
        ce => ap_const_logic_1,
        dout => grp_fu_178_p2);

    ShuffleNetV2_fmulcud_x_U99 : component ShuffleNetV2_fmulcud
    generic map (
        ID => 1,
        NUM_STAGE => 4,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => weight_load_reg_635,
        din1 => tmp_38_reg_640,
        ce => ap_const_logic_1,
        dout => grp_fu_184_p2);





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


    co_reg_97_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond3_fu_239_p2 = ap_const_lv1_1))) then 
                co_reg_97 <= co_3_reg_503;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                co_reg_97 <= ap_const_lv7_0;
            end if; 
        end if;
    end process;

    h_reg_108_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond2_fu_272_p2 = ap_const_lv1_1))) then 
                h_reg_108 <= h_3_reg_536;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond4_fu_188_p2 = ap_const_lv1_0))) then 
                h_reg_108 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    m_reg_144_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_1 = exitcond_fu_400_p2))) then 
                m_reg_144 <= m_3_reg_567;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond2_fu_272_p2))) then 
                m_reg_144 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    n_reg_167_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond1_fu_294_p2))) then 
                n_reg_167 <= ap_const_lv2_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state17)) then 
                n_reg_167 <= n_3_reg_600;
            end if; 
        end if;
    end process;

    sum_1_reg_155_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond1_fu_294_p2))) then 
                sum_1_reg_155 <= sum_reg_132;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state17)) then 
                sum_1_reg_155 <= grp_fu_178_p2;
            end if; 
        end if;
    end process;

    sum_reg_132_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_1 = exitcond_fu_400_p2))) then 
                sum_reg_132 <= sum_1_reg_155;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond2_fu_272_p2))) then 
                sum_reg_132 <= ap_const_lv32_0;
            end if; 
        end if;
    end process;

    w_reg_120_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond3_fu_239_p2))) then 
                w_reg_120 <= ap_const_lv3_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state24)) then 
                w_reg_120 <= w_3_reg_554;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond4_fu_188_p2 = ap_const_lv1_0))) then
                bias_addr_reg_523 <= tmp_fu_200_p1(7 - 1 downto 0);
                    tmp_51_cast2_reg_508(8 downto 2) <= tmp_51_cast2_fu_217_p1(8 downto 2);
                    tmp_51_cast_reg_513(8 downto 2) <= tmp_51_cast_fu_221_p1(8 downto 2);
                tmp_53_cast_reg_518 <= tmp_53_cast_fu_231_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state18)) then
                bias_load_reg_655 <= bias_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                co_3_reg_503 <= co_3_fu_194_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                h_3_reg_536 <= h_3_fu_245_p2;
                    h_cast_reg_528(2 downto 0) <= h_cast_fu_235_p1(2 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_0 = exitcond_fu_400_p2))) then
                icmp5_reg_610 <= icmp5_fu_446_p2;
                notlhs_reg_620 <= notlhs_fu_461_p2;
                tmp_45_reg_605 <= tmp_45_fu_416_p2;
                tmp_47_reg_615 <= tmp_47_fu_456_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond1_fu_294_p2))) then
                icmp_reg_587 <= icmp_fu_381_p2;
                tmp_30_reg_577 <= tmp_30_fu_333_p2;
                tmp_42_reg_572 <= tmp_42_fu_321_p2;
                    tmp_63_cast_reg_582(11 downto 2) <= tmp_63_cast_fu_363_p3(11 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
                m_3_reg_567 <= m_3_fu_300_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                n_3_reg_600 <= n_3_fu_406_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state23)) then
                result_reg_660 <= grp_fu_178_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond2_fu_272_p2))) then
                tmp_37_reg_559 <= tmp_37_fu_284_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                tmp_38_reg_640 <= tmp_38_fu_488_p3;
                weight_load_reg_635 <= weight_q0;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state12)) then
                tmp_39_reg_645 <= grp_fu_184_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state5) and (exitcond1_fu_294_p2 = ap_const_lv1_1))) then
                tmp_40_reg_592 <= tmp_40_fu_391_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond3_fu_239_p2))) then
                    tmp_56_cast_reg_541(11 downto 2) <= tmp_56_cast_fu_260_p3(11 downto 2);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                w_3_reg_554 <= w_3_fu_278_p2;
                    w_cast_reg_546(2 downto 0) <= w_cast_fu_268_p1(2 downto 0);
            end if;
        end if;
    end process;
    tmp_51_cast2_reg_508(1 downto 0) <= "00";
    tmp_51_cast2_reg_508(9) <= '0';
    tmp_51_cast_reg_513(1 downto 0) <= "00";
    tmp_51_cast_reg_513(9) <= '0';
    h_cast_reg_528(3) <= '0';
    tmp_56_cast_reg_541(1 downto 0) <= "00";
    w_cast_reg_546(3) <= '0';
    tmp_63_cast_reg_582(1 downto 0) <= "00";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond4_fu_188_p2, ap_CS_fsm_state3, exitcond3_fu_239_p2, ap_CS_fsm_state4, exitcond2_fu_272_p2, ap_CS_fsm_state5, exitcond1_fu_294_p2, ap_CS_fsm_state6, exitcond_fu_400_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond4_fu_188_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond3_fu_239_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond2_fu_272_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state5) and (ap_const_lv1_0 = exitcond1_fu_294_p2))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state18;
                end if;
            when ap_ST_fsm_state6 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state6) and (ap_const_lv1_1 = exitcond_fu_400_p2))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                ap_NS_fsm <= ap_ST_fsm_state10;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state11;
            when ap_ST_fsm_state11 => 
                ap_NS_fsm <= ap_ST_fsm_state12;
            when ap_ST_fsm_state12 => 
                ap_NS_fsm <= ap_ST_fsm_state13;
            when ap_ST_fsm_state13 => 
                ap_NS_fsm <= ap_ST_fsm_state14;
            when ap_ST_fsm_state14 => 
                ap_NS_fsm <= ap_ST_fsm_state15;
            when ap_ST_fsm_state15 => 
                ap_NS_fsm <= ap_ST_fsm_state16;
            when ap_ST_fsm_state16 => 
                ap_NS_fsm <= ap_ST_fsm_state17;
            when ap_ST_fsm_state17 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state18 => 
                ap_NS_fsm <= ap_ST_fsm_state19;
            when ap_ST_fsm_state19 => 
                ap_NS_fsm <= ap_ST_fsm_state20;
            when ap_ST_fsm_state20 => 
                ap_NS_fsm <= ap_ST_fsm_state21;
            when ap_ST_fsm_state21 => 
                ap_NS_fsm <= ap_ST_fsm_state22;
            when ap_ST_fsm_state22 => 
                ap_NS_fsm <= ap_ST_fsm_state23;
            when ap_ST_fsm_state23 => 
                ap_NS_fsm <= ap_ST_fsm_state24;
            when ap_ST_fsm_state24 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXXXXXXXXXXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state12 <= ap_CS_fsm(11);
    ap_CS_fsm_state13 <= ap_CS_fsm(12);
    ap_CS_fsm_state17 <= ap_CS_fsm(16);
    ap_CS_fsm_state18 <= ap_CS_fsm(17);
    ap_CS_fsm_state19 <= ap_CS_fsm(18);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state23 <= ap_CS_fsm(22);
    ap_CS_fsm_state24 <= ap_CS_fsm(23);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond4_fu_188_p2)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond4_fu_188_p2 = ap_const_lv1_1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond4_fu_188_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond4_fu_188_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    bias_address0 <= bias_addr_reg_523;

    bias_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            bias_ce0 <= ap_const_logic_1;
        else 
            bias_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    co_3_fu_194_p2 <= std_logic_vector(unsigned(co_reg_97) + unsigned(ap_const_lv7_1));
    exitcond1_fu_294_p2 <= "1" when (m_reg_144 = ap_const_lv2_3) else "0";
    exitcond2_fu_272_p2 <= "1" when (w_reg_120 = ap_const_lv3_4) else "0";
    exitcond3_fu_239_p2 <= "1" when (h_reg_108 = ap_const_lv3_4) else "0";
    exitcond4_fu_188_p2 <= "1" when (co_reg_97 = ap_const_lv7_60) else "0";
    exitcond_fu_400_p2 <= "1" when (n_reg_167 = ap_const_lv2_3) else "0";

    grp_fu_178_p0_assign_proc : process(sum_reg_132, sum_1_reg_155, ap_CS_fsm_state13, ap_CS_fsm_state19)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state19)) then 
            grp_fu_178_p0 <= sum_reg_132;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            grp_fu_178_p0 <= sum_1_reg_155;
        else 
            grp_fu_178_p0 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;


    grp_fu_178_p1_assign_proc : process(tmp_39_reg_645, bias_load_reg_655, ap_CS_fsm_state13, ap_CS_fsm_state19)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state19)) then 
            grp_fu_178_p1 <= bias_load_reg_655;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state13)) then 
            grp_fu_178_p1 <= tmp_39_reg_645;
        else 
            grp_fu_178_p1 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    h_3_fu_245_p2 <= std_logic_vector(unsigned(h_reg_108) + unsigned(ap_const_lv3_1));
    h_cast_fu_235_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(h_reg_108),4));
    icmp5_fu_446_p2 <= "0" when (tmp_46_fu_436_p4 = ap_const_lv2_1) else "1";
    icmp_fu_381_p2 <= "0" when (tmp_44_fu_371_p4 = ap_const_lv2_1) else "1";
    input_r_address0 <= tmp_65_cast_fu_470_p1(11 - 1 downto 0);

    input_r_ce0_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            input_r_ce0 <= ap_const_logic_1;
        else 
            input_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    m_3_fu_300_p2 <= std_logic_vector(unsigned(m_reg_144) + unsigned(ap_const_lv2_1));
    m_cast_fu_290_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(m_reg_144),3));
    n_3_fu_406_p2 <= std_logic_vector(unsigned(n_reg_167) + unsigned(ap_const_lv2_1));
    n_cast_fu_396_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(n_reg_167),3));
    notlhs_fu_461_p2 <= "0" when (n_cast_fu_396_p1 = tmp_37_reg_559) else "1";
    output_r_address0 <= tmp_57_cast_fu_496_p1(11 - 1 downto 0);

    output_r_ce0_assign_proc : process(ap_CS_fsm_state24)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state24)) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= result_reg_660;

    output_r_we0_assign_proc : process(ap_CS_fsm_state24)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state24)) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    sel_tmp2_fu_482_p2 <= (tmp7_fu_478_p2 and tmp6_fu_474_p2);
        tmp4_cast_fu_345_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp4_fu_339_p2),4));

    tmp4_fu_339_p2 <= std_logic_vector(signed(ap_const_lv2_3) + signed(m_reg_144));
        tmp5_cast_fu_427_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp5_fu_421_p2),4));

    tmp5_fu_421_p2 <= std_logic_vector(unsigned(n_reg_167) + unsigned(ap_const_lv2_3));
    tmp6_fu_474_p2 <= (icmp_reg_587 and notlhs_reg_620);
    tmp7_fu_478_p2 <= (tmp_30_reg_577 and icmp5_reg_610);
    tmp_27_cast_fu_387_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(w_reg_120),12));
    tmp_28_cast_fu_306_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(m_reg_144),11));
    tmp_29_fu_327_p2 <= std_logic_vector(unsigned(ap_const_lv3_0) - unsigned(m_cast_fu_290_p1));
    tmp_30_fu_333_p2 <= "0" when (h_reg_108 = tmp_29_fu_327_p2) else "1";
    tmp_31_fu_349_p2 <= std_logic_vector(signed(tmp4_cast_fu_345_p1) + signed(h_cast_reg_528));
        tmp_32_cast_fu_354_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_31_fu_349_p2),10));

    tmp_33_cast_fu_412_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(n_reg_167),11));
    tmp_33_fu_315_p2 <= std_logic_vector(shift_left(unsigned(tmp_41_fu_310_p2),to_integer(unsigned('0' & ap_const_lv11_2(11-1 downto 0)))));
    tmp_34_fu_431_p2 <= std_logic_vector(unsigned(w_cast_reg_546) + unsigned(tmp5_cast_fu_427_p1));
    tmp_35_fu_225_p2 <= std_logic_vector(unsigned(tmp_51_cast_fu_221_p1) - unsigned(tmp_cast_fu_205_p1));
        tmp_36_cast_fu_452_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_34_fu_431_p2),12));

    tmp_36_fu_255_p2 <= std_logic_vector(unsigned(tmp_cast_25_fu_251_p1) + unsigned(tmp_51_cast_reg_513));
    tmp_37_fu_284_p2 <= std_logic_vector(unsigned(ap_const_lv3_0) - unsigned(w_reg_120));
    tmp_38_fu_488_p3 <= 
        input_r_q0 when (sel_tmp2_fu_482_p2(0) = '1') else 
        ap_const_lv32_0;
    tmp_40_fu_391_p2 <= std_logic_vector(unsigned(tmp_56_cast_reg_541) + unsigned(tmp_27_cast_fu_387_p1));
    tmp_41_fu_310_p2 <= std_logic_vector(unsigned(tmp_28_cast_fu_306_p1) + unsigned(tmp_53_cast_reg_518));
    tmp_42_fu_321_p2 <= std_logic_vector(unsigned(tmp_33_fu_315_p2) - unsigned(tmp_41_fu_310_p2));
    tmp_43_fu_358_p2 <= std_logic_vector(signed(tmp_32_cast_fu_354_p1) + signed(tmp_51_cast2_reg_508));
    tmp_44_fu_371_p4 <= tmp_31_fu_349_p2(3 downto 2);
    tmp_45_fu_416_p2 <= std_logic_vector(unsigned(tmp_42_reg_572) + unsigned(tmp_33_cast_fu_412_p1));
    tmp_46_fu_436_p4 <= tmp_34_fu_431_p2(3 downto 2);
    tmp_47_fu_456_p2 <= std_logic_vector(unsigned(tmp_63_cast_reg_582) + unsigned(tmp_36_cast_fu_452_p1));
    tmp_51_cast2_fu_217_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_209_p3),10));
    tmp_51_cast_fu_221_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_209_p3),10));
        tmp_53_cast_fu_231_p1 <= std_logic_vector(IEEE.numeric_std.resize(signed(tmp_35_fu_225_p2),11));

    tmp_56_cast_fu_260_p3 <= (tmp_36_fu_255_p2 & ap_const_lv2_0);
    tmp_57_cast_fu_496_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_40_reg_592),64));
    tmp_63_cast_fu_363_p3 <= (tmp_43_fu_358_p2 & ap_const_lv2_0);
    tmp_64_cast_fu_466_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_45_reg_605),64));
    tmp_65_cast_fu_470_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_47_reg_615),64));
    tmp_cast_25_fu_251_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(h_reg_108),10));
    tmp_cast_fu_205_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(co_reg_97),10));
    tmp_fu_200_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(co_reg_97),64));
    tmp_s_fu_209_p3 <= (co_reg_97 & ap_const_lv2_0);
    w_3_fu_278_p2 <= std_logic_vector(unsigned(w_reg_120) + unsigned(ap_const_lv3_1));
    w_cast_fu_268_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(w_reg_120),4));
    weight_address0 <= tmp_64_cast_fu_466_p1(10 - 1 downto 0);

    weight_ce0_assign_proc : process(ap_CS_fsm_state7)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            weight_ce0 <= ap_const_logic_1;
        else 
            weight_ce0 <= ap_const_logic_0;
        end if; 
    end process;

end behav;