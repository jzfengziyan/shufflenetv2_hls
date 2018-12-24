// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "shuffle_24_r_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic shuffle_24_r_p::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic shuffle_24_r_p::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> shuffle_24_r_p::ap_ST_fsm_state1 = "1";
const sc_lv<5> shuffle_24_r_p::ap_ST_fsm_state2 = "10";
const sc_lv<5> shuffle_24_r_p::ap_ST_fsm_state3 = "100";
const sc_lv<5> shuffle_24_r_p::ap_ST_fsm_state4 = "1000";
const sc_lv<5> shuffle_24_r_p::ap_ST_fsm_state5 = "10000";
const sc_lv<32> shuffle_24_r_p::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> shuffle_24_r_p::ap_const_lv32_1 = "1";
const sc_lv<1> shuffle_24_r_p::ap_const_lv1_0 = "0";
const sc_lv<32> shuffle_24_r_p::ap_const_lv32_2 = "10";
const sc_lv<32> shuffle_24_r_p::ap_const_lv32_3 = "11";
const sc_lv<1> shuffle_24_r_p::ap_const_lv1_1 = "1";
const sc_lv<6> shuffle_24_r_p::ap_const_lv6_0 = "000000";
const sc_lv<5> shuffle_24_r_p::ap_const_lv5_0 = "00000";
const sc_lv<32> shuffle_24_r_p::ap_const_lv32_4 = "100";
const sc_lv<6> shuffle_24_r_p::ap_const_lv6_30 = "110000";
const sc_lv<6> shuffle_24_r_p::ap_const_lv6_1 = "1";
const sc_lv<4> shuffle_24_r_p::ap_const_lv4_0 = "0000";
const sc_lv<32> shuffle_24_r_p::ap_const_lv32_5 = "101";
const sc_lv<5> shuffle_24_r_p::ap_const_lv5_12 = "10010";
const sc_lv<5> shuffle_24_r_p::ap_const_lv5_1 = "1";
const bool shuffle_24_r_p::ap_const_boolean_1 = true;

shuffle_24_r_p::shuffle_24_r_p(sc_module_name name) : sc_module(name), mVcdFile(0) {

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

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond3_fu_112_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond3_fu_112_p2 );

    SC_METHOD(thread_co_19_fu_118_p2);
    sensitive << ( co_reg_75 );

    SC_METHOD(thread_exitcond2_fu_194_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( h_reg_86 );

    SC_METHOD(thread_exitcond3_fu_112_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( co_reg_75 );

    SC_METHOD(thread_exitcond_fu_276_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( w_reg_97 );

    SC_METHOD(thread_h_19_fu_200_p2);
    sensitive << ( h_reg_86 );

    SC_METHOD(thread_output_V_address0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_380_cast_fu_311_p1 );

    SC_METHOD(thread_output_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_V_d0);
    sensitive << ( right_V_q0 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_V_we0);
    sensitive << ( tmp_267_reg_315 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_p_shl1_cast_fu_184_p1);
    sensitive << ( tmp_307_fu_176_p3 );

    SC_METHOD(thread_p_shl2_cast_fu_132_p1);
    sensitive << ( tmp_fu_124_p3 );

    SC_METHOD(thread_p_shl3_cast_fu_144_p1);
    sensitive << ( tmp_s_fu_136_p3 );

    SC_METHOD(thread_p_shl4_cast_fu_250_p3);
    sensitive << ( tmp_311_fu_245_p2 );

    SC_METHOD(thread_p_shl5_cast_fu_266_p1);
    sensitive << ( tmp_269_fu_258_p3 );

    SC_METHOD(thread_p_shl6_cast_fu_219_p3);
    sensitive << ( tmp_309_fu_214_p2 );

    SC_METHOD(thread_p_shl7_cast_fu_235_p1);
    sensitive << ( tmp_268_fu_227_p3 );

    SC_METHOD(thread_p_shl_cast_fu_172_p1);
    sensitive << ( tmp_306_fu_164_p3 );

    SC_METHOD(thread_right_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_379_cast_fu_301_p1 );

    SC_METHOD(thread_right_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_tmp_182_cast8_fu_288_p1);
    sensitive << ( w_reg_97 );

    SC_METHOD(thread_tmp_182_cast_fu_292_p1);
    sensitive << ( w_reg_97 );

    SC_METHOD(thread_tmp_267_fu_108_p1);
    sensitive << ( co_reg_75 );

    SC_METHOD(thread_tmp_268_fu_227_p3);
    sensitive << ( tmp_309_fu_214_p2 );

    SC_METHOD(thread_tmp_269_fu_258_p3);
    sensitive << ( tmp_311_fu_245_p2 );

    SC_METHOD(thread_tmp_304_fu_148_p2);
    sensitive << ( p_shl3_cast_fu_144_p1 );
    sensitive << ( p_shl2_cast_fu_132_p1 );

    SC_METHOD(thread_tmp_305_fu_154_p4);
    sensitive << ( co_reg_75 );

    SC_METHOD(thread_tmp_306_fu_164_p3);
    sensitive << ( tmp_305_fu_154_p4 );

    SC_METHOD(thread_tmp_307_fu_176_p3);
    sensitive << ( tmp_305_fu_154_p4 );

    SC_METHOD(thread_tmp_308_fu_188_p2);
    sensitive << ( p_shl1_cast_fu_184_p1 );
    sensitive << ( p_shl_cast_fu_172_p1 );

    SC_METHOD(thread_tmp_309_fu_214_p2);
    sensitive << ( tmp_308_reg_332 );
    sensitive << ( tmp_cast_fu_210_p1 );

    SC_METHOD(thread_tmp_310_fu_239_p2);
    sensitive << ( p_shl6_cast_fu_219_p3 );
    sensitive << ( p_shl7_cast_fu_235_p1 );

    SC_METHOD(thread_tmp_311_fu_245_p2);
    sensitive << ( tmp_304_reg_327 );
    sensitive << ( tmp_cast9_fu_206_p1 );

    SC_METHOD(thread_tmp_312_fu_270_p2);
    sensitive << ( p_shl4_cast_fu_250_p3 );
    sensitive << ( p_shl5_cast_fu_266_p1 );

    SC_METHOD(thread_tmp_313_fu_296_p2);
    sensitive << ( tmp_310_reg_345 );
    sensitive << ( tmp_182_cast_fu_292_p1 );

    SC_METHOD(thread_tmp_314_fu_306_p2);
    sensitive << ( tmp_312_reg_350 );
    sensitive << ( tmp_182_cast8_fu_288_p1 );

    SC_METHOD(thread_tmp_379_cast_fu_301_p1);
    sensitive << ( tmp_313_fu_296_p2 );

    SC_METHOD(thread_tmp_380_cast_fu_311_p1);
    sensitive << ( tmp_314_reg_368 );

    SC_METHOD(thread_tmp_cast9_fu_206_p1);
    sensitive << ( h_reg_86 );

    SC_METHOD(thread_tmp_cast_fu_210_p1);
    sensitive << ( h_reg_86 );

    SC_METHOD(thread_tmp_fu_124_p3);
    sensitive << ( co_reg_75 );

    SC_METHOD(thread_tmp_s_fu_136_p3);
    sensitive << ( co_reg_75 );

    SC_METHOD(thread_w_19_fu_282_p2);
    sensitive << ( w_reg_97 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond3_fu_112_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond2_fu_194_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond_fu_276_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "shuffle_24_r_p_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, right_V_address0, "(port)right_V_address0");
    sc_trace(mVcdFile, right_V_ce0, "(port)right_V_ce0");
    sc_trace(mVcdFile, right_V_q0, "(port)right_V_q0");
    sc_trace(mVcdFile, output_V_address0, "(port)output_V_address0");
    sc_trace(mVcdFile, output_V_ce0, "(port)output_V_ce0");
    sc_trace(mVcdFile, output_V_we0, "(port)output_V_we0");
    sc_trace(mVcdFile, output_V_d0, "(port)output_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_267_fu_108_p1, "tmp_267_fu_108_p1");
    sc_trace(mVcdFile, tmp_267_reg_315, "tmp_267_reg_315");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, co_19_fu_118_p2, "co_19_fu_118_p2");
    sc_trace(mVcdFile, co_19_reg_322, "co_19_reg_322");
    sc_trace(mVcdFile, tmp_304_fu_148_p2, "tmp_304_fu_148_p2");
    sc_trace(mVcdFile, tmp_304_reg_327, "tmp_304_reg_327");
    sc_trace(mVcdFile, exitcond3_fu_112_p2, "exitcond3_fu_112_p2");
    sc_trace(mVcdFile, tmp_308_fu_188_p2, "tmp_308_fu_188_p2");
    sc_trace(mVcdFile, tmp_308_reg_332, "tmp_308_reg_332");
    sc_trace(mVcdFile, h_19_fu_200_p2, "h_19_fu_200_p2");
    sc_trace(mVcdFile, h_19_reg_340, "h_19_reg_340");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_310_fu_239_p2, "tmp_310_fu_239_p2");
    sc_trace(mVcdFile, tmp_310_reg_345, "tmp_310_reg_345");
    sc_trace(mVcdFile, exitcond2_fu_194_p2, "exitcond2_fu_194_p2");
    sc_trace(mVcdFile, tmp_312_fu_270_p2, "tmp_312_fu_270_p2");
    sc_trace(mVcdFile, tmp_312_reg_350, "tmp_312_reg_350");
    sc_trace(mVcdFile, w_19_fu_282_p2, "w_19_fu_282_p2");
    sc_trace(mVcdFile, w_19_reg_358, "w_19_reg_358");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, exitcond_fu_276_p2, "exitcond_fu_276_p2");
    sc_trace(mVcdFile, tmp_314_fu_306_p2, "tmp_314_fu_306_p2");
    sc_trace(mVcdFile, tmp_314_reg_368, "tmp_314_reg_368");
    sc_trace(mVcdFile, co_reg_75, "co_reg_75");
    sc_trace(mVcdFile, h_reg_86, "h_reg_86");
    sc_trace(mVcdFile, w_reg_97, "w_reg_97");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_379_cast_fu_301_p1, "tmp_379_cast_fu_301_p1");
    sc_trace(mVcdFile, tmp_380_cast_fu_311_p1, "tmp_380_cast_fu_311_p1");
    sc_trace(mVcdFile, tmp_fu_124_p3, "tmp_fu_124_p3");
    sc_trace(mVcdFile, tmp_s_fu_136_p3, "tmp_s_fu_136_p3");
    sc_trace(mVcdFile, p_shl3_cast_fu_144_p1, "p_shl3_cast_fu_144_p1");
    sc_trace(mVcdFile, p_shl2_cast_fu_132_p1, "p_shl2_cast_fu_132_p1");
    sc_trace(mVcdFile, tmp_305_fu_154_p4, "tmp_305_fu_154_p4");
    sc_trace(mVcdFile, tmp_306_fu_164_p3, "tmp_306_fu_164_p3");
    sc_trace(mVcdFile, tmp_307_fu_176_p3, "tmp_307_fu_176_p3");
    sc_trace(mVcdFile, p_shl1_cast_fu_184_p1, "p_shl1_cast_fu_184_p1");
    sc_trace(mVcdFile, p_shl_cast_fu_172_p1, "p_shl_cast_fu_172_p1");
    sc_trace(mVcdFile, tmp_cast_fu_210_p1, "tmp_cast_fu_210_p1");
    sc_trace(mVcdFile, tmp_309_fu_214_p2, "tmp_309_fu_214_p2");
    sc_trace(mVcdFile, tmp_268_fu_227_p3, "tmp_268_fu_227_p3");
    sc_trace(mVcdFile, p_shl6_cast_fu_219_p3, "p_shl6_cast_fu_219_p3");
    sc_trace(mVcdFile, p_shl7_cast_fu_235_p1, "p_shl7_cast_fu_235_p1");
    sc_trace(mVcdFile, tmp_cast9_fu_206_p1, "tmp_cast9_fu_206_p1");
    sc_trace(mVcdFile, tmp_311_fu_245_p2, "tmp_311_fu_245_p2");
    sc_trace(mVcdFile, tmp_269_fu_258_p3, "tmp_269_fu_258_p3");
    sc_trace(mVcdFile, p_shl4_cast_fu_250_p3, "p_shl4_cast_fu_250_p3");
    sc_trace(mVcdFile, p_shl5_cast_fu_266_p1, "p_shl5_cast_fu_266_p1");
    sc_trace(mVcdFile, tmp_182_cast_fu_292_p1, "tmp_182_cast_fu_292_p1");
    sc_trace(mVcdFile, tmp_313_fu_296_p2, "tmp_313_fu_296_p2");
    sc_trace(mVcdFile, tmp_182_cast8_fu_288_p1, "tmp_182_cast8_fu_288_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

shuffle_24_r_p::~shuffle_24_r_p() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void shuffle_24_r_p::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond2_fu_194_p2.read(), ap_const_lv1_1))) {
        co_reg_75 = co_19_reg_322.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        co_reg_75 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_276_p2.read(), ap_const_lv1_1))) {
        h_reg_86 = h_19_reg_340.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(exitcond3_fu_112_p2.read(), ap_const_lv1_0))) {
        h_reg_86 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_194_p2.read()))) {
        w_reg_97 = ap_const_lv5_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        w_reg_97 = w_19_reg_358.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        co_19_reg_322 = co_19_fu_118_p2.read();
        tmp_267_reg_315 = tmp_267_fu_108_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        h_19_reg_340 = h_19_fu_200_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond3_fu_112_p2.read(), ap_const_lv1_0))) {
        tmp_304_reg_327 = tmp_304_fu_148_p2.read();
        tmp_308_reg_332 = tmp_308_fu_188_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond2_fu_194_p2.read()))) {
        tmp_310_reg_345 = tmp_310_fu_239_p2.read();
        tmp_312_reg_350 = tmp_312_fu_270_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_276_p2.read()) && esl_seteq<1,1,1>(tmp_267_reg_315.read(), ap_const_lv1_1))) {
        tmp_314_reg_368 = tmp_314_fu_306_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        w_19_reg_358 = w_19_fu_282_p2.read();
    }
}

void shuffle_24_r_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void shuffle_24_r_p::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void shuffle_24_r_p::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void shuffle_24_r_p::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void shuffle_24_r_p::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void shuffle_24_r_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond3_fu_112_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void shuffle_24_r_p::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void shuffle_24_r_p::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond3_fu_112_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void shuffle_24_r_p::thread_co_19_fu_118_p2() {
    co_19_fu_118_p2 = (!ap_const_lv6_1.is_01() || !co_reg_75.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(co_reg_75.read()));
}

void shuffle_24_r_p::thread_exitcond2_fu_194_p2() {
    exitcond2_fu_194_p2 = (!h_reg_86.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_86.read() == ap_const_lv5_12);
}

void shuffle_24_r_p::thread_exitcond3_fu_112_p2() {
    exitcond3_fu_112_p2 = (!co_reg_75.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_75.read() == ap_const_lv6_30);
}

void shuffle_24_r_p::thread_exitcond_fu_276_p2() {
    exitcond_fu_276_p2 = (!w_reg_97.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_97.read() == ap_const_lv5_12);
}

void shuffle_24_r_p::thread_h_19_fu_200_p2() {
    h_19_fu_200_p2 = (!h_reg_86.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h_reg_86.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void shuffle_24_r_p::thread_output_V_address0() {
    output_V_address0 =  (sc_lv<14>) (tmp_380_cast_fu_311_p1.read());
}

void shuffle_24_r_p::thread_output_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_V_ce0 = ap_const_logic_1;
    } else {
        output_V_ce0 = ap_const_logic_0;
    }
}

void shuffle_24_r_p::thread_output_V_d0() {
    output_V_d0 = right_V_q0.read();
}

void shuffle_24_r_p::thread_output_V_we0() {
    if ((esl_seteq<1,1,1>(tmp_267_reg_315.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        output_V_we0 = ap_const_logic_1;
    } else {
        output_V_we0 = ap_const_logic_0;
    }
}

void shuffle_24_r_p::thread_p_shl1_cast_fu_184_p1() {
    p_shl1_cast_fu_184_p1 = esl_zext<10,6>(tmp_307_fu_176_p3.read());
}

void shuffle_24_r_p::thread_p_shl2_cast_fu_132_p1() {
    p_shl2_cast_fu_132_p1 = esl_zext<11,10>(tmp_fu_124_p3.read());
}

void shuffle_24_r_p::thread_p_shl3_cast_fu_144_p1() {
    p_shl3_cast_fu_144_p1 = esl_zext<11,7>(tmp_s_fu_136_p3.read());
}

void shuffle_24_r_p::thread_p_shl4_cast_fu_250_p3() {
    p_shl4_cast_fu_250_p3 = esl_concat<11,4>(tmp_311_fu_245_p2.read(), ap_const_lv4_0);
}

void shuffle_24_r_p::thread_p_shl5_cast_fu_266_p1() {
    p_shl5_cast_fu_266_p1 = esl_zext<15,12>(tmp_269_fu_258_p3.read());
}

void shuffle_24_r_p::thread_p_shl6_cast_fu_219_p3() {
    p_shl6_cast_fu_219_p3 = esl_concat<10,4>(tmp_309_fu_214_p2.read(), ap_const_lv4_0);
}

void shuffle_24_r_p::thread_p_shl7_cast_fu_235_p1() {
    p_shl7_cast_fu_235_p1 = esl_zext<14,11>(tmp_268_fu_227_p3.read());
}

void shuffle_24_r_p::thread_p_shl_cast_fu_172_p1() {
    p_shl_cast_fu_172_p1 = esl_zext<10,9>(tmp_306_fu_164_p3.read());
}

void shuffle_24_r_p::thread_right_V_address0() {
    right_V_address0 =  (sc_lv<13>) (tmp_379_cast_fu_301_p1.read());
}

void shuffle_24_r_p::thread_right_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        right_V_ce0 = ap_const_logic_1;
    } else {
        right_V_ce0 = ap_const_logic_0;
    }
}

void shuffle_24_r_p::thread_tmp_182_cast8_fu_288_p1() {
    tmp_182_cast8_fu_288_p1 = esl_zext<15,5>(w_reg_97.read());
}

void shuffle_24_r_p::thread_tmp_182_cast_fu_292_p1() {
    tmp_182_cast_fu_292_p1 = esl_zext<14,5>(w_reg_97.read());
}

void shuffle_24_r_p::thread_tmp_267_fu_108_p1() {
    tmp_267_fu_108_p1 = co_reg_75.read().range(1-1, 0);
}

void shuffle_24_r_p::thread_tmp_268_fu_227_p3() {
    tmp_268_fu_227_p3 = esl_concat<10,1>(tmp_309_fu_214_p2.read(), ap_const_lv1_0);
}

void shuffle_24_r_p::thread_tmp_269_fu_258_p3() {
    tmp_269_fu_258_p3 = esl_concat<11,1>(tmp_311_fu_245_p2.read(), ap_const_lv1_0);
}

void shuffle_24_r_p::thread_tmp_304_fu_148_p2() {
    tmp_304_fu_148_p2 = (!p_shl3_cast_fu_144_p1.read().is_01() || !p_shl2_cast_fu_132_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl3_cast_fu_144_p1.read()) + sc_biguint<11>(p_shl2_cast_fu_132_p1.read()));
}

void shuffle_24_r_p::thread_tmp_305_fu_154_p4() {
    tmp_305_fu_154_p4 = co_reg_75.read().range(5, 1);
}

void shuffle_24_r_p::thread_tmp_306_fu_164_p3() {
    tmp_306_fu_164_p3 = esl_concat<5,4>(tmp_305_fu_154_p4.read(), ap_const_lv4_0);
}

void shuffle_24_r_p::thread_tmp_307_fu_176_p3() {
    tmp_307_fu_176_p3 = esl_concat<5,1>(tmp_305_fu_154_p4.read(), ap_const_lv1_0);
}

void shuffle_24_r_p::thread_tmp_308_fu_188_p2() {
    tmp_308_fu_188_p2 = (!p_shl1_cast_fu_184_p1.read().is_01() || !p_shl_cast_fu_172_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl1_cast_fu_184_p1.read()) + sc_biguint<10>(p_shl_cast_fu_172_p1.read()));
}

void shuffle_24_r_p::thread_tmp_309_fu_214_p2() {
    tmp_309_fu_214_p2 = (!tmp_cast_fu_210_p1.read().is_01() || !tmp_308_reg_332.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_cast_fu_210_p1.read()) + sc_biguint<10>(tmp_308_reg_332.read()));
}

void shuffle_24_r_p::thread_tmp_310_fu_239_p2() {
    tmp_310_fu_239_p2 = (!p_shl6_cast_fu_219_p3.read().is_01() || !p_shl7_cast_fu_235_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl6_cast_fu_219_p3.read()) + sc_biguint<14>(p_shl7_cast_fu_235_p1.read()));
}

void shuffle_24_r_p::thread_tmp_311_fu_245_p2() {
    tmp_311_fu_245_p2 = (!tmp_cast9_fu_206_p1.read().is_01() || !tmp_304_reg_327.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_cast9_fu_206_p1.read()) + sc_biguint<11>(tmp_304_reg_327.read()));
}

void shuffle_24_r_p::thread_tmp_312_fu_270_p2() {
    tmp_312_fu_270_p2 = (!p_shl4_cast_fu_250_p3.read().is_01() || !p_shl5_cast_fu_266_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_cast_fu_250_p3.read()) + sc_biguint<15>(p_shl5_cast_fu_266_p1.read()));
}

void shuffle_24_r_p::thread_tmp_313_fu_296_p2() {
    tmp_313_fu_296_p2 = (!tmp_310_reg_345.read().is_01() || !tmp_182_cast_fu_292_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_310_reg_345.read()) + sc_biguint<14>(tmp_182_cast_fu_292_p1.read()));
}

void shuffle_24_r_p::thread_tmp_314_fu_306_p2() {
    tmp_314_fu_306_p2 = (!tmp_312_reg_350.read().is_01() || !tmp_182_cast8_fu_288_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_312_reg_350.read()) + sc_biguint<15>(tmp_182_cast8_fu_288_p1.read()));
}

void shuffle_24_r_p::thread_tmp_379_cast_fu_301_p1() {
    tmp_379_cast_fu_301_p1 = esl_zext<64,14>(tmp_313_fu_296_p2.read());
}

void shuffle_24_r_p::thread_tmp_380_cast_fu_311_p1() {
    tmp_380_cast_fu_311_p1 = esl_zext<64,15>(tmp_314_reg_368.read());
}

void shuffle_24_r_p::thread_tmp_cast9_fu_206_p1() {
    tmp_cast9_fu_206_p1 = esl_zext<11,5>(h_reg_86.read());
}

void shuffle_24_r_p::thread_tmp_cast_fu_210_p1() {
    tmp_cast_fu_210_p1 = esl_zext<10,5>(h_reg_86.read());
}

void shuffle_24_r_p::thread_tmp_fu_124_p3() {
    tmp_fu_124_p3 = esl_concat<6,4>(co_reg_75.read(), ap_const_lv4_0);
}

void shuffle_24_r_p::thread_tmp_s_fu_136_p3() {
    tmp_s_fu_136_p3 = esl_concat<6,1>(co_reg_75.read(), ap_const_lv1_0);
}

void shuffle_24_r_p::thread_w_19_fu_282_p2() {
    w_19_fu_282_p2 = (!w_reg_97.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w_reg_97.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void shuffle_24_r_p::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond3_fu_112_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond2_fu_194_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(exitcond_fu_276_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}
