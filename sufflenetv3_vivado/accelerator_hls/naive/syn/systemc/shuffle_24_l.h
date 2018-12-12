// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _shuffle_24_l_HH_
#define _shuffle_24_l_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct shuffle_24_l : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > left_r_address0;
    sc_out< sc_logic > left_r_ce0;
    sc_in< sc_lv<32> > left_r_q0;
    sc_out< sc_lv<14> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<32> > output_r_d0;


    // Module declarations
    shuffle_24_l(sc_module_name name);
    SC_HAS_PROCESS(shuffle_24_l);

    ~shuffle_24_l();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > tmp_101_fu_98_p1;
    sc_signal< sc_lv<1> > tmp_101_reg_233;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<6> > co_20_fu_108_p2;
    sc_signal< sc_lv<6> > co_20_reg_240;
    sc_signal< sc_lv<10> > tmp_303_cast_fu_132_p1;
    sc_signal< sc_lv<10> > tmp_303_cast_reg_245;
    sc_signal< sc_lv<1> > exitcond2_fu_102_p2;
    sc_signal< sc_lv<11> > tmp_305_cast_fu_144_p1;
    sc_signal< sc_lv<11> > tmp_305_cast_reg_250;
    sc_signal< sc_lv<5> > h_20_fu_154_p2;
    sc_signal< sc_lv<5> > h_20_reg_258;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<14> > tmp_308_cast_fu_173_p3;
    sc_signal< sc_lv<14> > tmp_308_cast_reg_263;
    sc_signal< sc_lv<1> > exitcond1_fu_148_p2;
    sc_signal< sc_lv<15> > tmp_311_cast_fu_186_p3;
    sc_signal< sc_lv<15> > tmp_311_cast_reg_268;
    sc_signal< sc_lv<5> > w_20_fu_200_p2;
    sc_signal< sc_lv<5> > w_20_reg_276;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond_fu_194_p2;
    sc_signal< sc_lv<15> > tmp_180_fu_224_p2;
    sc_signal< sc_lv<15> > tmp_180_reg_286;
    sc_signal< sc_lv<6> > co_reg_65;
    sc_signal< sc_lv<5> > h_reg_76;
    sc_signal< sc_lv<5> > w_reg_87;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > tmp_312_cast_fu_219_p1;
    sc_signal< sc_lv<64> > tmp_313_cast_fu_229_p1;
    sc_signal< sc_lv<5> > tmp_fu_114_p4;
    sc_signal< sc_lv<9> > tmp_s_fu_124_p3;
    sc_signal< sc_lv<10> > tmp_176_fu_136_p3;
    sc_signal< sc_lv<10> > tmp_cast_fu_164_p1;
    sc_signal< sc_lv<10> > tmp_177_fu_168_p2;
    sc_signal< sc_lv<11> > tmp_cast2_fu_160_p1;
    sc_signal< sc_lv<11> > tmp_178_fu_181_p2;
    sc_signal< sc_lv<14> > tmp_104_cast_fu_210_p1;
    sc_signal< sc_lv<14> > tmp_179_fu_214_p2;
    sc_signal< sc_lv<15> > tmp_104_cast1_fu_206_p1;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_co_20_fu_108_p2();
    void thread_exitcond1_fu_148_p2();
    void thread_exitcond2_fu_102_p2();
    void thread_exitcond_fu_194_p2();
    void thread_h_20_fu_154_p2();
    void thread_left_r_address0();
    void thread_left_r_ce0();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_tmp_101_fu_98_p1();
    void thread_tmp_104_cast1_fu_206_p1();
    void thread_tmp_104_cast_fu_210_p1();
    void thread_tmp_176_fu_136_p3();
    void thread_tmp_177_fu_168_p2();
    void thread_tmp_178_fu_181_p2();
    void thread_tmp_179_fu_214_p2();
    void thread_tmp_180_fu_224_p2();
    void thread_tmp_303_cast_fu_132_p1();
    void thread_tmp_305_cast_fu_144_p1();
    void thread_tmp_308_cast_fu_173_p3();
    void thread_tmp_311_cast_fu_186_p3();
    void thread_tmp_312_cast_fu_219_p1();
    void thread_tmp_313_cast_fu_229_p1();
    void thread_tmp_cast2_fu_160_p1();
    void thread_tmp_cast_fu_164_p1();
    void thread_tmp_fu_114_p4();
    void thread_tmp_s_fu_124_p3();
    void thread_w_20_fu_200_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif