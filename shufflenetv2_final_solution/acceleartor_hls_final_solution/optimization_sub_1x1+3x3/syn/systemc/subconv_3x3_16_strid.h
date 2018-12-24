// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _subconv_3x3_16_strid_HH_
#define _subconv_3x3_16_strid_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ShuffleNetV2_mux_fYi.h"
#include "ShuffleNetV2_mac_cud.h"

namespace ap_rtl {

struct subconv_3x3_16_strid : public sc_module {
    // Port declarations 160
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > weight_V_address0;
    sc_out< sc_logic > weight_V_ce0;
    sc_in< sc_lv<8> > weight_V_q0;
    sc_out< sc_lv<6> > bias_V_address0;
    sc_out< sc_logic > bias_V_ce0;
    sc_in< sc_lv<8> > bias_V_q0;
    sc_out< sc_lv<13> > output_V_address0;
    sc_out< sc_logic > output_V_ce0;
    sc_out< sc_logic > output_V_we0;
    sc_out< sc_lv<8> > output_V_d0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_47_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_47_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_47_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_46_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_46_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_46_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_35_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_35_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_35_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_24_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_24_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_24_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_13_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_13_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_13_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_4_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_4_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_4_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_3_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_3_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_3_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_2_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_2_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_2_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_1_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_1_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_1_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_45_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_45_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_45_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_44_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_44_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_44_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_43_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_43_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_43_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_42_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_42_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_42_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_41_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_41_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_41_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_40_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_40_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_40_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_39_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_39_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_39_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_38_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_38_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_38_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_37_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_37_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_37_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_36_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_36_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_36_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_34_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_34_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_34_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_33_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_33_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_33_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_32_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_32_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_32_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_31_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_31_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_31_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_30_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_30_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_30_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_29_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_29_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_29_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_28_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_28_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_28_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_27_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_27_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_27_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_26_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_26_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_26_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_25_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_25_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_25_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_23_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_23_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_23_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_22_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_22_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_22_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_21_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_21_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_21_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_20_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_20_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_20_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_19_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_19_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_19_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_18_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_18_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_18_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_17_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_17_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_17_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_16_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_16_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_16_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_15_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_15_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_15_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_14_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_14_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_14_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_12_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_12_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_12_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_11_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_11_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_11_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_10_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_10_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_10_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_9_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_9_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_9_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_8_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_8_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_8_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_7_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_7_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_7_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_6_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_6_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_6_q0;
    sc_out< sc_lv<9> > ShuffleConvs_1_Downs_5_address0;
    sc_out< sc_logic > ShuffleConvs_1_Downs_5_ce0;
    sc_in< sc_lv<8> > ShuffleConvs_1_Downs_5_q0;


    // Module declarations
    subconv_3x3_16_strid(sc_module_name name);
    SC_HAS_PROCESS(subconv_3x3_16_strid);

    ~subconv_3x3_16_strid();

    sc_trace_file* mVcdFile;

    ShuffleNetV2_mux_fYi<1,1,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,6,8>* ShuffleNetV2_mux_fYi_x_U354;
    ShuffleNetV2_mac_cud<1,1,8,8,8,8>* ShuffleNetV2_mac_cud_x_U355;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > tmp_144_cast_fu_877_p1;
    sc_signal< sc_lv<10> > tmp_144_cast_reg_1311;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > tmp_118_fu_905_p2;
    sc_signal< sc_lv<10> > tmp_118_reg_1316;
    sc_signal< sc_lv<6> > co_5_fu_917_p2;
    sc_signal< sc_lv<6> > co_5_reg_1324;
    sc_signal< sc_lv<6> > bias_V_addr_reg_1329;
    sc_signal< sc_lv<1> > exitcond8_fu_911_p2;
    sc_signal< sc_lv<14> > tmp_120_fu_956_p2;
    sc_signal< sc_lv<14> > tmp_120_reg_1334;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<5> > tmp_fu_968_p3;
    sc_signal< sc_lv<5> > tmp_reg_1342;
    sc_signal< sc_lv<1> > exitcond9_fu_962_p2;
    sc_signal< sc_lv<13> > output_V_addr_reg_1347;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > tmp_s_fu_996_p3;
    sc_signal< sc_lv<5> > tmp_s_reg_1355;
    sc_signal< sc_lv<1> > exitcond1_fu_990_p2;
    sc_signal< sc_lv<4> > h_5_fu_1004_p2;
    sc_signal< sc_lv<10> > tmp_123_fu_1025_p2;
    sc_signal< sc_lv<10> > tmp_123_reg_1365;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<2> > m_5_fu_1037_p2;
    sc_signal< sc_lv<2> > m_5_reg_1373;
    sc_signal< sc_lv<10> > tmp_126_fu_1082_p2;
    sc_signal< sc_lv<10> > tmp_126_reg_1378;
    sc_signal< sc_lv<1> > exitcond2_fu_1031_p2;
    sc_signal< sc_lv<4> > w_5_fu_1088_p2;
    sc_signal< sc_lv<4> > w_5_reg_1383;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<2> > n_5_fu_1114_p2;
    sc_signal< sc_lv<2> > n_5_reg_1396;
    sc_signal< sc_lv<1> > exitcond_fu_1108_p2;
    sc_signal< sc_lv<8> > weight_V_load_reg_1641;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > tmp_4_fu_1196_p50;
    sc_signal< sc_lv<8> > tmp_4_reg_1646;
    sc_signal< sc_lv<8> > grp_fu_1305_p3;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<6> > co_reg_768;
    sc_signal< sc_lv<4> > h_reg_780;
    sc_signal< sc_lv<4> > w_reg_792;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<8> > p_s_reg_804;
    sc_signal< sc_lv<2> > m_reg_816;
    sc_signal< sc_lv<8> > p_09_1_reg_827;
    sc_signal< sc_lv<2> > n_reg_839;
    sc_signal< sc_lv<32> > co_cast7_fu_850_p1;
    sc_signal< sc_lv<32> > tmp_152_cast_fu_985_p1;
    sc_signal< sc_lv<32> > tmp_159_cast_fu_1103_p1;
    sc_signal< sc_lv<32> > tmp_160_cast_fu_1144_p1;
    sc_signal< sc_lv<8> > tmp_114_fu_859_p3;
    sc_signal< sc_lv<9> > p_shl2_cast_fu_867_p1;
    sc_signal< sc_lv<9> > co_cast7_cast_fu_855_p1;
    sc_signal< sc_lv<9> > tmp_115_fu_871_p2;
    sc_signal< sc_lv<9> > tmp_116_fu_881_p3;
    sc_signal< sc_lv<7> > tmp_117_fu_893_p3;
    sc_signal< sc_lv<10> > p_shl1_cast_fu_901_p1;
    sc_signal< sc_lv<10> > p_shl_cast_fu_889_p1;
    sc_signal< sc_lv<10> > h_cast6_cast_fu_923_p1;
    sc_signal< sc_lv<10> > tmp_119_fu_927_p2;
    sc_signal< sc_lv<13> > tmp_36_fu_932_p3;
    sc_signal< sc_lv<11> > tmp_37_fu_944_p3;
    sc_signal< sc_lv<14> > p_shl3_cast_fu_940_p1;
    sc_signal< sc_lv<14> > p_shl4_cast_fu_952_p1;
    sc_signal< sc_lv<14> > w_cast5_cast_fu_976_p1;
    sc_signal< sc_lv<14> > tmp_121_fu_980_p2;
    sc_signal< sc_lv<10> > m_cast4_cast_fu_1010_p1;
    sc_signal< sc_lv<10> > tmp_122_fu_1014_p2;
    sc_signal< sc_lv<10> > tmp_38_fu_1019_p2;
    sc_signal< sc_lv<2> > tmp1_fu_1043_p2;
    sc_signal< sc_lv<5> > tmp1_cast_fu_1049_p1;
    sc_signal< sc_lv<5> > tmp_6_fu_1053_p2;
    sc_signal< sc_lv<9> > tmp_124_fu_1058_p3;
    sc_signal< sc_lv<6> > tmp_125_fu_1070_p3;
    sc_signal< sc_lv<10> > p_shl7_cast_fu_1078_p1;
    sc_signal< sc_lv<10> > p_shl6_cast_fu_1066_p1;
    sc_signal< sc_lv<10> > n_cast3_cast_fu_1094_p1;
    sc_signal< sc_lv<10> > tmp_127_fu_1098_p2;
    sc_signal< sc_lv<2> > tmp2_fu_1120_p2;
    sc_signal< sc_lv<5> > tmp2_cast_fu_1126_p1;
    sc_signal< sc_lv<5> > tmp_8_fu_1130_p2;
    sc_signal< sc_lv<10> > tmp_8_cast_cast_fu_1135_p1;
    sc_signal< sc_lv<10> > tmp_128_fu_1139_p2;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ShuffleConvs_1_Downs_10_address0();
    void thread_ShuffleConvs_1_Downs_10_ce0();
    void thread_ShuffleConvs_1_Downs_11_address0();
    void thread_ShuffleConvs_1_Downs_11_ce0();
    void thread_ShuffleConvs_1_Downs_12_address0();
    void thread_ShuffleConvs_1_Downs_12_ce0();
    void thread_ShuffleConvs_1_Downs_13_address0();
    void thread_ShuffleConvs_1_Downs_13_ce0();
    void thread_ShuffleConvs_1_Downs_14_address0();
    void thread_ShuffleConvs_1_Downs_14_ce0();
    void thread_ShuffleConvs_1_Downs_15_address0();
    void thread_ShuffleConvs_1_Downs_15_ce0();
    void thread_ShuffleConvs_1_Downs_16_address0();
    void thread_ShuffleConvs_1_Downs_16_ce0();
    void thread_ShuffleConvs_1_Downs_17_address0();
    void thread_ShuffleConvs_1_Downs_17_ce0();
    void thread_ShuffleConvs_1_Downs_18_address0();
    void thread_ShuffleConvs_1_Downs_18_ce0();
    void thread_ShuffleConvs_1_Downs_19_address0();
    void thread_ShuffleConvs_1_Downs_19_ce0();
    void thread_ShuffleConvs_1_Downs_1_address0();
    void thread_ShuffleConvs_1_Downs_1_ce0();
    void thread_ShuffleConvs_1_Downs_20_address0();
    void thread_ShuffleConvs_1_Downs_20_ce0();
    void thread_ShuffleConvs_1_Downs_21_address0();
    void thread_ShuffleConvs_1_Downs_21_ce0();
    void thread_ShuffleConvs_1_Downs_22_address0();
    void thread_ShuffleConvs_1_Downs_22_ce0();
    void thread_ShuffleConvs_1_Downs_23_address0();
    void thread_ShuffleConvs_1_Downs_23_ce0();
    void thread_ShuffleConvs_1_Downs_24_address0();
    void thread_ShuffleConvs_1_Downs_24_ce0();
    void thread_ShuffleConvs_1_Downs_25_address0();
    void thread_ShuffleConvs_1_Downs_25_ce0();
    void thread_ShuffleConvs_1_Downs_26_address0();
    void thread_ShuffleConvs_1_Downs_26_ce0();
    void thread_ShuffleConvs_1_Downs_27_address0();
    void thread_ShuffleConvs_1_Downs_27_ce0();
    void thread_ShuffleConvs_1_Downs_28_address0();
    void thread_ShuffleConvs_1_Downs_28_ce0();
    void thread_ShuffleConvs_1_Downs_29_address0();
    void thread_ShuffleConvs_1_Downs_29_ce0();
    void thread_ShuffleConvs_1_Downs_2_address0();
    void thread_ShuffleConvs_1_Downs_2_ce0();
    void thread_ShuffleConvs_1_Downs_30_address0();
    void thread_ShuffleConvs_1_Downs_30_ce0();
    void thread_ShuffleConvs_1_Downs_31_address0();
    void thread_ShuffleConvs_1_Downs_31_ce0();
    void thread_ShuffleConvs_1_Downs_32_address0();
    void thread_ShuffleConvs_1_Downs_32_ce0();
    void thread_ShuffleConvs_1_Downs_33_address0();
    void thread_ShuffleConvs_1_Downs_33_ce0();
    void thread_ShuffleConvs_1_Downs_34_address0();
    void thread_ShuffleConvs_1_Downs_34_ce0();
    void thread_ShuffleConvs_1_Downs_35_address0();
    void thread_ShuffleConvs_1_Downs_35_ce0();
    void thread_ShuffleConvs_1_Downs_36_address0();
    void thread_ShuffleConvs_1_Downs_36_ce0();
    void thread_ShuffleConvs_1_Downs_37_address0();
    void thread_ShuffleConvs_1_Downs_37_ce0();
    void thread_ShuffleConvs_1_Downs_38_address0();
    void thread_ShuffleConvs_1_Downs_38_ce0();
    void thread_ShuffleConvs_1_Downs_39_address0();
    void thread_ShuffleConvs_1_Downs_39_ce0();
    void thread_ShuffleConvs_1_Downs_3_address0();
    void thread_ShuffleConvs_1_Downs_3_ce0();
    void thread_ShuffleConvs_1_Downs_40_address0();
    void thread_ShuffleConvs_1_Downs_40_ce0();
    void thread_ShuffleConvs_1_Downs_41_address0();
    void thread_ShuffleConvs_1_Downs_41_ce0();
    void thread_ShuffleConvs_1_Downs_42_address0();
    void thread_ShuffleConvs_1_Downs_42_ce0();
    void thread_ShuffleConvs_1_Downs_43_address0();
    void thread_ShuffleConvs_1_Downs_43_ce0();
    void thread_ShuffleConvs_1_Downs_44_address0();
    void thread_ShuffleConvs_1_Downs_44_ce0();
    void thread_ShuffleConvs_1_Downs_45_address0();
    void thread_ShuffleConvs_1_Downs_45_ce0();
    void thread_ShuffleConvs_1_Downs_46_address0();
    void thread_ShuffleConvs_1_Downs_46_ce0();
    void thread_ShuffleConvs_1_Downs_47_address0();
    void thread_ShuffleConvs_1_Downs_47_ce0();
    void thread_ShuffleConvs_1_Downs_4_address0();
    void thread_ShuffleConvs_1_Downs_4_ce0();
    void thread_ShuffleConvs_1_Downs_5_address0();
    void thread_ShuffleConvs_1_Downs_5_ce0();
    void thread_ShuffleConvs_1_Downs_6_address0();
    void thread_ShuffleConvs_1_Downs_6_ce0();
    void thread_ShuffleConvs_1_Downs_7_address0();
    void thread_ShuffleConvs_1_Downs_7_ce0();
    void thread_ShuffleConvs_1_Downs_8_address0();
    void thread_ShuffleConvs_1_Downs_8_ce0();
    void thread_ShuffleConvs_1_Downs_9_address0();
    void thread_ShuffleConvs_1_Downs_9_ce0();
    void thread_ShuffleConvs_1_Downs_address0();
    void thread_ShuffleConvs_1_Downs_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bias_V_address0();
    void thread_bias_V_ce0();
    void thread_co_5_fu_917_p2();
    void thread_co_cast7_cast_fu_855_p1();
    void thread_co_cast7_fu_850_p1();
    void thread_exitcond1_fu_990_p2();
    void thread_exitcond2_fu_1031_p2();
    void thread_exitcond8_fu_911_p2();
    void thread_exitcond9_fu_962_p2();
    void thread_exitcond_fu_1108_p2();
    void thread_h_5_fu_1004_p2();
    void thread_h_cast6_cast_fu_923_p1();
    void thread_m_5_fu_1037_p2();
    void thread_m_cast4_cast_fu_1010_p1();
    void thread_n_5_fu_1114_p2();
    void thread_n_cast3_cast_fu_1094_p1();
    void thread_output_V_address0();
    void thread_output_V_ce0();
    void thread_output_V_d0();
    void thread_output_V_we0();
    void thread_p_shl1_cast_fu_901_p1();
    void thread_p_shl2_cast_fu_867_p1();
    void thread_p_shl3_cast_fu_940_p1();
    void thread_p_shl4_cast_fu_952_p1();
    void thread_p_shl6_cast_fu_1066_p1();
    void thread_p_shl7_cast_fu_1078_p1();
    void thread_p_shl_cast_fu_889_p1();
    void thread_tmp1_cast_fu_1049_p1();
    void thread_tmp1_fu_1043_p2();
    void thread_tmp2_cast_fu_1126_p1();
    void thread_tmp2_fu_1120_p2();
    void thread_tmp_114_fu_859_p3();
    void thread_tmp_115_fu_871_p2();
    void thread_tmp_116_fu_881_p3();
    void thread_tmp_117_fu_893_p3();
    void thread_tmp_118_fu_905_p2();
    void thread_tmp_119_fu_927_p2();
    void thread_tmp_120_fu_956_p2();
    void thread_tmp_121_fu_980_p2();
    void thread_tmp_122_fu_1014_p2();
    void thread_tmp_123_fu_1025_p2();
    void thread_tmp_124_fu_1058_p3();
    void thread_tmp_125_fu_1070_p3();
    void thread_tmp_126_fu_1082_p2();
    void thread_tmp_127_fu_1098_p2();
    void thread_tmp_128_fu_1139_p2();
    void thread_tmp_144_cast_fu_877_p1();
    void thread_tmp_152_cast_fu_985_p1();
    void thread_tmp_159_cast_fu_1103_p1();
    void thread_tmp_160_cast_fu_1144_p1();
    void thread_tmp_36_fu_932_p3();
    void thread_tmp_37_fu_944_p3();
    void thread_tmp_38_fu_1019_p2();
    void thread_tmp_6_fu_1053_p2();
    void thread_tmp_8_cast_cast_fu_1135_p1();
    void thread_tmp_8_fu_1130_p2();
    void thread_tmp_fu_968_p3();
    void thread_tmp_s_fu_996_p3();
    void thread_w_5_fu_1088_p2();
    void thread_w_cast5_cast_fu_976_p1();
    void thread_weight_V_address0();
    void thread_weight_V_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif