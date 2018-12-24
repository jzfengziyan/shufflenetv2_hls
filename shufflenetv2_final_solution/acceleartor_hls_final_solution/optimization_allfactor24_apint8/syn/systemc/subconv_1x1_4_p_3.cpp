#include "subconv_1x1_4_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_4_p::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[27];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[2];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[3];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[4];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[5];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[6];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[7];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[8];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[9];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[10];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[11];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[12];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[13];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[14];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[15];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[16];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[17];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[18];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[19];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[20];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[21];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[22];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[23];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[24];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[25];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[26];
}

void subconv_1x1_4_p::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[28];
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

void subconv_1x1_4_p::thread_ap_block_state10_pp0_stage0_iter8() {
    ap_block_state10_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state12_pp0_stage0_iter10() {
    ap_block_state12_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state13_pp0_stage0_iter11() {
    ap_block_state13_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state39_pp1_stage0_iter0() {
    ap_block_state39_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state40_pp1_stage0_iter1() {
    ap_block_state40_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state41_pp1_stage0_iter2() {
    ap_block_state41_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state42_pp1_stage0_iter3() {
    ap_block_state42_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state43_pp1_stage0_iter4() {
    ap_block_state43_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state44_pp1_stage0_iter5() {
    ap_block_state44_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state45_pp1_stage0_iter6() {
    ap_block_state45_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state46_pp1_stage0_iter7() {
    ap_block_state46_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state47_pp1_stage0_iter8() {
    ap_block_state47_pp1_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state48_pp1_stage0_iter9() {
    ap_block_state48_pp1_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state49_pp1_stage0_iter10() {
    ap_block_state49_pp1_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state50_pp1_stage0_iter11() {
    ap_block_state50_pp1_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_4_p::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten7_fu_3225_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_condition_pp1_exit_iter0_state39() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_5461_p2.read())) {
        ap_condition_pp1_exit_iter0_state39 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state39 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter11.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter11.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_arrayNo_cast3_mid2_v_2_fu_5485_p3() {
    arrayNo_cast3_mid2_v_2_fu_5485_p3 = (!exitcond_flatten4_fu_5479_p2.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten4_fu_5479_p2.read()[0].to_bool())? co_15_fu_5473_p2.read(): co8_phi_fu_2603_p4.read());
}

void subconv_1x1_4_p::thread_bias_V_address0() {
    bias_V_address0 =  (sc_lv<7>) (co_cast_mid2_fu_3352_p1.read());
}

void subconv_1x1_4_p::thread_bias_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        bias_V_ce0 = ap_const_logic_1;
    } else {
        bias_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 = buffer1_1_96_4x4_p_V_186_reg_6746.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 = buffer1_1_96_4x4_p_V_185_reg_6741.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 = buffer1_1_96_4x4_p_V_90_reg_5966.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 = buffer1_1_96_4x4_p_V_89_reg_5961.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_10_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_10_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_address1() {
    buffer1_1_96_4x4_p_V_10_address1 = buffer1_1_96_4x4_p_V_272_reg_7506.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_10_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_10_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_10_d0 = tmp_51_s_reg_7327.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_10_d0 = tmp_49_s_fu_4947_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_10_d0 = tmp_45_s_reg_6547.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_10_d0 = tmp_43_s_fu_3946_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_10_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_10_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_d1() {
    buffer1_1_96_4x4_p_V_10_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_A)))) {
        buffer1_1_96_4x4_p_V_10_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_A))) {
        buffer1_1_96_4x4_p_V_10_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_10_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 = buffer1_1_96_4x4_p_V_178_reg_6706.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 = buffer1_1_96_4x4_p_V_177_reg_6701.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 = buffer1_1_96_4x4_p_V_82_reg_5926.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 = buffer1_1_96_4x4_p_V_81_reg_5921.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_11_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_11_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_address1() {
    buffer1_1_96_4x4_p_V_11_address1 = buffer1_1_96_4x4_p_V_268_reg_7482.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_11_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_11_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_11_d0 = tmp_51_10_reg_7332.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_11_d0 = tmp_49_10_fu_4962_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_11_d0 = tmp_45_10_reg_6552.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_11_d0 = tmp_43_10_fu_3961_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_11_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_11_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_d1() {
    buffer1_1_96_4x4_p_V_11_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_B)))) {
        buffer1_1_96_4x4_p_V_11_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_B))) {
        buffer1_1_96_4x4_p_V_11_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_11_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 = buffer1_1_96_4x4_p_V_182_reg_6726.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 = buffer1_1_96_4x4_p_V_181_reg_6721.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 = buffer1_1_96_4x4_p_V_86_reg_5946.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 = buffer1_1_96_4x4_p_V_85_reg_5941.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_12_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_12_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_address1() {
    buffer1_1_96_4x4_p_V_12_address1 = buffer1_1_96_4x4_p_V_270_reg_7494.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_12_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_12_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_12_d0 = tmp_51_11_reg_7337.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_12_d0 = tmp_49_11_fu_4977_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_12_d0 = tmp_45_11_reg_6557.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_12_d0 = tmp_43_11_fu_3976_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_12_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_12_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_d1() {
    buffer1_1_96_4x4_p_V_12_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_C)))) {
        buffer1_1_96_4x4_p_V_12_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_C))) {
        buffer1_1_96_4x4_p_V_12_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_12_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 = buffer1_1_96_4x4_p_V_198_reg_6806.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 = buffer1_1_96_4x4_p_V_197_reg_6801.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 = buffer1_1_96_4x4_p_V_102_reg_6026.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 = buffer1_1_96_4x4_p_V_101_reg_6021.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_13_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_13_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_address1() {
    buffer1_1_96_4x4_p_V_13_address1 = buffer1_1_96_4x4_p_V_278_reg_7542.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_13_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_13_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_13_d0 = tmp_51_12_reg_7342.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_13_d0 = tmp_49_12_fu_4992_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_13_d0 = tmp_45_12_reg_6562.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_13_d0 = tmp_43_12_fu_3991_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_13_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_13_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_d1() {
    buffer1_1_96_4x4_p_V_13_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_D)))) {
        buffer1_1_96_4x4_p_V_13_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_D))) {
        buffer1_1_96_4x4_p_V_13_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_13_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 = buffer1_1_96_4x4_p_V_170_reg_6666.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 = buffer1_1_96_4x4_p_V_169_reg_6661.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 = buffer1_1_96_4x4_p_V_74_reg_5886.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 = buffer1_1_96_4x4_p_V_73_reg_5881.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_14_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_14_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_address1() {
    buffer1_1_96_4x4_p_V_14_address1 = buffer1_1_96_4x4_p_V_264_reg_7458.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_14_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_14_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_14_d0 = tmp_51_13_reg_7347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_14_d0 = tmp_49_13_fu_5007_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_14_d0 = tmp_45_13_reg_6567.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_14_d0 = tmp_43_13_fu_4006_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_14_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_14_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_d1() {
    buffer1_1_96_4x4_p_V_14_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_E)))) {
        buffer1_1_96_4x4_p_V_14_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_E))) {
        buffer1_1_96_4x4_p_V_14_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_14_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 = buffer1_1_96_4x4_p_V_168_reg_6656.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 = buffer1_1_96_4x4_p_V_167_reg_6651.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 = buffer1_1_96_4x4_p_V_72_reg_5876.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 = buffer1_1_96_4x4_p_V_71_reg_5871.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_15_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_15_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_address1() {
    buffer1_1_96_4x4_p_V_15_address1 = buffer1_1_96_4x4_p_V_263_reg_7452.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_15_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_15_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_15_d0 = tmp_51_14_reg_7352.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_15_d0 = tmp_49_14_fu_5022_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_15_d0 = tmp_45_14_reg_6572.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_15_d0 = tmp_43_14_fu_4021_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_15_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_15_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_d1() {
    buffer1_1_96_4x4_p_V_15_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_F)))) {
        buffer1_1_96_4x4_p_V_15_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_F))) {
        buffer1_1_96_4x4_p_V_15_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_15_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 = buffer1_1_96_4x4_p_V_184_reg_6736.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 = buffer1_1_96_4x4_p_V_183_reg_6731.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 = buffer1_1_96_4x4_p_V_88_reg_5956.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 = buffer1_1_96_4x4_p_V_87_reg_5951.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_16_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_16_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_address1() {
    buffer1_1_96_4x4_p_V_16_address1 = buffer1_1_96_4x4_p_V_271_reg_7500.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_16_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_16_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_16_d0 = tmp_51_15_reg_7357.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_16_d0 = tmp_49_15_fu_5037_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_16_d0 = tmp_45_15_reg_6577.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_16_d0 = tmp_43_15_fu_4036_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_16_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_16_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_d1() {
    buffer1_1_96_4x4_p_V_16_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_10)))) {
        buffer1_1_96_4x4_p_V_16_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_16_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_10))) {
        buffer1_1_96_4x4_p_V_16_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_16_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 = buffer1_1_96_4x4_p_V_172_reg_6676.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 = buffer1_1_96_4x4_p_V_171_reg_6671.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 = buffer1_1_96_4x4_p_V_76_reg_5896.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 = buffer1_1_96_4x4_p_V_75_reg_5891.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_17_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_17_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_address1() {
    buffer1_1_96_4x4_p_V_17_address1 = buffer1_1_96_4x4_p_V_265_reg_7464.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_17_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_17_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_17_d0 = tmp_51_16_reg_7362.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_17_d0 = tmp_49_16_fu_5052_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_17_d0 = tmp_45_16_reg_6582.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_17_d0 = tmp_43_16_fu_4051_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_17_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_17_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_d1() {
    buffer1_1_96_4x4_p_V_17_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_11)))) {
        buffer1_1_96_4x4_p_V_17_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_17_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_11))) {
        buffer1_1_96_4x4_p_V_17_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_17_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 = buffer1_1_96_4x4_p_V_174_reg_6686.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 = buffer1_1_96_4x4_p_V_173_reg_6681.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 = buffer1_1_96_4x4_p_V_78_reg_5906.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 = buffer1_1_96_4x4_p_V_77_reg_5901.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_18_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_18_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_address1() {
    buffer1_1_96_4x4_p_V_18_address1 = buffer1_1_96_4x4_p_V_266_reg_7470.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_18_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_18_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_18_d0 = tmp_51_17_reg_7367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_18_d0 = tmp_49_17_fu_5067_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_18_d0 = tmp_45_17_reg_6587.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_18_d0 = tmp_43_17_fu_4066_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_18_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_18_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_d1() {
    buffer1_1_96_4x4_p_V_18_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_12)))) {
        buffer1_1_96_4x4_p_V_18_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_18_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_12))) {
        buffer1_1_96_4x4_p_V_18_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_18_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = buffer1_1_96_4x4_p_V_196_reg_6796.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = buffer1_1_96_4x4_p_V_195_reg_6791.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = buffer1_1_96_4x4_p_V_100_reg_6016.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 = buffer1_1_96_4x4_p_V_99_reg_6011.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_19_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_19_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_address1() {
    buffer1_1_96_4x4_p_V_19_address1 = buffer1_1_96_4x4_p_V_277_reg_7536.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_19_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_19_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_19_d0 = tmp_51_18_reg_7372.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_19_d0 = tmp_49_18_fu_5082_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_19_d0 = tmp_45_18_reg_6592.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_19_d0 = tmp_43_18_fu_4081_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_19_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_19_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_d1() {
    buffer1_1_96_4x4_p_V_19_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_13)))) {
        buffer1_1_96_4x4_p_V_19_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_19_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_13))) {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_19_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = buffer1_1_96_4x4_p_V_176_reg_6696.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = buffer1_1_96_4x4_p_V_175_reg_6691.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = buffer1_1_96_4x4_p_V_80_reg_5916.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 = buffer1_1_96_4x4_p_V_79_reg_5911.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_1_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_1_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_address1() {
    buffer1_1_96_4x4_p_V_1_address1 = buffer1_1_96_4x4_p_V_267_reg_7476.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_1_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_1_d0 = tmp_51_1_reg_7282.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_1_d0 = tmp_49_1_fu_4812_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_1_d0 = tmp_45_1_reg_6502.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_1_d0 = tmp_43_1_fu_3811_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_1_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_1_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_d1() {
    buffer1_1_96_4x4_p_V_1_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_1)))) {
        buffer1_1_96_4x4_p_V_1_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_1))) {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_1_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = buffer1_1_96_4x4_p_V_208_reg_6856.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = buffer1_1_96_4x4_p_V_207_reg_6851.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = buffer1_1_96_4x4_p_V_112_reg_6076.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 = buffer1_1_96_4x4_p_V_111_reg_6071.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_20_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_20_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_address1() {
    buffer1_1_96_4x4_p_V_20_address1 = buffer1_1_96_4x4_p_V_283_reg_7572.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_20_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_20_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_20_d0 = tmp_51_19_reg_7377.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_20_d0 = tmp_49_19_fu_5097_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_20_d0 = tmp_45_19_reg_6597.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_20_d0 = tmp_43_19_fu_4096_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_20_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_20_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_d1() {
    buffer1_1_96_4x4_p_V_20_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_14)))) {
        buffer1_1_96_4x4_p_V_20_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_20_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_14))) {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_20_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = buffer1_1_96_4x4_p_V_210_reg_6866.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = buffer1_1_96_4x4_p_V_209_reg_6861.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = buffer1_1_96_4x4_p_V_114_reg_6086.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 = buffer1_1_96_4x4_p_V_113_reg_6081.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_21_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_21_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_address1() {
    buffer1_1_96_4x4_p_V_21_address1 = buffer1_1_96_4x4_p_V_284_reg_7578.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_21_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_21_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_21_d0 = tmp_51_20_reg_7382.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_21_d0 = tmp_49_20_fu_5112_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_21_d0 = tmp_45_20_reg_6602.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_21_d0 = tmp_43_20_fu_4111_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_21_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_21_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_d1() {
    buffer1_1_96_4x4_p_V_21_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_15)))) {
        buffer1_1_96_4x4_p_V_21_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_21_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_15))) {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_21_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = buffer1_1_96_4x4_p_V_202_reg_6826.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = buffer1_1_96_4x4_p_V_201_reg_6821.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = buffer1_1_96_4x4_p_V_106_reg_6046.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 = buffer1_1_96_4x4_p_V_105_reg_6041.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_22_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_22_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_address1() {
    buffer1_1_96_4x4_p_V_22_address1 = buffer1_1_96_4x4_p_V_280_reg_7554.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_22_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_22_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_22_d0 = tmp_51_21_reg_7387.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_22_d0 = tmp_49_21_fu_5127_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_22_d0 = tmp_45_21_reg_6607.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_22_d0 = tmp_43_21_fu_4126_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_22_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_22_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_d1() {
    buffer1_1_96_4x4_p_V_22_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_16)))) {
        buffer1_1_96_4x4_p_V_22_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_22_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(ap_const_lv6_16, tmp_389_fu_5707_p1.read()))) {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_22_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = buffer1_1_96_4x4_p_V_212_reg_6876.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = buffer1_1_96_4x4_p_V_211_reg_6871.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = buffer1_1_96_4x4_p_V_116_reg_6096.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 = buffer1_1_96_4x4_p_V_115_reg_6091.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_23_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_23_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_address1() {
    buffer1_1_96_4x4_p_V_23_address1 = buffer1_1_96_4x4_p_V_285_reg_7584.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_23_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_23_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_23_d0 = tmp_51_22_reg_7392.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_23_d0 = tmp_49_22_fu_5142_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_23_d0 = tmp_45_22_reg_6612.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_23_d0 = tmp_43_22_fu_4141_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_23_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_23_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_d1() {
    buffer1_1_96_4x4_p_V_23_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_366_fu_3444_p1.read()) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_16)))) {
        buffer1_1_96_4x4_p_V_23_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_23_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         !esl_seteq<1,6,6>(ap_const_lv6_0, tmp_389_fu_5707_p1.read()) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_389_fu_5707_p1.read()))) {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_23_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = buffer1_1_96_4x4_p_V_180_reg_6716.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = buffer1_1_96_4x4_p_V_179_reg_6711.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = buffer1_1_96_4x4_p_V_84_reg_5936.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 = buffer1_1_96_4x4_p_V_83_reg_5931.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_24_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_24_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_address1() {
    buffer1_1_96_4x4_p_V_24_address1 = buffer1_1_96_4x4_p_V_269_reg_7488.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_24_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_24_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_24_d0 = tmp_29_reg_7277.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_24_d0 = tmp_27_fu_4797_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_24_d0 = tmp_25_reg_6497.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_24_d0 = tmp_23_fu_3796_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_24_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_24_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_d1() {
    buffer1_1_96_4x4_p_V_24_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, tmp_366_fu_3444_p1.read())))) {
        buffer1_1_96_4x4_p_V_24_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_24_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(ap_const_lv6_0, tmp_389_fu_5707_p1.read()))) {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_24_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = buffer1_1_96_4x4_p_V_194_reg_6786.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = buffer1_1_96_4x4_p_V_193_reg_6781.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = buffer1_1_96_4x4_p_V_98_reg_6006.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 = buffer1_1_96_4x4_p_V_97_reg_6001.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_2_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_2_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_address1() {
    buffer1_1_96_4x4_p_V_2_address1 = buffer1_1_96_4x4_p_V_276_reg_7530.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_2_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_2_d0 = tmp_51_2_reg_7287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_2_d0 = tmp_49_2_fu_4827_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_2_d0 = tmp_45_2_reg_6507.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_2_d0 = tmp_43_2_fu_3826_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_2_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_2_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_d1() {
    buffer1_1_96_4x4_p_V_2_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_2)))) {
        buffer1_1_96_4x4_p_V_2_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_2))) {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_2_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = buffer1_1_96_4x4_p_V_200_reg_6816.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = buffer1_1_96_4x4_p_V_199_reg_6811.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = buffer1_1_96_4x4_p_V_104_reg_6036.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 = buffer1_1_96_4x4_p_V_103_reg_6031.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_3_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_3_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_address1() {
    buffer1_1_96_4x4_p_V_3_address1 = buffer1_1_96_4x4_p_V_279_reg_7548.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_3_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_3_d0 = tmp_51_3_reg_7292.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_3_d0 = tmp_49_3_fu_4842_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_3_d0 = tmp_45_3_reg_6512.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_3_d0 = tmp_43_3_fu_3841_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_3_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_3_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_d1() {
    buffer1_1_96_4x4_p_V_3_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_3)))) {
        buffer1_1_96_4x4_p_V_3_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_3))) {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_3_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = buffer1_1_96_4x4_p_V_190_reg_6766.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = buffer1_1_96_4x4_p_V_189_reg_6761.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = buffer1_1_96_4x4_p_V_94_reg_5986.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 = buffer1_1_96_4x4_p_V_93_reg_5981.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_4_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_4_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_address1() {
    buffer1_1_96_4x4_p_V_4_address1 = buffer1_1_96_4x4_p_V_274_reg_7518.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_4_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_4_d0 = tmp_51_4_reg_7297.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_4_d0 = tmp_49_4_fu_4857_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_4_d0 = tmp_45_4_reg_6517.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_4_d0 = tmp_43_4_fu_3856_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_4_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_4_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_d1() {
    buffer1_1_96_4x4_p_V_4_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_4)))) {
        buffer1_1_96_4x4_p_V_4_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_4))) {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_4_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = buffer1_1_96_4x4_p_V_188_reg_6756.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = buffer1_1_96_4x4_p_V_187_reg_6751.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = buffer1_1_96_4x4_p_V_92_reg_5976.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 = buffer1_1_96_4x4_p_V_91_reg_5971.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_5_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_5_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_address1() {
    buffer1_1_96_4x4_p_V_5_address1 = buffer1_1_96_4x4_p_V_273_reg_7512.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_5_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_5_d0 = tmp_51_5_reg_7302.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_5_d0 = tmp_49_5_fu_4872_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_5_d0 = tmp_45_5_reg_6522.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_5_d0 = tmp_43_5_fu_3871_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_5_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_5_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_d1() {
    buffer1_1_96_4x4_p_V_5_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_5)))) {
        buffer1_1_96_4x4_p_V_5_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_5))) {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_5_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = buffer1_1_96_4x4_p_V_204_reg_6836.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = buffer1_1_96_4x4_p_V_203_reg_6831.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = buffer1_1_96_4x4_p_V_108_reg_6056.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 = buffer1_1_96_4x4_p_V_107_reg_6051.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_6_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_6_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_address1() {
    buffer1_1_96_4x4_p_V_6_address1 = buffer1_1_96_4x4_p_V_281_reg_7560.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_6_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_6_d0 = tmp_51_6_reg_7307.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_6_d0 = tmp_49_6_fu_4887_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_6_d0 = tmp_45_6_reg_6527.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_6_d0 = tmp_43_6_fu_3886_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_6_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_6_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_d1() {
    buffer1_1_96_4x4_p_V_6_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_6)))) {
        buffer1_1_96_4x4_p_V_6_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_6))) {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_6_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = buffer1_1_96_4x4_p_V_206_reg_6846.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = buffer1_1_96_4x4_p_V_205_reg_6841.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = buffer1_1_96_4x4_p_V_110_reg_6066.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 = buffer1_1_96_4x4_p_V_109_reg_6061.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_7_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_7_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_address1() {
    buffer1_1_96_4x4_p_V_7_address1 = buffer1_1_96_4x4_p_V_282_reg_7566.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_7_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_7_d0 = tmp_51_7_reg_7312.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_7_d0 = tmp_49_7_fu_4902_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_7_d0 = tmp_45_7_reg_6532.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_7_d0 = tmp_43_7_fu_3901_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_7_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_7_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_d1() {
    buffer1_1_96_4x4_p_V_7_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_7)))) {
        buffer1_1_96_4x4_p_V_7_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_7))) {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_7_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = buffer1_1_96_4x4_p_V_214_reg_6886.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = buffer1_1_96_4x4_p_V_213_reg_6881.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = buffer1_1_96_4x4_p_V_118_reg_6106.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 = buffer1_1_96_4x4_p_V_117_reg_6101.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_8_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_8_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_address1() {
    buffer1_1_96_4x4_p_V_8_address1 = buffer1_1_96_4x4_p_V_286_reg_7590.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_8_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_8_d0 = tmp_51_8_reg_7317.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_8_d0 = tmp_49_8_fu_4917_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_8_d0 = tmp_45_8_reg_6537.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_8_d0 = tmp_43_8_fu_3916_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_8_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_8_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_d1() {
    buffer1_1_96_4x4_p_V_8_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_8)))) {
        buffer1_1_96_4x4_p_V_8_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_8))) {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_8_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = buffer1_1_96_4x4_p_V_192_reg_6776.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = buffer1_1_96_4x4_p_V_191_reg_6771.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = buffer1_1_96_4x4_p_V_96_reg_5996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 = buffer1_1_96_4x4_p_V_95_reg_5991.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_9_address0 =  (sc_lv<8>) (tmp_348_cast_fu_3448_p1.read());
    } else {
        buffer1_1_96_4x4_p_V_9_address0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_address1() {
    buffer1_1_96_4x4_p_V_9_address1 = buffer1_1_96_4x4_p_V_275_reg_7524.read();
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        buffer1_1_96_4x4_p_V_9_ce0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        buffer1_1_96_4x4_p_V_9_ce1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        buffer1_1_96_4x4_p_V_9_d0 = tmp_51_9_reg_7322.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        buffer1_1_96_4x4_p_V_9_d0 = tmp_49_9_fu_4932_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        buffer1_1_96_4x4_p_V_9_d0 = tmp_45_9_reg_6542.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        buffer1_1_96_4x4_p_V_9_d0 = tmp_43_9_fu_3931_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        buffer1_1_96_4x4_p_V_9_d0 = bias_V_q0.read();
    } else {
        buffer1_1_96_4x4_p_V_9_d0 = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_d1() {
    buffer1_1_96_4x4_p_V_9_d1 = ap_const_lv8_0;
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_366_fu_3444_p1.read(), ap_const_lv6_9)))) {
        buffer1_1_96_4x4_p_V_9_we0 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_buffer1_1_96_4x4_p_V_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_401_fu_5765_p3.read()) && 
         esl_seteq<1,6,6>(tmp_389_fu_5707_p1.read(), ap_const_lv6_9))) {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_1;
    } else {
        buffer1_1_96_4x4_p_V_9_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_ci6_cast4_cast1_fu_4610_p1() {
    ci6_cast4_cast1_fu_4610_p1 = esl_zext<9,7>(ci6_reg_2577.read());
}

void subconv_1x1_4_p::thread_ci6_cast4_cast_fu_4614_p1() {
    ci6_cast4_cast_fu_4614_p1 = esl_zext<8,7>(ci6_reg_2577.read());
}

void subconv_1x1_4_p::thread_ci_6_fu_3776_p2() {
    ci_6_fu_3776_p2 = (!ap_const_lv7_1.is_01() || !ci_reg_2542.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(ci_reg_2542.read()));
}

void subconv_1x1_4_p::thread_ci_7_fu_4777_p2() {
    ci_7_fu_4777_p2 = (!ap_const_lv7_1.is_01() || !ci6_reg_2577.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(ci6_reg_2577.read()));
}

void subconv_1x1_4_p::thread_ci_cast7_cast_fu_3619_p1() {
    ci_cast7_cast_fu_3619_p1 = esl_zext<9,7>(ci_reg_2542.read());
}

void subconv_1x1_4_p::thread_co8_phi_fu_2603_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_7397.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co8_phi_fu_2603_p4 = arrayNo_cast3_mid2_v_2_reg_7413.read();
    } else {
        co8_phi_fu_2603_p4 = co8_reg_2599.read();
    }
}

void subconv_1x1_4_p::thread_co_13_fu_3257_p2() {
    co_13_fu_3257_p2 = (!ap_const_lv7_1.is_01() || !co_phi_fu_2475_p4.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(co_phi_fu_2475_p4.read()));
}

void subconv_1x1_4_p::thread_co_15_fu_5473_p2() {
    co_15_fu_5473_p2 = (!ap_const_lv7_1.is_01() || !co8_phi_fu_2603_p4.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(co8_phi_fu_2603_p4.read()));
}

void subconv_1x1_4_p::thread_co_cast_mid2_fu_3352_p1() {
    co_cast_mid2_fu_3352_p1 = esl_zext<32,7>(ap_reg_pp0_iter9_co_cast_mid2_v_reg_5795.read());
}

void subconv_1x1_4_p::thread_co_cast_mid2_v_fu_3270_p3() {
    co_cast_mid2_v_fu_3270_p3 = (!exitcond_flatten_reg_5782.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_reg_5782.read()[0].to_bool())? co_13_fu_3257_p2.read(): co_phi_fu_2475_p4.read());
}

void subconv_1x1_4_p::thread_co_phi_fu_2475_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co_phi_fu_2475_p4 = co_cast_mid2_v_reg_5795.read();
    } else {
        co_phi_fu_2475_p4 = co_reg_2471.read();
    }
}

void subconv_1x1_4_p::thread_exitcond18_fu_3523_p2() {
    exitcond18_fu_3523_p2 = (!h1_reg_2518.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(h1_reg_2518.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond19_fu_4514_p2() {
    exitcond19_fu_4514_p2 = (!h4_reg_2553.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(h4_reg_2553.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond20_fu_3607_p2() {
    exitcond20_fu_3607_p2 = (!w2_reg_2530.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w2_reg_2530.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond21_fu_4598_p2() {
    exitcond21_fu_4598_p2 = (!w5_reg_2565.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w5_reg_2565.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond22_fu_3770_p2() {
    exitcond22_fu_3770_p2 = (!ci_reg_2542.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_2542.read() == ap_const_lv7_60);
}

void subconv_1x1_4_p::thread_exitcond23_fu_5543_p2() {
    exitcond23_fu_5543_p2 = (!w10_phi_fu_2637_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w10_phi_fu_2637_p4.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond24_fu_4771_p2() {
    exitcond24_fu_4771_p2 = (!ci6_reg_2577.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci6_reg_2577.read() == ap_const_lv7_60);
}

void subconv_1x1_4_p::thread_exitcond31_mid_fu_3294_p2() {
    exitcond31_mid_fu_3294_p2 = (exitcond_fu_3288_p2.read() & not_exitcond_flatten_fu_3283_p2.read());
}

void subconv_1x1_4_p::thread_exitcond_flatten4_fu_5479_p2() {
    exitcond_flatten4_fu_5479_p2 = (!indvar_flatten9_reg_2610.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten9_reg_2610.read() == ap_const_lv6_10);
}

void subconv_1x1_4_p::thread_exitcond_flatten7_fu_3225_p2() {
    exitcond_flatten7_fu_3225_p2 = (!indvar_flatten7_reg_2460.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten7_reg_2460.read() == ap_const_lv11_600);
}

void subconv_1x1_4_p::thread_exitcond_flatten9_fu_5461_p2() {
    exitcond_flatten9_fu_5461_p2 = (!indvar_flatten8_reg_2588.read().is_01() || !ap_const_lv11_600.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten8_reg_2588.read() == ap_const_lv11_600);
}

void subconv_1x1_4_p::thread_exitcond_flatten_fu_3237_p2() {
    exitcond_flatten_fu_3237_p2 = (!indvar_flatten_reg_2483.read().is_01() || !ap_const_lv6_10.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2483.read() == ap_const_lv6_10);
}

void subconv_1x1_4_p::thread_exitcond_fu_3288_p2() {
    exitcond_fu_3288_p2 = (!w_phi_fu_2510_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(w_phi_fu_2510_p4.read() == ap_const_lv3_5);
}

void subconv_1x1_4_p::thread_exitcond_mid_fu_5549_p2() {
    exitcond_mid_fu_5549_p2 = (exitcond23_fu_5543_p2.read() & not_exitcond_flatten_6_fu_5538_p2.read());
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2645_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2645_a_V = reg_2819.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2645_a_V = reg_2813.read();
    } else {
        grp_MUL_DP_fu_2645_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2645_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2645_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2645_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2645_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2645_b_V = reg_2813.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2645_b_V = reg_2819.read();
    } else {
        grp_MUL_DP_fu_2645_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2652_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2652_a_V = reg_2831.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2652_a_V = reg_2825.read();
    } else {
        grp_MUL_DP_fu_2652_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2652_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2652_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2652_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2652_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2652_b_V = reg_2825.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2652_b_V = reg_2831.read();
    } else {
        grp_MUL_DP_fu_2652_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2659_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2659_a_V = reg_2843.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2659_a_V = reg_2837.read();
    } else {
        grp_MUL_DP_fu_2659_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2659_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2659_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2659_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2659_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2659_b_V = reg_2837.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2659_b_V = reg_2843.read();
    } else {
        grp_MUL_DP_fu_2659_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2666_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2666_a_V = reg_2855.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2666_a_V = reg_2849.read();
    } else {
        grp_MUL_DP_fu_2666_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2666_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2666_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2666_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2666_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2666_b_V = reg_2849.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2666_b_V = reg_2855.read();
    } else {
        grp_MUL_DP_fu_2666_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2673_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2673_a_V = reg_2867.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2673_a_V = reg_2861.read();
    } else {
        grp_MUL_DP_fu_2673_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2673_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2673_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2673_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2673_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2673_b_V = reg_2861.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2673_b_V = reg_2867.read();
    } else {
        grp_MUL_DP_fu_2673_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2680_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2680_a_V = reg_2879.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2680_a_V = reg_2873.read();
    } else {
        grp_MUL_DP_fu_2680_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2680_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2680_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2680_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2680_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2680_b_V = reg_2873.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2680_b_V = reg_2879.read();
    } else {
        grp_MUL_DP_fu_2680_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2687_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2687_a_V = reg_2891.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2687_a_V = reg_2885.read();
    } else {
        grp_MUL_DP_fu_2687_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2687_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2687_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2687_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2687_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2687_b_V = reg_2885.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2687_b_V = reg_2891.read();
    } else {
        grp_MUL_DP_fu_2687_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2694_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2694_a_V = reg_2903.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2694_a_V = reg_2897.read();
    } else {
        grp_MUL_DP_fu_2694_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2694_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2694_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2694_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2694_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2694_b_V = reg_2897.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2694_b_V = reg_2903.read();
    } else {
        grp_MUL_DP_fu_2694_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2701_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2701_a_V = reg_2915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2701_a_V = reg_2909.read();
    } else {
        grp_MUL_DP_fu_2701_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2701_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2701_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2701_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2701_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2701_b_V = reg_2909.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2701_b_V = reg_2915.read();
    } else {
        grp_MUL_DP_fu_2701_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2708_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2708_a_V = reg_2927.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2708_a_V = reg_2921.read();
    } else {
        grp_MUL_DP_fu_2708_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2708_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2708_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2708_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2708_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2708_b_V = reg_2921.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2708_b_V = reg_2927.read();
    } else {
        grp_MUL_DP_fu_2708_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2715_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2715_a_V = reg_2939.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2715_a_V = reg_2933.read();
    } else {
        grp_MUL_DP_fu_2715_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2715_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2715_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2715_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2715_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2715_b_V = reg_2933.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2715_b_V = reg_2939.read();
    } else {
        grp_MUL_DP_fu_2715_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2722_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2722_a_V = reg_2951.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2722_a_V = reg_2945.read();
    } else {
        grp_MUL_DP_fu_2722_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2722_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2722_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2722_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2722_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2722_b_V = reg_2945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2722_b_V = reg_2951.read();
    } else {
        grp_MUL_DP_fu_2722_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2729_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2729_a_V = reg_2963.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2729_a_V = reg_2957.read();
    } else {
        grp_MUL_DP_fu_2729_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2729_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2729_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2729_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2729_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2729_b_V = reg_2957.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2729_b_V = reg_2963.read();
    } else {
        grp_MUL_DP_fu_2729_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2736_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2736_a_V = reg_2975.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2736_a_V = reg_2969.read();
    } else {
        grp_MUL_DP_fu_2736_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2736_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2736_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2736_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2736_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2736_b_V = reg_2969.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2736_b_V = reg_2975.read();
    } else {
        grp_MUL_DP_fu_2736_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2743_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2743_a_V = reg_2987.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2743_a_V = reg_2981.read();
    } else {
        grp_MUL_DP_fu_2743_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2743_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2743_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2743_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2743_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2743_b_V = reg_2981.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2743_b_V = reg_2987.read();
    } else {
        grp_MUL_DP_fu_2743_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2750_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2750_a_V = reg_2999.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2750_a_V = reg_2993.read();
    } else {
        grp_MUL_DP_fu_2750_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2750_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2750_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2750_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2750_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2750_b_V = reg_2993.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2750_b_V = reg_2999.read();
    } else {
        grp_MUL_DP_fu_2750_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2757_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2757_a_V = reg_3011.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2757_a_V = reg_3005.read();
    } else {
        grp_MUL_DP_fu_2757_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2757_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2757_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2757_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2757_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2757_b_V = reg_3005.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2757_b_V = reg_3011.read();
    } else {
        grp_MUL_DP_fu_2757_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2764_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2764_a_V = reg_3023.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2764_a_V = reg_3017.read();
    } else {
        grp_MUL_DP_fu_2764_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2764_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2764_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2764_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2764_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2764_b_V = reg_3017.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2764_b_V = reg_3023.read();
    } else {
        grp_MUL_DP_fu_2764_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2771_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2771_a_V = reg_3035.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2771_a_V = reg_3029.read();
    } else {
        grp_MUL_DP_fu_2771_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2771_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2771_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2771_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2771_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2771_b_V = reg_3029.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2771_b_V = reg_3035.read();
    } else {
        grp_MUL_DP_fu_2771_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2778_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2778_a_V = reg_3047.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2778_a_V = reg_3041.read();
    } else {
        grp_MUL_DP_fu_2778_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2778_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2778_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2778_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2778_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2778_b_V = reg_3041.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2778_b_V = reg_3047.read();
    } else {
        grp_MUL_DP_fu_2778_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2785_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2785_a_V = reg_3059.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2785_a_V = reg_3053.read();
    } else {
        grp_MUL_DP_fu_2785_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2785_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2785_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2785_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2785_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2785_b_V = reg_3053.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2785_b_V = reg_3059.read();
    } else {
        grp_MUL_DP_fu_2785_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2792_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2792_a_V = reg_3071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2792_a_V = reg_3065.read();
    } else {
        grp_MUL_DP_fu_2792_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2792_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2792_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2792_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2792_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2792_b_V = reg_3065.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2792_b_V = reg_3071.read();
    } else {
        grp_MUL_DP_fu_2792_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2799_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2799_a_V = reg_3083.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2799_a_V = reg_3077.read();
    } else {
        grp_MUL_DP_fu_2799_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2799_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2799_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2799_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2799_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2799_b_V = reg_3077.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2799_b_V = reg_3083.read();
    } else {
        grp_MUL_DP_fu_2799_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2806_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2806_a_V = reg_3095.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2806_a_V = reg_3089.read();
    } else {
        grp_MUL_DP_fu_2806_a_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2806_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        grp_MUL_DP_fu_2806_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2806_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_grp_MUL_DP_fu_2806_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2806_b_V = reg_3089.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2806_b_V = reg_3095.read();
    } else {
        grp_MUL_DP_fu_2806_b_V = "XXXXXXXX";
    }
}

void subconv_1x1_4_p::thread_grp_fu_3277_p0() {
    grp_fu_3277_p0 = (!exitcond_flatten_reg_5782.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_reg_5782.read()[0].to_bool())? co_13_fu_3257_p2.read(): co_phi_fu_2475_p4.read());
}

void subconv_1x1_4_p::thread_grp_fu_3277_p1() {
    grp_fu_3277_p1 =  (sc_lv<6>) (ap_const_lv7_18);
}

void subconv_1x1_4_p::thread_grp_fu_5514_p1() {
    grp_fu_5514_p1 =  (sc_lv<6>) (ap_const_lv7_18);
}

void subconv_1x1_4_p::thread_h1_cast9_cast1_fu_3475_p1() {
    h1_cast9_cast1_fu_3475_p1 = esl_zext<7,3>(h1_reg_2518.read());
}

void subconv_1x1_4_p::thread_h1_cast9_cast_fu_3479_p1() {
    h1_cast9_cast_fu_3479_p1 = esl_zext<12,3>(h1_reg_2518.read());
}

void subconv_1x1_4_p::thread_h4_cast6_cast1_fu_4460_p1() {
    h4_cast6_cast1_fu_4460_p1 = esl_zext<8,3>(h4_reg_2553.read());
}

void subconv_1x1_4_p::thread_h4_cast6_cast_fu_4464_p1() {
    h4_cast6_cast_fu_4464_p1 = esl_zext<12,3>(h4_reg_2553.read());
}

void subconv_1x1_4_p::thread_h9_cast2_mid2_cast_fu_5628_p1() {
    h9_cast2_mid2_cast_fu_5628_p1 = esl_zext<12,3>(h9_cast2_mid2_reg_7436.read());
}

void subconv_1x1_4_p::thread_h9_cast2_mid2_fu_5574_p3() {
    h9_cast2_mid2_fu_5574_p3 = (!exitcond_mid_fu_5549_p2.read()[0].is_01())? sc_lv<3>(): ((exitcond_mid_fu_5549_p2.read()[0].to_bool())? h_5_fu_5555_p2.read(): h9_mid_fu_5507_p3.read());
}

void subconv_1x1_4_p::thread_h9_mid_fu_5507_p3() {
    h9_mid_fu_5507_p3 = (!exitcond_flatten4_reg_7406.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten4_reg_7406.read()[0].to_bool())? ap_const_lv3_1: h9_phi_fu_2625_p4.read());
}

void subconv_1x1_4_p::thread_h9_phi_fu_2625_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_7397.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        h9_phi_fu_2625_p4 = h9_cast2_mid2_reg_7436.read();
    } else {
        h9_phi_fu_2625_p4 = h9_reg_2621.read();
    }
}

void subconv_1x1_4_p::thread_h_17_fu_3300_p2() {
    h_17_fu_3300_p2 = (!ap_const_lv3_1.is_01() || !h_mid_fu_3263_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(h_mid_fu_3263_p3.read()));
}

void subconv_1x1_4_p::thread_h_4_fu_3613_p2() {
    h_4_fu_3613_p2 = (!h1_reg_2518.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h1_reg_2518.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_h_5_fu_5555_p2() {
    h_5_fu_5555_p2 = (!ap_const_lv3_1.is_01() || !h9_mid_fu_5507_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(h9_mid_fu_5507_p3.read()));
}

void subconv_1x1_4_p::thread_h_6_fu_4604_p2() {
    h_6_fu_4604_p2 = (!h4_reg_2553.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h4_reg_2553.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_h_cast_mid2_cast_fu_3396_p1() {
    h_cast_mid2_cast_fu_3396_p1 = esl_zext<12,3>(ap_reg_pp0_iter9_h_cast_mid2_reg_5808.read());
}

void subconv_1x1_4_p::thread_h_cast_mid2_fu_3319_p3() {
    h_cast_mid2_fu_3319_p3 = (!exitcond31_mid_fu_3294_p2.read()[0].is_01())? sc_lv<3>(): ((exitcond31_mid_fu_3294_p2.read()[0].to_bool())? h_17_fu_3300_p2.read(): h_mid_fu_3263_p3.read());
}

void subconv_1x1_4_p::thread_h_mid_fu_3263_p3() {
    h_mid_fu_3263_p3 = (!exitcond_flatten_reg_5782.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_reg_5782.read()[0].to_bool())? ap_const_lv3_1: h_phi_fu_2498_p4.read());
}

void subconv_1x1_4_p::thread_h_phi_fu_2498_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h_phi_fu_2498_p4 = h_cast_mid2_reg_5808.read();
    } else {
        h_phi_fu_2498_p4 = h_reg_2494.read();
    }
}

void subconv_1x1_4_p::thread_indvar_flatten21_op_fu_5493_p2() {
    indvar_flatten21_op_fu_5493_p2 = (!indvar_flatten9_reg_2610.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar_flatten9_reg_2610.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_4_p::thread_indvar_flatten_next7_fu_3231_p2() {
    indvar_flatten_next7_fu_3231_p2 = (!indvar_flatten7_reg_2460.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(indvar_flatten7_reg_2460.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void subconv_1x1_4_p::thread_indvar_flatten_next8_fu_5499_p3() {
    indvar_flatten_next8_fu_5499_p3 = (!exitcond_flatten4_fu_5479_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten4_fu_5479_p2.read()[0].to_bool())? ap_const_lv6_1: indvar_flatten21_op_fu_5493_p2.read());
}

void subconv_1x1_4_p::thread_indvar_flatten_next9_fu_5467_p2() {
    indvar_flatten_next9_fu_5467_p2 = (!indvar_flatten8_reg_2588.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(indvar_flatten8_reg_2588.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void subconv_1x1_4_p::thread_indvar_flatten_next_fu_3249_p3() {
    indvar_flatten_next_fu_3249_p3 = (!exitcond_flatten_fu_3237_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten_fu_3237_p2.read()[0].to_bool())? ap_const_lv6_1: indvar_flatten_op_fu_3243_p2.read());
}

void subconv_1x1_4_p::thread_indvar_flatten_op_fu_3243_p2() {
    indvar_flatten_op_fu_3243_p2 = (!indvar_flatten_reg_2483.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(indvar_flatten_reg_2483.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_4_p::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        input_V_address0 = input_V_addr_4_reg_6899.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        input_V_address0 = input_V_addr_reg_6119.read();
    } else {
        input_V_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_input_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_mul3_fu_5522_p1() {
    mul3_fu_5522_p1 =  (sc_lv<7>) (mul3_fu_5522_p10.read());
}

void subconv_1x1_4_p::thread_mul3_fu_5522_p10() {
    mul3_fu_5522_p10 = esl_zext<16,7>(arrayNo_cast3_mid2_v_2_reg_7413.read());
}

void subconv_1x1_4_p::thread_mul3_fu_5522_p2() {
    mul3_fu_5522_p2 = (!ap_const_lv16_AB.is_01() || !mul3_fu_5522_p1.read().is_01())? sc_lv<16>(): sc_biguint<16>(ap_const_lv16_AB) * sc_biguint<7>(mul3_fu_5522_p1.read());
}

void subconv_1x1_4_p::thread_mul_fu_3336_p1() {
    mul_fu_3336_p1 =  (sc_lv<7>) (mul_fu_3336_p10.read());
}

void subconv_1x1_4_p::thread_mul_fu_3336_p10() {
    mul_fu_3336_p10 = esl_zext<16,7>(ap_reg_pp0_iter8_co_cast_mid2_v_reg_5795.read());
}

void subconv_1x1_4_p::thread_mul_fu_3336_p2() {
    mul_fu_3336_p2 = (!ap_const_lv16_AB.is_01() || !mul_fu_3336_p1.read().is_01())? sc_lv<16>(): sc_biguint<16>(ap_const_lv16_AB) * sc_biguint<7>(mul_fu_3336_p1.read());
}

void subconv_1x1_4_p::thread_not_exitcond_flatten_6_fu_5538_p2() {
    not_exitcond_flatten_6_fu_5538_p2 = (exitcond_flatten4_reg_7406.read() ^ ap_const_lv1_1);
}

void subconv_1x1_4_p::thread_not_exitcond_flatten_fu_3283_p2() {
    not_exitcond_flatten_fu_3283_p2 = (exitcond_flatten_reg_5782.read() ^ ap_const_lv1_1);
}

void subconv_1x1_4_p::thread_p_shl10_cast_fu_4476_p1() {
    p_shl10_cast_fu_4476_p1 = esl_zext<7,6>(tmp_318_fu_4468_p3.read());
}

void subconv_1x1_4_p::thread_p_shl11_cast_fu_4488_p1() {
    p_shl11_cast_fu_4488_p1 = esl_zext<7,4>(tmp_319_fu_4480_p3.read());
}

void subconv_1x1_4_p::thread_p_shl12_cast_fu_4661_p3() {
    p_shl12_cast_fu_4661_p3 = esl_concat<10,3>(tmp_450_fu_4657_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_p_shl13_cast_fu_4669_p3() {
    p_shl13_cast_fu_4669_p3 = esl_concat<12,1>(tmp_346_fu_4652_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_p_shl14_cast_fu_4626_p1() {
    p_shl14_cast_fu_4626_p1 = esl_zext<11,10>(tmp_343_fu_4618_p3.read());
}

void subconv_1x1_4_p::thread_p_shl15_cast_fu_4638_p1() {
    p_shl15_cast_fu_4638_p1 = esl_zext<11,8>(tmp_344_fu_4630_p3.read());
}

void subconv_1x1_4_p::thread_p_shl16_cast_fu_5641_p3() {
    p_shl16_cast_fu_5641_p3 = esl_concat<6,3>(tmp_399_fu_5637_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_p_shl17_cast_fu_5653_p3() {
    p_shl17_cast_fu_5653_p3 = esl_concat<8,1>(tmp_400_fu_5649_p1.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_p_shl18_cast_fu_5599_p1() {
    p_shl18_cast_fu_5599_p1 = esl_zext<11,10>(tmp_336_fu_5595_p1.read());
}

void subconv_1x1_4_p::thread_p_shl19_cast_fu_5614_p1() {
    p_shl19_cast_fu_5614_p1 = esl_zext<11,8>(tmp_337_fu_5610_p1.read());
}

void subconv_1x1_4_p::thread_p_shl1_cast_fu_3421_p3() {
    p_shl1_cast_fu_3421_p3 = esl_concat<8,1>(tmp_381_fu_3417_p1.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_p_shl2_cast_fu_3367_p1() {
    p_shl2_cast_fu_3367_p1 = esl_zext<11,10>(tmp_s_fu_3363_p1.read());
}

void subconv_1x1_4_p::thread_p_shl3_cast_fu_3382_p1() {
    p_shl3_cast_fu_3382_p1 = esl_zext<11,8>(tmp_308_fu_3378_p1.read());
}

void subconv_1x1_4_p::thread_p_shl4_cast_fu_3491_p1() {
    p_shl4_cast_fu_3491_p1 = esl_zext<7,6>(tmp_314_fu_3483_p3.read());
}

void subconv_1x1_4_p::thread_p_shl5_cast_fu_3503_p1() {
    p_shl5_cast_fu_3503_p1 = esl_zext<7,4>(tmp_315_fu_3495_p3.read());
}

void subconv_1x1_4_p::thread_p_shl6_cast_fu_3666_p3() {
    p_shl6_cast_fu_3666_p3 = esl_concat<10,3>(tmp_388_fu_3662_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_p_shl7_cast_fu_3674_p3() {
    p_shl7_cast_fu_3674_p3 = esl_concat<12,1>(tmp_330_fu_3657_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_p_shl8_cast_fu_3631_p1() {
    p_shl8_cast_fu_3631_p1 = esl_zext<11,10>(tmp_327_fu_3623_p3.read());
}

void subconv_1x1_4_p::thread_p_shl9_cast_fu_3643_p1() {
    p_shl9_cast_fu_3643_p1 = esl_zext<11,8>(tmp_328_fu_3635_p3.read());
}

void subconv_1x1_4_p::thread_p_shl_cast_fu_3409_p3() {
    p_shl_cast_fu_3409_p3 = esl_concat<6,3>(tmp_380_fu_3405_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_23_fu_3796_p2() {
    tmp_23_fu_3796_p2 = (!reg_3129.read().is_01() || !tmp_402_fu_3792_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3129.read()) + sc_biguint<8>(tmp_402_fu_3792_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_25_fu_4155_p2() {
    tmp_25_fu_4155_p2 = (!buffer1_1_96_4x4_p_V_24_q0.read().is_01() || !tmp_403_fu_4151_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_24_q0.read()) + sc_biguint<8>(tmp_403_fu_4151_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_27_fu_4797_p2() {
    tmp_27_fu_4797_p2 = (!reg_3129.read().is_01() || !tmp_451_fu_4793_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3129.read()) + sc_biguint<8>(tmp_451_fu_4793_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_29_fu_5156_p2() {
    tmp_29_fu_5156_p2 = (!buffer1_1_96_4x4_p_V_24_q0.read().is_01() || !tmp_452_fu_5152_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_24_q0.read()) + sc_biguint<8>(tmp_452_fu_5152_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_308_fu_3378_p1() {
    tmp_308_fu_3378_p1 = esl_sext<8,5>(tmp_375_fu_3371_p3.read());
}

void subconv_1x1_4_p::thread_tmp_309_fu_3386_p2() {
    tmp_309_fu_3386_p2 = (!p_shl2_cast_fu_3367_p1.read().is_01() || !p_shl3_cast_fu_3382_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_3367_p1.read()) - sc_biguint<11>(p_shl3_cast_fu_3382_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_30_fu_5711_p25() {
    tmp_30_fu_5711_p25 = esl_zext<32,7>(grp_fu_5514_p2.read());
}

void subconv_1x1_4_p::thread_tmp_310_fu_3306_p2() {
    tmp_310_fu_3306_p2 = (exitcond31_mid_fu_3294_p2.read() | exitcond_flatten_reg_5782.read());
}

void subconv_1x1_4_p::thread_tmp_311_fu_3399_p2() {
    tmp_311_fu_3399_p2 = (!h_cast_mid2_cast_fu_3396_p1.read().is_01() || !tmp_342_cast_fu_3392_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h_cast_mid2_cast_fu_3396_p1.read()) + sc_bigint<12>(tmp_342_cast_fu_3392_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_312_fu_3429_p2() {
    tmp_312_fu_3429_p2 = (!p_shl_cast_fu_3409_p3.read().is_01() || !p_shl1_cast_fu_3421_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl_cast_fu_3409_p3.read()) - sc_biguint<9>(p_shl1_cast_fu_3421_p3.read()));
}

void subconv_1x1_4_p::thread_tmp_313_fu_3438_p2() {
    tmp_313_fu_3438_p2 = (!w_cast_cast_fu_3435_p1.read().is_01() || !tmp_312_fu_3429_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w_cast_cast_fu_3435_p1.read()) + sc_biguint<9>(tmp_312_fu_3429_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_314_fu_3483_p3() {
    tmp_314_fu_3483_p3 = esl_concat<3,3>(h1_reg_2518.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_315_fu_3495_p3() {
    tmp_315_fu_3495_p3 = esl_concat<3,1>(h1_reg_2518.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_316_fu_3507_p2() {
    tmp_316_fu_3507_p2 = (!p_shl4_cast_fu_3491_p1.read().is_01() || !p_shl5_cast_fu_3503_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl4_cast_fu_3491_p1.read()) - sc_biguint<7>(p_shl5_cast_fu_3503_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_317_fu_3517_p2() {
    tmp_317_fu_3517_p2 = (!tmp_351_cast_fu_3513_p1.read().is_01() || !ap_const_lv8_48.is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_351_cast_fu_3513_p1.read()) + sc_biguint<8>(ap_const_lv8_48));
}

void subconv_1x1_4_p::thread_tmp_318_fu_4468_p3() {
    tmp_318_fu_4468_p3 = esl_concat<3,3>(h4_reg_2553.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_319_fu_4480_p3() {
    tmp_319_fu_4480_p3 = esl_concat<3,1>(h4_reg_2553.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_320_fu_4492_p2() {
    tmp_320_fu_4492_p2 = (!p_shl10_cast_fu_4476_p1.read().is_01() || !p_shl11_cast_fu_4488_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(p_shl10_cast_fu_4476_p1.read()) - sc_biguint<7>(p_shl11_cast_fu_4488_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_321_fu_4502_p2() {
    tmp_321_fu_4502_p2 = (!tmp_320_fu_4492_p2.read().is_01() || !ap_const_lv7_24.is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_320_fu_4492_p2.read()) + sc_biguint<7>(ap_const_lv7_24));
}

void subconv_1x1_4_p::thread_tmp_322_fu_4508_p2() {
    tmp_322_fu_4508_p2 = (!tmp_355_cast_fu_4498_p1.read().is_01() || !ap_const_lv8_6C.is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_355_cast_fu_4498_p1.read()) + sc_biguint<8>(ap_const_lv8_6C));
}

void subconv_1x1_4_p::thread_tmp_323_fu_3541_p2() {
    tmp_323_fu_3541_p2 = (!tmp_351_cast_reg_5848.read().is_01() || !w2_cast8_cast_fu_3537_p1.read().is_01())? sc_lv<8>(): (sc_bigint<8>(tmp_351_cast_reg_5848.read()) + sc_biguint<8>(w2_cast8_cast_fu_3537_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_324_fu_3574_p2() {
    tmp_324_fu_3574_p2 = (!tmp_317_reg_5853.read().is_01() || !w2_cast8_cast_fu_3537_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_317_reg_5853.read()) + sc_biguint<8>(w2_cast8_cast_fu_3537_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_325_fu_4532_p2() {
    tmp_325_fu_4532_p2 = (!tmp_321_reg_6627.read().is_01() || !w5_cast5_cast_fu_4528_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(tmp_321_reg_6627.read()) + sc_biguint<7>(w5_cast5_cast_fu_4528_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_326_fu_4565_p2() {
    tmp_326_fu_4565_p2 = (!tmp_322_reg_6632.read().is_01() || !w5_cast5_cast2_fu_4524_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_322_reg_6632.read()) + sc_biguint<8>(w5_cast5_cast2_fu_4524_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_327_fu_3623_p3() {
    tmp_327_fu_3623_p3 = esl_concat<7,3>(ci_reg_2542.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_328_fu_3635_p3() {
    tmp_328_fu_3635_p3 = esl_concat<7,1>(ci_reg_2542.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_329_fu_3647_p2() {
    tmp_329_fu_3647_p2 = (!p_shl8_cast_fu_3631_p1.read().is_01() || !p_shl9_cast_fu_3643_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl8_cast_fu_3631_p1.read()) - sc_biguint<11>(p_shl9_cast_fu_3643_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_330_fu_3657_p2() {
    tmp_330_fu_3657_p2 = (!h1_cast9_cast_reg_5843.read().is_01() || !tmp_364_cast_fu_3653_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h1_cast9_cast_reg_5843.read()) + sc_bigint<12>(tmp_364_cast_fu_3653_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_331_fu_3682_p2() {
    tmp_331_fu_3682_p2 = (!p_shl6_cast_fu_3666_p3.read().is_01() || !p_shl7_cast_fu_3674_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl6_cast_fu_3666_p3.read()) - sc_biguint<13>(p_shl7_cast_fu_3674_p3.read()));
}

void subconv_1x1_4_p::thread_tmp_332_fu_3688_p2() {
    tmp_332_fu_3688_p2 = (!w2_cast8_cast2_reg_5866.read().is_01() || !tmp_331_fu_3682_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w2_cast8_cast2_reg_5866.read()) + sc_biguint<13>(tmp_331_fu_3682_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_333_fu_3698_p2() {
    tmp_333_fu_3698_p2 = (!h1_cast9_cast1_reg_5838.read().is_01() || !ci_reg_2542.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h1_cast9_cast1_reg_5838.read()) + sc_biguint<7>(ci_reg_2542.read()));
}

void subconv_1x1_4_p::thread_tmp_334_fu_3703_p2() {
    tmp_334_fu_3703_p2 = (!w2_cast8_cast1_reg_5861.read().is_01() || !tmp_333_fu_3698_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w2_cast8_cast1_reg_5861.read()) + sc_biguint<7>(tmp_333_fu_3698_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_335_fu_3736_p2() {
    tmp_335_fu_3736_p2 = (!ap_const_lv9_C0.is_01() || !ci_cast7_cast_fu_3619_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_C0) + sc_biguint<9>(ci_cast7_cast_fu_3619_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_336_fu_5595_p1() {
    tmp_336_fu_5595_p1 = esl_sext<10,7>(tmp_397_fu_5588_p3.read());
}

void subconv_1x1_4_p::thread_tmp_337_fu_5610_p1() {
    tmp_337_fu_5610_p1 = esl_sext<8,5>(tmp_398_fu_5603_p3.read());
}

void subconv_1x1_4_p::thread_tmp_338_fu_5618_p2() {
    tmp_338_fu_5618_p2 = (!p_shl18_cast_fu_5599_p1.read().is_01() || !p_shl19_cast_fu_5614_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl18_cast_fu_5599_p1.read()) - sc_biguint<11>(p_shl19_cast_fu_5614_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_339_fu_5561_p2() {
    tmp_339_fu_5561_p2 = (exitcond_mid_fu_5549_p2.read() | exitcond_flatten4_reg_7406.read());
}

void subconv_1x1_4_p::thread_tmp_340_fu_5631_p2() {
    tmp_340_fu_5631_p2 = (!h9_cast2_mid2_cast_fu_5628_p1.read().is_01() || !tmp_377_cast_fu_5624_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h9_cast2_mid2_cast_fu_5628_p1.read()) + sc_bigint<12>(tmp_377_cast_fu_5624_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_341_fu_5661_p2() {
    tmp_341_fu_5661_p2 = (!p_shl16_cast_fu_5641_p3.read().is_01() || !p_shl17_cast_fu_5653_p3.read().is_01())? sc_lv<9>(): (sc_biguint<9>(p_shl16_cast_fu_5641_p3.read()) - sc_biguint<9>(p_shl17_cast_fu_5653_p3.read()));
}

void subconv_1x1_4_p::thread_tmp_342_cast_fu_3392_p1() {
    tmp_342_cast_fu_3392_p1 = esl_sext<12,11>(tmp_309_fu_3386_p2.read());
}

void subconv_1x1_4_p::thread_tmp_342_fu_5670_p2() {
    tmp_342_fu_5670_p2 = (!w10_cast1_cast_fu_5667_p1.read().is_01() || !tmp_341_fu_5661_p2.read().is_01())? sc_lv<9>(): (sc_biguint<9>(w10_cast1_cast_fu_5667_p1.read()) + sc_biguint<9>(tmp_341_fu_5661_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_343_fu_4618_p3() {
    tmp_343_fu_4618_p3 = esl_concat<7,3>(ci6_reg_2577.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_344_fu_4630_p3() {
    tmp_344_fu_4630_p3 = esl_concat<7,1>(ci6_reg_2577.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_345_fu_4642_p2() {
    tmp_345_fu_4642_p2 = (!p_shl14_cast_fu_4626_p1.read().is_01() || !p_shl15_cast_fu_4638_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl14_cast_fu_4626_p1.read()) - sc_biguint<11>(p_shl15_cast_fu_4638_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_346_fu_4652_p2() {
    tmp_346_fu_4652_p2 = (!h4_cast6_cast_reg_6622.read().is_01() || !tmp_386_cast_fu_4648_p1.read().is_01())? sc_lv<12>(): (sc_biguint<12>(h4_cast6_cast_reg_6622.read()) + sc_bigint<12>(tmp_386_cast_fu_4648_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_347_fu_4677_p2() {
    tmp_347_fu_4677_p2 = (!p_shl12_cast_fu_4661_p3.read().is_01() || !p_shl13_cast_fu_4669_p3.read().is_01())? sc_lv<13>(): (sc_biguint<13>(p_shl12_cast_fu_4661_p3.read()) - sc_biguint<13>(p_shl13_cast_fu_4669_p3.read()));
}

void subconv_1x1_4_p::thread_tmp_348_cast_fu_3448_p1() {
    tmp_348_cast_fu_3448_p1 = esl_zext<32,9>(tmp_313_reg_5825.read());
}

void subconv_1x1_4_p::thread_tmp_348_fu_4683_p2() {
    tmp_348_fu_4683_p2 = (!w5_cast5_cast1_reg_6641.read().is_01() || !tmp_347_fu_4677_p2.read().is_01())? sc_lv<13>(): (sc_biguint<13>(w5_cast5_cast1_reg_6641.read()) + sc_biguint<13>(tmp_347_fu_4677_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_349_fu_4693_p2() {
    tmp_349_fu_4693_p2 = (!ap_const_lv8_60.is_01() || !ci6_cast4_cast_fu_4614_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_60) + sc_biguint<8>(ci6_cast4_cast_fu_4614_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_350_fu_4699_p2() {
    tmp_350_fu_4699_p2 = (!h4_cast6_cast1_reg_6617.read().is_01() || !tmp_349_fu_4693_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(h4_cast6_cast1_reg_6617.read()) + sc_biguint<8>(tmp_349_fu_4693_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_351_cast_fu_3513_p1() {
    tmp_351_cast_fu_3513_p1 = esl_sext<8,7>(tmp_316_fu_3507_p2.read());
}

void subconv_1x1_4_p::thread_tmp_351_fu_4704_p2() {
    tmp_351_fu_4704_p2 = (!w5_cast5_cast2_reg_6646.read().is_01() || !tmp_350_fu_4699_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w5_cast5_cast2_reg_6646.read()) + sc_biguint<8>(tmp_350_fu_4699_p2.read()));
}

void subconv_1x1_4_p::thread_tmp_352_fu_4737_p2() {
    tmp_352_fu_4737_p2 = (!ap_const_lv9_120.is_01() || !ci6_cast4_cast1_fu_4610_p1.read().is_01())? sc_lv<9>(): (sc_bigint<9>(ap_const_lv9_120) + sc_biguint<9>(ci6_cast4_cast1_fu_4610_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_355_cast_fu_4498_p1() {
    tmp_355_cast_fu_4498_p1 = esl_sext<8,7>(tmp_320_fu_4492_p2.read());
}

void subconv_1x1_4_p::thread_tmp_358_cast_fu_3546_p1() {
    tmp_358_cast_fu_3546_p1 = esl_sext<32,8>(tmp_323_fu_3541_p2.read());
}

void subconv_1x1_4_p::thread_tmp_359_cast_fu_3579_p1() {
    tmp_359_cast_fu_3579_p1 = esl_zext<32,8>(tmp_324_fu_3574_p2.read());
}

void subconv_1x1_4_p::thread_tmp_360_cast_fu_4537_p1() {
    tmp_360_cast_fu_4537_p1 = esl_zext<32,7>(tmp_325_fu_4532_p2.read());
}

void subconv_1x1_4_p::thread_tmp_361_cast_fu_4570_p1() {
    tmp_361_cast_fu_4570_p1 = esl_zext<32,8>(tmp_326_fu_4565_p2.read());
}

void subconv_1x1_4_p::thread_tmp_364_cast_fu_3653_p1() {
    tmp_364_cast_fu_3653_p1 = esl_sext<12,11>(tmp_329_fu_3647_p2.read());
}

void subconv_1x1_4_p::thread_tmp_366_fu_3444_p1() {
    tmp_366_fu_3444_p1 = grp_fu_3277_p2.read().range(6-1, 0);
}

void subconv_1x1_4_p::thread_tmp_369_cast_fu_3693_p1() {
    tmp_369_cast_fu_3693_p1 = esl_zext<32,13>(tmp_332_fu_3688_p2.read());
}

void subconv_1x1_4_p::thread_tmp_371_cast_fu_3708_p1() {
    tmp_371_cast_fu_3708_p1 = esl_zext<32,7>(tmp_334_fu_3703_p2.read());
}

void subconv_1x1_4_p::thread_tmp_372_cast_fu_3742_p1() {
    tmp_372_cast_fu_3742_p1 = esl_zext<32,9>(tmp_335_fu_3736_p2.read());
}

void subconv_1x1_4_p::thread_tmp_373_fu_3356_p3() {
    tmp_373_fu_3356_p3 = esl_concat<4,3>(tmp_367_reg_5819.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_375_fu_3371_p3() {
    tmp_375_fu_3371_p3 = esl_concat<4,1>(tmp_367_reg_5819.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_377_cast_fu_5624_p1() {
    tmp_377_cast_fu_5624_p1 = esl_sext<12,11>(tmp_338_fu_5618_p2.read());
}

void subconv_1x1_4_p::thread_tmp_380_fu_3405_p1() {
    tmp_380_fu_3405_p1 = tmp_311_fu_3399_p2.read().range(6-1, 0);
}

void subconv_1x1_4_p::thread_tmp_381_fu_3417_p1() {
    tmp_381_fu_3417_p1 = tmp_311_fu_3399_p2.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_383_cast_fu_5676_p1() {
    tmp_383_cast_fu_5676_p1 = esl_zext<32,9>(ap_reg_pp1_iter9_tmp_342_reg_7447.read());
}

void subconv_1x1_4_p::thread_tmp_386_cast_fu_4648_p1() {
    tmp_386_cast_fu_4648_p1 = esl_sext<12,11>(tmp_345_fu_4642_p2.read());
}

void subconv_1x1_4_p::thread_tmp_388_fu_3662_p1() {
    tmp_388_fu_3662_p1 = tmp_330_fu_3657_p2.read().range(10-1, 0);
}

void subconv_1x1_4_p::thread_tmp_389_fu_5707_p1() {
    tmp_389_fu_5707_p1 = grp_fu_5514_p2.read().range(6-1, 0);
}

void subconv_1x1_4_p::thread_tmp_391_cast_fu_4688_p1() {
    tmp_391_cast_fu_4688_p1 = esl_zext<32,13>(tmp_348_fu_4683_p2.read());
}

void subconv_1x1_4_p::thread_tmp_394_cast_fu_4709_p1() {
    tmp_394_cast_fu_4709_p1 = esl_zext<32,8>(tmp_351_fu_4704_p2.read());
}

void subconv_1x1_4_p::thread_tmp_395_cast_fu_4743_p1() {
    tmp_395_cast_fu_4743_p1 = esl_zext<32,9>(tmp_352_fu_4737_p2.read());
}

void subconv_1x1_4_p::thread_tmp_397_fu_5588_p3() {
    tmp_397_fu_5588_p3 = esl_concat<4,3>(tmp_396_reg_7425.read(), ap_const_lv3_0);
}

void subconv_1x1_4_p::thread_tmp_398_fu_5603_p3() {
    tmp_398_fu_5603_p3 = esl_concat<4,1>(tmp_396_reg_7425.read(), ap_const_lv1_0);
}

void subconv_1x1_4_p::thread_tmp_399_fu_5637_p1() {
    tmp_399_fu_5637_p1 = tmp_340_fu_5631_p2.read().range(6-1, 0);
}

void subconv_1x1_4_p::thread_tmp_400_fu_5649_p1() {
    tmp_400_fu_5649_p1 = tmp_340_fu_5631_p2.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_401_fu_5765_p3() {
    tmp_401_fu_5765_p3 = tmp_30_fu_5711_p26.read().range(7, 7);
}

void subconv_1x1_4_p::thread_tmp_402_fu_3792_p1() {
    tmp_402_fu_3792_p1 = grp_MUL_DP_fu_2645_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_403_fu_4151_p1() {
    tmp_403_fu_4151_p1 = MUL_DP_ret71_reg_6377_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_404_fu_3807_p1() {
    tmp_404_fu_3807_p1 = grp_MUL_DP_fu_2652_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_405_fu_4164_p1() {
    tmp_405_fu_4164_p1 = MUL_DP_ret72_reg_6382_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_406_fu_3822_p1() {
    tmp_406_fu_3822_p1 = grp_MUL_DP_fu_2659_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_407_fu_4177_p1() {
    tmp_407_fu_4177_p1 = MUL_DP_ret73_reg_6387_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_408_fu_3837_p1() {
    tmp_408_fu_3837_p1 = grp_MUL_DP_fu_2666_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_409_fu_4190_p1() {
    tmp_409_fu_4190_p1 = MUL_DP_ret74_reg_6392_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_410_fu_3852_p1() {
    tmp_410_fu_3852_p1 = grp_MUL_DP_fu_2673_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_411_fu_4203_p1() {
    tmp_411_fu_4203_p1 = MUL_DP_ret75_reg_6397_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_412_fu_3867_p1() {
    tmp_412_fu_3867_p1 = grp_MUL_DP_fu_2680_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_413_fu_4216_p1() {
    tmp_413_fu_4216_p1 = MUL_DP_ret76_reg_6402_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_414_fu_3882_p1() {
    tmp_414_fu_3882_p1 = grp_MUL_DP_fu_2687_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_415_fu_4229_p1() {
    tmp_415_fu_4229_p1 = MUL_DP_ret77_reg_6407_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_416_fu_3897_p1() {
    tmp_416_fu_3897_p1 = grp_MUL_DP_fu_2694_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_417_fu_4242_p1() {
    tmp_417_fu_4242_p1 = MUL_DP_ret78_reg_6412_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_418_fu_3912_p1() {
    tmp_418_fu_3912_p1 = grp_MUL_DP_fu_2701_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_419_fu_4255_p1() {
    tmp_419_fu_4255_p1 = MUL_DP_ret79_reg_6417_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_420_fu_3927_p1() {
    tmp_420_fu_3927_p1 = grp_MUL_DP_fu_2708_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_421_fu_4268_p1() {
    tmp_421_fu_4268_p1 = MUL_DP_ret80_reg_6422_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_422_fu_3942_p1() {
    tmp_422_fu_3942_p1 = grp_MUL_DP_fu_2715_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_423_fu_4281_p1() {
    tmp_423_fu_4281_p1 = MUL_DP_ret81_reg_6427_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_424_fu_3957_p1() {
    tmp_424_fu_3957_p1 = grp_MUL_DP_fu_2722_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_425_fu_4294_p1() {
    tmp_425_fu_4294_p1 = MUL_DP_ret82_reg_6432_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_426_fu_3972_p1() {
    tmp_426_fu_3972_p1 = grp_MUL_DP_fu_2729_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_427_fu_4307_p1() {
    tmp_427_fu_4307_p1 = MUL_DP_ret83_reg_6437_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_428_fu_3987_p1() {
    tmp_428_fu_3987_p1 = grp_MUL_DP_fu_2736_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_429_fu_4320_p1() {
    tmp_429_fu_4320_p1 = MUL_DP_ret84_reg_6442_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_430_fu_4002_p1() {
    tmp_430_fu_4002_p1 = grp_MUL_DP_fu_2743_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_431_fu_4333_p1() {
    tmp_431_fu_4333_p1 = MUL_DP_ret85_reg_6447_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_432_fu_4017_p1() {
    tmp_432_fu_4017_p1 = grp_MUL_DP_fu_2750_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_433_fu_4346_p1() {
    tmp_433_fu_4346_p1 = MUL_DP_ret86_reg_6452_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_434_fu_4032_p1() {
    tmp_434_fu_4032_p1 = grp_MUL_DP_fu_2757_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_435_fu_4359_p1() {
    tmp_435_fu_4359_p1 = MUL_DP_ret87_reg_6457_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_436_fu_4047_p1() {
    tmp_436_fu_4047_p1 = grp_MUL_DP_fu_2764_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_437_fu_4372_p1() {
    tmp_437_fu_4372_p1 = MUL_DP_ret88_reg_6462_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_438_fu_4062_p1() {
    tmp_438_fu_4062_p1 = grp_MUL_DP_fu_2771_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_439_fu_4385_p1() {
    tmp_439_fu_4385_p1 = MUL_DP_ret89_reg_6467_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_43_10_fu_3961_p2() {
    tmp_43_10_fu_3961_p2 = (!reg_3173.read().is_01() || !tmp_424_fu_3957_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3173.read()) + sc_biguint<8>(tmp_424_fu_3957_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_11_fu_3976_p2() {
    tmp_43_11_fu_3976_p2 = (!reg_3177.read().is_01() || !tmp_426_fu_3972_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3177.read()) + sc_biguint<8>(tmp_426_fu_3972_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_12_fu_3991_p2() {
    tmp_43_12_fu_3991_p2 = (!reg_3181.read().is_01() || !tmp_428_fu_3987_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3181.read()) + sc_biguint<8>(tmp_428_fu_3987_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_13_fu_4006_p2() {
    tmp_43_13_fu_4006_p2 = (!reg_3185.read().is_01() || !tmp_430_fu_4002_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3185.read()) + sc_biguint<8>(tmp_430_fu_4002_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_14_fu_4021_p2() {
    tmp_43_14_fu_4021_p2 = (!reg_3189.read().is_01() || !tmp_432_fu_4017_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3189.read()) + sc_biguint<8>(tmp_432_fu_4017_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_15_fu_4036_p2() {
    tmp_43_15_fu_4036_p2 = (!reg_3193.read().is_01() || !tmp_434_fu_4032_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3193.read()) + sc_biguint<8>(tmp_434_fu_4032_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_16_fu_4051_p2() {
    tmp_43_16_fu_4051_p2 = (!reg_3197.read().is_01() || !tmp_436_fu_4047_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3197.read()) + sc_biguint<8>(tmp_436_fu_4047_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_17_fu_4066_p2() {
    tmp_43_17_fu_4066_p2 = (!reg_3201.read().is_01() || !tmp_438_fu_4062_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3201.read()) + sc_biguint<8>(tmp_438_fu_4062_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_18_fu_4081_p2() {
    tmp_43_18_fu_4081_p2 = (!reg_3205.read().is_01() || !tmp_440_fu_4077_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3205.read()) + sc_biguint<8>(tmp_440_fu_4077_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_19_fu_4096_p2() {
    tmp_43_19_fu_4096_p2 = (!reg_3209.read().is_01() || !tmp_442_fu_4092_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3209.read()) + sc_biguint<8>(tmp_442_fu_4092_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_1_fu_3811_p2() {
    tmp_43_1_fu_3811_p2 = (!reg_3133.read().is_01() || !tmp_404_fu_3807_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3133.read()) + sc_biguint<8>(tmp_404_fu_3807_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_20_fu_4111_p2() {
    tmp_43_20_fu_4111_p2 = (!reg_3213.read().is_01() || !tmp_444_fu_4107_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3213.read()) + sc_biguint<8>(tmp_444_fu_4107_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_21_fu_4126_p2() {
    tmp_43_21_fu_4126_p2 = (!reg_3217.read().is_01() || !tmp_446_fu_4122_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3217.read()) + sc_biguint<8>(tmp_446_fu_4122_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_22_fu_4141_p2() {
    tmp_43_22_fu_4141_p2 = (!reg_3221.read().is_01() || !tmp_448_fu_4137_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3221.read()) + sc_biguint<8>(tmp_448_fu_4137_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_2_fu_3826_p2() {
    tmp_43_2_fu_3826_p2 = (!reg_3137.read().is_01() || !tmp_406_fu_3822_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3137.read()) + sc_biguint<8>(tmp_406_fu_3822_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_3_fu_3841_p2() {
    tmp_43_3_fu_3841_p2 = (!reg_3141.read().is_01() || !tmp_408_fu_3837_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3141.read()) + sc_biguint<8>(tmp_408_fu_3837_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_4_fu_3856_p2() {
    tmp_43_4_fu_3856_p2 = (!reg_3145.read().is_01() || !tmp_410_fu_3852_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3145.read()) + sc_biguint<8>(tmp_410_fu_3852_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_5_fu_3871_p2() {
    tmp_43_5_fu_3871_p2 = (!reg_3149.read().is_01() || !tmp_412_fu_3867_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3149.read()) + sc_biguint<8>(tmp_412_fu_3867_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_6_fu_3886_p2() {
    tmp_43_6_fu_3886_p2 = (!reg_3153.read().is_01() || !tmp_414_fu_3882_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3153.read()) + sc_biguint<8>(tmp_414_fu_3882_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_7_fu_3901_p2() {
    tmp_43_7_fu_3901_p2 = (!reg_3157.read().is_01() || !tmp_416_fu_3897_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3157.read()) + sc_biguint<8>(tmp_416_fu_3897_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_8_fu_3916_p2() {
    tmp_43_8_fu_3916_p2 = (!reg_3161.read().is_01() || !tmp_418_fu_3912_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3161.read()) + sc_biguint<8>(tmp_418_fu_3912_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_9_fu_3931_p2() {
    tmp_43_9_fu_3931_p2 = (!reg_3165.read().is_01() || !tmp_420_fu_3927_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3165.read()) + sc_biguint<8>(tmp_420_fu_3927_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_43_s_fu_3946_p2() {
    tmp_43_s_fu_3946_p2 = (!reg_3169.read().is_01() || !tmp_422_fu_3942_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3169.read()) + sc_biguint<8>(tmp_422_fu_3942_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_440_fu_4077_p1() {
    tmp_440_fu_4077_p1 = grp_MUL_DP_fu_2778_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_441_fu_4398_p1() {
    tmp_441_fu_4398_p1 = MUL_DP_ret90_reg_6472_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_442_fu_4092_p1() {
    tmp_442_fu_4092_p1 = grp_MUL_DP_fu_2785_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_443_fu_4411_p1() {
    tmp_443_fu_4411_p1 = MUL_DP_ret91_reg_6477_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_444_fu_4107_p1() {
    tmp_444_fu_4107_p1 = grp_MUL_DP_fu_2792_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_445_fu_4424_p1() {
    tmp_445_fu_4424_p1 = MUL_DP_ret92_reg_6482_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_446_fu_4122_p1() {
    tmp_446_fu_4122_p1 = grp_MUL_DP_fu_2799_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_447_fu_4437_p1() {
    tmp_447_fu_4437_p1 = MUL_DP_ret93_reg_6487_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_448_fu_4137_p1() {
    tmp_448_fu_4137_p1 = grp_MUL_DP_fu_2806_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_449_fu_4450_p1() {
    tmp_449_fu_4450_p1 = MUL_DP_ret94_reg_6492_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_450_fu_4657_p1() {
    tmp_450_fu_4657_p1 = tmp_346_fu_4652_p2.read().range(10-1, 0);
}

void subconv_1x1_4_p::thread_tmp_451_fu_4793_p1() {
    tmp_451_fu_4793_p1 = grp_MUL_DP_fu_2645_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_452_fu_5152_p1() {
    tmp_452_fu_5152_p1 = MUL_DP_ret95_reg_7157_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_453_fu_4808_p1() {
    tmp_453_fu_4808_p1 = grp_MUL_DP_fu_2652_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_454_fu_5165_p1() {
    tmp_454_fu_5165_p1 = MUL_DP_ret96_reg_7162_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_455_fu_4823_p1() {
    tmp_455_fu_4823_p1 = grp_MUL_DP_fu_2659_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_456_fu_5178_p1() {
    tmp_456_fu_5178_p1 = MUL_DP_ret97_reg_7167_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_457_fu_4838_p1() {
    tmp_457_fu_4838_p1 = grp_MUL_DP_fu_2666_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_458_fu_5191_p1() {
    tmp_458_fu_5191_p1 = MUL_DP_ret98_reg_7172_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_459_fu_4853_p1() {
    tmp_459_fu_4853_p1 = grp_MUL_DP_fu_2673_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_45_10_fu_4298_p2() {
    tmp_45_10_fu_4298_p2 = (!buffer1_1_96_4x4_p_V_11_q0.read().is_01() || !tmp_425_fu_4294_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_11_q0.read()) + sc_biguint<8>(tmp_425_fu_4294_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_11_fu_4311_p2() {
    tmp_45_11_fu_4311_p2 = (!buffer1_1_96_4x4_p_V_12_q0.read().is_01() || !tmp_427_fu_4307_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_12_q0.read()) + sc_biguint<8>(tmp_427_fu_4307_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_12_fu_4324_p2() {
    tmp_45_12_fu_4324_p2 = (!buffer1_1_96_4x4_p_V_13_q0.read().is_01() || !tmp_429_fu_4320_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_13_q0.read()) + sc_biguint<8>(tmp_429_fu_4320_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_13_fu_4337_p2() {
    tmp_45_13_fu_4337_p2 = (!buffer1_1_96_4x4_p_V_14_q0.read().is_01() || !tmp_431_fu_4333_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_14_q0.read()) + sc_biguint<8>(tmp_431_fu_4333_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_14_fu_4350_p2() {
    tmp_45_14_fu_4350_p2 = (!buffer1_1_96_4x4_p_V_15_q0.read().is_01() || !tmp_433_fu_4346_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_15_q0.read()) + sc_biguint<8>(tmp_433_fu_4346_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_15_fu_4363_p2() {
    tmp_45_15_fu_4363_p2 = (!buffer1_1_96_4x4_p_V_16_q0.read().is_01() || !tmp_435_fu_4359_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_16_q0.read()) + sc_biguint<8>(tmp_435_fu_4359_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_16_fu_4376_p2() {
    tmp_45_16_fu_4376_p2 = (!buffer1_1_96_4x4_p_V_17_q0.read().is_01() || !tmp_437_fu_4372_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_17_q0.read()) + sc_biguint<8>(tmp_437_fu_4372_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_17_fu_4389_p2() {
    tmp_45_17_fu_4389_p2 = (!buffer1_1_96_4x4_p_V_18_q0.read().is_01() || !tmp_439_fu_4385_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_18_q0.read()) + sc_biguint<8>(tmp_439_fu_4385_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_18_fu_4402_p2() {
    tmp_45_18_fu_4402_p2 = (!buffer1_1_96_4x4_p_V_19_q0.read().is_01() || !tmp_441_fu_4398_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_19_q0.read()) + sc_biguint<8>(tmp_441_fu_4398_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_19_fu_4415_p2() {
    tmp_45_19_fu_4415_p2 = (!buffer1_1_96_4x4_p_V_20_q0.read().is_01() || !tmp_443_fu_4411_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_20_q0.read()) + sc_biguint<8>(tmp_443_fu_4411_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_1_fu_4168_p2() {
    tmp_45_1_fu_4168_p2 = (!buffer1_1_96_4x4_p_V_1_q0.read().is_01() || !tmp_405_fu_4164_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_1_q0.read()) + sc_biguint<8>(tmp_405_fu_4164_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_20_fu_4428_p2() {
    tmp_45_20_fu_4428_p2 = (!buffer1_1_96_4x4_p_V_21_q0.read().is_01() || !tmp_445_fu_4424_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_21_q0.read()) + sc_biguint<8>(tmp_445_fu_4424_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_21_fu_4441_p2() {
    tmp_45_21_fu_4441_p2 = (!buffer1_1_96_4x4_p_V_22_q0.read().is_01() || !tmp_447_fu_4437_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_22_q0.read()) + sc_biguint<8>(tmp_447_fu_4437_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_22_fu_4454_p2() {
    tmp_45_22_fu_4454_p2 = (!buffer1_1_96_4x4_p_V_23_q0.read().is_01() || !tmp_449_fu_4450_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_23_q0.read()) + sc_biguint<8>(tmp_449_fu_4450_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_2_fu_4181_p2() {
    tmp_45_2_fu_4181_p2 = (!buffer1_1_96_4x4_p_V_2_q0.read().is_01() || !tmp_407_fu_4177_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_2_q0.read()) + sc_biguint<8>(tmp_407_fu_4177_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_3_fu_4194_p2() {
    tmp_45_3_fu_4194_p2 = (!buffer1_1_96_4x4_p_V_3_q0.read().is_01() || !tmp_409_fu_4190_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_3_q0.read()) + sc_biguint<8>(tmp_409_fu_4190_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_4_fu_4207_p2() {
    tmp_45_4_fu_4207_p2 = (!buffer1_1_96_4x4_p_V_4_q0.read().is_01() || !tmp_411_fu_4203_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_4_q0.read()) + sc_biguint<8>(tmp_411_fu_4203_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_5_fu_4220_p2() {
    tmp_45_5_fu_4220_p2 = (!buffer1_1_96_4x4_p_V_5_q0.read().is_01() || !tmp_413_fu_4216_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_5_q0.read()) + sc_biguint<8>(tmp_413_fu_4216_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_6_fu_4233_p2() {
    tmp_45_6_fu_4233_p2 = (!buffer1_1_96_4x4_p_V_6_q0.read().is_01() || !tmp_415_fu_4229_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_6_q0.read()) + sc_biguint<8>(tmp_415_fu_4229_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_7_fu_4246_p2() {
    tmp_45_7_fu_4246_p2 = (!buffer1_1_96_4x4_p_V_7_q0.read().is_01() || !tmp_417_fu_4242_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_7_q0.read()) + sc_biguint<8>(tmp_417_fu_4242_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_8_fu_4259_p2() {
    tmp_45_8_fu_4259_p2 = (!buffer1_1_96_4x4_p_V_8_q0.read().is_01() || !tmp_419_fu_4255_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_8_q0.read()) + sc_biguint<8>(tmp_419_fu_4255_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_9_fu_4272_p2() {
    tmp_45_9_fu_4272_p2 = (!buffer1_1_96_4x4_p_V_9_q0.read().is_01() || !tmp_421_fu_4268_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_9_q0.read()) + sc_biguint<8>(tmp_421_fu_4268_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_45_s_fu_4285_p2() {
    tmp_45_s_fu_4285_p2 = (!buffer1_1_96_4x4_p_V_10_q0.read().is_01() || !tmp_423_fu_4281_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_10_q0.read()) + sc_biguint<8>(tmp_423_fu_4281_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_460_fu_5204_p1() {
    tmp_460_fu_5204_p1 = MUL_DP_ret99_reg_7177_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_461_fu_4868_p1() {
    tmp_461_fu_4868_p1 = grp_MUL_DP_fu_2680_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_462_fu_5217_p1() {
    tmp_462_fu_5217_p1 = MUL_DP_ret100_reg_7182_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_463_fu_4883_p1() {
    tmp_463_fu_4883_p1 = grp_MUL_DP_fu_2687_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_464_fu_5230_p1() {
    tmp_464_fu_5230_p1 = MUL_DP_ret101_reg_7187_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_465_fu_4898_p1() {
    tmp_465_fu_4898_p1 = grp_MUL_DP_fu_2694_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_466_fu_5243_p1() {
    tmp_466_fu_5243_p1 = MUL_DP_ret102_reg_7192_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_467_fu_4913_p1() {
    tmp_467_fu_4913_p1 = grp_MUL_DP_fu_2701_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_468_fu_5256_p1() {
    tmp_468_fu_5256_p1 = MUL_DP_ret103_reg_7197_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_469_fu_4928_p1() {
    tmp_469_fu_4928_p1 = grp_MUL_DP_fu_2708_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_470_fu_5269_p1() {
    tmp_470_fu_5269_p1 = MUL_DP_ret104_reg_7202_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_471_fu_4943_p1() {
    tmp_471_fu_4943_p1 = grp_MUL_DP_fu_2715_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_472_fu_5282_p1() {
    tmp_472_fu_5282_p1 = MUL_DP_ret105_reg_7207_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_473_fu_4958_p1() {
    tmp_473_fu_4958_p1 = grp_MUL_DP_fu_2722_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_474_fu_5295_p1() {
    tmp_474_fu_5295_p1 = MUL_DP_ret106_reg_7212_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_475_fu_4973_p1() {
    tmp_475_fu_4973_p1 = grp_MUL_DP_fu_2729_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_476_fu_5308_p1() {
    tmp_476_fu_5308_p1 = MUL_DP_ret107_reg_7217_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_477_fu_4988_p1() {
    tmp_477_fu_4988_p1 = grp_MUL_DP_fu_2736_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_478_fu_5321_p1() {
    tmp_478_fu_5321_p1 = MUL_DP_ret108_reg_7222_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_479_fu_5003_p1() {
    tmp_479_fu_5003_p1 = grp_MUL_DP_fu_2743_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_480_fu_5334_p1() {
    tmp_480_fu_5334_p1 = MUL_DP_ret109_reg_7227_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_481_fu_5018_p1() {
    tmp_481_fu_5018_p1 = grp_MUL_DP_fu_2750_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_482_fu_5347_p1() {
    tmp_482_fu_5347_p1 = MUL_DP_ret110_reg_7232_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_483_fu_5033_p1() {
    tmp_483_fu_5033_p1 = grp_MUL_DP_fu_2757_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_484_fu_5360_p1() {
    tmp_484_fu_5360_p1 = MUL_DP_ret111_reg_7237_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_485_fu_5048_p1() {
    tmp_485_fu_5048_p1 = grp_MUL_DP_fu_2764_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_486_fu_5373_p1() {
    tmp_486_fu_5373_p1 = MUL_DP_ret112_reg_7242_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_487_fu_5063_p1() {
    tmp_487_fu_5063_p1 = grp_MUL_DP_fu_2771_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_488_fu_5386_p1() {
    tmp_488_fu_5386_p1 = MUL_DP_ret113_reg_7247_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_489_fu_5078_p1() {
    tmp_489_fu_5078_p1 = grp_MUL_DP_fu_2778_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_490_fu_5399_p1() {
    tmp_490_fu_5399_p1 = MUL_DP_ret114_reg_7252_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_491_fu_5093_p1() {
    tmp_491_fu_5093_p1 = grp_MUL_DP_fu_2785_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_492_fu_5412_p1() {
    tmp_492_fu_5412_p1 = MUL_DP_ret115_reg_7257_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_493_fu_5108_p1() {
    tmp_493_fu_5108_p1 = grp_MUL_DP_fu_2792_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_494_fu_5425_p1() {
    tmp_494_fu_5425_p1 = MUL_DP_ret116_reg_7262_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_495_fu_5123_p1() {
    tmp_495_fu_5123_p1 = grp_MUL_DP_fu_2799_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_496_fu_5438_p1() {
    tmp_496_fu_5438_p1 = MUL_DP_ret117_reg_7267_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_497_fu_5138_p1() {
    tmp_497_fu_5138_p1 = grp_MUL_DP_fu_2806_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_498_fu_5451_p1() {
    tmp_498_fu_5451_p1 = MUL_DP_ret_reg_7272_1.read().range(8-1, 0);
}

void subconv_1x1_4_p::thread_tmp_49_10_fu_4962_p2() {
    tmp_49_10_fu_4962_p2 = (!reg_3173.read().is_01() || !tmp_473_fu_4958_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3173.read()) + sc_biguint<8>(tmp_473_fu_4958_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_11_fu_4977_p2() {
    tmp_49_11_fu_4977_p2 = (!reg_3177.read().is_01() || !tmp_475_fu_4973_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3177.read()) + sc_biguint<8>(tmp_475_fu_4973_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_12_fu_4992_p2() {
    tmp_49_12_fu_4992_p2 = (!reg_3181.read().is_01() || !tmp_477_fu_4988_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3181.read()) + sc_biguint<8>(tmp_477_fu_4988_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_13_fu_5007_p2() {
    tmp_49_13_fu_5007_p2 = (!reg_3185.read().is_01() || !tmp_479_fu_5003_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3185.read()) + sc_biguint<8>(tmp_479_fu_5003_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_14_fu_5022_p2() {
    tmp_49_14_fu_5022_p2 = (!reg_3189.read().is_01() || !tmp_481_fu_5018_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3189.read()) + sc_biguint<8>(tmp_481_fu_5018_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_15_fu_5037_p2() {
    tmp_49_15_fu_5037_p2 = (!reg_3193.read().is_01() || !tmp_483_fu_5033_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3193.read()) + sc_biguint<8>(tmp_483_fu_5033_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_16_fu_5052_p2() {
    tmp_49_16_fu_5052_p2 = (!reg_3197.read().is_01() || !tmp_485_fu_5048_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3197.read()) + sc_biguint<8>(tmp_485_fu_5048_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_17_fu_5067_p2() {
    tmp_49_17_fu_5067_p2 = (!reg_3201.read().is_01() || !tmp_487_fu_5063_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3201.read()) + sc_biguint<8>(tmp_487_fu_5063_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_18_fu_5082_p2() {
    tmp_49_18_fu_5082_p2 = (!reg_3205.read().is_01() || !tmp_489_fu_5078_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3205.read()) + sc_biguint<8>(tmp_489_fu_5078_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_19_fu_5097_p2() {
    tmp_49_19_fu_5097_p2 = (!reg_3209.read().is_01() || !tmp_491_fu_5093_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3209.read()) + sc_biguint<8>(tmp_491_fu_5093_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_1_fu_4812_p2() {
    tmp_49_1_fu_4812_p2 = (!reg_3133.read().is_01() || !tmp_453_fu_4808_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3133.read()) + sc_biguint<8>(tmp_453_fu_4808_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_20_fu_5112_p2() {
    tmp_49_20_fu_5112_p2 = (!reg_3213.read().is_01() || !tmp_493_fu_5108_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3213.read()) + sc_biguint<8>(tmp_493_fu_5108_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_21_fu_5127_p2() {
    tmp_49_21_fu_5127_p2 = (!reg_3217.read().is_01() || !tmp_495_fu_5123_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3217.read()) + sc_biguint<8>(tmp_495_fu_5123_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_22_fu_5142_p2() {
    tmp_49_22_fu_5142_p2 = (!reg_3221.read().is_01() || !tmp_497_fu_5138_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3221.read()) + sc_biguint<8>(tmp_497_fu_5138_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_2_fu_4827_p2() {
    tmp_49_2_fu_4827_p2 = (!reg_3137.read().is_01() || !tmp_455_fu_4823_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3137.read()) + sc_biguint<8>(tmp_455_fu_4823_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_3_fu_4842_p2() {
    tmp_49_3_fu_4842_p2 = (!reg_3141.read().is_01() || !tmp_457_fu_4838_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3141.read()) + sc_biguint<8>(tmp_457_fu_4838_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_4_fu_4857_p2() {
    tmp_49_4_fu_4857_p2 = (!reg_3145.read().is_01() || !tmp_459_fu_4853_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3145.read()) + sc_biguint<8>(tmp_459_fu_4853_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_5_fu_4872_p2() {
    tmp_49_5_fu_4872_p2 = (!reg_3149.read().is_01() || !tmp_461_fu_4868_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3149.read()) + sc_biguint<8>(tmp_461_fu_4868_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_6_fu_4887_p2() {
    tmp_49_6_fu_4887_p2 = (!reg_3153.read().is_01() || !tmp_463_fu_4883_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3153.read()) + sc_biguint<8>(tmp_463_fu_4883_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_7_fu_4902_p2() {
    tmp_49_7_fu_4902_p2 = (!reg_3157.read().is_01() || !tmp_465_fu_4898_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3157.read()) + sc_biguint<8>(tmp_465_fu_4898_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_8_fu_4917_p2() {
    tmp_49_8_fu_4917_p2 = (!reg_3161.read().is_01() || !tmp_467_fu_4913_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3161.read()) + sc_biguint<8>(tmp_467_fu_4913_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_9_fu_4932_p2() {
    tmp_49_9_fu_4932_p2 = (!reg_3165.read().is_01() || !tmp_469_fu_4928_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3165.read()) + sc_biguint<8>(tmp_469_fu_4928_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_49_s_fu_4947_p2() {
    tmp_49_s_fu_4947_p2 = (!reg_3169.read().is_01() || !tmp_471_fu_4943_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3169.read()) + sc_biguint<8>(tmp_471_fu_4943_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_10_fu_5299_p2() {
    tmp_51_10_fu_5299_p2 = (!buffer1_1_96_4x4_p_V_11_q0.read().is_01() || !tmp_474_fu_5295_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_11_q0.read()) + sc_biguint<8>(tmp_474_fu_5295_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_11_fu_5312_p2() {
    tmp_51_11_fu_5312_p2 = (!buffer1_1_96_4x4_p_V_12_q0.read().is_01() || !tmp_476_fu_5308_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_12_q0.read()) + sc_biguint<8>(tmp_476_fu_5308_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_12_fu_5325_p2() {
    tmp_51_12_fu_5325_p2 = (!buffer1_1_96_4x4_p_V_13_q0.read().is_01() || !tmp_478_fu_5321_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_13_q0.read()) + sc_biguint<8>(tmp_478_fu_5321_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_13_fu_5338_p2() {
    tmp_51_13_fu_5338_p2 = (!buffer1_1_96_4x4_p_V_14_q0.read().is_01() || !tmp_480_fu_5334_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_14_q0.read()) + sc_biguint<8>(tmp_480_fu_5334_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_14_fu_5351_p2() {
    tmp_51_14_fu_5351_p2 = (!buffer1_1_96_4x4_p_V_15_q0.read().is_01() || !tmp_482_fu_5347_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_15_q0.read()) + sc_biguint<8>(tmp_482_fu_5347_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_15_fu_5364_p2() {
    tmp_51_15_fu_5364_p2 = (!buffer1_1_96_4x4_p_V_16_q0.read().is_01() || !tmp_484_fu_5360_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_16_q0.read()) + sc_biguint<8>(tmp_484_fu_5360_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_16_fu_5377_p2() {
    tmp_51_16_fu_5377_p2 = (!buffer1_1_96_4x4_p_V_17_q0.read().is_01() || !tmp_486_fu_5373_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_17_q0.read()) + sc_biguint<8>(tmp_486_fu_5373_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_17_fu_5390_p2() {
    tmp_51_17_fu_5390_p2 = (!buffer1_1_96_4x4_p_V_18_q0.read().is_01() || !tmp_488_fu_5386_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_18_q0.read()) + sc_biguint<8>(tmp_488_fu_5386_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_18_fu_5403_p2() {
    tmp_51_18_fu_5403_p2 = (!buffer1_1_96_4x4_p_V_19_q0.read().is_01() || !tmp_490_fu_5399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_19_q0.read()) + sc_biguint<8>(tmp_490_fu_5399_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_19_fu_5416_p2() {
    tmp_51_19_fu_5416_p2 = (!buffer1_1_96_4x4_p_V_20_q0.read().is_01() || !tmp_492_fu_5412_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_20_q0.read()) + sc_biguint<8>(tmp_492_fu_5412_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_1_fu_5169_p2() {
    tmp_51_1_fu_5169_p2 = (!buffer1_1_96_4x4_p_V_1_q0.read().is_01() || !tmp_454_fu_5165_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_1_q0.read()) + sc_biguint<8>(tmp_454_fu_5165_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_20_fu_5429_p2() {
    tmp_51_20_fu_5429_p2 = (!buffer1_1_96_4x4_p_V_21_q0.read().is_01() || !tmp_494_fu_5425_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_21_q0.read()) + sc_biguint<8>(tmp_494_fu_5425_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_21_fu_5442_p2() {
    tmp_51_21_fu_5442_p2 = (!buffer1_1_96_4x4_p_V_22_q0.read().is_01() || !tmp_496_fu_5438_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_22_q0.read()) + sc_biguint<8>(tmp_496_fu_5438_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_22_fu_5455_p2() {
    tmp_51_22_fu_5455_p2 = (!buffer1_1_96_4x4_p_V_23_q0.read().is_01() || !tmp_498_fu_5451_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_23_q0.read()) + sc_biguint<8>(tmp_498_fu_5451_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_2_fu_5182_p2() {
    tmp_51_2_fu_5182_p2 = (!buffer1_1_96_4x4_p_V_2_q0.read().is_01() || !tmp_456_fu_5178_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_2_q0.read()) + sc_biguint<8>(tmp_456_fu_5178_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_3_fu_5195_p2() {
    tmp_51_3_fu_5195_p2 = (!buffer1_1_96_4x4_p_V_3_q0.read().is_01() || !tmp_458_fu_5191_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_3_q0.read()) + sc_biguint<8>(tmp_458_fu_5191_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_4_fu_5208_p2() {
    tmp_51_4_fu_5208_p2 = (!buffer1_1_96_4x4_p_V_4_q0.read().is_01() || !tmp_460_fu_5204_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_4_q0.read()) + sc_biguint<8>(tmp_460_fu_5204_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_5_fu_5221_p2() {
    tmp_51_5_fu_5221_p2 = (!buffer1_1_96_4x4_p_V_5_q0.read().is_01() || !tmp_462_fu_5217_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_5_q0.read()) + sc_biguint<8>(tmp_462_fu_5217_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_6_fu_5234_p2() {
    tmp_51_6_fu_5234_p2 = (!buffer1_1_96_4x4_p_V_6_q0.read().is_01() || !tmp_464_fu_5230_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_6_q0.read()) + sc_biguint<8>(tmp_464_fu_5230_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_7_fu_5247_p2() {
    tmp_51_7_fu_5247_p2 = (!buffer1_1_96_4x4_p_V_7_q0.read().is_01() || !tmp_466_fu_5243_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_7_q0.read()) + sc_biguint<8>(tmp_466_fu_5243_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_8_fu_5260_p2() {
    tmp_51_8_fu_5260_p2 = (!buffer1_1_96_4x4_p_V_8_q0.read().is_01() || !tmp_468_fu_5256_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_8_q0.read()) + sc_biguint<8>(tmp_468_fu_5256_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_9_fu_5273_p2() {
    tmp_51_9_fu_5273_p2 = (!buffer1_1_96_4x4_p_V_9_q0.read().is_01() || !tmp_470_fu_5269_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_9_q0.read()) + sc_biguint<8>(tmp_470_fu_5269_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_51_s_fu_5286_p2() {
    tmp_51_s_fu_5286_p2 = (!buffer1_1_96_4x4_p_V_10_q0.read().is_01() || !tmp_472_fu_5282_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(buffer1_1_96_4x4_p_V_10_q0.read()) + sc_biguint<8>(tmp_472_fu_5282_p1.read()));
}

void subconv_1x1_4_p::thread_tmp_s_fu_3363_p1() {
    tmp_s_fu_3363_p1 = esl_sext<10,7>(tmp_373_fu_3356_p3.read());
}

void subconv_1x1_4_p::thread_w10_cast1_cast_fu_5667_p1() {
    w10_cast1_cast_fu_5667_p1 = esl_zext<9,3>(w10_mid2_reg_7431.read());
}

void subconv_1x1_4_p::thread_w10_mid2_fu_5566_p3() {
    w10_mid2_fu_5566_p3 = (!tmp_339_fu_5561_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_339_fu_5561_p2.read()[0].to_bool())? ap_const_lv3_1: w10_phi_fu_2637_p4.read());
}

void subconv_1x1_4_p::thread_w10_phi_fu_2637_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_7397.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        w10_phi_fu_2637_p4 = w_21_reg_7442.read();
    } else {
        w10_phi_fu_2637_p4 = w10_reg_2633.read();
    }
}

void subconv_1x1_4_p::thread_w2_cast8_cast1_fu_3529_p1() {
    w2_cast8_cast1_fu_3529_p1 = esl_zext<7,3>(w2_reg_2530.read());
}

void subconv_1x1_4_p::thread_w2_cast8_cast2_fu_3533_p1() {
    w2_cast8_cast2_fu_3533_p1 = esl_zext<13,3>(w2_reg_2530.read());
}

void subconv_1x1_4_p::thread_w2_cast8_cast_fu_3537_p1() {
    w2_cast8_cast_fu_3537_p1 = esl_zext<8,3>(w2_reg_2530.read());
}

void subconv_1x1_4_p::thread_w5_cast5_cast1_fu_4520_p1() {
    w5_cast5_cast1_fu_4520_p1 = esl_zext<13,3>(w5_reg_2565.read());
}

void subconv_1x1_4_p::thread_w5_cast5_cast2_fu_4524_p1() {
    w5_cast5_cast2_fu_4524_p1 = esl_zext<8,3>(w5_reg_2565.read());
}

void subconv_1x1_4_p::thread_w5_cast5_cast_fu_4528_p1() {
    w5_cast5_cast_fu_4528_p1 = esl_zext<7,3>(w5_reg_2565.read());
}

void subconv_1x1_4_p::thread_w_18_fu_3327_p2() {
    w_18_fu_3327_p2 = (!w_mid2_fu_3311_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w_mid2_fu_3311_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_19_fu_3782_p2() {
    w_19_fu_3782_p2 = (!w2_reg_2530.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w2_reg_2530.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_20_fu_4783_p2() {
    w_20_fu_4783_p2 = (!w5_reg_2565.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w5_reg_2565.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_21_fu_5582_p2() {
    w_21_fu_5582_p2 = (!w10_mid2_fu_5566_p3.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(w10_mid2_fu_5566_p3.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void subconv_1x1_4_p::thread_w_cast_cast_fu_3435_p1() {
    w_cast_cast_fu_3435_p1 = esl_zext<9,3>(ap_reg_pp0_iter9_w_mid2_reg_5803.read());
}

void subconv_1x1_4_p::thread_w_mid2_fu_3311_p3() {
    w_mid2_fu_3311_p3 = (!tmp_310_fu_3306_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_310_fu_3306_p2.read()[0].to_bool())? ap_const_lv3_1: w_phi_fu_2510_p4.read());
}

void subconv_1x1_4_p::thread_w_phi_fu_2510_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_2510_p4 = w_18_reg_5814.read();
    } else {
        w_phi_fu_2510_p4 = w_reg_2506.read();
    }
}

void subconv_1x1_4_p::thread_weight_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_0_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_0_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_0_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_0_V_address1 = weight_0_V_addr_6_reg_6904.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_0_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_0_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_0_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_10_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_10_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_10_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_10_V_address1 = weight_10_V_addr_6_reg_7004.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_10_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_10_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_10_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_10_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_11_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_11_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_11_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_11_V_address1 = weight_11_V_addr_6_reg_7014.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_11_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_11_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_11_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_12_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_12_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_12_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_12_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_12_V_address1 = weight_12_V_addr_6_reg_7024.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_12_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_12_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_12_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_12_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_13_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_13_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_13_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_13_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_13_V_address1 = weight_13_V_addr_6_reg_7034.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_13_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_13_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_13_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_13_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_14_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_14_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_14_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_14_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_14_V_address1 = weight_14_V_addr_6_reg_7044.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_14_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_14_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_14_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_14_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_15_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_15_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_15_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_15_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_15_V_address1 = weight_15_V_addr_6_reg_7054.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_15_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_15_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_15_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_16_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_16_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_16_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_16_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_16_V_address1 = weight_16_V_addr_6_reg_7064.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_16_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_16_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_16_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_16_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_17_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_17_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_17_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_17_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_17_V_address1 = weight_17_V_addr_6_reg_7074.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_17_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_17_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_17_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_17_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_18_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_18_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_18_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_18_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_18_V_address1 = weight_18_V_addr_6_reg_7084.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_18_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_18_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_18_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_18_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_19_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_19_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_19_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_19_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_19_V_address1 = weight_19_V_addr_6_reg_7094.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_19_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_19_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_19_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_19_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_1_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_1_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_1_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_1_V_address1 = weight_1_V_addr_6_reg_6914.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_1_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_1_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_20_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_20_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_20_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_20_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_20_V_address1 = weight_20_V_addr_6_reg_7104.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_20_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_20_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_20_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_20_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_21_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_21_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_21_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_21_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_21_V_address1 = weight_21_V_addr_6_reg_7114.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_21_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_21_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_21_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_21_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_22_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_22_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_22_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_22_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_22_V_address1 = weight_22_V_addr_6_reg_7124.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_22_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_22_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_22_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_22_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_23_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_23_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_23_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_23_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_23_V_address1 = weight_23_V_addr_6_reg_7134.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_23_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_23_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_23_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_23_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_2_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_2_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_2_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_2_V_address1 = weight_2_V_addr_6_reg_6924.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_2_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_2_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_3_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_3_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_3_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_3_V_address1 = weight_3_V_addr_6_reg_6934.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_3_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_3_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_4_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_4_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_4_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_4_V_address1 = weight_4_V_addr_6_reg_6944.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_4_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_4_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_5_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_5_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_5_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_5_V_address1 = weight_5_V_addr_6_reg_6954.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_5_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_5_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_6_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_6_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_6_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_6_V_address1 = weight_6_V_addr_6_reg_6964.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_6_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_6_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_7_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_7_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_7_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_7_V_address1 = weight_7_V_addr_6_reg_6974.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_7_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_7_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_8_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_8_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_8_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_8_V_address1 = weight_8_V_addr_6_reg_6984.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_8_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_8_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_9_V_address0 =  (sc_lv<9>) (tmp_395_cast_fu_4743_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_9_V_address0 =  (sc_lv<9>) (tmp_371_cast_fu_3708_p1.read());
    } else {
        weight_9_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_9_V_address1 = weight_9_V_addr_6_reg_6994.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_9_V_address1 =  (sc_lv<9>) (tmp_372_cast_fu_3742_p1.read());
    } else {
        weight_9_V_address1 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void subconv_1x1_4_p::thread_weight_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_4_p::thread_weight_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

