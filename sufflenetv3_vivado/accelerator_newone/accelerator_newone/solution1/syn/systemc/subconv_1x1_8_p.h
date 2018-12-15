// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _subconv_1x1_8_p_HH_
#define _subconv_1x1_8_p_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "ShuffleNetV2_faddbkb.h"
#include "ShuffleNetV2_fmulcud.h"
#include "ShuffleNetV2_fcmpdEe.h"

namespace ap_rtl {

struct subconv_1x1_8_p : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<13> > input_r_address0;
    sc_out< sc_logic > input_r_ce0;
    sc_in< sc_lv<32> > input_r_q0;
    sc_out< sc_lv<12> > weight_address0;
    sc_out< sc_logic > weight_ce0;
    sc_in< sc_lv<32> > weight_q0;
    sc_out< sc_lv<6> > bias_address0;
    sc_out< sc_logic > bias_ce0;
    sc_in< sc_lv<32> > bias_q0;
    sc_out< sc_lv<13> > output_r_address0;
    sc_out< sc_logic > output_r_ce0;
    sc_out< sc_logic > output_r_we0;
    sc_out< sc_lv<32> > output_r_d0;
    sc_in< sc_lv<32> > output_r_q0;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<5> > ap_var_for_const2;


    // Module declarations
    subconv_1x1_8_p(sc_module_name name);
    SC_HAS_PROCESS(subconv_1x1_8_p);

    ~subconv_1x1_8_p();

    sc_trace_file* mVcdFile;

    ShuffleNetV2_faddbkb<1,5,32,32,32>* ShuffleNetV2_faddbkb_x_U54;
    ShuffleNetV2_fmulcud<1,4,32,32,32>* ShuffleNetV2_fmulcud_x_U55;
    ShuffleNetV2_fcmpdEe<1,1,32,32,1>* ShuffleNetV2_fcmpdEe_x_U56;
    sc_signal< sc_lv<33> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > reg_262;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<6> > co_16_fu_274_p2;
    sc_signal< sc_lv<6> > co_16_reg_800;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > tmp_175_fu_309_p2;
    sc_signal< sc_lv<10> > tmp_175_reg_805;
    sc_signal< sc_lv<1> > exitcond9_fu_268_p2;
    sc_signal< sc_lv<6> > bias_addr_reg_810;
    sc_signal< sc_lv<14> > tmp_183_fu_354_p2;
    sc_signal< sc_lv<14> > tmp_183_reg_818;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond8_fu_315_p2;
    sc_signal< sc_lv<14> > tmp_191_fu_370_p2;
    sc_signal< sc_lv<14> > tmp_191_reg_826;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond7_fu_360_p2;
    sc_signal< sc_lv<4> > w_16_fu_375_p2;
    sc_signal< sc_lv<4> > w_16_reg_831;
    sc_signal< sc_lv<4> > h_16_fu_381_p2;
    sc_signal< sc_lv<6> > co_17_fu_397_p2;
    sc_signal< sc_lv<6> > co_17_reg_844;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<13> > tmp_178_fu_427_p2;
    sc_signal< sc_lv<13> > tmp_178_reg_849;
    sc_signal< sc_lv<1> > exitcond6_fu_391_p2;
    sc_signal< sc_lv<10> > tmp_181_fu_457_p2;
    sc_signal< sc_lv<10> > tmp_181_reg_854;
    sc_signal< sc_lv<10> > tmp_87_cast_fu_469_p1;
    sc_signal< sc_lv<10> > tmp_87_cast_reg_862;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > exitcond5_fu_463_p2;
    sc_signal< sc_lv<14> > tmp_190_fu_502_p2;
    sc_signal< sc_lv<14> > tmp_190_reg_867;
    sc_signal< sc_lv<14> > tmp_90_cast_fu_514_p1;
    sc_signal< sc_lv<14> > tmp_90_cast_reg_875;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > exitcond4_fu_508_p2;
    sc_signal< sc_lv<13> > output_addr_8_reg_880;
    sc_signal< sc_lv<4> > h_17_fu_528_p2;
    sc_signal< sc_lv<6> > ci_2_fu_540_p2;
    sc_signal< sc_lv<6> > ci_2_reg_893;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<14> > tmp_206_fu_615_p2;
    sc_signal< sc_lv<14> > tmp_206_reg_898;
    sc_signal< sc_lv<1> > exitcond3_fu_534_p2;
    sc_signal< sc_lv<13> > tmp_207_fu_620_p2;
    sc_signal< sc_lv<13> > tmp_207_reg_903;
    sc_signal< sc_lv<4> > w_17_fu_625_p2;
    sc_signal< sc_lv<4> > w_17_reg_908;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<32> > weight_load_reg_923;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > input_load_reg_928;
    sc_signal< sc_lv<32> > grp_fu_253_p2;
    sc_signal< sc_lv<32> > tmp_94_reg_933;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > grp_fu_247_p2;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<32> > tmp_92_reg_943;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<6> > co_18_fu_645_p2;
    sc_signal< sc_lv<6> > co_18_reg_951;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<10> > tmp_186_fu_675_p2;
    sc_signal< sc_lv<10> > tmp_186_reg_956;
    sc_signal< sc_lv<1> > exitcond2_fu_639_p2;
    sc_signal< sc_lv<14> > tmp_195_fu_720_p2;
    sc_signal< sc_lv<14> > tmp_195_reg_964;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<1> > exitcond1_fu_681_p2;
    sc_signal< sc_lv<13> > output_addr_7_reg_972;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<1> > exitcond_fu_726_p2;
    sc_signal< sc_lv<4> > h_18_fu_746_p2;
    sc_signal< sc_lv<1> > notlhs_fu_770_p2;
    sc_signal< sc_lv<1> > notlhs_reg_982;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<1> > notrhs_fu_776_p2;
    sc_signal< sc_lv<1> > notrhs_reg_987;
    sc_signal< sc_lv<1> > tmp_9_fu_257_p2;
    sc_signal< sc_lv<1> > tmp_9_reg_992;
    sc_signal< sc_lv<4> > w_18_fu_791_p2;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_lv<6> > co_reg_120;
    sc_signal< sc_lv<4> > h_reg_131;
    sc_signal< sc_lv<4> > w_reg_143;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<6> > co1_reg_154;
    sc_signal< sc_lv<4> > h2_reg_165;
    sc_signal< sc_lv<4> > w3_reg_177;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<32> > sum_reg_189;
    sc_signal< sc_lv<6> > ci_reg_201;
    sc_signal< sc_lv<6> > co4_reg_212;
    sc_signal< sc_lv<4> > h5_reg_223;
    sc_signal< sc_lv<4> > w6_reg_235;
    sc_signal< sc_lv<64> > tmp_fu_280_p1;
    sc_signal< sc_lv<64> > tmp_242_cast_fu_387_p1;
    sc_signal< sc_lv<64> > tmp_247_cast_fu_523_p1;
    sc_signal< sc_lv<64> > tmp_256_cast_fu_631_p1;
    sc_signal< sc_lv<64> > tmp_257_cast_fu_635_p1;
    sc_signal< sc_lv<64> > tmp_248_cast_fu_741_p1;
    sc_signal< sc_lv<1> > tmp_10_fu_786_p2;
    sc_signal< sc_lv<32> > grp_fu_247_p0;
    sc_signal< sc_lv<32> > grp_fu_247_p1;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<9> > tmp_s_fu_285_p3;
    sc_signal< sc_lv<7> > tmp_174_fu_297_p3;
    sc_signal< sc_lv<10> > p_shl1_cast_fu_305_p1;
    sc_signal< sc_lv<10> > p_shl_cast_fu_293_p1;
    sc_signal< sc_lv<10> > tmp_cast_fu_321_p1;
    sc_signal< sc_lv<10> > tmp_182_fu_325_p2;
    sc_signal< sc_lv<13> > tmp_172_fu_330_p3;
    sc_signal< sc_lv<11> > tmp_173_fu_342_p3;
    sc_signal< sc_lv<14> > p_shl2_cast_fu_338_p1;
    sc_signal< sc_lv<14> > p_shl3_cast_fu_350_p1;
    sc_signal< sc_lv<14> > tmp_88_cast_fu_366_p1;
    sc_signal< sc_lv<12> > tmp_176_fu_403_p3;
    sc_signal< sc_lv<10> > tmp_177_fu_415_p3;
    sc_signal< sc_lv<13> > p_shl6_cast_fu_411_p1;
    sc_signal< sc_lv<13> > p_shl7_cast_fu_423_p1;
    sc_signal< sc_lv<9> > tmp_179_fu_433_p3;
    sc_signal< sc_lv<7> > tmp_180_fu_445_p3;
    sc_signal< sc_lv<10> > p_shl5_cast_fu_453_p1;
    sc_signal< sc_lv<10> > p_shl4_cast_fu_441_p1;
    sc_signal< sc_lv<10> > tmp_187_fu_473_p2;
    sc_signal< sc_lv<13> > tmp_188_fu_478_p3;
    sc_signal< sc_lv<11> > tmp_189_fu_490_p3;
    sc_signal< sc_lv<14> > p_shl8_cast_fu_486_p1;
    sc_signal< sc_lv<14> > p_shl9_cast_fu_498_p1;
    sc_signal< sc_lv<14> > tmp_196_fu_518_p2;
    sc_signal< sc_lv<9> > tmp_199_fu_550_p3;
    sc_signal< sc_lv<7> > tmp_200_fu_562_p3;
    sc_signal< sc_lv<10> > p_shl12_cast_fu_558_p1;
    sc_signal< sc_lv<10> > p_shl13_cast_fu_570_p1;
    sc_signal< sc_lv<10> > tmp_201_fu_574_p2;
    sc_signal< sc_lv<10> > tmp_202_fu_580_p2;
    sc_signal< sc_lv<13> > tmp_203_fu_585_p3;
    sc_signal< sc_lv<11> > tmp_204_fu_597_p3;
    sc_signal< sc_lv<14> > p_shl10_cast_fu_593_p1;
    sc_signal< sc_lv<14> > p_shl11_cast_fu_605_p1;
    sc_signal< sc_lv<14> > tmp_205_fu_609_p2;
    sc_signal< sc_lv<13> > tmp_93_cast_fu_546_p1;
    sc_signal< sc_lv<9> > tmp_184_fu_651_p3;
    sc_signal< sc_lv<7> > tmp_185_fu_663_p3;
    sc_signal< sc_lv<10> > p_shl15_cast_fu_671_p1;
    sc_signal< sc_lv<10> > p_shl14_cast_fu_659_p1;
    sc_signal< sc_lv<10> > tmp_89_cast_fu_687_p1;
    sc_signal< sc_lv<10> > tmp_192_fu_691_p2;
    sc_signal< sc_lv<13> > tmp_193_fu_696_p3;
    sc_signal< sc_lv<11> > tmp_194_fu_708_p3;
    sc_signal< sc_lv<14> > p_shl16_cast_fu_704_p1;
    sc_signal< sc_lv<14> > p_shl17_cast_fu_716_p1;
    sc_signal< sc_lv<14> > tmp_91_cast_fu_732_p1;
    sc_signal< sc_lv<14> > tmp_197_fu_736_p2;
    sc_signal< sc_lv<32> > output_load_to_int_fu_752_p1;
    sc_signal< sc_lv<8> > tmp_6_fu_756_p4;
    sc_signal< sc_lv<23> > tmp_198_fu_766_p1;
    sc_signal< sc_lv<1> > tmp_8_fu_782_p2;
    sc_signal< sc_lv<33> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<33> ap_ST_fsm_state1;
    static const sc_lv<33> ap_ST_fsm_state2;
    static const sc_lv<33> ap_ST_fsm_state3;
    static const sc_lv<33> ap_ST_fsm_state4;
    static const sc_lv<33> ap_ST_fsm_state5;
    static const sc_lv<33> ap_ST_fsm_state6;
    static const sc_lv<33> ap_ST_fsm_state7;
    static const sc_lv<33> ap_ST_fsm_state8;
    static const sc_lv<33> ap_ST_fsm_state9;
    static const sc_lv<33> ap_ST_fsm_state10;
    static const sc_lv<33> ap_ST_fsm_state11;
    static const sc_lv<33> ap_ST_fsm_state12;
    static const sc_lv<33> ap_ST_fsm_state13;
    static const sc_lv<33> ap_ST_fsm_state14;
    static const sc_lv<33> ap_ST_fsm_state15;
    static const sc_lv<33> ap_ST_fsm_state16;
    static const sc_lv<33> ap_ST_fsm_state17;
    static const sc_lv<33> ap_ST_fsm_state18;
    static const sc_lv<33> ap_ST_fsm_state19;
    static const sc_lv<33> ap_ST_fsm_state20;
    static const sc_lv<33> ap_ST_fsm_state21;
    static const sc_lv<33> ap_ST_fsm_state22;
    static const sc_lv<33> ap_ST_fsm_state23;
    static const sc_lv<33> ap_ST_fsm_state24;
    static const sc_lv<33> ap_ST_fsm_state25;
    static const sc_lv<33> ap_ST_fsm_state26;
    static const sc_lv<33> ap_ST_fsm_state27;
    static const sc_lv<33> ap_ST_fsm_state28;
    static const sc_lv<33> ap_ST_fsm_state29;
    static const sc_lv<33> ap_ST_fsm_state30;
    static const sc_lv<33> ap_ST_fsm_state31;
    static const sc_lv<33> ap_ST_fsm_state32;
    static const sc_lv<33> ap_ST_fsm_state33;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_4;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bias_address0();
    void thread_bias_ce0();
    void thread_ci_2_fu_540_p2();
    void thread_co_16_fu_274_p2();
    void thread_co_17_fu_397_p2();
    void thread_co_18_fu_645_p2();
    void thread_exitcond1_fu_681_p2();
    void thread_exitcond2_fu_639_p2();
    void thread_exitcond3_fu_534_p2();
    void thread_exitcond4_fu_508_p2();
    void thread_exitcond5_fu_463_p2();
    void thread_exitcond6_fu_391_p2();
    void thread_exitcond7_fu_360_p2();
    void thread_exitcond8_fu_315_p2();
    void thread_exitcond9_fu_268_p2();
    void thread_exitcond_fu_726_p2();
    void thread_grp_fu_247_p0();
    void thread_grp_fu_247_p1();
    void thread_h_16_fu_381_p2();
    void thread_h_17_fu_528_p2();
    void thread_h_18_fu_746_p2();
    void thread_input_r_address0();
    void thread_input_r_ce0();
    void thread_notlhs_fu_770_p2();
    void thread_notrhs_fu_776_p2();
    void thread_output_load_to_int_fu_752_p1();
    void thread_output_r_address0();
    void thread_output_r_ce0();
    void thread_output_r_d0();
    void thread_output_r_we0();
    void thread_p_shl10_cast_fu_593_p1();
    void thread_p_shl11_cast_fu_605_p1();
    void thread_p_shl12_cast_fu_558_p1();
    void thread_p_shl13_cast_fu_570_p1();
    void thread_p_shl14_cast_fu_659_p1();
    void thread_p_shl15_cast_fu_671_p1();
    void thread_p_shl16_cast_fu_704_p1();
    void thread_p_shl17_cast_fu_716_p1();
    void thread_p_shl1_cast_fu_305_p1();
    void thread_p_shl2_cast_fu_338_p1();
    void thread_p_shl3_cast_fu_350_p1();
    void thread_p_shl4_cast_fu_441_p1();
    void thread_p_shl5_cast_fu_453_p1();
    void thread_p_shl6_cast_fu_411_p1();
    void thread_p_shl7_cast_fu_423_p1();
    void thread_p_shl8_cast_fu_486_p1();
    void thread_p_shl9_cast_fu_498_p1();
    void thread_p_shl_cast_fu_293_p1();
    void thread_tmp_10_fu_786_p2();
    void thread_tmp_172_fu_330_p3();
    void thread_tmp_173_fu_342_p3();
    void thread_tmp_174_fu_297_p3();
    void thread_tmp_175_fu_309_p2();
    void thread_tmp_176_fu_403_p3();
    void thread_tmp_177_fu_415_p3();
    void thread_tmp_178_fu_427_p2();
    void thread_tmp_179_fu_433_p3();
    void thread_tmp_180_fu_445_p3();
    void thread_tmp_181_fu_457_p2();
    void thread_tmp_182_fu_325_p2();
    void thread_tmp_183_fu_354_p2();
    void thread_tmp_184_fu_651_p3();
    void thread_tmp_185_fu_663_p3();
    void thread_tmp_186_fu_675_p2();
    void thread_tmp_187_fu_473_p2();
    void thread_tmp_188_fu_478_p3();
    void thread_tmp_189_fu_490_p3();
    void thread_tmp_190_fu_502_p2();
    void thread_tmp_191_fu_370_p2();
    void thread_tmp_192_fu_691_p2();
    void thread_tmp_193_fu_696_p3();
    void thread_tmp_194_fu_708_p3();
    void thread_tmp_195_fu_720_p2();
    void thread_tmp_196_fu_518_p2();
    void thread_tmp_197_fu_736_p2();
    void thread_tmp_198_fu_766_p1();
    void thread_tmp_199_fu_550_p3();
    void thread_tmp_200_fu_562_p3();
    void thread_tmp_201_fu_574_p2();
    void thread_tmp_202_fu_580_p2();
    void thread_tmp_203_fu_585_p3();
    void thread_tmp_204_fu_597_p3();
    void thread_tmp_205_fu_609_p2();
    void thread_tmp_206_fu_615_p2();
    void thread_tmp_207_fu_620_p2();
    void thread_tmp_242_cast_fu_387_p1();
    void thread_tmp_247_cast_fu_523_p1();
    void thread_tmp_248_cast_fu_741_p1();
    void thread_tmp_256_cast_fu_631_p1();
    void thread_tmp_257_cast_fu_635_p1();
    void thread_tmp_6_fu_756_p4();
    void thread_tmp_87_cast_fu_469_p1();
    void thread_tmp_88_cast_fu_366_p1();
    void thread_tmp_89_cast_fu_687_p1();
    void thread_tmp_8_fu_782_p2();
    void thread_tmp_90_cast_fu_514_p1();
    void thread_tmp_91_cast_fu_732_p1();
    void thread_tmp_93_cast_fu_546_p1();
    void thread_tmp_cast_fu_321_p1();
    void thread_tmp_fu_280_p1();
    void thread_tmp_s_fu_285_p3();
    void thread_w_16_fu_375_p2();
    void thread_w_17_fu_625_p2();
    void thread_w_18_fu_791_p2();
    void thread_weight_address0();
    void thread_weight_ce0();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif