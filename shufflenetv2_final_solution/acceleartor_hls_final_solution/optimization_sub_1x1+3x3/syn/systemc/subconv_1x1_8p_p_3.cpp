#include "subconv_1x1_8p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_10_address0 = ShuffleConvs_2_Downs_538_reg_9358.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_10_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_address1() {
    ShuffleConvs_2_Downs_10_address1 = ShuffleConvs_2_Downs_645_reg_10030.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_10_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_10_d0 = tmp_38_2_fu_7622_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_10_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_d1() {
    ShuffleConvs_2_Downs_10_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_56)))) {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_56))) {
        ShuffleConvs_2_Downs_10_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_11_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_11_address0 = ShuffleConvs_2_Downs_532_reg_9328.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_11_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_11_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_address1() {
    ShuffleConvs_2_Downs_11_address1 = ShuffleConvs_2_Downs_620_reg_9880.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_11_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_11_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_11_d0 = tmp_38_1_fu_7592_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_11_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_11_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_d1() {
    ShuffleConvs_2_Downs_11_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_55)))) {
        ShuffleConvs_2_Downs_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_55))) {
        ShuffleConvs_2_Downs_11_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_12_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_12_address0 = ShuffleConvs_2_Downs_533_reg_9333.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_12_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_12_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_address1() {
    ShuffleConvs_2_Downs_12_address1 = ShuffleConvs_2_Downs_631_reg_9946.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_12_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_12_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_12_d0 = tmp_18_fu_7562_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_12_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_12_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_d1() {
    ShuffleConvs_2_Downs_12_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_54)))) {
        ShuffleConvs_2_Downs_12_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_54))) {
        ShuffleConvs_2_Downs_12_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_13_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_13_address0 = ShuffleConvs_2_Downs_496_reg_9093.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_13_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_13_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_address1() {
    ShuffleConvs_2_Downs_13_address1 = ShuffleConvs_2_Downs_644_reg_10024.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_13_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_13_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_13_d0 = tmp_32_10_fu_7296_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_13_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_13_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_d1() {
    ShuffleConvs_2_Downs_13_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_53)))) {
        ShuffleConvs_2_Downs_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_53))) {
        ShuffleConvs_2_Downs_13_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_14_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_14_address0 = ShuffleConvs_2_Downs_500_reg_9113.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_14_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_14_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_address1() {
    ShuffleConvs_2_Downs_14_address1 = ShuffleConvs_2_Downs_653_reg_10078.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_14_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_14_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_14_d0 = tmp_32_s_fu_7266_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_14_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_14_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_d1() {
    ShuffleConvs_2_Downs_14_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_52)))) {
        ShuffleConvs_2_Downs_14_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_52))) {
        ShuffleConvs_2_Downs_14_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_15_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_15_address0 = ShuffleConvs_2_Downs_490_reg_9063.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_15_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_15_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_address1() {
    ShuffleConvs_2_Downs_15_address1 = ShuffleConvs_2_Downs_632_reg_9952.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_15_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_15_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_15_d0 = tmp_32_9_fu_7236_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_15_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_15_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_d1() {
    ShuffleConvs_2_Downs_15_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_51)))) {
        ShuffleConvs_2_Downs_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_51))) {
        ShuffleConvs_2_Downs_15_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_16_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_16_address0 = ShuffleConvs_2_Downs_495_reg_9088.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_16_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_16_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_address1() {
    ShuffleConvs_2_Downs_16_address1 = ShuffleConvs_2_Downs_641_reg_10006.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_16_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_16_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_16_d0 = tmp_32_8_fu_7206_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_16_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_16_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_d1() {
    ShuffleConvs_2_Downs_16_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_50)))) {
        ShuffleConvs_2_Downs_16_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_50))) {
        ShuffleConvs_2_Downs_16_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_17_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_17_address0 = ShuffleConvs_2_Downs_399_reg_8500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_17_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_17_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_address1() {
    ShuffleConvs_2_Downs_17_address1 = ShuffleConvs_2_Downs_630_reg_9940.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_17_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_17_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_17_d0 = tmp_20_8_fu_6003_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_17_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_17_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_d1() {
    ShuffleConvs_2_Downs_17_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_8)))) {
        ShuffleConvs_2_Downs_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_8))) {
        ShuffleConvs_2_Downs_17_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_18_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_18_address0 = ShuffleConvs_2_Downs_494_reg_9083.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_18_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_18_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_address1() {
    ShuffleConvs_2_Downs_18_address1 = ShuffleConvs_2_Downs_639_reg_9994.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_18_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_18_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_18_d0 = tmp_32_7_fu_7176_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_18_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_d1() {
    ShuffleConvs_2_Downs_18_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4F)))) {
        ShuffleConvs_2_Downs_18_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4F))) {
        ShuffleConvs_2_Downs_18_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_19_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_19_address0 = ShuffleConvs_2_Downs_486_reg_9043.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_19_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_19_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_address1() {
    ShuffleConvs_2_Downs_19_address1 = ShuffleConvs_2_Downs_617_reg_9862.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_19_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_19_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_19_d0 = tmp_32_6_fu_7146_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_19_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_19_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_d1() {
    ShuffleConvs_2_Downs_19_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4E)))) {
        ShuffleConvs_2_Downs_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4E))) {
        ShuffleConvs_2_Downs_19_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_1_address0 = ShuffleConvs_2_Downs_545_reg_9393.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_1_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_address1() {
    ShuffleConvs_2_Downs_1_address1 = ShuffleConvs_2_Downs_659_reg_10114.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_1_d0 = tmp_38_s_fu_7862_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_1_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_d1() {
    ShuffleConvs_2_Downs_1_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5E)))) {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5E))) {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_20_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_20_address0 = ShuffleConvs_2_Downs_489_reg_9058.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_20_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_20_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_address1() {
    ShuffleConvs_2_Downs_20_address1 = ShuffleConvs_2_Downs_629_reg_9934.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_20_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_20_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_20_d0 = tmp_32_5_fu_7116_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_20_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_20_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_d1() {
    ShuffleConvs_2_Downs_20_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4D)))) {
        ShuffleConvs_2_Downs_20_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4D))) {
        ShuffleConvs_2_Downs_20_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_21_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_21_address0 = ShuffleConvs_2_Downs_493_reg_9078.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_21_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_21_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_address1() {
    ShuffleConvs_2_Downs_21_address1 = ShuffleConvs_2_Downs_638_reg_9988.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_21_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_21_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_21_d0 = tmp_32_4_fu_7086_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_21_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_21_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_d1() {
    ShuffleConvs_2_Downs_21_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4C)))) {
        ShuffleConvs_2_Downs_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4C))) {
        ShuffleConvs_2_Downs_21_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_22_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_22_address0 = ShuffleConvs_2_Downs_492_reg_9073.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_22_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_22_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_address1() {
    ShuffleConvs_2_Downs_22_address1 = ShuffleConvs_2_Downs_637_reg_9982.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_22_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_22_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_22_d0 = tmp_32_3_fu_7056_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_22_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_22_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_d1() {
    ShuffleConvs_2_Downs_22_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4B)))) {
        ShuffleConvs_2_Downs_22_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4B))) {
        ShuffleConvs_2_Downs_22_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_23_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_23_address0 = ShuffleConvs_2_Downs_488_reg_9053.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_23_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_23_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_address1() {
    ShuffleConvs_2_Downs_23_address1 = ShuffleConvs_2_Downs_627_reg_9922.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_23_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_23_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_23_d0 = tmp_32_2_fu_7026_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_23_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_23_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_d1() {
    ShuffleConvs_2_Downs_23_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4A)))) {
        ShuffleConvs_2_Downs_23_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4A))) {
        ShuffleConvs_2_Downs_23_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_24_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_24_address0 = ShuffleConvs_2_Downs_487_reg_9048.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_24_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_24_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_address1() {
    ShuffleConvs_2_Downs_24_address1 = ShuffleConvs_2_Downs_619_reg_9874.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_24_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_24_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_24_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_24_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_24_d0 = tmp_32_1_fu_6996_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_24_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_24_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_d1() {
    ShuffleConvs_2_Downs_24_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_49)))) {
        ShuffleConvs_2_Downs_24_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_24_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_24_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_49))) {
        ShuffleConvs_2_Downs_24_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_24_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_25_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_25_address0 = ShuffleConvs_2_Downs_491_reg_9068.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_25_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_25_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_address1() {
    ShuffleConvs_2_Downs_25_address1 = ShuffleConvs_2_Downs_635_reg_9970.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_25_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_25_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_25_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_25_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_25_d0 = tmp_14_fu_6966_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_25_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_25_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_d1() {
    ShuffleConvs_2_Downs_25_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_48)))) {
        ShuffleConvs_2_Downs_25_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_25_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_25_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_48))) {
        ShuffleConvs_2_Downs_25_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_25_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_26_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_26_address0 = ShuffleConvs_2_Downs_452_reg_8819.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_26_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_26_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_address1() {
    ShuffleConvs_2_Downs_26_address1 = ShuffleConvs_2_Downs_628_reg_9928.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_26_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_26_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_26_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_26_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_26_d0 = tmp_27_10_fu_6700_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_26_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_26_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_d1() {
    ShuffleConvs_2_Downs_26_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_47)))) {
        ShuffleConvs_2_Downs_26_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_26_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_26_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_47))) {
        ShuffleConvs_2_Downs_26_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_26_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_27_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_27_address0 = ShuffleConvs_2_Downs_454_reg_8829.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_27_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_27_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_address1() {
    ShuffleConvs_2_Downs_27_address1 = ShuffleConvs_2_Downs_634_reg_9964.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_27_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_27_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_27_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_27_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_27_d0 = tmp_27_s_fu_6670_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_27_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_27_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_d1() {
    ShuffleConvs_2_Downs_27_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_46)))) {
        ShuffleConvs_2_Downs_27_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_27_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_27_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_46))) {
        ShuffleConvs_2_Downs_27_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_27_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_28_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_28_address0 = ShuffleConvs_2_Downs_398_reg_8495.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_28_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_28_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_address1() {
    ShuffleConvs_2_Downs_28_address1 = ShuffleConvs_2_Downs_618_reg_9868.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_28_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_28_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_28_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_28_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_28_d0 = tmp_20_7_fu_5973_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_28_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_28_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_d1() {
    ShuffleConvs_2_Downs_28_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_7)))) {
        ShuffleConvs_2_Downs_28_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_28_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_28_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_7))) {
        ShuffleConvs_2_Downs_28_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_28_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_29_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_29_address0 = ShuffleConvs_2_Downs_453_reg_8824.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_29_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_29_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_address1() {
    ShuffleConvs_2_Downs_29_address1 = ShuffleConvs_2_Downs_633_reg_9958.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_29_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_29_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_29_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_29_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_29_d0 = tmp_27_9_fu_6640_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_29_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_29_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_d1() {
    ShuffleConvs_2_Downs_29_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_45)))) {
        ShuffleConvs_2_Downs_29_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_29_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_29_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_45))) {
        ShuffleConvs_2_Downs_29_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_29_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_2_address0 = ShuffleConvs_2_Downs_534_reg_9338.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_2_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_address1() {
    ShuffleConvs_2_Downs_2_address1 = ShuffleConvs_2_Downs_636_reg_9976.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_2_d0 = tmp_38_9_fu_7832_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_2_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_d1() {
    ShuffleConvs_2_Downs_2_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5D)))) {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5D))) {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_30_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_30_address0 = ShuffleConvs_2_Downs_451_reg_8814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_30_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_30_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_address1() {
    ShuffleConvs_2_Downs_30_address1 = ShuffleConvs_2_Downs_626_reg_9916.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_30_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_30_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_30_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_30_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_30_d0 = tmp_27_8_fu_6610_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_30_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_30_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_d1() {
    ShuffleConvs_2_Downs_30_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_44)))) {
        ShuffleConvs_2_Downs_30_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_30_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_30_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_44))) {
        ShuffleConvs_2_Downs_30_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_30_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_31_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_31_address0 = ShuffleConvs_2_Downs_449_reg_8804.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_31_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_31_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_address1() {
    ShuffleConvs_2_Downs_31_address1 = ShuffleConvs_2_Downs_624_reg_9904.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_31_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_31_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_31_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_31_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_31_d0 = tmp_27_7_fu_6580_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_31_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_31_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_d1() {
    ShuffleConvs_2_Downs_31_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_43)))) {
        ShuffleConvs_2_Downs_31_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_31_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_31_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_43))) {
        ShuffleConvs_2_Downs_31_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_31_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_32_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_32_address0 = ShuffleConvs_2_Downs_450_reg_8809.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_32_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_32_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_address1() {
    ShuffleConvs_2_Downs_32_address1 = ShuffleConvs_2_Downs_625_reg_9910.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_32_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_32_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_32_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_32_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_32_d0 = tmp_27_6_fu_6550_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_32_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_32_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_d1() {
    ShuffleConvs_2_Downs_32_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_42)))) {
        ShuffleConvs_2_Downs_32_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_32_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_32_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_42))) {
        ShuffleConvs_2_Downs_32_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_32_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_33_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_33_address0 = ShuffleConvs_2_Downs_448_reg_8799.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_33_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_33_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_address1() {
    ShuffleConvs_2_Downs_33_address1 = ShuffleConvs_2_Downs_623_reg_9898.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_33_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_33_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_33_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_33_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_33_d0 = tmp_27_5_fu_6520_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_33_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_33_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_d1() {
    ShuffleConvs_2_Downs_33_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_41)))) {
        ShuffleConvs_2_Downs_33_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_33_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_33_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_41))) {
        ShuffleConvs_2_Downs_33_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_33_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_34_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_34_address0 = ShuffleConvs_2_Downs_447_reg_8794.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_34_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_34_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_address1() {
    ShuffleConvs_2_Downs_34_address1 = ShuffleConvs_2_Downs_622_reg_9892.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_34_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_34_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_34_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_34_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_34_d0 = tmp_27_4_fu_6490_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_34_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_34_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_d1() {
    ShuffleConvs_2_Downs_34_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_40)))) {
        ShuffleConvs_2_Downs_34_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_34_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_34_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_40))) {
        ShuffleConvs_2_Downs_34_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_34_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_35_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_35_address0 = ShuffleConvs_2_Downs_446_reg_8789.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_35_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_35_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_address1() {
    ShuffleConvs_2_Downs_35_address1 = ShuffleConvs_2_Downs_621_reg_9886.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_35_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_35_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_35_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_35_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_35_d0 = tmp_27_3_fu_6460_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_35_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_35_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_d1() {
    ShuffleConvs_2_Downs_35_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3F)))) {
        ShuffleConvs_2_Downs_35_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_35_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_35_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3F))) {
        ShuffleConvs_2_Downs_35_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_35_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_36_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_36_address0 = ShuffleConvs_2_Downs_432_reg_8719.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_36_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_36_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_address1() {
    ShuffleConvs_2_Downs_36_address1 = ShuffleConvs_2_Downs_583_reg_9658.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_36_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_36_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_36_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_36_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_36_d0 = tmp_27_2_fu_6430_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_36_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_36_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_d1() {
    ShuffleConvs_2_Downs_36_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3E)))) {
        ShuffleConvs_2_Downs_36_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_36_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_36_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3E))) {
        ShuffleConvs_2_Downs_36_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_36_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_37_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_37_address0 = ShuffleConvs_2_Downs_433_reg_8724.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_37_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_37_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_address1() {
    ShuffleConvs_2_Downs_37_address1 = ShuffleConvs_2_Downs_585_reg_9670.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_37_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_37_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_37_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_37_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_37_d0 = tmp_27_1_fu_6400_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_37_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_37_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_d1() {
    ShuffleConvs_2_Downs_37_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3D)))) {
        ShuffleConvs_2_Downs_37_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_37_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_37_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3D))) {
        ShuffleConvs_2_Downs_37_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_37_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_38_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_38_address0 = ShuffleConvs_2_Downs_431_reg_8714.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_38_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_38_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_address1() {
    ShuffleConvs_2_Downs_38_address1 = ShuffleConvs_2_Downs_580_reg_9640.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_38_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_38_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_38_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_38_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_38_d0 = tmp_9_fu_6370_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_38_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_38_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_d1() {
    ShuffleConvs_2_Downs_38_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3C)))) {
        ShuffleConvs_2_Downs_38_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_38_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_38_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3C))) {
        ShuffleConvs_2_Downs_38_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_38_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_39_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_39_address0 = ShuffleConvs_2_Downs_389_reg_8450.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_39_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_39_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_address1() {
    ShuffleConvs_2_Downs_39_address1 = ShuffleConvs_2_Downs_586_reg_9676.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_39_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_39_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_39_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_39_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_39_d0 = tmp_20_6_fu_5943_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_39_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_39_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_d1() {
    ShuffleConvs_2_Downs_39_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_6)))) {
        ShuffleConvs_2_Downs_39_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_39_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_39_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_6))) {
        ShuffleConvs_2_Downs_39_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_39_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_3_address0 = ShuffleConvs_2_Downs_543_reg_9383.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_3_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_address1() {
    ShuffleConvs_2_Downs_3_address1 = ShuffleConvs_2_Downs_656_reg_10096.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_3_d0 = tmp_38_8_fu_7802_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_3_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_3_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_d1() {
    ShuffleConvs_2_Downs_3_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5C)))) {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5C))) {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_40_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_40_address0 = ShuffleConvs_2_Downs_405_reg_8530.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_40_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_40_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_address1() {
    ShuffleConvs_2_Downs_40_address1 = ShuffleConvs_2_Downs_668_reg_10168.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_40_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_40_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_40_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_40_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_40_d0 = tmp_22_10_fu_6104_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_40_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_40_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_d1() {
    ShuffleConvs_2_Downs_40_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3B)))) {
        ShuffleConvs_2_Downs_40_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_40_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_40_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3B))) {
        ShuffleConvs_2_Downs_40_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_40_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_41_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_41_address0 = ShuffleConvs_2_Downs_406_reg_8535.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_41_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_41_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_address1() {
    ShuffleConvs_2_Downs_41_address1 = ShuffleConvs_2_Downs_670_reg_10180.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_41_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_41_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_41_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_41_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_41_d0 = tmp_22_s_fu_6074_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_41_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_41_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_d1() {
    ShuffleConvs_2_Downs_41_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3A)))) {
        ShuffleConvs_2_Downs_41_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_41_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_41_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3A))) {
        ShuffleConvs_2_Downs_41_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_41_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_42_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_42_address0 = ShuffleConvs_2_Downs_388_reg_8445.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_42_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_42_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_address1() {
    ShuffleConvs_2_Downs_42_address1 = ShuffleConvs_2_Downs_582_reg_9652.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_42_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_42_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_42_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_42_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_42_d0 = tmp_22_9_fu_6044_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_42_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_42_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_d1() {
    ShuffleConvs_2_Downs_42_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_39)))) {
        ShuffleConvs_2_Downs_42_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_42_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_42_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_39))) {
        ShuffleConvs_2_Downs_42_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_42_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_43_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_43_address0 = ShuffleConvs_2_Downs_391_reg_8460.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_43_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_43_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_address1() {
    ShuffleConvs_2_Downs_43_address1 = ShuffleConvs_2_Downs_592_reg_9712.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_43_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_43_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_43_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_43_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_43_d0 = tmp_22_8_fu_6014_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_43_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_43_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_d1() {
    ShuffleConvs_2_Downs_43_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_38)))) {
        ShuffleConvs_2_Downs_43_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_43_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_43_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_38))) {
        ShuffleConvs_2_Downs_43_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_43_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_44_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_44_address0 = ShuffleConvs_2_Downs_392_reg_8465.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_44_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_44_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_address1() {
    ShuffleConvs_2_Downs_44_address1 = ShuffleConvs_2_Downs_593_reg_9718.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_44_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_44_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_44_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_44_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_44_d0 = tmp_22_7_fu_5984_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_44_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_44_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_d1() {
    ShuffleConvs_2_Downs_44_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_37)))) {
        ShuffleConvs_2_Downs_44_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_44_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_44_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_37))) {
        ShuffleConvs_2_Downs_44_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_44_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_45_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_45_address0 = ShuffleConvs_2_Downs_390_reg_8455.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_45_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_45_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_address1() {
    ShuffleConvs_2_Downs_45_address1 = ShuffleConvs_2_Downs_591_reg_9706.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_45_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_45_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_45_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_45_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_45_d0 = tmp_22_6_fu_5954_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_45_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_45_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_d1() {
    ShuffleConvs_2_Downs_45_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_36)))) {
        ShuffleConvs_2_Downs_45_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_45_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_45_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_36))) {
        ShuffleConvs_2_Downs_45_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_45_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_46_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_46_address0 = ShuffleConvs_2_Downs_387_reg_8440.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_46_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_46_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_address1() {
    ShuffleConvs_2_Downs_46_address1 = ShuffleConvs_2_Downs_579_reg_9634.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_46_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_46_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_46_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_46_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_46_d0 = tmp_22_5_fu_5924_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_46_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_46_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_d1() {
    ShuffleConvs_2_Downs_46_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_35)))) {
        ShuffleConvs_2_Downs_46_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_46_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_46_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_35))) {
        ShuffleConvs_2_Downs_46_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_46_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_47_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_47_address0 = ShuffleConvs_2_Downs_395_reg_8480.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_47_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_47_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_address1() {
    ShuffleConvs_2_Downs_47_address1 = ShuffleConvs_2_Downs_602_reg_9772.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_47_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_47_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_47_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_47_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_47_d0 = tmp_22_4_fu_5894_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_47_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_47_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_d1() {
    ShuffleConvs_2_Downs_47_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_34)))) {
        ShuffleConvs_2_Downs_47_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_47_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_47_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_34))) {
        ShuffleConvs_2_Downs_47_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_47_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_48_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_48_address0 = ShuffleConvs_2_Downs_404_reg_8525.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_48_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_48_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_address1() {
    ShuffleConvs_2_Downs_48_address1 = ShuffleConvs_2_Downs_667_reg_10162.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_48_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_48_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_48_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_48_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_48_d0 = tmp_22_3_fu_5864_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_48_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_48_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_d1() {
    ShuffleConvs_2_Downs_48_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_33)))) {
        ShuffleConvs_2_Downs_48_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_48_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_48_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_33))) {
        ShuffleConvs_2_Downs_48_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_48_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_49_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_49_address0 = ShuffleConvs_2_Downs_402_reg_8515.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_49_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_49_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_address1() {
    ShuffleConvs_2_Downs_49_address1 = ShuffleConvs_2_Downs_657_reg_10102.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_49_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_49_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_49_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_49_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_49_d0 = tmp_22_2_fu_5834_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_49_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_49_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_d1() {
    ShuffleConvs_2_Downs_49_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_32)))) {
        ShuffleConvs_2_Downs_49_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_49_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_49_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_32))) {
        ShuffleConvs_2_Downs_49_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_49_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_4_address0 = ShuffleConvs_2_Downs_537_reg_9353.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_4_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_address1() {
    ShuffleConvs_2_Downs_4_address1 = ShuffleConvs_2_Downs_643_reg_10018.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_4_d0 = tmp_38_7_fu_7772_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_4_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_4_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_d1() {
    ShuffleConvs_2_Downs_4_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5B)))) {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5B))) {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_50_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_50_address0 = ShuffleConvs_2_Downs_394_reg_8475.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_50_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_50_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_address1() {
    ShuffleConvs_2_Downs_50_address1 = ShuffleConvs_2_Downs_598_reg_9748.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_50_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_50_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_50_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_50_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_50_d0 = tmp_20_5_fu_5913_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_50_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_50_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_d1() {
    ShuffleConvs_2_Downs_50_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5)))) {
        ShuffleConvs_2_Downs_50_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_50_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_50_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5))) {
        ShuffleConvs_2_Downs_50_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_50_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_51_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_51_address0 = ShuffleConvs_2_Downs_403_reg_8520.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_51_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_51_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_address1() {
    ShuffleConvs_2_Downs_51_address1 = ShuffleConvs_2_Downs_660_reg_10120.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_51_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_51_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_51_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_51_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_51_d0 = tmp_22_1_fu_5804_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_51_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_51_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_d1() {
    ShuffleConvs_2_Downs_51_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_31)))) {
        ShuffleConvs_2_Downs_51_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_51_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_51_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_31))) {
        ShuffleConvs_2_Downs_51_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_51_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_52_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_52_address0 = ShuffleConvs_2_Downs_396_reg_8485.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_52_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_52_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_address1() {
    ShuffleConvs_2_Downs_52_address1 = ShuffleConvs_2_Downs_605_reg_9790.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_52_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_52_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_52_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_52_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_52_d0 = tmp_5_fu_5774_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_52_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_52_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_d1() {
    ShuffleConvs_2_Downs_52_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_30)))) {
        ShuffleConvs_2_Downs_52_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_52_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_52_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_30))) {
        ShuffleConvs_2_Downs_52_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_52_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_53_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_53_address0 = ShuffleConvs_2_Downs_549_reg_9413.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_53_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_53_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_address1() {
    ShuffleConvs_2_Downs_53_address1 = ShuffleConvs_2_Downs_666_reg_10156.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_53_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_53_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_53_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_53_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_53_d0 = tmp_36_10_fu_7881_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_53_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_53_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_d1() {
    ShuffleConvs_2_Downs_53_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2F)))) {
        ShuffleConvs_2_Downs_53_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_53_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_53_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2F))) {
        ShuffleConvs_2_Downs_53_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_53_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_54_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_54_address0 = ShuffleConvs_2_Downs_527_reg_9303.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_54_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_54_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_address1() {
    ShuffleConvs_2_Downs_54_address1 = ShuffleConvs_2_Downs_581_reg_9646.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_54_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_54_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_54_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_54_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_54_d0 = tmp_36_s_fu_7851_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_54_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_54_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_d1() {
    ShuffleConvs_2_Downs_54_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2E)))) {
        ShuffleConvs_2_Downs_54_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_54_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_54_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2E))) {
        ShuffleConvs_2_Downs_54_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_54_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_55_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_55_address0 = ShuffleConvs_2_Downs_550_reg_9418.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_55_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_55_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_address1() {
    ShuffleConvs_2_Downs_55_address1 = ShuffleConvs_2_Downs_669_reg_10174.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_55_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_55_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_55_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_55_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_55_d0 = tmp_36_9_fu_7821_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_55_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_55_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_d1() {
    ShuffleConvs_2_Downs_55_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2D)))) {
        ShuffleConvs_2_Downs_55_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_55_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_55_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2D))) {
        ShuffleConvs_2_Downs_55_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_55_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_56_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_56_address0 = ShuffleConvs_2_Downs_548_reg_9408.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_56_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_56_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_address1() {
    ShuffleConvs_2_Downs_56_address1 = ShuffleConvs_2_Downs_665_reg_10150.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_56_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_56_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_56_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_56_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_56_d0 = tmp_36_8_fu_7791_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_56_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_56_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_d1() {
    ShuffleConvs_2_Downs_56_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2C)))) {
        ShuffleConvs_2_Downs_56_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_56_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_56_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2C))) {
        ShuffleConvs_2_Downs_56_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_56_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_57_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_57_address0 = ShuffleConvs_2_Downs_531_reg_9323.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_57_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_57_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_address1() {
    ShuffleConvs_2_Downs_57_address1 = ShuffleConvs_2_Downs_601_reg_9766.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_57_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_57_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_57_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_57_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_57_d0 = tmp_36_7_fu_7761_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_57_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_57_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_d1() {
    ShuffleConvs_2_Downs_57_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2B)))) {
        ShuffleConvs_2_Downs_57_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_57_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_57_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2B))) {
        ShuffleConvs_2_Downs_57_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_57_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_58_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_58_address0 = ShuffleConvs_2_Downs_547_reg_9403.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_58_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_58_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_address1() {
    ShuffleConvs_2_Downs_58_address1 = ShuffleConvs_2_Downs_664_reg_10144.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_58_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_58_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_58_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_58_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_58_d0 = tmp_36_6_fu_7731_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_58_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_58_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_d1() {
    ShuffleConvs_2_Downs_58_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2A)))) {
        ShuffleConvs_2_Downs_58_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_58_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_58_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2A))) {
        ShuffleConvs_2_Downs_58_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_58_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_59_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_59_address0 = ShuffleConvs_2_Downs_541_reg_9373.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_59_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_59_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_address1() {
    ShuffleConvs_2_Downs_59_address1 = ShuffleConvs_2_Downs_654_reg_10084.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_59_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_59_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_59_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_59_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_59_d0 = tmp_36_5_fu_7701_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_59_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_59_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_d1() {
    ShuffleConvs_2_Downs_59_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_29)))) {
        ShuffleConvs_2_Downs_59_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_59_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_59_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_29))) {
        ShuffleConvs_2_Downs_59_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_59_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_5_address0 = ShuffleConvs_2_Downs_540_reg_9368.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_5_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_address1() {
    ShuffleConvs_2_Downs_5_address1 = ShuffleConvs_2_Downs_647_reg_10042.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_5_d0 = tmp_38_6_fu_7742_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_5_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_5_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_d1() {
    ShuffleConvs_2_Downs_5_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5A)))) {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5A))) {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_60_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_60_address0 = ShuffleConvs_2_Downs_528_reg_9308.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_60_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_60_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_address1() {
    ShuffleConvs_2_Downs_60_address1 = ShuffleConvs_2_Downs_584_reg_9664.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_60_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_60_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_60_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_60_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_60_d0 = tmp_36_4_fu_7671_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_60_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_60_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_d1() {
    ShuffleConvs_2_Downs_60_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_28)))) {
        ShuffleConvs_2_Downs_60_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_60_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_60_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_28))) {
        ShuffleConvs_2_Downs_60_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_60_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_61_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_61_address0 = ShuffleConvs_2_Downs_393_reg_8470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_61_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_61_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_address1() {
    ShuffleConvs_2_Downs_61_address1 = ShuffleConvs_2_Downs_594_reg_9724.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_61_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_61_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_61_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_61_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_61_d0 = tmp_20_4_fu_5883_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_61_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_61_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_d1() {
    ShuffleConvs_2_Downs_61_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4)))) {
        ShuffleConvs_2_Downs_61_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_61_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_61_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4))) {
        ShuffleConvs_2_Downs_61_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_61_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_62_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_62_address0 = ShuffleConvs_2_Downs_542_reg_9378.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_62_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_62_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_address1() {
    ShuffleConvs_2_Downs_62_address1 = ShuffleConvs_2_Downs_655_reg_10090.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_62_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_62_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_62_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_62_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_62_d0 = tmp_36_3_fu_7641_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_62_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_62_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_d1() {
    ShuffleConvs_2_Downs_62_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_27)))) {
        ShuffleConvs_2_Downs_62_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_62_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_62_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_27))) {
        ShuffleConvs_2_Downs_62_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_62_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_63_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_63_address0 = ShuffleConvs_2_Downs_546_reg_9398.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_63_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_63_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_address1() {
    ShuffleConvs_2_Downs_63_address1 = ShuffleConvs_2_Downs_663_reg_10138.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_63_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_63_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_63_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_63_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_63_d0 = tmp_36_2_fu_7611_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_63_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_63_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_d1() {
    ShuffleConvs_2_Downs_63_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_26)))) {
        ShuffleConvs_2_Downs_63_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_63_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_63_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_26))) {
        ShuffleConvs_2_Downs_63_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_63_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_64_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_64_address0 = ShuffleConvs_2_Downs_529_reg_9313.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_64_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_64_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_address1() {
    ShuffleConvs_2_Downs_64_address1 = ShuffleConvs_2_Downs_599_reg_9754.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_64_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_64_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_64_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_64_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_64_d0 = tmp_36_1_fu_7581_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_64_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_64_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_d1() {
    ShuffleConvs_2_Downs_64_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_25)))) {
        ShuffleConvs_2_Downs_64_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_64_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_64_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_25))) {
        ShuffleConvs_2_Downs_64_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_64_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_65_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_65_address0 = ShuffleConvs_2_Downs_530_reg_9318.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_65_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_65_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_address1() {
    ShuffleConvs_2_Downs_65_address1 = ShuffleConvs_2_Downs_600_reg_9760.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_65_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_65_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_65_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_65_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_65_d0 = tmp_16_fu_7551_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_65_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_65_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_d1() {
    ShuffleConvs_2_Downs_65_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_24)))) {
        ShuffleConvs_2_Downs_65_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_65_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_65_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_24))) {
        ShuffleConvs_2_Downs_65_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_65_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_66_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_66_address0 = ShuffleConvs_2_Downs_502_reg_9123.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_66_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_66_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_address1() {
    ShuffleConvs_2_Downs_66_address1 = ShuffleConvs_2_Downs_662_reg_10132.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_66_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_66_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_66_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_66_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_66_d0 = tmp_30_10_fu_7285_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_66_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_66_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_d1() {
    ShuffleConvs_2_Downs_66_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_23)))) {
        ShuffleConvs_2_Downs_66_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_66_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_66_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_23))) {
        ShuffleConvs_2_Downs_66_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_66_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_67_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_67_address0 = ShuffleConvs_2_Downs_484_reg_9033.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_67_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_67_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_address1() {
    ShuffleConvs_2_Downs_67_address1 = ShuffleConvs_2_Downs_603_reg_9778.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_67_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_67_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_67_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_67_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_67_d0 = tmp_30_s_fu_7255_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_67_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_67_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_d1() {
    ShuffleConvs_2_Downs_67_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_22)))) {
        ShuffleConvs_2_Downs_67_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_67_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_67_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_22))) {
        ShuffleConvs_2_Downs_67_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_67_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_68_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_68_address0 = ShuffleConvs_2_Downs_501_reg_9118.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_68_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_68_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_address1() {
    ShuffleConvs_2_Downs_68_address1 = ShuffleConvs_2_Downs_661_reg_10126.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_68_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_68_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_68_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_68_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_68_d0 = tmp_30_9_fu_7225_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_68_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_68_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_d1() {
    ShuffleConvs_2_Downs_68_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_21)))) {
        ShuffleConvs_2_Downs_68_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_68_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_68_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_21))) {
        ShuffleConvs_2_Downs_68_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_68_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_69_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_69_address0 = ShuffleConvs_2_Downs_499_reg_9108.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_69_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_69_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_address1() {
    ShuffleConvs_2_Downs_69_address1 = ShuffleConvs_2_Downs_652_reg_10072.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_69_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_69_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_69_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_69_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_69_d0 = tmp_30_8_fu_7195_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_69_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_69_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_d1() {
    ShuffleConvs_2_Downs_69_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_20)))) {
        ShuffleConvs_2_Downs_69_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_69_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_69_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_20))) {
        ShuffleConvs_2_Downs_69_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_69_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_6_address0 = ShuffleConvs_2_Downs_401_reg_8510.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_6_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_address1() {
    ShuffleConvs_2_Downs_6_address1 = ShuffleConvs_2_Downs_650_reg_10060.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_6_d0 = tmp_20_9_fu_6033_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_6_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_d1() {
    ShuffleConvs_2_Downs_6_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_9)))) {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_9))) {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_70_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_70_address0 = ShuffleConvs_2_Downs_481_reg_9018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_70_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_70_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_address1() {
    ShuffleConvs_2_Downs_70_address1 = ShuffleConvs_2_Downs_595_reg_9730.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_70_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_70_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_70_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_70_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_70_d0 = tmp_30_7_fu_7165_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_70_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_70_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_d1() {
    ShuffleConvs_2_Downs_70_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1F)))) {
        ShuffleConvs_2_Downs_70_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_70_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_70_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1F))) {
        ShuffleConvs_2_Downs_70_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_70_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_71_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_71_address0 = ShuffleConvs_2_Downs_498_reg_9103.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_71_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_71_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_address1() {
    ShuffleConvs_2_Downs_71_address1 = ShuffleConvs_2_Downs_651_reg_10066.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_71_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_71_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_71_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_71_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_71_d0 = tmp_30_6_fu_7135_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_71_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_71_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_d1() {
    ShuffleConvs_2_Downs_71_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1E)))) {
        ShuffleConvs_2_Downs_71_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_71_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_71_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1E))) {
        ShuffleConvs_2_Downs_71_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_71_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_72_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_72_address0 = ShuffleConvs_2_Downs_400_reg_8505.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_72_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_72_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_address1() {
    ShuffleConvs_2_Downs_72_address1 = ShuffleConvs_2_Downs_649_reg_10054.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_72_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_72_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_72_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_72_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_72_d0 = tmp_20_3_fu_5853_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_72_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_72_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_d1() {
    ShuffleConvs_2_Downs_72_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3)))) {
        ShuffleConvs_2_Downs_72_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_72_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_72_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3))) {
        ShuffleConvs_2_Downs_72_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_72_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_73_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_73_address0 = ShuffleConvs_2_Downs_497_reg_9098.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_73_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_73_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_address1() {
    ShuffleConvs_2_Downs_73_address1 = ShuffleConvs_2_Downs_648_reg_10048.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_73_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_73_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_73_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_73_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_73_d0 = tmp_30_5_fu_7105_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_73_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_73_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_d1() {
    ShuffleConvs_2_Downs_73_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1D)))) {
        ShuffleConvs_2_Downs_73_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_73_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_73_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1D))) {
        ShuffleConvs_2_Downs_73_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_73_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_74_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_74_address0 = ShuffleConvs_2_Downs_483_reg_9028.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_74_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_74_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_address1() {
    ShuffleConvs_2_Downs_74_address1 = ShuffleConvs_2_Downs_597_reg_9742.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_74_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_74_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_74_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_74_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_74_d0 = tmp_30_4_fu_7075_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_74_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_74_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_d1() {
    ShuffleConvs_2_Downs_74_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1C)))) {
        ShuffleConvs_2_Downs_74_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_74_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_74_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1C))) {
        ShuffleConvs_2_Downs_74_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_74_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_75_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_75_address0 = ShuffleConvs_2_Downs_479_reg_9008.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_75_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_75_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_address1() {
    ShuffleConvs_2_Downs_75_address1 = ShuffleConvs_2_Downs_589_reg_9694.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_75_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_75_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_75_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_75_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_75_d0 = tmp_30_3_fu_7045_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_75_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_75_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_d1() {
    ShuffleConvs_2_Downs_75_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1B)))) {
        ShuffleConvs_2_Downs_75_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_75_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_75_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1B))) {
        ShuffleConvs_2_Downs_75_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_75_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_76_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_76_address0 = ShuffleConvs_2_Downs_480_reg_9013.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_76_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_76_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_address1() {
    ShuffleConvs_2_Downs_76_address1 = ShuffleConvs_2_Downs_590_reg_9700.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_76_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_76_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_76_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_76_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_76_d0 = tmp_30_2_fu_7015_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_76_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_76_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_d1() {
    ShuffleConvs_2_Downs_76_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1A)))) {
        ShuffleConvs_2_Downs_76_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_76_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_76_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1A))) {
        ShuffleConvs_2_Downs_76_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_76_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_77_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_77_address0 = ShuffleConvs_2_Downs_482_reg_9023.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_77_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_77_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_address1() {
    ShuffleConvs_2_Downs_77_address1 = ShuffleConvs_2_Downs_596_reg_9736.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_77_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_77_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_77_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_77_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_77_d0 = tmp_30_1_fu_6985_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_77_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_77_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_d1() {
    ShuffleConvs_2_Downs_77_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_19)))) {
        ShuffleConvs_2_Downs_77_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_77_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_77_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_19))) {
        ShuffleConvs_2_Downs_77_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_77_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_78_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_78_address0 = ShuffleConvs_2_Downs_485_reg_9038.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_78_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_78_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_address1() {
    ShuffleConvs_2_Downs_78_address1 = ShuffleConvs_2_Downs_607_reg_9802.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_2_Downs_78_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_78_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_78_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_78_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ShuffleConvs_2_Downs_78_d0 = tmp_11_fu_6955_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_78_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_78_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_d1() {
    ShuffleConvs_2_Downs_78_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_18)))) {
        ShuffleConvs_2_Downs_78_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_78_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_78_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_18))) {
        ShuffleConvs_2_Downs_78_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_78_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_79_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_79_address0 = ShuffleConvs_2_Downs_436_reg_8739.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_79_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_79_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_address1() {
    ShuffleConvs_2_Downs_79_address1 = ShuffleConvs_2_Downs_604_reg_9784.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_79_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_79_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_79_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_79_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_79_d0 = tmp_25_10_fu_6689_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_79_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_79_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_d1() {
    ShuffleConvs_2_Downs_79_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_17)))) {
        ShuffleConvs_2_Downs_79_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_79_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_79_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_17))) {
        ShuffleConvs_2_Downs_79_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_79_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_7_address0 = ShuffleConvs_2_Downs_536_reg_9348.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_7_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_address1() {
    ShuffleConvs_2_Downs_7_address1 = ShuffleConvs_2_Downs_642_reg_10012.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_7_d0 = tmp_38_5_fu_7712_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_7_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_7_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_d1() {
    ShuffleConvs_2_Downs_7_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_59)))) {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_59))) {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_80_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_80_address0 = ShuffleConvs_2_Downs_437_reg_8744.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_80_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_80_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_address1() {
    ShuffleConvs_2_Downs_80_address1 = ShuffleConvs_2_Downs_606_reg_9796.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_80_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_80_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_80_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_80_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_80_d0 = tmp_25_s_fu_6659_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_80_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_80_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_d1() {
    ShuffleConvs_2_Downs_80_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_16)))) {
        ShuffleConvs_2_Downs_80_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_80_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_80_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_16))) {
        ShuffleConvs_2_Downs_80_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_80_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_81_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_81_address0 = ShuffleConvs_2_Downs_434_reg_8729.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_81_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_81_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_address1() {
    ShuffleConvs_2_Downs_81_address1 = ShuffleConvs_2_Downs_587_reg_9682.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_81_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_81_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_81_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_81_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_81_d0 = tmp_25_9_fu_6629_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_81_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_81_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_d1() {
    ShuffleConvs_2_Downs_81_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_15)))) {
        ShuffleConvs_2_Downs_81_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_81_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_81_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_15))) {
        ShuffleConvs_2_Downs_81_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_81_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_82_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_82_address0 = ShuffleConvs_2_Downs_445_reg_8784.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_82_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_82_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_address1() {
    ShuffleConvs_2_Downs_82_address1 = ShuffleConvs_2_Downs_616_reg_9856.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_82_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_82_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_82_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_82_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_82_d0 = tmp_25_8_fu_6599_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_82_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_82_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_d1() {
    ShuffleConvs_2_Downs_82_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_14)))) {
        ShuffleConvs_2_Downs_82_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_82_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_82_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_14))) {
        ShuffleConvs_2_Downs_82_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_82_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_83_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_83_address0 = ShuffleConvs_2_Downs_397_reg_8490.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_83_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_83_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_address1() {
    ShuffleConvs_2_Downs_83_address1 = ShuffleConvs_2_Downs_608_reg_9808.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_83_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_83_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_83_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_83_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_83_d0 = tmp_20_2_fu_5823_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_83_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_83_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_d1() {
    ShuffleConvs_2_Downs_83_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2)))) {
        ShuffleConvs_2_Downs_83_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_83_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_83_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2))) {
        ShuffleConvs_2_Downs_83_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_83_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_84_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_84_address0 = ShuffleConvs_2_Downs_435_reg_8734.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_84_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_84_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_address1() {
    ShuffleConvs_2_Downs_84_address1 = ShuffleConvs_2_Downs_588_reg_9688.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_84_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_84_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_84_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_84_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_84_d0 = tmp_25_7_fu_6569_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_84_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_84_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_d1() {
    ShuffleConvs_2_Downs_84_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_13)))) {
        ShuffleConvs_2_Downs_84_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_84_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_84_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_13))) {
        ShuffleConvs_2_Downs_84_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_84_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_85_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_85_address0 = ShuffleConvs_2_Downs_438_reg_8749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_85_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_85_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_address1() {
    ShuffleConvs_2_Downs_85_address1 = ShuffleConvs_2_Downs_609_reg_9814.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_85_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_85_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_85_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_85_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_85_d0 = tmp_25_6_fu_6539_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_85_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_85_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_d1() {
    ShuffleConvs_2_Downs_85_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_12)))) {
        ShuffleConvs_2_Downs_85_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_85_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_85_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_12))) {
        ShuffleConvs_2_Downs_85_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_85_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_86_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_86_address0 = ShuffleConvs_2_Downs_439_reg_8754.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_86_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_86_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_address1() {
    ShuffleConvs_2_Downs_86_address1 = ShuffleConvs_2_Downs_610_reg_9820.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_86_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_86_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_86_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_86_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_86_d0 = tmp_25_5_fu_6509_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_86_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_86_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_d1() {
    ShuffleConvs_2_Downs_86_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_11)))) {
        ShuffleConvs_2_Downs_86_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_86_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_86_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_11))) {
        ShuffleConvs_2_Downs_86_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_86_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_87_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_87_address0 = ShuffleConvs_2_Downs_440_reg_8759.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_87_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_87_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_address1() {
    ShuffleConvs_2_Downs_87_address1 = ShuffleConvs_2_Downs_611_reg_9826.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_87_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_87_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_87_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_87_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_87_d0 = tmp_25_4_fu_6479_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_87_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_87_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_d1() {
    ShuffleConvs_2_Downs_87_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_10)))) {
        ShuffleConvs_2_Downs_87_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_87_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_87_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_10))) {
        ShuffleConvs_2_Downs_87_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_87_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_88_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_88_address0 = ShuffleConvs_2_Downs_441_reg_8764.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_88_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_88_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_address1() {
    ShuffleConvs_2_Downs_88_address1 = ShuffleConvs_2_Downs_612_reg_9832.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_88_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_88_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_88_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_88_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_88_d0 = tmp_25_3_fu_6449_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_88_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_88_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_d1() {
    ShuffleConvs_2_Downs_88_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_F)))) {
        ShuffleConvs_2_Downs_88_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_88_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_88_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_F))) {
        ShuffleConvs_2_Downs_88_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_88_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_89_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_89_address0 = ShuffleConvs_2_Downs_442_reg_8769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_89_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_89_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_address1() {
    ShuffleConvs_2_Downs_89_address1 = ShuffleConvs_2_Downs_613_reg_9838.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_89_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_89_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_89_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_89_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_89_d0 = tmp_25_2_fu_6419_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_89_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_89_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_d1() {
    ShuffleConvs_2_Downs_89_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_E)))) {
        ShuffleConvs_2_Downs_89_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_89_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_89_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_E))) {
        ShuffleConvs_2_Downs_89_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_89_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_8_address0 = ShuffleConvs_2_Downs_544_reg_9388.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_8_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_address1() {
    ShuffleConvs_2_Downs_8_address1 = ShuffleConvs_2_Downs_658_reg_10108.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_8_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_8_d0 = tmp_38_4_fu_7682_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_8_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_8_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_d1() {
    ShuffleConvs_2_Downs_8_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_58)))) {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_58))) {
        ShuffleConvs_2_Downs_8_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_90_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_90_address0 = ShuffleConvs_2_Downs_443_reg_8774.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_90_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_90_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_address1() {
    ShuffleConvs_2_Downs_90_address1 = ShuffleConvs_2_Downs_614_reg_9844.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_90_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_90_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_90_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_90_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_90_d0 = tmp_25_1_fu_6389_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_90_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_90_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_d1() {
    ShuffleConvs_2_Downs_90_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_D)))) {
        ShuffleConvs_2_Downs_90_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_90_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_90_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_D))) {
        ShuffleConvs_2_Downs_90_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_90_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_91_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_91_address0 = ShuffleConvs_2_Downs_444_reg_8779.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_91_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_91_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_address1() {
    ShuffleConvs_2_Downs_91_address1 = ShuffleConvs_2_Downs_615_reg_9850.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_2_Downs_91_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_91_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_91_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_91_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_91_d0 = tmp_7_fu_6359_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_91_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_91_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_d1() {
    ShuffleConvs_2_Downs_91_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_C)))) {
        ShuffleConvs_2_Downs_91_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_91_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_91_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_C))) {
        ShuffleConvs_2_Downs_91_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_91_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_92_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_92_address0 = ShuffleConvs_2_Downs_385_reg_8430.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_92_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_92_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_address1() {
    ShuffleConvs_2_Downs_92_address1 = ShuffleConvs_2_Downs_577_reg_9622.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_92_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_92_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_92_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_92_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_92_d0 = tmp_20_10_fu_6093_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_92_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_92_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_d1() {
    ShuffleConvs_2_Downs_92_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_B)))) {
        ShuffleConvs_2_Downs_92_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_92_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_92_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_B))) {
        ShuffleConvs_2_Downs_92_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_92_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_93_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_93_address0 = ShuffleConvs_2_Downs_384_reg_8425.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_93_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_93_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_address1() {
    ShuffleConvs_2_Downs_93_address1 = ShuffleConvs_2_Downs_576_reg_9616.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_93_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_93_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_93_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_93_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_93_d0 = tmp_20_s_fu_6063_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_93_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_93_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_d1() {
    ShuffleConvs_2_Downs_93_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_A)))) {
        ShuffleConvs_2_Downs_93_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_93_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_93_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_A))) {
        ShuffleConvs_2_Downs_93_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_93_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_94_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_94_address0 = ShuffleConvs_2_Downs_383_reg_8420.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_94_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_94_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_address1() {
    ShuffleConvs_2_Downs_94_address1 = ShuffleConvs_2_Downs_575_reg_9610.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_94_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_94_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_94_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_94_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_94_d0 = tmp_20_1_fu_5793_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_94_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_94_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_d1() {
    ShuffleConvs_2_Downs_94_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1)))) {
        ShuffleConvs_2_Downs_94_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_94_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_94_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1))) {
        ShuffleConvs_2_Downs_94_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_94_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_95_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_95_address0 = ShuffleConvs_2_Downs_386_reg_8435.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_95_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_95_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_address1() {
    ShuffleConvs_2_Downs_95_address1 = ShuffleConvs_2_Downs_578_reg_9628.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()))) {
        ShuffleConvs_2_Downs_95_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_95_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_95_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_95_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ShuffleConvs_2_Downs_95_d0 = tmp_3_fu_5763_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_95_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_95_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_d1() {
    ShuffleConvs_2_Downs_95_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_0)))) {
        ShuffleConvs_2_Downs_95_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_95_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_95_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_0))) {
        ShuffleConvs_2_Downs_95_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_95_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_9_address0 = ShuffleConvs_2_Downs_539_reg_9363.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_9_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_address1() {
    ShuffleConvs_2_Downs_9_address1 = ShuffleConvs_2_Downs_646_reg_10036.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_9_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_9_d0 = tmp_38_3_fu_7652_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_9_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_9_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_d1() {
    ShuffleConvs_2_Downs_9_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_57)))) {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_57))) {
        ShuffleConvs_2_Downs_9_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<7>) (tmp_234_cast_fu_8032_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_address0 = ShuffleConvs_2_Downs_535_reg_9343.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<7>) (tmp_183_cast_fu_5410_p1.read());
    } else {
        ShuffleConvs_2_Downs_address0 = "XXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_address1() {
    ShuffleConvs_2_Downs_address1 = ShuffleConvs_2_Downs_640_reg_10000.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()))) {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ShuffleConvs_2_Downs_d0 = tmp_38_10_fu_7892_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        ShuffleConvs_2_Downs_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_d1() {
    ShuffleConvs_2_Downs_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_0) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_6) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_7) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_8) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_9) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_10) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_11) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_12) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_13) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_14) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_15) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_16) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_17) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_18) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_19) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_1F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_20) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_21) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_22) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_23) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_24) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_25) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_26) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_27) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_28) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_29) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_2F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_30) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_31) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_32) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_33) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_34) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_35) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_36) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_37) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_38) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_39) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_3F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_40) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_41) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_42) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_43) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_44) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_45) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_46) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_47) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_48) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_49) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4E) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_4F) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_50) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_51) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_52) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_53) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_54) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_55) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_56) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_57) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_58) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_59) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5A) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5B) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5C) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5D) && 
          !esl_seteq<1,7,7>(co_cast_mid2_v_reg_8364.read(), ap_const_lv7_5E)))) {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_99_fu_8334_p3.read()) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_0) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_6) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_7) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_8) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_9) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_10) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_11) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_12) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_13) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_14) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_15) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_16) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_17) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_18) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_19) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_1F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_20) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_21) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_22) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_23) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_24) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_25) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_26) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_27) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_28) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_29) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_2F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_30) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_31) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_32) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_33) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_34) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_35) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_36) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_37) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_38) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_39) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_3F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_40) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_41) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_42) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_43) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_44) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_45) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_46) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_47) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_48) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_49) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4E) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_4F) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_50) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_51) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_52) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_53) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_54) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_55) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_56) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_57) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_58) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_59) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5A) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5B) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5C) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5D) && 
         !esl_seteq<1,7,7>(ap_reg_pp1_iter2_co9_mid2_reg_9591.read(), ap_const_lv7_5E))) {
        ShuffleConvs_2_Downs_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[39];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[7];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[8];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state12() {
    ap_CS_fsm_state12 = ap_CS_fsm.read()[9];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[10];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[11];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[12];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[13];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[14];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[15];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[16];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[17];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[18];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[19];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[20];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[21];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[22];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[23];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[24];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[25];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[26];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[27];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[28];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[29];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[30];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[31];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[32];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[33];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[34];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[35];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[36];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[37];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[38];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[40];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[2];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[3];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[4];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[5];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[6];
}

void subconv_1x1_8p_p::thread_ap_block_pp0_stage0_flag00000000() {
    ap_block_pp0_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_pp0_stage0_flag00011001() {
    ap_block_pp0_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_pp1_stage0_flag00000000() {
    ap_block_pp1_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_pp1_stage0_flag00011001() {
    ap_block_pp1_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_pp1_stage0_flag00011011() {
    ap_block_pp1_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state42_pp1_stage0_iter0() {
    ap_block_state42_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state43_pp1_stage0_iter1() {
    ap_block_state43_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state44_pp1_stage0_iter2() {
    ap_block_state44_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state45_pp1_stage0_iter3() {
    ap_block_state45_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten1_fu_5272_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_condition_pp1_exit_iter0_state42() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten3_fu_7899_p2.read())) {
        ap_condition_pp1_exit_iter0_state42 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state42 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void subconv_1x1_8p_p::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void subconv_1x1_8p_p::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter3.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_bias_V_address0() {
    bias_V_address0 =  (sc_lv<7>) (co_cast_mid2_fu_5324_p1.read());
}

void subconv_1x1_8p_p::thread_bias_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bias_V_ce0 = ap_const_logic_1;
    } else {
        bias_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ci2_cast7_fu_6808_p1() {
    ci2_cast7_fu_6808_p1 = esl_zext<32,7>(ci2_reg_4972.read());
}

void subconv_1x1_8p_p::thread_ci3_cast4_fu_7404_p1() {
    ci3_cast4_fu_7404_p1 = esl_zext<32,7>(ci3_reg_5007.read());
}

void subconv_1x1_8p_p::thread_ci6_cast_fu_6212_p1() {
    ci6_cast_fu_6212_p1 = esl_zext<32,7>(ci6_reg_4937.read());
}

void subconv_1x1_8p_p::thread_ci_1_fu_5739_p2() {
    ci_1_fu_5739_p2 = (!ci_reg_4902.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci_reg_4902.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_2_fu_6335_p2() {
    ci_2_fu_6335_p2 = (!ci6_reg_4937.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci6_reg_4937.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_3_fu_6931_p2() {
    ci_3_fu_6931_p2 = (!ci2_reg_4972.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci2_reg_4972.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_4_fu_7527_p2() {
    ci_4_fu_7527_p2 = (!ci3_reg_5007.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci3_reg_5007.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_cast_fu_5616_p1() {
    ci_cast_fu_5616_p1 = esl_zext<32,7>(ci_reg_4902.read());
}

void subconv_1x1_8p_p::thread_co9_mid2_fu_7961_p3() {
    co9_mid2_fu_7961_p3 = (!exitcond_flatten2_reg_9578.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten2_reg_9578.read()[0].to_bool())? co_8_fu_7931_p2.read(): co9_phi_fu_5033_p4.read());
}

void subconv_1x1_8p_p::thread_co9_phi_fu_5033_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten3_reg_9569.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co9_phi_fu_5033_p4 = co9_mid2_reg_9591.read();
    } else {
        co9_phi_fu_5033_p4 = co9_reg_5029.read();
    }
}

void subconv_1x1_8p_p::thread_co_7_fu_5304_p2() {
    co_7_fu_5304_p2 = (!co_phi_fu_4835_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co_phi_fu_4835_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_co_8_fu_7931_p2() {
    co_8_fu_7931_p2 = (!co9_phi_fu_5033_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co9_phi_fu_5033_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_co_cast_mid2_fu_5324_p1() {
    co_cast_mid2_fu_5324_p1 = esl_zext<32,7>(co_cast_mid2_v_fu_5317_p3.read());
}

void subconv_1x1_8p_p::thread_co_cast_mid2_v_fu_5317_p3() {
    co_cast_mid2_v_fu_5317_p3 = (!exitcond_flatten_reg_8351.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_reg_8351.read()[0].to_bool())? co_7_fu_5304_p2.read(): co_phi_fu_4835_p4.read());
}

void subconv_1x1_8p_p::thread_co_phi_fu_4835_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_8342.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co_phi_fu_4835_p4 = co_cast_mid2_v_reg_8364.read();
    } else {
        co_phi_fu_4835_p4 = co_reg_4831.read();
    }
}

void subconv_1x1_8p_p::thread_exitcond10_fu_7392_p2() {
    exitcond10_fu_7392_p2 = (!w10_reg_4995.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w10_reg_4995.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond11_fu_6925_p2() {
    exitcond11_fu_6925_p2 = (!ci2_reg_4972.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci2_reg_4972.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond12_fu_7949_p2() {
    exitcond12_fu_7949_p2 = (!w11_phi_fu_5068_p4.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w11_phi_fu_5068_p4.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond13_fu_7521_p2() {
    exitcond13_fu_7521_p2 = (!ci3_reg_5007.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_5007.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond1_fu_5553_p2() {
    exitcond1_fu_5553_p2 = (!h1_reg_4878.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h1_reg_4878.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond2_fu_7341_p2() {
    exitcond2_fu_7341_p2 = (!h9_reg_4983.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h9_reg_4983.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond3_fu_6149_p2() {
    exitcond3_fu_6149_p2 = (!h4_reg_4913.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h4_reg_4913.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond4_fu_5604_p2() {
    exitcond4_fu_5604_p2 = (!w2_reg_4890.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w2_reg_4890.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond5_fu_6329_p2() {
    exitcond5_fu_6329_p2 = (!ci6_reg_4937.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci6_reg_4937.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond5_mid_fu_5340_p2() {
    exitcond5_mid_fu_5340_p2 = (exitcond_fu_5334_p2.read() & not_exitcond_flatten_fu_5329_p2.read());
}

void subconv_1x1_8p_p::thread_exitcond6_fu_6745_p2() {
    exitcond6_fu_6745_p2 = (!h8_reg_4948.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h8_reg_4948.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond7_fu_6200_p2() {
    exitcond7_fu_6200_p2 = (!w5_reg_4925.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w5_reg_4925.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond8_fu_5733_p2() {
    exitcond8_fu_5733_p2 = (!ci_reg_4902.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_4902.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond9_fu_6796_p2() {
    exitcond9_fu_6796_p2 = (!w9_reg_4960.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w9_reg_4960.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond_flatten1_fu_5272_p2() {
    exitcond_flatten1_fu_5272_p2 = (!indvar_flatten1_reg_4820.read().is_01() || !ap_const_lv13_1800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_reg_4820.read() == ap_const_lv13_1800);
}

void subconv_1x1_8p_p::thread_exitcond_flatten2_fu_7911_p2() {
    exitcond_flatten2_fu_7911_p2 = (!indvar_flatten3_reg_5041.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten3_reg_5041.read() == ap_const_lv8_40);
}

void subconv_1x1_8p_p::thread_exitcond_flatten3_fu_7899_p2() {
    exitcond_flatten3_fu_7899_p2 = (!indvar_flatten2_reg_5018.read().is_01() || !ap_const_lv13_1800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten2_reg_5018.read() == ap_const_lv13_1800);
}

void subconv_1x1_8p_p::thread_exitcond_flatten_fu_5284_p2() {
    exitcond_flatten_fu_5284_p2 = (!indvar_flatten_reg_4843.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_4843.read() == ap_const_lv8_40);
}

void subconv_1x1_8p_p::thread_exitcond_fu_5334_p2() {
    exitcond_fu_5334_p2 = (!w_phi_fu_4870_p4.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w_phi_fu_4870_p4.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond_mid_fu_7955_p2() {
    exitcond_mid_fu_7955_p2 = (exitcond12_fu_7949_p2.read() & not_exitcond_flatten_2_fu_7944_p2.read());
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5076_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5076_a_V = weight_36_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5076_a_V = weight_24_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5076_a_V = weight_12_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5076_a_V = weight_0_V_q0.read();
    } else {
        grp_MUL_DP_fu_5076_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5076_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5076_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5076_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5076_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5076_b_V = weight_84_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5076_b_V = weight_72_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5076_b_V = weight_60_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5076_b_V = weight_48_V_q0.read();
    } else {
        grp_MUL_DP_fu_5076_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5085_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5085_a_V = weight_37_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5085_a_V = weight_25_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5085_a_V = weight_13_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5085_a_V = weight_1_V_q0.read();
    } else {
        grp_MUL_DP_fu_5085_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5085_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5085_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5085_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5085_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5085_b_V = weight_85_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5085_b_V = weight_73_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5085_b_V = weight_61_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5085_b_V = weight_49_V_q0.read();
    } else {
        grp_MUL_DP_fu_5085_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5094_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5094_a_V = weight_38_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5094_a_V = weight_26_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5094_a_V = weight_14_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5094_a_V = weight_2_V_q0.read();
    } else {
        grp_MUL_DP_fu_5094_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5094_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5094_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5094_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5094_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5094_b_V = weight_86_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5094_b_V = weight_74_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5094_b_V = weight_62_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5094_b_V = weight_50_V_q0.read();
    } else {
        grp_MUL_DP_fu_5094_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5103_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5103_a_V = weight_39_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5103_a_V = weight_27_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5103_a_V = weight_15_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5103_a_V = weight_3_V_q0.read();
    } else {
        grp_MUL_DP_fu_5103_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5103_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5103_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5103_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5103_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5103_b_V = weight_87_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5103_b_V = weight_75_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5103_b_V = weight_63_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5103_b_V = weight_51_V_q0.read();
    } else {
        grp_MUL_DP_fu_5103_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5112_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5112_a_V = weight_40_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5112_a_V = weight_28_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5112_a_V = weight_16_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5112_a_V = weight_4_V_q0.read();
    } else {
        grp_MUL_DP_fu_5112_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5112_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5112_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5112_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5112_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5112_b_V = weight_88_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5112_b_V = weight_76_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5112_b_V = weight_64_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5112_b_V = weight_52_V_q0.read();
    } else {
        grp_MUL_DP_fu_5112_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5121_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5121_a_V = weight_41_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5121_a_V = weight_29_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5121_a_V = weight_17_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5121_a_V = weight_5_V_q0.read();
    } else {
        grp_MUL_DP_fu_5121_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5121_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5121_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5121_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5121_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5121_b_V = weight_89_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5121_b_V = weight_77_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5121_b_V = weight_65_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5121_b_V = weight_53_V_q0.read();
    } else {
        grp_MUL_DP_fu_5121_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5130_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5130_a_V = weight_42_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5130_a_V = weight_30_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5130_a_V = weight_18_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5130_a_V = weight_6_V_q0.read();
    } else {
        grp_MUL_DP_fu_5130_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5130_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5130_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5130_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5130_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5130_b_V = weight_90_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5130_b_V = weight_78_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5130_b_V = weight_66_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5130_b_V = weight_54_V_q0.read();
    } else {
        grp_MUL_DP_fu_5130_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5139_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5139_a_V = weight_43_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5139_a_V = weight_31_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5139_a_V = weight_19_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5139_a_V = weight_7_V_q0.read();
    } else {
        grp_MUL_DP_fu_5139_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5139_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5139_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5139_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5139_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5139_b_V = weight_91_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5139_b_V = weight_79_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5139_b_V = weight_67_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5139_b_V = weight_55_V_q0.read();
    } else {
        grp_MUL_DP_fu_5139_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5148_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5148_a_V = weight_44_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5148_a_V = weight_32_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5148_a_V = weight_20_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5148_a_V = weight_8_V_q0.read();
    } else {
        grp_MUL_DP_fu_5148_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5148_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5148_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5148_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5148_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5148_b_V = weight_92_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5148_b_V = weight_80_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5148_b_V = weight_68_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5148_b_V = weight_56_V_q0.read();
    } else {
        grp_MUL_DP_fu_5148_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5157_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5157_a_V = weight_45_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5157_a_V = weight_33_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5157_a_V = weight_21_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5157_a_V = weight_9_V_q0.read();
    } else {
        grp_MUL_DP_fu_5157_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5157_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5157_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5157_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5157_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5157_b_V = weight_93_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5157_b_V = weight_81_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5157_b_V = weight_69_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5157_b_V = weight_57_V_q0.read();
    } else {
        grp_MUL_DP_fu_5157_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5166_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5166_a_V = weight_46_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5166_a_V = weight_34_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5166_a_V = weight_22_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5166_a_V = weight_10_V_q0.read();
    } else {
        grp_MUL_DP_fu_5166_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5166_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5166_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5166_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5166_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5166_b_V = weight_94_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5166_b_V = weight_82_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5166_b_V = weight_70_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5166_b_V = weight_58_V_q0.read();
    } else {
        grp_MUL_DP_fu_5166_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5175_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5175_a_V = weight_47_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5175_a_V = weight_35_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5175_a_V = weight_23_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5175_a_V = weight_11_V_q0.read();
    } else {
        grp_MUL_DP_fu_5175_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5175_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state39.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        grp_MUL_DP_fu_5175_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_5175_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_5175_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        grp_MUL_DP_fu_5175_b_V = weight_95_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        grp_MUL_DP_fu_5175_b_V = weight_83_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_5175_b_V = weight_71_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        grp_MUL_DP_fu_5175_b_V = weight_59_V_q0.read();
    } else {
        grp_MUL_DP_fu_5175_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_h11_cast2_mid2_fu_7987_p3() {
    h11_cast2_mid2_fu_7987_p3 = (!exitcond_mid_fu_7955_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond_mid_fu_7955_p2.read()[0].to_bool())? h_13_fu_7968_p2.read(): h11_mid_fu_7937_p3.read());
}

void subconv_1x1_8p_p::thread_h11_mid_fu_7937_p3() {
    h11_mid_fu_7937_p3 = (!exitcond_flatten2_reg_9578.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten2_reg_9578.read()[0].to_bool())? ap_const_lv4_1: h11_phi_fu_5056_p4.read());
}

void subconv_1x1_8p_p::thread_h11_phi_fu_5056_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten3_reg_9569.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h11_phi_fu_5056_p4 = h11_cast2_mid2_reg_9603.read();
    } else {
        h11_phi_fu_5056_p4 = h11_reg_5052.read();
    }
}

void subconv_1x1_8p_p::thread_h1_cast_cast1_fu_5515_p1() {
    h1_cast_cast1_fu_5515_p1 = esl_zext<7,4>(h1_reg_4878.read());
}

void subconv_1x1_8p_p::thread_h1_cast_cast_fu_5519_p1() {
    h1_cast_cast_fu_5519_p1 = esl_zext<11,4>(h1_reg_4878.read());
}

void subconv_1x1_8p_p::thread_h4_cast_cast1_fu_6111_p1() {
    h4_cast_cast1_fu_6111_p1 = esl_zext<7,4>(h4_reg_4913.read());
}

void subconv_1x1_8p_p::thread_h4_cast_cast_fu_6115_p1() {
    h4_cast_cast_fu_6115_p1 = esl_zext<11,4>(h4_reg_4913.read());
}

void subconv_1x1_8p_p::thread_h8_cast9_cast1_fu_6707_p1() {
    h8_cast9_cast1_fu_6707_p1 = esl_zext<7,4>(h8_reg_4948.read());
}

void subconv_1x1_8p_p::thread_h8_cast9_cast_fu_6711_p1() {
    h8_cast9_cast_fu_6711_p1 = esl_zext<11,4>(h8_reg_4948.read());
}

void subconv_1x1_8p_p::thread_h9_cast6_cast1_fu_7303_p1() {
    h9_cast6_cast1_fu_7303_p1 = esl_zext<7,4>(h9_reg_4983.read());
}

void subconv_1x1_8p_p::thread_h9_cast6_cast_fu_7307_p1() {
    h9_cast6_cast_fu_7307_p1 = esl_zext<11,4>(h9_reg_4983.read());
}

void subconv_1x1_8p_p::thread_h_10_fu_6802_p2() {
    h_10_fu_6802_p2 = (!h8_reg_4948.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h8_reg_4948.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_13_fu_7968_p2() {
    h_13_fu_7968_p2 = (!h11_mid_fu_7937_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h11_mid_fu_7937_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_1_fu_7398_p2() {
    h_1_fu_7398_p2 = (!h9_reg_4983.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h9_reg_4983.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_7_fu_5610_p2() {
    h_7_fu_5610_p2 = (!h1_reg_4878.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h1_reg_4878.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_8_fu_5346_p2() {
    h_8_fu_5346_p2 = (!h_mid_fu_5310_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h_mid_fu_5310_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_9_fu_6206_p2() {
    h_9_fu_6206_p2 = (!h4_reg_4913.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h4_reg_4913.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_cast_mid2_fu_5365_p3() {
    h_cast_mid2_fu_5365_p3 = (!exitcond5_mid_fu_5340_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond5_mid_fu_5340_p2.read()[0].to_bool())? h_8_fu_5346_p2.read(): h_mid_fu_5310_p3.read());
}

void subconv_1x1_8p_p::thread_h_mid_fu_5310_p3() {
    h_mid_fu_5310_p3 = (!exitcond_flatten_reg_8351.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_reg_8351.read()[0].to_bool())? ap_const_lv4_1: h_phi_fu_4858_p4.read());
}

void subconv_1x1_8p_p::thread_h_phi_fu_4858_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_8342.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h_phi_fu_4858_p4 = h_cast_mid2_reg_8375.read();
    } else {
        h_phi_fu_4858_p4 = h_reg_4854.read();
    }
}

void subconv_1x1_8p_p::thread_indvar_flatten21_op_fu_7917_p2() {
    indvar_flatten21_op_fu_7917_p2 = (!indvar_flatten3_reg_5041.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten3_reg_5041.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void subconv_1x1_8p_p::thread_indvar_flatten_next1_fu_5278_p2() {
    indvar_flatten_next1_fu_5278_p2 = (!indvar_flatten1_reg_4820.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(indvar_flatten1_reg_4820.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void subconv_1x1_8p_p::thread_indvar_flatten_next2_fu_7923_p3() {
    indvar_flatten_next2_fu_7923_p3 = (!exitcond_flatten2_fu_7911_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_flatten2_fu_7911_p2.read()[0].to_bool())? ap_const_lv8_1: indvar_flatten21_op_fu_7917_p2.read());
}

void subconv_1x1_8p_p::thread_indvar_flatten_next3_fu_7905_p2() {
    indvar_flatten_next3_fu_7905_p2 = (!indvar_flatten2_reg_5018.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(indvar_flatten2_reg_5018.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void subconv_1x1_8p_p::thread_indvar_flatten_next_fu_5296_p3() {
    indvar_flatten_next_fu_5296_p3 = (!exitcond_flatten_fu_5284_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_flatten_fu_5284_p2.read()[0].to_bool())? ap_const_lv8_1: indvar_flatten_op_fu_5290_p2.read());
}

void subconv_1x1_8p_p::thread_indvar_flatten_op_fu_5290_p2() {
    indvar_flatten_op_fu_5290_p2 = (!indvar_flatten_reg_4843.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten_reg_4843.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void subconv_1x1_8p_p::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        input_V_address0 = input_V_addr_3_reg_9431.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        input_V_address0 = input_V_addr_2_reg_9136.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        input_V_address0 = input_V_addr_1_reg_8842.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        input_V_address0 = input_V_addr_reg_8548.read();
    } else {
        input_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_input_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_not_exitcond_flatten_2_fu_7944_p2() {
    not_exitcond_flatten_2_fu_7944_p2 = (exitcond_flatten2_reg_9578.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_not_exitcond_flatten_fu_5329_p2() {
    not_exitcond_flatten_fu_5329_p2 = (exitcond_flatten_reg_8351.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_p_shl10_cast_fu_6271_p1() {
    p_shl10_cast_fu_6271_p1 = esl_zext<15,14>(tmp_69_fu_6263_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl11_cast_fu_6283_p1() {
    p_shl11_cast_fu_6283_p1 = esl_zext<15,12>(tmp_70_fu_6275_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl12_cast_fu_6236_p1() {
    p_shl12_cast_fu_6236_p1 = esl_zext<11,10>(tmp_169_fu_6228_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl13_cast_fu_6248_p1() {
    p_shl13_cast_fu_6248_p1 = esl_zext<11,8>(tmp_170_fu_6240_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl14_cast_fu_6723_p1() {
    p_shl14_cast_fu_6723_p1 = esl_zext<8,7>(tmp_153_fu_6715_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl15_cast_fu_6735_p1() {
    p_shl15_cast_fu_6735_p1 = esl_zext<8,5>(tmp_154_fu_6727_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl16_cast_fu_6867_p1() {
    p_shl16_cast_fu_6867_p1 = esl_zext<15,14>(tmp_95_fu_6859_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl17_cast_fu_6879_p1() {
    p_shl17_cast_fu_6879_p1 = esl_zext<15,12>(tmp_96_fu_6871_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl18_cast_fu_6832_p1() {
    p_shl18_cast_fu_6832_p1 = esl_zext<11,10>(tmp_178_fu_6824_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl19_cast_fu_6844_p1() {
    p_shl19_cast_fu_6844_p1 = esl_zext<11,8>(tmp_179_fu_6836_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl1_cast_fu_5391_p1() {
    p_shl1_cast_fu_5391_p1 = esl_zext<8,5>(tmp_42_fu_5384_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl20_cast_fu_7319_p1() {
    p_shl20_cast_fu_7319_p1 = esl_zext<8,7>(tmp_165_fu_7311_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl21_cast_fu_7331_p1() {
    p_shl21_cast_fu_7331_p1 = esl_zext<8,5>(tmp_166_fu_7323_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl22_cast_fu_7463_p1() {
    p_shl22_cast_fu_7463_p1 = esl_zext<15,14>(tmp_124_fu_7455_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl23_cast_fu_7475_p1() {
    p_shl23_cast_fu_7475_p1 = esl_zext<15,12>(tmp_125_fu_7467_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl24_cast_fu_7428_p1() {
    p_shl24_cast_fu_7428_p1 = esl_zext<11,10>(tmp_189_fu_7420_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl25_cast_fu_7440_p1() {
    p_shl25_cast_fu_7440_p1 = esl_zext<11,8>(tmp_190_fu_7432_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl26_cast_fu_8002_p1() {
    p_shl26_cast_fu_8002_p1 = esl_zext<8,7>(tmp_97_fu_7995_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl27_cast_fu_8013_p1() {
    p_shl27_cast_fu_8013_p1 = esl_zext<8,5>(tmp_98_fu_8006_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl2_cast_fu_5531_p1() {
    p_shl2_cast_fu_5531_p1 = esl_zext<8,7>(tmp_146_fu_5523_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl3_cast_fu_5543_p1() {
    p_shl3_cast_fu_5543_p1 = esl_zext<8,5>(tmp_147_fu_5535_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl4_cast_fu_5675_p1() {
    p_shl4_cast_fu_5675_p1 = esl_zext<15,14>(tmp_43_fu_5667_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl5_cast_fu_5687_p1() {
    p_shl5_cast_fu_5687_p1 = esl_zext<15,12>(tmp_44_fu_5679_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl6_cast_fu_5640_p1() {
    p_shl6_cast_fu_5640_p1 = esl_zext<11,10>(tmp_157_fu_5632_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl7_cast_fu_5652_p1() {
    p_shl7_cast_fu_5652_p1 = esl_zext<11,8>(tmp_158_fu_5644_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl8_cast_fu_6127_p1() {
    p_shl8_cast_fu_6127_p1 = esl_zext<8,7>(tmp_149_fu_6119_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl9_cast_fu_6139_p1() {
    p_shl9_cast_fu_6139_p1 = esl_zext<8,5>(tmp_150_fu_6131_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl_cast_fu_5380_p1() {
    p_shl_cast_fu_5380_p1 = esl_zext<8,7>(tmp_41_fu_5373_p3.read());
}

void subconv_1x1_8p_p::thread_tmp_100_fu_6951_p1() {
    tmp_100_fu_6951_p1 = grp_MUL_DP_fu_5076_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_101_fu_6962_p1() {
    tmp_101_fu_6962_p1 = grp_MUL_DP_fu_5076_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_102_fu_6981_p1() {
    tmp_102_fu_6981_p1 = grp_MUL_DP_fu_5085_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_103_fu_6992_p1() {
    tmp_103_fu_6992_p1 = grp_MUL_DP_fu_5085_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_104_fu_7011_p1() {
    tmp_104_fu_7011_p1 = grp_MUL_DP_fu_5094_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_105_fu_7022_p1() {
    tmp_105_fu_7022_p1 = grp_MUL_DP_fu_5094_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_106_fu_7041_p1() {
    tmp_106_fu_7041_p1 = grp_MUL_DP_fu_5103_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_107_fu_7052_p1() {
    tmp_107_fu_7052_p1 = grp_MUL_DP_fu_5103_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_108_fu_7071_p1() {
    tmp_108_fu_7071_p1 = grp_MUL_DP_fu_5112_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_109_fu_7082_p1() {
    tmp_109_fu_7082_p1 = grp_MUL_DP_fu_5112_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_110_fu_7101_p1() {
    tmp_110_fu_7101_p1 = grp_MUL_DP_fu_5121_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_111_fu_7112_p1() {
    tmp_111_fu_7112_p1 = grp_MUL_DP_fu_5121_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_112_fu_7131_p1() {
    tmp_112_fu_7131_p1 = grp_MUL_DP_fu_5130_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_113_fu_7142_p1() {
    tmp_113_fu_7142_p1 = grp_MUL_DP_fu_5130_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_114_fu_7161_p1() {
    tmp_114_fu_7161_p1 = grp_MUL_DP_fu_5139_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_115_fu_7172_p1() {
    tmp_115_fu_7172_p1 = grp_MUL_DP_fu_5139_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_116_fu_7191_p1() {
    tmp_116_fu_7191_p1 = grp_MUL_DP_fu_5148_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_117_fu_7202_p1() {
    tmp_117_fu_7202_p1 = grp_MUL_DP_fu_5148_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_118_fu_7221_p1() {
    tmp_118_fu_7221_p1 = grp_MUL_DP_fu_5157_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_119_fu_7232_p1() {
    tmp_119_fu_7232_p1 = grp_MUL_DP_fu_5157_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_11_fu_6955_p2() {
    tmp_11_fu_6955_p2 = (!ShuffleConvs_2_Downs_78_q0.read().is_01() || !tmp_100_fu_6951_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_78_q0.read()) + sc_biguint<8>(tmp_100_fu_6951_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_120_fu_7251_p1() {
    tmp_120_fu_7251_p1 = grp_MUL_DP_fu_5166_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_121_fu_7262_p1() {
    tmp_121_fu_7262_p1 = grp_MUL_DP_fu_5166_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_122_fu_7281_p1() {
    tmp_122_fu_7281_p1 = grp_MUL_DP_fu_5175_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_123_fu_7292_p1() {
    tmp_123_fu_7292_p1 = grp_MUL_DP_fu_5175_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_124_fu_7455_p3() {
    tmp_124_fu_7455_p3 = esl_concat<11,3>(tmp_192_fu_7450_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_125_fu_7467_p3() {
    tmp_125_fu_7467_p3 = esl_concat<11,1>(tmp_192_fu_7450_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_126_fu_7547_p1() {
    tmp_126_fu_7547_p1 = grp_MUL_DP_fu_5076_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_127_fu_7558_p1() {
    tmp_127_fu_7558_p1 = grp_MUL_DP_fu_5076_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_128_fu_7577_p1() {
    tmp_128_fu_7577_p1 = grp_MUL_DP_fu_5085_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_129_fu_7588_p1() {
    tmp_129_fu_7588_p1 = grp_MUL_DP_fu_5085_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_130_fu_7607_p1() {
    tmp_130_fu_7607_p1 = grp_MUL_DP_fu_5094_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_131_fu_7618_p1() {
    tmp_131_fu_7618_p1 = grp_MUL_DP_fu_5094_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_132_fu_7637_p1() {
    tmp_132_fu_7637_p1 = grp_MUL_DP_fu_5103_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_133_fu_7648_p1() {
    tmp_133_fu_7648_p1 = grp_MUL_DP_fu_5103_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_134_fu_7667_p1() {
    tmp_134_fu_7667_p1 = grp_MUL_DP_fu_5112_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_135_fu_7678_p1() {
    tmp_135_fu_7678_p1 = grp_MUL_DP_fu_5112_ap_return_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_136_fu_7697_p1() {
    tmp_136_fu_7697_p1 = grp_MUL_DP_fu_5121_ap_return_0.read().range(8-1, 0);
}

}

