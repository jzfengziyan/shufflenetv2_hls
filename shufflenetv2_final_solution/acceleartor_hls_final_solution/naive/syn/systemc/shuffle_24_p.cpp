// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "shuffle_24_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic shuffle_24_p::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic shuffle_24_p::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> shuffle_24_p::ap_ST_fsm_state1 = "1";
const sc_lv<5> shuffle_24_p::ap_ST_fsm_state2 = "10";
const sc_lv<5> shuffle_24_p::ap_ST_fsm_state3 = "100";
const sc_lv<5> shuffle_24_p::ap_ST_fsm_state4 = "1000";
const sc_lv<5> shuffle_24_p::ap_ST_fsm_state5 = "10000";
const sc_lv<32> shuffle_24_p::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> shuffle_24_p::ap_const_lv32_1 = "1";
const sc_lv<1> shuffle_24_p::ap_const_lv1_0 = "0";
const sc_lv<32> shuffle_24_p::ap_const_lv32_2 = "10";
const sc_lv<32> shuffle_24_p::ap_const_lv32_3 = "11";
const sc_lv<6> shuffle_24_p::ap_const_lv6_0 = "000000";
const sc_lv<1> shuffle_24_p::ap_const_lv1_1 = "1";
const sc_lv<5> shuffle_24_p::ap_const_lv5_0 = "00000";
const sc_lv<32> shuffle_24_p::ap_const_lv32_4 = "100";
const sc_lv<6> shuffle_24_p::ap_const_lv6_30 = "110000";
const sc_lv<6> shuffle_24_p::ap_const_lv6_1 = "1";
const sc_lv<4> shuffle_24_p::ap_const_lv4_0 = "0000";
const sc_lv<32> shuffle_24_p::ap_const_lv32_5 = "101";
const sc_lv<5> shuffle_24_p::ap_const_lv5_12 = "10010";
const sc_lv<5> shuffle_24_p::ap_const_lv5_1 = "1";
const bool shuffle_24_p::ap_const_boolean_1 = true;

shuffle_24_p::shuffle_24_p(sc_module_name name) : sc_module(name), mVcdFile(0) {

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
    sensitive << ( exitcond5_fu_136_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond5_fu_136_p2 );

    SC_METHOD(thread_buffer1_1_24_16x16_p_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_396_cast_fu_325_p1 );

    SC_METHOD(thread_buffer1_1_24_16x16_p_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_co_20_fu_142_p2);
    sensitive << ( co_reg_87 );

    SC_METHOD(thread_exitcond4_fu_218_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( h_reg_98 );

    SC_METHOD(thread_exitcond5_fu_136_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( co_reg_87 );

    SC_METHOD(thread_exitcond_fu_300_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( w_reg_109 );

    SC_METHOD(thread_h_20_fu_224_p2);
    sensitive << ( h_reg_98 );

    SC_METHOD(thread_left_V_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_396_cast_fu_325_p1 );

    SC_METHOD(thread_left_V_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_output_V_address0);
    sensitive << ( output_V_addr_reg_394 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_V_ce0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_output_V_d0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( storemerge_phi_fu_123_p4 );

    SC_METHOD(thread_output_V_we0);
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_p_shl1_cast_fu_208_p1);
    sensitive << ( tmp_318_fu_200_p3 );

    SC_METHOD(thread_p_shl2_cast_fu_156_p1);
    sensitive << ( tmp_fu_148_p3 );

    SC_METHOD(thread_p_shl3_cast_fu_168_p1);
    sensitive << ( tmp_s_fu_160_p3 );

    SC_METHOD(thread_p_shl4_cast_fu_274_p3);
    sensitive << ( tmp_322_fu_269_p2 );

    SC_METHOD(thread_p_shl5_cast_fu_290_p1);
    sensitive << ( tmp_272_fu_282_p3 );

    SC_METHOD(thread_p_shl6_cast_fu_243_p3);
    sensitive << ( tmp_320_fu_238_p2 );

    SC_METHOD(thread_p_shl7_cast_fu_259_p1);
    sensitive << ( tmp_271_fu_251_p3 );

    SC_METHOD(thread_p_shl_cast_fu_196_p1);
    sensitive << ( tmp_317_fu_188_p3 );

    SC_METHOD(thread_storemerge_phi_fu_123_p4);
    sensitive << ( left_V_q0 );
    sensitive << ( buffer1_1_24_16x16_p_q0 );
    sensitive << ( tmp_270_reg_341 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_183_cast8_fu_312_p1);
    sensitive << ( w_reg_109 );

    SC_METHOD(thread_tmp_183_cast_fu_316_p1);
    sensitive << ( w_reg_109 );

    SC_METHOD(thread_tmp_270_fu_132_p1);
    sensitive << ( co_reg_87 );

    SC_METHOD(thread_tmp_271_fu_251_p3);
    sensitive << ( tmp_320_fu_238_p2 );

    SC_METHOD(thread_tmp_272_fu_282_p3);
    sensitive << ( tmp_322_fu_269_p2 );

    SC_METHOD(thread_tmp_315_fu_172_p2);
    sensitive << ( p_shl3_cast_fu_168_p1 );
    sensitive << ( p_shl2_cast_fu_156_p1 );

    SC_METHOD(thread_tmp_316_fu_178_p4);
    sensitive << ( co_reg_87 );

    SC_METHOD(thread_tmp_317_fu_188_p3);
    sensitive << ( tmp_316_fu_178_p4 );

    SC_METHOD(thread_tmp_318_fu_200_p3);
    sensitive << ( tmp_316_fu_178_p4 );

    SC_METHOD(thread_tmp_319_fu_212_p2);
    sensitive << ( p_shl1_cast_fu_208_p1 );
    sensitive << ( p_shl_cast_fu_196_p1 );

    SC_METHOD(thread_tmp_320_fu_238_p2);
    sensitive << ( tmp_319_reg_358 );
    sensitive << ( tmp_cast_fu_234_p1 );

    SC_METHOD(thread_tmp_321_fu_263_p2);
    sensitive << ( p_shl6_cast_fu_243_p3 );
    sensitive << ( p_shl7_cast_fu_259_p1 );

    SC_METHOD(thread_tmp_322_fu_269_p2);
    sensitive << ( tmp_315_reg_353 );
    sensitive << ( tmp_cast9_fu_230_p1 );

    SC_METHOD(thread_tmp_323_fu_294_p2);
    sensitive << ( p_shl4_cast_fu_274_p3 );
    sensitive << ( p_shl5_cast_fu_290_p1 );

    SC_METHOD(thread_tmp_324_fu_320_p2);
    sensitive << ( tmp_321_reg_371 );
    sensitive << ( tmp_183_cast_fu_316_p1 );

    SC_METHOD(thread_tmp_325_fu_331_p2);
    sensitive << ( tmp_323_reg_376 );
    sensitive << ( tmp_183_cast8_fu_312_p1 );

    SC_METHOD(thread_tmp_396_cast_fu_325_p1);
    sensitive << ( tmp_324_fu_320_p2 );

    SC_METHOD(thread_tmp_397_cast_fu_336_p1);
    sensitive << ( tmp_325_fu_331_p2 );

    SC_METHOD(thread_tmp_cast9_fu_230_p1);
    sensitive << ( h_reg_98 );

    SC_METHOD(thread_tmp_cast_fu_234_p1);
    sensitive << ( h_reg_98 );

    SC_METHOD(thread_tmp_fu_148_p3);
    sensitive << ( co_reg_87 );

    SC_METHOD(thread_tmp_s_fu_160_p3);
    sensitive << ( co_reg_87 );

    SC_METHOD(thread_w_20_fu_306_p2);
    sensitive << ( w_reg_109 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond5_fu_136_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond4_fu_218_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond_fu_300_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "shuffle_24_p_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, buffer1_1_24_16x16_p_address0, "(port)buffer1_1_24_16x16_p_address0");
    sc_trace(mVcdFile, buffer1_1_24_16x16_p_ce0, "(port)buffer1_1_24_16x16_p_ce0");
    sc_trace(mVcdFile, buffer1_1_24_16x16_p_q0, "(port)buffer1_1_24_16x16_p_q0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_270_fu_132_p1, "tmp_270_fu_132_p1");
    sc_trace(mVcdFile, tmp_270_reg_341, "tmp_270_reg_341");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, co_20_fu_142_p2, "co_20_fu_142_p2");
    sc_trace(mVcdFile, co_20_reg_348, "co_20_reg_348");
    sc_trace(mVcdFile, tmp_315_fu_172_p2, "tmp_315_fu_172_p2");
    sc_trace(mVcdFile, tmp_315_reg_353, "tmp_315_reg_353");
    sc_trace(mVcdFile, exitcond5_fu_136_p2, "exitcond5_fu_136_p2");
    sc_trace(mVcdFile, tmp_319_fu_212_p2, "tmp_319_fu_212_p2");
    sc_trace(mVcdFile, tmp_319_reg_358, "tmp_319_reg_358");
    sc_trace(mVcdFile, h_20_fu_224_p2, "h_20_fu_224_p2");
    sc_trace(mVcdFile, h_20_reg_366, "h_20_reg_366");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_321_fu_263_p2, "tmp_321_fu_263_p2");
    sc_trace(mVcdFile, tmp_321_reg_371, "tmp_321_reg_371");
    sc_trace(mVcdFile, exitcond4_fu_218_p2, "exitcond4_fu_218_p2");
    sc_trace(mVcdFile, tmp_323_fu_294_p2, "tmp_323_fu_294_p2");
    sc_trace(mVcdFile, tmp_323_reg_376, "tmp_323_reg_376");
    sc_trace(mVcdFile, w_20_fu_306_p2, "w_20_fu_306_p2");
    sc_trace(mVcdFile, w_20_reg_384, "w_20_reg_384");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, exitcond_fu_300_p2, "exitcond_fu_300_p2");
    sc_trace(mVcdFile, output_V_addr_reg_394, "output_V_addr_reg_394");
    sc_trace(mVcdFile, co_reg_87, "co_reg_87");
    sc_trace(mVcdFile, h_reg_98, "h_reg_98");
    sc_trace(mVcdFile, w_reg_109, "w_reg_109");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, storemerge_phi_fu_123_p4, "storemerge_phi_fu_123_p4");
    sc_trace(mVcdFile, tmp_396_cast_fu_325_p1, "tmp_396_cast_fu_325_p1");
    sc_trace(mVcdFile, tmp_397_cast_fu_336_p1, "tmp_397_cast_fu_336_p1");
    sc_trace(mVcdFile, tmp_fu_148_p3, "tmp_fu_148_p3");
    sc_trace(mVcdFile, tmp_s_fu_160_p3, "tmp_s_fu_160_p3");
    sc_trace(mVcdFile, p_shl3_cast_fu_168_p1, "p_shl3_cast_fu_168_p1");
    sc_trace(mVcdFile, p_shl2_cast_fu_156_p1, "p_shl2_cast_fu_156_p1");
    sc_trace(mVcdFile, tmp_316_fu_178_p4, "tmp_316_fu_178_p4");
    sc_trace(mVcdFile, tmp_317_fu_188_p3, "tmp_317_fu_188_p3");
    sc_trace(mVcdFile, tmp_318_fu_200_p3, "tmp_318_fu_200_p3");
    sc_trace(mVcdFile, p_shl1_cast_fu_208_p1, "p_shl1_cast_fu_208_p1");
    sc_trace(mVcdFile, p_shl_cast_fu_196_p1, "p_shl_cast_fu_196_p1");
    sc_trace(mVcdFile, tmp_cast_fu_234_p1, "tmp_cast_fu_234_p1");
    sc_trace(mVcdFile, tmp_320_fu_238_p2, "tmp_320_fu_238_p2");
    sc_trace(mVcdFile, tmp_271_fu_251_p3, "tmp_271_fu_251_p3");
    sc_trace(mVcdFile, p_shl6_cast_fu_243_p3, "p_shl6_cast_fu_243_p3");
    sc_trace(mVcdFile, p_shl7_cast_fu_259_p1, "p_shl7_cast_fu_259_p1");
    sc_trace(mVcdFile, tmp_cast9_fu_230_p1, "tmp_cast9_fu_230_p1");
    sc_trace(mVcdFile, tmp_322_fu_269_p2, "tmp_322_fu_269_p2");
    sc_trace(mVcdFile, tmp_272_fu_282_p3, "tmp_272_fu_282_p3");
    sc_trace(mVcdFile, p_shl4_cast_fu_274_p3, "p_shl4_cast_fu_274_p3");
    sc_trace(mVcdFile, p_shl5_cast_fu_290_p1, "p_shl5_cast_fu_290_p1");
    sc_trace(mVcdFile, tmp_183_cast_fu_316_p1, "tmp_183_cast_fu_316_p1");
    sc_trace(mVcdFile, tmp_324_fu_320_p2, "tmp_324_fu_320_p2");
    sc_trace(mVcdFile, tmp_183_cast8_fu_312_p1, "tmp_183_cast8_fu_312_p1");
    sc_trace(mVcdFile, tmp_325_fu_331_p2, "tmp_325_fu_331_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

shuffle_24_p::~shuffle_24_p() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void shuffle_24_p::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond4_fu_218_p2.read(), ap_const_lv1_1))) {
        co_reg_87 = co_20_reg_348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        co_reg_87 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_300_p2.read(), ap_const_lv1_1))) {
        h_reg_98 = h_20_reg_366.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(exitcond5_fu_136_p2.read(), ap_const_lv1_0))) {
        h_reg_98 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_218_p2.read()))) {
        w_reg_109 = ap_const_lv5_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        w_reg_109 = w_20_reg_384.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        co_20_reg_348 = co_20_fu_142_p2.read();
        tmp_270_reg_341 = tmp_270_fu_132_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        h_20_reg_366 = h_20_fu_224_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_300_p2.read()))) {
        output_V_addr_reg_394 =  (sc_lv<14>) (tmp_397_cast_fu_336_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond5_fu_136_p2.read(), ap_const_lv1_0))) {
        tmp_315_reg_353 = tmp_315_fu_172_p2.read();
        tmp_319_reg_358 = tmp_319_fu_212_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_fu_218_p2.read()))) {
        tmp_321_reg_371 = tmp_321_fu_263_p2.read();
        tmp_323_reg_376 = tmp_323_fu_294_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        w_20_reg_384 = w_20_fu_306_p2.read();
    }
}

void shuffle_24_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void shuffle_24_p::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void shuffle_24_p::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void shuffle_24_p::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void shuffle_24_p::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void shuffle_24_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond5_fu_136_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond5_fu_136_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_buffer1_1_24_16x16_p_address0() {
    buffer1_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_396_cast_fu_325_p1.read());
}

void shuffle_24_p::thread_buffer1_1_24_16x16_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        buffer1_1_24_16x16_p_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_24_16x16_p_ce0 = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_co_20_fu_142_p2() {
    co_20_fu_142_p2 = (!ap_const_lv6_1.is_01() || !co_reg_87.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(co_reg_87.read()));
}

void shuffle_24_p::thread_exitcond4_fu_218_p2() {
    exitcond4_fu_218_p2 = (!h_reg_98.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_98.read() == ap_const_lv5_12);
}

void shuffle_24_p::thread_exitcond5_fu_136_p2() {
    exitcond5_fu_136_p2 = (!co_reg_87.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_87.read() == ap_const_lv6_30);
}

void shuffle_24_p::thread_exitcond_fu_300_p2() {
    exitcond_fu_300_p2 = (!w_reg_109.read().is_01() || !ap_const_lv5_12.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_109.read() == ap_const_lv5_12);
}

void shuffle_24_p::thread_h_20_fu_224_p2() {
    h_20_fu_224_p2 = (!h_reg_98.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h_reg_98.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void shuffle_24_p::thread_left_V_address0() {
    left_V_address0 =  (sc_lv<13>) (tmp_396_cast_fu_325_p1.read());
}

void shuffle_24_p::thread_left_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        left_V_ce0 = ap_const_logic_1;
    } else {
        left_V_ce0 = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_output_V_address0() {
    output_V_address0 = output_V_addr_reg_394.read();
}

void shuffle_24_p::thread_output_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_V_ce0 = ap_const_logic_1;
    } else {
        output_V_ce0 = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_output_V_d0() {
    output_V_d0 = storemerge_phi_fu_123_p4.read();
}

void shuffle_24_p::thread_output_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        output_V_we0 = ap_const_logic_1;
    } else {
        output_V_we0 = ap_const_logic_0;
    }
}

void shuffle_24_p::thread_p_shl1_cast_fu_208_p1() {
    p_shl1_cast_fu_208_p1 = esl_zext<10,6>(tmp_318_fu_200_p3.read());
}

void shuffle_24_p::thread_p_shl2_cast_fu_156_p1() {
    p_shl2_cast_fu_156_p1 = esl_zext<11,10>(tmp_fu_148_p3.read());
}

void shuffle_24_p::thread_p_shl3_cast_fu_168_p1() {
    p_shl3_cast_fu_168_p1 = esl_zext<11,7>(tmp_s_fu_160_p3.read());
}

void shuffle_24_p::thread_p_shl4_cast_fu_274_p3() {
    p_shl4_cast_fu_274_p3 = esl_concat<11,4>(tmp_322_fu_269_p2.read(), ap_const_lv4_0);
}

void shuffle_24_p::thread_p_shl5_cast_fu_290_p1() {
    p_shl5_cast_fu_290_p1 = esl_zext<15,12>(tmp_272_fu_282_p3.read());
}

void shuffle_24_p::thread_p_shl6_cast_fu_243_p3() {
    p_shl6_cast_fu_243_p3 = esl_concat<10,4>(tmp_320_fu_238_p2.read(), ap_const_lv4_0);
}

void shuffle_24_p::thread_p_shl7_cast_fu_259_p1() {
    p_shl7_cast_fu_259_p1 = esl_zext<14,11>(tmp_271_fu_251_p3.read());
}

void shuffle_24_p::thread_p_shl_cast_fu_196_p1() {
    p_shl_cast_fu_196_p1 = esl_zext<10,9>(tmp_317_fu_188_p3.read());
}

void shuffle_24_p::thread_storemerge_phi_fu_123_p4() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        if (esl_seteq<1,1,1>(tmp_270_reg_341.read(), ap_const_lv1_1)) {
            storemerge_phi_fu_123_p4 = buffer1_1_24_16x16_p_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_270_reg_341.read(), ap_const_lv1_0)) {
            storemerge_phi_fu_123_p4 = left_V_q0.read();
        } else {
            storemerge_phi_fu_123_p4 = "XXXXXXXX";
        }
    } else {
        storemerge_phi_fu_123_p4 = "XXXXXXXX";
    }
}

void shuffle_24_p::thread_tmp_183_cast8_fu_312_p1() {
    tmp_183_cast8_fu_312_p1 = esl_zext<15,5>(w_reg_109.read());
}

void shuffle_24_p::thread_tmp_183_cast_fu_316_p1() {
    tmp_183_cast_fu_316_p1 = esl_zext<14,5>(w_reg_109.read());
}

void shuffle_24_p::thread_tmp_270_fu_132_p1() {
    tmp_270_fu_132_p1 = co_reg_87.read().range(1-1, 0);
}

void shuffle_24_p::thread_tmp_271_fu_251_p3() {
    tmp_271_fu_251_p3 = esl_concat<10,1>(tmp_320_fu_238_p2.read(), ap_const_lv1_0);
}

void shuffle_24_p::thread_tmp_272_fu_282_p3() {
    tmp_272_fu_282_p3 = esl_concat<11,1>(tmp_322_fu_269_p2.read(), ap_const_lv1_0);
}

void shuffle_24_p::thread_tmp_315_fu_172_p2() {
    tmp_315_fu_172_p2 = (!p_shl3_cast_fu_168_p1.read().is_01() || !p_shl2_cast_fu_156_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl3_cast_fu_168_p1.read()) + sc_biguint<11>(p_shl2_cast_fu_156_p1.read()));
}

void shuffle_24_p::thread_tmp_316_fu_178_p4() {
    tmp_316_fu_178_p4 = co_reg_87.read().range(5, 1);
}

void shuffle_24_p::thread_tmp_317_fu_188_p3() {
    tmp_317_fu_188_p3 = esl_concat<5,4>(tmp_316_fu_178_p4.read(), ap_const_lv4_0);
}

void shuffle_24_p::thread_tmp_318_fu_200_p3() {
    tmp_318_fu_200_p3 = esl_concat<5,1>(tmp_316_fu_178_p4.read(), ap_const_lv1_0);
}

void shuffle_24_p::thread_tmp_319_fu_212_p2() {
    tmp_319_fu_212_p2 = (!p_shl1_cast_fu_208_p1.read().is_01() || !p_shl_cast_fu_196_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl1_cast_fu_208_p1.read()) + sc_biguint<10>(p_shl_cast_fu_196_p1.read()));
}

void shuffle_24_p::thread_tmp_320_fu_238_p2() {
    tmp_320_fu_238_p2 = (!tmp_cast_fu_234_p1.read().is_01() || !tmp_319_reg_358.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_cast_fu_234_p1.read()) + sc_biguint<10>(tmp_319_reg_358.read()));
}

void shuffle_24_p::thread_tmp_321_fu_263_p2() {
    tmp_321_fu_263_p2 = (!p_shl6_cast_fu_243_p3.read().is_01() || !p_shl7_cast_fu_259_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(p_shl6_cast_fu_243_p3.read()) + sc_biguint<14>(p_shl7_cast_fu_259_p1.read()));
}

void shuffle_24_p::thread_tmp_322_fu_269_p2() {
    tmp_322_fu_269_p2 = (!tmp_cast9_fu_230_p1.read().is_01() || !tmp_315_reg_353.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_cast9_fu_230_p1.read()) + sc_biguint<11>(tmp_315_reg_353.read()));
}

void shuffle_24_p::thread_tmp_323_fu_294_p2() {
    tmp_323_fu_294_p2 = (!p_shl4_cast_fu_274_p3.read().is_01() || !p_shl5_cast_fu_290_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_cast_fu_274_p3.read()) + sc_biguint<15>(p_shl5_cast_fu_290_p1.read()));
}

void shuffle_24_p::thread_tmp_324_fu_320_p2() {
    tmp_324_fu_320_p2 = (!tmp_321_reg_371.read().is_01() || !tmp_183_cast_fu_316_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(tmp_321_reg_371.read()) + sc_biguint<14>(tmp_183_cast_fu_316_p1.read()));
}

void shuffle_24_p::thread_tmp_325_fu_331_p2() {
    tmp_325_fu_331_p2 = (!tmp_323_reg_376.read().is_01() || !tmp_183_cast8_fu_312_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(tmp_323_reg_376.read()) + sc_biguint<15>(tmp_183_cast8_fu_312_p1.read()));
}

void shuffle_24_p::thread_tmp_396_cast_fu_325_p1() {
    tmp_396_cast_fu_325_p1 = esl_zext<64,14>(tmp_324_fu_320_p2.read());
}

void shuffle_24_p::thread_tmp_397_cast_fu_336_p1() {
    tmp_397_cast_fu_336_p1 = esl_zext<64,15>(tmp_325_fu_331_p2.read());
}

void shuffle_24_p::thread_tmp_cast9_fu_230_p1() {
    tmp_cast9_fu_230_p1 = esl_zext<11,5>(h_reg_98.read());
}

void shuffle_24_p::thread_tmp_cast_fu_234_p1() {
    tmp_cast_fu_234_p1 = esl_zext<10,5>(h_reg_98.read());
}

void shuffle_24_p::thread_tmp_fu_148_p3() {
    tmp_fu_148_p3 = esl_concat<6,4>(co_reg_87.read(), ap_const_lv4_0);
}

void shuffle_24_p::thread_tmp_s_fu_160_p3() {
    tmp_s_fu_160_p3 = esl_concat<6,1>(co_reg_87.read(), ap_const_lv1_0);
}

void shuffle_24_p::thread_w_20_fu_306_p2() {
    w_20_fu_306_p2 = (!w_reg_109.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w_reg_109.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void shuffle_24_p::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond5_fu_136_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond4_fu_218_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(exitcond_fu_300_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}
