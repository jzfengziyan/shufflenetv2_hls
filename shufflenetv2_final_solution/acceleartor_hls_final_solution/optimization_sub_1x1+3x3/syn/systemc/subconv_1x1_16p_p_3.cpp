#include "subconv_1x1_16p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_10_address0 = ShuffleConvs_1_Downs_266_reg_5492.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_10_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_address1() {
    ShuffleConvs_1_Downs_10_address1 = ShuffleConvs_1_Downs_299_reg_5796.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_10_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_10_d0 = tmp_47_fu_4291_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_10_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_d1() {
    ShuffleConvs_1_Downs_10_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2A)))) {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2A))) {
        ShuffleConvs_1_Downs_10_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_11_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_11_address0 = ShuffleConvs_1_Downs_244_reg_5277.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_11_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_11_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_address1() {
    ShuffleConvs_1_Downs_11_address1 = ShuffleConvs_1_Downs_301_reg_5808.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_11_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_11_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_11_d0 = tmp_68_5_fu_4077_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_11_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_11_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_d1() {
    ShuffleConvs_1_Downs_11_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_29)))) {
        ShuffleConvs_1_Downs_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_29))) {
        ShuffleConvs_1_Downs_11_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_12_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_12_address0 = ShuffleConvs_1_Downs_243_reg_5272.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_12_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_12_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_address1() {
    ShuffleConvs_1_Downs_12_address1 = ShuffleConvs_1_Downs_300_reg_5802.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_12_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_12_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_12_d0 = tmp_68_4_fu_4049_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_12_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_12_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_d1() {
    ShuffleConvs_1_Downs_12_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_28)))) {
        ShuffleConvs_1_Downs_12_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_28))) {
        ShuffleConvs_1_Downs_12_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_13_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_13_address0 = ShuffleConvs_1_Downs_201_reg_4854.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_13_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_13_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_address1() {
    ShuffleConvs_1_Downs_13_address1 = ShuffleConvs_1_Downs_326_reg_5958.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_13_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_13_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_13_d0 = tmp_56_4_fu_3331_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_13_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_13_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_d1() {
    ShuffleConvs_1_Downs_13_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_4)))) {
        ShuffleConvs_1_Downs_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_4))) {
        ShuffleConvs_1_Downs_13_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_14_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_14_address0 = ShuffleConvs_1_Downs_249_reg_5302.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_14_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_14_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_address1() {
    ShuffleConvs_1_Downs_14_address1 = ShuffleConvs_1_Downs_325_reg_5952.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_14_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_14_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_14_d0 = tmp_68_3_fu_4021_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_14_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_14_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_d1() {
    ShuffleConvs_1_Downs_14_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_27)))) {
        ShuffleConvs_1_Downs_14_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_27))) {
        ShuffleConvs_1_Downs_14_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_15_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_15_address0 = ShuffleConvs_1_Downs_239_reg_5252.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_15_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_15_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_address1() {
    ShuffleConvs_1_Downs_15_address1 = ShuffleConvs_1_Downs_292_reg_5754.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_15_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_15_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_15_d0 = tmp_68_2_fu_3993_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_15_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_15_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_d1() {
    ShuffleConvs_1_Downs_15_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_26)))) {
        ShuffleConvs_1_Downs_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_26))) {
        ShuffleConvs_1_Downs_15_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_16_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_16_address0 = ShuffleConvs_1_Downs_242_reg_5267.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_16_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_16_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_address1() {
    ShuffleConvs_1_Downs_16_address1 = ShuffleConvs_1_Downs_298_reg_5790.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_16_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_16_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_16_d0 = tmp_68_1_fu_3965_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_16_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_16_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_d1() {
    ShuffleConvs_1_Downs_16_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_25)))) {
        ShuffleConvs_1_Downs_16_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_25))) {
        ShuffleConvs_1_Downs_16_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_17_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_17_address0 = ShuffleConvs_1_Downs_250_reg_5307.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_17_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_17_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_address1() {
    ShuffleConvs_1_Downs_17_address1 = ShuffleConvs_1_Downs_332_reg_5994.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_17_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_17_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_17_d0 = tmp_43_fu_3937_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_17_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_17_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_d1() {
    ShuffleConvs_1_Downs_17_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_24)))) {
        ShuffleConvs_1_Downs_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_24))) {
        ShuffleConvs_1_Downs_17_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_18_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_18_address0 = ShuffleConvs_1_Downs_226_reg_5083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_18_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_18_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_address1() {
    ShuffleConvs_1_Downs_18_address1 = ShuffleConvs_1_Downs_334_reg_6006.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_18_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_18_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_18_d0 = tmp_63_5_fu_3723_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_18_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_d1() {
    ShuffleConvs_1_Downs_18_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_23)))) {
        ShuffleConvs_1_Downs_18_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_23))) {
        ShuffleConvs_1_Downs_18_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_19_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_19_address0 = ShuffleConvs_1_Downs_221_reg_5058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_19_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_19_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_address1() {
    ShuffleConvs_1_Downs_19_address1 = ShuffleConvs_1_Downs_321_reg_5928.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_19_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_19_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_19_d0 = tmp_63_4_fu_3695_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_19_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_19_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_d1() {
    ShuffleConvs_1_Downs_19_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_22)))) {
        ShuffleConvs_1_Downs_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_22))) {
        ShuffleConvs_1_Downs_19_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_1_address0 = ShuffleConvs_1_Downs_218_reg_5043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_1_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_address1() {
    ShuffleConvs_1_Downs_1_address1 = ShuffleConvs_1_Downs_317_reg_5904.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_1_d0 = tmp_61_2_fu_3629_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_1_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_d1() {
    ShuffleConvs_1_Downs_1_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_8)))) {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_8))) {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_20_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_20_address0 = ShuffleConvs_1_Downs_220_reg_5053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_20_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_20_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_address1() {
    ShuffleConvs_1_Downs_20_address1 = ShuffleConvs_1_Downs_320_reg_5922.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_20_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_20_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_20_d0 = tmp_63_3_fu_3667_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_20_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_20_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_d1() {
    ShuffleConvs_1_Downs_20_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_21)))) {
        ShuffleConvs_1_Downs_20_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_21))) {
        ShuffleConvs_1_Downs_20_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_21_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_21_address0 = ShuffleConvs_1_Downs_225_reg_5078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_21_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_21_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_address1() {
    ShuffleConvs_1_Downs_21_address1 = ShuffleConvs_1_Downs_333_reg_6000.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_21_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_21_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_21_d0 = tmp_63_2_fu_3639_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_21_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_21_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_d1() {
    ShuffleConvs_1_Downs_21_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_20)))) {
        ShuffleConvs_1_Downs_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_20))) {
        ShuffleConvs_1_Downs_21_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_22_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_22_address0 = ShuffleConvs_1_Downs_224_reg_5073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_22_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_22_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_address1() {
    ShuffleConvs_1_Downs_22_address1 = ShuffleConvs_1_Downs_331_reg_5988.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_22_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_22_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_22_d0 = tmp_63_1_fu_3611_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_22_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_22_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_d1() {
    ShuffleConvs_1_Downs_22_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1F)))) {
        ShuffleConvs_1_Downs_22_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1F))) {
        ShuffleConvs_1_Downs_22_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_23_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_23_address0 = ShuffleConvs_1_Downs_219_reg_5048.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_23_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_23_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_address1() {
    ShuffleConvs_1_Downs_23_address1 = ShuffleConvs_1_Downs_319_reg_5916.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_23_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_23_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_23_d0 = tmp_39_fu_3583_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_23_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_23_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_d1() {
    ShuffleConvs_1_Downs_23_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1E)))) {
        ShuffleConvs_1_Downs_23_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1E))) {
        ShuffleConvs_1_Downs_23_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_24_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_24_address0 = ShuffleConvs_1_Downs_197_reg_4834.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_24_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_24_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_address1() {
    ShuffleConvs_1_Downs_24_address1 = ShuffleConvs_1_Downs_318_reg_5910.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_24_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_24_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_24_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_24_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_24_d0 = tmp_56_3_fu_3303_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_24_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_24_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_d1() {
    ShuffleConvs_1_Downs_24_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_3)))) {
        ShuffleConvs_1_Downs_24_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_24_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_24_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_3))) {
        ShuffleConvs_1_Downs_24_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_24_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_25_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_25_address0 = ShuffleConvs_1_Downs_199_reg_4844.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_25_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_25_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_address1() {
    ShuffleConvs_1_Downs_25_address1 = ShuffleConvs_1_Downs_323_reg_5940.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_25_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_25_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_25_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_25_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_25_d0 = tmp_58_5_fu_3369_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_25_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_25_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_d1() {
    ShuffleConvs_1_Downs_25_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1D)))) {
        ShuffleConvs_1_Downs_25_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_25_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_25_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1D))) {
        ShuffleConvs_1_Downs_25_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_25_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_26_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_26_address0 = ShuffleConvs_1_Downs_198_reg_4839.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_26_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_26_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_address1() {
    ShuffleConvs_1_Downs_26_address1 = ShuffleConvs_1_Downs_322_reg_5934.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_26_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_26_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_26_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_26_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_26_d0 = tmp_58_4_fu_3341_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_26_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_26_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_d1() {
    ShuffleConvs_1_Downs_26_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1C)))) {
        ShuffleConvs_1_Downs_26_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_26_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_26_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1C))) {
        ShuffleConvs_1_Downs_26_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_26_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_27_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_27_address0 = ShuffleConvs_1_Downs_200_reg_4849.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_27_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_27_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_address1() {
    ShuffleConvs_1_Downs_27_address1 = ShuffleConvs_1_Downs_324_reg_5946.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_27_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_27_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_27_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_27_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_27_d0 = tmp_58_3_fu_3313_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_27_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_27_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_d1() {
    ShuffleConvs_1_Downs_27_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1B)))) {
        ShuffleConvs_1_Downs_27_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_27_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_27_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1B))) {
        ShuffleConvs_1_Downs_27_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_27_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_28_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_28_address0 = ShuffleConvs_1_Downs_196_reg_4829.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_28_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_28_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_address1() {
    ShuffleConvs_1_Downs_28_address1 = ShuffleConvs_1_Downs_307_reg_5844.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_28_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_28_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_28_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_28_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_28_d0 = tmp_58_2_fu_3285_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_28_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_28_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_d1() {
    ShuffleConvs_1_Downs_28_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1A)))) {
        ShuffleConvs_1_Downs_28_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_28_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_28_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1A))) {
        ShuffleConvs_1_Downs_28_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_28_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_29_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_29_address0 = ShuffleConvs_1_Downs_195_reg_4824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_29_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_29_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_address1() {
    ShuffleConvs_1_Downs_29_address1 = ShuffleConvs_1_Downs_306_reg_5838.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_29_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_29_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_29_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_29_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_29_d0 = tmp_58_1_fu_3257_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_29_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_29_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_d1() {
    ShuffleConvs_1_Downs_29_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_19)))) {
        ShuffleConvs_1_Downs_29_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_29_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_29_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_19))) {
        ShuffleConvs_1_Downs_29_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_29_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_2_address0 = ShuffleConvs_1_Downs_217_reg_5038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_2_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_address1() {
    ShuffleConvs_1_Downs_2_address1 = ShuffleConvs_1_Downs_316_reg_5898.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_2_d0 = tmp_61_1_fu_3601_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_2_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_d1() {
    ShuffleConvs_1_Downs_2_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_7)))) {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_7))) {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_30_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_30_address0 = ShuffleConvs_1_Downs_194_reg_4819.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_30_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_30_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_address1() {
    ShuffleConvs_1_Downs_30_address1 = ShuffleConvs_1_Downs_305_reg_5832.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_30_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_30_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_30_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_30_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_30_d0 = tmp_35_fu_3229_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_30_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_30_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_d1() {
    ShuffleConvs_1_Downs_30_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_18)))) {
        ShuffleConvs_1_Downs_30_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_30_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_30_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_18))) {
        ShuffleConvs_1_Downs_30_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_30_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_31_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_31_address0 = ShuffleConvs_1_Downs_263_reg_5477.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_31_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_31_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_address1() {
    ShuffleConvs_1_Downs_31_address1 = ShuffleConvs_1_Downs_291_reg_5748.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_31_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_31_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_31_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_31_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_31_d0 = tmp_72_5_fu_4421_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_31_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_31_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_d1() {
    ShuffleConvs_1_Downs_31_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_17)))) {
        ShuffleConvs_1_Downs_31_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_31_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_31_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_17))) {
        ShuffleConvs_1_Downs_31_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_31_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_32_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_32_address0 = ShuffleConvs_1_Downs_270_reg_5512.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_32_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_32_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_address1() {
    ShuffleConvs_1_Downs_32_address1 = ShuffleConvs_1_Downs_309_reg_5856.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_32_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_32_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_32_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_32_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_32_d0 = tmp_72_4_fu_4393_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_32_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_32_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_d1() {
    ShuffleConvs_1_Downs_32_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_16)))) {
        ShuffleConvs_1_Downs_32_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_32_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_32_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_16))) {
        ShuffleConvs_1_Downs_32_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_32_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_33_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_33_address0 = ShuffleConvs_1_Downs_271_reg_5517.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_33_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_33_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_address1() {
    ShuffleConvs_1_Downs_33_address1 = ShuffleConvs_1_Downs_310_reg_5862.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_33_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_33_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_33_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_33_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_33_d0 = tmp_72_3_fu_4365_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_33_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_33_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_d1() {
    ShuffleConvs_1_Downs_33_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_15)))) {
        ShuffleConvs_1_Downs_33_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_33_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_33_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_15))) {
        ShuffleConvs_1_Downs_33_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_33_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_34_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_34_address0 = ShuffleConvs_1_Downs_264_reg_5482.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_34_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_34_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_address1() {
    ShuffleConvs_1_Downs_34_address1 = ShuffleConvs_1_Downs_294_reg_5766.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_34_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_34_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_34_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_34_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_34_d0 = tmp_72_2_fu_4337_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_34_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_34_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_d1() {
    ShuffleConvs_1_Downs_34_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_14)))) {
        ShuffleConvs_1_Downs_34_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_34_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_34_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_14))) {
        ShuffleConvs_1_Downs_34_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_34_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_35_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_35_address0 = ShuffleConvs_1_Downs_193_reg_4814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_35_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_35_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_address1() {
    ShuffleConvs_1_Downs_35_address1 = ShuffleConvs_1_Downs_295_reg_5772.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_35_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_35_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_35_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_35_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_35_d0 = tmp_56_2_fu_3275_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_35_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_35_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_d1() {
    ShuffleConvs_1_Downs_35_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2)))) {
        ShuffleConvs_1_Downs_35_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_35_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_35_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2))) {
        ShuffleConvs_1_Downs_35_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_35_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_36_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_36_address0 = ShuffleConvs_1_Downs_269_reg_5507.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_36_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_36_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_address1() {
    ShuffleConvs_1_Downs_36_address1 = ShuffleConvs_1_Downs_304_reg_5826.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_36_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_36_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_36_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_36_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_36_d0 = tmp_72_1_fu_4309_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_36_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_36_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_d1() {
    ShuffleConvs_1_Downs_36_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_13)))) {
        ShuffleConvs_1_Downs_36_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_36_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_36_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_13))) {
        ShuffleConvs_1_Downs_36_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_36_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_37_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_37_address0 = ShuffleConvs_1_Downs_265_reg_5487.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_37_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_37_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_address1() {
    ShuffleConvs_1_Downs_37_address1 = ShuffleConvs_1_Downs_296_reg_5778.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_37_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_37_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_37_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_37_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_37_d0 = tmp_45_fu_4281_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_37_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_37_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_d1() {
    ShuffleConvs_1_Downs_37_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_12)))) {
        ShuffleConvs_1_Downs_37_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_37_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_37_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_12))) {
        ShuffleConvs_1_Downs_37_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_37_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_38_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_38_address0 = ShuffleConvs_1_Downs_248_reg_5297.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_38_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_38_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_address1() {
    ShuffleConvs_1_Downs_38_address1 = ShuffleConvs_1_Downs_313_reg_5880.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_38_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_38_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_38_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_38_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_38_d0 = tmp_66_5_fu_4067_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_38_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_38_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_d1() {
    ShuffleConvs_1_Downs_38_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_11)))) {
        ShuffleConvs_1_Downs_38_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_38_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_38_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_11))) {
        ShuffleConvs_1_Downs_38_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_38_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_39_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_39_address0 = ShuffleConvs_1_Downs_241_reg_5262.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_39_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_39_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_address1() {
    ShuffleConvs_1_Downs_39_address1 = ShuffleConvs_1_Downs_297_reg_5784.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_39_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_39_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_39_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_39_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_39_d0 = tmp_66_4_fu_4039_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_39_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_39_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_d1() {
    ShuffleConvs_1_Downs_39_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_10)))) {
        ShuffleConvs_1_Downs_39_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_39_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_39_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_10))) {
        ShuffleConvs_1_Downs_39_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_39_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_3_address0 = ShuffleConvs_1_Downs_222_reg_5063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_3_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_address1() {
    ShuffleConvs_1_Downs_3_address1 = ShuffleConvs_1_Downs_327_reg_5964.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_3_d0 = tmp_37_fu_3573_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_3_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_3_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_d1() {
    ShuffleConvs_1_Downs_3_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_6)))) {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_6))) {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_40_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_40_address0 = ShuffleConvs_1_Downs_246_reg_5287.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_40_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_40_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_address1() {
    ShuffleConvs_1_Downs_40_address1 = ShuffleConvs_1_Downs_311_reg_5868.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_40_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_40_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_40_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_40_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_40_d0 = tmp_66_3_fu_4011_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_40_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_40_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_d1() {
    ShuffleConvs_1_Downs_40_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_F)))) {
        ShuffleConvs_1_Downs_40_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_40_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_40_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_F))) {
        ShuffleConvs_1_Downs_40_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_40_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_41_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_41_address0 = ShuffleConvs_1_Downs_240_reg_5257.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_41_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_41_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_address1() {
    ShuffleConvs_1_Downs_41_address1 = ShuffleConvs_1_Downs_293_reg_5760.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_41_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_41_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_41_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_41_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_41_d0 = tmp_66_2_fu_3983_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_41_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_41_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_d1() {
    ShuffleConvs_1_Downs_41_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_E)))) {
        ShuffleConvs_1_Downs_41_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_41_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_41_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_E))) {
        ShuffleConvs_1_Downs_41_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_41_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_42_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_42_address0 = ShuffleConvs_1_Downs_247_reg_5292.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_42_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_42_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_address1() {
    ShuffleConvs_1_Downs_42_address1 = ShuffleConvs_1_Downs_312_reg_5874.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_42_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_42_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_42_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_42_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_42_d0 = tmp_66_1_fu_3955_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_42_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_42_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_d1() {
    ShuffleConvs_1_Downs_42_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_D)))) {
        ShuffleConvs_1_Downs_42_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_42_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_42_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_D))) {
        ShuffleConvs_1_Downs_42_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_42_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_43_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_43_address0 = ShuffleConvs_1_Downs_245_reg_5282.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_43_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_43_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_address1() {
    ShuffleConvs_1_Downs_43_address1 = ShuffleConvs_1_Downs_308_reg_5850.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_43_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_43_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_43_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_43_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_1_Downs_43_d0 = tmp_41_fu_3927_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_43_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_43_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_d1() {
    ShuffleConvs_1_Downs_43_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_C)))) {
        ShuffleConvs_1_Downs_43_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_43_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_43_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_C))) {
        ShuffleConvs_1_Downs_43_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_43_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_44_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_44_address0 = ShuffleConvs_1_Downs_216_reg_5033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_44_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_44_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_address1() {
    ShuffleConvs_1_Downs_44_address1 = ShuffleConvs_1_Downs_289_reg_5736.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_44_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_44_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_44_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_44_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_44_d0 = tmp_61_5_fu_3713_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_44_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_44_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_d1() {
    ShuffleConvs_1_Downs_44_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_B)))) {
        ShuffleConvs_1_Downs_44_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_44_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_44_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_B))) {
        ShuffleConvs_1_Downs_44_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_44_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_45_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_45_address0 = ShuffleConvs_1_Downs_215_reg_5028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_45_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_45_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_address1() {
    ShuffleConvs_1_Downs_45_address1 = ShuffleConvs_1_Downs_287_reg_5724.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_45_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_45_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_45_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_45_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_45_d0 = tmp_61_4_fu_3685_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_45_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_45_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_d1() {
    ShuffleConvs_1_Downs_45_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_A)))) {
        ShuffleConvs_1_Downs_45_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_45_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_45_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_A))) {
        ShuffleConvs_1_Downs_45_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_45_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_46_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_46_address0 = ShuffleConvs_1_Downs_192_reg_4809.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_46_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_46_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_address1() {
    ShuffleConvs_1_Downs_46_address1 = ShuffleConvs_1_Downs_290_reg_5742.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_46_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_46_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_46_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_46_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_46_d0 = tmp_56_1_fu_3247_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_46_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_46_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_d1() {
    ShuffleConvs_1_Downs_46_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1)))) {
        ShuffleConvs_1_Downs_46_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_46_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_46_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1))) {
        ShuffleConvs_1_Downs_46_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_46_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_47_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_47_address0 = ShuffleConvs_1_Downs_191_reg_4804.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_47_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_47_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_address1() {
    ShuffleConvs_1_Downs_47_address1 = ShuffleConvs_1_Downs_288_reg_5730.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_47_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_47_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_47_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_47_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_47_d0 = tmp_33_fu_3219_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_47_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_47_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_d1() {
    ShuffleConvs_1_Downs_47_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_0)))) {
        ShuffleConvs_1_Downs_47_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_47_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_47_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_0))) {
        ShuffleConvs_1_Downs_47_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_47_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_4_address0 = ShuffleConvs_1_Downs_202_reg_4859.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_4_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_address1() {
    ShuffleConvs_1_Downs_4_address1 = ShuffleConvs_1_Downs_330_reg_5982.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_1_Downs_4_d0 = tmp_56_5_fu_3359_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_4_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_4_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_d1() {
    ShuffleConvs_1_Downs_4_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_5)))) {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_5))) {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_5_address0 = ShuffleConvs_1_Downs_274_reg_5532.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_5_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_address1() {
    ShuffleConvs_1_Downs_5_address1 = ShuffleConvs_1_Downs_329_reg_5976.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_5_d0 = tmp_74_5_fu_4431_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_5_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_5_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_d1() {
    ShuffleConvs_1_Downs_5_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_16) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_17) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_18) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_19) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1A) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1B) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1C) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1D) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1E) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_1F) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_20) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_21) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_22) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_23) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_24) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_25) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_26) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_27) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_28) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_29) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2A) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2B) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2C) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2D) && 
          !esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2E)))) {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1E) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_1F) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2E))) {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_6_address0 = ShuffleConvs_1_Downs_272_reg_5522.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_6_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_address1() {
    ShuffleConvs_1_Downs_6_address1 = ShuffleConvs_1_Downs_314_reg_5886.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_6_d0 = tmp_74_4_fu_4403_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_6_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_d1() {
    ShuffleConvs_1_Downs_6_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2E)))) {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2E))) {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_7_address0 = ShuffleConvs_1_Downs_273_reg_5527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_7_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_address1() {
    ShuffleConvs_1_Downs_7_address1 = ShuffleConvs_1_Downs_315_reg_5892.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_7_d0 = tmp_74_3_fu_4375_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_7_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_7_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_d1() {
    ShuffleConvs_1_Downs_7_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2D)))) {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2D))) {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_8_address0 = ShuffleConvs_1_Downs_267_reg_5497.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_8_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_address1() {
    ShuffleConvs_1_Downs_8_address1 = ShuffleConvs_1_Downs_302_reg_5814.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_8_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_8_d0 = tmp_74_2_fu_4347_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_8_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_8_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_d1() {
    ShuffleConvs_1_Downs_8_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2C)))) {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2C))) {
        ShuffleConvs_1_Downs_8_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_9_address0 = ShuffleConvs_1_Downs_268_reg_5502.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_9_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_address1() {
    ShuffleConvs_1_Downs_9_address1 = ShuffleConvs_1_Downs_303_reg_5820.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_9_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_1_Downs_9_d0 = tmp_74_1_fu_4319_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_9_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_9_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_d1() {
    ShuffleConvs_1_Downs_9_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_2B)))) {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_2B))) {
        ShuffleConvs_1_Downs_9_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_address0 = ShuffleConvs_1_Downs_223_reg_5068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<9>) (tmp_331_cast_fu_2964_p1.read());
    } else {
        ShuffleConvs_1_Downs_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_address1() {
    ShuffleConvs_1_Downs_address1 = ShuffleConvs_1_Downs_328_reg_5970.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_1_Downs_d0 = tmp_61_3_fu_3657_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_1_Downs_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_d1() {
    ShuffleConvs_1_Downs_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,6,6>(co_cast_mid2_v_reg_4758.read(), ap_const_lv6_9)))) {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_437_fu_4728_p3.read()) && 
         esl_seteq<1,6,6>(ap_reg_pp1_iter2_co16_mid2_reg_5705.read(), ap_const_lv6_9))) {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[39];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[7];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[8];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[10];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[11];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[12];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[13];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[14];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[16];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[17];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[18];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[19];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[20];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[21];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[22];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[23];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[24];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[25];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[26];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[27];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[28];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[29];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[30];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[31];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[32];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[33];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[34];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[35];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[36];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[37];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[38];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[40];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[2];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[3];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[4];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[5];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[6];
}

void subconv_1x1_16p_p::thread_ap_block_pp0_stage0_flag00000000() {
    ap_block_pp0_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_pp0_stage0_flag00011001() {
    ap_block_pp0_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_pp1_stage0_flag00000000() {
    ap_block_pp1_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_pp1_stage0_flag00011001() {
    ap_block_pp1_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_pp1_stage0_flag00011011() {
    ap_block_pp1_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state42_pp1_stage0_iter0() {
    ap_block_state42_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state43_pp1_stage0_iter1() {
    ap_block_state43_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state44_pp1_stage0_iter2() {
    ap_block_state44_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state45_pp1_stage0_iter3() {
    ap_block_state45_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten_fu_2826_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_condition_pp1_exit_iter0_state42() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_4437_p2.read())) {
        ap_condition_pp1_exit_iter0_state42 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state42 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void subconv_1x1_16p_p::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void subconv_1x1_16p_p::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_bias_V_address0() {
    bias_V_address0 =  (sc_lv<6>) (co_cast_mid2_fu_2878_p1.read());
}

void subconv_1x1_16p_p::thread_bias_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bias_V_ce0 = ap_const_logic_1;
    } else {
        bias_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ci10_cast7_fu_3810_p1() {
    ci10_cast7_fu_3810_p1 = esl_zext<32,6>(ci10_reg_2622.read());
}

void subconv_1x1_16p_p::thread_ci12_cast4_fu_4164_p1() {
    ci12_cast4_fu_4164_p1 = esl_zext<32,6>(ci12_reg_2657.read());
}

void subconv_1x1_16p_p::thread_ci6_cast_fu_3456_p1() {
    ci6_cast_fu_3456_p1 = esl_zext<32,6>(ci6_reg_2587.read());
}

void subconv_1x1_16p_p::thread_ci_10_fu_3549_p2() {
    ci_10_fu_3549_p2 = (!ci6_reg_2587.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci6_reg_2587.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_11_fu_3903_p2() {
    ci_11_fu_3903_p2 = (!ci10_reg_2622.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci10_reg_2622.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_13_fu_4257_p2() {
    ci_13_fu_4257_p2 = (!ci12_reg_2657.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci12_reg_2657.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_9_fu_3195_p2() {
    ci_9_fu_3195_p2 = (!ci_reg_2552.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci_reg_2552.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_cast_fu_3102_p1() {
    ci_cast_fu_3102_p1 = esl_zext<32,6>(ci_reg_2552.read());
}

void subconv_1x1_16p_p::thread_co16_mid2_fu_4499_p3() {
    co16_mid2_fu_4499_p3 = (!exitcond_flatten10_reg_5692.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten10_reg_5692.read()[0].to_bool())? co_21_fu_4469_p2.read(): co16_phi_fu_2683_p4.read());
}

void subconv_1x1_16p_p::thread_co16_phi_fu_2683_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co16_phi_fu_2683_p4 = co16_mid2_reg_5705.read();
    } else {
        co16_phi_fu_2683_p4 = co16_reg_2679.read();
    }
}

void subconv_1x1_16p_p::thread_co_20_fu_2858_p2() {
    co_20_fu_2858_p2 = (!co_phi_fu_2485_p4.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co_phi_fu_2485_p4.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_co_21_fu_4469_p2() {
    co_21_fu_4469_p2 = (!co16_phi_fu_2683_p4.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co16_phi_fu_2683_p4.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_co_cast_mid2_fu_2878_p1() {
    co_cast_mid2_fu_2878_p1 = esl_zext<32,6>(co_cast_mid2_v_fu_2871_p3.read());
}

void subconv_1x1_16p_p::thread_co_cast_mid2_v_fu_2871_p3() {
    co_cast_mid2_v_fu_2871_p3 = (!exitcond_flatten8_reg_4745.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten8_reg_4745.read()[0].to_bool())? co_20_fu_2858_p2.read(): co_phi_fu_2485_p4.read());
}

void subconv_1x1_16p_p::thread_co_phi_fu_2485_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4736.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co_phi_fu_2485_p4 = co_cast_mid2_v_reg_4758.read();
    } else {
        co_phi_fu_2485_p4 = co_reg_2481.read();
    }
}

void subconv_1x1_16p_p::thread_exitcond29_fu_3055_p2() {
    exitcond29_fu_3055_p2 = (!h1_reg_2528.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h1_reg_2528.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond30_fu_3409_p2() {
    exitcond30_fu_3409_p2 = (!h4_reg_2563.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h4_reg_2563.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond31_fu_3090_p2() {
    exitcond31_fu_3090_p2 = (!w2_reg_2540.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w2_reg_2540.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond32_fu_3763_p2() {
    exitcond32_fu_3763_p2 = (!h8_reg_2598.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h8_reg_2598.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond33_fu_3444_p2() {
    exitcond33_fu_3444_p2 = (!w5_reg_2575.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w5_reg_2575.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond34_fu_3189_p2() {
    exitcond34_fu_3189_p2 = (!ci_reg_2552.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_2552.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond35_fu_4117_p2() {
    exitcond35_fu_4117_p2 = (!h12_reg_2633.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h12_reg_2633.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond36_fu_3798_p2() {
    exitcond36_fu_3798_p2 = (!w9_reg_2610.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w9_reg_2610.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond37_fu_3543_p2() {
    exitcond37_fu_3543_p2 = (!ci6_reg_2587.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci6_reg_2587.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond38_fu_4152_p2() {
    exitcond38_fu_4152_p2 = (!w13_reg_2645.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_2645.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond39_fu_3897_p2() {
    exitcond39_fu_3897_p2 = (!ci10_reg_2622.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_2622.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond40_fu_4487_p2() {
    exitcond40_fu_4487_p2 = (!w18_phi_fu_2718_p4.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w18_phi_fu_2718_p4.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond41_fu_4251_p2() {
    exitcond41_fu_4251_p2 = (!ci12_reg_2657.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci12_reg_2657.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond54_mid_fu_2894_p2() {
    exitcond54_mid_fu_2894_p2 = (exitcond_fu_2888_p2.read() & not_exitcond_flatten_fu_2883_p2.read());
}

void subconv_1x1_16p_p::thread_exitcond_flatten10_fu_4449_p2() {
    exitcond_flatten10_fu_4449_p2 = (!indvar_flatten6_reg_2691.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten6_reg_2691.read() == ap_const_lv10_100);
}

void subconv_1x1_16p_p::thread_exitcond_flatten8_fu_2838_p2() {
    exitcond_flatten8_fu_2838_p2 = (!indvar_flatten_reg_2493.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2493.read() == ap_const_lv10_100);
}

void subconv_1x1_16p_p::thread_exitcond_flatten9_fu_4437_p2() {
    exitcond_flatten9_fu_4437_p2 = (!indvar_flatten5_reg_2668.read().is_01() || !ap_const_lv14_3000.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten5_reg_2668.read() == ap_const_lv14_3000);
}

void subconv_1x1_16p_p::thread_exitcond_flatten_fu_2826_p2() {
    exitcond_flatten_fu_2826_p2 = (!indvar_flatten4_reg_2470.read().is_01() || !ap_const_lv14_3000.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten4_reg_2470.read() == ap_const_lv14_3000);
}

void subconv_1x1_16p_p::thread_exitcond_fu_2888_p2() {
    exitcond_fu_2888_p2 = (!w_phi_fu_2520_p4.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w_phi_fu_2520_p4.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond_mid_fu_4493_p2() {
    exitcond_mid_fu_4493_p2 = (exitcond40_fu_4487_p2.read() & not_exitcond_flatten_1_fu_4482_p2.read());
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2726_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2726_a_V = weight_18_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2726_a_V = weight_12_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2726_a_V = weight_6_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2726_a_V = weight_0_V_q0.read();
    } else {
        grp_MUL_DP_fu_2726_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2726_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_2726_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2726_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2726_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2726_b_V = weight_42_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2726_b_V = weight_36_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2726_b_V = weight_30_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2726_b_V = weight_24_V_q0.read();
    } else {
        grp_MUL_DP_fu_2726_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2735_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2735_a_V = weight_19_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2735_a_V = weight_13_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2735_a_V = weight_7_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2735_a_V = weight_1_V_q0.read();
    } else {
        grp_MUL_DP_fu_2735_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2735_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_2735_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2735_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2735_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2735_b_V = weight_43_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2735_b_V = weight_37_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2735_b_V = weight_31_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2735_b_V = weight_25_V_q0.read();
    } else {
        grp_MUL_DP_fu_2735_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2744_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2744_a_V = weight_20_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2744_a_V = weight_14_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2744_a_V = weight_8_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2744_a_V = weight_2_V_q0.read();
    } else {
        grp_MUL_DP_fu_2744_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2744_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_2744_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2744_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2744_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2744_b_V = weight_44_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2744_b_V = weight_38_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2744_b_V = weight_32_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2744_b_V = weight_26_V_q0.read();
    } else {
        grp_MUL_DP_fu_2744_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2753_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2753_a_V = weight_21_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2753_a_V = weight_15_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2753_a_V = weight_9_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2753_a_V = weight_3_V_q0.read();
    } else {
        grp_MUL_DP_fu_2753_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2753_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_2753_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2753_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2753_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2753_b_V = weight_45_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2753_b_V = weight_39_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2753_b_V = weight_33_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2753_b_V = weight_27_V_q0.read();
    } else {
        grp_MUL_DP_fu_2753_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2762_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2762_a_V = weight_22_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2762_a_V = weight_16_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2762_a_V = weight_10_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2762_a_V = weight_4_V_q0.read();
    } else {
        grp_MUL_DP_fu_2762_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2762_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_2762_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2762_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2762_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2762_b_V = weight_46_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2762_b_V = weight_40_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2762_b_V = weight_34_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2762_b_V = weight_28_V_q0.read();
    } else {
        grp_MUL_DP_fu_2762_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2771_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2771_a_V = weight_23_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2771_a_V = weight_17_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2771_a_V = weight_11_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2771_a_V = weight_5_V_q0.read();
    } else {
        grp_MUL_DP_fu_2771_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2771_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_2771_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2771_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2771_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_2771_b_V = weight_47_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_2771_b_V = weight_41_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2771_b_V = weight_35_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_2771_b_V = weight_29_V_q0.read();
    } else {
        grp_MUL_DP_fu_2771_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_h12_cast6_cast_fu_4083_p1() {
    h12_cast6_cast_fu_4083_p1 = esl_zext<11,5>(h12_reg_2633.read());
}

void subconv_1x1_16p_p::thread_h17_cast2_mid2_fu_4525_p3() {
    h17_cast2_mid2_fu_4525_p3 = (!exitcond_mid_fu_4493_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond_mid_fu_4493_p2.read()[0].to_bool())? h_3_fu_4506_p2.read(): h17_mid_fu_4475_p3.read());
}

void subconv_1x1_16p_p::thread_h17_mid_fu_4475_p3() {
    h17_mid_fu_4475_p3 = (!exitcond_flatten10_reg_5692.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten10_reg_5692.read()[0].to_bool())? ap_const_lv5_1: h17_phi_fu_2706_p4.read());
}

void subconv_1x1_16p_p::thread_h17_phi_fu_2706_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h17_phi_fu_2706_p4 = h17_cast2_mid2_reg_5717.read();
    } else {
        h17_phi_fu_2706_p4 = h17_reg_2702.read();
    }
}

void subconv_1x1_16p_p::thread_h1_cast_cast_fu_3021_p1() {
    h1_cast_cast_fu_3021_p1 = esl_zext<11,5>(h1_reg_2528.read());
}

void subconv_1x1_16p_p::thread_h4_cast_cast_fu_3375_p1() {
    h4_cast_cast_fu_3375_p1 = esl_zext<11,5>(h4_reg_2563.read());
}

void subconv_1x1_16p_p::thread_h8_cast9_cast_fu_3729_p1() {
    h8_cast9_cast_fu_3729_p1 = esl_zext<11,5>(h8_reg_2598.read());
}

void subconv_1x1_16p_p::thread_h_1_fu_3450_p2() {
    h_1_fu_3450_p2 = (!h4_reg_2563.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h4_reg_2563.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_21_fu_2900_p2() {
    h_21_fu_2900_p2 = (!h_mid_fu_2864_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h_mid_fu_2864_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_2_fu_3804_p2() {
    h_2_fu_3804_p2 = (!h8_reg_2598.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h8_reg_2598.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_3_fu_4506_p2() {
    h_3_fu_4506_p2 = (!h17_mid_fu_4475_p3.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h17_mid_fu_4475_p3.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_4_fu_4158_p2() {
    h_4_fu_4158_p2 = (!h12_reg_2633.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h12_reg_2633.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_9_fu_3096_p2() {
    h_9_fu_3096_p2 = (!h1_reg_2528.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h1_reg_2528.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_cast_mid2_fu_2919_p3() {
    h_cast_mid2_fu_2919_p3 = (!exitcond54_mid_fu_2894_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond54_mid_fu_2894_p2.read()[0].to_bool())? h_21_fu_2900_p2.read(): h_mid_fu_2864_p3.read());
}

void subconv_1x1_16p_p::thread_h_mid_fu_2864_p3() {
    h_mid_fu_2864_p3 = (!exitcond_flatten8_reg_4745.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten8_reg_4745.read()[0].to_bool())? ap_const_lv5_1: h_phi_fu_2508_p4.read());
}

void subconv_1x1_16p_p::thread_h_phi_fu_2508_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4736.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h_phi_fu_2508_p4 = h_cast_mid2_reg_4769.read();
    } else {
        h_phi_fu_2508_p4 = h_reg_2504.read();
    }
}

void subconv_1x1_16p_p::thread_indvar_flatten21_op_fu_4455_p2() {
    indvar_flatten21_op_fu_4455_p2 = (!indvar_flatten6_reg_2691.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten6_reg_2691.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void subconv_1x1_16p_p::thread_indvar_flatten_next1_3_fu_4461_p3() {
    indvar_flatten_next1_3_fu_4461_p3 = (!exitcond_flatten10_fu_4449_p2.read()[0].is_01())? sc_lv<10>(): ((exitcond_flatten10_fu_4449_p2.read()[0].to_bool())? ap_const_lv10_1: indvar_flatten21_op_fu_4455_p2.read());
}

void subconv_1x1_16p_p::thread_indvar_flatten_next1_4_fu_4443_p2() {
    indvar_flatten_next1_4_fu_4443_p2 = (!indvar_flatten5_reg_2668.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(indvar_flatten5_reg_2668.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void subconv_1x1_16p_p::thread_indvar_flatten_next1_fu_2832_p2() {
    indvar_flatten_next1_fu_2832_p2 = (!indvar_flatten4_reg_2470.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(indvar_flatten4_reg_2470.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void subconv_1x1_16p_p::thread_indvar_flatten_next_fu_2850_p3() {
    indvar_flatten_next_fu_2850_p3 = (!exitcond_flatten8_fu_2838_p2.read()[0].is_01())? sc_lv<10>(): ((exitcond_flatten8_fu_2838_p2.read()[0].to_bool())? ap_const_lv10_1: indvar_flatten_op_fu_2844_p2.read());
}

void subconv_1x1_16p_p::thread_indvar_flatten_op_fu_2844_p2() {
    indvar_flatten_op_fu_2844_p2 = (!indvar_flatten_reg_2493.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_2493.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void subconv_1x1_16p_p::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        input_V_address0 = input_V_addr_7_reg_5545.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        input_V_address0 = input_V_addr_6_reg_5320.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        input_V_address0 = input_V_addr_5_reg_5096.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        input_V_address0 = input_V_addr_reg_4872.read();
    } else {
        input_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_input_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_not_exitcond_flatten_1_fu_4482_p2() {
    not_exitcond_flatten_1_fu_4482_p2 = (exitcond_flatten10_reg_5692.read() ^ ap_const_lv1_1);
}

void subconv_1x1_16p_p::thread_not_exitcond_flatten_fu_2883_p2() {
    not_exitcond_flatten_fu_2883_p2 = (exitcond_flatten8_reg_4745.read() ^ ap_const_lv1_1);
}

void subconv_1x1_16p_p::thread_p_shl10_cast_fu_3507_p3() {
    p_shl10_cast_fu_3507_p3 = esl_concat<11,4>(tmp_288_fu_3502_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl11_cast_fu_3523_p1() {
    p_shl11_cast_fu_3523_p1 = esl_zext<15,12>(tmp_421_fu_3515_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl12_cast_fu_3480_p1() {
    p_shl12_cast_fu_3480_p1 = esl_zext<11,10>(tmp_285_fu_3472_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl13_cast_fu_3492_p1() {
    p_shl13_cast_fu_3492_p1 = esl_zext<11,7>(tmp_286_fu_3484_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl14_cast_fu_3741_p1() {
    p_shl14_cast_fu_3741_p1 = esl_zext<10,9>(tmp_271_fu_3733_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl15_cast_fu_3753_p1() {
    p_shl15_cast_fu_3753_p1 = esl_zext<10,6>(tmp_272_fu_3745_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl16_cast_fu_3861_p3() {
    p_shl16_cast_fu_3861_p3 = esl_concat<11,4>(tmp_295_fu_3856_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl17_cast_fu_3877_p1() {
    p_shl17_cast_fu_3877_p1 = esl_zext<15,12>(tmp_434_fu_3869_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl18_cast_fu_3834_p1() {
    p_shl18_cast_fu_3834_p1 = esl_zext<11,10>(tmp_292_fu_3826_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl19_cast_fu_3846_p1() {
    p_shl19_cast_fu_3846_p1 = esl_zext<11,7>(tmp_293_fu_3838_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl1_cast_fu_2945_p1() {
    p_shl1_cast_fu_2945_p1 = esl_zext<10,6>(tmp_407_fu_2938_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl20_cast_fu_4095_p1() {
    p_shl20_cast_fu_4095_p1 = esl_zext<10,9>(tmp_281_fu_4087_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl21_cast_fu_4107_p1() {
    p_shl21_cast_fu_4107_p1 = esl_zext<10,6>(tmp_282_fu_4099_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl22_cast_fu_4215_p3() {
    p_shl22_cast_fu_4215_p3 = esl_concat<11,4>(tmp_304_fu_4210_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl23_cast_fu_4231_p1() {
    p_shl23_cast_fu_4231_p1 = esl_zext<15,12>(tmp_450_fu_4223_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl24_cast_fu_4188_p1() {
    p_shl24_cast_fu_4188_p1 = esl_zext<11,10>(tmp_301_fu_4180_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl25_cast_fu_4200_p1() {
    p_shl25_cast_fu_4200_p1 = esl_zext<11,7>(tmp_302_fu_4192_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl26_cast_fu_4540_p1() {
    p_shl26_cast_fu_4540_p1 = esl_zext<10,9>(tmp_435_fu_4533_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl27_cast_fu_4551_p1() {
    p_shl27_cast_fu_4551_p1 = esl_zext<10,6>(tmp_436_fu_4544_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl2_cast_fu_3033_p1() {
    p_shl2_cast_fu_3033_p1 = esl_zext<10,9>(tmp_264_fu_3025_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl3_cast_fu_3045_p1() {
    p_shl3_cast_fu_3045_p1 = esl_zext<10,6>(tmp_265_fu_3037_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl4_cast_fu_3153_p3() {
    p_shl4_cast_fu_3153_p3 = esl_concat<11,4>(tmp_278_fu_3148_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl5_cast_fu_3169_p1() {
    p_shl5_cast_fu_3169_p1 = esl_zext<15,12>(tmp_408_fu_3161_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl6_cast_fu_3126_p1() {
    p_shl6_cast_fu_3126_p1 = esl_zext<11,10>(tmp_275_fu_3118_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl7_cast_fu_3138_p1() {
    p_shl7_cast_fu_3138_p1 = esl_zext<11,7>(tmp_276_fu_3130_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl8_cast_fu_3387_p1() {
    p_shl8_cast_fu_3387_p1 = esl_zext<10,9>(tmp_267_fu_3379_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl9_cast_fu_3399_p1() {
    p_shl9_cast_fu_3399_p1 = esl_zext<10,6>(tmp_268_fu_3391_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl_cast_fu_2934_p1() {
    p_shl_cast_fu_2934_p1 = esl_zext<10,9>(tmp_406_fu_2927_p3.read());
}

void subconv_1x1_16p_p::thread_tmp_262_fu_2949_p2() {
    tmp_262_fu_2949_p2 = (!p_shl_cast_fu_2934_p1.read().is_01() || !p_shl1_cast_fu_2945_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl_cast_fu_2934_p1.read()) + sc_biguint<10>(p_shl1_cast_fu_2945_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_263_fu_2958_p2() {
    tmp_263_fu_2958_p2 = (!w_cast_cast_fu_2955_p1.read().is_01() || !tmp_262_fu_2949_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w_cast_cast_fu_2955_p1.read()) + sc_biguint<10>(tmp_262_fu_2949_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_264_fu_3025_p3() {
    tmp_264_fu_3025_p3 = esl_concat<5,4>(h1_reg_2528.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_265_fu_3037_p3() {
    tmp_265_fu_3037_p3 = esl_concat<5,1>(h1_reg_2528.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_266_fu_3049_p2() {
    tmp_266_fu_3049_p2 = (!p_shl3_cast_fu_3045_p1.read().is_01() || !p_shl2_cast_fu_3033_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl3_cast_fu_3045_p1.read()) + sc_biguint<10>(p_shl2_cast_fu_3033_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_267_fu_3379_p3() {
    tmp_267_fu_3379_p3 = esl_concat<5,4>(h4_reg_2563.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_268_fu_3391_p3() {
    tmp_268_fu_3391_p3 = esl_concat<5,1>(h4_reg_2563.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_269_fu_3403_p2() {
    tmp_269_fu_3403_p2 = (!p_shl9_cast_fu_3399_p1.read().is_01() || !p_shl8_cast_fu_3387_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl9_cast_fu_3399_p1.read()) + sc_biguint<10>(p_shl8_cast_fu_3387_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_270_fu_3069_p2() {
    tmp_270_fu_3069_p2 = (!tmp_266_reg_4791.read().is_01() || !w2_cast_cast_fu_3065_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_266_reg_4791.read()) + sc_biguint<10>(w2_cast_cast_fu_3065_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_271_fu_3733_p3() {
    tmp_271_fu_3733_p3 = esl_concat<5,4>(h8_reg_2598.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_272_fu_3745_p3() {
    tmp_272_fu_3745_p3 = esl_concat<5,1>(h8_reg_2598.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_273_fu_3757_p2() {
    tmp_273_fu_3757_p2 = (!p_shl15_cast_fu_3753_p1.read().is_01() || !p_shl14_cast_fu_3741_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl15_cast_fu_3753_p1.read()) + sc_biguint<10>(p_shl14_cast_fu_3741_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_274_fu_3423_p2() {
    tmp_274_fu_3423_p2 = (!tmp_269_reg_5015.read().is_01() || !w5_cast_cast_fu_3419_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_269_reg_5015.read()) + sc_biguint<10>(w5_cast_cast_fu_3419_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_275_fu_3118_p3() {
    tmp_275_fu_3118_p3 = esl_concat<6,4>(ci_reg_2552.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_276_fu_3130_p3() {
    tmp_276_fu_3130_p3 = esl_concat<6,1>(ci_reg_2552.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_277_fu_3142_p2() {
    tmp_277_fu_3142_p2 = (!p_shl6_cast_fu_3126_p1.read().is_01() || !p_shl7_cast_fu_3138_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl6_cast_fu_3126_p1.read()) + sc_biguint<11>(p_shl7_cast_fu_3138_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_278_fu_3148_p2() {
    tmp_278_fu_3148_p2 = (!h1_cast_cast_reg_4786.read().is_01() || !tmp_277_fu_3142_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h1_cast_cast_reg_4786.read()) + sc_biguint<11>(tmp_277_fu_3142_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_279_fu_3173_p2() {
    tmp_279_fu_3173_p2 = (!p_shl4_cast_fu_3153_p3.read().is_01() || !p_shl5_cast_fu_3169_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl4_cast_fu_3153_p3.read()) + sc_biguint<15>(p_shl5_cast_fu_3169_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_280_fu_3179_p2() {
    tmp_280_fu_3179_p2 = (!w2_cast_cast3_reg_4799.read().is_01() || !tmp_279_fu_3173_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w2_cast_cast3_reg_4799.read()) + sc_biguint<15>(tmp_279_fu_3173_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_281_fu_4087_p3() {
    tmp_281_fu_4087_p3 = esl_concat<5,4>(h12_reg_2633.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_282_fu_4099_p3() {
    tmp_282_fu_4099_p3 = esl_concat<5,1>(h12_reg_2633.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_283_fu_4111_p2() {
    tmp_283_fu_4111_p2 = (!p_shl21_cast_fu_4107_p1.read().is_01() || !p_shl20_cast_fu_4095_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl21_cast_fu_4107_p1.read()) + sc_biguint<10>(p_shl20_cast_fu_4095_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_284_fu_3777_p2() {
    tmp_284_fu_3777_p2 = (!tmp_273_reg_5239.read().is_01() || !w9_cast8_cast_fu_3773_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_273_reg_5239.read()) + sc_biguint<10>(w9_cast8_cast_fu_3773_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_285_fu_3472_p3() {
    tmp_285_fu_3472_p3 = esl_concat<6,4>(ci6_reg_2587.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_286_fu_3484_p3() {
    tmp_286_fu_3484_p3 = esl_concat<6,1>(ci6_reg_2587.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_287_fu_3496_p2() {
    tmp_287_fu_3496_p2 = (!p_shl12_cast_fu_3480_p1.read().is_01() || !p_shl13_cast_fu_3492_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl12_cast_fu_3480_p1.read()) + sc_biguint<11>(p_shl13_cast_fu_3492_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_288_fu_3502_p2() {
    tmp_288_fu_3502_p2 = (!h4_cast_cast_reg_5010.read().is_01() || !tmp_287_fu_3496_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h4_cast_cast_reg_5010.read()) + sc_biguint<11>(tmp_287_fu_3496_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_289_fu_3527_p2() {
    tmp_289_fu_3527_p2 = (!p_shl10_cast_fu_3507_p3.read().is_01() || !p_shl11_cast_fu_3523_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl10_cast_fu_3507_p3.read()) + sc_biguint<15>(p_shl11_cast_fu_3523_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_290_fu_3533_p2() {
    tmp_290_fu_3533_p2 = (!w5_cast_cast3_reg_5023.read().is_01() || !tmp_289_fu_3527_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w5_cast_cast3_reg_5023.read()) + sc_biguint<15>(tmp_289_fu_3527_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_291_fu_4131_p2() {
    tmp_291_fu_4131_p2 = (!tmp_283_reg_5463.read().is_01() || !w13_cast5_cast_fu_4127_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_283_reg_5463.read()) + sc_biguint<10>(w13_cast5_cast_fu_4127_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_292_fu_3826_p3() {
    tmp_292_fu_3826_p3 = esl_concat<6,4>(ci10_reg_2622.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_293_fu_3838_p3() {
    tmp_293_fu_3838_p3 = esl_concat<6,1>(ci10_reg_2622.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_294_fu_3850_p2() {
    tmp_294_fu_3850_p2 = (!p_shl18_cast_fu_3834_p1.read().is_01() || !p_shl19_cast_fu_3846_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl18_cast_fu_3834_p1.read()) + sc_biguint<11>(p_shl19_cast_fu_3846_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_295_fu_3856_p2() {
    tmp_295_fu_3856_p2 = (!h8_cast9_cast_reg_5234.read().is_01() || !tmp_294_fu_3850_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h8_cast9_cast_reg_5234.read()) + sc_biguint<11>(tmp_294_fu_3850_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_296_fu_3881_p2() {
    tmp_296_fu_3881_p2 = (!p_shl16_cast_fu_3861_p3.read().is_01() || !p_shl17_cast_fu_3877_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl16_cast_fu_3861_p3.read()) + sc_biguint<15>(p_shl17_cast_fu_3877_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_297_fu_3887_p2() {
    tmp_297_fu_3887_p2 = (!w9_cast8_cast3_reg_5247.read().is_01() || !tmp_296_fu_3881_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w9_cast8_cast3_reg_5247.read()) + sc_biguint<15>(tmp_296_fu_3881_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_298_fu_4512_p2() {
    tmp_298_fu_4512_p2 = (exitcond_mid_fu_4493_p2.read() | exitcond_flatten10_reg_5692.read());
}

void subconv_1x1_16p_p::thread_tmp_299_fu_4555_p2() {
    tmp_299_fu_4555_p2 = (!p_shl26_cast_fu_4540_p1.read().is_01() || !p_shl27_cast_fu_4551_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl26_cast_fu_4540_p1.read()) + sc_biguint<10>(p_shl27_cast_fu_4551_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_300_fu_4564_p2() {
    tmp_300_fu_4564_p2 = (!w18_cast1_cast_fu_4561_p1.read().is_01() || !tmp_299_fu_4555_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w18_cast1_cast_fu_4561_p1.read()) + sc_biguint<10>(tmp_299_fu_4555_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_301_fu_4180_p3() {
    tmp_301_fu_4180_p3 = esl_concat<6,4>(ci12_reg_2657.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_302_fu_4192_p3() {
    tmp_302_fu_4192_p3 = esl_concat<6,1>(ci12_reg_2657.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_303_fu_4204_p2() {
    tmp_303_fu_4204_p2 = (!p_shl24_cast_fu_4188_p1.read().is_01() || !p_shl25_cast_fu_4200_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl24_cast_fu_4188_p1.read()) + sc_biguint<11>(p_shl25_cast_fu_4200_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_304_fu_4210_p2() {
    tmp_304_fu_4210_p2 = (!h12_cast6_cast_reg_5458.read().is_01() || !tmp_303_fu_4204_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h12_cast6_cast_reg_5458.read()) + sc_biguint<11>(tmp_303_fu_4204_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_305_fu_4235_p2() {
    tmp_305_fu_4235_p2 = (!p_shl22_cast_fu_4215_p3.read().is_01() || !p_shl23_cast_fu_4231_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl22_cast_fu_4215_p3.read()) + sc_biguint<15>(p_shl23_cast_fu_4231_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_306_fu_4241_p2() {
    tmp_306_fu_4241_p2 = (!w13_cast5_cast1_reg_5472.read().is_01() || !tmp_305_fu_4235_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w13_cast5_cast1_reg_5472.read()) + sc_biguint<15>(tmp_305_fu_4235_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_331_cast_fu_2964_p1() {
    tmp_331_cast_fu_2964_p1 = esl_zext<32,10>(tmp_263_fu_2958_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_338_cast_fu_3074_p1() {
    tmp_338_cast_fu_3074_p1 = esl_zext<32,10>(tmp_270_fu_3069_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_33_fu_3219_p2() {
    tmp_33_fu_3219_p2 = (!ShuffleConvs_1_Downs_203_reg_4950.read().is_01() || !tmp_409_fu_3215_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_203_reg_4950.read()) + sc_biguint<8>(tmp_409_fu_3215_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_342_cast_fu_3428_p1() {
    tmp_342_cast_fu_3428_p1 = esl_zext<32,10>(tmp_274_fu_3423_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_350_cast_fu_3184_p1() {
    tmp_350_cast_fu_3184_p1 = esl_zext<32,15>(tmp_280_fu_3179_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_354_cast_fu_3782_p1() {
    tmp_354_cast_fu_3782_p1 = esl_zext<32,10>(tmp_284_fu_3777_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_35_fu_3229_p2() {
    tmp_35_fu_3229_p2 = (!ShuffleConvs_1_Downs_204_reg_4955.read().is_01() || !tmp_410_fu_3225_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_204_reg_4955.read()) + sc_biguint<8>(tmp_410_fu_3225_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_362_cast_fu_3538_p1() {
    tmp_362_cast_fu_3538_p1 = esl_zext<32,15>(tmp_290_fu_3533_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_363_cast_fu_4136_p1() {
    tmp_363_cast_fu_4136_p1 = esl_zext<32,10>(tmp_291_fu_4131_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_371_cast_fu_3892_p1() {
    tmp_371_cast_fu_3892_p1 = esl_zext<32,15>(tmp_297_fu_3887_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_376_cast_fu_4570_p1() {
    tmp_376_cast_fu_4570_p1 = esl_zext<32,10>(tmp_300_fu_4564_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_37_fu_3573_p2() {
    tmp_37_fu_3573_p2 = (!ShuffleConvs_1_Downs_227_reg_5174.read().is_01() || !tmp_422_fu_3569_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_227_reg_5174.read()) + sc_biguint<8>(tmp_422_fu_3569_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_384_cast_fu_4246_p1() {
    tmp_384_cast_fu_4246_p1 = esl_zext<32,15>(tmp_306_fu_4241_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_39_fu_3583_p2() {
    tmp_39_fu_3583_p2 = (!ShuffleConvs_1_Downs_228_reg_5179.read().is_01() || !tmp_423_fu_3579_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_228_reg_5179.read()) + sc_biguint<8>(tmp_423_fu_3579_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_406_fu_2927_p3() {
    tmp_406_fu_2927_p3 = esl_concat<5,4>(h_cast_mid2_reg_4769.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_407_fu_2938_p3() {
    tmp_407_fu_2938_p3 = esl_concat<5,1>(h_cast_mid2_reg_4769.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_408_fu_3161_p3() {
    tmp_408_fu_3161_p3 = esl_concat<11,1>(tmp_278_fu_3148_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_409_fu_3215_p1() {
    tmp_409_fu_3215_p1 = grp_MUL_DP_fu_2726_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_410_fu_3225_p1() {
    tmp_410_fu_3225_p1 = grp_MUL_DP_fu_2726_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_411_fu_3243_p1() {
    tmp_411_fu_3243_p1 = grp_MUL_DP_fu_2735_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_412_fu_3253_p1() {
    tmp_412_fu_3253_p1 = grp_MUL_DP_fu_2735_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_413_fu_3271_p1() {
    tmp_413_fu_3271_p1 = grp_MUL_DP_fu_2744_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_414_fu_3281_p1() {
    tmp_414_fu_3281_p1 = grp_MUL_DP_fu_2744_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_415_fu_3299_p1() {
    tmp_415_fu_3299_p1 = grp_MUL_DP_fu_2753_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_416_fu_3309_p1() {
    tmp_416_fu_3309_p1 = grp_MUL_DP_fu_2753_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_417_fu_3327_p1() {
    tmp_417_fu_3327_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_418_fu_3337_p1() {
    tmp_418_fu_3337_p1 = grp_MUL_DP_fu_2762_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_419_fu_3355_p1() {
    tmp_419_fu_3355_p1 = grp_MUL_DP_fu_2771_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_41_fu_3927_p2() {
    tmp_41_fu_3927_p2 = (!ShuffleConvs_1_Downs_251_reg_5398.read().is_01() || !tmp_438_fu_3923_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_251_reg_5398.read()) + sc_biguint<8>(tmp_438_fu_3923_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_420_fu_3365_p1() {
    tmp_420_fu_3365_p1 = grp_MUL_DP_fu_2771_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_421_fu_3515_p3() {
    tmp_421_fu_3515_p3 = esl_concat<11,1>(tmp_288_fu_3502_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_422_fu_3569_p1() {
    tmp_422_fu_3569_p1 = grp_MUL_DP_fu_2726_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_423_fu_3579_p1() {
    tmp_423_fu_3579_p1 = grp_MUL_DP_fu_2726_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_424_fu_3597_p1() {
    tmp_424_fu_3597_p1 = grp_MUL_DP_fu_2735_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_425_fu_3607_p1() {
    tmp_425_fu_3607_p1 = grp_MUL_DP_fu_2735_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_426_fu_3625_p1() {
    tmp_426_fu_3625_p1 = grp_MUL_DP_fu_2744_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_427_fu_3635_p1() {
    tmp_427_fu_3635_p1 = grp_MUL_DP_fu_2744_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_428_fu_3653_p1() {
    tmp_428_fu_3653_p1 = grp_MUL_DP_fu_2753_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_429_fu_3663_p1() {
    tmp_429_fu_3663_p1 = grp_MUL_DP_fu_2753_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_430_fu_3681_p1() {
    tmp_430_fu_3681_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_431_fu_3691_p1() {
    tmp_431_fu_3691_p1 = grp_MUL_DP_fu_2762_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_432_fu_3709_p1() {
    tmp_432_fu_3709_p1 = grp_MUL_DP_fu_2771_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_433_fu_3719_p1() {
    tmp_433_fu_3719_p1 = grp_MUL_DP_fu_2771_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_434_fu_3869_p3() {
    tmp_434_fu_3869_p3 = esl_concat<11,1>(tmp_295_fu_3856_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_435_fu_4533_p3() {
    tmp_435_fu_4533_p3 = esl_concat<5,4>(h17_cast2_mid2_reg_5717.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_436_fu_4544_p3() {
    tmp_436_fu_4544_p3 = esl_concat<5,1>(h17_cast2_mid2_reg_5717.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_437_fu_4728_p3() {
    tmp_437_fu_4728_p3 = tmp_48_fu_4627_p50.read().range(7, 7);
}

void subconv_1x1_16p_p::thread_tmp_438_fu_3923_p1() {
    tmp_438_fu_3923_p1 = grp_MUL_DP_fu_2726_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_439_fu_3933_p1() {
    tmp_439_fu_3933_p1 = grp_MUL_DP_fu_2726_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_43_fu_3937_p2() {
    tmp_43_fu_3937_p2 = (!ShuffleConvs_1_Downs_252_reg_5403.read().is_01() || !tmp_439_fu_3933_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_252_reg_5403.read()) + sc_biguint<8>(tmp_439_fu_3933_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_440_fu_3951_p1() {
    tmp_440_fu_3951_p1 = grp_MUL_DP_fu_2735_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_441_fu_3961_p1() {
    tmp_441_fu_3961_p1 = grp_MUL_DP_fu_2735_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_442_fu_3979_p1() {
    tmp_442_fu_3979_p1 = grp_MUL_DP_fu_2744_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_443_fu_3989_p1() {
    tmp_443_fu_3989_p1 = grp_MUL_DP_fu_2744_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_444_fu_4007_p1() {
    tmp_444_fu_4007_p1 = grp_MUL_DP_fu_2753_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_445_fu_4017_p1() {
    tmp_445_fu_4017_p1 = grp_MUL_DP_fu_2753_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_446_fu_4035_p1() {
    tmp_446_fu_4035_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_447_fu_4045_p1() {
    tmp_447_fu_4045_p1 = grp_MUL_DP_fu_2762_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_448_fu_4063_p1() {
    tmp_448_fu_4063_p1 = grp_MUL_DP_fu_2771_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_449_fu_4073_p1() {
    tmp_449_fu_4073_p1 = grp_MUL_DP_fu_2771_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_450_fu_4223_p3() {
    tmp_450_fu_4223_p3 = esl_concat<11,1>(tmp_304_fu_4210_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_451_fu_4277_p1() {
    tmp_451_fu_4277_p1 = grp_MUL_DP_fu_2726_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_452_fu_4287_p1() {
    tmp_452_fu_4287_p1 = grp_MUL_DP_fu_2726_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_453_fu_4305_p1() {
    tmp_453_fu_4305_p1 = grp_MUL_DP_fu_2735_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_454_fu_4315_p1() {
    tmp_454_fu_4315_p1 = grp_MUL_DP_fu_2735_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_455_fu_4333_p1() {
    tmp_455_fu_4333_p1 = grp_MUL_DP_fu_2744_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_456_fu_4343_p1() {
    tmp_456_fu_4343_p1 = grp_MUL_DP_fu_2744_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_457_fu_4361_p1() {
    tmp_457_fu_4361_p1 = grp_MUL_DP_fu_2753_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_458_fu_4371_p1() {
    tmp_458_fu_4371_p1 = grp_MUL_DP_fu_2753_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_459_fu_4389_p1() {
    tmp_459_fu_4389_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_45_fu_4281_p2() {
    tmp_45_fu_4281_p2 = (!ShuffleConvs_1_Downs_275_reg_5623.read().is_01() || !tmp_451_fu_4277_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_275_reg_5623.read()) + sc_biguint<8>(tmp_451_fu_4277_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_460_fu_4399_p1() {
    tmp_460_fu_4399_p1 = grp_MUL_DP_fu_2762_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_461_fu_4417_p1() {
    tmp_461_fu_4417_p1 = grp_MUL_DP_fu_2771_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_462_fu_4427_p1() {
    tmp_462_fu_4427_p1 = grp_MUL_DP_fu_2771_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_47_fu_4291_p2() {
    tmp_47_fu_4291_p2 = (!ShuffleConvs_1_Downs_276_reg_5628.read().is_01() || !tmp_452_fu_4287_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_276_reg_5628.read()) + sc_biguint<8>(tmp_452_fu_4287_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_1_fu_3247_p2() {
    tmp_56_1_fu_3247_p2 = (!ShuffleConvs_1_Downs_205_reg_4960.read().is_01() || !tmp_411_fu_3243_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_205_reg_4960.read()) + sc_biguint<8>(tmp_411_fu_3243_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_2_fu_3275_p2() {
    tmp_56_2_fu_3275_p2 = (!ShuffleConvs_1_Downs_207_reg_4970.read().is_01() || !tmp_413_fu_3271_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_207_reg_4970.read()) + sc_biguint<8>(tmp_413_fu_3271_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_3_fu_3303_p2() {
    tmp_56_3_fu_3303_p2 = (!ShuffleConvs_1_Downs_209_reg_4980.read().is_01() || !tmp_415_fu_3299_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_209_reg_4980.read()) + sc_biguint<8>(tmp_415_fu_3299_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_4_fu_3331_p2() {
    tmp_56_4_fu_3331_p2 = (!ShuffleConvs_1_Downs_211_reg_4990.read().is_01() || !tmp_417_fu_3327_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_211_reg_4990.read()) + sc_biguint<8>(tmp_417_fu_3327_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_5_fu_3359_p2() {
    tmp_56_5_fu_3359_p2 = (!ShuffleConvs_1_Downs_213_reg_5000.read().is_01() || !tmp_419_fu_3355_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_213_reg_5000.read()) + sc_biguint<8>(tmp_419_fu_3355_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_1_fu_3257_p2() {
    tmp_58_1_fu_3257_p2 = (!ShuffleConvs_1_Downs_206_reg_4965.read().is_01() || !tmp_412_fu_3253_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_206_reg_4965.read()) + sc_biguint<8>(tmp_412_fu_3253_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_2_fu_3285_p2() {
    tmp_58_2_fu_3285_p2 = (!ShuffleConvs_1_Downs_208_reg_4975.read().is_01() || !tmp_414_fu_3281_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_208_reg_4975.read()) + sc_biguint<8>(tmp_414_fu_3281_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_3_fu_3313_p2() {
    tmp_58_3_fu_3313_p2 = (!ShuffleConvs_1_Downs_210_reg_4985.read().is_01() || !tmp_416_fu_3309_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_210_reg_4985.read()) + sc_biguint<8>(tmp_416_fu_3309_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_4_fu_3341_p2() {
    tmp_58_4_fu_3341_p2 = (!ShuffleConvs_1_Downs_212_reg_4995.read().is_01() || !tmp_418_fu_3337_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_212_reg_4995.read()) + sc_biguint<8>(tmp_418_fu_3337_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_5_fu_3369_p2() {
    tmp_58_5_fu_3369_p2 = (!ShuffleConvs_1_Downs_214_reg_5005.read().is_01() || !tmp_420_fu_3365_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_214_reg_5005.read()) + sc_biguint<8>(tmp_420_fu_3365_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_1_fu_3601_p2() {
    tmp_61_1_fu_3601_p2 = (!ShuffleConvs_1_Downs_229_reg_5184.read().is_01() || !tmp_424_fu_3597_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_229_reg_5184.read()) + sc_biguint<8>(tmp_424_fu_3597_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_2_fu_3629_p2() {
    tmp_61_2_fu_3629_p2 = (!ShuffleConvs_1_Downs_231_reg_5194.read().is_01() || !tmp_426_fu_3625_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_231_reg_5194.read()) + sc_biguint<8>(tmp_426_fu_3625_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_3_fu_3657_p2() {
    tmp_61_3_fu_3657_p2 = (!ShuffleConvs_1_Downs_233_reg_5204.read().is_01() || !tmp_428_fu_3653_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_233_reg_5204.read()) + sc_biguint<8>(tmp_428_fu_3653_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_4_fu_3685_p2() {
    tmp_61_4_fu_3685_p2 = (!ShuffleConvs_1_Downs_235_reg_5214.read().is_01() || !tmp_430_fu_3681_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_235_reg_5214.read()) + sc_biguint<8>(tmp_430_fu_3681_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_5_fu_3713_p2() {
    tmp_61_5_fu_3713_p2 = (!ShuffleConvs_1_Downs_237_reg_5224.read().is_01() || !tmp_432_fu_3709_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_237_reg_5224.read()) + sc_biguint<8>(tmp_432_fu_3709_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_1_fu_3611_p2() {
    tmp_63_1_fu_3611_p2 = (!ShuffleConvs_1_Downs_230_reg_5189.read().is_01() || !tmp_425_fu_3607_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_230_reg_5189.read()) + sc_biguint<8>(tmp_425_fu_3607_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_2_fu_3639_p2() {
    tmp_63_2_fu_3639_p2 = (!ShuffleConvs_1_Downs_232_reg_5199.read().is_01() || !tmp_427_fu_3635_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_232_reg_5199.read()) + sc_biguint<8>(tmp_427_fu_3635_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_3_fu_3667_p2() {
    tmp_63_3_fu_3667_p2 = (!ShuffleConvs_1_Downs_234_reg_5209.read().is_01() || !tmp_429_fu_3663_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_234_reg_5209.read()) + sc_biguint<8>(tmp_429_fu_3663_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_4_fu_3695_p2() {
    tmp_63_4_fu_3695_p2 = (!ShuffleConvs_1_Downs_236_reg_5219.read().is_01() || !tmp_431_fu_3691_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_236_reg_5219.read()) + sc_biguint<8>(tmp_431_fu_3691_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_5_fu_3723_p2() {
    tmp_63_5_fu_3723_p2 = (!ShuffleConvs_1_Downs_238_reg_5229.read().is_01() || !tmp_433_fu_3719_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_238_reg_5229.read()) + sc_biguint<8>(tmp_433_fu_3719_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_1_fu_3955_p2() {
    tmp_66_1_fu_3955_p2 = (!ShuffleConvs_1_Downs_253_reg_5408.read().is_01() || !tmp_440_fu_3951_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_253_reg_5408.read()) + sc_biguint<8>(tmp_440_fu_3951_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_2_fu_3983_p2() {
    tmp_66_2_fu_3983_p2 = (!ShuffleConvs_1_Downs_255_reg_5418.read().is_01() || !tmp_442_fu_3979_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_255_reg_5418.read()) + sc_biguint<8>(tmp_442_fu_3979_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_3_fu_4011_p2() {
    tmp_66_3_fu_4011_p2 = (!ShuffleConvs_1_Downs_257_reg_5428.read().is_01() || !tmp_444_fu_4007_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_257_reg_5428.read()) + sc_biguint<8>(tmp_444_fu_4007_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_4_fu_4039_p2() {
    tmp_66_4_fu_4039_p2 = (!ShuffleConvs_1_Downs_259_reg_5438.read().is_01() || !tmp_446_fu_4035_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_259_reg_5438.read()) + sc_biguint<8>(tmp_446_fu_4035_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_5_fu_4067_p2() {
    tmp_66_5_fu_4067_p2 = (!ShuffleConvs_1_Downs_261_reg_5448.read().is_01() || !tmp_448_fu_4063_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_261_reg_5448.read()) + sc_biguint<8>(tmp_448_fu_4063_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_1_fu_3965_p2() {
    tmp_68_1_fu_3965_p2 = (!ShuffleConvs_1_Downs_254_reg_5413.read().is_01() || !tmp_441_fu_3961_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_254_reg_5413.read()) + sc_biguint<8>(tmp_441_fu_3961_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_2_fu_3993_p2() {
    tmp_68_2_fu_3993_p2 = (!ShuffleConvs_1_Downs_256_reg_5423.read().is_01() || !tmp_443_fu_3989_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_256_reg_5423.read()) + sc_biguint<8>(tmp_443_fu_3989_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_3_fu_4021_p2() {
    tmp_68_3_fu_4021_p2 = (!ShuffleConvs_1_Downs_258_reg_5433.read().is_01() || !tmp_445_fu_4017_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_258_reg_5433.read()) + sc_biguint<8>(tmp_445_fu_4017_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_4_fu_4049_p2() {
    tmp_68_4_fu_4049_p2 = (!ShuffleConvs_1_Downs_260_reg_5443.read().is_01() || !tmp_447_fu_4045_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_260_reg_5443.read()) + sc_biguint<8>(tmp_447_fu_4045_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_5_fu_4077_p2() {
    tmp_68_5_fu_4077_p2 = (!ShuffleConvs_1_Downs_262_reg_5453.read().is_01() || !tmp_449_fu_4073_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_262_reg_5453.read()) + sc_biguint<8>(tmp_449_fu_4073_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_1_fu_4309_p2() {
    tmp_72_1_fu_4309_p2 = (!ShuffleConvs_1_Downs_277_reg_5633.read().is_01() || !tmp_453_fu_4305_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_277_reg_5633.read()) + sc_biguint<8>(tmp_453_fu_4305_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_2_fu_4337_p2() {
    tmp_72_2_fu_4337_p2 = (!ShuffleConvs_1_Downs_279_reg_5643.read().is_01() || !tmp_455_fu_4333_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_279_reg_5643.read()) + sc_biguint<8>(tmp_455_fu_4333_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_3_fu_4365_p2() {
    tmp_72_3_fu_4365_p2 = (!ShuffleConvs_1_Downs_281_reg_5653.read().is_01() || !tmp_457_fu_4361_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_281_reg_5653.read()) + sc_biguint<8>(tmp_457_fu_4361_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_4_fu_4393_p2() {
    tmp_72_4_fu_4393_p2 = (!ShuffleConvs_1_Downs_283_reg_5663.read().is_01() || !tmp_459_fu_4389_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_283_reg_5663.read()) + sc_biguint<8>(tmp_459_fu_4389_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_5_fu_4421_p2() {
    tmp_72_5_fu_4421_p2 = (!ShuffleConvs_1_Downs_285_reg_5673.read().is_01() || !tmp_461_fu_4417_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_285_reg_5673.read()) + sc_biguint<8>(tmp_461_fu_4417_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_1_fu_4319_p2() {
    tmp_74_1_fu_4319_p2 = (!ShuffleConvs_1_Downs_278_reg_5638.read().is_01() || !tmp_454_fu_4315_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_278_reg_5638.read()) + sc_biguint<8>(tmp_454_fu_4315_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_2_fu_4347_p2() {
    tmp_74_2_fu_4347_p2 = (!ShuffleConvs_1_Downs_280_reg_5648.read().is_01() || !tmp_456_fu_4343_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_280_reg_5648.read()) + sc_biguint<8>(tmp_456_fu_4343_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_3_fu_4375_p2() {
    tmp_74_3_fu_4375_p2 = (!ShuffleConvs_1_Downs_282_reg_5658.read().is_01() || !tmp_458_fu_4371_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_282_reg_5658.read()) + sc_biguint<8>(tmp_458_fu_4371_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_4_fu_4403_p2() {
    tmp_74_4_fu_4403_p2 = (!ShuffleConvs_1_Downs_284_reg_5668.read().is_01() || !tmp_460_fu_4399_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_284_reg_5668.read()) + sc_biguint<8>(tmp_460_fu_4399_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_5_fu_4431_p2() {
    tmp_74_5_fu_4431_p2 = (!ShuffleConvs_1_Downs_286_reg_5678.read().is_01() || !tmp_462_fu_4427_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_286_reg_5678.read()) + sc_biguint<8>(tmp_462_fu_4427_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_s_fu_2906_p2() {
    tmp_s_fu_2906_p2 = (exitcond54_mid_fu_2894_p2.read() | exitcond_flatten8_reg_4745.read());
}

void subconv_1x1_16p_p::thread_w13_cast5_cast1_fu_4123_p1() {
    w13_cast5_cast1_fu_4123_p1 = esl_zext<15,5>(w13_reg_2645.read());
}

void subconv_1x1_16p_p::thread_w13_cast5_cast_fu_4127_p1() {
    w13_cast5_cast_fu_4127_p1 = esl_zext<10,5>(w13_reg_2645.read());
}

void subconv_1x1_16p_p::thread_w18_cast1_cast_fu_4561_p1() {
    w18_cast1_cast_fu_4561_p1 = esl_zext<10,5>(w18_mid2_reg_5711.read());
}

void subconv_1x1_16p_p::thread_w18_mid2_fu_4517_p3() {
    w18_mid2_fu_4517_p3 = (!tmp_298_fu_4512_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_298_fu_4512_p2.read()[0].to_bool())? ap_const_lv5_1: w18_phi_fu_2718_p4.read());
}

void subconv_1x1_16p_p::thread_w18_phi_fu_2718_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w18_phi_fu_2718_p4 = w_30_fu_4622_p2.read();
    } else {
        w18_phi_fu_2718_p4 = w18_reg_2714.read();
    }
}

void subconv_1x1_16p_p::thread_w2_cast_cast3_fu_3061_p1() {
    w2_cast_cast3_fu_3061_p1 = esl_zext<15,5>(w2_reg_2540.read());
}

void subconv_1x1_16p_p::thread_w2_cast_cast_fu_3065_p1() {
    w2_cast_cast_fu_3065_p1 = esl_zext<10,5>(w2_reg_2540.read());
}

void subconv_1x1_16p_p::thread_w5_cast_cast3_fu_3415_p1() {
    w5_cast_cast3_fu_3415_p1 = esl_zext<15,5>(w5_reg_2575.read());
}

void subconv_1x1_16p_p::thread_w5_cast_cast_fu_3419_p1() {
    w5_cast_cast_fu_3419_p1 = esl_zext<10,5>(w5_reg_2575.read());
}

void subconv_1x1_16p_p::thread_w9_cast8_cast3_fu_3769_p1() {
    w9_cast8_cast3_fu_3769_p1 = esl_zext<15,5>(w9_reg_2610.read());
}

void subconv_1x1_16p_p::thread_w9_cast8_cast_fu_3773_p1() {
    w9_cast8_cast_fu_3773_p1 = esl_zext<10,5>(w9_reg_2610.read());
}

void subconv_1x1_16p_p::thread_w_25_fu_3016_p2() {
    w_25_fu_3016_p2 = (!w_mid2_reg_4763.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w_mid2_reg_4763.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_26_fu_3201_p2() {
    w_26_fu_3201_p2 = (!w2_reg_2540.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w2_reg_2540.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_27_fu_3555_p2() {
    w_27_fu_3555_p2 = (!w5_reg_2575.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w5_reg_2575.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_28_fu_3909_p2() {
    w_28_fu_3909_p2 = (!w9_reg_2610.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w9_reg_2610.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_29_fu_4263_p2() {
    w_29_fu_4263_p2 = (!w13_reg_2645.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w13_reg_2645.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_30_fu_4622_p2() {
    w_30_fu_4622_p2 = (!w18_mid2_reg_5711.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w18_mid2_reg_5711.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_cast_cast_fu_2955_p1() {
    w_cast_cast_fu_2955_p1 = esl_zext<10,5>(w_mid2_reg_4763.read());
}

void subconv_1x1_16p_p::thread_w_mid2_fu_2911_p3() {
    w_mid2_fu_2911_p3 = (!tmp_s_fu_2906_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_s_fu_2906_p2.read()[0].to_bool())? ap_const_lv5_1: w_phi_fu_2520_p4.read());
}

void subconv_1x1_16p_p::thread_w_phi_fu_2520_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4736.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_2520_p4 = w_25_fu_3016_p2.read();
    } else {
        w_phi_fu_2520_p4 = w_reg_2516.read();
    }
}

void subconv_1x1_16p_p::thread_weight_0_V_address0() {
    weight_0_V_address0 = weight_0_V_addr_reg_4877.read();
}

void subconv_1x1_16p_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_10_V_address0() {
    weight_10_V_address0 = weight_10_V_addr_reg_5121.read();
}

void subconv_1x1_16p_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_11_V_address0() {
    weight_11_V_address0 = weight_11_V_addr_reg_5126.read();
}

void subconv_1x1_16p_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_12_V_address0() {
    weight_12_V_address0 = weight_12_V_addr_reg_5325.read();
}

void subconv_1x1_16p_p::thread_weight_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_13_V_address0() {
    weight_13_V_address0 = weight_13_V_addr_reg_5330.read();
}

void subconv_1x1_16p_p::thread_weight_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_14_V_address0() {
    weight_14_V_address0 = weight_14_V_addr_reg_5335.read();
}

void subconv_1x1_16p_p::thread_weight_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_15_V_address0() {
    weight_15_V_address0 = weight_15_V_addr_reg_5340.read();
}

void subconv_1x1_16p_p::thread_weight_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_16_V_address0() {
    weight_16_V_address0 = weight_16_V_addr_reg_5345.read();
}

void subconv_1x1_16p_p::thread_weight_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_17_V_address0() {
    weight_17_V_address0 = weight_17_V_addr_reg_5350.read();
}

void subconv_1x1_16p_p::thread_weight_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_18_V_address0() {
    weight_18_V_address0 = weight_18_V_addr_reg_5550.read();
}

void subconv_1x1_16p_p::thread_weight_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_19_V_address0() {
    weight_19_V_address0 = weight_19_V_addr_reg_5555.read();
}

void subconv_1x1_16p_p::thread_weight_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_1_V_address0() {
    weight_1_V_address0 = weight_1_V_addr_reg_4882.read();
}

void subconv_1x1_16p_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_20_V_address0() {
    weight_20_V_address0 = weight_20_V_addr_reg_5560.read();
}

void subconv_1x1_16p_p::thread_weight_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_21_V_address0() {
    weight_21_V_address0 = weight_21_V_addr_reg_5565.read();
}

void subconv_1x1_16p_p::thread_weight_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_22_V_address0() {
    weight_22_V_address0 = weight_22_V_addr_reg_5570.read();
}

void subconv_1x1_16p_p::thread_weight_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_23_V_address0() {
    weight_23_V_address0 = weight_23_V_addr_reg_5575.read();
}

void subconv_1x1_16p_p::thread_weight_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_24_V_address0() {
    weight_24_V_address0 = weight_24_V_addr_reg_4907.read();
}

void subconv_1x1_16p_p::thread_weight_24_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_24_V_ce0 = ap_const_logic_1;
    } else {
        weight_24_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_25_V_address0() {
    weight_25_V_address0 = weight_25_V_addr_reg_4912.read();
}

void subconv_1x1_16p_p::thread_weight_25_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_25_V_ce0 = ap_const_logic_1;
    } else {
        weight_25_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_26_V_address0() {
    weight_26_V_address0 = weight_26_V_addr_reg_4917.read();
}

void subconv_1x1_16p_p::thread_weight_26_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_26_V_ce0 = ap_const_logic_1;
    } else {
        weight_26_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_27_V_address0() {
    weight_27_V_address0 = weight_27_V_addr_reg_4922.read();
}

void subconv_1x1_16p_p::thread_weight_27_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_27_V_ce0 = ap_const_logic_1;
    } else {
        weight_27_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_28_V_address0() {
    weight_28_V_address0 = weight_28_V_addr_reg_4927.read();
}

void subconv_1x1_16p_p::thread_weight_28_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_28_V_ce0 = ap_const_logic_1;
    } else {
        weight_28_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_29_V_address0() {
    weight_29_V_address0 = weight_29_V_addr_reg_4932.read();
}

void subconv_1x1_16p_p::thread_weight_29_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_29_V_ce0 = ap_const_logic_1;
    } else {
        weight_29_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_2_V_address0() {
    weight_2_V_address0 = weight_2_V_addr_reg_4887.read();
}

void subconv_1x1_16p_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_30_V_address0() {
    weight_30_V_address0 = weight_30_V_addr_reg_5131.read();
}

void subconv_1x1_16p_p::thread_weight_30_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_30_V_ce0 = ap_const_logic_1;
    } else {
        weight_30_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_31_V_address0() {
    weight_31_V_address0 = weight_31_V_addr_reg_5136.read();
}

void subconv_1x1_16p_p::thread_weight_31_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_31_V_ce0 = ap_const_logic_1;
    } else {
        weight_31_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_32_V_address0() {
    weight_32_V_address0 = weight_32_V_addr_reg_5141.read();
}

void subconv_1x1_16p_p::thread_weight_32_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_32_V_ce0 = ap_const_logic_1;
    } else {
        weight_32_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_33_V_address0() {
    weight_33_V_address0 = weight_33_V_addr_reg_5146.read();
}

void subconv_1x1_16p_p::thread_weight_33_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_33_V_ce0 = ap_const_logic_1;
    } else {
        weight_33_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_34_V_address0() {
    weight_34_V_address0 = weight_34_V_addr_reg_5151.read();
}

void subconv_1x1_16p_p::thread_weight_34_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_34_V_ce0 = ap_const_logic_1;
    } else {
        weight_34_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_35_V_address0() {
    weight_35_V_address0 = weight_35_V_addr_reg_5156.read();
}

void subconv_1x1_16p_p::thread_weight_35_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_35_V_ce0 = ap_const_logic_1;
    } else {
        weight_35_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_36_V_address0() {
    weight_36_V_address0 = weight_36_V_addr_reg_5355.read();
}

void subconv_1x1_16p_p::thread_weight_36_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_36_V_ce0 = ap_const_logic_1;
    } else {
        weight_36_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_37_V_address0() {
    weight_37_V_address0 = weight_37_V_addr_reg_5360.read();
}

void subconv_1x1_16p_p::thread_weight_37_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_37_V_ce0 = ap_const_logic_1;
    } else {
        weight_37_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_38_V_address0() {
    weight_38_V_address0 = weight_38_V_addr_reg_5365.read();
}

void subconv_1x1_16p_p::thread_weight_38_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_38_V_ce0 = ap_const_logic_1;
    } else {
        weight_38_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_39_V_address0() {
    weight_39_V_address0 = weight_39_V_addr_reg_5370.read();
}

void subconv_1x1_16p_p::thread_weight_39_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_39_V_ce0 = ap_const_logic_1;
    } else {
        weight_39_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_3_V_address0() {
    weight_3_V_address0 = weight_3_V_addr_reg_4892.read();
}

void subconv_1x1_16p_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_40_V_address0() {
    weight_40_V_address0 = weight_40_V_addr_reg_5375.read();
}

void subconv_1x1_16p_p::thread_weight_40_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_40_V_ce0 = ap_const_logic_1;
    } else {
        weight_40_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_41_V_address0() {
    weight_41_V_address0 = weight_41_V_addr_reg_5380.read();
}

void subconv_1x1_16p_p::thread_weight_41_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        weight_41_V_ce0 = ap_const_logic_1;
    } else {
        weight_41_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_42_V_address0() {
    weight_42_V_address0 = weight_42_V_addr_reg_5580.read();
}

void subconv_1x1_16p_p::thread_weight_42_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_42_V_ce0 = ap_const_logic_1;
    } else {
        weight_42_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_43_V_address0() {
    weight_43_V_address0 = weight_43_V_addr_reg_5585.read();
}

void subconv_1x1_16p_p::thread_weight_43_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_43_V_ce0 = ap_const_logic_1;
    } else {
        weight_43_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_44_V_address0() {
    weight_44_V_address0 = weight_44_V_addr_reg_5590.read();
}

void subconv_1x1_16p_p::thread_weight_44_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_44_V_ce0 = ap_const_logic_1;
    } else {
        weight_44_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_45_V_address0() {
    weight_45_V_address0 = weight_45_V_addr_reg_5595.read();
}

void subconv_1x1_16p_p::thread_weight_45_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_45_V_ce0 = ap_const_logic_1;
    } else {
        weight_45_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_46_V_address0() {
    weight_46_V_address0 = weight_46_V_addr_reg_5600.read();
}

void subconv_1x1_16p_p::thread_weight_46_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_46_V_ce0 = ap_const_logic_1;
    } else {
        weight_46_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_47_V_address0() {
    weight_47_V_address0 = weight_47_V_addr_reg_5605.read();
}

void subconv_1x1_16p_p::thread_weight_47_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        weight_47_V_ce0 = ap_const_logic_1;
    } else {
        weight_47_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_4_V_address0() {
    weight_4_V_address0 = weight_4_V_addr_reg_4897.read();
}

void subconv_1x1_16p_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_5_V_address0() {
    weight_5_V_address0 = weight_5_V_addr_reg_4902.read();
}

void subconv_1x1_16p_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_6_V_address0() {
    weight_6_V_address0 = weight_6_V_addr_reg_5101.read();
}

void subconv_1x1_16p_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_7_V_address0() {
    weight_7_V_address0 = weight_7_V_addr_reg_5106.read();
}

void subconv_1x1_16p_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_8_V_address0() {
    weight_8_V_address0 = weight_8_V_addr_reg_5111.read();
}

void subconv_1x1_16p_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_9_V_address0() {
    weight_9_V_address0 = weight_9_V_addr_reg_5116.read();
}

void subconv_1x1_16p_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

}

