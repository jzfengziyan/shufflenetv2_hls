#include "subconv_1x1_4_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_4_p::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[21];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[7];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[8];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[10];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[11];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[12];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[13];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[14];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[16];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[17];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[18];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[19];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[20];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[22];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[2];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[3];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[4];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[5];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[6];
}

void subconv_1x1_4_p::thread_ap_block_pp0_stage0_flag00000000() {
    ap_block_pp0_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_pp0_stage0_flag00011001() {
    ap_block_pp0_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_pp1_stage0_flag00000000() {
    ap_block_pp1_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_pp1_stage0_flag00011001() {
    ap_block_pp1_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_pp1_stage0_flag00011011() {
    ap_block_pp1_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state24_pp1_stage0_iter0() {
    ap_block_state24_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state25_pp1_stage0_iter1() {
    ap_block_state25_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state26_pp1_stage0_iter2() {
    ap_block_state26_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state27_pp1_stage0_iter3() {
    ap_block_state27_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten7_fu_5286_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_condition_pp1_exit_iter0_state24() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_7530_p2.read())) {
        ap_condition_pp1_exit_iter0_state24 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state24 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void subconv_1x1_4_p::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void subconv_1x1_4_p::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_bias_V_address0() {
    bias_V_address0 =  (sc_lv<7>) (co_cast_mid2_fu_5338_p1.read());
}

void subconv_1x1_4_p::thread_bias_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bias_V_ce0 = ap_const_logic_1;
    } else {
        bias_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_10_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 = buffer1_1_96_4x4_p_V_298_reg_8106.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_10_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_10_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_address1() {
    buffer1_1_96_4x4_p_V_10_address1 = buffer1_1_96_4x4_p_V_504_reg_9287.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_10_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_10_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_10_d0 = tmp_43_s_fu_6122_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_10_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_d1() {
    buffer1_1_96_4x4_p_V_10_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_A)))) {
        buffer1_1_96_4x4_p_V_10_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_A))) {
        buffer1_1_96_4x4_p_V_10_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_11_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 = buffer1_1_96_4x4_p_V_299_reg_8111.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_11_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_11_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_address1() {
    buffer1_1_96_4x4_p_V_11_address1 = buffer1_1_96_4x4_p_V_505_reg_9293.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_11_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_11_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_11_d0 = tmp_43_10_fu_6152_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_11_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_11_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_d1() {
    buffer1_1_96_4x4_p_V_11_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_B)))) {
        buffer1_1_96_4x4_p_V_11_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_B))) {
        buffer1_1_96_4x4_p_V_11_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_12_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 = buffer1_1_96_4x4_p_V_300_reg_8116.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_12_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_12_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_address1() {
    buffer1_1_96_4x4_p_V_12_address1 = buffer1_1_96_4x4_p_V_506_reg_9299.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_12_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_12_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_12_d0 = tmp_43_11_fu_6182_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_12_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_12_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_d1() {
    buffer1_1_96_4x4_p_V_12_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_C)))) {
        buffer1_1_96_4x4_p_V_12_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_C))) {
        buffer1_1_96_4x4_p_V_12_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_13_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 = buffer1_1_96_4x4_p_V_288_reg_8056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_13_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_13_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_address1() {
    buffer1_1_96_4x4_p_V_13_address1 = buffer1_1_96_4x4_p_V_492_reg_9215.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_13_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_13_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_13_d0 = tmp_43_12_fu_6212_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_13_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_13_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_d1() {
    buffer1_1_96_4x4_p_V_13_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_D)))) {
        buffer1_1_96_4x4_p_V_13_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_D))) {
        buffer1_1_96_4x4_p_V_13_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_14_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 = buffer1_1_96_4x4_p_V_304_reg_8136.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_14_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_14_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_address1() {
    buffer1_1_96_4x4_p_V_14_address1 = buffer1_1_96_4x4_p_V_512_reg_9335.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_14_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_14_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_14_d0 = tmp_43_13_fu_6242_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_14_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_14_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_d1() {
    buffer1_1_96_4x4_p_V_14_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_E)))) {
        buffer1_1_96_4x4_p_V_14_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_E))) {
        buffer1_1_96_4x4_p_V_14_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_15_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 = buffer1_1_96_4x4_p_V_305_reg_8141.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_15_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_15_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_address1() {
    buffer1_1_96_4x4_p_V_15_address1 = buffer1_1_96_4x4_p_V_513_reg_9341.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_15_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_15_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_15_d0 = tmp_43_14_fu_6272_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_15_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_15_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_d1() {
    buffer1_1_96_4x4_p_V_15_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_F)))) {
        buffer1_1_96_4x4_p_V_15_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_F))) {
        buffer1_1_96_4x4_p_V_15_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_16_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 = buffer1_1_96_4x4_p_V_291_reg_8071.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_16_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_16_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_address1() {
    buffer1_1_96_4x4_p_V_16_address1 = buffer1_1_96_4x4_p_V_495_reg_9233.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_16_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_16_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_16_d0 = tmp_43_15_fu_6302_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_16_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_16_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_d1() {
    buffer1_1_96_4x4_p_V_16_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_10)))) {
        buffer1_1_96_4x4_p_V_16_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_10))) {
        buffer1_1_96_4x4_p_V_16_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_17_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 = buffer1_1_96_4x4_p_V_290_reg_8066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_17_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_17_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_address1() {
    buffer1_1_96_4x4_p_V_17_address1 = buffer1_1_96_4x4_p_V_494_reg_9227.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_17_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_17_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_17_d0 = tmp_43_16_fu_6332_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_17_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_17_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_d1() {
    buffer1_1_96_4x4_p_V_17_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_11)))) {
        buffer1_1_96_4x4_p_V_17_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_11))) {
        buffer1_1_96_4x4_p_V_17_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_18_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 = buffer1_1_96_4x4_p_V_289_reg_8061.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_18_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_18_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_address1() {
    buffer1_1_96_4x4_p_V_18_address1 = buffer1_1_96_4x4_p_V_493_reg_9221.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_18_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_18_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_18_d0 = tmp_43_17_fu_6362_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_18_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_d1() {
    buffer1_1_96_4x4_p_V_18_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_12)))) {
        buffer1_1_96_4x4_p_V_18_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_12))) {
        buffer1_1_96_4x4_p_V_18_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_19_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = buffer1_1_96_4x4_p_V_293_reg_8081.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_19_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_19_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_address1() {
    buffer1_1_96_4x4_p_V_19_address1 = buffer1_1_96_4x4_p_V_499_reg_9257.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_19_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_19_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_19_d0 = tmp_43_18_fu_6392_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_19_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_19_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_d1() {
    buffer1_1_96_4x4_p_V_19_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_13)))) {
        buffer1_1_96_4x4_p_V_19_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_13))) {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = buffer1_1_96_4x4_p_V_294_reg_8086.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_1_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_address1() {
    buffer1_1_96_4x4_p_V_1_address1 = buffer1_1_96_4x4_p_V_500_reg_9263.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_1_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_1_d0 = tmp_43_1_fu_5852_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_1_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_d1() {
    buffer1_1_96_4x4_p_V_1_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1)))) {
        buffer1_1_96_4x4_p_V_1_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1))) {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = buffer1_1_96_4x4_p_V_295_reg_8091.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_20_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_address1() {
    buffer1_1_96_4x4_p_V_20_address1 = buffer1_1_96_4x4_p_V_501_reg_9269.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_20_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_20_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_20_d0 = tmp_43_19_fu_6422_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_20_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_d1() {
    buffer1_1_96_4x4_p_V_20_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_14)))) {
        buffer1_1_96_4x4_p_V_20_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_14))) {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = buffer1_1_96_4x4_p_V_296_reg_8096.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_21_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_address1() {
    buffer1_1_96_4x4_p_V_21_address1 = buffer1_1_96_4x4_p_V_502_reg_9275.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_21_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_21_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_21_d0 = tmp_43_20_fu_6452_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_21_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_d1() {
    buffer1_1_96_4x4_p_V_21_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_15)))) {
        buffer1_1_96_4x4_p_V_21_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_15))) {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = buffer1_1_96_4x4_p_V_301_reg_8121.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_22_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_address1() {
    buffer1_1_96_4x4_p_V_22_address1 = buffer1_1_96_4x4_p_V_509_reg_9317.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_22_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_22_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_22_d0 = tmp_43_21_fu_6482_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_22_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_d1() {
    buffer1_1_96_4x4_p_V_22_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_16)))) {
        buffer1_1_96_4x4_p_V_22_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_16))) {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = buffer1_1_96_4x4_p_V_302_reg_8126.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_23_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_address1() {
    buffer1_1_96_4x4_p_V_23_address1 = buffer1_1_96_4x4_p_V_510_reg_9323.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_23_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_23_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_23_d0 = tmp_43_22_fu_6512_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_23_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_d1() {
    buffer1_1_96_4x4_p_V_23_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_17)))) {
        buffer1_1_96_4x4_p_V_23_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_17))) {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = buffer1_1_96_4x4_p_V_401_reg_8676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_24_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_address1() {
    buffer1_1_96_4x4_p_V_24_address1 = buffer1_1_96_4x4_p_V_516_reg_9359.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_24_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_24_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_24_d0 = tmp_27_fu_6822_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_24_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_d1() {
    buffer1_1_96_4x4_p_V_24_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_18)))) {
        buffer1_1_96_4x4_p_V_24_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_18))) {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_25_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_25_address0 = buffer1_1_96_4x4_p_V_400_reg_8671.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_25_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_25_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_address1() {
    buffer1_1_96_4x4_p_V_25_address1 = buffer1_1_96_4x4_p_V_515_reg_9353.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_25_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_25_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_25_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_25_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_25_d0 = tmp_49_1_fu_6852_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_25_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_25_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_d1() {
    buffer1_1_96_4x4_p_V_25_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_19)))) {
        buffer1_1_96_4x4_p_V_25_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_25_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_25_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_19))) {
        buffer1_1_96_4x4_p_V_25_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_25_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_26_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_26_address0 = buffer1_1_96_4x4_p_V_402_reg_8681.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_26_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_26_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_address1() {
    buffer1_1_96_4x4_p_V_26_address1 = buffer1_1_96_4x4_p_V_517_reg_9365.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_26_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_26_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_26_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_26_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_26_d0 = tmp_49_2_fu_6882_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_26_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_26_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_d1() {
    buffer1_1_96_4x4_p_V_26_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1A)))) {
        buffer1_1_96_4x4_p_V_26_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_26_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_26_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1A))) {
        buffer1_1_96_4x4_p_V_26_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_26_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_27_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_27_address0 = buffer1_1_96_4x4_p_V_403_reg_8686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_27_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_27_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_address1() {
    buffer1_1_96_4x4_p_V_27_address1 = buffer1_1_96_4x4_p_V_518_reg_9371.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_27_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_27_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_27_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_27_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_27_d0 = tmp_49_3_fu_6912_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_27_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_27_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_d1() {
    buffer1_1_96_4x4_p_V_27_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1B)))) {
        buffer1_1_96_4x4_p_V_27_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_27_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_27_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1B))) {
        buffer1_1_96_4x4_p_V_27_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_27_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_28_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_28_address0 = buffer1_1_96_4x4_p_V_395_reg_8646.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_28_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_28_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_address1() {
    buffer1_1_96_4x4_p_V_28_address1 = buffer1_1_96_4x4_p_V_496_reg_9239.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_28_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_28_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_28_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_28_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_28_d0 = tmp_49_4_fu_6942_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_28_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_28_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_d1() {
    buffer1_1_96_4x4_p_V_28_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1C)))) {
        buffer1_1_96_4x4_p_V_28_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_28_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_28_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1C))) {
        buffer1_1_96_4x4_p_V_28_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_28_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_29_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_29_address0 = buffer1_1_96_4x4_p_V_399_reg_8666.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_29_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_29_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_address1() {
    buffer1_1_96_4x4_p_V_29_address1 = buffer1_1_96_4x4_p_V_514_reg_9347.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_29_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_29_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_29_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_29_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_29_d0 = tmp_49_5_fu_6972_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_29_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_29_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_d1() {
    buffer1_1_96_4x4_p_V_29_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1D)))) {
        buffer1_1_96_4x4_p_V_29_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_29_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_29_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1D))) {
        buffer1_1_96_4x4_p_V_29_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_29_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = buffer1_1_96_4x4_p_V_292_reg_8076.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_2_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_address1() {
    buffer1_1_96_4x4_p_V_2_address1 = buffer1_1_96_4x4_p_V_497_reg_9245.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_2_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_2_d0 = tmp_43_2_fu_5882_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_2_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_d1() {
    buffer1_1_96_4x4_p_V_2_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2)))) {
        buffer1_1_96_4x4_p_V_2_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2))) {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_30_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_30_address0 = buffer1_1_96_4x4_p_V_396_reg_8651.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_30_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_30_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_address1() {
    buffer1_1_96_4x4_p_V_30_address1 = buffer1_1_96_4x4_p_V_498_reg_9251.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_30_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_30_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_30_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_30_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_30_d0 = tmp_49_6_fu_7002_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_30_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_30_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_d1() {
    buffer1_1_96_4x4_p_V_30_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1E)))) {
        buffer1_1_96_4x4_p_V_30_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_30_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_30_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1E))) {
        buffer1_1_96_4x4_p_V_30_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_30_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_31_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_31_address0 = buffer1_1_96_4x4_p_V_423_reg_8786.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_31_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_31_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_address1() {
    buffer1_1_96_4x4_p_V_31_address1 = buffer1_1_96_4x4_p_V_557_reg_9605.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_31_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_31_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_31_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_31_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_31_d0 = tmp_49_7_fu_7032_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_31_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_31_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_d1() {
    buffer1_1_96_4x4_p_V_31_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1F)))) {
        buffer1_1_96_4x4_p_V_31_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_31_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_31_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1F))) {
        buffer1_1_96_4x4_p_V_31_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_31_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_32_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_32_address0 = buffer1_1_96_4x4_p_V_408_reg_8711.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_32_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_32_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_address1() {
    buffer1_1_96_4x4_p_V_32_address1 = buffer1_1_96_4x4_p_V_525_reg_9413.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_32_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_32_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_32_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_32_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_32_d0 = tmp_49_8_fu_7062_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_32_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_32_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_d1() {
    buffer1_1_96_4x4_p_V_32_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_20)))) {
        buffer1_1_96_4x4_p_V_32_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_32_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_32_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_20))) {
        buffer1_1_96_4x4_p_V_32_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_32_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_33_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_33_address0 = buffer1_1_96_4x4_p_V_424_reg_8791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_33_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_33_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_address1() {
    buffer1_1_96_4x4_p_V_33_address1 = buffer1_1_96_4x4_p_V_558_reg_9611.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_33_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_33_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_33_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_33_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_33_d0 = tmp_49_9_fu_7092_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_33_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_33_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_d1() {
    buffer1_1_96_4x4_p_V_33_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_21)))) {
        buffer1_1_96_4x4_p_V_33_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_33_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_33_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_21))) {
        buffer1_1_96_4x4_p_V_33_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_33_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_34_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_34_address0 = buffer1_1_96_4x4_p_V_407_reg_8706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_34_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_34_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_address1() {
    buffer1_1_96_4x4_p_V_34_address1 = buffer1_1_96_4x4_p_V_524_reg_9407.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_34_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_34_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_34_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_34_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_34_d0 = tmp_49_s_fu_7122_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_34_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_34_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_d1() {
    buffer1_1_96_4x4_p_V_34_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_22)))) {
        buffer1_1_96_4x4_p_V_34_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_34_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_34_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_22))) {
        buffer1_1_96_4x4_p_V_34_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_34_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_35_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_35_address0 = buffer1_1_96_4x4_p_V_404_reg_8691.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_35_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_35_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_address1() {
    buffer1_1_96_4x4_p_V_35_address1 = buffer1_1_96_4x4_p_V_519_reg_9377.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_35_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_35_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_35_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_35_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_35_d0 = tmp_49_10_fu_7152_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_35_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_35_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_d1() {
    buffer1_1_96_4x4_p_V_35_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_23)))) {
        buffer1_1_96_4x4_p_V_35_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_35_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_35_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_23))) {
        buffer1_1_96_4x4_p_V_35_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_35_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_36_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_36_address0 = buffer1_1_96_4x4_p_V_413_reg_8736.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_36_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_36_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_address1() {
    buffer1_1_96_4x4_p_V_36_address1 = buffer1_1_96_4x4_p_V_531_reg_9449.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_36_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_36_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_36_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_36_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_36_d0 = tmp_49_11_fu_7182_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_36_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_36_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_d1() {
    buffer1_1_96_4x4_p_V_36_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_24)))) {
        buffer1_1_96_4x4_p_V_36_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_36_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_36_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_24))) {
        buffer1_1_96_4x4_p_V_36_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_36_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_37_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_37_address0 = buffer1_1_96_4x4_p_V_415_reg_8746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_37_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_37_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_address1() {
    buffer1_1_96_4x4_p_V_37_address1 = buffer1_1_96_4x4_p_V_533_reg_9461.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_37_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_37_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_37_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_37_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_37_d0 = tmp_49_12_fu_7212_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_37_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_37_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_d1() {
    buffer1_1_96_4x4_p_V_37_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_25)))) {
        buffer1_1_96_4x4_p_V_37_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_37_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_37_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_25))) {
        buffer1_1_96_4x4_p_V_37_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_37_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_38_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_38_address0 = buffer1_1_96_4x4_p_V_414_reg_8741.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_38_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_38_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_address1() {
    buffer1_1_96_4x4_p_V_38_address1 = buffer1_1_96_4x4_p_V_532_reg_9455.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_38_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_38_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_38_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_38_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_38_d0 = tmp_49_13_fu_7242_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_38_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_38_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_d1() {
    buffer1_1_96_4x4_p_V_38_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_26)))) {
        buffer1_1_96_4x4_p_V_38_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_38_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_38_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_26))) {
        buffer1_1_96_4x4_p_V_38_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_38_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_39_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_39_address0 = buffer1_1_96_4x4_p_V_405_reg_8696.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_39_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_39_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_address1() {
    buffer1_1_96_4x4_p_V_39_address1 = buffer1_1_96_4x4_p_V_522_reg_9395.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_39_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_39_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_39_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_39_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_39_d0 = tmp_49_14_fu_7272_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_39_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_39_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_d1() {
    buffer1_1_96_4x4_p_V_39_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_27)))) {
        buffer1_1_96_4x4_p_V_39_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_39_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_39_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_27))) {
        buffer1_1_96_4x4_p_V_39_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_39_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = buffer1_1_96_4x4_p_V_303_reg_8131.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_3_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_address1() {
    buffer1_1_96_4x4_p_V_3_address1 = buffer1_1_96_4x4_p_V_511_reg_9329.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_3_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_3_d0 = tmp_43_3_fu_5912_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_3_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_d1() {
    buffer1_1_96_4x4_p_V_3_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3)))) {
        buffer1_1_96_4x4_p_V_3_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3))) {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_40_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_40_address0 = buffer1_1_96_4x4_p_V_398_reg_8661.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_40_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_40_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_address1() {
    buffer1_1_96_4x4_p_V_40_address1 = buffer1_1_96_4x4_p_V_508_reg_9311.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_40_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_40_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_40_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_40_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_40_d0 = tmp_49_15_fu_7302_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_40_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_40_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_d1() {
    buffer1_1_96_4x4_p_V_40_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_28)))) {
        buffer1_1_96_4x4_p_V_40_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_40_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_40_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_28))) {
        buffer1_1_96_4x4_p_V_40_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_40_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_41_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_41_address0 = buffer1_1_96_4x4_p_V_409_reg_8716.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_41_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_41_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_address1() {
    buffer1_1_96_4x4_p_V_41_address1 = buffer1_1_96_4x4_p_V_526_reg_9419.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_41_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_41_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_41_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_41_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_41_d0 = tmp_49_16_fu_7332_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_41_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_41_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_d1() {
    buffer1_1_96_4x4_p_V_41_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_29)))) {
        buffer1_1_96_4x4_p_V_41_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_41_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_41_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_29))) {
        buffer1_1_96_4x4_p_V_41_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_41_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_42_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_42_address0 = buffer1_1_96_4x4_p_V_397_reg_8656.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_42_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_42_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_address1() {
    buffer1_1_96_4x4_p_V_42_address1 = buffer1_1_96_4x4_p_V_507_reg_9305.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_42_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_42_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_42_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_42_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_42_d0 = tmp_49_17_fu_7362_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_42_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_42_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_d1() {
    buffer1_1_96_4x4_p_V_42_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2A)))) {
        buffer1_1_96_4x4_p_V_42_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_42_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_42_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2A))) {
        buffer1_1_96_4x4_p_V_42_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_42_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_43_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_43_address0 = buffer1_1_96_4x4_p_V_410_reg_8721.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_43_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_43_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_address1() {
    buffer1_1_96_4x4_p_V_43_address1 = buffer1_1_96_4x4_p_V_527_reg_9425.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_43_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_43_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_43_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_43_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_43_d0 = tmp_49_18_fu_7392_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_43_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_43_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_d1() {
    buffer1_1_96_4x4_p_V_43_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2B)))) {
        buffer1_1_96_4x4_p_V_43_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_43_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_43_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2B))) {
        buffer1_1_96_4x4_p_V_43_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_43_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_44_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_44_address0 = buffer1_1_96_4x4_p_V_412_reg_8731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_44_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_44_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_address1() {
    buffer1_1_96_4x4_p_V_44_address1 = buffer1_1_96_4x4_p_V_530_reg_9443.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_44_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_44_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_44_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_44_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_44_d0 = tmp_49_19_fu_7422_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_44_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_44_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_d1() {
    buffer1_1_96_4x4_p_V_44_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2C)))) {
        buffer1_1_96_4x4_p_V_44_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_44_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_44_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2C))) {
        buffer1_1_96_4x4_p_V_44_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_44_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_45_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_45_address0 = buffer1_1_96_4x4_p_V_406_reg_8701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_45_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_45_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_address1() {
    buffer1_1_96_4x4_p_V_45_address1 = buffer1_1_96_4x4_p_V_523_reg_9401.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_45_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_45_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_45_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_45_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_45_d0 = tmp_49_20_fu_7452_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_45_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_45_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_d1() {
    buffer1_1_96_4x4_p_V_45_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2D)))) {
        buffer1_1_96_4x4_p_V_45_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_45_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_45_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2D))) {
        buffer1_1_96_4x4_p_V_45_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_45_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_46_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_46_address0 = buffer1_1_96_4x4_p_V_411_reg_8726.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_46_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_46_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_address1() {
    buffer1_1_96_4x4_p_V_46_address1 = buffer1_1_96_4x4_p_V_529_reg_9437.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_46_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_46_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_46_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_46_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_46_d0 = tmp_49_21_fu_7482_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_46_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_46_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_d1() {
    buffer1_1_96_4x4_p_V_46_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2E)))) {
        buffer1_1_96_4x4_p_V_46_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_46_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_46_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2E))) {
        buffer1_1_96_4x4_p_V_46_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_46_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_47_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_47_address0 = buffer1_1_96_4x4_p_V_425_reg_8796.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_47_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_47_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_address1() {
    buffer1_1_96_4x4_p_V_47_address1 = buffer1_1_96_4x4_p_V_559_reg_9617.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_47_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_47_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_47_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_47_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_47_d0 = tmp_49_22_fu_7512_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_47_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_47_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_d1() {
    buffer1_1_96_4x4_p_V_47_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2F)))) {
        buffer1_1_96_4x4_p_V_47_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_47_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_47_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2F))) {
        buffer1_1_96_4x4_p_V_47_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_47_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_48_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_48_address0 = buffer1_1_96_4x4_p_V_308_reg_8156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_48_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_48_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_address1() {
    buffer1_1_96_4x4_p_V_48_address1 = buffer1_1_96_4x4_p_V_528_reg_9431.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_48_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_48_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_48_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_48_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_48_d0 = tmp_25_fu_5833_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_48_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_48_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_d1() {
    buffer1_1_96_4x4_p_V_48_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_30)))) {
        buffer1_1_96_4x4_p_V_48_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_48_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_48_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_30))) {
        buffer1_1_96_4x4_p_V_48_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_48_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_49_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_49_address0 = buffer1_1_96_4x4_p_V_306_reg_8146.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_49_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_49_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_address1() {
    buffer1_1_96_4x4_p_V_49_address1 = buffer1_1_96_4x4_p_V_520_reg_9383.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_49_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_49_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_49_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_49_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_49_d0 = tmp_45_1_fu_5863_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_49_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_49_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_d1() {
    buffer1_1_96_4x4_p_V_49_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_31)))) {
        buffer1_1_96_4x4_p_V_49_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_49_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_49_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_31))) {
        buffer1_1_96_4x4_p_V_49_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_49_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = buffer1_1_96_4x4_p_V_307_reg_8151.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_4_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_address1() {
    buffer1_1_96_4x4_p_V_4_address1 = buffer1_1_96_4x4_p_V_521_reg_9389.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_4_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_4_d0 = tmp_43_4_fu_5942_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_4_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_d1() {
    buffer1_1_96_4x4_p_V_4_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4)))) {
        buffer1_1_96_4x4_p_V_4_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4))) {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_50_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_50_address0 = buffer1_1_96_4x4_p_V_310_reg_8166.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_50_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_50_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_address1() {
    buffer1_1_96_4x4_p_V_50_address1 = buffer1_1_96_4x4_p_V_535_reg_9473.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_50_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_50_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_50_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_50_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_50_d0 = tmp_45_2_fu_5893_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_50_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_50_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_d1() {
    buffer1_1_96_4x4_p_V_50_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_32)))) {
        buffer1_1_96_4x4_p_V_50_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_50_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_50_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_32))) {
        buffer1_1_96_4x4_p_V_50_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_50_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_51_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_51_address0 = buffer1_1_96_4x4_p_V_325_reg_8241.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_51_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_51_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_address1() {
    buffer1_1_96_4x4_p_V_51_address1 = buffer1_1_96_4x4_p_V_560_reg_9623.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_51_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_51_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_51_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_51_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_51_d0 = tmp_45_3_fu_5923_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_51_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_51_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_d1() {
    buffer1_1_96_4x4_p_V_51_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_33)))) {
        buffer1_1_96_4x4_p_V_51_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_51_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_51_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_33))) {
        buffer1_1_96_4x4_p_V_51_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_51_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_52_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_52_address0 = buffer1_1_96_4x4_p_V_314_reg_8186.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_52_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_52_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_address1() {
    buffer1_1_96_4x4_p_V_52_address1 = buffer1_1_96_4x4_p_V_539_reg_9497.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_52_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_52_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_52_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_52_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_52_d0 = tmp_45_4_fu_5953_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_52_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_52_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_d1() {
    buffer1_1_96_4x4_p_V_52_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_34)))) {
        buffer1_1_96_4x4_p_V_52_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_52_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_52_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_34))) {
        buffer1_1_96_4x4_p_V_52_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_52_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_53_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_53_address0 = buffer1_1_96_4x4_p_V_318_reg_8206.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_53_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_53_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_address1() {
    buffer1_1_96_4x4_p_V_53_address1 = buffer1_1_96_4x4_p_V_543_reg_9521.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_53_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_53_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_53_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_53_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_53_d0 = tmp_45_5_fu_5983_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_53_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_53_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_d1() {
    buffer1_1_96_4x4_p_V_53_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_35)))) {
        buffer1_1_96_4x4_p_V_53_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_53_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_53_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_35))) {
        buffer1_1_96_4x4_p_V_53_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_53_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_54_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_54_address0 = buffer1_1_96_4x4_p_V_317_reg_8201.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_54_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_54_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_address1() {
    buffer1_1_96_4x4_p_V_54_address1 = buffer1_1_96_4x4_p_V_542_reg_9515.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_54_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_54_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_54_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_54_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_54_d0 = tmp_45_6_fu_6013_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_54_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_54_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_d1() {
    buffer1_1_96_4x4_p_V_54_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_36)))) {
        buffer1_1_96_4x4_p_V_54_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_54_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_54_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_36))) {
        buffer1_1_96_4x4_p_V_54_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_54_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_55_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_55_address0 = buffer1_1_96_4x4_p_V_319_reg_8211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_55_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_55_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_address1() {
    buffer1_1_96_4x4_p_V_55_address1 = buffer1_1_96_4x4_p_V_544_reg_9527.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_55_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_55_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_55_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_55_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_55_d0 = tmp_45_7_fu_6043_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_55_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_55_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_d1() {
    buffer1_1_96_4x4_p_V_55_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_37)))) {
        buffer1_1_96_4x4_p_V_55_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_55_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_55_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_37))) {
        buffer1_1_96_4x4_p_V_55_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_55_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_56_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_56_address0 = buffer1_1_96_4x4_p_V_315_reg_8191.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_56_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_56_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_address1() {
    buffer1_1_96_4x4_p_V_56_address1 = buffer1_1_96_4x4_p_V_540_reg_9503.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_56_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_56_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_56_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_56_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_56_d0 = tmp_45_8_fu_6073_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_56_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_56_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_d1() {
    buffer1_1_96_4x4_p_V_56_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_38)))) {
        buffer1_1_96_4x4_p_V_56_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_56_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_56_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_38))) {
        buffer1_1_96_4x4_p_V_56_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_56_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_57_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_57_address0 = buffer1_1_96_4x4_p_V_312_reg_8176.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_57_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_57_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_address1() {
    buffer1_1_96_4x4_p_V_57_address1 = buffer1_1_96_4x4_p_V_537_reg_9485.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_57_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_57_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_57_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_57_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_57_d0 = tmp_45_9_fu_6103_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_57_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_57_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_d1() {
    buffer1_1_96_4x4_p_V_57_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_39)))) {
        buffer1_1_96_4x4_p_V_57_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_57_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_57_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_39))) {
        buffer1_1_96_4x4_p_V_57_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_57_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_58_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_58_address0 = buffer1_1_96_4x4_p_V_313_reg_8181.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_58_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_58_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_address1() {
    buffer1_1_96_4x4_p_V_58_address1 = buffer1_1_96_4x4_p_V_538_reg_9491.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_58_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_58_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_58_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_58_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_58_d0 = tmp_45_s_fu_6133_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_58_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_58_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_d1() {
    buffer1_1_96_4x4_p_V_58_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3A)))) {
        buffer1_1_96_4x4_p_V_58_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_58_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_58_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3A))) {
        buffer1_1_96_4x4_p_V_58_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_58_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_59_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_59_address0 = buffer1_1_96_4x4_p_V_316_reg_8196.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_59_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_59_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_address1() {
    buffer1_1_96_4x4_p_V_59_address1 = buffer1_1_96_4x4_p_V_541_reg_9509.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_59_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_59_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_59_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_59_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_59_d0 = tmp_45_10_fu_6163_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_59_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_59_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_d1() {
    buffer1_1_96_4x4_p_V_59_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3B)))) {
        buffer1_1_96_4x4_p_V_59_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_59_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_59_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3B))) {
        buffer1_1_96_4x4_p_V_59_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_59_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = buffer1_1_96_4x4_p_V_311_reg_8171.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_5_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_address1() {
    buffer1_1_96_4x4_p_V_5_address1 = buffer1_1_96_4x4_p_V_536_reg_9479.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_5_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_5_d0 = tmp_43_5_fu_5972_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_5_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_d1() {
    buffer1_1_96_4x4_p_V_5_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5)))) {
        buffer1_1_96_4x4_p_V_5_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5))) {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_60_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_60_address0 = buffer1_1_96_4x4_p_V_333_reg_8281.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_60_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_60_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_address1() {
    buffer1_1_96_4x4_p_V_60_address1 = buffer1_1_96_4x4_p_V_571_reg_9689.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_60_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_60_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_60_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_60_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_60_d0 = tmp_45_11_fu_6193_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_60_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_60_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_d1() {
    buffer1_1_96_4x4_p_V_60_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3C)))) {
        buffer1_1_96_4x4_p_V_60_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_60_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_60_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3C))) {
        buffer1_1_96_4x4_p_V_60_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_60_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_61_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_61_address0 = buffer1_1_96_4x4_p_V_330_reg_8266.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_61_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_61_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_address1() {
    buffer1_1_96_4x4_p_V_61_address1 = buffer1_1_96_4x4_p_V_565_reg_9653.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_61_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_61_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_61_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_61_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_61_d0 = tmp_45_12_fu_6223_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_61_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_61_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_d1() {
    buffer1_1_96_4x4_p_V_61_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3D)))) {
        buffer1_1_96_4x4_p_V_61_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_61_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_61_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3D))) {
        buffer1_1_96_4x4_p_V_61_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_61_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_62_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_62_address0 = buffer1_1_96_4x4_p_V_331_reg_8271.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_62_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_62_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_address1() {
    buffer1_1_96_4x4_p_V_62_address1 = buffer1_1_96_4x4_p_V_566_reg_9659.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_62_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_62_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_62_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_62_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_62_d0 = tmp_45_13_fu_6253_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_62_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_62_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_d1() {
    buffer1_1_96_4x4_p_V_62_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3E)))) {
        buffer1_1_96_4x4_p_V_62_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_62_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_62_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3E))) {
        buffer1_1_96_4x4_p_V_62_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_62_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_63_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_63_address0 = buffer1_1_96_4x4_p_V_334_reg_8286.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_63_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_63_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_address1() {
    buffer1_1_96_4x4_p_V_63_address1 = buffer1_1_96_4x4_p_V_572_reg_9695.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_63_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_63_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_63_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_63_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_63_d0 = tmp_45_14_fu_6283_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_63_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_63_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_d1() {
    buffer1_1_96_4x4_p_V_63_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3F)))) {
        buffer1_1_96_4x4_p_V_63_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_63_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_63_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3F))) {
        buffer1_1_96_4x4_p_V_63_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_63_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_64_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_64_address0 = buffer1_1_96_4x4_p_V_327_reg_8251.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_64_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_64_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_address1() {
    buffer1_1_96_4x4_p_V_64_address1 = buffer1_1_96_4x4_p_V_562_reg_9635.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_64_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_64_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_64_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_64_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_64_d0 = tmp_45_15_fu_6313_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_64_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_64_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_d1() {
    buffer1_1_96_4x4_p_V_64_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_40)))) {
        buffer1_1_96_4x4_p_V_64_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_64_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_64_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_40))) {
        buffer1_1_96_4x4_p_V_64_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_64_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_65_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_65_address0 = buffer1_1_96_4x4_p_V_328_reg_8256.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_65_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_65_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_address1() {
    buffer1_1_96_4x4_p_V_65_address1 = buffer1_1_96_4x4_p_V_563_reg_9641.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_65_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_65_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_65_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_65_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_65_d0 = tmp_45_16_fu_6343_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_65_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_65_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_d1() {
    buffer1_1_96_4x4_p_V_65_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_41)))) {
        buffer1_1_96_4x4_p_V_65_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_65_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_65_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_41))) {
        buffer1_1_96_4x4_p_V_65_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_65_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_66_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_66_address0 = buffer1_1_96_4x4_p_V_329_reg_8261.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_66_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_66_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_address1() {
    buffer1_1_96_4x4_p_V_66_address1 = buffer1_1_96_4x4_p_V_564_reg_9647.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_66_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_66_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_66_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_66_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_66_d0 = tmp_45_17_fu_6373_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_66_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_66_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_d1() {
    buffer1_1_96_4x4_p_V_66_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_42)))) {
        buffer1_1_96_4x4_p_V_66_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_66_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_66_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_42))) {
        buffer1_1_96_4x4_p_V_66_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_66_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_67_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_67_address0 = buffer1_1_96_4x4_p_V_326_reg_8246.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_67_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_67_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_address1() {
    buffer1_1_96_4x4_p_V_67_address1 = buffer1_1_96_4x4_p_V_561_reg_9629.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_67_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_67_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_67_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_67_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_67_d0 = tmp_45_18_fu_6403_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_67_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_67_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_d1() {
    buffer1_1_96_4x4_p_V_67_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_43)))) {
        buffer1_1_96_4x4_p_V_67_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_67_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_67_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_43))) {
        buffer1_1_96_4x4_p_V_67_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_67_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_68_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_68_address0 = buffer1_1_96_4x4_p_V_323_reg_8231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_68_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_68_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_address1() {
    buffer1_1_96_4x4_p_V_68_address1 = buffer1_1_96_4x4_p_V_548_reg_9551.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_68_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_68_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_68_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_68_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_68_d0 = tmp_45_19_fu_6433_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_68_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_68_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_d1() {
    buffer1_1_96_4x4_p_V_68_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_44)))) {
        buffer1_1_96_4x4_p_V_68_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_68_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_68_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_44))) {
        buffer1_1_96_4x4_p_V_68_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_68_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_69_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_69_address0 = buffer1_1_96_4x4_p_V_320_reg_8216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_69_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_69_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_address1() {
    buffer1_1_96_4x4_p_V_69_address1 = buffer1_1_96_4x4_p_V_545_reg_9533.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_69_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_69_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_69_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_69_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_69_d0 = tmp_45_20_fu_6463_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_69_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_69_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_d1() {
    buffer1_1_96_4x4_p_V_69_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_45)))) {
        buffer1_1_96_4x4_p_V_69_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_69_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_69_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_45))) {
        buffer1_1_96_4x4_p_V_69_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_69_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = buffer1_1_96_4x4_p_V_309_reg_8161.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_6_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_address1() {
    buffer1_1_96_4x4_p_V_6_address1 = buffer1_1_96_4x4_p_V_534_reg_9467.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_6_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_6_d0 = tmp_43_6_fu_6002_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_6_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_d1() {
    buffer1_1_96_4x4_p_V_6_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_6)))) {
        buffer1_1_96_4x4_p_V_6_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_6))) {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_70_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_70_address0 = buffer1_1_96_4x4_p_V_321_reg_8221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_70_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_70_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_address1() {
    buffer1_1_96_4x4_p_V_70_address1 = buffer1_1_96_4x4_p_V_546_reg_9539.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_70_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_70_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_70_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_70_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_70_d0 = tmp_45_21_fu_6493_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_70_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_70_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_d1() {
    buffer1_1_96_4x4_p_V_70_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_46)))) {
        buffer1_1_96_4x4_p_V_70_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_70_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_70_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_46))) {
        buffer1_1_96_4x4_p_V_70_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_70_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_71_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_71_address0 = buffer1_1_96_4x4_p_V_324_reg_8236.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_71_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_71_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_address1() {
    buffer1_1_96_4x4_p_V_71_address1 = buffer1_1_96_4x4_p_V_555_reg_9593.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_71_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_71_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_71_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_71_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_71_d0 = tmp_45_22_fu_6523_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_71_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_71_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_d1() {
    buffer1_1_96_4x4_p_V_71_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_47)))) {
        buffer1_1_96_4x4_p_V_71_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_71_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_71_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_47))) {
        buffer1_1_96_4x4_p_V_71_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_71_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_72_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_72_address0 = buffer1_1_96_4x4_p_V_422_reg_8781.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_72_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_72_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_address1() {
    buffer1_1_96_4x4_p_V_72_address1 = buffer1_1_96_4x4_p_V_556_reg_9599.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_72_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_72_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_72_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_72_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_72_d0 = tmp_29_fu_6833_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_72_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_72_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_d1() {
    buffer1_1_96_4x4_p_V_72_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_48)))) {
        buffer1_1_96_4x4_p_V_72_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_72_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_72_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_48))) {
        buffer1_1_96_4x4_p_V_72_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_72_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_73_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_73_address0 = buffer1_1_96_4x4_p_V_420_reg_8771.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_73_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_73_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_address1() {
    buffer1_1_96_4x4_p_V_73_address1 = buffer1_1_96_4x4_p_V_553_reg_9581.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_73_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_73_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_73_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_73_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_73_d0 = tmp_51_1_fu_6863_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_73_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_73_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_d1() {
    buffer1_1_96_4x4_p_V_73_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_49)))) {
        buffer1_1_96_4x4_p_V_73_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_73_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_73_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_49))) {
        buffer1_1_96_4x4_p_V_73_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_73_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_74_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_74_address0 = buffer1_1_96_4x4_p_V_421_reg_8776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_74_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_74_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_address1() {
    buffer1_1_96_4x4_p_V_74_address1 = buffer1_1_96_4x4_p_V_554_reg_9587.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_74_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_74_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_74_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_74_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_74_d0 = tmp_51_2_fu_6893_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_74_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_74_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_d1() {
    buffer1_1_96_4x4_p_V_74_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4A)))) {
        buffer1_1_96_4x4_p_V_74_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_74_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_74_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4A))) {
        buffer1_1_96_4x4_p_V_74_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_74_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_75_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_75_address0 = buffer1_1_96_4x4_p_V_417_reg_8756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_75_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_75_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_address1() {
    buffer1_1_96_4x4_p_V_75_address1 = buffer1_1_96_4x4_p_V_550_reg_9563.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_75_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_75_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_75_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_75_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_75_d0 = tmp_51_3_fu_6923_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_75_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_75_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_d1() {
    buffer1_1_96_4x4_p_V_75_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4B)))) {
        buffer1_1_96_4x4_p_V_75_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_75_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_75_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4B))) {
        buffer1_1_96_4x4_p_V_75_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_75_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_76_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_76_address0 = buffer1_1_96_4x4_p_V_418_reg_8761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_76_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_76_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_address1() {
    buffer1_1_96_4x4_p_V_76_address1 = buffer1_1_96_4x4_p_V_551_reg_9569.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_76_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_76_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_76_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_76_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_76_d0 = tmp_51_4_fu_6953_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_76_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_76_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_d1() {
    buffer1_1_96_4x4_p_V_76_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4C)))) {
        buffer1_1_96_4x4_p_V_76_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_76_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_76_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4C))) {
        buffer1_1_96_4x4_p_V_76_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_76_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_77_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_77_address0 = buffer1_1_96_4x4_p_V_416_reg_8751.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_77_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_77_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_address1() {
    buffer1_1_96_4x4_p_V_77_address1 = buffer1_1_96_4x4_p_V_549_reg_9557.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_77_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_77_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_77_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_77_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_77_d0 = tmp_51_5_fu_6983_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_77_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_77_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_d1() {
    buffer1_1_96_4x4_p_V_77_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4D)))) {
        buffer1_1_96_4x4_p_V_77_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_77_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_77_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4D))) {
        buffer1_1_96_4x4_p_V_77_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_77_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_78_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_78_address0 = buffer1_1_96_4x4_p_V_419_reg_8766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_78_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_78_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_address1() {
    buffer1_1_96_4x4_p_V_78_address1 = buffer1_1_96_4x4_p_V_552_reg_9575.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_78_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_78_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_78_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_78_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_78_d0 = tmp_51_6_fu_7013_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_78_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_78_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_d1() {
    buffer1_1_96_4x4_p_V_78_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4E)))) {
        buffer1_1_96_4x4_p_V_78_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_78_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_78_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4E))) {
        buffer1_1_96_4x4_p_V_78_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_78_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_79_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_79_address0 = buffer1_1_96_4x4_p_V_430_reg_8821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_79_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_79_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_address1() {
    buffer1_1_96_4x4_p_V_79_address1 = buffer1_1_96_4x4_p_V_574_reg_9707.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_79_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_79_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_79_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_79_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_79_d0 = tmp_51_7_fu_7043_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_79_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_79_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_d1() {
    buffer1_1_96_4x4_p_V_79_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4F)))) {
        buffer1_1_96_4x4_p_V_79_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_79_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_79_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4F))) {
        buffer1_1_96_4x4_p_V_79_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_79_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = buffer1_1_96_4x4_p_V_322_reg_8226.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_7_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_address1() {
    buffer1_1_96_4x4_p_V_7_address1 = buffer1_1_96_4x4_p_V_547_reg_9545.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_7_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_7_d0 = tmp_43_7_fu_6032_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_7_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_d1() {
    buffer1_1_96_4x4_p_V_7_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_7)))) {
        buffer1_1_96_4x4_p_V_7_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_7))) {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_80_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_80_address0 = buffer1_1_96_4x4_p_V_429_reg_8816.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_80_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_80_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_address1() {
    buffer1_1_96_4x4_p_V_80_address1 = buffer1_1_96_4x4_p_V_573_reg_9701.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_80_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_80_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_80_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_80_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_80_d0 = tmp_51_8_fu_7073_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_80_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_80_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_d1() {
    buffer1_1_96_4x4_p_V_80_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_50)))) {
        buffer1_1_96_4x4_p_V_80_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_80_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_80_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_50))) {
        buffer1_1_96_4x4_p_V_80_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_80_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_81_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_81_address0 = buffer1_1_96_4x4_p_V_428_reg_8811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_81_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_81_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_address1() {
    buffer1_1_96_4x4_p_V_81_address1 = buffer1_1_96_4x4_p_V_569_reg_9677.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_81_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_81_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_81_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_81_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_81_d0 = tmp_51_9_fu_7103_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_81_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_81_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_d1() {
    buffer1_1_96_4x4_p_V_81_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_51)))) {
        buffer1_1_96_4x4_p_V_81_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_81_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_81_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_51))) {
        buffer1_1_96_4x4_p_V_81_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_81_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_82_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_82_address0 = buffer1_1_96_4x4_p_V_427_reg_8806.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_82_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_82_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_address1() {
    buffer1_1_96_4x4_p_V_82_address1 = buffer1_1_96_4x4_p_V_568_reg_9671.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_82_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_82_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_82_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_82_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_82_d0 = tmp_51_s_fu_7133_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_82_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_82_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_d1() {
    buffer1_1_96_4x4_p_V_82_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_52)))) {
        buffer1_1_96_4x4_p_V_82_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_82_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_82_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_52))) {
        buffer1_1_96_4x4_p_V_82_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_82_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_83_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_83_address0 = buffer1_1_96_4x4_p_V_386_reg_8601.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_83_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_83_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_address1() {
    buffer1_1_96_4x4_p_V_83_address1 = buffer1_1_96_4x4_p_V_482_reg_9155.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_83_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_83_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_83_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_83_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_83_d0 = tmp_51_10_fu_7163_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_83_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_83_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_d1() {
    buffer1_1_96_4x4_p_V_83_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_53)))) {
        buffer1_1_96_4x4_p_V_83_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_83_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_83_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_53))) {
        buffer1_1_96_4x4_p_V_83_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_83_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_84_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_84_address0 = buffer1_1_96_4x4_p_V_392_reg_8631.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_84_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_84_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_address1() {
    buffer1_1_96_4x4_p_V_84_address1 = buffer1_1_96_4x4_p_V_489_reg_9197.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_84_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_84_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_84_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_84_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_84_d0 = tmp_51_11_fu_7193_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_84_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_84_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_d1() {
    buffer1_1_96_4x4_p_V_84_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_54)))) {
        buffer1_1_96_4x4_p_V_84_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_84_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_84_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_54))) {
        buffer1_1_96_4x4_p_V_84_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_84_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_85_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_85_address0 = buffer1_1_96_4x4_p_V_394_reg_8641.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_85_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_85_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_address1() {
    buffer1_1_96_4x4_p_V_85_address1 = buffer1_1_96_4x4_p_V_491_reg_9209.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_85_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_85_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_85_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_85_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_85_d0 = tmp_51_12_fu_7223_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_85_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_85_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_d1() {
    buffer1_1_96_4x4_p_V_85_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_55)))) {
        buffer1_1_96_4x4_p_V_85_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_85_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_85_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_55))) {
        buffer1_1_96_4x4_p_V_85_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_85_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_86_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_86_address0 = buffer1_1_96_4x4_p_V_387_reg_8606.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_86_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_86_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_address1() {
    buffer1_1_96_4x4_p_V_86_address1 = buffer1_1_96_4x4_p_V_483_reg_9161.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_86_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_86_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_86_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_86_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_86_d0 = tmp_51_13_fu_7253_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_86_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_86_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_d1() {
    buffer1_1_96_4x4_p_V_86_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_56)))) {
        buffer1_1_96_4x4_p_V_86_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_86_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_86_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_56))) {
        buffer1_1_96_4x4_p_V_86_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_86_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_87_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_87_address0 = buffer1_1_96_4x4_p_V_391_reg_8626.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_87_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_87_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_address1() {
    buffer1_1_96_4x4_p_V_87_address1 = buffer1_1_96_4x4_p_V_488_reg_9191.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_87_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_87_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_87_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_87_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_87_d0 = tmp_51_14_fu_7283_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_87_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_87_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_d1() {
    buffer1_1_96_4x4_p_V_87_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_57)))) {
        buffer1_1_96_4x4_p_V_87_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_87_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_87_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_57))) {
        buffer1_1_96_4x4_p_V_87_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_87_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_88_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_88_address0 = buffer1_1_96_4x4_p_V_388_reg_8611.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_88_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_88_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_address1() {
    buffer1_1_96_4x4_p_V_88_address1 = buffer1_1_96_4x4_p_V_484_reg_9167.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_88_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_88_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_88_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_88_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_88_d0 = tmp_51_15_fu_7313_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_88_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_88_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_d1() {
    buffer1_1_96_4x4_p_V_88_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_58)))) {
        buffer1_1_96_4x4_p_V_88_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_88_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_88_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_58))) {
        buffer1_1_96_4x4_p_V_88_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_88_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_89_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_89_address0 = buffer1_1_96_4x4_p_V_389_reg_8616.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_89_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_89_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_address1() {
    buffer1_1_96_4x4_p_V_89_address1 = buffer1_1_96_4x4_p_V_486_reg_9179.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_89_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_89_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_89_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_89_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_89_d0 = tmp_51_16_fu_7343_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_89_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_89_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_d1() {
    buffer1_1_96_4x4_p_V_89_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_59)))) {
        buffer1_1_96_4x4_p_V_89_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_89_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_89_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_59))) {
        buffer1_1_96_4x4_p_V_89_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_89_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = buffer1_1_96_4x4_p_V_332_reg_8276.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_8_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_address1() {
    buffer1_1_96_4x4_p_V_8_address1 = buffer1_1_96_4x4_p_V_570_reg_9683.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_8_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_8_d0 = tmp_43_8_fu_6062_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_8_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_d1() {
    buffer1_1_96_4x4_p_V_8_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_8)))) {
        buffer1_1_96_4x4_p_V_8_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_8))) {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_90_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_90_address0 = buffer1_1_96_4x4_p_V_385_reg_8596.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_90_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_90_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_address1() {
    buffer1_1_96_4x4_p_V_90_address1 = buffer1_1_96_4x4_p_V_481_reg_9149.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_90_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_90_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_90_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_90_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_90_d0 = tmp_51_17_fu_7373_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_90_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_90_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_d1() {
    buffer1_1_96_4x4_p_V_90_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5A)))) {
        buffer1_1_96_4x4_p_V_90_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_90_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_90_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5A))) {
        buffer1_1_96_4x4_p_V_90_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_90_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_91_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_91_address0 = buffer1_1_96_4x4_p_V_390_reg_8621.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_91_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_91_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_address1() {
    buffer1_1_96_4x4_p_V_91_address1 = buffer1_1_96_4x4_p_V_487_reg_9185.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_91_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_91_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_91_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_91_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_91_d0 = tmp_51_18_fu_7403_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_91_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_91_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_d1() {
    buffer1_1_96_4x4_p_V_91_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5B)))) {
        buffer1_1_96_4x4_p_V_91_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_91_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_91_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5B))) {
        buffer1_1_96_4x4_p_V_91_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_91_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_92_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_92_address0 = buffer1_1_96_4x4_p_V_393_reg_8636.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_92_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_92_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_address1() {
    buffer1_1_96_4x4_p_V_92_address1 = buffer1_1_96_4x4_p_V_490_reg_9203.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_92_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_92_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_92_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_92_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_92_d0 = tmp_51_19_fu_7433_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_92_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_92_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_d1() {
    buffer1_1_96_4x4_p_V_92_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5C)))) {
        buffer1_1_96_4x4_p_V_92_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_92_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_92_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5C))) {
        buffer1_1_96_4x4_p_V_92_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_92_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_93_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_93_address0 = buffer1_1_96_4x4_p_V_384_reg_8591.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_93_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_93_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_address1() {
    buffer1_1_96_4x4_p_V_93_address1 = buffer1_1_96_4x4_p_V_480_reg_9143.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_93_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_93_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_93_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_93_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_93_d0 = tmp_51_20_fu_7463_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_93_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_93_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_d1() {
    buffer1_1_96_4x4_p_V_93_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5D)))) {
        buffer1_1_96_4x4_p_V_93_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_93_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_93_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5D))) {
        buffer1_1_96_4x4_p_V_93_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_93_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_94_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_94_address0 = buffer1_1_96_4x4_p_V_426_reg_8801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_94_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_94_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_address1() {
    buffer1_1_96_4x4_p_V_94_address1 = buffer1_1_96_4x4_p_V_567_reg_9665.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_94_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_94_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_94_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_94_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_94_d0 = tmp_51_21_fu_7493_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_94_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_94_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_d1() {
    buffer1_1_96_4x4_p_V_94_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5E)))) {
        buffer1_1_96_4x4_p_V_94_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_94_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_94_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5E))) {
        buffer1_1_96_4x4_p_V_94_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_94_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_95_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        buffer1_1_96_4x4_p_V_95_address0 = buffer1_1_96_4x4_p_V_383_reg_8586.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_95_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_95_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_address1() {
    buffer1_1_96_4x4_p_V_95_address1 = buffer1_1_96_4x4_p_V_479_reg_9137.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_95_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_95_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_95_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_95_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_95_d0 = tmp_51_22_fu_7523_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_95_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_95_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_d1() {
    buffer1_1_96_4x4_p_V_95_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_5E)))) {
        buffer1_1_96_4x4_p_V_95_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_95_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_95_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_0) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_6) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_7) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_8) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_9) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_10) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_11) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_12) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_13) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_14) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_15) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_16) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_17) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_18) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_19) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_1F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_20) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_21) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_22) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_23) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_24) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_25) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_26) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_27) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_28) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_29) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_2F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_30) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_31) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_32) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_33) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_34) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_35) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_36) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_37) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_38) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_39) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_3F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_40) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_41) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_42) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_43) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_44) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_45) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_46) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_47) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_48) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_49) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_4F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_50) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_51) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_52) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_53) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_54) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_55) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_56) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_57) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_58) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_59) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_5E))) {
        buffer1_1_96_4x4_p_V_95_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_95_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_96_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_96_address0 = buffer1_1_96_4x4_p_V_297_reg_8101.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_96_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_96_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_address1() {
    buffer1_1_96_4x4_p_V_96_address1 = buffer1_1_96_4x4_p_V_503_reg_9281.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_96_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_96_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_96_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_96_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_96_d0 = tmp_23_fu_5822_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_96_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_96_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_d1() {
    buffer1_1_96_4x4_p_V_96_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_0)))) {
        buffer1_1_96_4x4_p_V_96_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_96_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_96_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_0))) {
        buffer1_1_96_4x4_p_V_96_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_96_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = buffer1_1_96_4x4_p_V_287_reg_8051.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<6>) (tmp_271_cast_fu_5430_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_9_address0 = "XXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_address1() {
    buffer1_1_96_4x4_p_V_9_address1 = buffer1_1_96_4x4_p_V_485_reg_9173.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())))) {
        buffer1_1_96_4x4_p_V_9_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        buffer1_1_96_4x4_p_V_9_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        buffer1_1_96_4x4_p_V_9_d0 = tmp_43_9_fu_6092_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        buffer1_1_96_4x4_p_V_9_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_d1() {
    buffer1_1_96_4x4_p_V_9_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_7996.read(), ap_const_lv7_9)))) {
        buffer1_1_96_4x4_p_V_9_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_271_fu_7966_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co8_mid2_reg_9114.read(), ap_const_lv7_9))) {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ci6_cast4_fu_6651_p1() {
    ci6_cast4_fu_6651_p1 = esl_zext<32,7>(ci6_reg_4925.read());
}

void subconv_1x1_4_p::thread_ci_6_fu_5798_p2() {
    ci_6_fu_5798_p2 = (!ap_const_lv7_1.is_01() || !ci_reg_4890.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(ci_reg_4890.read()));
}

void subconv_1x1_4_p::thread_ci_7_fu_6798_p2() {
    ci_7_fu_6798_p2 = (!ap_const_lv7_1.is_01() || !ci6_reg_4925.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(ci6_reg_4925.read()));
}

void subconv_1x1_4_p::thread_ci_cast7_fu_5651_p1() {
    ci_cast7_fu_5651_p1 = esl_zext<32,7>(ci_reg_4890.read());
}

void subconv_1x1_4_p::thread_co8_mid2_fu_7592_p3() {
    co8_mid2_fu_7592_p3 = (!exitcond_flatten4_reg_9101.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten4_reg_9101.read()[0].to_bool())? co_15_fu_7562_p2.read(): co8_phi_fu_4951_p4.read());
}

