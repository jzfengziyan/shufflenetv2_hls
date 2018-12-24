#include "subconv_1x1_8p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_10_address0 = ShuffleConvs_2_Downs_254_reg_7639.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_10_address0 = ShuffleConvs_2_Downs_253_reg_7634.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_10_address0 = ShuffleConvs_2_Downs_158_reg_6800.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_10_address0 = ShuffleConvs_2_Downs_157_reg_6795.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_10_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_10_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_address1() {
    ShuffleConvs_2_Downs_10_address1 = ShuffleConvs_2_Downs_301_reg_8090.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_10_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_10_d0 = tmp_38_8_reg_7930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_10_d0 = tmp_36_8_fu_5692_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_10_d0 = tmp_27_8_reg_7091.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_10_d0 = tmp_25_8_fu_4458_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_10_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_d1() {
    ShuffleConvs_2_Downs_10_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_14)))) {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_14))) {
        ShuffleConvs_2_Downs_10_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_10_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_11_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_11_address0 = ShuffleConvs_2_Downs_202_reg_7199.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_11_address0 = ShuffleConvs_2_Downs_201_reg_7194.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_11_address0 = ShuffleConvs_2_Downs_106_reg_6361.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_11_address0 = ShuffleConvs_2_Downs_105_reg_6356.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_11_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_11_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_address1() {
    ShuffleConvs_2_Downs_11_address1 = ShuffleConvs_2_Downs_295_reg_8054.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_11_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_11_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_11_d0 = tmp_32_2_reg_7480.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_11_d0 = tmp_30_2_fu_4985_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_11_d0 = tmp_22_2_reg_6642.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_11_d0 = tmp_20_2_fu_3763_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_11_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_11_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_d1() {
    ShuffleConvs_2_Downs_11_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_2)))) {
        ShuffleConvs_2_Downs_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_2))) {
        ShuffleConvs_2_Downs_11_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_11_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_12_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_12_address0 = ShuffleConvs_2_Downs_252_reg_7629.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_12_address0 = ShuffleConvs_2_Downs_251_reg_7624.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_12_address0 = ShuffleConvs_2_Downs_156_reg_6790.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_12_address0 = ShuffleConvs_2_Downs_155_reg_6785.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_12_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_12_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_address1() {
    ShuffleConvs_2_Downs_12_address1 = ShuffleConvs_2_Downs_299_reg_8078.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_12_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_12_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_12_d0 = tmp_38_7_reg_7925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_12_d0 = tmp_36_7_fu_5677_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_12_d0 = tmp_27_7_reg_7086.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_12_d0 = tmp_25_7_fu_4443_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_12_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_12_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_d1() {
    ShuffleConvs_2_Downs_12_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_13)))) {
        ShuffleConvs_2_Downs_12_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_13))) {
        ShuffleConvs_2_Downs_12_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_12_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_13_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_13_address0 = ShuffleConvs_2_Downs_250_reg_7619.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_13_address0 = ShuffleConvs_2_Downs_249_reg_7614.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_13_address0 = ShuffleConvs_2_Downs_154_reg_6780.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_13_address0 = ShuffleConvs_2_Downs_153_reg_6775.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_13_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_13_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_address1() {
    ShuffleConvs_2_Downs_13_address1 = ShuffleConvs_2_Downs_298_reg_8072.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_13_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_13_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_13_d0 = tmp_38_6_reg_7920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_13_d0 = tmp_36_6_fu_5662_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_13_d0 = tmp_27_6_reg_7081.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_13_d0 = tmp_25_6_fu_4428_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_13_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_13_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_d1() {
    ShuffleConvs_2_Downs_13_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_12)))) {
        ShuffleConvs_2_Downs_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_12))) {
        ShuffleConvs_2_Downs_13_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_13_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_14_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_14_address0 = ShuffleConvs_2_Downs_248_reg_7609.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_14_address0 = ShuffleConvs_2_Downs_247_reg_7604.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_14_address0 = ShuffleConvs_2_Downs_152_reg_6770.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_14_address0 = ShuffleConvs_2_Downs_151_reg_6765.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_14_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_14_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_address1() {
    ShuffleConvs_2_Downs_14_address1 = ShuffleConvs_2_Downs_297_reg_8066.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_14_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_14_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_14_d0 = tmp_38_5_reg_7915.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_14_d0 = tmp_36_5_fu_5647_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_14_d0 = tmp_27_5_reg_7076.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_14_d0 = tmp_25_5_fu_4413_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_14_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_14_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_d1() {
    ShuffleConvs_2_Downs_14_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_11)))) {
        ShuffleConvs_2_Downs_14_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_11))) {
        ShuffleConvs_2_Downs_14_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_14_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_15_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_15_address0 = ShuffleConvs_2_Downs_246_reg_7599.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_15_address0 = ShuffleConvs_2_Downs_245_reg_7594.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_15_address0 = ShuffleConvs_2_Downs_150_reg_6760.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_15_address0 = ShuffleConvs_2_Downs_149_reg_6755.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_15_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_15_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_address1() {
    ShuffleConvs_2_Downs_15_address1 = ShuffleConvs_2_Downs_296_reg_8060.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_15_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_15_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_15_d0 = tmp_38_4_reg_7910.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_15_d0 = tmp_36_4_fu_5632_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_15_d0 = tmp_27_4_reg_7071.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_15_d0 = tmp_25_4_fu_4398_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_15_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_15_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_d1() {
    ShuffleConvs_2_Downs_15_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_10)))) {
        ShuffleConvs_2_Downs_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_10))) {
        ShuffleConvs_2_Downs_15_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_15_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_16_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_16_address0 = ShuffleConvs_2_Downs_262_reg_7679.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_16_address0 = ShuffleConvs_2_Downs_261_reg_7674.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_16_address0 = ShuffleConvs_2_Downs_166_reg_6840.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_16_address0 = ShuffleConvs_2_Downs_165_reg_6835.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_16_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_16_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_address1() {
    ShuffleConvs_2_Downs_16_address1 = ShuffleConvs_2_Downs_310_reg_8144.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_16_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_16_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_16_d0 = tmp_38_3_reg_7905.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_16_d0 = tmp_36_3_fu_5617_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_16_d0 = tmp_27_3_reg_7066.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_16_d0 = tmp_25_3_fu_4383_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_16_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_16_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_d1() {
    ShuffleConvs_2_Downs_16_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_F)))) {
        ShuffleConvs_2_Downs_16_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_16_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_F))) {
        ShuffleConvs_2_Downs_16_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_16_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_17_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_17_address0 = ShuffleConvs_2_Downs_256_reg_7649.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_17_address0 = ShuffleConvs_2_Downs_255_reg_7644.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_17_address0 = ShuffleConvs_2_Downs_160_reg_6810.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_17_address0 = ShuffleConvs_2_Downs_159_reg_6805.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_17_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_17_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_address1() {
    ShuffleConvs_2_Downs_17_address1 = ShuffleConvs_2_Downs_302_reg_8096.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_17_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_17_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_17_d0 = tmp_38_2_reg_7900.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_17_d0 = tmp_36_2_fu_5602_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_17_d0 = tmp_27_2_reg_7061.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_17_d0 = tmp_25_2_fu_4368_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_17_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_17_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_d1() {
    ShuffleConvs_2_Downs_17_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_E)))) {
        ShuffleConvs_2_Downs_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_17_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_E))) {
        ShuffleConvs_2_Downs_17_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_17_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_18_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_18_address0 = ShuffleConvs_2_Downs_260_reg_7669.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_18_address0 = ShuffleConvs_2_Downs_259_reg_7664.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_18_address0 = ShuffleConvs_2_Downs_164_reg_6830.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_18_address0 = ShuffleConvs_2_Downs_163_reg_6825.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_18_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_18_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_address1() {
    ShuffleConvs_2_Downs_18_address1 = ShuffleConvs_2_Downs_307_reg_8126.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_18_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_18_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_18_d0 = tmp_38_1_reg_7895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_18_d0 = tmp_36_1_fu_5587_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_18_d0 = tmp_27_1_reg_7056.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_18_d0 = tmp_25_1_fu_4353_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_18_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_d1() {
    ShuffleConvs_2_Downs_18_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_D)))) {
        ShuffleConvs_2_Downs_18_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_18_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_D))) {
        ShuffleConvs_2_Downs_18_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_18_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_19_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_19_address0 = ShuffleConvs_2_Downs_258_reg_7659.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_19_address0 = ShuffleConvs_2_Downs_257_reg_7654.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_19_address0 = ShuffleConvs_2_Downs_162_reg_6820.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_19_address0 = ShuffleConvs_2_Downs_161_reg_6815.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_19_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_19_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_address1() {
    ShuffleConvs_2_Downs_19_address1 = ShuffleConvs_2_Downs_305_reg_8114.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_19_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_19_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_19_d0 = tmp_18_reg_7890.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_19_d0 = tmp_16_fu_5572_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_19_d0 = tmp_9_reg_7051.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_19_d0 = tmp_7_fu_4338_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_19_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_19_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_d1() {
    ShuffleConvs_2_Downs_19_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_C)))) {
        ShuffleConvs_2_Downs_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_19_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_C))) {
        ShuffleConvs_2_Downs_19_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_19_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_1_address0 = ShuffleConvs_2_Downs_192_reg_7149.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_1_address0 = ShuffleConvs_2_Downs_191_reg_7144.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_1_address0 = ShuffleConvs_2_Downs_96_reg_6311.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_1_address0 = ShuffleConvs_2_Downs_95_reg_6306.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_1_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_1_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_address1() {
    ShuffleConvs_2_Downs_1_address1 = ShuffleConvs_2_Downs_287_reg_8006.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_1_d0 = tmp_32_8_reg_7510.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_1_d0 = tmp_30_8_fu_5075_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_1_d0 = tmp_22_8_reg_6672.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_1_d0 = tmp_20_8_fu_3853_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_1_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_d1() {
    ShuffleConvs_2_Downs_1_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_8)))) {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_8))) {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_1_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_20_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_20_address0 = ShuffleConvs_2_Downs_212_reg_7249.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_20_address0 = ShuffleConvs_2_Downs_211_reg_7244.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_20_address0 = ShuffleConvs_2_Downs_116_reg_6411.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_20_address0 = ShuffleConvs_2_Downs_115_reg_6406.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_20_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_20_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_address1() {
    ShuffleConvs_2_Downs_20_address1 = ShuffleConvs_2_Downs_308_reg_8132.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_20_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_20_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_20_d0 = tmp_32_10_reg_7525.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_20_d0 = tmp_30_10_fu_5120_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_20_d0 = tmp_22_10_reg_6687.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_20_d0 = tmp_20_10_fu_3898_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_20_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_20_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_d1() {
    ShuffleConvs_2_Downs_20_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_B)))) {
        ShuffleConvs_2_Downs_20_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_20_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_B))) {
        ShuffleConvs_2_Downs_20_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_20_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_21_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_21_address0 = ShuffleConvs_2_Downs_206_reg_7219.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_21_address0 = ShuffleConvs_2_Downs_205_reg_7214.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_21_address0 = ShuffleConvs_2_Downs_110_reg_6381.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_21_address0 = ShuffleConvs_2_Downs_109_reg_6376.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_21_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_21_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_address1() {
    ShuffleConvs_2_Downs_21_address1 = ShuffleConvs_2_Downs_303_reg_8102.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_21_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_21_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_21_d0 = tmp_32_s_reg_7520.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_21_d0 = tmp_30_s_fu_5105_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_21_d0 = tmp_22_s_reg_6682.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_21_d0 = tmp_20_s_fu_3883_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_21_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_21_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_d1() {
    ShuffleConvs_2_Downs_21_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_A)))) {
        ShuffleConvs_2_Downs_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_21_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_A))) {
        ShuffleConvs_2_Downs_21_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_21_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_22_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_22_address0 = ShuffleConvs_2_Downs_210_reg_7239.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_22_address0 = ShuffleConvs_2_Downs_209_reg_7234.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_22_address0 = ShuffleConvs_2_Downs_114_reg_6401.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_22_address0 = ShuffleConvs_2_Downs_113_reg_6396.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_22_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_22_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_address1() {
    ShuffleConvs_2_Downs_22_address1 = ShuffleConvs_2_Downs_306_reg_8120.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_22_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_22_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_22_d0 = tmp_32_1_reg_7475.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_22_d0 = tmp_30_1_fu_4970_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_22_d0 = tmp_22_1_reg_6637.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_22_d0 = tmp_20_1_fu_3748_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_22_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_22_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_d1() {
    ShuffleConvs_2_Downs_22_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_1)))) {
        ShuffleConvs_2_Downs_22_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_22_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_1))) {
        ShuffleConvs_2_Downs_22_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_22_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_23_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_23_address0 = ShuffleConvs_2_Downs_214_reg_7259.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_23_address0 = ShuffleConvs_2_Downs_213_reg_7254.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_23_address0 = ShuffleConvs_2_Downs_118_reg_6421.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_23_address0 = ShuffleConvs_2_Downs_117_reg_6416.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_23_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_23_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_address1() {
    ShuffleConvs_2_Downs_23_address1 = ShuffleConvs_2_Downs_309_reg_8138.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_23_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_23_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_23_d0 = tmp_14_reg_7470.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_23_d0 = tmp_11_fu_4955_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_23_d0 = tmp_5_reg_6632.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_23_d0 = tmp_3_fu_3733_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_23_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_23_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_d1() {
    ShuffleConvs_2_Downs_23_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_0)))) {
        ShuffleConvs_2_Downs_23_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_23_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_0))) {
        ShuffleConvs_2_Downs_23_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_23_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_2_address0 = ShuffleConvs_2_Downs_198_reg_7179.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_2_address0 = ShuffleConvs_2_Downs_197_reg_7174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_2_address0 = ShuffleConvs_2_Downs_102_reg_6341.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_2_address0 = ShuffleConvs_2_Downs_101_reg_6336.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_2_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_2_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_address1() {
    ShuffleConvs_2_Downs_2_address1 = ShuffleConvs_2_Downs_291_reg_8030.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_2_d0 = tmp_32_7_reg_7505.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_2_d0 = tmp_30_7_fu_5060_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_2_d0 = tmp_22_7_reg_6667.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_2_d0 = tmp_20_7_fu_3838_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_2_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_d1() {
    ShuffleConvs_2_Downs_2_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_7)))) {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_7))) {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_2_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_3_address0 = ShuffleConvs_2_Downs_208_reg_7229.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_3_address0 = ShuffleConvs_2_Downs_207_reg_7224.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_3_address0 = ShuffleConvs_2_Downs_112_reg_6391.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_3_address0 = ShuffleConvs_2_Downs_111_reg_6386.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_3_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_3_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_address1() {
    ShuffleConvs_2_Downs_3_address1 = ShuffleConvs_2_Downs_304_reg_8108.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_3_d0 = tmp_32_6_reg_7500.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_3_d0 = tmp_30_6_fu_5045_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_3_d0 = tmp_22_6_reg_6662.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_3_d0 = tmp_20_6_fu_3823_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_3_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_3_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_d1() {
    ShuffleConvs_2_Downs_3_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_6)))) {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_6))) {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_3_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_4_address0 = ShuffleConvs_2_Downs_204_reg_7209.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_4_address0 = ShuffleConvs_2_Downs_203_reg_7204.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_4_address0 = ShuffleConvs_2_Downs_108_reg_6371.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_4_address0 = ShuffleConvs_2_Downs_107_reg_6366.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_4_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_4_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_address1() {
    ShuffleConvs_2_Downs_4_address1 = ShuffleConvs_2_Downs_300_reg_8084.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_4_d0 = tmp_32_5_reg_7495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_4_d0 = tmp_30_5_fu_5030_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_4_d0 = tmp_22_5_reg_6657.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_4_d0 = tmp_20_5_fu_3808_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_4_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_4_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_d1() {
    ShuffleConvs_2_Downs_4_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_5)))) {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_5))) {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_4_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_5_address0 = ShuffleConvs_2_Downs_200_reg_7189.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_5_address0 = ShuffleConvs_2_Downs_199_reg_7184.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_5_address0 = ShuffleConvs_2_Downs_104_reg_6351.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_5_address0 = ShuffleConvs_2_Downs_103_reg_6346.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_5_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_5_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_address1() {
    ShuffleConvs_2_Downs_5_address1 = ShuffleConvs_2_Downs_292_reg_8036.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_5_d0 = tmp_32_4_reg_7490.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_5_d0 = tmp_30_4_fu_5015_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_5_d0 = tmp_22_4_reg_6652.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_5_d0 = tmp_20_4_fu_3793_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_5_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_5_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_d1() {
    ShuffleConvs_2_Downs_5_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_4)))) {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_4))) {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_5_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_6_address0 = ShuffleConvs_2_Downs_194_reg_7159.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_6_address0 = ShuffleConvs_2_Downs_193_reg_7154.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_6_address0 = ShuffleConvs_2_Downs_98_reg_6321.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_6_address0 = ShuffleConvs_2_Downs_97_reg_6316.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_6_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_6_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_address1() {
    ShuffleConvs_2_Downs_6_address1 = ShuffleConvs_2_Downs_288_reg_8012.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_6_d0 = tmp_32_3_reg_7485.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_6_d0 = tmp_30_3_fu_5000_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_6_d0 = tmp_22_3_reg_6647.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_6_d0 = tmp_20_3_fu_3778_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_6_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_d1() {
    ShuffleConvs_2_Downs_6_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_3)))) {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_3))) {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_6_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_7_address0 = ShuffleConvs_2_Downs_244_reg_7589.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_7_address0 = ShuffleConvs_2_Downs_243_reg_7584.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_7_address0 = ShuffleConvs_2_Downs_148_reg_6750.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_7_address0 = ShuffleConvs_2_Downs_147_reg_6745.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_7_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_7_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_address1() {
    ShuffleConvs_2_Downs_7_address1 = ShuffleConvs_2_Downs_294_reg_8048.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_7_d0 = tmp_38_10_reg_7945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_7_d0 = tmp_36_10_fu_5737_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_7_d0 = tmp_27_10_reg_7106.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_7_d0 = tmp_25_10_fu_4503_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_7_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_7_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_d1() {
    ShuffleConvs_2_Downs_7_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_0) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_16)))) {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(ap_const_lv6_16, tmp_160_fu_6141_p1.read()))) {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_7_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_8_address0 = ShuffleConvs_2_Downs_240_reg_7569.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_8_address0 = ShuffleConvs_2_Downs_239_reg_7564.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_8_address0 = ShuffleConvs_2_Downs_144_reg_6730.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_8_address0 = ShuffleConvs_2_Downs_143_reg_6725.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_8_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_8_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_address1() {
    ShuffleConvs_2_Downs_8_address1 = ShuffleConvs_2_Downs_289_reg_8018.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_8_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_8_d0 = tmp_38_s_reg_7940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_8_d0 = tmp_36_s_fu_5722_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_8_d0 = tmp_27_s_reg_7101.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_8_d0 = tmp_25_s_fu_4488_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_8_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_8_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_d1() {
    ShuffleConvs_2_Downs_8_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_16)))) {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(ap_const_lv6_16, tmp_160_fu_6141_p1.read()))) {
        ShuffleConvs_2_Downs_8_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_8_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()))) {
        ShuffleConvs_2_Downs_9_address0 = ShuffleConvs_2_Downs_242_reg_7579.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        ShuffleConvs_2_Downs_9_address0 = ShuffleConvs_2_Downs_241_reg_7574.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()))) {
        ShuffleConvs_2_Downs_9_address0 = ShuffleConvs_2_Downs_146_reg_6740.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()))) {
        ShuffleConvs_2_Downs_9_address0 = ShuffleConvs_2_Downs_145_reg_6735.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_9_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_9_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_address1() {
    ShuffleConvs_2_Downs_9_address1 = ShuffleConvs_2_Downs_293_reg_8042.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())))) {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_9_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read())) {
        ShuffleConvs_2_Downs_9_d0 = tmp_38_9_reg_7935.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        ShuffleConvs_2_Downs_9_d0 = tmp_36_9_fu_5707_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ShuffleConvs_2_Downs_9_d0 = tmp_27_9_reg_7096.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ShuffleConvs_2_Downs_9_d0 = tmp_25_9_fu_4473_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_9_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_9_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_d1() {
    ShuffleConvs_2_Downs_9_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state62.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_15)))) {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_15))) {
        ShuffleConvs_2_Downs_9_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_9_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<9>) (tmp_288_cast_fu_6110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_address0 = ShuffleConvs_2_Downs_196_reg_7169.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()))) {
        ShuffleConvs_2_Downs_address0 = ShuffleConvs_2_Downs_195_reg_7164.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()))) {
        ShuffleConvs_2_Downs_address0 = ShuffleConvs_2_Downs_100_reg_6331.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()))) {
        ShuffleConvs_2_Downs_address0 = ShuffleConvs_2_Downs_99_reg_6326.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_address0 =  (sc_lv<9>) (tmp_217_cast_fu_3429_p1.read());
    } else {
        ShuffleConvs_2_Downs_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_address1() {
    ShuffleConvs_2_Downs_address1 = ShuffleConvs_2_Downs_290_reg_8024.read();
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read()))) {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()))) {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read())) {
        ShuffleConvs_2_Downs_d0 = tmp_32_9_reg_7515.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        ShuffleConvs_2_Downs_d0 = tmp_30_9_fu_5090_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ShuffleConvs_2_Downs_d0 = tmp_22_9_reg_6677.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ShuffleConvs_2_Downs_d0 = tmp_20_9_fu_3868_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()))) {
        ShuffleConvs_2_Downs_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_2_Downs_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_d1() {
    ShuffleConvs_2_Downs_d1 = ap_const_lv8_0;
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state50.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
          esl_seteq<1,6,6>(tmp_100_fu_3425_p1.read(), ap_const_lv6_9)))) {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ShuffleConvs_2_Downs_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_233_fu_6199_p3.read()) && 
         esl_seteq<1,6,6>(tmp_160_fu_6141_p1.read(), ap_const_lv6_9))) {
        ShuffleConvs_2_Downs_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_2_Downs_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[51];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[2];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[3];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[4];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[5];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[6];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[7];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[8];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[9];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[10];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[11];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[12];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[13];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[14];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[15];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[16];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[17];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[18];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[19];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[20];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[21];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[22];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[23];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[24];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[25];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[26];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[27];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[28];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[29];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[30];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[31];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[32];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[33];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[34];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[35];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[36];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[37];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[38];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[39];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[40];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[41];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[42];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[43];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[44];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[45];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[46];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[47];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[48];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[49];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state62() {
    ap_CS_fsm_state62 = ap_CS_fsm.read()[50];
}

void subconv_1x1_8p_p::thread_ap_CS_fsm_state75() {
    ap_CS_fsm_state75 = ap_CS_fsm.read()[52];
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

void subconv_1x1_8p_p::thread_ap_block_state10_pp0_stage0_iter8() {
    ap_block_state10_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state12_pp0_stage0_iter10() {
    ap_block_state12_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state13_pp0_stage0_iter11() {
    ap_block_state13_pp0_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state63_pp1_stage0_iter0() {
    ap_block_state63_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state64_pp1_stage0_iter1() {
    ap_block_state64_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state65_pp1_stage0_iter2() {
    ap_block_state65_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state66_pp1_stage0_iter3() {
    ap_block_state66_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state67_pp1_stage0_iter4() {
    ap_block_state67_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state68_pp1_stage0_iter5() {
    ap_block_state68_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state69_pp1_stage0_iter6() {
    ap_block_state69_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state70_pp1_stage0_iter7() {
    ap_block_state70_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state71_pp1_stage0_iter8() {
    ap_block_state71_pp1_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state72_pp1_stage0_iter9() {
    ap_block_state72_pp1_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state73_pp1_stage0_iter10() {
    ap_block_state73_pp1_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state74_pp1_stage0_iter11() {
    ap_block_state74_pp1_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_8p_p::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten1_fu_3211_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_condition_pp1_exit_iter0_state63() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten3_fu_5900_p2.read())) {
        ap_condition_pp1_exit_iter0_state63 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state63 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read()))) {
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

void subconv_1x1_8p_p::thread_ap_idle_pp1() {
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

void subconv_1x1_8p_p::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state75.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_arrayNo_cast3_mid2_v_1_fu_5924_p3() {
    arrayNo_cast3_mid2_v_1_fu_5924_p3 = (!exitcond_flatten2_fu_5918_p2.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten2_fu_5918_p2.read()[0].to_bool())? co_8_fu_5912_p2.read(): co9_phi_fu_2685_p4.read());
}

void subconv_1x1_8p_p::thread_bias_V_address0() {
    bias_V_address0 =  (sc_lv<7>) (co_cast_mid2_fu_3337_p1.read());
}

void subconv_1x1_8p_p::thread_bias_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        bias_V_ce0 = ap_const_logic_1;
    } else {
        bias_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_ci2_cast7_cast1_fu_4792_p1() {
    ci2_cast7_cast1_fu_4792_p1 = esl_zext<9,7>(ci2_reg_2624.read());
}

void subconv_1x1_8p_p::thread_ci2_cast7_cast_fu_4796_p1() {
    ci2_cast7_cast_fu_4796_p1 = esl_zext<8,7>(ci2_reg_2624.read());
}

void subconv_1x1_8p_p::thread_ci3_cast4_cast1_fu_5409_p1() {
    ci3_cast4_cast1_fu_5409_p1 = esl_zext<9,7>(ci3_reg_2659.read());
}

void subconv_1x1_8p_p::thread_ci3_cast4_cast_fu_5413_p1() {
    ci3_cast4_cast_fu_5413_p1 = esl_zext<8,7>(ci3_reg_2659.read());
}

void subconv_1x1_8p_p::thread_ci6_cast_cast_fu_4185_p1() {
    ci6_cast_cast_fu_4185_p1 = esl_zext<9,7>(ci6_reg_2589.read());
}

void subconv_1x1_8p_p::thread_ci_1_fu_3713_p2() {
    ci_1_fu_3713_p2 = (!ci_reg_2554.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci_reg_2554.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_2_fu_4318_p2() {
    ci_2_fu_4318_p2 = (!ci6_reg_2589.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci6_reg_2589.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_3_fu_4935_p2() {
    ci_3_fu_4935_p2 = (!ci2_reg_2624.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci2_reg_2624.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_4_fu_5552_p2() {
    ci_4_fu_5552_p2 = (!ci3_reg_2659.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ci3_reg_2659.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void subconv_1x1_8p_p::thread_ci_cast_cast_fu_3580_p1() {
    ci_cast_cast_fu_3580_p1 = esl_zext<9,7>(ci_reg_2554.read());
}

void subconv_1x1_8p_p::thread_co9_phi_fu_2685_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten3_reg_7950.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co9_phi_fu_2685_p4 = arrayNo_cast3_mid2_v_1_reg_7966.read();
    } else {
        co9_phi_fu_2685_p4 = co9_reg_2681.read();
    }
}

void subconv_1x1_8p_p::thread_co_7_fu_3243_p2() {
    co_7_fu_3243_p2 = (!ap_const_lv7_1.is_01() || !co_phi_fu_2487_p4.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(co_phi_fu_2487_p4.read()));
}

void subconv_1x1_8p_p::thread_co_8_fu_5912_p2() {
    co_8_fu_5912_p2 = (!ap_const_lv7_1.is_01() || !co9_phi_fu_2685_p4.read().is_01())? sc_lv<7>(): (sc_biguint<7>(ap_const_lv7_1) + sc_biguint<7>(co9_phi_fu_2685_p4.read()));
}

void subconv_1x1_8p_p::thread_co_cast_mid2_fu_3337_p1() {
    co_cast_mid2_fu_3337_p1 = esl_zext<32,7>(ap_reg_pp0_iter9_co_cast_mid2_v_reg_6229.read());
}

void subconv_1x1_8p_p::thread_co_cast_mid2_v_fu_3256_p3() {
    co_cast_mid2_v_fu_3256_p3 = (!exitcond_flatten_reg_6216.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_reg_6216.read()[0].to_bool())? co_7_fu_3243_p2.read(): co_phi_fu_2487_p4.read());
}

void subconv_1x1_8p_p::thread_co_phi_fu_2487_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_6207.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co_phi_fu_2487_p4 = co_cast_mid2_v_reg_6229.read();
    } else {
        co_phi_fu_2487_p4 = co_reg_2483.read();
    }
}

void subconv_1x1_8p_p::thread_exitcond10_fu_5397_p2() {
    exitcond10_fu_5397_p2 = (!w10_reg_2647.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w10_reg_2647.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond11_fu_4929_p2() {
    exitcond11_fu_4929_p2 = (!ci2_reg_2624.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci2_reg_2624.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond12_fu_5982_p2() {
    exitcond12_fu_5982_p2 = (!w11_phi_fu_2719_p4.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w11_phi_fu_2719_p4.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond13_fu_5546_p2() {
    exitcond13_fu_5546_p2 = (!ci3_reg_2659.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_2659.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond1_fu_3504_p2() {
    exitcond1_fu_3504_p2 = (!h1_reg_2530.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h1_reg_2530.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond2_fu_5337_p2() {
    exitcond2_fu_5337_p2 = (!h9_reg_2635.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h9_reg_2635.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond3_fu_4109_p2() {
    exitcond3_fu_4109_p2 = (!h4_reg_2565.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h4_reg_2565.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond4_fu_3568_p2() {
    exitcond4_fu_3568_p2 = (!w2_reg_2542.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w2_reg_2542.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond5_fu_4312_p2() {
    exitcond5_fu_4312_p2 = (!ci6_reg_2589.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci6_reg_2589.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond5_mid_fu_3280_p2() {
    exitcond5_mid_fu_3280_p2 = (exitcond_fu_3274_p2.read() & not_exitcond_flatten_fu_3269_p2.read());
}

void subconv_1x1_8p_p::thread_exitcond6_fu_4720_p2() {
    exitcond6_fu_4720_p2 = (!h8_reg_2600.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(h8_reg_2600.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond7_fu_4173_p2() {
    exitcond7_fu_4173_p2 = (!w5_reg_2577.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w5_reg_2577.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond8_fu_3707_p2() {
    exitcond8_fu_3707_p2 = (!ci_reg_2554.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_2554.read() == ap_const_lv7_60);
}

void subconv_1x1_8p_p::thread_exitcond9_fu_4780_p2() {
    exitcond9_fu_4780_p2 = (!w9_reg_2612.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w9_reg_2612.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond_flatten1_fu_3211_p2() {
    exitcond_flatten1_fu_3211_p2 = (!indvar_flatten1_reg_2472.read().is_01() || !ap_const_lv13_1800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten1_reg_2472.read() == ap_const_lv13_1800);
}

void subconv_1x1_8p_p::thread_exitcond_flatten2_fu_5918_p2() {
    exitcond_flatten2_fu_5918_p2 = (!indvar_flatten3_reg_2692.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten3_reg_2692.read() == ap_const_lv8_40);
}

void subconv_1x1_8p_p::thread_exitcond_flatten3_fu_5900_p2() {
    exitcond_flatten3_fu_5900_p2 = (!indvar_flatten2_reg_2670.read().is_01() || !ap_const_lv13_1800.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten2_reg_2670.read() == ap_const_lv13_1800);
}

void subconv_1x1_8p_p::thread_exitcond_flatten_fu_3223_p2() {
    exitcond_flatten_fu_3223_p2 = (!indvar_flatten_reg_2495.read().is_01() || !ap_const_lv8_40.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_2495.read() == ap_const_lv8_40);
}

void subconv_1x1_8p_p::thread_exitcond_fu_3274_p2() {
    exitcond_fu_3274_p2 = (!w_phi_fu_2522_p4.read().is_01() || !ap_const_lv4_9.is_01())? sc_lv<1>(): sc_lv<1>(w_phi_fu_2522_p4.read() == ap_const_lv4_9);
}

void subconv_1x1_8p_p::thread_exitcond_mid_fu_5988_p2() {
    exitcond_mid_fu_5988_p2 = (exitcond12_fu_5982_p2.read() & not_exitcond_flatten_2_fu_5977_p2.read());
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2727_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2727_a_V = reg_3025.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2727_a_V = reg_2817.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2727_a_V = reg_3019.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2727_a_V = reg_2811.read();
    } else {
        grp_MUL_DP_fu_2727_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2727_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2727_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2727_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2727_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2727_b_V = reg_3019.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2727_b_V = reg_2811.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2727_b_V = reg_3025.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2727_b_V = reg_2817.read();
    } else {
        grp_MUL_DP_fu_2727_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2734_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2734_a_V = reg_3037.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2734_a_V = reg_2829.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2734_a_V = reg_3031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2734_a_V = reg_2823.read();
    } else {
        grp_MUL_DP_fu_2734_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2734_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2734_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2734_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2734_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2734_b_V = reg_3031.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2734_b_V = reg_2823.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2734_b_V = reg_3037.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2734_b_V = reg_2829.read();
    } else {
        grp_MUL_DP_fu_2734_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2741_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2741_a_V = reg_3049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2741_a_V = reg_2841.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2741_a_V = reg_3043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2741_a_V = reg_2835.read();
    } else {
        grp_MUL_DP_fu_2741_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2741_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2741_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2741_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2741_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2741_b_V = reg_3043.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2741_b_V = reg_2835.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2741_b_V = reg_3049.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2741_b_V = reg_2841.read();
    } else {
        grp_MUL_DP_fu_2741_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2748_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2748_a_V = reg_3061.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2748_a_V = reg_2853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2748_a_V = reg_3055.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2748_a_V = reg_2847.read();
    } else {
        grp_MUL_DP_fu_2748_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2748_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2748_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2748_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2748_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2748_b_V = reg_3055.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2748_b_V = reg_2847.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2748_b_V = reg_3061.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2748_b_V = reg_2853.read();
    } else {
        grp_MUL_DP_fu_2748_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2755_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2755_a_V = reg_3073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2755_a_V = reg_2865.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2755_a_V = reg_3067.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2755_a_V = reg_2859.read();
    } else {
        grp_MUL_DP_fu_2755_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2755_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2755_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2755_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2755_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2755_b_V = reg_3067.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2755_b_V = reg_2859.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2755_b_V = reg_3073.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2755_b_V = reg_2865.read();
    } else {
        grp_MUL_DP_fu_2755_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2762_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2762_a_V = reg_3085.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2762_a_V = reg_2877.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2762_a_V = reg_3079.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2762_a_V = reg_2871.read();
    } else {
        grp_MUL_DP_fu_2762_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2762_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2762_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2762_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2762_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2762_b_V = reg_3079.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2762_b_V = reg_2871.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2762_b_V = reg_3085.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2762_b_V = reg_2877.read();
    } else {
        grp_MUL_DP_fu_2762_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2769_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2769_a_V = reg_3097.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2769_a_V = reg_2889.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2769_a_V = reg_3091.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2769_a_V = reg_2883.read();
    } else {
        grp_MUL_DP_fu_2769_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2769_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2769_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2769_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2769_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2769_b_V = reg_3091.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2769_b_V = reg_2883.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2769_b_V = reg_3097.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2769_b_V = reg_2889.read();
    } else {
        grp_MUL_DP_fu_2769_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2776_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2776_a_V = reg_3109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2776_a_V = reg_2901.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2776_a_V = reg_3103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2776_a_V = reg_2895.read();
    } else {
        grp_MUL_DP_fu_2776_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2776_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2776_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2776_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2776_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2776_b_V = reg_3103.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2776_b_V = reg_2895.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2776_b_V = reg_3109.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2776_b_V = reg_2901.read();
    } else {
        grp_MUL_DP_fu_2776_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2783_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2783_a_V = reg_3121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2783_a_V = reg_2913.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2783_a_V = reg_3115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2783_a_V = reg_2907.read();
    } else {
        grp_MUL_DP_fu_2783_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2783_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2783_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2783_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2783_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2783_b_V = reg_3115.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2783_b_V = reg_2907.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2783_b_V = reg_3121.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2783_b_V = reg_2913.read();
    } else {
        grp_MUL_DP_fu_2783_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2790_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2790_a_V = reg_3133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2790_a_V = reg_2925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2790_a_V = reg_3127.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2790_a_V = reg_2919.read();
    } else {
        grp_MUL_DP_fu_2790_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2790_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2790_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2790_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2790_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2790_b_V = reg_3127.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2790_b_V = reg_2919.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2790_b_V = reg_3133.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2790_b_V = reg_2925.read();
    } else {
        grp_MUL_DP_fu_2790_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2797_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2797_a_V = reg_3145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2797_a_V = reg_2937.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2797_a_V = reg_3139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2797_a_V = reg_2931.read();
    } else {
        grp_MUL_DP_fu_2797_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2797_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2797_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2797_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2797_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2797_b_V = reg_3139.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2797_b_V = reg_2931.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2797_b_V = reg_3145.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2797_b_V = reg_2937.read();
    } else {
        grp_MUL_DP_fu_2797_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2804_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2804_a_V = reg_3157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2804_a_V = reg_2949.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2804_a_V = reg_3151.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2804_a_V = reg_2943.read();
    } else {
        grp_MUL_DP_fu_2804_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2804_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()))) {
        grp_MUL_DP_fu_2804_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2804_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_grp_MUL_DP_fu_2804_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read())) {
        grp_MUL_DP_fu_2804_b_V = reg_3151.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        grp_MUL_DP_fu_2804_b_V = reg_2943.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        grp_MUL_DP_fu_2804_b_V = reg_3157.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read())) {
        grp_MUL_DP_fu_2804_b_V = reg_2949.read();
    } else {
        grp_MUL_DP_fu_2804_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_grp_fu_3263_p0() {
    grp_fu_3263_p0 = (!exitcond_flatten_reg_6216.read()[0].is_01())? sc_lv<7>(): ((exitcond_flatten_reg_6216.read()[0].to_bool())? co_7_fu_3243_p2.read(): co_phi_fu_2487_p4.read());
}

void subconv_1x1_8p_p::thread_grp_fu_3263_p1() {
    grp_fu_3263_p1 =  (sc_lv<6>) (ap_const_lv7_18);
}

void subconv_1x1_8p_p::thread_grp_fu_5953_p1() {
    grp_fu_5953_p1 =  (sc_lv<6>) (ap_const_lv7_18);
}

void subconv_1x1_8p_p::thread_h11_cast2_mid2_cast_fu_6057_p1() {
    h11_cast2_mid2_cast_fu_6057_p1 = esl_zext<11,4>(h11_cast2_mid2_reg_7990.read());
}

void subconv_1x1_8p_p::thread_h11_cast2_mid2_fu_6013_p3() {
    h11_cast2_mid2_fu_6013_p3 = (!exitcond_mid_fu_5988_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond_mid_fu_5988_p2.read()[0].to_bool())? h_13_fu_5994_p2.read(): h11_mid_fu_5946_p3.read());
}

void subconv_1x1_8p_p::thread_h11_mid_fu_5946_p3() {
    h11_mid_fu_5946_p3 = (!exitcond_flatten2_reg_7959.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten2_reg_7959.read()[0].to_bool())? ap_const_lv4_1: h11_phi_fu_2707_p4.read());
}

void subconv_1x1_8p_p::thread_h11_phi_fu_2707_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten3_reg_7950.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h11_phi_fu_2707_p4 = h11_cast2_mid2_reg_7990.read();
    } else {
        h11_phi_fu_2707_p4 = h11_reg_2703.read();
    }
}

void subconv_1x1_8p_p::thread_h1_cast_cast1_fu_3456_p1() {
    h1_cast_cast1_fu_3456_p1 = esl_zext<7,4>(h1_reg_2530.read());
}

void subconv_1x1_8p_p::thread_h1_cast_cast_fu_3460_p1() {
    h1_cast_cast_fu_3460_p1 = esl_zext<11,4>(h1_reg_2530.read());
}

void subconv_1x1_8p_p::thread_h4_cast_cast1_fu_4061_p1() {
    h4_cast_cast1_fu_4061_p1 = esl_zext<7,4>(h4_reg_2565.read());
}

void subconv_1x1_8p_p::thread_h4_cast_cast_fu_4065_p1() {
    h4_cast_cast_fu_4065_p1 = esl_zext<11,4>(h4_reg_2565.read());
}

void subconv_1x1_8p_p::thread_h8_cast9_cast1_fu_4666_p1() {
    h8_cast9_cast1_fu_4666_p1 = esl_zext<8,4>(h8_reg_2600.read());
}

void subconv_1x1_8p_p::thread_h8_cast9_cast_fu_4670_p1() {
    h8_cast9_cast_fu_4670_p1 = esl_zext<11,4>(h8_reg_2600.read());
}

void subconv_1x1_8p_p::thread_h9_cast6_cast1_fu_5283_p1() {
    h9_cast6_cast1_fu_5283_p1 = esl_zext<8,4>(h9_reg_2635.read());
}

void subconv_1x1_8p_p::thread_h9_cast6_cast_fu_5287_p1() {
    h9_cast6_cast_fu_5287_p1 = esl_zext<11,4>(h9_reg_2635.read());
}

void subconv_1x1_8p_p::thread_h_10_fu_4786_p2() {
    h_10_fu_4786_p2 = (!h8_reg_2600.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h8_reg_2600.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_13_fu_5994_p2() {
    h_13_fu_5994_p2 = (!ap_const_lv4_1.is_01() || !h11_mid_fu_5946_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(h11_mid_fu_5946_p3.read()));
}

void subconv_1x1_8p_p::thread_h_1_fu_5403_p2() {
    h_1_fu_5403_p2 = (!h9_reg_2635.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h9_reg_2635.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_7_fu_3574_p2() {
    h_7_fu_3574_p2 = (!h1_reg_2530.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h1_reg_2530.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_8_fu_3286_p2() {
    h_8_fu_3286_p2 = (!ap_const_lv4_1.is_01() || !h_mid_fu_3249_p3.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_1) + sc_biguint<4>(h_mid_fu_3249_p3.read()));
}

void subconv_1x1_8p_p::thread_h_9_fu_4179_p2() {
    h_9_fu_4179_p2 = (!h4_reg_2565.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h4_reg_2565.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_h_cast_mid2_cast_fu_3377_p1() {
    h_cast_mid2_cast_fu_3377_p1 = esl_zext<11,4>(ap_reg_pp0_iter9_h_cast_mid2_reg_6243.read());
}

void subconv_1x1_8p_p::thread_h_cast_mid2_fu_3305_p3() {
    h_cast_mid2_fu_3305_p3 = (!exitcond5_mid_fu_3280_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond5_mid_fu_3280_p2.read()[0].to_bool())? h_8_fu_3286_p2.read(): h_mid_fu_3249_p3.read());
}

void subconv_1x1_8p_p::thread_h_mid_fu_3249_p3() {
    h_mid_fu_3249_p3 = (!exitcond_flatten_reg_6216.read()[0].is_01())? sc_lv<4>(): ((exitcond_flatten_reg_6216.read()[0].to_bool())? ap_const_lv4_1: h_phi_fu_2510_p4.read());
}

void subconv_1x1_8p_p::thread_h_phi_fu_2510_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_6207.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h_phi_fu_2510_p4 = h_cast_mid2_reg_6243.read();
    } else {
        h_phi_fu_2510_p4 = h_reg_2506.read();
    }
}

void subconv_1x1_8p_p::thread_indvar_flatten21_op_fu_5932_p2() {
    indvar_flatten21_op_fu_5932_p2 = (!indvar_flatten3_reg_2692.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten3_reg_2692.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void subconv_1x1_8p_p::thread_indvar_flatten_next1_fu_3217_p2() {
    indvar_flatten_next1_fu_3217_p2 = (!indvar_flatten1_reg_2472.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(indvar_flatten1_reg_2472.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void subconv_1x1_8p_p::thread_indvar_flatten_next2_fu_5938_p3() {
    indvar_flatten_next2_fu_5938_p3 = (!exitcond_flatten2_fu_5918_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_flatten2_fu_5918_p2.read()[0].to_bool())? ap_const_lv8_1: indvar_flatten21_op_fu_5932_p2.read());
}

void subconv_1x1_8p_p::thread_indvar_flatten_next3_fu_5906_p2() {
    indvar_flatten_next3_fu_5906_p2 = (!indvar_flatten2_reg_2670.read().is_01() || !ap_const_lv13_1.is_01())? sc_lv<13>(): (sc_biguint<13>(indvar_flatten2_reg_2670.read()) + sc_biguint<13>(ap_const_lv13_1));
}

void subconv_1x1_8p_p::thread_indvar_flatten_next_fu_3235_p3() {
    indvar_flatten_next_fu_3235_p3 = (!exitcond_flatten_fu_3223_p2.read()[0].is_01())? sc_lv<8>(): ((exitcond_flatten_fu_3223_p2.read()[0].to_bool())? ap_const_lv8_1: indvar_flatten_op_fu_3229_p2.read());
}

void subconv_1x1_8p_p::thread_indvar_flatten_op_fu_3229_p2() {
    indvar_flatten_op_fu_3229_p2 = (!indvar_flatten_reg_2495.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(indvar_flatten_reg_2495.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void subconv_1x1_8p_p::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        input_V_address0 = input_V_addr_3_reg_7692.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        input_V_address0 = input_V_addr_2_reg_7272.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        input_V_address0 = input_V_addr_1_reg_6853.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        input_V_address0 = input_V_addr_reg_6434.read();
    } else {
        input_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void subconv_1x1_8p_p::thread_input_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_mul1_fu_5961_p1() {
    mul1_fu_5961_p1 =  (sc_lv<7>) (mul1_fu_5961_p10.read());
}

void subconv_1x1_8p_p::thread_mul1_fu_5961_p10() {
    mul1_fu_5961_p10 = esl_zext<16,7>(arrayNo_cast3_mid2_v_1_reg_7966.read());
}

void subconv_1x1_8p_p::thread_mul1_fu_5961_p2() {
    mul1_fu_5961_p2 = (!ap_const_lv16_AB.is_01() || !mul1_fu_5961_p1.read().is_01())? sc_lv<16>(): sc_biguint<16>(ap_const_lv16_AB) * sc_biguint<7>(mul1_fu_5961_p1.read());
}

void subconv_1x1_8p_p::thread_mul_fu_3321_p1() {
    mul_fu_3321_p1 =  (sc_lv<7>) (mul_fu_3321_p10.read());
}

void subconv_1x1_8p_p::thread_mul_fu_3321_p10() {
    mul_fu_3321_p10 = esl_zext<16,7>(ap_reg_pp0_iter8_co_cast_mid2_v_reg_6229.read());
}

void subconv_1x1_8p_p::thread_mul_fu_3321_p2() {
    mul_fu_3321_p2 = (!ap_const_lv16_AB.is_01() || !mul_fu_3321_p1.read().is_01())? sc_lv<16>(): sc_biguint<16>(ap_const_lv16_AB) * sc_biguint<7>(mul_fu_3321_p1.read());
}

void subconv_1x1_8p_p::thread_not_exitcond_flatten_2_fu_5977_p2() {
    not_exitcond_flatten_2_fu_5977_p2 = (exitcond_flatten2_reg_7959.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_not_exitcond_flatten_fu_3269_p2() {
    not_exitcond_flatten_fu_3269_p2 = (exitcond_flatten_reg_6216.read() ^ ap_const_lv1_1);
}

void subconv_1x1_8p_p::thread_p_shl10_cast_fu_4077_p1() {
    p_shl10_cast_fu_4077_p1 = esl_zext<8,7>(tmp_173_fu_4069_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl11_cast_fu_4089_p1() {
    p_shl11_cast_fu_4089_p1 = esl_zext<8,5>(tmp_174_fu_4081_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl12_cast_fu_4232_p1() {
    p_shl12_cast_fu_4232_p1 = esl_zext<15,14>(tmp_132_fu_4224_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl13_cast_fu_4244_p1() {
    p_shl13_cast_fu_4244_p1 = esl_zext<15,12>(tmp_133_fu_4236_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl14_cast_fu_4197_p1() {
    p_shl14_cast_fu_4197_p1 = esl_zext<11,10>(tmp_202_fu_4189_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl15_cast_fu_4209_p1() {
    p_shl15_cast_fu_4209_p1 = esl_zext<11,8>(tmp_203_fu_4201_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl16_cast_fu_4682_p1() {
    p_shl16_cast_fu_4682_p1 = esl_zext<8,7>(tmp_179_fu_4674_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl17_cast_fu_4694_p1() {
    p_shl17_cast_fu_4694_p1 = esl_zext<8,5>(tmp_180_fu_4686_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl18_cast_fu_4843_p1() {
    p_shl18_cast_fu_4843_p1 = esl_zext<15,14>(tmp_158_fu_4835_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl19_cast_fu_4855_p1() {
    p_shl19_cast_fu_4855_p1 = esl_zext<15,12>(tmp_159_fu_4847_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl1_cast_fu_3402_p3() {
    p_shl1_cast_fu_3402_p3 = esl_concat<9,1>(tmp_105_fu_3398_p1.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_p_shl20_cast_fu_4808_p1() {
    p_shl20_cast_fu_4808_p1 = esl_zext<11,10>(tmp_213_fu_4800_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl21_cast_fu_4820_p1() {
    p_shl21_cast_fu_4820_p1 = esl_zext<11,8>(tmp_214_fu_4812_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl22_cast_fu_5299_p1() {
    p_shl22_cast_fu_5299_p1 = esl_zext<8,7>(tmp_195_fu_5291_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl23_cast_fu_5311_p1() {
    p_shl23_cast_fu_5311_p1 = esl_zext<8,5>(tmp_196_fu_5303_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl24_cast_fu_5460_p1() {
    p_shl24_cast_fu_5460_p1 = esl_zext<15,14>(tmp_262_fu_5452_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl25_cast_fu_5472_p1() {
    p_shl25_cast_fu_5472_p1 = esl_zext<15,12>(tmp_263_fu_5464_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl26_cast_fu_5425_p1() {
    p_shl26_cast_fu_5425_p1 = esl_zext<11,10>(tmp_258_fu_5417_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl27_cast_fu_5437_p1() {
    p_shl27_cast_fu_5437_p1 = esl_zext<11,8>(tmp_259_fu_5429_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl28_cast_fu_6070_p3() {
    p_shl28_cast_fu_6070_p3 = esl_concat<7,3>(tmp_229_fu_6066_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_p_shl29_cast_fu_6082_p3() {
    p_shl29_cast_fu_6082_p3 = esl_concat<9,1>(tmp_230_fu_6078_p1.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_p_shl2_cast_fu_3352_p1() {
    p_shl2_cast_fu_3352_p1 = esl_zext<11,10>(tmp_s_fu_3348_p1.read());
}

void subconv_1x1_8p_p::thread_p_shl30_cast_fu_6032_p1() {
    p_shl30_cast_fu_6032_p1 = esl_zext<11,10>(tmp_223_fu_6028_p1.read());
}

void subconv_1x1_8p_p::thread_p_shl31_cast_fu_6047_p1() {
    p_shl31_cast_fu_6047_p1 = esl_zext<11,8>(tmp_225_fu_6043_p1.read());
}

void subconv_1x1_8p_p::thread_p_shl3_cast_fu_3367_p1() {
    p_shl3_cast_fu_3367_p1 = esl_zext<11,8>(tmp_163_fu_3363_p1.read());
}

void subconv_1x1_8p_p::thread_p_shl4_cast_fu_3472_p1() {
    p_shl4_cast_fu_3472_p1 = esl_zext<8,7>(tmp_169_fu_3464_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl5_cast_fu_3484_p1() {
    p_shl5_cast_fu_3484_p1 = esl_zext<8,5>(tmp_170_fu_3476_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl6_cast_fu_3627_p1() {
    p_shl6_cast_fu_3627_p1 = esl_zext<15,14>(tmp_106_fu_3619_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl7_cast_fu_3639_p1() {
    p_shl7_cast_fu_3639_p1 = esl_zext<15,12>(tmp_107_fu_3631_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl8_cast_fu_3592_p1() {
    p_shl8_cast_fu_3592_p1 = esl_zext<11,10>(tmp_186_fu_3584_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl9_cast_fu_3604_p1() {
    p_shl9_cast_fu_3604_p1 = esl_zext<11,8>(tmp_187_fu_3596_p3.read());
}

void subconv_1x1_8p_p::thread_p_shl_cast_fu_3390_p3() {
    p_shl_cast_fu_3390_p3 = esl_concat<7,3>(tmp_104_fu_3386_p1.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_100_fu_3425_p1() {
    tmp_100_fu_3425_p1 = grp_fu_3263_p2.read().range(6-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_102_fu_3341_p3() {
    tmp_102_fu_3341_p3 = esl_concat<4,3>(tmp_101_reg_6254.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_103_fu_3356_p3() {
    tmp_103_fu_3356_p3 = esl_concat<4,1>(tmp_101_reg_6254.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_104_fu_3386_p1() {
    tmp_104_fu_3386_p1 = tmp_166_fu_3380_p2.read().range(7-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_105_fu_3398_p1() {
    tmp_105_fu_3398_p1 = tmp_166_fu_3380_p2.read().range(9-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_106_fu_3619_p3() {
    tmp_106_fu_3619_p3 = esl_concat<11,3>(tmp_189_fu_3614_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_107_fu_3631_p3() {
    tmp_107_fu_3631_p3 = esl_concat<11,1>(tmp_189_fu_3614_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_108_fu_3729_p1() {
    tmp_108_fu_3729_p1 = grp_MUL_DP_fu_2727_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_109_fu_3908_p1() {
    tmp_109_fu_3908_p1 = MUL_DP_ret1_reg_6572_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_110_fu_3744_p1() {
    tmp_110_fu_3744_p1 = grp_MUL_DP_fu_2734_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_111_fu_3921_p1() {
    tmp_111_fu_3921_p1 = MUL_DP_ret2_reg_6577_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_112_fu_3759_p1() {
    tmp_112_fu_3759_p1 = grp_MUL_DP_fu_2741_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_113_fu_3934_p1() {
    tmp_113_fu_3934_p1 = MUL_DP_ret3_reg_6582_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_114_fu_3774_p1() {
    tmp_114_fu_3774_p1 = grp_MUL_DP_fu_2748_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_115_fu_3947_p1() {
    tmp_115_fu_3947_p1 = MUL_DP_ret4_reg_6587_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_116_fu_3789_p1() {
    tmp_116_fu_3789_p1 = grp_MUL_DP_fu_2755_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_117_fu_3960_p1() {
    tmp_117_fu_3960_p1 = MUL_DP_ret5_reg_6592_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_118_fu_3804_p1() {
    tmp_118_fu_3804_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_119_fu_3973_p1() {
    tmp_119_fu_3973_p1 = MUL_DP_ret6_reg_6597_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_11_fu_4955_p2() {
    tmp_11_fu_4955_p2 = (!reg_2971.read().is_01() || !tmp_234_fu_4951_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2971.read()) + sc_biguint<8>(tmp_234_fu_4951_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_120_fu_3819_p1() {
    tmp_120_fu_3819_p1 = grp_MUL_DP_fu_2769_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_121_fu_3986_p1() {
    tmp_121_fu_3986_p1 = MUL_DP_ret7_reg_6602_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_122_fu_3834_p1() {
    tmp_122_fu_3834_p1 = grp_MUL_DP_fu_2776_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_123_fu_3999_p1() {
    tmp_123_fu_3999_p1 = MUL_DP_ret8_reg_6607_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_124_fu_3849_p1() {
    tmp_124_fu_3849_p1 = grp_MUL_DP_fu_2783_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_125_fu_4012_p1() {
    tmp_125_fu_4012_p1 = MUL_DP_ret9_reg_6612_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_126_fu_3864_p1() {
    tmp_126_fu_3864_p1 = grp_MUL_DP_fu_2790_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_127_fu_4025_p1() {
    tmp_127_fu_4025_p1 = MUL_DP_ret10_reg_6617_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_128_fu_3879_p1() {
    tmp_128_fu_3879_p1 = grp_MUL_DP_fu_2797_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_129_fu_4038_p1() {
    tmp_129_fu_4038_p1 = MUL_DP_ret11_reg_6622_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_130_fu_3894_p1() {
    tmp_130_fu_3894_p1 = grp_MUL_DP_fu_2804_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_131_fu_4051_p1() {
    tmp_131_fu_4051_p1 = MUL_DP_ret12_reg_6627_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_132_fu_4224_p3() {
    tmp_132_fu_4224_p3 = esl_concat<11,3>(tmp_205_fu_4219_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_133_fu_4236_p3() {
    tmp_133_fu_4236_p3 = esl_concat<11,1>(tmp_205_fu_4219_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_134_fu_4334_p1() {
    tmp_134_fu_4334_p1 = grp_MUL_DP_fu_2727_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_135_fu_4513_p1() {
    tmp_135_fu_4513_p1 = MUL_DP_ret13_reg_6991_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_136_fu_4349_p1() {
    tmp_136_fu_4349_p1 = grp_MUL_DP_fu_2734_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_137_fu_4526_p1() {
    tmp_137_fu_4526_p1 = MUL_DP_ret14_reg_6996_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_138_fu_4364_p1() {
    tmp_138_fu_4364_p1 = grp_MUL_DP_fu_2741_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_139_fu_4539_p1() {
    tmp_139_fu_4539_p1 = MUL_DP_ret15_reg_7001_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_140_fu_4379_p1() {
    tmp_140_fu_4379_p1 = grp_MUL_DP_fu_2748_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_141_fu_4552_p1() {
    tmp_141_fu_4552_p1 = MUL_DP_ret16_reg_7006_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_142_fu_4394_p1() {
    tmp_142_fu_4394_p1 = grp_MUL_DP_fu_2755_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_143_fu_4565_p1() {
    tmp_143_fu_4565_p1 = MUL_DP_ret17_reg_7011_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_144_fu_4409_p1() {
    tmp_144_fu_4409_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_145_fu_4578_p1() {
    tmp_145_fu_4578_p1 = MUL_DP_ret18_reg_7016_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_146_fu_4424_p1() {
    tmp_146_fu_4424_p1 = grp_MUL_DP_fu_2769_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_147_fu_4591_p1() {
    tmp_147_fu_4591_p1 = MUL_DP_ret19_reg_7021_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_148_fu_4439_p1() {
    tmp_148_fu_4439_p1 = grp_MUL_DP_fu_2776_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_149_fu_4604_p1() {
    tmp_149_fu_4604_p1 = MUL_DP_ret20_reg_7026_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_14_fu_5134_p2() {
    tmp_14_fu_5134_p2 = (!ShuffleConvs_2_Downs_23_q0.read().is_01() || !tmp_235_fu_5130_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_23_q0.read()) + sc_biguint<8>(tmp_235_fu_5130_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_150_fu_4454_p1() {
    tmp_150_fu_4454_p1 = grp_MUL_DP_fu_2783_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_151_fu_4617_p1() {
    tmp_151_fu_4617_p1 = MUL_DP_ret21_reg_7031_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_152_fu_4469_p1() {
    tmp_152_fu_4469_p1 = grp_MUL_DP_fu_2790_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_153_fu_4630_p1() {
    tmp_153_fu_4630_p1 = MUL_DP_ret22_reg_7036_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_154_fu_4484_p1() {
    tmp_154_fu_4484_p1 = grp_MUL_DP_fu_2797_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_155_fu_4643_p1() {
    tmp_155_fu_4643_p1 = MUL_DP_ret23_reg_7041_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_156_fu_4499_p1() {
    tmp_156_fu_4499_p1 = grp_MUL_DP_fu_2804_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_157_fu_4656_p1() {
    tmp_157_fu_4656_p1 = MUL_DP_ret24_reg_7046_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_158_fu_4835_p3() {
    tmp_158_fu_4835_p3 = esl_concat<11,3>(tmp_216_fu_4830_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_159_fu_4847_p3() {
    tmp_159_fu_4847_p3 = esl_concat<11,1>(tmp_216_fu_4830_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_160_fu_6141_p1() {
    tmp_160_fu_6141_p1 = grp_fu_5953_p2.read().range(6-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_162_fu_6021_p3() {
    tmp_162_fu_6021_p3 = esl_concat<4,3>(tmp_161_reg_7978.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_163_fu_3363_p1() {
    tmp_163_fu_3363_p1 = esl_sext<8,5>(tmp_103_fu_3356_p3.read());
}

void subconv_1x1_8p_p::thread_tmp_164_fu_3371_p2() {
    tmp_164_fu_3371_p2 = (!p_shl2_cast_fu_3352_p1.read().is_01() || !p_shl3_cast_fu_3367_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_3352_p1.read()) + sc_biguint<11>(p_shl3_cast_fu_3367_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_165_fu_3292_p2() {
    tmp_165_fu_3292_p2 = (exitcond5_mid_fu_3280_p2.read() | exitcond_flatten_reg_6216.read());
}

void subconv_1x1_8p_p::thread_tmp_166_fu_3380_p2() {
    tmp_166_fu_3380_p2 = (!h_cast_mid2_cast_fu_3377_p1.read().is_01() || !tmp_164_fu_3371_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_cast_mid2_cast_fu_3377_p1.read()) + sc_biguint<11>(tmp_164_fu_3371_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_167_fu_3410_p2() {
    tmp_167_fu_3410_p2 = (!p_shl_cast_fu_3390_p3.read().is_01() || !p_shl1_cast_fu_3402_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl_cast_fu_3390_p3.read()) + sc_biguint<10>(p_shl1_cast_fu_3402_p3.read()));
}

void subconv_1x1_8p_p::thread_tmp_168_fu_3419_p2() {
    tmp_168_fu_3419_p2 = (!w_cast_cast_fu_3416_p1.read().is_01() || !tmp_167_fu_3410_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w_cast_cast_fu_3416_p1.read()) + sc_biguint<10>(tmp_167_fu_3410_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_169_fu_3464_p3() {
    tmp_169_fu_3464_p3 = esl_concat<4,3>(h1_reg_2530.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_16_fu_5572_p2() {
    tmp_16_fu_5572_p2 = (!reg_3163.read().is_01() || !tmp_270_fu_5568_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3163.read()) + sc_biguint<8>(tmp_270_fu_5568_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_170_fu_3476_p3() {
    tmp_170_fu_3476_p3 = esl_concat<4,1>(h1_reg_2530.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_171_fu_3488_p2() {
    tmp_171_fu_3488_p2 = (!p_shl5_cast_fu_3484_p1.read().is_01() || !p_shl4_cast_fu_3472_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl5_cast_fu_3484_p1.read()) + sc_biguint<8>(p_shl4_cast_fu_3472_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_172_fu_3498_p2() {
    tmp_172_fu_3498_p2 = (!tmp_220_cast_fu_3494_p1.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_220_cast_fu_3494_p1.read()) + sc_biguint<9>(ap_const_lv9_C8));
}

void subconv_1x1_8p_p::thread_tmp_173_fu_4069_p3() {
    tmp_173_fu_4069_p3 = esl_concat<4,3>(h4_reg_2565.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_174_fu_4081_p3() {
    tmp_174_fu_4081_p3 = esl_concat<4,1>(h4_reg_2565.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_175_fu_4093_p2() {
    tmp_175_fu_4093_p2 = (!p_shl11_cast_fu_4089_p1.read().is_01() || !p_shl10_cast_fu_4077_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl11_cast_fu_4089_p1.read()) + sc_biguint<8>(p_shl10_cast_fu_4077_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_176_fu_4103_p2() {
    tmp_176_fu_4103_p2 = (!tmp_224_cast_fu_4099_p1.read().is_01() || !ap_const_lv9_C8.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_224_cast_fu_4099_p1.read()) + sc_biguint<9>(ap_const_lv9_C8));
}

void subconv_1x1_8p_p::thread_tmp_177_fu_3526_p2() {
    tmp_177_fu_3526_p2 = (!tmp_171_reg_6283.read().is_01() || !w2_cast_cast_fu_3522_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_171_reg_6283.read()) + sc_biguint<8>(w2_cast_cast_fu_3522_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_178_fu_3547_p2() {
    tmp_178_fu_3547_p2 = (!tmp_172_reg_6288.read().is_01() || !w2_cast_cast3_fu_3518_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_172_reg_6288.read()) + sc_biguint<9>(w2_cast_cast3_fu_3518_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_179_fu_4674_p3() {
    tmp_179_fu_4674_p3 = esl_concat<4,3>(h8_reg_2600.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_180_fu_4686_p3() {
    tmp_180_fu_4686_p3 = esl_concat<4,1>(h8_reg_2600.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_181_fu_4698_p2() {
    tmp_181_fu_4698_p2 = (!p_shl17_cast_fu_4694_p1.read().is_01() || !p_shl16_cast_fu_4682_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl17_cast_fu_4694_p1.read()) + sc_biguint<8>(p_shl16_cast_fu_4682_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_182_fu_4708_p2() {
    tmp_182_fu_4708_p2 = (!tmp_230_cast_fu_4704_p1.read().is_01() || !ap_const_lv9_64.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_230_cast_fu_4704_p1.read()) + sc_biguint<9>(ap_const_lv9_64));
}

void subconv_1x1_8p_p::thread_tmp_183_fu_4714_p2() {
    tmp_183_fu_4714_p2 = (!tmp_230_cast_fu_4704_p1.read().is_01() || !ap_const_lv9_12C.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_230_cast_fu_4704_p1.read()) + sc_bigint<9>(ap_const_lv9_12C));
}

void subconv_1x1_8p_p::thread_tmp_184_fu_4131_p2() {
    tmp_184_fu_4131_p2 = (!tmp_175_reg_6702.read().is_01() || !w5_cast_cast_fu_4127_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_175_reg_6702.read()) + sc_biguint<8>(w5_cast_cast_fu_4127_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_185_fu_4152_p2() {
    tmp_185_fu_4152_p2 = (!tmp_176_reg_6707.read().is_01() || !w5_cast_cast3_fu_4123_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_176_reg_6707.read()) + sc_biguint<9>(w5_cast_cast3_fu_4123_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_186_fu_3584_p3() {
    tmp_186_fu_3584_p3 = esl_concat<7,3>(ci_reg_2554.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_187_fu_3596_p3() {
    tmp_187_fu_3596_p3 = esl_concat<7,1>(ci_reg_2554.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_188_fu_3608_p2() {
    tmp_188_fu_3608_p2 = (!p_shl8_cast_fu_3592_p1.read().is_01() || !p_shl9_cast_fu_3604_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl8_cast_fu_3592_p1.read()) + sc_biguint<11>(p_shl9_cast_fu_3604_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_189_fu_3614_p2() {
    tmp_189_fu_3614_p2 = (!h1_cast_cast_reg_6278.read().is_01() || !tmp_188_fu_3608_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h1_cast_cast_reg_6278.read()) + sc_biguint<11>(tmp_188_fu_3608_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_18_fu_5751_p2() {
    tmp_18_fu_5751_p2 = (!ShuffleConvs_2_Downs_19_q0.read().is_01() || !tmp_271_fu_5747_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_19_q0.read()) + sc_biguint<8>(tmp_271_fu_5747_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_190_fu_3643_p2() {
    tmp_190_fu_3643_p2 = (!p_shl6_cast_fu_3627_p1.read().is_01() || !p_shl7_cast_fu_3639_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl6_cast_fu_3627_p1.read()) + sc_biguint<15>(p_shl7_cast_fu_3639_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_191_fu_3649_p2() {
    tmp_191_fu_3649_p2 = (!w2_cast_cast2_reg_6301.read().is_01() || !tmp_190_fu_3643_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w2_cast_cast2_reg_6301.read()) + sc_biguint<15>(tmp_190_fu_3643_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_192_fu_3659_p2() {
    tmp_192_fu_3659_p2 = (!h1_cast_cast1_reg_6273.read().is_01() || !ci_reg_2554.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h1_cast_cast1_reg_6273.read()) + sc_biguint<7>(ci_reg_2554.read()));
}

void subconv_1x1_8p_p::thread_tmp_193_fu_3664_p2() {
    tmp_193_fu_3664_p2 = (!w2_cast_cast1_reg_6296.read().is_01() || !tmp_192_fu_3659_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w2_cast_cast1_reg_6296.read()) + sc_biguint<7>(tmp_192_fu_3659_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_194_fu_3685_p2() {
    tmp_194_fu_3685_p2 = (!ci_cast_cast_fu_3580_p1.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<9>(): (sc_biguint<9>(ci_cast_cast_fu_3580_p1.read()) + sc_biguint<9>(ap_const_lv9_C0));
}

void subconv_1x1_8p_p::thread_tmp_195_fu_5291_p3() {
    tmp_195_fu_5291_p3 = esl_concat<4,3>(h9_reg_2635.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_196_fu_5303_p3() {
    tmp_196_fu_5303_p3 = esl_concat<4,1>(h9_reg_2635.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_197_fu_5315_p2() {
    tmp_197_fu_5315_p2 = (!p_shl23_cast_fu_5311_p1.read().is_01() || !p_shl22_cast_fu_5299_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(p_shl23_cast_fu_5311_p1.read()) + sc_biguint<8>(p_shl22_cast_fu_5299_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_198_fu_5325_p2() {
    tmp_198_fu_5325_p2 = (!tmp_248_cast_fu_5321_p1.read().is_01() || !ap_const_lv9_64.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_248_cast_fu_5321_p1.read()) + sc_biguint<9>(ap_const_lv9_64));
}

void subconv_1x1_8p_p::thread_tmp_199_fu_5331_p2() {
    tmp_199_fu_5331_p2 = (!tmp_248_cast_fu_5321_p1.read().is_01() || !ap_const_lv9_12C.is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_248_cast_fu_5321_p1.read()) + sc_bigint<9>(ap_const_lv9_12C));
}

void subconv_1x1_8p_p::thread_tmp_200_fu_4738_p2() {
    tmp_200_fu_4738_p2 = (!tmp_182_reg_7121.read().is_01() || !w9_cast8_cast_fu_4734_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_182_reg_7121.read()) + sc_biguint<9>(w9_cast8_cast_fu_4734_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_201_fu_4759_p2() {
    tmp_201_fu_4759_p2 = (!tmp_183_reg_7126.read().is_01() || !w9_cast8_cast_fu_4734_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_183_reg_7126.read()) + sc_biguint<9>(w9_cast8_cast_fu_4734_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_202_fu_4189_p3() {
    tmp_202_fu_4189_p3 = esl_concat<7,3>(ci6_reg_2589.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_203_fu_4201_p3() {
    tmp_203_fu_4201_p3 = esl_concat<7,1>(ci6_reg_2589.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_204_fu_4213_p2() {
    tmp_204_fu_4213_p2 = (!p_shl14_cast_fu_4197_p1.read().is_01() || !p_shl15_cast_fu_4209_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl14_cast_fu_4197_p1.read()) + sc_biguint<11>(p_shl15_cast_fu_4209_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_205_fu_4219_p2() {
    tmp_205_fu_4219_p2 = (!h4_cast_cast_reg_6697.read().is_01() || !tmp_204_fu_4213_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h4_cast_cast_reg_6697.read()) + sc_biguint<11>(tmp_204_fu_4213_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_206_fu_4248_p2() {
    tmp_206_fu_4248_p2 = (!p_shl12_cast_fu_4232_p1.read().is_01() || !p_shl13_cast_fu_4244_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl12_cast_fu_4232_p1.read()) + sc_biguint<15>(p_shl13_cast_fu_4244_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_207_fu_4254_p2() {
    tmp_207_fu_4254_p2 = (!w5_cast_cast2_reg_6720.read().is_01() || !tmp_206_fu_4248_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w5_cast_cast2_reg_6720.read()) + sc_biguint<15>(tmp_206_fu_4248_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_208_fu_4264_p2() {
    tmp_208_fu_4264_p2 = (!h4_cast_cast1_reg_6692.read().is_01() || !ci6_reg_2589.read().is_01())? sc_lv<7>(): (sc_biguint<7>(h4_cast_cast1_reg_6692.read()) + sc_biguint<7>(ci6_reg_2589.read()));
}

void subconv_1x1_8p_p::thread_tmp_209_fu_4269_p2() {
    tmp_209_fu_4269_p2 = (!w5_cast_cast1_reg_6715.read().is_01() || !tmp_208_fu_4264_p2.read().is_01())? sc_lv<7>(): (sc_biguint<7>(w5_cast_cast1_reg_6715.read()) + sc_biguint<7>(tmp_208_fu_4264_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_10_fu_3898_p2() {
    tmp_20_10_fu_3898_p2 = (!reg_3015.read().is_01() || !tmp_130_fu_3894_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3015.read()) + sc_biguint<8>(tmp_130_fu_3894_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_1_fu_3748_p2() {
    tmp_20_1_fu_3748_p2 = (!reg_2975.read().is_01() || !tmp_110_fu_3744_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2975.read()) + sc_biguint<8>(tmp_110_fu_3744_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_2_fu_3763_p2() {
    tmp_20_2_fu_3763_p2 = (!reg_2979.read().is_01() || !tmp_112_fu_3759_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2979.read()) + sc_biguint<8>(tmp_112_fu_3759_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_3_fu_3778_p2() {
    tmp_20_3_fu_3778_p2 = (!reg_2983.read().is_01() || !tmp_114_fu_3774_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2983.read()) + sc_biguint<8>(tmp_114_fu_3774_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_4_fu_3793_p2() {
    tmp_20_4_fu_3793_p2 = (!reg_2987.read().is_01() || !tmp_116_fu_3789_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2987.read()) + sc_biguint<8>(tmp_116_fu_3789_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_5_fu_3808_p2() {
    tmp_20_5_fu_3808_p2 = (!reg_2991.read().is_01() || !tmp_118_fu_3804_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2991.read()) + sc_biguint<8>(tmp_118_fu_3804_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_6_fu_3823_p2() {
    tmp_20_6_fu_3823_p2 = (!reg_2995.read().is_01() || !tmp_120_fu_3819_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2995.read()) + sc_biguint<8>(tmp_120_fu_3819_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_7_fu_3838_p2() {
    tmp_20_7_fu_3838_p2 = (!reg_2999.read().is_01() || !tmp_122_fu_3834_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2999.read()) + sc_biguint<8>(tmp_122_fu_3834_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_8_fu_3853_p2() {
    tmp_20_8_fu_3853_p2 = (!reg_3003.read().is_01() || !tmp_124_fu_3849_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3003.read()) + sc_biguint<8>(tmp_124_fu_3849_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_9_fu_3868_p2() {
    tmp_20_9_fu_3868_p2 = (!reg_3007.read().is_01() || !tmp_126_fu_3864_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3007.read()) + sc_biguint<8>(tmp_126_fu_3864_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_20_s_fu_3883_p2() {
    tmp_20_s_fu_3883_p2 = (!reg_3011.read().is_01() || !tmp_128_fu_3879_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3011.read()) + sc_biguint<8>(tmp_128_fu_3879_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_210_fu_4290_p2() {
    tmp_210_fu_4290_p2 = (!ci6_cast_cast_fu_4185_p1.read().is_01() || !ap_const_lv9_C0.is_01())? sc_lv<9>(): (sc_biguint<9>(ci6_cast_cast_fu_4185_p1.read()) + sc_biguint<9>(ap_const_lv9_C0));
}

void subconv_1x1_8p_p::thread_tmp_211_fu_5355_p2() {
    tmp_211_fu_5355_p2 = (!tmp_198_reg_7540.read().is_01() || !w10_cast5_cast_fu_5351_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_198_reg_7540.read()) + sc_biguint<9>(w10_cast5_cast_fu_5351_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_212_fu_5376_p2() {
    tmp_212_fu_5376_p2 = (!tmp_199_reg_7545.read().is_01() || !w10_cast5_cast_fu_5351_p1.read().is_01())? sc_lv<9>(): (sc_biguint<9>(tmp_199_reg_7545.read()) + sc_biguint<9>(w10_cast5_cast_fu_5351_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_213_fu_4800_p3() {
    tmp_213_fu_4800_p3 = esl_concat<7,3>(ci2_reg_2624.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_214_fu_4812_p3() {
    tmp_214_fu_4812_p3 = esl_concat<7,1>(ci2_reg_2624.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_215_fu_4824_p2() {
    tmp_215_fu_4824_p2 = (!p_shl20_cast_fu_4808_p1.read().is_01() || !p_shl21_cast_fu_4820_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl20_cast_fu_4808_p1.read()) + sc_biguint<11>(p_shl21_cast_fu_4820_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_216_fu_4830_p2() {
    tmp_216_fu_4830_p2 = (!h8_cast9_cast_reg_7116.read().is_01() || !tmp_215_fu_4824_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h8_cast9_cast_reg_7116.read()) + sc_biguint<11>(tmp_215_fu_4824_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_217_cast_fu_3429_p1() {
    tmp_217_cast_fu_3429_p1 = esl_zext<32,10>(tmp_168_reg_6260.read());
}

void subconv_1x1_8p_p::thread_tmp_217_fu_4859_p2() {
    tmp_217_fu_4859_p2 = (!p_shl18_cast_fu_4843_p1.read().is_01() || !p_shl19_cast_fu_4855_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl18_cast_fu_4843_p1.read()) + sc_biguint<15>(p_shl19_cast_fu_4855_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_218_fu_4865_p2() {
    tmp_218_fu_4865_p2 = (!w9_cast8_cast2_reg_7139.read().is_01() || !tmp_217_fu_4859_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w9_cast8_cast2_reg_7139.read()) + sc_biguint<15>(tmp_217_fu_4859_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_219_fu_4875_p2() {
    tmp_219_fu_4875_p2 = (!ci2_cast7_cast_fu_4796_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(ci2_cast7_cast_fu_4796_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void subconv_1x1_8p_p::thread_tmp_220_cast_fu_3494_p1() {
    tmp_220_cast_fu_3494_p1 = esl_zext<9,8>(tmp_171_fu_3488_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_220_fu_4881_p2() {
    tmp_220_fu_4881_p2 = (!h8_cast9_cast1_reg_7111.read().is_01() || !tmp_219_fu_4875_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(h8_cast9_cast1_reg_7111.read()) + sc_biguint<8>(tmp_219_fu_4875_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_221_fu_4886_p2() {
    tmp_221_fu_4886_p2 = (!w9_cast8_cast1_reg_7134.read().is_01() || !tmp_220_fu_4881_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w9_cast8_cast1_reg_7134.read()) + sc_biguint<8>(tmp_220_fu_4881_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_222_fu_4907_p2() {
    tmp_222_fu_4907_p2 = (!ci2_cast7_cast1_fu_4792_p1.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_biguint<9>(ci2_cast7_cast1_fu_4792_p1.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void subconv_1x1_8p_p::thread_tmp_223_fu_6028_p1() {
    tmp_223_fu_6028_p1 = esl_sext<10,7>(tmp_162_fu_6021_p3.read());
}

void subconv_1x1_8p_p::thread_tmp_224_cast_fu_4099_p1() {
    tmp_224_cast_fu_4099_p1 = esl_zext<9,8>(tmp_175_fu_4093_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_224_fu_6036_p3() {
    tmp_224_fu_6036_p3 = esl_concat<4,1>(tmp_161_reg_7978.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_225_fu_6043_p1() {
    tmp_225_fu_6043_p1 = esl_sext<8,5>(tmp_224_fu_6036_p3.read());
}

void subconv_1x1_8p_p::thread_tmp_226_cast_fu_3531_p1() {
    tmp_226_cast_fu_3531_p1 = esl_zext<32,8>(tmp_177_fu_3526_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_226_fu_6051_p2() {
    tmp_226_fu_6051_p2 = (!p_shl30_cast_fu_6032_p1.read().is_01() || !p_shl31_cast_fu_6047_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl30_cast_fu_6032_p1.read()) + sc_biguint<11>(p_shl31_cast_fu_6047_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_227_cast_fu_3552_p1() {
    tmp_227_cast_fu_3552_p1 = esl_zext<32,9>(tmp_178_fu_3547_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_227_fu_6000_p2() {
    tmp_227_fu_6000_p2 = (exitcond_mid_fu_5988_p2.read() | exitcond_flatten2_reg_7959.read());
}

void subconv_1x1_8p_p::thread_tmp_228_fu_6060_p2() {
    tmp_228_fu_6060_p2 = (!h11_cast2_mid2_cast_fu_6057_p1.read().is_01() || !tmp_226_fu_6051_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h11_cast2_mid2_cast_fu_6057_p1.read()) + sc_biguint<11>(tmp_226_fu_6051_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_229_fu_6066_p1() {
    tmp_229_fu_6066_p1 = tmp_228_fu_6060_p2.read().range(7-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_22_10_fu_4055_p2() {
    tmp_22_10_fu_4055_p2 = (!ShuffleConvs_2_Downs_20_q0.read().is_01() || !tmp_131_fu_4051_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_20_q0.read()) + sc_biguint<8>(tmp_131_fu_4051_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_1_fu_3925_p2() {
    tmp_22_1_fu_3925_p2 = (!ShuffleConvs_2_Downs_22_q0.read().is_01() || !tmp_111_fu_3921_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_22_q0.read()) + sc_biguint<8>(tmp_111_fu_3921_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_2_fu_3938_p2() {
    tmp_22_2_fu_3938_p2 = (!ShuffleConvs_2_Downs_11_q0.read().is_01() || !tmp_113_fu_3934_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_11_q0.read()) + sc_biguint<8>(tmp_113_fu_3934_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_3_fu_3951_p2() {
    tmp_22_3_fu_3951_p2 = (!ShuffleConvs_2_Downs_6_q0.read().is_01() || !tmp_115_fu_3947_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_6_q0.read()) + sc_biguint<8>(tmp_115_fu_3947_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_4_fu_3964_p2() {
    tmp_22_4_fu_3964_p2 = (!ShuffleConvs_2_Downs_5_q0.read().is_01() || !tmp_117_fu_3960_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_5_q0.read()) + sc_biguint<8>(tmp_117_fu_3960_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_5_fu_3977_p2() {
    tmp_22_5_fu_3977_p2 = (!ShuffleConvs_2_Downs_4_q0.read().is_01() || !tmp_119_fu_3973_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_4_q0.read()) + sc_biguint<8>(tmp_119_fu_3973_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_6_fu_3990_p2() {
    tmp_22_6_fu_3990_p2 = (!ShuffleConvs_2_Downs_3_q0.read().is_01() || !tmp_121_fu_3986_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_3_q0.read()) + sc_biguint<8>(tmp_121_fu_3986_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_7_fu_4003_p2() {
    tmp_22_7_fu_4003_p2 = (!ShuffleConvs_2_Downs_2_q0.read().is_01() || !tmp_123_fu_3999_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_2_q0.read()) + sc_biguint<8>(tmp_123_fu_3999_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_8_fu_4016_p2() {
    tmp_22_8_fu_4016_p2 = (!ShuffleConvs_2_Downs_1_q0.read().is_01() || !tmp_125_fu_4012_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_1_q0.read()) + sc_biguint<8>(tmp_125_fu_4012_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_9_fu_4029_p2() {
    tmp_22_9_fu_4029_p2 = (!ShuffleConvs_2_Downs_q0.read().is_01() || !tmp_127_fu_4025_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_q0.read()) + sc_biguint<8>(tmp_127_fu_4025_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_22_s_fu_4042_p2() {
    tmp_22_s_fu_4042_p2 = (!ShuffleConvs_2_Downs_21_q0.read().is_01() || !tmp_129_fu_4038_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_21_q0.read()) + sc_biguint<8>(tmp_129_fu_4038_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_230_cast_fu_4704_p1() {
    tmp_230_cast_fu_4704_p1 = esl_zext<9,8>(tmp_181_fu_4698_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_230_fu_6078_p1() {
    tmp_230_fu_6078_p1 = tmp_228_fu_6060_p2.read().range(9-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_231_fu_6090_p2() {
    tmp_231_fu_6090_p2 = (!p_shl28_cast_fu_6070_p3.read().is_01() || !p_shl29_cast_fu_6082_p3.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl28_cast_fu_6070_p3.read()) + sc_biguint<10>(p_shl29_cast_fu_6082_p3.read()));
}

void subconv_1x1_8p_p::thread_tmp_232_fu_6099_p2() {
    tmp_232_fu_6099_p2 = (!w12_cast1_cast_fu_6096_p1.read().is_01() || !tmp_231_fu_6090_p2.read().is_01())? sc_lv<10>(): (sc_biguint<10>(w12_cast1_cast_fu_6096_p1.read()) + sc_biguint<10>(tmp_231_fu_6090_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_233_cast_fu_4136_p1() {
    tmp_233_cast_fu_4136_p1 = esl_zext<32,8>(tmp_184_fu_4131_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_233_fu_6199_p3() {
    tmp_233_fu_6199_p3 = tmp_2_fu_6145_p26.read().range(7, 7);
}

void subconv_1x1_8p_p::thread_tmp_234_cast_fu_4157_p1() {
    tmp_234_cast_fu_4157_p1 = esl_zext<32,9>(tmp_185_fu_4152_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_234_fu_4951_p1() {
    tmp_234_fu_4951_p1 = grp_MUL_DP_fu_2727_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_235_fu_5130_p1() {
    tmp_235_fu_5130_p1 = MUL_DP_ret25_reg_7410_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_236_fu_4966_p1() {
    tmp_236_fu_4966_p1 = grp_MUL_DP_fu_2734_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_237_fu_5143_p1() {
    tmp_237_fu_5143_p1 = MUL_DP_ret26_reg_7415_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_238_fu_4981_p1() {
    tmp_238_fu_4981_p1 = grp_MUL_DP_fu_2741_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_239_fu_5156_p1() {
    tmp_239_fu_5156_p1 = MUL_DP_ret27_reg_7420_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_240_fu_4996_p1() {
    tmp_240_fu_4996_p1 = grp_MUL_DP_fu_2748_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_241_fu_5169_p1() {
    tmp_241_fu_5169_p1 = MUL_DP_ret28_reg_7425_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_242_cast_fu_3654_p1() {
    tmp_242_cast_fu_3654_p1 = esl_zext<32,15>(tmp_191_fu_3649_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_242_fu_5011_p1() {
    tmp_242_fu_5011_p1 = grp_MUL_DP_fu_2755_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_243_fu_5182_p1() {
    tmp_243_fu_5182_p1 = MUL_DP_ret29_reg_7430_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_244_cast_fu_3669_p1() {
    tmp_244_cast_fu_3669_p1 = esl_zext<32,7>(tmp_193_fu_3664_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_244_fu_5026_p1() {
    tmp_244_fu_5026_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_245_cast_fu_3691_p1() {
    tmp_245_cast_fu_3691_p1 = esl_zext<32,9>(tmp_194_fu_3685_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_245_fu_5195_p1() {
    tmp_245_fu_5195_p1 = MUL_DP_ret30_reg_7435_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_246_fu_5041_p1() {
    tmp_246_fu_5041_p1 = grp_MUL_DP_fu_2769_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_247_fu_5208_p1() {
    tmp_247_fu_5208_p1 = MUL_DP_ret31_reg_7440_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_248_cast_fu_5321_p1() {
    tmp_248_cast_fu_5321_p1 = esl_zext<9,8>(tmp_197_fu_5315_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_248_fu_5056_p1() {
    tmp_248_fu_5056_p1 = grp_MUL_DP_fu_2776_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_249_fu_5221_p1() {
    tmp_249_fu_5221_p1 = MUL_DP_ret32_reg_7445_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_250_fu_5071_p1() {
    tmp_250_fu_5071_p1 = grp_MUL_DP_fu_2783_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_251_cast_fu_4743_p1() {
    tmp_251_cast_fu_4743_p1 = esl_zext<32,9>(tmp_200_fu_4738_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_251_fu_5234_p1() {
    tmp_251_fu_5234_p1 = MUL_DP_ret33_reg_7450_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_252_cast_fu_4764_p1() {
    tmp_252_cast_fu_4764_p1 = esl_zext<32,9>(tmp_201_fu_4759_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_252_fu_5086_p1() {
    tmp_252_fu_5086_p1 = grp_MUL_DP_fu_2790_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_253_fu_5247_p1() {
    tmp_253_fu_5247_p1 = MUL_DP_ret34_reg_7455_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_254_fu_5101_p1() {
    tmp_254_fu_5101_p1 = grp_MUL_DP_fu_2797_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_255_fu_5260_p1() {
    tmp_255_fu_5260_p1 = MUL_DP_ret35_reg_7460_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_256_fu_5116_p1() {
    tmp_256_fu_5116_p1 = grp_MUL_DP_fu_2804_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_257_fu_5273_p1() {
    tmp_257_fu_5273_p1 = MUL_DP_ret36_reg_7465_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_258_fu_5417_p3() {
    tmp_258_fu_5417_p3 = esl_concat<7,3>(ci3_reg_2659.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_259_fu_5429_p3() {
    tmp_259_fu_5429_p3 = esl_concat<7,1>(ci3_reg_2659.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_25_10_fu_4503_p2() {
    tmp_25_10_fu_4503_p2 = (!reg_3207.read().is_01() || !tmp_156_fu_4499_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3207.read()) + sc_biguint<8>(tmp_156_fu_4499_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_1_fu_4353_p2() {
    tmp_25_1_fu_4353_p2 = (!reg_3167.read().is_01() || !tmp_136_fu_4349_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3167.read()) + sc_biguint<8>(tmp_136_fu_4349_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_2_fu_4368_p2() {
    tmp_25_2_fu_4368_p2 = (!reg_3171.read().is_01() || !tmp_138_fu_4364_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3171.read()) + sc_biguint<8>(tmp_138_fu_4364_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_3_fu_4383_p2() {
    tmp_25_3_fu_4383_p2 = (!reg_3175.read().is_01() || !tmp_140_fu_4379_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3175.read()) + sc_biguint<8>(tmp_140_fu_4379_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_4_fu_4398_p2() {
    tmp_25_4_fu_4398_p2 = (!reg_3179.read().is_01() || !tmp_142_fu_4394_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3179.read()) + sc_biguint<8>(tmp_142_fu_4394_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_5_fu_4413_p2() {
    tmp_25_5_fu_4413_p2 = (!reg_3183.read().is_01() || !tmp_144_fu_4409_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3183.read()) + sc_biguint<8>(tmp_144_fu_4409_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_6_fu_4428_p2() {
    tmp_25_6_fu_4428_p2 = (!reg_3187.read().is_01() || !tmp_146_fu_4424_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3187.read()) + sc_biguint<8>(tmp_146_fu_4424_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_7_fu_4443_p2() {
    tmp_25_7_fu_4443_p2 = (!reg_3191.read().is_01() || !tmp_148_fu_4439_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3191.read()) + sc_biguint<8>(tmp_148_fu_4439_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_8_fu_4458_p2() {
    tmp_25_8_fu_4458_p2 = (!reg_3195.read().is_01() || !tmp_150_fu_4454_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3195.read()) + sc_biguint<8>(tmp_150_fu_4454_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_9_fu_4473_p2() {
    tmp_25_9_fu_4473_p2 = (!reg_3199.read().is_01() || !tmp_152_fu_4469_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3199.read()) + sc_biguint<8>(tmp_152_fu_4469_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_25_s_fu_4488_p2() {
    tmp_25_s_fu_4488_p2 = (!reg_3203.read().is_01() || !tmp_154_fu_4484_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3203.read()) + sc_biguint<8>(tmp_154_fu_4484_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_260_cast_fu_4259_p1() {
    tmp_260_cast_fu_4259_p1 = esl_zext<32,15>(tmp_207_fu_4254_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_260_fu_5441_p2() {
    tmp_260_fu_5441_p2 = (!p_shl26_cast_fu_5425_p1.read().is_01() || !p_shl27_cast_fu_5437_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl26_cast_fu_5425_p1.read()) + sc_biguint<11>(p_shl27_cast_fu_5437_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_261_fu_5447_p2() {
    tmp_261_fu_5447_p2 = (!h9_cast6_cast_reg_7535.read().is_01() || !tmp_260_fu_5441_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h9_cast6_cast_reg_7535.read()) + sc_biguint<11>(tmp_260_fu_5441_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_262_cast_fu_4274_p1() {
    tmp_262_cast_fu_4274_p1 = esl_zext<32,7>(tmp_209_fu_4269_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_262_fu_5452_p3() {
    tmp_262_fu_5452_p3 = esl_concat<11,3>(tmp_261_fu_5447_p2.read(), ap_const_lv3_0);
}

void subconv_1x1_8p_p::thread_tmp_263_cast_fu_4296_p1() {
    tmp_263_cast_fu_4296_p1 = esl_zext<32,9>(tmp_210_fu_4290_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_263_fu_5464_p3() {
    tmp_263_fu_5464_p3 = esl_concat<11,1>(tmp_261_fu_5447_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_8p_p::thread_tmp_264_cast_fu_5360_p1() {
    tmp_264_cast_fu_5360_p1 = esl_zext<32,9>(tmp_211_fu_5355_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_264_fu_5476_p2() {
    tmp_264_fu_5476_p2 = (!p_shl24_cast_fu_5460_p1.read().is_01() || !p_shl25_cast_fu_5472_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl24_cast_fu_5460_p1.read()) + sc_biguint<15>(p_shl25_cast_fu_5472_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_265_cast_fu_5381_p1() {
    tmp_265_cast_fu_5381_p1 = esl_zext<32,9>(tmp_212_fu_5376_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_265_fu_5482_p2() {
    tmp_265_fu_5482_p2 = (!w10_cast5_cast2_reg_7559.read().is_01() || !tmp_264_fu_5476_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w10_cast5_cast2_reg_7559.read()) + sc_biguint<15>(tmp_264_fu_5476_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_266_fu_5492_p2() {
    tmp_266_fu_5492_p2 = (!ci3_cast4_cast_fu_5413_p1.read().is_01() || !ap_const_lv8_60.is_01())? sc_lv<8>(): (sc_biguint<8>(ci3_cast4_cast_fu_5413_p1.read()) + sc_biguint<8>(ap_const_lv8_60));
}

void subconv_1x1_8p_p::thread_tmp_267_fu_5498_p2() {
    tmp_267_fu_5498_p2 = (!h9_cast6_cast1_reg_7530.read().is_01() || !tmp_266_fu_5492_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(h9_cast6_cast1_reg_7530.read()) + sc_biguint<8>(tmp_266_fu_5492_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_268_fu_5503_p2() {
    tmp_268_fu_5503_p2 = (!w10_cast5_cast1_reg_7554.read().is_01() || !tmp_267_fu_5498_p2.read().is_01())? sc_lv<8>(): (sc_biguint<8>(w10_cast5_cast1_reg_7554.read()) + sc_biguint<8>(tmp_267_fu_5498_p2.read()));
}

void subconv_1x1_8p_p::thread_tmp_269_fu_5524_p2() {
    tmp_269_fu_5524_p2 = (!ci3_cast4_cast1_fu_5409_p1.read().is_01() || !ap_const_lv9_120.is_01())? sc_lv<9>(): (sc_biguint<9>(ci3_cast4_cast1_fu_5409_p1.read()) + sc_bigint<9>(ap_const_lv9_120));
}

void subconv_1x1_8p_p::thread_tmp_270_fu_5568_p1() {
    tmp_270_fu_5568_p1 = grp_MUL_DP_fu_2727_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_271_fu_5747_p1() {
    tmp_271_fu_5747_p1 = MUL_DP_ret37_reg_7830_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_272_fu_5583_p1() {
    tmp_272_fu_5583_p1 = grp_MUL_DP_fu_2734_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_273_cast_fu_4870_p1() {
    tmp_273_cast_fu_4870_p1 = esl_zext<32,15>(tmp_218_fu_4865_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_273_fu_5760_p1() {
    tmp_273_fu_5760_p1 = MUL_DP_ret38_reg_7835_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_274_fu_5598_p1() {
    tmp_274_fu_5598_p1 = grp_MUL_DP_fu_2741_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_275_fu_5773_p1() {
    tmp_275_fu_5773_p1 = MUL_DP_ret39_reg_7840_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_276_cast_fu_4891_p1() {
    tmp_276_cast_fu_4891_p1 = esl_zext<32,8>(tmp_221_fu_4886_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_276_fu_5613_p1() {
    tmp_276_fu_5613_p1 = grp_MUL_DP_fu_2748_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_277_cast_fu_4913_p1() {
    tmp_277_cast_fu_4913_p1 = esl_zext<32,9>(tmp_222_fu_4907_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_277_fu_5786_p1() {
    tmp_277_fu_5786_p1 = MUL_DP_ret40_reg_7845_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_278_fu_5628_p1() {
    tmp_278_fu_5628_p1 = grp_MUL_DP_fu_2755_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_279_fu_5799_p1() {
    tmp_279_fu_5799_p1 = MUL_DP_ret41_reg_7850_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_27_10_fu_4660_p2() {
    tmp_27_10_fu_4660_p2 = (!ShuffleConvs_2_Downs_7_q0.read().is_01() || !tmp_157_fu_4656_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_7_q0.read()) + sc_biguint<8>(tmp_157_fu_4656_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_1_fu_4530_p2() {
    tmp_27_1_fu_4530_p2 = (!ShuffleConvs_2_Downs_18_q0.read().is_01() || !tmp_137_fu_4526_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_18_q0.read()) + sc_biguint<8>(tmp_137_fu_4526_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_2_fu_4543_p2() {
    tmp_27_2_fu_4543_p2 = (!ShuffleConvs_2_Downs_17_q0.read().is_01() || !tmp_139_fu_4539_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_17_q0.read()) + sc_biguint<8>(tmp_139_fu_4539_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_3_fu_4556_p2() {
    tmp_27_3_fu_4556_p2 = (!ShuffleConvs_2_Downs_16_q0.read().is_01() || !tmp_141_fu_4552_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_16_q0.read()) + sc_biguint<8>(tmp_141_fu_4552_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_4_fu_4569_p2() {
    tmp_27_4_fu_4569_p2 = (!ShuffleConvs_2_Downs_15_q0.read().is_01() || !tmp_143_fu_4565_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_15_q0.read()) + sc_biguint<8>(tmp_143_fu_4565_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_5_fu_4582_p2() {
    tmp_27_5_fu_4582_p2 = (!ShuffleConvs_2_Downs_14_q0.read().is_01() || !tmp_145_fu_4578_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_14_q0.read()) + sc_biguint<8>(tmp_145_fu_4578_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_6_fu_4595_p2() {
    tmp_27_6_fu_4595_p2 = (!ShuffleConvs_2_Downs_13_q0.read().is_01() || !tmp_147_fu_4591_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_13_q0.read()) + sc_biguint<8>(tmp_147_fu_4591_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_7_fu_4608_p2() {
    tmp_27_7_fu_4608_p2 = (!ShuffleConvs_2_Downs_12_q0.read().is_01() || !tmp_149_fu_4604_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_12_q0.read()) + sc_biguint<8>(tmp_149_fu_4604_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_8_fu_4621_p2() {
    tmp_27_8_fu_4621_p2 = (!ShuffleConvs_2_Downs_10_q0.read().is_01() || !tmp_151_fu_4617_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_10_q0.read()) + sc_biguint<8>(tmp_151_fu_4617_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_9_fu_4634_p2() {
    tmp_27_9_fu_4634_p2 = (!ShuffleConvs_2_Downs_9_q0.read().is_01() || !tmp_153_fu_4630_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_9_q0.read()) + sc_biguint<8>(tmp_153_fu_4630_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_27_s_fu_4647_p2() {
    tmp_27_s_fu_4647_p2 = (!ShuffleConvs_2_Downs_8_q0.read().is_01() || !tmp_155_fu_4643_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_8_q0.read()) + sc_biguint<8>(tmp_155_fu_4643_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_280_fu_5643_p1() {
    tmp_280_fu_5643_p1 = grp_MUL_DP_fu_2762_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_281_fu_5812_p1() {
    tmp_281_fu_5812_p1 = MUL_DP_ret42_reg_7855_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_282_fu_5658_p1() {
    tmp_282_fu_5658_p1 = grp_MUL_DP_fu_2769_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_283_fu_5825_p1() {
    tmp_283_fu_5825_p1 = MUL_DP_ret43_reg_7860_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_284_fu_5673_p1() {
    tmp_284_fu_5673_p1 = grp_MUL_DP_fu_2776_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_285_fu_5838_p1() {
    tmp_285_fu_5838_p1 = MUL_DP_ret44_reg_7865_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_286_fu_5688_p1() {
    tmp_286_fu_5688_p1 = grp_MUL_DP_fu_2783_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_287_fu_5851_p1() {
    tmp_287_fu_5851_p1 = MUL_DP_ret45_reg_7870_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_288_cast_fu_6110_p1() {
    tmp_288_cast_fu_6110_p1 = esl_zext<32,10>(ap_reg_pp1_iter9_tmp_232_reg_7996.read());
}

void subconv_1x1_8p_p::thread_tmp_288_fu_5703_p1() {
    tmp_288_fu_5703_p1 = grp_MUL_DP_fu_2790_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_289_fu_5864_p1() {
    tmp_289_fu_5864_p1 = MUL_DP_ret46_reg_7875_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_290_fu_5718_p1() {
    tmp_290_fu_5718_p1 = grp_MUL_DP_fu_2797_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_291_fu_5877_p1() {
    tmp_291_fu_5877_p1 = MUL_DP_ret47_reg_7880_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_292_fu_5733_p1() {
    tmp_292_fu_5733_p1 = grp_MUL_DP_fu_2804_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_293_fu_5890_p1() {
    tmp_293_fu_5890_p1 = MUL_DP_ret_reg_7885_1.read().range(8-1, 0);
}

void subconv_1x1_8p_p::thread_tmp_296_cast_fu_5487_p1() {
    tmp_296_cast_fu_5487_p1 = esl_zext<32,15>(tmp_265_fu_5482_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_299_cast_fu_5508_p1() {
    tmp_299_cast_fu_5508_p1 = esl_zext<32,8>(tmp_268_fu_5503_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_2_fu_6145_p25() {
    tmp_2_fu_6145_p25 = esl_zext<32,7>(grp_fu_5953_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_300_cast_fu_5530_p1() {
    tmp_300_cast_fu_5530_p1 = esl_zext<32,9>(tmp_269_fu_5524_p2.read());
}

void subconv_1x1_8p_p::thread_tmp_30_10_fu_5120_p2() {
    tmp_30_10_fu_5120_p2 = (!reg_3015.read().is_01() || !tmp_256_fu_5116_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3015.read()) + sc_biguint<8>(tmp_256_fu_5116_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_1_fu_4970_p2() {
    tmp_30_1_fu_4970_p2 = (!reg_2975.read().is_01() || !tmp_236_fu_4966_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2975.read()) + sc_biguint<8>(tmp_236_fu_4966_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_2_fu_4985_p2() {
    tmp_30_2_fu_4985_p2 = (!reg_2979.read().is_01() || !tmp_238_fu_4981_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2979.read()) + sc_biguint<8>(tmp_238_fu_4981_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_3_fu_5000_p2() {
    tmp_30_3_fu_5000_p2 = (!reg_2983.read().is_01() || !tmp_240_fu_4996_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2983.read()) + sc_biguint<8>(tmp_240_fu_4996_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_4_fu_5015_p2() {
    tmp_30_4_fu_5015_p2 = (!reg_2987.read().is_01() || !tmp_242_fu_5011_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2987.read()) + sc_biguint<8>(tmp_242_fu_5011_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_5_fu_5030_p2() {
    tmp_30_5_fu_5030_p2 = (!reg_2991.read().is_01() || !tmp_244_fu_5026_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2991.read()) + sc_biguint<8>(tmp_244_fu_5026_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_6_fu_5045_p2() {
    tmp_30_6_fu_5045_p2 = (!reg_2995.read().is_01() || !tmp_246_fu_5041_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2995.read()) + sc_biguint<8>(tmp_246_fu_5041_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_7_fu_5060_p2() {
    tmp_30_7_fu_5060_p2 = (!reg_2999.read().is_01() || !tmp_248_fu_5056_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2999.read()) + sc_biguint<8>(tmp_248_fu_5056_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_8_fu_5075_p2() {
    tmp_30_8_fu_5075_p2 = (!reg_3003.read().is_01() || !tmp_250_fu_5071_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3003.read()) + sc_biguint<8>(tmp_250_fu_5071_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_9_fu_5090_p2() {
    tmp_30_9_fu_5090_p2 = (!reg_3007.read().is_01() || !tmp_252_fu_5086_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3007.read()) + sc_biguint<8>(tmp_252_fu_5086_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_30_s_fu_5105_p2() {
    tmp_30_s_fu_5105_p2 = (!reg_3011.read().is_01() || !tmp_254_fu_5101_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3011.read()) + sc_biguint<8>(tmp_254_fu_5101_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_10_fu_5277_p2() {
    tmp_32_10_fu_5277_p2 = (!ShuffleConvs_2_Downs_20_q0.read().is_01() || !tmp_257_fu_5273_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_20_q0.read()) + sc_biguint<8>(tmp_257_fu_5273_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_1_fu_5147_p2() {
    tmp_32_1_fu_5147_p2 = (!ShuffleConvs_2_Downs_22_q0.read().is_01() || !tmp_237_fu_5143_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_22_q0.read()) + sc_biguint<8>(tmp_237_fu_5143_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_2_fu_5160_p2() {
    tmp_32_2_fu_5160_p2 = (!ShuffleConvs_2_Downs_11_q0.read().is_01() || !tmp_239_fu_5156_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_11_q0.read()) + sc_biguint<8>(tmp_239_fu_5156_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_3_fu_5173_p2() {
    tmp_32_3_fu_5173_p2 = (!ShuffleConvs_2_Downs_6_q0.read().is_01() || !tmp_241_fu_5169_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_6_q0.read()) + sc_biguint<8>(tmp_241_fu_5169_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_4_fu_5186_p2() {
    tmp_32_4_fu_5186_p2 = (!ShuffleConvs_2_Downs_5_q0.read().is_01() || !tmp_243_fu_5182_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_5_q0.read()) + sc_biguint<8>(tmp_243_fu_5182_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_5_fu_5199_p2() {
    tmp_32_5_fu_5199_p2 = (!ShuffleConvs_2_Downs_4_q0.read().is_01() || !tmp_245_fu_5195_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_4_q0.read()) + sc_biguint<8>(tmp_245_fu_5195_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_6_fu_5212_p2() {
    tmp_32_6_fu_5212_p2 = (!ShuffleConvs_2_Downs_3_q0.read().is_01() || !tmp_247_fu_5208_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_3_q0.read()) + sc_biguint<8>(tmp_247_fu_5208_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_7_fu_5225_p2() {
    tmp_32_7_fu_5225_p2 = (!ShuffleConvs_2_Downs_2_q0.read().is_01() || !tmp_249_fu_5221_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_2_q0.read()) + sc_biguint<8>(tmp_249_fu_5221_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_8_fu_5238_p2() {
    tmp_32_8_fu_5238_p2 = (!ShuffleConvs_2_Downs_1_q0.read().is_01() || !tmp_251_fu_5234_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_1_q0.read()) + sc_biguint<8>(tmp_251_fu_5234_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_9_fu_5251_p2() {
    tmp_32_9_fu_5251_p2 = (!ShuffleConvs_2_Downs_q0.read().is_01() || !tmp_253_fu_5247_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_q0.read()) + sc_biguint<8>(tmp_253_fu_5247_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_32_s_fu_5264_p2() {
    tmp_32_s_fu_5264_p2 = (!ShuffleConvs_2_Downs_21_q0.read().is_01() || !tmp_255_fu_5260_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_21_q0.read()) + sc_biguint<8>(tmp_255_fu_5260_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_10_fu_5737_p2() {
    tmp_36_10_fu_5737_p2 = (!reg_3207.read().is_01() || !tmp_292_fu_5733_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3207.read()) + sc_biguint<8>(tmp_292_fu_5733_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_1_fu_5587_p2() {
    tmp_36_1_fu_5587_p2 = (!reg_3167.read().is_01() || !tmp_272_fu_5583_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3167.read()) + sc_biguint<8>(tmp_272_fu_5583_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_2_fu_5602_p2() {
    tmp_36_2_fu_5602_p2 = (!reg_3171.read().is_01() || !tmp_274_fu_5598_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3171.read()) + sc_biguint<8>(tmp_274_fu_5598_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_3_fu_5617_p2() {
    tmp_36_3_fu_5617_p2 = (!reg_3175.read().is_01() || !tmp_276_fu_5613_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3175.read()) + sc_biguint<8>(tmp_276_fu_5613_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_4_fu_5632_p2() {
    tmp_36_4_fu_5632_p2 = (!reg_3179.read().is_01() || !tmp_278_fu_5628_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3179.read()) + sc_biguint<8>(tmp_278_fu_5628_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_5_fu_5647_p2() {
    tmp_36_5_fu_5647_p2 = (!reg_3183.read().is_01() || !tmp_280_fu_5643_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3183.read()) + sc_biguint<8>(tmp_280_fu_5643_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_6_fu_5662_p2() {
    tmp_36_6_fu_5662_p2 = (!reg_3187.read().is_01() || !tmp_282_fu_5658_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3187.read()) + sc_biguint<8>(tmp_282_fu_5658_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_7_fu_5677_p2() {
    tmp_36_7_fu_5677_p2 = (!reg_3191.read().is_01() || !tmp_284_fu_5673_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3191.read()) + sc_biguint<8>(tmp_284_fu_5673_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_8_fu_5692_p2() {
    tmp_36_8_fu_5692_p2 = (!reg_3195.read().is_01() || !tmp_286_fu_5688_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3195.read()) + sc_biguint<8>(tmp_286_fu_5688_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_9_fu_5707_p2() {
    tmp_36_9_fu_5707_p2 = (!reg_3199.read().is_01() || !tmp_288_fu_5703_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3199.read()) + sc_biguint<8>(tmp_288_fu_5703_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_36_s_fu_5722_p2() {
    tmp_36_s_fu_5722_p2 = (!reg_3203.read().is_01() || !tmp_290_fu_5718_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3203.read()) + sc_biguint<8>(tmp_290_fu_5718_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_10_fu_5894_p2() {
    tmp_38_10_fu_5894_p2 = (!ShuffleConvs_2_Downs_7_q0.read().is_01() || !tmp_293_fu_5890_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_7_q0.read()) + sc_biguint<8>(tmp_293_fu_5890_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_1_fu_5764_p2() {
    tmp_38_1_fu_5764_p2 = (!ShuffleConvs_2_Downs_18_q0.read().is_01() || !tmp_273_fu_5760_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_18_q0.read()) + sc_biguint<8>(tmp_273_fu_5760_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_2_fu_5777_p2() {
    tmp_38_2_fu_5777_p2 = (!ShuffleConvs_2_Downs_17_q0.read().is_01() || !tmp_275_fu_5773_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_17_q0.read()) + sc_biguint<8>(tmp_275_fu_5773_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_3_fu_5790_p2() {
    tmp_38_3_fu_5790_p2 = (!ShuffleConvs_2_Downs_16_q0.read().is_01() || !tmp_277_fu_5786_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_16_q0.read()) + sc_biguint<8>(tmp_277_fu_5786_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_4_fu_5803_p2() {
    tmp_38_4_fu_5803_p2 = (!ShuffleConvs_2_Downs_15_q0.read().is_01() || !tmp_279_fu_5799_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_15_q0.read()) + sc_biguint<8>(tmp_279_fu_5799_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_5_fu_5816_p2() {
    tmp_38_5_fu_5816_p2 = (!ShuffleConvs_2_Downs_14_q0.read().is_01() || !tmp_281_fu_5812_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_14_q0.read()) + sc_biguint<8>(tmp_281_fu_5812_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_6_fu_5829_p2() {
    tmp_38_6_fu_5829_p2 = (!ShuffleConvs_2_Downs_13_q0.read().is_01() || !tmp_283_fu_5825_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_13_q0.read()) + sc_biguint<8>(tmp_283_fu_5825_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_7_fu_5842_p2() {
    tmp_38_7_fu_5842_p2 = (!ShuffleConvs_2_Downs_12_q0.read().is_01() || !tmp_285_fu_5838_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_12_q0.read()) + sc_biguint<8>(tmp_285_fu_5838_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_8_fu_5855_p2() {
    tmp_38_8_fu_5855_p2 = (!ShuffleConvs_2_Downs_10_q0.read().is_01() || !tmp_287_fu_5851_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_10_q0.read()) + sc_biguint<8>(tmp_287_fu_5851_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_9_fu_5868_p2() {
    tmp_38_9_fu_5868_p2 = (!ShuffleConvs_2_Downs_9_q0.read().is_01() || !tmp_289_fu_5864_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_9_q0.read()) + sc_biguint<8>(tmp_289_fu_5864_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_38_s_fu_5881_p2() {
    tmp_38_s_fu_5881_p2 = (!ShuffleConvs_2_Downs_8_q0.read().is_01() || !tmp_291_fu_5877_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_8_q0.read()) + sc_biguint<8>(tmp_291_fu_5877_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_3_fu_3733_p2() {
    tmp_3_fu_3733_p2 = (!reg_2971.read().is_01() || !tmp_108_fu_3729_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_2971.read()) + sc_biguint<8>(tmp_108_fu_3729_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_5_fu_3912_p2() {
    tmp_5_fu_3912_p2 = (!ShuffleConvs_2_Downs_23_q0.read().is_01() || !tmp_109_fu_3908_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_23_q0.read()) + sc_biguint<8>(tmp_109_fu_3908_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_7_fu_4338_p2() {
    tmp_7_fu_4338_p2 = (!reg_3163.read().is_01() || !tmp_134_fu_4334_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(reg_3163.read()) + sc_biguint<8>(tmp_134_fu_4334_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_9_fu_4517_p2() {
    tmp_9_fu_4517_p2 = (!ShuffleConvs_2_Downs_19_q0.read().is_01() || !tmp_135_fu_4513_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_2_Downs_19_q0.read()) + sc_biguint<8>(tmp_135_fu_4513_p1.read()));
}

void subconv_1x1_8p_p::thread_tmp_s_fu_3348_p1() {
    tmp_s_fu_3348_p1 = esl_sext<10,7>(tmp_102_fu_3341_p3.read());
}

void subconv_1x1_8p_p::thread_w10_cast5_cast1_fu_5343_p1() {
    w10_cast5_cast1_fu_5343_p1 = esl_zext<8,4>(w10_reg_2647.read());
}

void subconv_1x1_8p_p::thread_w10_cast5_cast2_fu_5347_p1() {
    w10_cast5_cast2_fu_5347_p1 = esl_zext<15,4>(w10_reg_2647.read());
}

void subconv_1x1_8p_p::thread_w10_cast5_cast_fu_5351_p1() {
    w10_cast5_cast_fu_5351_p1 = esl_zext<9,4>(w10_reg_2647.read());
}

void subconv_1x1_8p_p::thread_w11_phi_fu_2719_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten3_reg_7950.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w11_phi_fu_2719_p4 = w_14_fu_6105_p2.read();
    } else {
        w11_phi_fu_2719_p4 = w11_reg_2715.read();
    }
}

void subconv_1x1_8p_p::thread_w12_cast1_cast_fu_6096_p1() {
    w12_cast1_cast_fu_6096_p1 = esl_zext<10,4>(w12_mid2_reg_7984.read());
}

void subconv_1x1_8p_p::thread_w12_mid2_fu_6005_p3() {
    w12_mid2_fu_6005_p3 = (!tmp_227_fu_6000_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_227_fu_6000_p2.read()[0].to_bool())? ap_const_lv4_1: w11_phi_fu_2719_p4.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast1_fu_3510_p1() {
    w2_cast_cast1_fu_3510_p1 = esl_zext<7,4>(w2_reg_2542.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast2_fu_3514_p1() {
    w2_cast_cast2_fu_3514_p1 = esl_zext<15,4>(w2_reg_2542.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast3_fu_3518_p1() {
    w2_cast_cast3_fu_3518_p1 = esl_zext<9,4>(w2_reg_2542.read());
}

void subconv_1x1_8p_p::thread_w2_cast_cast_fu_3522_p1() {
    w2_cast_cast_fu_3522_p1 = esl_zext<8,4>(w2_reg_2542.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast1_fu_4115_p1() {
    w5_cast_cast1_fu_4115_p1 = esl_zext<7,4>(w5_reg_2577.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast2_fu_4119_p1() {
    w5_cast_cast2_fu_4119_p1 = esl_zext<15,4>(w5_reg_2577.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast3_fu_4123_p1() {
    w5_cast_cast3_fu_4123_p1 = esl_zext<9,4>(w5_reg_2577.read());
}

void subconv_1x1_8p_p::thread_w5_cast_cast_fu_4127_p1() {
    w5_cast_cast_fu_4127_p1 = esl_zext<8,4>(w5_reg_2577.read());
}

void subconv_1x1_8p_p::thread_w9_cast8_cast1_fu_4726_p1() {
    w9_cast8_cast1_fu_4726_p1 = esl_zext<8,4>(w9_reg_2612.read());
}

void subconv_1x1_8p_p::thread_w9_cast8_cast2_fu_4730_p1() {
    w9_cast8_cast2_fu_4730_p1 = esl_zext<15,4>(w9_reg_2612.read());
}

void subconv_1x1_8p_p::thread_w9_cast8_cast_fu_4734_p1() {
    w9_cast8_cast_fu_4734_p1 = esl_zext<9,4>(w9_reg_2612.read());
}

void subconv_1x1_8p_p::thread_w_12_fu_4941_p2() {
    w_12_fu_4941_p2 = (!w9_reg_2612.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w9_reg_2612.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_13_fu_5558_p2() {
    w_13_fu_5558_p2 = (!w10_reg_2647.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w10_reg_2647.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_14_fu_6105_p2() {
    w_14_fu_6105_p2 = (!w12_mid2_reg_7984.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w12_mid2_reg_7984.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_7_fu_3313_p2() {
    w_7_fu_3313_p2 = (!w_mid2_reg_6237.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w_mid2_reg_6237.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_8_fu_3719_p2() {
    w_8_fu_3719_p2 = (!w2_reg_2542.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w2_reg_2542.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_9_fu_4324_p2() {
    w_9_fu_4324_p2 = (!w5_reg_2577.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(w5_reg_2577.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void subconv_1x1_8p_p::thread_w_cast_cast_fu_3416_p1() {
    w_cast_cast_fu_3416_p1 = esl_zext<10,4>(ap_reg_pp0_iter9_w_mid2_reg_6237.read());
}

void subconv_1x1_8p_p::thread_w_mid2_fu_3297_p3() {
    w_mid2_fu_3297_p3 = (!tmp_165_fu_3292_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_165_fu_3292_p2.read()[0].to_bool())? ap_const_lv4_1: w_phi_fu_2522_p4.read());
}

void subconv_1x1_8p_p::thread_w_phi_fu_2522_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten1_reg_6207.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_2522_p4 = w_7_fu_3313_p2.read();
    } else {
        w_phi_fu_2522_p4 = w_reg_2518.read();
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_0_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_0_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_0_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_0_V_address1 = weight_0_V_addr_2_reg_7277.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_0_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_0_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_0_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_10_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_10_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_10_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_10_V_address1 = weight_10_V_addr_2_reg_7377.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_10_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_10_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_10_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_10_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_11_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_11_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_11_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_11_V_address1 = weight_11_V_addr_2_reg_7387.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_11_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_11_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_11_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_11_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_12_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_12_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_12_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_12_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_12_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_12_V_address1 = weight_12_V_addr_2_reg_7697.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_12_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_12_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_12_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_12_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_12_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_13_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_13_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_13_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_13_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_13_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_13_V_address1 = weight_13_V_addr_2_reg_7707.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_13_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_13_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_13_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_13_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_13_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_14_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_14_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_14_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_14_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_14_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_14_V_address1 = weight_14_V_addr_2_reg_7717.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_14_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_14_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_14_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_14_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_14_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_15_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_15_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_15_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_15_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_15_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_15_V_address1 = weight_15_V_addr_2_reg_7727.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_15_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_15_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_15_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_15_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_15_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_16_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_16_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_16_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_16_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_16_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_16_V_address1 = weight_16_V_addr_2_reg_7737.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_16_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_16_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_16_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_16_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_16_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_17_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_17_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_17_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_17_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_17_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_17_V_address1 = weight_17_V_addr_2_reg_7747.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_17_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_17_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_17_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_17_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_17_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_18_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_18_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_18_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_18_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_18_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_18_V_address1 = weight_18_V_addr_2_reg_7757.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_18_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_18_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_18_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_18_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_18_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_19_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_19_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_19_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_19_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_19_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_19_V_address1 = weight_19_V_addr_2_reg_7767.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_19_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_19_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_19_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_19_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_19_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_1_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_1_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_1_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_1_V_address1 = weight_1_V_addr_2_reg_7287.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_1_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_1_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_20_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_20_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_20_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_20_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_20_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_20_V_address1 = weight_20_V_addr_2_reg_7777.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_20_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_20_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_20_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_20_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_20_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_21_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_21_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_21_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_21_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_21_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_21_V_address1 = weight_21_V_addr_2_reg_7787.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_21_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_21_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_21_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_21_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_21_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_22_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_22_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_22_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_22_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_22_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_22_V_address1 = weight_22_V_addr_2_reg_7797.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_22_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_22_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_22_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_22_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_22_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_23_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        weight_23_V_address0 =  (sc_lv<9>) (tmp_300_cast_fu_5530_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_23_V_address0 =  (sc_lv<9>) (tmp_262_cast_fu_4274_p1.read());
    } else {
        weight_23_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_23_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_23_V_address1 = weight_23_V_addr_2_reg_7807.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        weight_23_V_address1 =  (sc_lv<9>) (tmp_263_cast_fu_4296_p1.read());
    } else {
        weight_23_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_23_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_23_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()))) {
        weight_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_23_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_2_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_2_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_2_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_2_V_address1 = weight_2_V_addr_2_reg_7297.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_2_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_2_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_3_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_3_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_3_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_3_V_address1 = weight_3_V_addr_2_reg_7307.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_3_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_3_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_4_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_4_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_4_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_4_V_address1 = weight_4_V_addr_2_reg_7317.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_4_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_4_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_5_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_5_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_5_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_5_V_address1 = weight_5_V_addr_2_reg_7327.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_5_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_5_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_6_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_6_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_6_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_6_V_address1 = weight_6_V_addr_2_reg_7337.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_6_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_6_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_7_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_7_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_7_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_7_V_address1 = weight_7_V_addr_2_reg_7347.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_7_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_7_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_8_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_8_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_8_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_8_V_address1 = weight_8_V_addr_2_reg_7357.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_8_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_8_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_8_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        weight_9_V_address0 =  (sc_lv<9>) (tmp_277_cast_fu_4913_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_9_V_address0 =  (sc_lv<9>) (tmp_244_cast_fu_3669_p1.read());
    } else {
        weight_9_V_address0 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_9_V_address1 = weight_9_V_addr_2_reg_7367.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        weight_9_V_address1 =  (sc_lv<9>) (tmp_245_cast_fu_3691_p1.read());
    } else {
        weight_9_V_address1 = "XXXXXXXXX";
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()))) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_8p_p::thread_weight_9_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()))) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

