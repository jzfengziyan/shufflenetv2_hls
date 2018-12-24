// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _avgpool_HH_
#define _avgpool_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct avgpool : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<9> > output_V_address0;
    sc_out< sc_logic > output_V_ce0;
    sc_out< sc_logic > output_V_we0;
    sc_out< sc_lv<8> > output_V_d0;
    sc_out< sc_lv<13> > conv_last_output_V_address0;
    sc_out< sc_logic > conv_last_output_V_ce0;
    sc_in< sc_lv<8> > conv_last_output_V_q0;


    // Module declarations
    avgpool(sc_module_name name);
    SC_HAS_PROCESS(avgpool);

    ~avgpool();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > co_25_fu_143_p2;
    sc_signal< sc_lv<10> > co_25_reg_373;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > tmp_fu_149_p1;
    sc_signal< sc_lv<64> > tmp_reg_378;
    sc_signal< sc_lv<1> > exitcond7_fu_137_p2;
    sc_signal< sc_lv<13> > tmp_460_cast_fu_161_p1;
    sc_signal< sc_lv<13> > tmp_460_cast_reg_383;
    sc_signal< sc_lv<3> > h_24_fu_171_p2;
    sc_signal< sc_lv<3> > h_24_reg_391;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<15> > tmp_464_cast_fu_186_p3;
    sc_signal< sc_lv<15> > tmp_464_cast_reg_396;
    sc_signal< sc_lv<1> > exitcond8_fu_165_p2;
    sc_signal< sc_lv<5> > tmp_363_reg_401;
    sc_signal< sc_lv<3> > w_24_fu_220_p2;
    sc_signal< sc_lv<3> > w_24_reg_409;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond_fu_214_p2;
    sc_signal< sc_lv<1> > isneg_reg_419;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > p_Val2_111_fu_262_p2;
    sc_signal< sc_lv<8> > p_Val2_111_reg_426;
    sc_signal< sc_lv<1> > newsignbit_reg_432;
    sc_signal< sc_lv<8> > sum_V_fu_314_p3;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > co_reg_80;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<8> > p_Val2_s_reg_91;
    sc_signal< sc_lv<3> > h_reg_103;
    sc_signal< sc_lv<8> > p_Val2_108_reg_114;
    sc_signal< sc_lv<3> > w_reg_126;
    sc_signal< sc_lv<64> > tmp_465_cast_fu_235_p1;
    sc_signal< sc_lv<12> > tmp_s_fu_153_p3;
    sc_signal< sc_lv<13> > tmp_cast_fu_177_p1;
    sc_signal< sc_lv<13> > tmp_364_fu_181_p2;
    sc_signal< sc_lv<9> > tmp_tr_fu_194_p1;
    sc_signal< sc_lv<9> > p_neg_fu_198_p2;
    sc_signal< sc_lv<15> > tmp_221_cast_fu_226_p1;
    sc_signal< sc_lv<15> > tmp_365_fu_230_p2;
    sc_signal< sc_lv<9> > tmp_222_fu_240_p1;
    sc_signal< sc_lv<9> > tmp_223_fu_244_p1;
    sc_signal< sc_lv<9> > p_Val2_110_fu_248_p2;
    sc_signal< sc_lv<1> > tmp_224_fu_276_p2;
    sc_signal< sc_lv<1> > isneg_not_fu_290_p2;
    sc_signal< sc_lv<1> > brmerge_i_i_i_fu_286_p2;
    sc_signal< sc_lv<1> > underflow_fu_281_p2;
    sc_signal< sc_lv<1> > brmerge_fu_295_p2;
    sc_signal< sc_lv<8> > p_Val2_118_mux_fu_300_p3;
    sc_signal< sc_lv<8> > p_Val2_1_fu_307_p3;
    sc_signal< sc_lv<6> > p_lshr_cast_fu_330_p1;
    sc_signal< sc_lv<4> > tmp_13_fu_339_p4;
    sc_signal< sc_lv<5> > tmp_14_fu_349_p1;
    sc_signal< sc_lv<1> > tmp_310_fu_322_p3;
    sc_signal< sc_lv<6> > p_neg_t_fu_333_p2;
    sc_signal< sc_lv<6> > p_lshr_f_cast_fu_353_p1;
    sc_signal< sc_lv<6> > tmp_15_fu_357_p3;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_state2;
    static const sc_lv<7> ap_ST_fsm_state3;
    static const sc_lv<7> ap_ST_fsm_state4;
    static const sc_lv<7> ap_ST_fsm_state5;
    static const sc_lv<7> ap_ST_fsm_state6;
    static const sc_lv<7> ap_ST_fsm_state7;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<6> ap_const_lv6_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_brmerge_fu_295_p2();
    void thread_brmerge_i_i_i_fu_286_p2();
    void thread_co_25_fu_143_p2();
    void thread_conv_last_output_V_address0();
    void thread_conv_last_output_V_ce0();
    void thread_exitcond7_fu_137_p2();
    void thread_exitcond8_fu_165_p2();
    void thread_exitcond_fu_214_p2();
    void thread_h_24_fu_171_p2();
    void thread_isneg_not_fu_290_p2();
    void thread_output_V_address0();
    void thread_output_V_ce0();
    void thread_output_V_d0();
    void thread_output_V_we0();
    void thread_p_Val2_110_fu_248_p2();
    void thread_p_Val2_111_fu_262_p2();
    void thread_p_Val2_118_mux_fu_300_p3();
    void thread_p_Val2_1_fu_307_p3();
    void thread_p_lshr_cast_fu_330_p1();
    void thread_p_lshr_f_cast_fu_353_p1();
    void thread_p_neg_fu_198_p2();
    void thread_p_neg_t_fu_333_p2();
    void thread_sum_V_fu_314_p3();
    void thread_tmp_13_fu_339_p4();
    void thread_tmp_14_fu_349_p1();
    void thread_tmp_15_fu_357_p3();
    void thread_tmp_221_cast_fu_226_p1();
    void thread_tmp_222_fu_240_p1();
    void thread_tmp_223_fu_244_p1();
    void thread_tmp_224_fu_276_p2();
    void thread_tmp_310_fu_322_p3();
    void thread_tmp_364_fu_181_p2();
    void thread_tmp_365_fu_230_p2();
    void thread_tmp_460_cast_fu_161_p1();
    void thread_tmp_464_cast_fu_186_p3();
    void thread_tmp_465_cast_fu_235_p1();
    void thread_tmp_cast_fu_177_p1();
    void thread_tmp_fu_149_p1();
    void thread_tmp_s_fu_153_p3();
    void thread_tmp_tr_fu_194_p1();
    void thread_underflow_fu_281_p2();
    void thread_w_24_fu_220_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif