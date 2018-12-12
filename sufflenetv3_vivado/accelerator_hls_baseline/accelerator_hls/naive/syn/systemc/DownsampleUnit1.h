// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _DownsampleUnit1_HH_
#define _DownsampleUnit1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "subconv_1x1_16p16.h"
#include "subconv_3x3_16_strid.h"
#include "subconv_1x1_89.h"
#include "shuffle_4811.h"
#include "DownsampleUnit1_cocq.h"
#include "DownsampleUnit1_cpcA.h"

namespace ap_rtl {

struct DownsampleUnit1 : public sc_module {
    // Port declarations 43
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<12> > conv1r_weight_address0;
    sc_out< sc_logic > conv1r_weight_ce0;
    sc_in< sc_lv<32> > conv1r_weight_q0;
    sc_out< sc_lv<6> > conv1r_bias_address0;
    sc_out< sc_logic > conv1r_bias_ce0;
    sc_in< sc_lv<32> > conv1r_bias_q0;
    sc_out< sc_lv<9> > conv2r_weight_address0;
    sc_out< sc_logic > conv2r_weight_ce0;
    sc_in< sc_lv<32> > conv2r_weight_q0;
    sc_out< sc_lv<6> > conv2r_bias_address0;
    sc_out< sc_logic > conv2r_bias_ce0;
    sc_in< sc_lv<32> > conv2r_bias_q0;
    sc_out< sc_lv<12> > conv3r_weight_address0;
    sc_out< sc_logic > conv3r_weight_ce0;
    sc_in< sc_lv<32> > conv3r_weight_q0;
    sc_out< sc_lv<6> > conv3r_bias_address0;
    sc_out< sc_logic > conv3r_bias_ce0;
    sc_in< sc_lv<32> > conv3r_bias_q0;
    sc_out< sc_lv<9> > conv1l_weight_address0;
    sc_out< sc_logic > conv1l_weight_ce0;
    sc_in< sc_lv<32> > conv1l_weight_q0;
    sc_out< sc_lv<6> > conv1l_bias_address0;
    sc_out< sc_logic > conv1l_bias_ce0;
    sc_in< sc_lv<32> > conv1l_bias_q0;
    sc_out< sc_lv<12> > conv2l_weight_address0;
    sc_out< sc_logic > conv2l_weight_ce0;
    sc_in< sc_lv<32> > conv2l_weight_q0;
    sc_out< sc_lv<6> > conv2l_bias_address0;
    sc_out< sc_logic > conv2l_bias_ce0;
    sc_in< sc_lv<32> > conv2l_bias_q0;
    sc_out< sc_lv<14> > shuffleunit0_2_outpu_address0;
    sc_out< sc_logic > shuffleunit0_2_outpu_ce0;
    sc_in< sc_lv<32> > shuffleunit0_2_outpu_q0;
    sc_out< sc_lv<13> > downsampleunit1_outp_address0;
    sc_out< sc_logic > downsampleunit1_outp_ce0;
    sc_out< sc_logic > downsampleunit1_outp_we0;
    sc_out< sc_lv<32> > downsampleunit1_outp_d0;


    // Module declarations
    DownsampleUnit1(sc_module_name name);
    SC_HAS_PROCESS(DownsampleUnit1);

    ~DownsampleUnit1();

    sc_trace_file* mVcdFile;

    DownsampleUnit1_cocq* conv1r_output_U;
    DownsampleUnit1_cpcA* conv2r_ourput_0_U;
    DownsampleUnit1_cpcA* conv3r_ourput_0_U;
    DownsampleUnit1_cpcA* conv1l_output_0_U;
    DownsampleUnit1_cpcA* conv2l_output_0_U;
    subconv_1x1_16p16* grp_subconv_1x1_16p16_fu_335;
    subconv_3x3_16_strid* grp_subconv_3x3_16_strid_fu_346;
    subconv_1x1_89* grp_subconv_1x1_89_fu_359;
    shuffle_4811* grp_shuffle_4811_fu_371;
    sc_signal< sc_lv<25> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > indvarinc4_fu_379_p2;
    sc_signal< sc_lv<6> > indvarinc4_reg_634;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > indvarinc8_fu_385_p2;
    sc_signal< sc_lv<4> > indvarinc8_reg_639;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > indvarinc12_fu_391_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<6> > indvarinc19_fu_430_p2;
    sc_signal< sc_lv<6> > indvarinc19_reg_658;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > indvarinc23_fu_436_p2;
    sc_signal< sc_lv<3> > indvarinc23_reg_663;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<3> > indvarinc28_fu_442_p2;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<6> > indvarinc35_fu_481_p2;
    sc_signal< sc_lv<6> > indvarinc35_reg_682;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<3> > indvarinc39_fu_487_p2;
    sc_signal< sc_lv<3> > indvarinc39_reg_687;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<3> > indvarinc_fu_493_p2;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<6> > indvarinc43_fu_532_p2;
    sc_signal< sc_lv<6> > indvarinc43_reg_706;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<3> > indvarinc44_fu_538_p2;
    sc_signal< sc_lv<3> > indvarinc44_reg_711;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<3> > indvarinc45_fu_544_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<6> > indvarinc46_fu_583_p2;
    sc_signal< sc_lv<6> > indvarinc46_reg_730;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<3> > indvarinc47_fu_589_p2;
    sc_signal< sc_lv<3> > indvarinc47_reg_735;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<3> > indvarinc48_fu_595_p2;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<14> > conv1r_output_address0;
    sc_signal< sc_logic > conv1r_output_ce0;
    sc_signal< sc_logic > conv1r_output_we0;
    sc_signal< sc_lv<32> > conv1r_output_d0;
    sc_signal< sc_lv<32> > conv1r_output_q0;
    sc_signal< sc_lv<12> > conv2r_ourput_0_address0;
    sc_signal< sc_logic > conv2r_ourput_0_ce0;
    sc_signal< sc_logic > conv2r_ourput_0_we0;
    sc_signal< sc_lv<32> > conv2r_ourput_0_d0;
    sc_signal< sc_lv<32> > conv2r_ourput_0_q0;
    sc_signal< sc_lv<12> > conv3r_ourput_0_address0;
    sc_signal< sc_logic > conv3r_ourput_0_ce0;
    sc_signal< sc_logic > conv3r_ourput_0_we0;
    sc_signal< sc_lv<32> > conv3r_ourput_0_d0;
    sc_signal< sc_lv<32> > conv3r_ourput_0_q0;
    sc_signal< sc_lv<12> > conv1l_output_0_address0;
    sc_signal< sc_logic > conv1l_output_0_ce0;
    sc_signal< sc_logic > conv1l_output_0_we0;
    sc_signal< sc_lv<32> > conv1l_output_0_d0;
    sc_signal< sc_lv<32> > conv1l_output_0_q0;
    sc_signal< sc_lv<12> > conv2l_output_0_address0;
    sc_signal< sc_logic > conv2l_output_0_ce0;
    sc_signal< sc_logic > conv2l_output_0_we0;
    sc_signal< sc_lv<32> > conv2l_output_0_d0;
    sc_signal< sc_lv<32> > conv2l_output_0_q0;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_ap_start;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_ap_done;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_ap_idle;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_ap_ready;
    sc_signal< sc_lv<12> > grp_subconv_1x1_16p16_fu_335_weight_address0;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_weight_ce0;
    sc_signal< sc_lv<6> > grp_subconv_1x1_16p16_fu_335_bias_address0;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_bias_ce0;
    sc_signal< sc_lv<14> > grp_subconv_1x1_16p16_fu_335_output_r_address0;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_output_r_ce0;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_output_r_we0;
    sc_signal< sc_lv<32> > grp_subconv_1x1_16p16_fu_335_output_r_d0;
    sc_signal< sc_lv<14> > grp_subconv_1x1_16p16_fu_335_shuffleunit0_2_outpu_address0;
    sc_signal< sc_logic > grp_subconv_1x1_16p16_fu_335_shuffleunit0_2_outpu_ce0;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_ap_start;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_ap_done;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_ap_idle;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_ap_ready;
    sc_signal< sc_lv<14> > grp_subconv_3x3_16_strid_fu_346_input_r_address0;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_input_r_ce0;
    sc_signal< sc_lv<32> > grp_subconv_3x3_16_strid_fu_346_input_r_q0;
    sc_signal< sc_lv<9> > grp_subconv_3x3_16_strid_fu_346_weight_address0;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_weight_ce0;
    sc_signal< sc_lv<32> > grp_subconv_3x3_16_strid_fu_346_weight_q0;
    sc_signal< sc_lv<6> > grp_subconv_3x3_16_strid_fu_346_bias_address0;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_bias_ce0;
    sc_signal< sc_lv<32> > grp_subconv_3x3_16_strid_fu_346_bias_q0;
    sc_signal< sc_lv<12> > grp_subconv_3x3_16_strid_fu_346_output_0_address0;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_output_0_ce0;
    sc_signal< sc_logic > grp_subconv_3x3_16_strid_fu_346_output_0_we0;
    sc_signal< sc_lv<32> > grp_subconv_3x3_16_strid_fu_346_output_0_d0;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_ap_start;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_ap_done;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_ap_idle;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_ap_ready;
    sc_signal< sc_lv<12> > grp_subconv_1x1_89_fu_359_input_0_address0;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_input_0_ce0;
    sc_signal< sc_lv<32> > grp_subconv_1x1_89_fu_359_input_0_q0;
    sc_signal< sc_lv<12> > grp_subconv_1x1_89_fu_359_weight_address0;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_weight_ce0;
    sc_signal< sc_lv<32> > grp_subconv_1x1_89_fu_359_weight_q0;
    sc_signal< sc_lv<6> > grp_subconv_1x1_89_fu_359_bias_address0;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_bias_ce0;
    sc_signal< sc_lv<32> > grp_subconv_1x1_89_fu_359_bias_q0;
    sc_signal< sc_lv<12> > grp_subconv_1x1_89_fu_359_output_0_address0;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_output_0_ce0;
    sc_signal< sc_logic > grp_subconv_1x1_89_fu_359_output_0_we0;
    sc_signal< sc_lv<32> > grp_subconv_1x1_89_fu_359_output_0_d0;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_ap_start;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_ap_done;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_ap_idle;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_ap_ready;
    sc_signal< sc_lv<12> > grp_shuffle_4811_fu_371_left_0_address0;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_left_0_ce0;
    sc_signal< sc_lv<12> > grp_shuffle_4811_fu_371_right_0_address0;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_right_0_ce0;
    sc_signal< sc_lv<13> > grp_shuffle_4811_fu_371_output_r_address0;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_output_r_ce0;
    sc_signal< sc_logic > grp_shuffle_4811_fu_371_output_r_we0;
    sc_signal< sc_lv<32> > grp_shuffle_4811_fu_371_output_r_d0;
    sc_signal< sc_lv<6> > invdar3_reg_160;
    sc_signal< sc_lv<1> > tmp_410_fu_424_p2;
    sc_signal< sc_lv<1> > tmp_s_fu_412_p2;
    sc_signal< sc_lv<1> > tmp_409_fu_418_p2;
    sc_signal< sc_lv<4> > invdar7_reg_172;
    sc_signal< sc_lv<4> > invdar11_reg_184;
    sc_signal< sc_lv<6> > invdar18_reg_195;
    sc_signal< sc_lv<1> > tmp_413_fu_475_p2;
    sc_signal< sc_lv<1> > tmp_411_fu_463_p2;
    sc_signal< sc_lv<1> > tmp_412_fu_469_p2;
    sc_signal< sc_lv<3> > invdar22_reg_207;
    sc_signal< sc_lv<3> > invdar27_reg_219;
    sc_signal< sc_lv<6> > invdar34_reg_230;
    sc_signal< sc_lv<1> > tmp_416_fu_526_p2;
    sc_signal< sc_lv<1> > tmp_414_fu_514_p2;
    sc_signal< sc_lv<1> > tmp_415_fu_520_p2;
    sc_signal< sc_lv<3> > invdar38_reg_242;
    sc_signal< sc_lv<3> > invdar_reg_254;
    sc_signal< sc_lv<6> > invdar42_reg_265;
    sc_signal< sc_lv<1> > tmp_419_fu_577_p2;
    sc_signal< sc_lv<1> > tmp_417_fu_565_p2;
    sc_signal< sc_lv<1> > tmp_418_fu_571_p2;
    sc_signal< sc_lv<3> > invdar43_reg_277;
    sc_signal< sc_lv<3> > invdar44_reg_289;
    sc_signal< sc_lv<6> > invdar45_reg_300;
    sc_signal< sc_lv<1> > tmp_422_fu_628_p2;
    sc_signal< sc_lv<1> > tmp_420_fu_616_p2;
    sc_signal< sc_lv<1> > tmp_421_fu_622_p2;
    sc_signal< sc_lv<3> > invdar46_reg_312;
    sc_signal< sc_lv<3> > invdar47_reg_324;
    sc_signal< sc_logic > ap_reg_grp_subconv_1x1_16p16_fu_335_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_reg_grp_subconv_3x3_16_strid_fu_346_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_reg_grp_subconv_1x1_89_fu_359_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_reg_grp_shuffle_4811_fu_371_ap_start;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<64> > tmp_659_fu_407_p1;
    sc_signal< sc_lv<64> > tmp_660_fu_458_p1;
    sc_signal< sc_lv<64> > tmp_661_fu_509_p1;
    sc_signal< sc_lv<64> > tmp_662_fu_560_p1;
    sc_signal< sc_lv<64> > tmp_663_fu_611_p1;
    sc_signal< sc_lv<14> > tmp_fu_397_p4;
    sc_signal< sc_lv<12> > tmp_151_fu_448_p4;
    sc_signal< sc_lv<12> > tmp_152_fu_499_p4;
    sc_signal< sc_lv<12> > tmp_153_fu_550_p4;
    sc_signal< sc_lv<12> > tmp_154_fu_601_p4;
    sc_signal< sc_lv<25> > ap_NS_fsm;
    sc_signal< bool > ap_block_state21_on_subcall_done;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<25> ap_ST_fsm_state1;
    static const sc_lv<25> ap_ST_fsm_state2;
    static const sc_lv<25> ap_ST_fsm_state3;
    static const sc_lv<25> ap_ST_fsm_state4;
    static const sc_lv<25> ap_ST_fsm_state5;
    static const sc_lv<25> ap_ST_fsm_state6;
    static const sc_lv<25> ap_ST_fsm_state7;
    static const sc_lv<25> ap_ST_fsm_state8;
    static const sc_lv<25> ap_ST_fsm_state9;
    static const sc_lv<25> ap_ST_fsm_state10;
    static const sc_lv<25> ap_ST_fsm_state11;
    static const sc_lv<25> ap_ST_fsm_state12;
    static const sc_lv<25> ap_ST_fsm_state13;
    static const sc_lv<25> ap_ST_fsm_state14;
    static const sc_lv<25> ap_ST_fsm_state15;
    static const sc_lv<25> ap_ST_fsm_state16;
    static const sc_lv<25> ap_ST_fsm_state17;
    static const sc_lv<25> ap_ST_fsm_state18;
    static const sc_lv<25> ap_ST_fsm_state19;
    static const sc_lv<25> ap_ST_fsm_state20;
    static const sc_lv<25> ap_ST_fsm_state21;
    static const sc_lv<25> ap_ST_fsm_state22;
    static const sc_lv<25> ap_ST_fsm_state23;
    static const sc_lv<25> ap_ST_fsm_state24;
    static const sc_lv<25> ap_ST_fsm_state25;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<6> ap_const_lv6_2F;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_7;
    static const bool ap_const_boolean_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state21_on_subcall_done();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_conv1l_bias_address0();
    void thread_conv1l_bias_ce0();
    void thread_conv1l_output_0_address0();
    void thread_conv1l_output_0_ce0();
    void thread_conv1l_output_0_d0();
    void thread_conv1l_output_0_we0();
    void thread_conv1l_weight_address0();
    void thread_conv1l_weight_ce0();
    void thread_conv1r_bias_address0();
    void thread_conv1r_bias_ce0();
    void thread_conv1r_output_address0();
    void thread_conv1r_output_ce0();
    void thread_conv1r_output_d0();
    void thread_conv1r_output_we0();
    void thread_conv1r_weight_address0();
    void thread_conv1r_weight_ce0();
    void thread_conv2l_bias_address0();
    void thread_conv2l_bias_ce0();
    void thread_conv2l_output_0_address0();
    void thread_conv2l_output_0_ce0();
    void thread_conv2l_output_0_d0();
    void thread_conv2l_output_0_we0();
    void thread_conv2l_weight_address0();
    void thread_conv2l_weight_ce0();
    void thread_conv2r_bias_address0();
    void thread_conv2r_bias_ce0();
    void thread_conv2r_ourput_0_address0();
    void thread_conv2r_ourput_0_ce0();
    void thread_conv2r_ourput_0_d0();
    void thread_conv2r_ourput_0_we0();
    void thread_conv2r_weight_address0();
    void thread_conv2r_weight_ce0();
    void thread_conv3r_bias_address0();
    void thread_conv3r_bias_ce0();
    void thread_conv3r_ourput_0_address0();
    void thread_conv3r_ourput_0_ce0();
    void thread_conv3r_ourput_0_d0();
    void thread_conv3r_ourput_0_we0();
    void thread_conv3r_weight_address0();
    void thread_conv3r_weight_ce0();
    void thread_downsampleunit1_outp_address0();
    void thread_downsampleunit1_outp_ce0();
    void thread_downsampleunit1_outp_d0();
    void thread_downsampleunit1_outp_we0();
    void thread_grp_shuffle_4811_fu_371_ap_start();
    void thread_grp_subconv_1x1_16p16_fu_335_ap_start();
    void thread_grp_subconv_1x1_89_fu_359_ap_start();
    void thread_grp_subconv_1x1_89_fu_359_bias_q0();
    void thread_grp_subconv_1x1_89_fu_359_input_0_q0();
    void thread_grp_subconv_1x1_89_fu_359_weight_q0();
    void thread_grp_subconv_3x3_16_strid_fu_346_ap_start();
    void thread_grp_subconv_3x3_16_strid_fu_346_bias_q0();
    void thread_grp_subconv_3x3_16_strid_fu_346_input_r_q0();
    void thread_grp_subconv_3x3_16_strid_fu_346_weight_q0();
    void thread_indvarinc12_fu_391_p2();
    void thread_indvarinc19_fu_430_p2();
    void thread_indvarinc23_fu_436_p2();
    void thread_indvarinc28_fu_442_p2();
    void thread_indvarinc35_fu_481_p2();
    void thread_indvarinc39_fu_487_p2();
    void thread_indvarinc43_fu_532_p2();
    void thread_indvarinc44_fu_538_p2();
    void thread_indvarinc45_fu_544_p2();
    void thread_indvarinc46_fu_583_p2();
    void thread_indvarinc47_fu_589_p2();
    void thread_indvarinc48_fu_595_p2();
    void thread_indvarinc4_fu_379_p2();
    void thread_indvarinc8_fu_385_p2();
    void thread_indvarinc_fu_493_p2();
    void thread_shuffleunit0_2_outpu_address0();
    void thread_shuffleunit0_2_outpu_ce0();
    void thread_tmp_151_fu_448_p4();
    void thread_tmp_152_fu_499_p4();
    void thread_tmp_153_fu_550_p4();
    void thread_tmp_154_fu_601_p4();
    void thread_tmp_409_fu_418_p2();
    void thread_tmp_410_fu_424_p2();
    void thread_tmp_411_fu_463_p2();
    void thread_tmp_412_fu_469_p2();
    void thread_tmp_413_fu_475_p2();
    void thread_tmp_414_fu_514_p2();
    void thread_tmp_415_fu_520_p2();
    void thread_tmp_416_fu_526_p2();
    void thread_tmp_417_fu_565_p2();
    void thread_tmp_418_fu_571_p2();
    void thread_tmp_419_fu_577_p2();
    void thread_tmp_420_fu_616_p2();
    void thread_tmp_421_fu_622_p2();
    void thread_tmp_422_fu_628_p2();
    void thread_tmp_659_fu_407_p1();
    void thread_tmp_660_fu_458_p1();
    void thread_tmp_661_fu_509_p1();
    void thread_tmp_662_fu_560_p1();
    void thread_tmp_663_fu_611_p1();
    void thread_tmp_fu_397_p4();
    void thread_tmp_s_fu_412_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif