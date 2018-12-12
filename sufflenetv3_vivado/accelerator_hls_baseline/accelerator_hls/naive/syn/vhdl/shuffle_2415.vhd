-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2017.2
-- Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity shuffle_2415 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    left_0_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
    left_0_ce0 : OUT STD_LOGIC;
    left_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    right_0_address0 : OUT STD_LOGIC_VECTOR (12 downto 0);
    right_0_ce0 : OUT STD_LOGIC;
    right_0_q0 : IN STD_LOGIC_VECTOR (31 downto 0);
    output_r_address0 : OUT STD_LOGIC_VECTOR (13 downto 0);
    output_r_ce0 : OUT STD_LOGIC;
    output_r_we0 : OUT STD_LOGIC;
    output_r_d0 : OUT STD_LOGIC_VECTOR (31 downto 0) );
end;


architecture behav of shuffle_2415 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv6_30 : STD_LOGIC_VECTOR (5 downto 0) := "110000";
    constant ap_const_lv6_1 : STD_LOGIC_VECTOR (5 downto 0) := "000001";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal tmp_96_fu_122_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_96_reg_259 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal co_15_fu_132_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal co_15_reg_266 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_243_cast_fu_156_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_243_cast_reg_271 : STD_LOGIC_VECTOR (9 downto 0);
    signal exitcond2_fu_126_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_245_cast_fu_168_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_245_cast_reg_276 : STD_LOGIC_VECTOR (10 downto 0);
    signal h_15_fu_178_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal h_15_reg_284 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal tmp_248_cast_fu_197_p3 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_248_cast_reg_289 : STD_LOGIC_VECTOR (13 downto 0);
    signal exitcond1_fu_172_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_251_cast_fu_210_p3 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_251_cast_reg_294 : STD_LOGIC_VECTOR (14 downto 0);
    signal w_15_fu_224_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal w_15_reg_302 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal exitcond_fu_218_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal output_addr_reg_317 : STD_LOGIC_VECTOR (13 downto 0);
    signal co_reg_77 : STD_LOGIC_VECTOR (5 downto 0);
    signal h_reg_88 : STD_LOGIC_VECTOR (4 downto 0);
    signal w_reg_99 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal storemerge_phi_fu_113_p4 : STD_LOGIC_VECTOR (31 downto 0);
    signal tmp_252_cast_fu_243_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_253_cast_fu_254_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_fu_138_p4 : STD_LOGIC_VECTOR (4 downto 0);
    signal tmp_s_fu_148_p3 : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_151_fu_160_p3 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_cast_fu_188_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_152_fu_192_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_cast2_fu_184_p1 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_153_fu_205_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal tmp_99_cast_fu_234_p1 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_154_fu_238_p2 : STD_LOGIC_VECTOR (13 downto 0);
    signal tmp_99_cast1_fu_230_p1 : STD_LOGIC_VECTOR (14 downto 0);
    signal tmp_155_fu_249_p2 : STD_LOGIC_VECTOR (14 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


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


    co_reg_77_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond1_fu_172_p2 = ap_const_lv1_1))) then 
                co_reg_77 <= co_15_reg_266;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                co_reg_77 <= ap_const_lv6_0;
            end if; 
        end if;
    end process;

    h_reg_88_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond_fu_218_p2 = ap_const_lv1_1))) then 
                h_reg_88 <= h_15_reg_284;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond2_fu_126_p2 = ap_const_lv1_0))) then 
                h_reg_88 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    w_reg_99_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond1_fu_172_p2))) then 
                w_reg_99 <= ap_const_lv5_0;
            elsif ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                w_reg_99 <= w_15_reg_302;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                co_15_reg_266 <= co_15_fu_132_p2;
                tmp_96_reg_259 <= tmp_96_fu_122_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                h_15_reg_284 <= h_15_fu_178_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) and (ap_const_lv1_0 = exitcond_fu_218_p2))) then
                output_addr_reg_317 <= tmp_253_cast_fu_254_p1(14 - 1 downto 0);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond2_fu_126_p2 = ap_const_lv1_0))) then
                    tmp_243_cast_reg_271(8 downto 4) <= tmp_243_cast_fu_156_p1(8 downto 4);
                    tmp_245_cast_reg_276(9 downto 4) <= tmp_245_cast_fu_168_p1(9 downto 4);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state3) and (ap_const_lv1_0 = exitcond1_fu_172_p2))) then
                    tmp_248_cast_reg_289(13 downto 4) <= tmp_248_cast_fu_197_p3(13 downto 4);
                    tmp_251_cast_reg_294(14 downto 4) <= tmp_251_cast_fu_210_p3(14 downto 4);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state4)) then
                w_15_reg_302 <= w_15_fu_224_p2;
            end if;
        end if;
    end process;
    tmp_243_cast_reg_271(3 downto 0) <= "0000";
    tmp_243_cast_reg_271(9) <= '0';
    tmp_245_cast_reg_276(3 downto 0) <= "0000";
    tmp_245_cast_reg_276(10) <= '0';
    tmp_248_cast_reg_289(3 downto 0) <= "0000";
    tmp_251_cast_reg_294(3 downto 0) <= "0000";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond2_fu_126_p2, ap_CS_fsm_state3, exitcond1_fu_172_p2, ap_CS_fsm_state4, exitcond_fu_218_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond2_fu_126_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state3) and (exitcond1_fu_172_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state4) and (exitcond_fu_218_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond2_fu_126_p2)
    begin
        if ((((ap_const_logic_0 = ap_start) and (ap_const_logic_1 = ap_CS_fsm_state1)) or ((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond2_fu_126_p2 = ap_const_lv1_1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond2_fu_126_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond2_fu_126_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    co_15_fu_132_p2 <= std_logic_vector(unsigned(ap_const_lv6_1) + unsigned(co_reg_77));
    exitcond1_fu_172_p2 <= "1" when (h_reg_88 = ap_const_lv5_10) else "0";
    exitcond2_fu_126_p2 <= "1" when (co_reg_77 = ap_const_lv6_30) else "0";
    exitcond_fu_218_p2 <= "1" when (w_reg_99 = ap_const_lv5_10) else "0";
    h_15_fu_178_p2 <= std_logic_vector(unsigned(h_reg_88) + unsigned(ap_const_lv5_1));
    left_0_address0 <= tmp_252_cast_fu_243_p1(13 - 1 downto 0);

    left_0_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            left_0_ce0 <= ap_const_logic_1;
        else 
            left_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_address0 <= output_addr_reg_317;

    output_r_ce0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_r_ce0 <= ap_const_logic_1;
        else 
            output_r_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    output_r_d0 <= storemerge_phi_fu_113_p4;

    output_r_we0_assign_proc : process(ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            output_r_we0 <= ap_const_logic_1;
        else 
            output_r_we0 <= ap_const_logic_0;
        end if; 
    end process;

    right_0_address0 <= tmp_252_cast_fu_243_p1(13 - 1 downto 0);

    right_0_ce0_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            right_0_ce0 <= ap_const_logic_1;
        else 
            right_0_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    storemerge_phi_fu_113_p4_assign_proc : process(left_0_q0, right_0_q0, tmp_96_reg_259, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then
            if ((tmp_96_reg_259 = ap_const_lv1_1)) then 
                storemerge_phi_fu_113_p4 <= right_0_q0;
            elsif ((tmp_96_reg_259 = ap_const_lv1_0)) then 
                storemerge_phi_fu_113_p4 <= left_0_q0;
            else 
                storemerge_phi_fu_113_p4 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
            end if;
        else 
            storemerge_phi_fu_113_p4 <= "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
        end if; 
    end process;

    tmp_151_fu_160_p3 <= (co_reg_77 & ap_const_lv4_0);
    tmp_152_fu_192_p2 <= std_logic_vector(unsigned(tmp_cast_fu_188_p1) + unsigned(tmp_243_cast_reg_271));
    tmp_153_fu_205_p2 <= std_logic_vector(unsigned(tmp_cast2_fu_184_p1) + unsigned(tmp_245_cast_reg_276));
    tmp_154_fu_238_p2 <= std_logic_vector(unsigned(tmp_248_cast_reg_289) + unsigned(tmp_99_cast_fu_234_p1));
    tmp_155_fu_249_p2 <= std_logic_vector(unsigned(tmp_251_cast_reg_294) + unsigned(tmp_99_cast1_fu_230_p1));
    tmp_243_cast_fu_156_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_148_p3),10));
    tmp_245_cast_fu_168_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_151_fu_160_p3),11));
    tmp_248_cast_fu_197_p3 <= (tmp_152_fu_192_p2 & ap_const_lv4_0);
    tmp_251_cast_fu_210_p3 <= (tmp_153_fu_205_p2 & ap_const_lv4_0);
    tmp_252_cast_fu_243_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_154_fu_238_p2),64));
    tmp_253_cast_fu_254_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_155_fu_249_p2),64));
    tmp_96_fu_122_p1 <= co_reg_77(1 - 1 downto 0);
    tmp_99_cast1_fu_230_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(w_reg_99),15));
    tmp_99_cast_fu_234_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(w_reg_99),14));
    tmp_cast2_fu_184_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(h_reg_88),11));
    tmp_cast_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(h_reg_88),10));
    tmp_fu_138_p4 <= co_reg_77(5 downto 1);
    tmp_s_fu_148_p3 <= (tmp_fu_138_p4 & ap_const_lv4_0);
    w_15_fu_224_p2 <= std_logic_vector(unsigned(w_reg_99) + unsigned(ap_const_lv5_1));
end behav;