void subconv_1x1_4_p::thread_co8_phi_fu_4951_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co8_phi_fu_4951_p4 = co8_mid2_reg_9114.read();
    } else {
        co8_phi_fu_4951_p4 = co8_reg_4947.read();
    }
}

void subconv_1x1_4_p::thread_co_13_fu_5318_p2() {
    co_13_fu_5318_p2 = (!co_phi_fu_4823_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co_phi_fu_4823_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_4_p::thread_co_15_fu_7562_p2() {
    co_15_fu_7562_p2 = (!co8_phi_fu_4951_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co8_phi_fu_4951_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_4_p::thread_co_cast_mid2_fu_5338_p1() {
    co_cast_mid2_fu_5338_p1 = esl_zext<32,7>(co_cast_mid2_v_fu_5331_p3.read());
}

void subconv_1x1_4_p::thread_co_cast_mid2_v_fu_5331_p3() {
    co_cast_mid2_v_fu_5331_p3 = (!exitcond_flatten_reg_7983.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_reg_7983.read()[0].to_bool())? co_13_fu_5318_p2.read(): co_phi_fu_4823_p4.read());
}

void subconv_1x1_4_p::thread_co_phi_fu_4823_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_7974.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co_phi_fu_4823_p4 = co_cast_mid2_v_reg_7996.read();
    } else {
        co_phi_fu_4823_p4 = co_reg_4819.read();
    }
}

void subconv_1x1_4_p::thread_exitcond18_fu_5568_p2() {
    exitcond18_fu_5568_p2 = (!h1_reg_4866.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(h1_reg_4866.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond19_fu_6568_p2() {
    exitcond19_fu_6568_p2 = (!h4_reg_4901.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(h4_reg_4901.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond20_fu_5639_p2() {
    exitcond20_fu_5639_p2 = (!w2_reg_4878.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w2_reg_4878.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond21_fu_6639_p2() {
    exitcond21_fu_6639_p2 = (!w5_reg_4913.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w5_reg_4913.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond22_fu_5792_p2() {
    exitcond22_fu_5792_p2 = (!ci_reg_4890.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_4890.read() == ap_const_lv7_60);
}

void subconv_1x1_4_p::thread_exitcond23_fu_7580_p2() {
    exitcond23_fu_7580_p2 = (!w10_phi_fu_4986_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w10_phi_fu_4986_p4.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond24_fu_6792_p2() {
    exitcond24_fu_6792_p2 = (!ci6_reg_4925.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci6_reg_4925.read() == ap_const_lv7_60);
}

void subconv_1x1_4_p::thread_exitcond31_mid_fu_5354_p2() {
    exitcond31_mid_fu_5354_p2 = (exitcond_fu_5348_p2.read() & not_exitcond_flatten_fu_5343_p2.read());
}

void subconv_1x1_4_p::thread_exitcond_flatten4_fu_7542_p2() {
    exitcond_flatten4_fu_7542_p2 = (!indvar_flatten9_reg_4959.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten9_reg_4959.read() == ap_const_lv6_10);
}

void subconv_1x1_4_p::thread_exitcond_flatten7_fu_5286_p2() {
    exitcond_flatten7_fu_5286_p2 = (!indvar_flatten7_reg_4808.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten7_reg_4808.read() == ap_const_lv11_600);
}

void subconv_1x1_4_p::thread_exitcond_flatten9_fu_7530_p2() {
    exitcond_flatten9_fu_7530_p2 = (!indvar_flatten8_reg_4936.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten8_reg_4936.read() == ap_const_lv11_600);
}

void subconv_1x1_4_p::thread_exitcond_flatten_fu_5298_p2() {
    exitcond_flatten_fu_5298_p2 = (!indvar_flatten_reg_4831.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_4831.read() == ap_const_lv6_10);
}

void subconv_1x1_4_p::thread_exitcond_fu_5348_p2() {
    exitcond_fu_5348_p2 = (!w_phi_fu_4858_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w_phi_fu_4858_p4.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond_mid_fu_7586_p2() {
    exitcond_mid_fu_7586_p2 = (exitcond23_fu_7580_p2.read() & not_exitcond_flatten_6_fu_7575_p2.read());
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_4994_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_4994_a_V = weight_24_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_4994_a_V = weight_0_V_q0.read();
    } else {
        grp_MUL_DP_fu_4994_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_4994_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_4994_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_4994_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_4994_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_4994_b_V = weight_72_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_4994_b_V = weight_48_V_q0.read();
    } else {
        grp_MUL_DP_fu_4994_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5003_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5003_a_V = weight_25_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5003_a_V = weight_1_V_q0.read();
    } else {
        grp_MUL_DP_fu_5003_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5003_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5003_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5003_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5003_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5003_b_V = weight_73_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5003_b_V = weight_49_V_q0.read();
    } else {
        grp_MUL_DP_fu_5003_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5012_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5012_a_V = weight_26_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5012_a_V = weight_2_V_q0.read();
    } else {
        grp_MUL_DP_fu_5012_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5012_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5012_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5012_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5012_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5012_b_V = weight_74_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5012_b_V = weight_50_V_q0.read();
    } else {
        grp_MUL_DP_fu_5012_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5021_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5021_a_V = weight_27_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5021_a_V = weight_3_V_q0.read();
    } else {
        grp_MUL_DP_fu_5021_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5021_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5021_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5021_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5021_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5021_b_V = weight_75_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5021_b_V = weight_51_V_q0.read();
    } else {
        grp_MUL_DP_fu_5021_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5030_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5030_a_V = weight_28_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5030_a_V = weight_4_V_q0.read();
    } else {
        grp_MUL_DP_fu_5030_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5030_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5030_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5030_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5030_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5030_b_V = weight_76_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5030_b_V = weight_52_V_q0.read();
    } else {
        grp_MUL_DP_fu_5030_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5039_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5039_a_V = weight_29_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5039_a_V = weight_5_V_q0.read();
    } else {
        grp_MUL_DP_fu_5039_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5039_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5039_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5039_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5039_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5039_b_V = weight_77_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5039_b_V = weight_53_V_q0.read();
    } else {
        grp_MUL_DP_fu_5039_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5048_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5048_a_V = weight_30_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5048_a_V = weight_6_V_q0.read();
    } else {
        grp_MUL_DP_fu_5048_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5048_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5048_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5048_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5048_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5048_b_V = weight_78_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5048_b_V = weight_54_V_q0.read();
    } else {
        grp_MUL_DP_fu_5048_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5057_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5057_a_V = weight_31_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5057_a_V = weight_7_V_q0.read();
    } else {
        grp_MUL_DP_fu_5057_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5057_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5057_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5057_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5057_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5057_b_V = weight_79_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5057_b_V = weight_55_V_q0.read();
    } else {
        grp_MUL_DP_fu_5057_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5066_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5066_a_V = weight_32_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5066_a_V = weight_8_V_q0.read();
    } else {
        grp_MUL_DP_fu_5066_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5066_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5066_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5066_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5066_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5066_b_V = weight_80_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5066_b_V = weight_56_V_q0.read();
    } else {
        grp_MUL_DP_fu_5066_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5075_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5075_a_V = weight_33_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5075_a_V = weight_9_V_q0.read();
    } else {
        grp_MUL_DP_fu_5075_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5075_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5075_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5075_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5075_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5075_b_V = weight_81_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5075_b_V = weight_57_V_q0.read();
    } else {
        grp_MUL_DP_fu_5075_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5084_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5084_a_V = weight_34_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5084_a_V = weight_10_V_q0.read();
    } else {
        grp_MUL_DP_fu_5084_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5084_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5084_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5084_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5084_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5084_b_V = weight_82_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5084_b_V = weight_58_V_q0.read();
    } else {
        grp_MUL_DP_fu_5084_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5093_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5093_a_V = weight_35_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5093_a_V = weight_11_V_q0.read();
    } else {
        grp_MUL_DP_fu_5093_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5093_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5093_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5093_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5093_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5093_b_V = weight_83_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5093_b_V = weight_59_V_q0.read();
    } else {
        grp_MUL_DP_fu_5093_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5102_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5102_a_V = weight_36_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5102_a_V = weight_12_V_q0.read();
    } else {
        grp_MUL_DP_fu_5102_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5102_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5102_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5102_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5102_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5102_b_V = weight_84_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5102_b_V = weight_60_V_q0.read();
    } else {
        grp_MUL_DP_fu_5102_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5111_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5111_a_V = weight_37_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5111_a_V = weight_13_V_q0.read();
    } else {
        grp_MUL_DP_fu_5111_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5111_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5111_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5111_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5111_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5111_b_V = weight_85_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5111_b_V = weight_61_V_q0.read();
    } else {
        grp_MUL_DP_fu_5111_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5120_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5120_a_V = weight_38_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5120_a_V = weight_14_V_q0.read();
    } else {
        grp_MUL_DP_fu_5120_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5120_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5120_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5120_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5120_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5120_b_V = weight_86_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5120_b_V = weight_62_V_q0.read();
    } else {
        grp_MUL_DP_fu_5120_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5129_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5129_a_V = weight_39_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5129_a_V = weight_15_V_q0.read();
    } else {
        grp_MUL_DP_fu_5129_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5129_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5129_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5129_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5129_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5129_b_V = weight_87_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5129_b_V = weight_63_V_q0.read();
    } else {
        grp_MUL_DP_fu_5129_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5138_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5138_a_V = weight_40_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5138_a_V = weight_16_V_q0.read();
    } else {
        grp_MUL_DP_fu_5138_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5138_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5138_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5138_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5138_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5138_b_V = weight_88_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5138_b_V = weight_64_V_q0.read();
    } else {
        grp_MUL_DP_fu_5138_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5147_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5147_a_V = weight_41_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5147_a_V = weight_17_V_q0.read();
    } else {
        grp_MUL_DP_fu_5147_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5147_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5147_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5147_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5147_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5147_b_V = weight_89_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5147_b_V = weight_65_V_q0.read();
    } else {
        grp_MUL_DP_fu_5147_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5156_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5156_a_V = weight_42_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5156_a_V = weight_18_V_q0.read();
    } else {
        grp_MUL_DP_fu_5156_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5156_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5156_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5156_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5156_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5156_b_V = weight_90_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5156_b_V = weight_66_V_q0.read();
    } else {
        grp_MUL_DP_fu_5156_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5165_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5165_a_V = weight_43_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5165_a_V = weight_19_V_q0.read();
    } else {
        grp_MUL_DP_fu_5165_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5165_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5165_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5165_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5165_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5165_b_V = weight_91_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5165_b_V = weight_67_V_q0.read();
    } else {
        grp_MUL_DP_fu_5165_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5174_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5174_a_V = weight_44_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5174_a_V = weight_20_V_q0.read();
    } else {
        grp_MUL_DP_fu_5174_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5174_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5174_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5174_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5174_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5174_b_V = weight_92_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5174_b_V = weight_68_V_q0.read();
    } else {
        grp_MUL_DP_fu_5174_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5183_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5183_a_V = weight_45_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5183_a_V = weight_21_V_q0.read();
    } else {
        grp_MUL_DP_fu_5183_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5183_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5183_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5183_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5183_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5183_b_V = weight_93_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5183_b_V = weight_69_V_q0.read();
    } else {
        grp_MUL_DP_fu_5183_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5192_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5192_a_V = weight_46_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5192_a_V = weight_22_V_q0.read();
    } else {
        grp_MUL_DP_fu_5192_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5192_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5192_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5192_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5192_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5192_b_V = weight_94_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5192_b_V = weight_70_V_q0.read();
    } else {
        grp_MUL_DP_fu_5192_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5201_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5201_a_V = weight_47_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5201_a_V = weight_23_V_q0.read();
    } else {
        grp_MUL_DP_fu_5201_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5201_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        grp_MUL_DP_fu_5201_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5201_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_5201_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5201_b_V = weight_95_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5201_b_V = weight_71_V_q0.read();
    } else {
        grp_MUL_DP_fu_5201_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_h1_cast9_cast1_fu_5530_p1() {
    h1_cast9_cast1_fu_5530_p1 = esl_zext<7,3>(h1_reg_4866.read());
}

void subconv_1x1_4_p::thread_h1_cast9_cast_fu_5534_p1() {
    h1_cast9_cast_fu_5534_p1 = esl_zext<12,3>(h1_reg_4866.read());
}

void subconv_1x1_4_p::thread_h4_cast6_cast1_fu_6530_p1() {
    h4_cast6_cast1_fu_6530_p1 = esl_zext<7,3>(h4_reg_4901.read());
}

void subconv_1x1_4_p::thread_h4_cast6_cast_fu_6534_p1() {
    h4_cast6_cast_fu_6534_p1 = esl_zext<12,3>(h4_reg_4901.read());
}

void subconv_1x1_4_p::thread_h9_cast2_mid2_fu_7618_p3() {
    h9_cast2_mid2_fu_7618_p3 = (!exitcond_mid_fu_7586_p2.read()[0].is_01())? sc_lv<3>(): ((exitcond_mid_fu_7586_p2.read()[0].to_bool())? h_5_fu_7599_p2.read(): h9_mid_fu_7568_p3.read());
}

void subconv_1x1_4_p::thread_h9_mid_fu_7568_p3() {
    h9_mid_fu_7568_p3 = (!exitcond_flatten4_reg_9101.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten4_reg_9101.read()[0].to_bool())? ap_const_lv3_1: h9_phi_fu_4974_p4.read());
}

void subconv_1x1_4_p::thread_h9_phi_fu_4974_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h9_phi_fu_4974_p4 = h9_cast2_mid2_reg_9125.read();
    } else {
        h9_phi_fu_4974_p4 = h9_reg_4970.read();
    }
}

void subconv_1x1_4_p::thread_h_17_fu_5360_p2() {
    h_17_fu_5360_p2 = (!h_mid_fu_5324_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h_mid_fu_5324_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_h_4_fu_5645_p2() {
    h_4_fu_5645_p2 = (!h1_reg_4866.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h1_reg_4866.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_h_5_fu_7599_p2() {
    h_5_fu_7599_p2 = (!h9_mid_fu_7568_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h9_mid_fu_7568_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_h_6_fu_6645_p2() {
    h_6_fu_6645_p2 = (!h4_reg_4901.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h4_reg_4901.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_h_cast_mid2_fu_5379_p3() {
    h_cast_mid2_fu_5379_p3 = (!exitcond31_mid_fu_5354_p2.read()[0].is_01())? sc_lv<3>(): ((exitcond31_mid_fu_5354_p2.read()[0].to_bool())? h_17_fu_5360_p2.read(): h_mid_fu_5324_p3.read());
}

void subconv_1x1_4_p::thread_h_mid_fu_5324_p3() {
    h_mid_fu_5324_p3 = (!exitcond_flatten_reg_7983.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_7983.read()[0].to_bool())? ap_const_lv3_1: h_phi_fu_4846_p4.read());
}

void subconv_1x1_4_p::thread_h_phi_fu_4846_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_7974.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h_phi_fu_4846_p4 = h_cast_mid2_reg_8006.read();
    } else {
        h_phi_fu_4846_p4 = h_reg_4842.read();
    }
}

void subconv_1x1_4_p::thread_indvar_flatten21_op_fu_7548_p2() {
    indvar_flatten21_op_fu_7548_p2 = (!indvar_flatten9_reg_4959.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar_flatten9_reg_4959.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_4_p::thread_indvar_flatten_next7_fu_5292_p2() {
    indvar_flatten_next7_fu_5292_p2 = (!indvar_flatten7_reg_4808.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(indvar_flatten7_reg_4808.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void subconv_1x1_4_p::thread_indvar_flatten_next8_fu_7554_p3() {
    indvar_flatten_next8_fu_7554_p3 = (!exitcond_flatten4_fu_7542_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten4_fu_7542_p2.read()[0].to_bool())? ap_const_lv6_1: indvar_flatten21_op_fu_7548_p2.read());
}

void subconv_1x1_4_p::thread_indvar_flatten_next9_fu_7536_p2() {
    indvar_flatten_next9_fu_7536_p2 = (!indvar_flatten8_reg_4936.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(indvar_flatten8_reg_4936.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void subconv_1x1_4_p::thread_indvar_flatten_next_fu_5310_p3() {
    indvar_flatten_next_fu_5310_p3 = (!exitcond_flatten_fu_5298_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten_fu_5298_p2.read()[0].to_bool())? ap_const_lv6_1: indvar_flatten_op_fu_5304_p2.read());
}

void subconv_1x1_4_p::thread_indvar_flatten_op_fu_5304_p2() {
    indvar_flatten_op_fu_5304_p2 = (!indvar_flatten_reg_4831.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar_flatten_reg_4831.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_4_p::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        input_V_address0 = input_V_addr_4_reg_8834.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        input_V_address0 = input_V_addr_reg_8299.read();
    } else {
        input_V_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_input_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_not_exitcond_flatten_6_fu_7575_p2() {
    not_exitcond_flatten_6_fu_7575_p2 = (exitcond_flatten4_reg_9101.read() ^ ap_const_lv1_1);
}

void subconv_1x1_4_p::thread_not_exitcond_flatten_fu_5343_p2() {
    not_exitcond_flatten_fu_5343_p2 = (exitcond_flatten_reg_7983.read() ^ ap_const_lv1_1);
}

void subconv_1x1_4_p::thread_p_shl10_cast_fu_6722_p3() {
    p_shl10_cast_fu_6722_p3 = esl_concat<10,3>(tmp_328_fu_6718_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_p_shl11_cast_fu_6730_p3() {
    p_shl11_cast_fu_6730_p3 = esl_concat<12,1>(tmp_242_fu_6713_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_p_shl12_cast_fu_6687_p1() {
    p_shl12_cast_fu_6687_p1 = esl_zext<11,10>(tmp_239_fu_6679_p3.read());
}

void subconv_1x1_4_p::thread_p_shl13_cast_fu_6699_p1() {
    p_shl13_cast_fu_6699_p1 = esl_zext<11,8>(tmp_240_fu_6691_p3.read());
}

void subconv_1x1_4_p::thread_p_shl14_cast_fu_7639_p1() {
    p_shl14_cast_fu_7639_p1 = esl_zext<7,6>(tmp_269_fu_7632_p3.read());
}

void subconv_1x1_4_p::thread_p_shl15_cast_fu_7650_p1() {
    p_shl15_cast_fu_7650_p1 = esl_zext<7,4>(tmp_270_fu_7643_p3.read());
}

void subconv_1x1_4_p::thread_p_shl1_cast_fu_5411_p1() {
    p_shl1_cast_fu_5411_p1 = esl_zext<7,4>(tmp_267_fu_5404_p3.read());
}

void subconv_1x1_4_p::thread_p_shl2_cast_fu_5546_p1() {
    p_shl2_cast_fu_5546_p1 = esl_zext<7,6>(tmp_220_fu_5538_p3.read());
}

void subconv_1x1_4_p::thread_p_shl3_cast_fu_5558_p1() {
    p_shl3_cast_fu_5558_p1 = esl_zext<7,4>(tmp_221_fu_5550_p3.read());
}

void subconv_1x1_4_p::thread_p_shl4_cast_fu_5722_p3() {
    p_shl4_cast_fu_5722_p3 = esl_concat<10,3>(tmp_268_fu_5718_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_p_shl5_cast_fu_5730_p3() {
    p_shl5_cast_fu_5730_p3 = esl_concat<12,1>(tmp_231_fu_5713_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_p_shl6_cast_fu_5687_p1() {
    p_shl6_cast_fu_5687_p1 = esl_zext<11,10>(tmp_228_fu_5679_p3.read());
}

void subconv_1x1_4_p::thread_p_shl7_cast_fu_5699_p1() {
    p_shl7_cast_fu_5699_p1 = esl_zext<11,8>(tmp_229_fu_5691_p3.read());
}

void subconv_1x1_4_p::thread_p_shl8_cast_fu_6546_p1() {
    p_shl8_cast_fu_6546_p1 = esl_zext<7,6>(tmp_223_fu_6538_p3.read());
}

void subconv_1x1_4_p::thread_p_shl9_cast_fu_6558_p1() {
    p_shl9_cast_fu_6558_p1 = esl_zext<7,4>(tmp_224_fu_6550_p3.read());
}

void subconv_1x1_4_p::thread_p_shl_cast_fu_5400_p1() {
    p_shl_cast_fu_5400_p1 = esl_zext<7,6>(tmp_266_fu_5393_p3.read());
}

void subconv_1x1_4_p::thread_tmp_218_fu_5415_p2() {
    tmp_218_fu_5415_p2 = (!p_shl_cast_fu_5400_p1.read().is_01() || !p_shl1_cast_fu_5411_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl_cast_fu_5400_p1.read()) - sc_biguint<7>(p_shl1_cast_fu_5411_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_219_fu_5424_p2() {
    tmp_219_fu_5424_p2 = (!w_cast_cast_fu_5421_p1.read().is_01() || !tmp_218_fu_5415_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w_cast_cast_fu_5421_p1.read()) + sc_biguint<7>(tmp_218_fu_5415_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_220_fu_5538_p3() {
    tmp_220_fu_5538_p3 = esl_concat<3,3>(h1_reg_4866.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_221_fu_5550_p3() {
    tmp_221_fu_5550_p3 = esl_concat<3,1>(h1_reg_4866.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_222_fu_5562_p2() {
    tmp_222_fu_5562_p2 = (!p_shl2_cast_fu_5546_p1.read().is_01() || !p_shl3_cast_fu_5558_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl2_cast_fu_5546_p1.read()) - sc_biguint<7>(p_shl3_cast_fu_5558_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_223_fu_6538_p3() {
    tmp_223_fu_6538_p3 = esl_concat<3,3>(h4_reg_4901.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_224_fu_6550_p3() {
    tmp_224_fu_6550_p3 = esl_concat<3,1>(h4_reg_4901.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_225_fu_6562_p2() {
    tmp_225_fu_6562_p2 = (!p_shl8_cast_fu_6546_p1.read().is_01() || !p_shl9_cast_fu_6558_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl8_cast_fu_6546_p1.read()) - sc_biguint<7>(p_shl9_cast_fu_6558_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_226_fu_5582_p2() {
    tmp_226_fu_5582_p2 = (!tmp_222_reg_8033.read().is_01() || !w2_cast8_cast_fu_5578_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_222_reg_8033.read()) + sc_biguint<7>(w2_cast8_cast_fu_5578_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_227_fu_6582_p2() {
    tmp_227_fu_6582_p2 = (!tmp_225_reg_8567.read().is_01() || !w5_cast5_cast_fu_6578_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_225_reg_8567.read()) + sc_biguint<7>(w5_cast5_cast_fu_6578_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_228_fu_5679_p3() {
    tmp_228_fu_5679_p3 = esl_concat<7,3>(ci_reg_4890.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_229_fu_5691_p3() {
    tmp_229_fu_5691_p3 = esl_concat<7,1>(ci_reg_4890.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_230_fu_5703_p2() {
    tmp_230_fu_5703_p2 = (!p_shl6_cast_fu_5687_p1.read().is_01() || !p_shl7_cast_fu_5699_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl6_cast_fu_5687_p1.read()) - sc_biguint<11>(p_shl7_cast_fu_5699_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_231_fu_5713_p2() {
    tmp_231_fu_5713_p2 = (!h1_cast9_cast_reg_8028.read().is_01() || !tmp_282_cast_fu_5709_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h1_cast9_cast_reg_8028.read()) + sc_bigint<12>(tmp_282_cast_fu_5709_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_232_fu_5738_p2() {
    tmp_232_fu_5738_p2 = (!p_shl4_cast_fu_5722_p3.read().is_01() || !p_shl5_cast_fu_5730_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl4_cast_fu_5722_p3.read()) - sc_biguint<13>(p_shl5_cast_fu_5730_p3.read()));
}

void subconv_1x1_4_p::thread_tmp_233_fu_5744_p2() {
    tmp_233_fu_5744_p2 = (!w2_cast8_cast1_reg_8041.read().is_01() || !tmp_232_fu_5738_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w2_cast8_cast1_reg_8041.read()) + sc_biguint<13>(tmp_232_fu_5738_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_234_fu_5754_p2() {
    tmp_234_fu_5754_p2 = (!h1_cast9_cast1_reg_8023.read().is_01() || !ci_reg_4890.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h1_cast9_cast1_reg_8023.read()) + sc_biguint<7>(ci_reg_4890.read()));
}

void subconv_1x1_4_p::thread_tmp_235_fu_5759_p2() {
    tmp_235_fu_5759_p2 = (!w2_cast8_cast_reg_8046.read().is_01() || !tmp_234_fu_5754_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w2_cast8_cast_reg_8046.read()) + sc_biguint<7>(tmp_234_fu_5754_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_236_fu_7605_p2() {
    tmp_236_fu_7605_p2 = (exitcond_mid_fu_7586_p2.read() | exitcond_flatten4_reg_9101.read());
}

void subconv_1x1_4_p::thread_tmp_237_fu_7654_p2() {
    tmp_237_fu_7654_p2 = (!p_shl14_cast_fu_7639_p1.read().is_01() || !p_shl15_cast_fu_7650_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl14_cast_fu_7639_p1.read()) - sc_biguint<7>(p_shl15_cast_fu_7650_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_238_fu_7663_p2() {
    tmp_238_fu_7663_p2 = (!w10_cast1_cast_fu_7660_p1.read().is_01() || !tmp_237_fu_7654_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w10_cast1_cast_fu_7660_p1.read()) + sc_biguint<7>(tmp_237_fu_7654_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_239_fu_6679_p3() {
    tmp_239_fu_6679_p3 = esl_concat<7,3>(ci6_reg_4925.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_23_fu_5822_p2() {
    tmp_23_fu_5822_p2 = (!buffer1_1_96_4x4_p_V_96_q0.read().is_01() || !tmp_272_fu_5818_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_96_q0.read()) + sc_biguint<8>(tmp_272_fu_5818_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_240_fu_6691_p3() {
    tmp_240_fu_6691_p3 = esl_concat<7,1>(ci6_reg_4925.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_241_fu_6703_p2() {
    tmp_241_fu_6703_p2 = (!p_shl12_cast_fu_6687_p1.read().is_01() || !p_shl13_cast_fu_6699_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl12_cast_fu_6687_p1.read()) - sc_biguint<11>(p_shl13_cast_fu_6699_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_242_fu_6713_p2() {
    tmp_242_fu_6713_p2 = (!h4_cast6_cast_reg_8562.read().is_01() || !tmp_297_cast_fu_6709_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h4_cast6_cast_reg_8562.read()) + sc_bigint<12>(tmp_297_cast_fu_6709_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_243_fu_6738_p2() {
    tmp_243_fu_6738_p2 = (!p_shl10_cast_fu_6722_p3.read().is_01() || !p_shl11_cast_fu_6730_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl10_cast_fu_6722_p3.read()) - sc_biguint<13>(p_shl11_cast_fu_6730_p3.read()));
}

void subconv_1x1_4_p::thread_tmp_244_fu_6744_p2() {
    tmp_244_fu_6744_p2 = (!w5_cast5_cast1_reg_8576.read().is_01() || !tmp_243_fu_6738_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w5_cast5_cast1_reg_8576.read()) + sc_biguint<13>(tmp_243_fu_6738_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_245_fu_6754_p2() {
    tmp_245_fu_6754_p2 = (!h4_cast6_cast1_reg_8557.read().is_01() || !ci6_reg_4925.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h4_cast6_cast1_reg_8557.read()) + sc_biguint<7>(ci6_reg_4925.read()));
}

void subconv_1x1_4_p::thread_tmp_246_fu_6759_p2() {
    tmp_246_fu_6759_p2 = (!w5_cast5_cast_reg_8581.read().is_01() || !tmp_245_fu_6754_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w5_cast5_cast_reg_8581.read()) + sc_biguint<7>(tmp_245_fu_6754_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_25_fu_5833_p2() {
    tmp_25_fu_5833_p2 = (!buffer1_1_96_4x4_p_V_48_q0.read().is_01() || !tmp_273_fu_5829_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_48_q0.read()) + sc_biguint<8>(tmp_273_fu_5829_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_266_fu_5393_p3() {
    tmp_266_fu_5393_p3 = esl_concat<3,3>(h_cast_mid2_reg_8006.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_267_fu_5404_p3() {
    tmp_267_fu_5404_p3 = esl_concat<3,1>(h_cast_mid2_reg_8006.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_268_fu_5718_p1() {
    tmp_268_fu_5718_p1 = tmp_231_fu_5713_p2.read().range(10-1, 0);
}

void subconv_1x1_4_p::thread_tmp_269_fu_7632_p3() {
    tmp_269_fu_7632_p3 = esl_concat<3,3>(h9_cast2_mid2_reg_9125.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_270_fu_7643_p3() {
    tmp_270_fu_7643_p3 = esl_concat<3,1>(h9_cast2_mid2_reg_9125.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_271_cast_fu_5430_p1() {
    tmp_271_cast_fu_5430_p1 = esl_zext<32,7>(tmp_219_fu_5424_p2.read());
}

void subconv_1x1_4_p::thread_tmp_271_fu_7966_p3() {
    tmp_271_fu_7966_p3 = tmp_30_fu_7769_p98.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_272_fu_5818_p1() {
    tmp_272_fu_5818_p1 = grp_MUL_DP_fu_4994_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_273_fu_5829_p1() {
    tmp_273_fu_5829_p1 = grp_MUL_DP_fu_4994_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_274_fu_5848_p1() {
    tmp_274_fu_5848_p1 = grp_MUL_DP_fu_5003_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_275_fu_5859_p1() {
    tmp_275_fu_5859_p1 = grp_MUL_DP_fu_5003_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_276_fu_5878_p1() {
    tmp_276_fu_5878_p1 = grp_MUL_DP_fu_5012_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_277_fu_5889_p1() {
    tmp_277_fu_5889_p1 = grp_MUL_DP_fu_5012_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_278_cast_fu_5587_p1() {
    tmp_278_cast_fu_5587_p1 = esl_sext<32,7>(tmp_226_fu_5582_p2.read());
}

void subconv_1x1_4_p::thread_tmp_278_fu_5908_p1() {
    tmp_278_fu_5908_p1 = grp_MUL_DP_fu_5021_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_279_cast_fu_6587_p1() {
    tmp_279_cast_fu_6587_p1 = esl_sext<32,7>(tmp_227_fu_6582_p2.read());
}

void subconv_1x1_4_p::thread_tmp_279_fu_5919_p1() {
    tmp_279_fu_5919_p1 = grp_MUL_DP_fu_5021_ap_return_1.read().range(8-1, 0);
}

}

