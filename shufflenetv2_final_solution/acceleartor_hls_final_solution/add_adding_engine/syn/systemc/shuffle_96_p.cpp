// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "shuffle_96_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic shuffle_96_p::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic shuffle_96_p::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state1 = "1";
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state2 = "10";
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state3 = "100";
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state4 = "1000";
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state5 = "10000";
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state6 = "100000";
const sc_lv<7> shuffle_96_p::ap_ST_fsm_state7 = "1000000";
const sc_lv<32> shuffle_96_p::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> shuffle_96_p::ap_const_lv32_1 = "1";
const sc_lv<1> shuffle_96_p::ap_const_lv1_0 = "0";
const sc_lv<32> shuffle_96_p::ap_const_lv32_2 = "10";
const sc_lv<32> shuffle_96_p::ap_const_lv32_3 = "11";
const sc_lv<32> shuffle_96_p::ap_const_lv32_4 = "100";
const sc_lv<32> shuffle_96_p::ap_const_lv32_5 = "101";
const sc_lv<8> shuffle_96_p::ap_const_lv8_0 = "00000000";
const sc_lv<1> shuffle_96_p::ap_const_lv1_1 = "1";
const sc_lv<3> shuffle_96_p::ap_const_lv3_0 = "000";
const sc_lv<32> shuffle_96_p::ap_const_lv32_6 = "110";
const sc_lv<8> shuffle_96_p::ap_const_lv8_C0 = "11000000";
const sc_lv<8> shuffle_96_p::ap_const_lv8_1 = "1";
const sc_lv<32> shuffle_96_p::ap_const_lv32_7 = "111";
const sc_lv<3> shuffle_96_p::ap_const_lv3_6 = "110";
const sc_lv<3> shuffle_96_p::ap_const_lv3_1 = "1";
const bool shuffle_96_p::ap_const_boolean_1 = true;

shuffle_96_p::shuffle_96_p(sc_module_name name) : sc_module(name), mVcdFile(0) {
    ShuffleNetV2_mux_jbC_x_U345 = new ShuffleNetV2_mux_jbC<1,1,8,8,8,8,8,8,8,8,3,8>("ShuffleNetV2_mux_jbC_x_U345");
    ShuffleNetV2_mux_jbC_x_U345->din1(buffer1_1_96_4x4_p_V_8_q0);
    ShuffleNetV2_mux_jbC_x_U345->din2(buffer1_1_96_4x4_p_V_1_q0);
    ShuffleNetV2_mux_jbC_x_U345->din3(buffer1_1_96_4x4_p_V_2_q0);
    ShuffleNetV2_mux_jbC_x_U345->din4(buffer1_1_96_4x4_p_V_3_q0);
    ShuffleNetV2_mux_jbC_x_U345->din5(buffer1_1_96_4x4_p_V_4_q0);
    ShuffleNetV2_mux_jbC_x_U345->din6(buffer1_1_96_4x4_p_V_5_q0);
    ShuffleNetV2_mux_jbC_x_U345->din7(buffer1_1_96_4x4_p_V_6_q0);
    ShuffleNetV2_mux_jbC_x_U345->din8(buffer1_1_96_4x4_p_V_7_q0);
    ShuffleNetV2_mux_jbC_x_U345->din9(arrayNo_reg_611);
    ShuffleNetV2_mux_jbC_x_U345->dout(tmp_fu_568_p10);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond5_fu_246_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond5_fu_246_p2 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_1_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_1_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_2_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_2_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_3_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_3_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_4_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_4_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_5_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_5_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_6_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_6_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_7_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_7_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_8_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_505_cast_fu_556_p1 );

    SC_METHOD(thread_buffer1_1_96_4x4_p_V_8_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_co_26_fu_252_p2);
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_exitcond4_fu_390_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( h_reg_210 );

    SC_METHOD(thread_exitcond5_fu_246_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_exitcond_fu_507_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( w_reg_221 );

    SC_METHOD(thread_h_22_fu_396_p2);
    sensitive << ( h_reg_210 );

    SC_METHOD(thread_left_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_503_cast_fu_536_p1 );

    SC_METHOD(thread_left_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_output_V_address0);
    sensitive << ( output_V_addr_reg_657 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_output_V_ce0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_output_V_d0);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( storemerge_reg_232 );

    SC_METHOD(thread_output_V_we0);
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_p_shl10_cast_fu_423_p3);
    sensitive << ( tmp_512_fu_419_p1 );

    SC_METHOD(thread_p_shl11_cast_fu_431_p3);
    sensitive << ( tmp_420_fu_414_p2 );

    SC_METHOD(thread_p_shl1_cast_fu_376_p1);
    sensitive << ( tmp_418_fu_368_p3 );

    SC_METHOD(thread_p_shl2_cast_fu_310_p1);
    sensitive << ( tmp_413_fu_302_p3 );

    SC_METHOD(thread_p_shl3_cast_fu_322_p1);
    sensitive << ( tmp_414_fu_314_p3 );

    SC_METHOD(thread_p_shl4_cast_fu_266_p1);
    sensitive << ( tmp_s_fu_258_p3 );

    SC_METHOD(thread_p_shl5_cast_fu_278_p1);
    sensitive << ( tmp_410_fu_270_p3 );

    SC_METHOD(thread_p_shl6_cast_fu_485_p3);
    sensitive << ( tmp_514_fu_481_p1 );

    SC_METHOD(thread_p_shl7_cast_fu_493_p3);
    sensitive << ( tmp_424_fu_476_p2 );

    SC_METHOD(thread_p_shl8_cast_fu_454_p3);
    sensitive << ( tmp_513_fu_450_p1 );

    SC_METHOD(thread_p_shl9_cast_fu_462_p3);
    sensitive << ( tmp_422_fu_445_p2 );

    SC_METHOD(thread_p_shl_cast_fu_364_p1);
    sensitive << ( tmp_417_fu_356_p3 );

    SC_METHOD(thread_tmp_225_cast1_fu_519_p1);
    sensitive << ( w_reg_221 );

    SC_METHOD(thread_tmp_225_cast2_fu_523_p1);
    sensitive << ( w_reg_221 );

    SC_METHOD(thread_tmp_225_cast_fu_527_p1);
    sensitive << ( w_reg_221 );

    SC_METHOD(thread_tmp_410_fu_270_p3);
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_tmp_411_fu_282_p2);
    sensitive << ( p_shl4_cast_fu_266_p1 );
    sensitive << ( p_shl5_cast_fu_278_p1 );

    SC_METHOD(thread_tmp_412_fu_292_p4);
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_tmp_413_fu_302_p3);
    sensitive << ( tmp_412_fu_292_p4 );

    SC_METHOD(thread_tmp_414_fu_314_p3);
    sensitive << ( tmp_412_fu_292_p4 );

    SC_METHOD(thread_tmp_415_fu_326_p2);
    sensitive << ( p_shl2_cast_fu_310_p1 );
    sensitive << ( p_shl3_cast_fu_322_p1 );

    SC_METHOD(thread_tmp_416_fu_346_p4);
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_tmp_417_fu_356_p3);
    sensitive << ( tmp_416_fu_346_p4 );

    SC_METHOD(thread_tmp_418_fu_368_p3);
    sensitive << ( tmp_416_fu_346_p4 );

    SC_METHOD(thread_tmp_419_fu_380_p2);
    sensitive << ( p_shl_cast_fu_364_p1 );
    sensitive << ( p_shl1_cast_fu_376_p1 );

    SC_METHOD(thread_tmp_420_fu_414_p2);
    sensitive << ( tmp_485_cast_reg_606 );
    sensitive << ( tmp_cast_fu_410_p1 );

    SC_METHOD(thread_tmp_421_fu_439_p2);
    sensitive << ( p_shl10_cast_fu_423_p3 );
    sensitive << ( p_shl11_cast_fu_431_p3 );

    SC_METHOD(thread_tmp_422_fu_445_p2);
    sensitive << ( tmp_480_cast_reg_601 );
    sensitive << ( tmp_cast7_fu_406_p1 );

    SC_METHOD(thread_tmp_423_fu_470_p2);
    sensitive << ( p_shl8_cast_fu_454_p3 );
    sensitive << ( p_shl9_cast_fu_462_p3 );

    SC_METHOD(thread_tmp_424_fu_476_p2);
    sensitive << ( tmp_490_cast_reg_616 );
    sensitive << ( tmp_cast6_fu_402_p1 );

    SC_METHOD(thread_tmp_425_fu_501_p2);
    sensitive << ( p_shl6_cast_fu_485_p3 );
    sensitive << ( p_shl7_cast_fu_493_p3 );

    SC_METHOD(thread_tmp_426_fu_531_p2);
    sensitive << ( tmp_421_reg_629 );
    sensitive << ( tmp_225_cast_fu_527_p1 );

    SC_METHOD(thread_tmp_427_fu_541_p2);
    sensitive << ( tmp_423_reg_634 );
    sensitive << ( tmp_225_cast2_fu_523_p1 );

    SC_METHOD(thread_tmp_428_fu_551_p2);
    sensitive << ( tmp_425_reg_639 );
    sensitive << ( tmp_225_cast1_fu_519_p1 );

    SC_METHOD(thread_tmp_480_cast_fu_288_p1);
    sensitive << ( tmp_411_fu_282_p2 );

    SC_METHOD(thread_tmp_485_cast_fu_332_p1);
    sensitive << ( tmp_415_fu_326_p2 );

    SC_METHOD(thread_tmp_490_cast_fu_386_p1);
    sensitive << ( tmp_419_fu_380_p2 );

    SC_METHOD(thread_tmp_503_cast_fu_536_p1);
    sensitive << ( tmp_426_fu_531_p2 );

    SC_METHOD(thread_tmp_504_cast_fu_546_p1);
    sensitive << ( tmp_427_fu_541_p2 );

    SC_METHOD(thread_tmp_505_cast_fu_556_p1);
    sensitive << ( tmp_428_fu_551_p2 );

    SC_METHOD(thread_tmp_511_fu_242_p1);
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_tmp_512_fu_419_p1);
    sensitive << ( tmp_420_fu_414_p2 );

    SC_METHOD(thread_tmp_513_fu_450_p1);
    sensitive << ( tmp_422_fu_445_p2 );

    SC_METHOD(thread_tmp_514_fu_481_p1);
    sensitive << ( tmp_424_fu_476_p2 );

    SC_METHOD(thread_tmp_cast6_fu_402_p1);
    sensitive << ( h_reg_210 );

    SC_METHOD(thread_tmp_cast7_fu_406_p1);
    sensitive << ( h_reg_210 );

    SC_METHOD(thread_tmp_cast_fu_410_p1);
    sensitive << ( h_reg_210 );

    SC_METHOD(thread_tmp_s_fu_258_p3);
    sensitive << ( co_reg_199 );

    SC_METHOD(thread_w_26_fu_513_p2);
    sensitive << ( w_reg_221 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_511_reg_589 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond5_fu_246_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond4_fu_390_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond_fu_507_p2 );

    ap_CS_fsm = "0000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "shuffle_96_p_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, left_V_address0, "(port)left_V_address0");
    sc_trace(mVcdFile, left_V_ce0, "(port)left_V_ce0");
    sc_trace(mVcdFile, left_V_q0, "(port)left_V_q0");
    sc_trace(mVcdFile, output_V_address0, "(port)output_V_address0");
    sc_trace(mVcdFile, output_V_ce0, "(port)output_V_ce0");
    sc_trace(mVcdFile, output_V_we0, "(port)output_V_we0");
    sc_trace(mVcdFile, output_V_d0, "(port)output_V_d0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_8_address0, "(port)buffer1_1_96_4x4_p_V_8_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_8_ce0, "(port)buffer1_1_96_4x4_p_V_8_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_8_q0, "(port)buffer1_1_96_4x4_p_V_8_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_1_address0, "(port)buffer1_1_96_4x4_p_V_1_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_1_ce0, "(port)buffer1_1_96_4x4_p_V_1_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_1_q0, "(port)buffer1_1_96_4x4_p_V_1_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_2_address0, "(port)buffer1_1_96_4x4_p_V_2_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_2_ce0, "(port)buffer1_1_96_4x4_p_V_2_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_2_q0, "(port)buffer1_1_96_4x4_p_V_2_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_3_address0, "(port)buffer1_1_96_4x4_p_V_3_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_3_ce0, "(port)buffer1_1_96_4x4_p_V_3_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_3_q0, "(port)buffer1_1_96_4x4_p_V_3_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_4_address0, "(port)buffer1_1_96_4x4_p_V_4_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_4_ce0, "(port)buffer1_1_96_4x4_p_V_4_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_4_q0, "(port)buffer1_1_96_4x4_p_V_4_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_5_address0, "(port)buffer1_1_96_4x4_p_V_5_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_5_ce0, "(port)buffer1_1_96_4x4_p_V_5_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_5_q0, "(port)buffer1_1_96_4x4_p_V_5_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_6_address0, "(port)buffer1_1_96_4x4_p_V_6_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_6_ce0, "(port)buffer1_1_96_4x4_p_V_6_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_6_q0, "(port)buffer1_1_96_4x4_p_V_6_q0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_7_address0, "(port)buffer1_1_96_4x4_p_V_7_address0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_7_ce0, "(port)buffer1_1_96_4x4_p_V_7_ce0");
    sc_trace(mVcdFile, buffer1_1_96_4x4_p_V_7_q0, "(port)buffer1_1_96_4x4_p_V_7_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_511_fu_242_p1, "tmp_511_fu_242_p1");
    sc_trace(mVcdFile, tmp_511_reg_589, "tmp_511_reg_589");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, co_26_fu_252_p2, "co_26_fu_252_p2");
    sc_trace(mVcdFile, co_26_reg_596, "co_26_reg_596");
    sc_trace(mVcdFile, tmp_480_cast_fu_288_p1, "tmp_480_cast_fu_288_p1");
    sc_trace(mVcdFile, tmp_480_cast_reg_601, "tmp_480_cast_reg_601");
    sc_trace(mVcdFile, exitcond5_fu_246_p2, "exitcond5_fu_246_p2");
    sc_trace(mVcdFile, tmp_485_cast_fu_332_p1, "tmp_485_cast_fu_332_p1");
    sc_trace(mVcdFile, tmp_485_cast_reg_606, "tmp_485_cast_reg_606");
    sc_trace(mVcdFile, arrayNo_reg_611, "arrayNo_reg_611");
    sc_trace(mVcdFile, tmp_490_cast_fu_386_p1, "tmp_490_cast_fu_386_p1");
    sc_trace(mVcdFile, tmp_490_cast_reg_616, "tmp_490_cast_reg_616");
    sc_trace(mVcdFile, h_22_fu_396_p2, "h_22_fu_396_p2");
    sc_trace(mVcdFile, h_22_reg_624, "h_22_reg_624");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_421_fu_439_p2, "tmp_421_fu_439_p2");
    sc_trace(mVcdFile, tmp_421_reg_629, "tmp_421_reg_629");
    sc_trace(mVcdFile, exitcond4_fu_390_p2, "exitcond4_fu_390_p2");
    sc_trace(mVcdFile, tmp_423_fu_470_p2, "tmp_423_fu_470_p2");
    sc_trace(mVcdFile, tmp_423_reg_634, "tmp_423_reg_634");
    sc_trace(mVcdFile, tmp_425_fu_501_p2, "tmp_425_fu_501_p2");
    sc_trace(mVcdFile, tmp_425_reg_639, "tmp_425_reg_639");
    sc_trace(mVcdFile, w_26_fu_513_p2, "w_26_fu_513_p2");
    sc_trace(mVcdFile, w_26_reg_647, "w_26_reg_647");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, exitcond_fu_507_p2, "exitcond_fu_507_p2");
    sc_trace(mVcdFile, output_V_addr_reg_657, "output_V_addr_reg_657");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_fu_568_p10, "tmp_fu_568_p10");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, co_reg_199, "co_reg_199");
    sc_trace(mVcdFile, h_reg_210, "h_reg_210");
    sc_trace(mVcdFile, w_reg_221, "w_reg_221");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, storemerge_reg_232, "storemerge_reg_232");
    sc_trace(mVcdFile, tmp_503_cast_fu_536_p1, "tmp_503_cast_fu_536_p1");
    sc_trace(mVcdFile, tmp_504_cast_fu_546_p1, "tmp_504_cast_fu_546_p1");
    sc_trace(mVcdFile, tmp_505_cast_fu_556_p1, "tmp_505_cast_fu_556_p1");
    sc_trace(mVcdFile, tmp_s_fu_258_p3, "tmp_s_fu_258_p3");
    sc_trace(mVcdFile, tmp_410_fu_270_p3, "tmp_410_fu_270_p3");
    sc_trace(mVcdFile, p_shl4_cast_fu_266_p1, "p_shl4_cast_fu_266_p1");
    sc_trace(mVcdFile, p_shl5_cast_fu_278_p1, "p_shl5_cast_fu_278_p1");
    sc_trace(mVcdFile, tmp_411_fu_282_p2, "tmp_411_fu_282_p2");
    sc_trace(mVcdFile, tmp_412_fu_292_p4, "tmp_412_fu_292_p4");
    sc_trace(mVcdFile, tmp_413_fu_302_p3, "tmp_413_fu_302_p3");
    sc_trace(mVcdFile, tmp_414_fu_314_p3, "tmp_414_fu_314_p3");
    sc_trace(mVcdFile, p_shl2_cast_fu_310_p1, "p_shl2_cast_fu_310_p1");
    sc_trace(mVcdFile, p_shl3_cast_fu_322_p1, "p_shl3_cast_fu_322_p1");
    sc_trace(mVcdFile, tmp_415_fu_326_p2, "tmp_415_fu_326_p2");
    sc_trace(mVcdFile, tmp_416_fu_346_p4, "tmp_416_fu_346_p4");
    sc_trace(mVcdFile, tmp_417_fu_356_p3, "tmp_417_fu_356_p3");
    sc_trace(mVcdFile, tmp_418_fu_368_p3, "tmp_418_fu_368_p3");
    sc_trace(mVcdFile, p_shl_cast_fu_364_p1, "p_shl_cast_fu_364_p1");
    sc_trace(mVcdFile, p_shl1_cast_fu_376_p1, "p_shl1_cast_fu_376_p1");
    sc_trace(mVcdFile, tmp_419_fu_380_p2, "tmp_419_fu_380_p2");
    sc_trace(mVcdFile, tmp_cast_fu_410_p1, "tmp_cast_fu_410_p1");
    sc_trace(mVcdFile, tmp_420_fu_414_p2, "tmp_420_fu_414_p2");
    sc_trace(mVcdFile, tmp_512_fu_419_p1, "tmp_512_fu_419_p1");
    sc_trace(mVcdFile, p_shl10_cast_fu_423_p3, "p_shl10_cast_fu_423_p3");
    sc_trace(mVcdFile, p_shl11_cast_fu_431_p3, "p_shl11_cast_fu_431_p3");
    sc_trace(mVcdFile, tmp_cast7_fu_406_p1, "tmp_cast7_fu_406_p1");
    sc_trace(mVcdFile, tmp_422_fu_445_p2, "tmp_422_fu_445_p2");
    sc_trace(mVcdFile, tmp_513_fu_450_p1, "tmp_513_fu_450_p1");
    sc_trace(mVcdFile, p_shl8_cast_fu_454_p3, "p_shl8_cast_fu_454_p3");
    sc_trace(mVcdFile, p_shl9_cast_fu_462_p3, "p_shl9_cast_fu_462_p3");
    sc_trace(mVcdFile, tmp_cast6_fu_402_p1, "tmp_cast6_fu_402_p1");
    sc_trace(mVcdFile, tmp_424_fu_476_p2, "tmp_424_fu_476_p2");
    sc_trace(mVcdFile, tmp_514_fu_481_p1, "tmp_514_fu_481_p1");
    sc_trace(mVcdFile, p_shl6_cast_fu_485_p3, "p_shl6_cast_fu_485_p3");
    sc_trace(mVcdFile, p_shl7_cast_fu_493_p3, "p_shl7_cast_fu_493_p3");
    sc_trace(mVcdFile, tmp_225_cast_fu_527_p1, "tmp_225_cast_fu_527_p1");
    sc_trace(mVcdFile, tmp_426_fu_531_p2, "tmp_426_fu_531_p2");
    sc_trace(mVcdFile, tmp_225_cast2_fu_523_p1, "tmp_225_cast2_fu_523_p1");
    sc_trace(mVcdFile, tmp_427_fu_541_p2, "tmp_427_fu_541_p2");
    sc_trace(mVcdFile, tmp_225_cast1_fu_519_p1, "tmp_225_cast1_fu_519_p1");
    sc_trace(mVcdFile, tmp_428_fu_551_p2, "tmp_428_fu_551_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

shuffle_96_p::~shuffle_96_p() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete ShuffleNetV2_mux_jbC_x_U345;
}

void shuffle_96_p::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond4_fu_390_p2.read(), ap_const_lv1_1))) {
        co_reg_199 = co_26_reg_596.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        co_reg_199 = ap_const_lv8_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_507_p2.read(), ap_const_lv1_1))) {
        h_reg_210 = h_22_reg_624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(exitcond5_fu_246_p2.read(), ap_const_lv1_0))) {
        h_reg_210 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        storemerge_reg_232 = tmp_fu_568_p10.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        storemerge_reg_232 = left_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_390_p2.read()))) {
        w_reg_221 = ap_const_lv3_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        w_reg_221 = w_26_reg_647.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond5_fu_246_p2.read(), ap_const_lv1_0))) {
        arrayNo_reg_611 = co_reg_199.read().range(3, 1);
        tmp_480_cast_reg_601 = tmp_480_cast_fu_288_p1.read();
        tmp_485_cast_reg_606 = tmp_485_cast_fu_332_p1.read();
        tmp_490_cast_reg_616 = tmp_490_cast_fu_386_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        co_26_reg_596 = co_26_fu_252_p2.read();
        tmp_511_reg_589 = tmp_511_fu_242_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        h_22_reg_624 = h_22_fu_396_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_507_p2.read()))) {
        output_V_addr_reg_657 =  (sc_lv<13>) (tmp_504_cast_fu_546_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_390_p2.read()))) {
        tmp_421_reg_629 = tmp_421_fu_439_p2.read();
        tmp_423_reg_634 = tmp_423_fu_470_p2.read();
        tmp_425_reg_639 = tmp_425_fu_501_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        w_26_reg_647 = w_26_fu_513_p2.read();
    }
}

void shuffle_96_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void shuffle_96_p::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void shuffle_96_p::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void shuffle_96_p::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void shuffle_96_p::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void shuffle_96_p::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void shuffle_96_p::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void shuffle_96_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond5_fu_246_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond5_fu_246_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_1_address0() {
    buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_2_address0() {
    buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_3_address0() {
    buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_4_address0() {
    buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_5_address0() {
    buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_6_address0() {
    buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_7_address0() {
    buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_7_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_8_address0() {
    buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<9>) (tmp_505_cast_fu_556_p1.read());
}

void shuffle_96_p::thread_buffer1_1_96_4x4_p_V_8_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_co_26_fu_252_p2() {
    co_26_fu_252_p2 = (!ap_const_lv8_1.is_01() || !co_reg_199.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_1) + sc_biguint<8>(co_reg_199.read()));
}

void shuffle_96_p::thread_exitcond4_fu_390_p2() {
    exitcond4_fu_390_p2 = (!h_reg_210.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_210.read() == ap_const_lv3_6);
}

void shuffle_96_p::thread_exitcond5_fu_246_p2() {
    exitcond5_fu_246_p2 = (!co_reg_199.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_199.read() == ap_const_lv8_C0);
}

void shuffle_96_p::thread_exitcond_fu_507_p2() {
    exitcond_fu_507_p2 = (!w_reg_221.read().is_01() || !ap_const_lv3_6.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_221.read() == ap_const_lv3_6);
}

void shuffle_96_p::thread_h_22_fu_396_p2() {
    h_22_fu_396_p2 = (!h_reg_210.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h_reg_210.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void shuffle_96_p::thread_left_V_address0() {
    left_V_address0 =  (sc_lv<12>) (tmp_503_cast_fu_536_p1.read());
}

void shuffle_96_p::thread_left_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        left_V_ce0 = ap_const_logic_1;
    } else {
        left_V_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_output_V_address0() {
    output_V_address0 = output_V_addr_reg_657.read();
}

void shuffle_96_p::thread_output_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        output_V_ce0 = ap_const_logic_1;
    } else {
        output_V_ce0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_output_V_d0() {
    output_V_d0 = storemerge_reg_232.read();
}

void shuffle_96_p::thread_output_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        output_V_we0 = ap_const_logic_1;
    } else {
        output_V_we0 = ap_const_logic_0;
    }
}

void shuffle_96_p::thread_p_shl10_cast_fu_423_p3() {
    p_shl10_cast_fu_423_p3 = esl_concat<10,3>(tmp_512_fu_419_p1.read(), ap_const_lv3_0);
}

void shuffle_96_p::thread_p_shl11_cast_fu_431_p3() {
    p_shl11_cast_fu_431_p3 = esl_concat<12,1>(tmp_420_fu_414_p2.read(), ap_const_lv1_0);
}

void shuffle_96_p::thread_p_shl1_cast_fu_376_p1() {
    p_shl1_cast_fu_376_p1 = esl_zext<8,5>(tmp_418_fu_368_p3.read());
}

void shuffle_96_p::thread_p_shl2_cast_fu_310_p1() {
    p_shl2_cast_fu_310_p1 = esl_zext<11,10>(tmp_413_fu_302_p3.read());
}

void shuffle_96_p::thread_p_shl3_cast_fu_322_p1() {
    p_shl3_cast_fu_322_p1 = esl_zext<11,8>(tmp_414_fu_314_p3.read());
}

void shuffle_96_p::thread_p_shl4_cast_fu_266_p1() {
    p_shl4_cast_fu_266_p1 = esl_zext<12,11>(tmp_s_fu_258_p3.read());
}

void shuffle_96_p::thread_p_shl5_cast_fu_278_p1() {
    p_shl5_cast_fu_278_p1 = esl_zext<12,9>(tmp_410_fu_270_p3.read());
}

void shuffle_96_p::thread_p_shl6_cast_fu_485_p3() {
    p_shl6_cast_fu_485_p3 = esl_concat<7,3>(tmp_514_fu_481_p1.read(), ap_const_lv3_0);
}

void shuffle_96_p::thread_p_shl7_cast_fu_493_p3() {
    p_shl7_cast_fu_493_p3 = esl_concat<9,1>(tmp_424_fu_476_p2.read(), ap_const_lv1_0);
}

void shuffle_96_p::thread_p_shl8_cast_fu_454_p3() {
    p_shl8_cast_fu_454_p3 = esl_concat<11,3>(tmp_513_fu_450_p1.read(), ap_const_lv3_0);
}

void shuffle_96_p::thread_p_shl9_cast_fu_462_p3() {
    p_shl9_cast_fu_462_p3 = esl_concat<13,1>(tmp_422_fu_445_p2.read(), ap_const_lv1_0);
}

void shuffle_96_p::thread_p_shl_cast_fu_364_p1() {
    p_shl_cast_fu_364_p1 = esl_zext<8,7>(tmp_417_fu_356_p3.read());
}

void shuffle_96_p::thread_tmp_225_cast1_fu_519_p1() {
    tmp_225_cast1_fu_519_p1 = esl_zext<10,3>(w_reg_221.read());
}

void shuffle_96_p::thread_tmp_225_cast2_fu_523_p1() {
    tmp_225_cast2_fu_523_p1 = esl_zext<14,3>(w_reg_221.read());
}

void shuffle_96_p::thread_tmp_225_cast_fu_527_p1() {
    tmp_225_cast_fu_527_p1 = esl_zext<13,3>(w_reg_221.read());
}

void shuffle_96_p::thread_tmp_410_fu_270_p3() {
    tmp_410_fu_270_p3 = esl_concat<8,1>(co_reg_199.read(), ap_const_lv1_0);
}

void shuffle_96_p::thread_tmp_411_fu_282_p2() {
    tmp_411_fu_282_p2 = (!p_shl4_cast_fu_266_p1.read().is_01() || !p_shl5_cast_fu_278_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(p_shl4_cast_fu_266_p1.read()) - sc_biguint<12>(p_shl5_cast_fu_278_p1.read()));
}

void shuffle_96_p::thread_tmp_412_fu_292_p4() {
    tmp_412_fu_292_p4 = co_reg_199.read().range(7, 1);
}

void shuffle_96_p::thread_tmp_413_fu_302_p3() {
    tmp_413_fu_302_p3 = esl_concat<7,3>(tmp_412_fu_292_p4.read(), ap_const_lv3_0);
}

void shuffle_96_p::thread_tmp_414_fu_314_p3() {
    tmp_414_fu_314_p3 = esl_concat<7,1>(tmp_412_fu_292_p4.read(), ap_const_lv1_0);
}

void shuffle_96_p::thread_tmp_415_fu_326_p2() {
    tmp_415_fu_326_p2 = (!p_shl2_cast_fu_310_p1.read().is_01() || !p_shl3_cast_fu_322_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_310_p1.read()) - sc_biguint<11>(p_shl3_cast_fu_322_p1.read()));
}

void shuffle_96_p::thread_tmp_416_fu_346_p4() {
    tmp_416_fu_346_p4 = co_reg_199.read().range(7, 4);
}

void shuffle_96_p::thread_tmp_417_fu_356_p3() {
    tmp_417_fu_356_p3 = esl_concat<4,3>(tmp_416_fu_346_p4.read(), ap_const_lv3_0);
}

void shuffle_96_p::thread_tmp_418_fu_368_p3() {
    tmp_418_fu_368_p3 = esl_concat<4,1>(tmp_416_fu_346_p4.read(), ap_const_lv1_0);
}

void shuffle_96_p::thread_tmp_419_fu_380_p2() {
    tmp_419_fu_380_p2 = (!p_shl_cast_fu_364_p1.read().is_01() || !p_shl1_cast_fu_376_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl_cast_fu_364_p1.read()) - sc_biguint<8>(p_shl1_cast_fu_376_p1.read()));
}

void shuffle_96_p::thread_tmp_420_fu_414_p2() {
    tmp_420_fu_414_p2 = (!tmp_cast_fu_410_p1.read().is_01() || !tmp_485_cast_reg_606.read().is_01())? sc_lv<12>(): (sc_biguint<12>(tmp_cast_fu_410_p1.read()) + sc_bigint<12>(tmp_485_cast_reg_606.read()));
}

void shuffle_96_p::thread_tmp_421_fu_439_p2() {
    tmp_421_fu_439_p2 = (!p_shl10_cast_fu_423_p3.read().is_01() || !p_shl11_cast_fu_431_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl10_cast_fu_423_p3.read()) - sc_biguint<13>(p_shl11_cast_fu_431_p3.read()));
}

void shuffle_96_p::thread_tmp_422_fu_445_p2() {
    tmp_422_fu_445_p2 = (!tmp_cast7_fu_406_p1.read().is_01() || !tmp_480_cast_reg_601.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_cast7_fu_406_p1.read()) + sc_bigint<13>(tmp_480_cast_reg_601.read()));
}

void shuffle_96_p::thread_tmp_423_fu_470_p2() {
    tmp_423_fu_470_p2 = (!p_shl8_cast_fu_454_p3.read().is_01() || !p_shl9_cast_fu_462_p3.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl8_cast_fu_454_p3.read()) - sc_biguint<14>(p_shl9_cast_fu_462_p3.read()));
}

void shuffle_96_p::thread_tmp_424_fu_476_p2() {
    tmp_424_fu_476_p2 = (!tmp_cast6_fu_402_p1.read().is_01() || !tmp_490_cast_reg_616.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_cast6_fu_402_p1.read()) + sc_bigint<9>(tmp_490_cast_reg_616.read()));
}

void shuffle_96_p::thread_tmp_425_fu_501_p2() {
    tmp_425_fu_501_p2 = (!p_shl6_cast_fu_485_p3.read().is_01() || !p_shl7_cast_fu_493_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl6_cast_fu_485_p3.read()) - sc_biguint<10>(p_shl7_cast_fu_493_p3.read()));
}

void shuffle_96_p::thread_tmp_426_fu_531_p2() {
    tmp_426_fu_531_p2 = (!tmp_421_reg_629.read().is_01() || !tmp_225_cast_fu_527_p1.read().is_01())? sc_lv<13>(): (sc_biguint<13>(tmp_421_reg_629.read()) + sc_biguint<13>(tmp_225_cast_fu_527_p1.read()));
}

void shuffle_96_p::thread_tmp_427_fu_541_p2() {
    tmp_427_fu_541_p2 = (!tmp_423_reg_634.read().is_01() || !tmp_225_cast2_fu_523_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_423_reg_634.read()) + sc_biguint<14>(tmp_225_cast2_fu_523_p1.read()));
}

void shuffle_96_p::thread_tmp_428_fu_551_p2() {
    tmp_428_fu_551_p2 = (!tmp_425_reg_639.read().is_01() || !tmp_225_cast1_fu_519_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_425_reg_639.read()) + sc_biguint<10>(tmp_225_cast1_fu_519_p1.read()));
}

void shuffle_96_p::thread_tmp_480_cast_fu_288_p1() {
    tmp_480_cast_fu_288_p1 = esl_sext<13,12>(tmp_411_fu_282_p2.read());
}

void shuffle_96_p::thread_tmp_485_cast_fu_332_p1() {
    tmp_485_cast_fu_332_p1 = esl_sext<12,11>(tmp_415_fu_326_p2.read());
}

void shuffle_96_p::thread_tmp_490_cast_fu_386_p1() {
    tmp_490_cast_fu_386_p1 = esl_sext<9,8>(tmp_419_fu_380_p2.read());
}

void shuffle_96_p::thread_tmp_503_cast_fu_536_p1() {
    tmp_503_cast_fu_536_p1 = esl_zext<64,13>(tmp_426_fu_531_p2.read());
}

void shuffle_96_p::thread_tmp_504_cast_fu_546_p1() {
    tmp_504_cast_fu_546_p1 = esl_zext<64,14>(tmp_427_fu_541_p2.read());
}

void shuffle_96_p::thread_tmp_505_cast_fu_556_p1() {
    tmp_505_cast_fu_556_p1 = esl_zext<64,10>(tmp_428_fu_551_p2.read());
}

void shuffle_96_p::thread_tmp_511_fu_242_p1() {
    tmp_511_fu_242_p1 = co_reg_199.read().range(1-1, 0);
}

void shuffle_96_p::thread_tmp_512_fu_419_p1() {
    tmp_512_fu_419_p1 = tmp_420_fu_414_p2.read().range(10-1, 0);
}

void shuffle_96_p::thread_tmp_513_fu_450_p1() {
    tmp_513_fu_450_p1 = tmp_422_fu_445_p2.read().range(11-1, 0);
}

void shuffle_96_p::thread_tmp_514_fu_481_p1() {
    tmp_514_fu_481_p1 = tmp_424_fu_476_p2.read().range(7-1, 0);
}

void shuffle_96_p::thread_tmp_cast6_fu_402_p1() {
    tmp_cast6_fu_402_p1 = esl_zext<9,3>(h_reg_210.read());
}

void shuffle_96_p::thread_tmp_cast7_fu_406_p1() {
    tmp_cast7_fu_406_p1 = esl_zext<13,3>(h_reg_210.read());
}

void shuffle_96_p::thread_tmp_cast_fu_410_p1() {
    tmp_cast_fu_410_p1 = esl_zext<12,3>(h_reg_210.read());
}

void shuffle_96_p::thread_tmp_s_fu_258_p3() {
    tmp_s_fu_258_p3 = esl_concat<8,3>(co_reg_199.read(), ap_const_lv3_0);
}

void shuffle_96_p::thread_w_26_fu_513_p2() {
    w_26_fu_513_p2 = (!w_reg_221.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w_reg_221.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void shuffle_96_p::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond5_fu_246_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond4_fu_390_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(exitcond_fu_507_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_507_p2.read()) && esl_seteq<1,1,1>(tmp_511_reg_589.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXXXX";
            break;
    }
}

}
