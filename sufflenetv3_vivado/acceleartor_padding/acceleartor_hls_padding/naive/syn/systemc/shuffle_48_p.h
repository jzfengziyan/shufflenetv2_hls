// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _shuffle_48_p_HH_
#define _shuffle_48_p_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct shuffle_48_p : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > left_V_address0;
    sc_out< sc_logic > left_V_ce0;
    sc_in< sc_lv<8> > left_V_q0;
    sc_out< sc_lv<14> > output_V_address0;
    sc_out< sc_logic > output_V_ce0;
    sc_out< sc_logic > output_V_we0;
    sc_out< sc_lv<8> > output_V_d0;
    sc_out< sc_lv<13> > buffer1_1_48_8x8_p_V_address0;
    sc_out< sc_logic > buffer1_1_48_8x8_p_V_ce0;
    sc_in< sc_lv<8> > buffer1_1_48_8x8_p_V_q0;


    // Module declarations
    shuffle_48_p(sc_module_name name);
    SC_HAS_PROCESS(shuffle_48_p);

    ~shuffle_48_p();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<1> > tmp_257_fu_132_p1;
    sc_signal< sc_lv<1> > tmp_257_reg_349;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > co_17_fu_142_p2;
    sc_signal< sc_lv<7> > co_17_reg_356;
    sc_signal< sc_lv<11> > tmp_282_fu_172_p2;
    sc_signal< sc_lv<11> > tmp_282_reg_361;
    sc_signal< sc_lv<1> > exitcond5_fu_136_p2;
    sc_signal< sc_lv<10> > tmp_286_fu_212_p2;
    sc_signal< sc_lv<10> > tmp_286_reg_366;
    sc_signal< sc_lv<4> > h_17_fu_224_p2;
    sc_signal< sc_lv<4> > h_17_reg_374;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<14> > tmp_288_fu_267_p2;
    sc_signal< sc_lv<14> > tmp_288_reg_379;
    sc_signal< sc_lv<1> > exitcond4_fu_218_p2;
    sc_signal< sc_lv<15> > tmp_290_fu_302_p2;
    sc_signal< sc_lv<15> > tmp_290_reg_384;
    sc_signal< sc_lv<4> > w_17_fu_314_p2;
    sc_signal< sc_lv<4> > w_17_reg_392;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond_fu_308_p2;
    sc_signal< sc_lv<14> > output_V_addr_reg_402;
    sc_signal< sc_lv<7> > co_reg_87;
    sc_signal< sc_lv<4> > h_reg_98;
    sc_signal< sc_lv<4> > w_reg_109;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<8> > storemerge_phi_fu_123_p4;
    sc_signal< sc_lv<64> > tmp_345_cast_fu_333_p1;
    sc_signal< sc_lv<64> > tmp_346_cast_fu_344_p1;
    sc_signal< sc_lv<10> > tmp_fu_148_p3;
    sc_signal< sc_lv<8> > tmp_s_fu_160_p3;
    sc_signal< sc_lv<11> > p_shl3_cast_fu_168_p1;
    sc_signal< sc_lv<11> > p_shl2_cast_fu_156_p1;
    sc_signal< sc_lv<6> > tmp_283_fu_178_p4;
    sc_signal< sc_lv<9> > tmp_284_fu_188_p3;
    sc_signal< sc_lv<7> > tmp_285_fu_200_p3;
    sc_signal< sc_lv<10> > p_shl1_cast_fu_208_p1;
    sc_signal< sc_lv<10> > p_shl_cast_fu_196_p1;
    sc_signal< sc_lv<10> > tmp_cast_fu_234_p1;
    sc_signal< sc_lv<10> > tmp_287_fu_238_p2;
    sc_signal< sc_lv<13> > tmp_258_fu_243_p3;
    sc_signal< sc_lv<11> > tmp_259_fu_255_p3;
    sc_signal< sc_lv<14> > p_shl6_cast_fu_251_p1;
    sc_signal< sc_lv<14> > p_shl7_cast_fu_263_p1;
    sc_signal< sc_lv<11> > tmp_cast9_fu_230_p1;
    sc_signal< sc_lv<11> > tmp_289_fu_273_p2;
    sc_signal< sc_lv<14> > tmp_260_fu_278_p3;
    sc_signal< sc_lv<12> > tmp_261_fu_290_p3;
    sc_signal< sc_lv<15> > p_shl4_cast_fu_286_p1;
    sc_signal< sc_lv<15> > p_shl5_cast_fu_298_p1;
    sc_signal< sc_lv<14> > tmp_180_cast_fu_324_p1;
    sc_signal< sc_lv<14> > tmp_291_fu_328_p2;
    sc_signal< sc_lv<15> > tmp_180_cast8_fu_320_p1;
    sc_signal< sc_lv<15> > tmp_292_fu_339_p2;
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
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<7> ap_const_lv7_60;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<4> ap_const_lv4_A;
    static const sc_lv<4> ap_const_lv4_1;
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
    void thread_buffer1_1_48_8x8_p_V_address0();
    void thread_buffer1_1_48_8x8_p_V_ce0();
    void thread_co_17_fu_142_p2();
    void thread_exitcond4_fu_218_p2();
    void thread_exitcond5_fu_136_p2();
    void thread_exitcond_fu_308_p2();
    void thread_h_17_fu_224_p2();
    void thread_left_V_address0();
    void thread_left_V_ce0();
    void thread_output_V_address0();
    void thread_output_V_ce0();
    void thread_output_V_d0();
    void thread_output_V_we0();
    void thread_p_shl1_cast_fu_208_p1();
    void thread_p_shl2_cast_fu_156_p1();
    void thread_p_shl3_cast_fu_168_p1();
    void thread_p_shl4_cast_fu_286_p1();
    void thread_p_shl5_cast_fu_298_p1();
    void thread_p_shl6_cast_fu_251_p1();
    void thread_p_shl7_cast_fu_263_p1();
    void thread_p_shl_cast_fu_196_p1();
    void thread_storemerge_phi_fu_123_p4();
    void thread_tmp_180_cast8_fu_320_p1();
    void thread_tmp_180_cast_fu_324_p1();
    void thread_tmp_257_fu_132_p1();
    void thread_tmp_258_fu_243_p3();
    void thread_tmp_259_fu_255_p3();
    void thread_tmp_260_fu_278_p3();
    void thread_tmp_261_fu_290_p3();
    void thread_tmp_282_fu_172_p2();
    void thread_tmp_283_fu_178_p4();
    void thread_tmp_284_fu_188_p3();
    void thread_tmp_285_fu_200_p3();
    void thread_tmp_286_fu_212_p2();
    void thread_tmp_287_fu_238_p2();
    void thread_tmp_288_fu_267_p2();
    void thread_tmp_289_fu_273_p2();
    void thread_tmp_290_fu_302_p2();
    void thread_tmp_291_fu_328_p2();
    void thread_tmp_292_fu_339_p2();
    void thread_tmp_345_cast_fu_333_p1();
    void thread_tmp_346_cast_fu_344_p1();
    void thread_tmp_cast9_fu_230_p1();
    void thread_tmp_cast_fu_234_p1();
    void thread_tmp_fu_148_p3();
    void thread_tmp_s_fu_160_p3();
    void thread_w_17_fu_314_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif