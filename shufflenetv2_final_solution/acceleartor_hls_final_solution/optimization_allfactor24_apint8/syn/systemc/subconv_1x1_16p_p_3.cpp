#include "subconv_1x1_16p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        ShuffleConvs_1_Downs_10_address0 = ShuffleConvs_1_Downs_178_reg_5029.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        ShuffleConvs_1_Downs_10_address0 = ShuffleConvs_1_Downs_177_reg_5024.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_10_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_10_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_address1() {
    ShuffleConvs_1_Downs_10_address1 = ShuffleConvs_1_Downs_214_reg_5404.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())))) {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_10_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_10_d0 = tmp_74_2_reg_5190.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        ShuffleConvs_1_Downs_10_d0 = tmp_72_2_fu_3690_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_10_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_10_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_d1() {
    ShuffleConvs_1_Downs_10_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_14)))) {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_10_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_14))) {
        ShuffleConvs_1_Downs_10_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_10_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_11_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_11_address0 = ShuffleConvs_1_Downs_106_reg_4251.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        ShuffleConvs_1_Downs_11_address0 = ShuffleConvs_1_Downs_105_reg_4246.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_11_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_11_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_address1() {
    ShuffleConvs_1_Downs_11_address1 = ShuffleConvs_1_Downs_206_reg_5356.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_11_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_11_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_11_d0 = tmp_58_2_reg_4412.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_11_d0 = tmp_56_2_fu_2559_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_11_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_11_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_d1() {
    ShuffleConvs_1_Downs_11_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_2)))) {
        ShuffleConvs_1_Downs_11_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_11_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_2))) {
        ShuffleConvs_1_Downs_11_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_11_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_12_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        ShuffleConvs_1_Downs_12_address0 = ShuffleConvs_1_Downs_174_reg_5009.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        ShuffleConvs_1_Downs_12_address0 = ShuffleConvs_1_Downs_173_reg_5004.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_12_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_12_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_address1() {
    ShuffleConvs_1_Downs_12_address1 = ShuffleConvs_1_Downs_199_reg_5314.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())))) {
        ShuffleConvs_1_Downs_12_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_12_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_12_d0 = tmp_74_1_reg_5185.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        ShuffleConvs_1_Downs_12_d0 = tmp_72_1_fu_3676_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_12_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_12_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_d1() {
    ShuffleConvs_1_Downs_12_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_13)))) {
        ShuffleConvs_1_Downs_12_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_12_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_13))) {
        ShuffleConvs_1_Downs_12_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_12_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_13_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        ShuffleConvs_1_Downs_13_address0 = ShuffleConvs_1_Downs_176_reg_5019.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        ShuffleConvs_1_Downs_13_address0 = ShuffleConvs_1_Downs_175_reg_5014.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_13_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_13_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_address1() {
    ShuffleConvs_1_Downs_13_address1 = ShuffleConvs_1_Downs_211_reg_5386.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())))) {
        ShuffleConvs_1_Downs_13_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_13_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_13_d0 = tmp_47_reg_5180.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        ShuffleConvs_1_Downs_13_d0 = tmp_45_fu_3662_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_13_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_13_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_d1() {
    ShuffleConvs_1_Downs_13_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_12)))) {
        ShuffleConvs_1_Downs_13_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_13_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_12))) {
        ShuffleConvs_1_Downs_13_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_13_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_14_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_14_address0 = ShuffleConvs_1_Downs_148_reg_4739.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        ShuffleConvs_1_Downs_14_address0 = ShuffleConvs_1_Downs_147_reg_4734.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_14_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_14_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_address1() {
    ShuffleConvs_1_Downs_14_address1 = ShuffleConvs_1_Downs_207_reg_5362.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_14_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_14_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_1_Downs_14_d0 = tmp_68_5_reg_4945.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_1_Downs_14_d0 = tmp_66_5_fu_3355_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_14_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_14_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_d1() {
    ShuffleConvs_1_Downs_14_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_11)))) {
        ShuffleConvs_1_Downs_14_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_14_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_11))) {
        ShuffleConvs_1_Downs_14_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_14_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_15_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_15_address0 = ShuffleConvs_1_Downs_150_reg_4749.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        ShuffleConvs_1_Downs_15_address0 = ShuffleConvs_1_Downs_149_reg_4744.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_15_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_15_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_address1() {
    ShuffleConvs_1_Downs_15_address1 = ShuffleConvs_1_Downs_208_reg_5368.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_15_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_15_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_1_Downs_15_d0 = tmp_68_4_reg_4940.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_1_Downs_15_d0 = tmp_66_4_fu_3341_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_15_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_15_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_d1() {
    ShuffleConvs_1_Downs_15_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_10)))) {
        ShuffleConvs_1_Downs_15_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_15_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_10))) {
        ShuffleConvs_1_Downs_15_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_15_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_16_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_16_address0 = ShuffleConvs_1_Downs_146_reg_4729.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        ShuffleConvs_1_Downs_16_address0 = ShuffleConvs_1_Downs_145_reg_4724.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_16_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_16_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_address1() {
    ShuffleConvs_1_Downs_16_address1 = ShuffleConvs_1_Downs_205_reg_5350.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_16_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_16_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_1_Downs_16_d0 = tmp_68_3_reg_4935.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_1_Downs_16_d0 = tmp_66_3_fu_3327_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_16_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_16_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_d1() {
    ShuffleConvs_1_Downs_16_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_F)))) {
        ShuffleConvs_1_Downs_16_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_16_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_F))) {
        ShuffleConvs_1_Downs_16_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_16_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_17_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_17_address0 = ShuffleConvs_1_Downs_152_reg_4759.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        ShuffleConvs_1_Downs_17_address0 = ShuffleConvs_1_Downs_151_reg_4754.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_17_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_17_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_address1() {
    ShuffleConvs_1_Downs_17_address1 = ShuffleConvs_1_Downs_209_reg_5374.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_17_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_17_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_1_Downs_17_d0 = tmp_68_2_reg_4930.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_1_Downs_17_d0 = tmp_66_2_fu_3313_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_17_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_17_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_d1() {
    ShuffleConvs_1_Downs_17_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_E)))) {
        ShuffleConvs_1_Downs_17_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_17_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_E))) {
        ShuffleConvs_1_Downs_17_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_17_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_18_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_18_address0 = ShuffleConvs_1_Downs_154_reg_4769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        ShuffleConvs_1_Downs_18_address0 = ShuffleConvs_1_Downs_153_reg_4764.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_18_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_18_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_address1() {
    ShuffleConvs_1_Downs_18_address1 = ShuffleConvs_1_Downs_210_reg_5380.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_18_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_18_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_1_Downs_18_d0 = tmp_68_1_reg_4925.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_1_Downs_18_d0 = tmp_66_1_fu_3299_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_18_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_18_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_d1() {
    ShuffleConvs_1_Downs_18_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_D)))) {
        ShuffleConvs_1_Downs_18_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_18_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_D))) {
        ShuffleConvs_1_Downs_18_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_18_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_19_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_19_address0 = ShuffleConvs_1_Downs_144_reg_4719.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()))) {
        ShuffleConvs_1_Downs_19_address0 = ShuffleConvs_1_Downs_143_reg_4714.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_19_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_19_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_address1() {
    ShuffleConvs_1_Downs_19_address1 = ShuffleConvs_1_Downs_197_reg_5302.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()))) {
        ShuffleConvs_1_Downs_19_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_19_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read())) {
        ShuffleConvs_1_Downs_19_d0 = tmp_43_reg_4920.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read())) {
        ShuffleConvs_1_Downs_19_d0 = tmp_41_fu_3285_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_19_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_19_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_d1() {
    ShuffleConvs_1_Downs_19_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state49.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_C)))) {
        ShuffleConvs_1_Downs_19_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_19_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_C))) {
        ShuffleConvs_1_Downs_19_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_19_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_1_address0 = ShuffleConvs_1_Downs_120_reg_4460.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_1_address0 = ShuffleConvs_1_Downs_119_reg_4455.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_1_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_1_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_address1() {
    ShuffleConvs_1_Downs_1_address1 = ShuffleConvs_1_Downs_201_reg_5326.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_1_d0 = tmp_63_2_reg_4671.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_1_d0 = tmp_61_2_fu_2936_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_1_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_1_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_d1() {
    ShuffleConvs_1_Downs_1_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_8)))) {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_1_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_8))) {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_1_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_20_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_20_address0 = ShuffleConvs_1_Downs_130_reg_4510.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_20_address0 = ShuffleConvs_1_Downs_129_reg_4505.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_20_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_20_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_address1() {
    ShuffleConvs_1_Downs_20_address1 = ShuffleConvs_1_Downs_213_reg_5398.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_20_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_20_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_20_d0 = tmp_63_5_reg_4686.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_20_d0 = tmp_61_5_fu_2978_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_20_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_20_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_d1() {
    ShuffleConvs_1_Downs_20_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_B)))) {
        ShuffleConvs_1_Downs_20_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_20_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_B))) {
        ShuffleConvs_1_Downs_20_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_20_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_21_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_21_address0 = ShuffleConvs_1_Downs_128_reg_4500.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_21_address0 = ShuffleConvs_1_Downs_127_reg_4495.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_21_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_21_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_address1() {
    ShuffleConvs_1_Downs_21_address1 = ShuffleConvs_1_Downs_212_reg_5392.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_21_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_21_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_21_d0 = tmp_63_4_reg_4681.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_21_d0 = tmp_61_4_fu_2964_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_21_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_21_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_d1() {
    ShuffleConvs_1_Downs_21_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_A)))) {
        ShuffleConvs_1_Downs_21_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_21_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_A))) {
        ShuffleConvs_1_Downs_21_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_21_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_22_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_22_address0 = ShuffleConvs_1_Downs_102_reg_4231.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        ShuffleConvs_1_Downs_22_address0 = ShuffleConvs_1_Downs_101_reg_4226.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_22_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_22_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_address1() {
    ShuffleConvs_1_Downs_22_address1 = ShuffleConvs_1_Downs_198_reg_5308.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_22_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_22_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_22_d0 = tmp_58_1_reg_4407.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_22_d0 = tmp_56_1_fu_2545_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_22_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_22_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_d1() {
    ShuffleConvs_1_Downs_22_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_1)))) {
        ShuffleConvs_1_Downs_22_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_22_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_1))) {
        ShuffleConvs_1_Downs_22_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_22_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_23_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_23_address0 = ShuffleConvs_1_Downs_104_reg_4241.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        ShuffleConvs_1_Downs_23_address0 = ShuffleConvs_1_Downs_103_reg_4236.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_23_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_23_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_address1() {
    ShuffleConvs_1_Downs_23_address1 = ShuffleConvs_1_Downs_200_reg_5320.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_23_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_23_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_23_d0 = tmp_35_reg_4402.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_23_d0 = tmp_33_fu_2531_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_23_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_23_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_d1() {
    ShuffleConvs_1_Downs_23_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(ap_const_lv6_0, grp_fu_2131_p2.read())))) {
        ShuffleConvs_1_Downs_23_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_23_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(ap_const_lv6_0, grp_fu_3869_p2.read()))) {
        ShuffleConvs_1_Downs_23_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_23_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_2_address0 = ShuffleConvs_1_Downs_126_reg_4490.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_2_address0 = ShuffleConvs_1_Downs_125_reg_4485.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_2_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_2_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_address1() {
    ShuffleConvs_1_Downs_2_address1 = ShuffleConvs_1_Downs_204_reg_5344.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_2_d0 = tmp_63_1_reg_4666.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_2_d0 = tmp_61_1_fu_2922_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_2_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_2_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_d1() {
    ShuffleConvs_1_Downs_2_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_7)))) {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_2_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_7))) {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_2_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_3_address0 = ShuffleConvs_1_Downs_124_reg_4480.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_3_address0 = ShuffleConvs_1_Downs_123_reg_4475.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_3_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_3_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_address1() {
    ShuffleConvs_1_Downs_3_address1 = ShuffleConvs_1_Downs_203_reg_5338.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_3_d0 = tmp_39_reg_4661.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_3_d0 = tmp_37_fu_2908_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_3_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_3_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_d1() {
    ShuffleConvs_1_Downs_3_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_6)))) {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_3_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_6))) {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_3_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_4_address0 = ShuffleConvs_1_Downs_98_reg_4211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        ShuffleConvs_1_Downs_4_address0 = ShuffleConvs_1_Downs_97_reg_4206.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_4_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_4_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_address1() {
    ShuffleConvs_1_Downs_4_address1 = ShuffleConvs_1_Downs_194_reg_5284.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_4_d0 = tmp_58_5_reg_4427.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_4_d0 = tmp_56_5_fu_2601_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_4_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_4_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_d1() {
    ShuffleConvs_1_Downs_4_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_5)))) {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_4_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_5))) {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_4_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_5_address0 = ShuffleConvs_1_Downs_96_reg_4201.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        ShuffleConvs_1_Downs_5_address0 = ShuffleConvs_1_Downs_95_reg_4196.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_5_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_5_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_address1() {
    ShuffleConvs_1_Downs_5_address1 = ShuffleConvs_1_Downs_191_reg_5266.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_5_d0 = tmp_58_4_reg_4422.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_5_d0 = tmp_56_4_fu_2587_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_5_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_5_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_d1() {
    ShuffleConvs_1_Downs_5_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_4)))) {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_5_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_4))) {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_5_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_6_address0 = ShuffleConvs_1_Downs_100_reg_4221.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()))) {
        ShuffleConvs_1_Downs_6_address0 = ShuffleConvs_1_Downs_99_reg_4216.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_6_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_6_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_address1() {
    ShuffleConvs_1_Downs_6_address1 = ShuffleConvs_1_Downs_196_reg_5296.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read()))) {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_6_d0 = tmp_58_3_reg_4417.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_6_d0 = tmp_56_3_fu_2573_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_6_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_6_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_d1() {
    ShuffleConvs_1_Downs_6_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_3)))) {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_6_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_3))) {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_6_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        ShuffleConvs_1_Downs_7_address0 = ShuffleConvs_1_Downs_168_reg_4979.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        ShuffleConvs_1_Downs_7_address0 = ShuffleConvs_1_Downs_167_reg_4974.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_7_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_7_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_address1() {
    ShuffleConvs_1_Downs_7_address1 = ShuffleConvs_1_Downs_192_reg_5272.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())))) {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_7_d0 = tmp_74_5_reg_5205.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        ShuffleConvs_1_Downs_7_d0 = tmp_72_5_fu_3732_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_7_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_7_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_d1() {
    ShuffleConvs_1_Downs_7_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          !esl_seteq<1,6,6>(ap_const_lv6_0, grp_fu_2131_p2.read()) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_1) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_2) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_3) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_4) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_5) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_6) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_7) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_8) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_9) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_A) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_B) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_C) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_D) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_E) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_F) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_10) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_11) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_12) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_13) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_14) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_15) && 
          !esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_16)))) {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_7_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         !esl_seteq<1,6,6>(ap_const_lv6_0, grp_fu_3869_p2.read()) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(ap_const_lv6_16, grp_fu_3869_p2.read()))) {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_7_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        ShuffleConvs_1_Downs_8_address0 = ShuffleConvs_1_Downs_170_reg_4989.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        ShuffleConvs_1_Downs_8_address0 = ShuffleConvs_1_Downs_169_reg_4984.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_8_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_8_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_address1() {
    ShuffleConvs_1_Downs_8_address1 = ShuffleConvs_1_Downs_193_reg_5278.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())))) {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_8_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_8_d0 = tmp_74_4_reg_5200.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        ShuffleConvs_1_Downs_8_d0 = tmp_72_4_fu_3718_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_8_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_8_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_d1() {
    ShuffleConvs_1_Downs_8_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_16)))) {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_8_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(ap_const_lv6_16, grp_fu_3869_p2.read()))) {
        ShuffleConvs_1_Downs_8_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_8_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()))) {
        ShuffleConvs_1_Downs_9_address0 = ShuffleConvs_1_Downs_172_reg_4999.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        ShuffleConvs_1_Downs_9_address0 = ShuffleConvs_1_Downs_171_reg_4994.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_9_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_9_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_address1() {
    ShuffleConvs_1_Downs_9_address1 = ShuffleConvs_1_Downs_195_reg_5290.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())))) {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_9_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read())) {
        ShuffleConvs_1_Downs_9_d0 = tmp_74_3_reg_5195.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read())) {
        ShuffleConvs_1_Downs_9_d0 = tmp_72_3_fu_3704_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_9_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_9_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_d1() {
    ShuffleConvs_1_Downs_9_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state61.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_15)))) {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_9_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_15))) {
        ShuffleConvs_1_Downs_9_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_9_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read()))) {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<10>) (tmp_490_cast_fu_4014_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_address0 = ShuffleConvs_1_Downs_122_reg_4470.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()))) {
        ShuffleConvs_1_Downs_address0 = ShuffleConvs_1_Downs_121_reg_4465.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_address0 =  (sc_lv<10>) (tmp_428_cast_fu_2281_p1.read());
    } else {
        ShuffleConvs_1_Downs_address0 = "XXXXXXXXXX";
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_address1() {
    ShuffleConvs_1_Downs_address1 = ShuffleConvs_1_Downs_202_reg_5332.read();
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter9.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()))) {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()))) {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        ShuffleConvs_1_Downs_d0 = tmp_63_3_reg_4676.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_d0 = tmp_61_3_fu_2950_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()))) {
        ShuffleConvs_1_Downs_d0 = bias_V_q0.read();
    } else {
        ShuffleConvs_1_Downs_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_d1() {
    ShuffleConvs_1_Downs_d1 = ap_const_lv8_0;
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()) || 
         (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter10.read()) && 
          esl_seteq<1,6,6>(grp_fu_2131_p2.read(), ap_const_lv6_9)))) {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_we0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ShuffleConvs_1_Downs_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_565_fu_4099_p3.read()) && 
         esl_seteq<1,6,6>(grp_fu_3869_p2.read(), ap_const_lv6_9))) {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_1;
    } else {
        ShuffleConvs_1_Downs_we1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[51];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[2];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state14() {
    ap_CS_fsm_state14 = ap_CS_fsm.read()[3];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state15() {
    ap_CS_fsm_state15 = ap_CS_fsm.read()[4];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state16() {
    ap_CS_fsm_state16 = ap_CS_fsm.read()[5];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state17() {
    ap_CS_fsm_state17 = ap_CS_fsm.read()[6];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state18() {
    ap_CS_fsm_state18 = ap_CS_fsm.read()[7];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state19() {
    ap_CS_fsm_state19 = ap_CS_fsm.read()[8];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state20() {
    ap_CS_fsm_state20 = ap_CS_fsm.read()[9];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state21() {
    ap_CS_fsm_state21 = ap_CS_fsm.read()[10];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[11];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[12];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state24() {
    ap_CS_fsm_state24 = ap_CS_fsm.read()[13];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state25() {
    ap_CS_fsm_state25 = ap_CS_fsm.read()[14];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[15];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[16];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[17];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state29() {
    ap_CS_fsm_state29 = ap_CS_fsm.read()[18];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state30() {
    ap_CS_fsm_state30 = ap_CS_fsm.read()[19];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state31() {
    ap_CS_fsm_state31 = ap_CS_fsm.read()[20];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state32() {
    ap_CS_fsm_state32 = ap_CS_fsm.read()[21];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state33() {
    ap_CS_fsm_state33 = ap_CS_fsm.read()[22];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state34() {
    ap_CS_fsm_state34 = ap_CS_fsm.read()[23];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[24];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state36() {
    ap_CS_fsm_state36 = ap_CS_fsm.read()[25];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state37() {
    ap_CS_fsm_state37 = ap_CS_fsm.read()[26];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state38() {
    ap_CS_fsm_state38 = ap_CS_fsm.read()[27];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state39() {
    ap_CS_fsm_state39 = ap_CS_fsm.read()[28];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state40() {
    ap_CS_fsm_state40 = ap_CS_fsm.read()[29];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state41() {
    ap_CS_fsm_state41 = ap_CS_fsm.read()[30];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state42() {
    ap_CS_fsm_state42 = ap_CS_fsm.read()[31];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state43() {
    ap_CS_fsm_state43 = ap_CS_fsm.read()[32];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state44() {
    ap_CS_fsm_state44 = ap_CS_fsm.read()[33];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state45() {
    ap_CS_fsm_state45 = ap_CS_fsm.read()[34];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state46() {
    ap_CS_fsm_state46 = ap_CS_fsm.read()[35];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state47() {
    ap_CS_fsm_state47 = ap_CS_fsm.read()[36];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state48() {
    ap_CS_fsm_state48 = ap_CS_fsm.read()[37];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state49() {
    ap_CS_fsm_state49 = ap_CS_fsm.read()[38];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state50() {
    ap_CS_fsm_state50 = ap_CS_fsm.read()[39];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state51() {
    ap_CS_fsm_state51 = ap_CS_fsm.read()[40];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state52() {
    ap_CS_fsm_state52 = ap_CS_fsm.read()[41];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state53() {
    ap_CS_fsm_state53 = ap_CS_fsm.read()[42];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state54() {
    ap_CS_fsm_state54 = ap_CS_fsm.read()[43];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state55() {
    ap_CS_fsm_state55 = ap_CS_fsm.read()[44];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state56() {
    ap_CS_fsm_state56 = ap_CS_fsm.read()[45];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state57() {
    ap_CS_fsm_state57 = ap_CS_fsm.read()[46];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state58() {
    ap_CS_fsm_state58 = ap_CS_fsm.read()[47];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state59() {
    ap_CS_fsm_state59 = ap_CS_fsm.read()[48];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state60() {
    ap_CS_fsm_state60 = ap_CS_fsm.read()[49];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state61() {
    ap_CS_fsm_state61 = ap_CS_fsm.read()[50];
}

void subconv_1x1_16p_p::thread_ap_CS_fsm_state73() {
    ap_CS_fsm_state73 = ap_CS_fsm.read()[52];
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

void subconv_1x1_16p_p::thread_ap_block_state10_pp0_stage0_iter8() {
    ap_block_state10_pp0_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state11_pp0_stage0_iter9() {
    ap_block_state11_pp0_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state12_pp0_stage0_iter10() {
    ap_block_state12_pp0_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state4_pp0_stage0_iter2() {
    ap_block_state4_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state5_pp0_stage0_iter3() {
    ap_block_state5_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state62_pp1_stage0_iter0() {
    ap_block_state62_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state63_pp1_stage0_iter1() {
    ap_block_state63_pp1_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state64_pp1_stage0_iter2() {
    ap_block_state64_pp1_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state65_pp1_stage0_iter3() {
    ap_block_state65_pp1_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state66_pp1_stage0_iter4() {
    ap_block_state66_pp1_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state67_pp1_stage0_iter5() {
    ap_block_state67_pp1_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state68_pp1_stage0_iter6() {
    ap_block_state68_pp1_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state69_pp1_stage0_iter7() {
    ap_block_state69_pp1_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state6_pp0_stage0_iter4() {
    ap_block_state6_pp0_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state70_pp1_stage0_iter8() {
    ap_block_state70_pp1_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state71_pp1_stage0_iter9() {
    ap_block_state71_pp1_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state72_pp1_stage0_iter10() {
    ap_block_state72_pp1_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state7_pp0_stage0_iter5() {
    ap_block_state7_pp0_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state8_pp0_stage0_iter6() {
    ap_block_state8_pp0_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_block_state9_pp0_stage0_iter7() {
    ap_block_state9_pp0_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void subconv_1x1_16p_p::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(exitcond_flatten_fu_2079_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_condition_pp1_exit_iter0_state62() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_3816_p2.read())) {
        ap_condition_pp1_exit_iter0_state62 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state62 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter10.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_idle_pp1() {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter10.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state73.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_arrayNo_mid2_v_fu_3840_p3() {
    arrayNo_mid2_v_fu_3840_p3 = (!exitcond_flatten10_fu_3834_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten10_fu_3834_p2.read()[0].to_bool())? co_21_fu_3828_p2.read(): co16_phi_fu_1937_p4.read());
}

void subconv_1x1_16p_p::thread_bias_V_address0() {
    bias_V_address0 =  (sc_lv<6>) (co_cast_mid2_fu_2205_p1.read());
}

void subconv_1x1_16p_p::thread_bias_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter9.read()))) {
        bias_V_ce0 = ap_const_logic_1;
    } else {
        bias_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_ci10_cast6_cast_fu_3168_p1() {
    ci10_cast6_cast_fu_3168_p1 = esl_zext<7,6>(ci10_reg_1876.read());
}

void subconv_1x1_16p_p::thread_ci10_cast6_fu_3158_p1() {
    ci10_cast6_fu_3158_p1 = esl_zext<32,6>(ci10_reg_1876.read());
}

void subconv_1x1_16p_p::thread_ci12_cast3_cast_fu_3545_p1() {
    ci12_cast3_cast_fu_3545_p1 = esl_zext<7,6>(ci12_reg_1911.read());
}

void subconv_1x1_16p_p::thread_ci12_cast3_fu_3535_p1() {
    ci12_cast3_fu_3535_p1 = esl_zext<32,6>(ci12_reg_1911.read());
}

void subconv_1x1_16p_p::thread_ci6_cast9_cast_fu_2791_p1() {
    ci6_cast9_cast_fu_2791_p1 = esl_zext<7,6>(ci6_reg_1841.read());
}

void subconv_1x1_16p_p::thread_ci6_cast9_fu_2781_p1() {
    ci6_cast9_fu_2781_p1 = esl_zext<32,6>(ci6_reg_1841.read());
}

void subconv_1x1_16p_p::thread_ci_10_fu_2888_p2() {
    ci_10_fu_2888_p2 = (!ci6_reg_1841.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci6_reg_1841.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_11_fu_3265_p2() {
    ci_11_fu_3265_p2 = (!ci10_reg_1876.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci10_reg_1876.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_13_fu_3642_p2() {
    ci_13_fu_3642_p2 = (!ci12_reg_1911.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci12_reg_1911.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_9_fu_2511_p2() {
    ci_9_fu_2511_p2 = (!ci_reg_1806.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(ci_reg_1806.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void subconv_1x1_16p_p::thread_ci_cast_cast_fu_2414_p1() {
    ci_cast_cast_fu_2414_p1 = esl_zext<7,6>(ci_reg_1806.read());
}

void subconv_1x1_16p_p::thread_ci_cast_fu_2404_p1() {
    ci_cast_fu_2404_p1 = esl_zext<32,6>(ci_reg_1806.read());
}

void subconv_1x1_16p_p::thread_co16_phi_fu_1937_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_5210.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co16_phi_fu_1937_p4 = arrayNo_mid2_v_reg_5226.read();
    } else {
        co16_phi_fu_1937_p4 = co16_reg_1933.read();
    }
}

void subconv_1x1_16p_p::thread_co_20_fu_2111_p2() {
    co_20_fu_2111_p2 = (!ap_const_lv6_1.is_01() || !co_phi_fu_1739_p4.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(co_phi_fu_1739_p4.read()));
}

void subconv_1x1_16p_p::thread_co_21_fu_3828_p2() {
    co_21_fu_3828_p2 = (!ap_const_lv6_1.is_01() || !co16_phi_fu_1937_p4.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(co16_phi_fu_1937_p4.read()));
}

void subconv_1x1_16p_p::thread_co_cast_mid2_fu_2205_p1() {
    co_cast_mid2_fu_2205_p1 = esl_zext<32,6>(ap_reg_pp0_iter8_co_cast_mid2_v_reg_4129.read());
}

void subconv_1x1_16p_p::thread_co_cast_mid2_v_fu_2124_p3() {
    co_cast_mid2_v_fu_2124_p3 = (!exitcond_flatten8_reg_4116.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten8_reg_4116.read()[0].to_bool())? co_20_fu_2111_p2.read(): co_phi_fu_1739_p4.read());
}

void subconv_1x1_16p_p::thread_co_phi_fu_1739_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4107.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        co_phi_fu_1739_p4 = co_cast_mid2_v_reg_4129.read();
    } else {
        co_phi_fu_1739_p4 = co_reg_1735.read();
    }
}

void subconv_1x1_16p_p::thread_exitcond29_fu_2348_p2() {
    exitcond29_fu_2348_p2 = (!h1_reg_1782.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h1_reg_1782.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond30_fu_2725_p2() {
    exitcond30_fu_2725_p2 = (!h4_reg_1817.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h4_reg_1817.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond31_fu_2392_p2() {
    exitcond31_fu_2392_p2 = (!w2_reg_1794.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w2_reg_1794.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond32_fu_3102_p2() {
    exitcond32_fu_3102_p2 = (!h8_reg_1852.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h8_reg_1852.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond33_fu_2769_p2() {
    exitcond33_fu_2769_p2 = (!w5_reg_1829.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w5_reg_1829.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond34_fu_2505_p2() {
    exitcond34_fu_2505_p2 = (!ci_reg_1806.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_1806.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond35_fu_3479_p2() {
    exitcond35_fu_3479_p2 = (!h12_reg_1887.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(h12_reg_1887.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond36_fu_3146_p2() {
    exitcond36_fu_3146_p2 = (!w9_reg_1864.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w9_reg_1864.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond37_fu_2882_p2() {
    exitcond37_fu_2882_p2 = (!ci6_reg_1841.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci6_reg_1841.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond38_fu_3523_p2() {
    exitcond38_fu_3523_p2 = (!w13_reg_1899.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_1899.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond39_fu_3259_p2() {
    exitcond39_fu_3259_p2 = (!ci10_reg_1876.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_1876.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond40_fu_3898_p2() {
    exitcond40_fu_3898_p2 = (!w18_phi_fu_1971_p4.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w18_phi_fu_1971_p4.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond41_fu_3636_p2() {
    exitcond41_fu_3636_p2 = (!ci12_reg_1911.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(ci12_reg_1911.read() == ap_const_lv6_30);
}

void subconv_1x1_16p_p::thread_exitcond54_mid_fu_2148_p2() {
    exitcond54_mid_fu_2148_p2 = (exitcond_fu_2142_p2.read() & not_exitcond_flatten_fu_2137_p2.read());
}

void subconv_1x1_16p_p::thread_exitcond_flatten10_fu_3834_p2() {
    exitcond_flatten10_fu_3834_p2 = (!indvar_flatten6_reg_1944.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten6_reg_1944.read() == ap_const_lv10_100);
}

void subconv_1x1_16p_p::thread_exitcond_flatten8_fu_2091_p2() {
    exitcond_flatten8_fu_2091_p2 = (!indvar_flatten_reg_1747.read().is_01() || !ap_const_lv10_100.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_1747.read() == ap_const_lv10_100);
}

void subconv_1x1_16p_p::thread_exitcond_flatten9_fu_3816_p2() {
    exitcond_flatten9_fu_3816_p2 = (!indvar_flatten5_reg_1922.read().is_01() || !ap_const_lv14_3000.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten5_reg_1922.read() == ap_const_lv14_3000);
}

void subconv_1x1_16p_p::thread_exitcond_flatten_fu_2079_p2() {
    exitcond_flatten_fu_2079_p2 = (!indvar_flatten4_reg_1724.read().is_01() || !ap_const_lv14_3000.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten4_reg_1724.read() == ap_const_lv14_3000);
}

void subconv_1x1_16p_p::thread_exitcond_fu_2142_p2() {
    exitcond_fu_2142_p2 = (!w_phi_fu_1774_p4.read().is_01() || !ap_const_lv5_11.is_01())? sc_lv<1>(): sc_lv<1>(w_phi_fu_1774_p4.read() == ap_const_lv5_11);
}

void subconv_1x1_16p_p::thread_exitcond_mid_fu_3904_p2() {
    exitcond_mid_fu_3904_p2 = (exitcond40_fu_3898_p2.read() & not_exitcond_flatten_1_fu_3893_p2.read());
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1979_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_1979_a_V = weight_18_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_1979_a_V = weight_12_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_1979_a_V = weight_6_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_1979_a_V = weight_0_V_q0.read();
    } else {
        grp_MUL_DP_fu_1979_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1979_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        grp_MUL_DP_fu_1979_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_1979_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1979_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_1979_b_V = weight_18_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_1979_b_V = weight_12_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_1979_b_V = weight_6_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_1979_b_V = weight_0_V_q1.read();
    } else {
        grp_MUL_DP_fu_1979_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1988_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_1988_a_V = weight_19_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_1988_a_V = weight_13_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_1988_a_V = weight_7_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_1988_a_V = weight_1_V_q0.read();
    } else {
        grp_MUL_DP_fu_1988_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1988_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        grp_MUL_DP_fu_1988_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_1988_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1988_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_1988_b_V = weight_19_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_1988_b_V = weight_13_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_1988_b_V = weight_7_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_1988_b_V = weight_1_V_q1.read();
    } else {
        grp_MUL_DP_fu_1988_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1997_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_1997_a_V = weight_20_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_1997_a_V = weight_14_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_1997_a_V = weight_8_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_1997_a_V = weight_2_V_q0.read();
    } else {
        grp_MUL_DP_fu_1997_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1997_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        grp_MUL_DP_fu_1997_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_1997_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_1997_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_1997_b_V = weight_20_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_1997_b_V = weight_14_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_1997_b_V = weight_8_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_1997_b_V = weight_2_V_q1.read();
    } else {
        grp_MUL_DP_fu_1997_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2006_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_2006_a_V = weight_21_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_2006_a_V = weight_15_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_2006_a_V = weight_9_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_2006_a_V = weight_3_V_q0.read();
    } else {
        grp_MUL_DP_fu_2006_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2006_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        grp_MUL_DP_fu_2006_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2006_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2006_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_2006_b_V = weight_21_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_2006_b_V = weight_15_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_2006_b_V = weight_9_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_2006_b_V = weight_3_V_q1.read();
    } else {
        grp_MUL_DP_fu_2006_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2015_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_2015_a_V = weight_22_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_2015_a_V = weight_16_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_2015_a_V = weight_10_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_2015_a_V = weight_4_V_q0.read();
    } else {
        grp_MUL_DP_fu_2015_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2015_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        grp_MUL_DP_fu_2015_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2015_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2015_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_2015_b_V = weight_22_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_2015_b_V = weight_16_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_2015_b_V = weight_10_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_2015_b_V = weight_4_V_q1.read();
    } else {
        grp_MUL_DP_fu_2015_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2024_a_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_2024_a_V = weight_23_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_2024_a_V = weight_17_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_2024_a_V = weight_11_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_2024_a_V = weight_5_V_q0.read();
    } else {
        grp_MUL_DP_fu_2024_a_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2024_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state45.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state46.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state57.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state58.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state20.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state56.read()))) {
        grp_MUL_DP_fu_2024_ap_ce = ap_const_logic_1;
    } else {
        grp_MUL_DP_fu_2024_ap_ce = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_grp_MUL_DP_fu_2024_b_V() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state55.read())) {
        grp_MUL_DP_fu_2024_b_V = weight_23_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state43.read())) {
        grp_MUL_DP_fu_2024_b_V = weight_17_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        grp_MUL_DP_fu_2024_b_V = weight_11_V_q1.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        grp_MUL_DP_fu_2024_b_V = weight_5_V_q1.read();
    } else {
        grp_MUL_DP_fu_2024_b_V =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_grp_fu_2131_p0() {
    grp_fu_2131_p0 = (!exitcond_flatten8_reg_4116.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten8_reg_4116.read()[0].to_bool())? co_20_fu_2111_p2.read(): co_phi_fu_1739_p4.read());
}

void subconv_1x1_16p_p::thread_h12_cast5_cast_fu_3439_p1() {
    h12_cast5_cast_fu_3439_p1 = esl_zext<11,5>(h12_reg_1887.read());
}

void subconv_1x1_16p_p::thread_h17_cast2_mid2_cast_fu_3973_p1() {
    h17_cast2_mid2_cast_fu_3973_p1 = esl_zext<11,5>(h17_cast2_mid2_reg_5250.read());
}

void subconv_1x1_16p_p::thread_h17_cast2_mid2_fu_3929_p3() {
    h17_cast2_mid2_fu_3929_p3 = (!exitcond_mid_fu_3904_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond_mid_fu_3904_p2.read()[0].to_bool())? h_3_fu_3910_p2.read(): h17_mid_fu_3862_p3.read());
}

void subconv_1x1_16p_p::thread_h17_mid_fu_3862_p3() {
    h17_mid_fu_3862_p3 = (!exitcond_flatten10_reg_5219.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten10_reg_5219.read()[0].to_bool())? ap_const_lv5_1: h17_phi_fu_1959_p4.read());
}

void subconv_1x1_16p_p::thread_h17_phi_fu_1959_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5210.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h17_phi_fu_1959_p4 = h17_cast2_mid2_reg_5250.read();
    } else {
        h17_phi_fu_1959_p4 = h17_reg_1955.read();
    }
}

void subconv_1x1_16p_p::thread_h1_cast_cast_fu_2308_p1() {
    h1_cast_cast_fu_2308_p1 = esl_zext<11,5>(h1_reg_1782.read());
}

void subconv_1x1_16p_p::thread_h4_cast_cast_fu_2685_p1() {
    h4_cast_cast_fu_2685_p1 = esl_zext<11,5>(h4_reg_1817.read());
}

void subconv_1x1_16p_p::thread_h8_cast8_cast_fu_3062_p1() {
    h8_cast8_cast_fu_3062_p1 = esl_zext<11,5>(h8_reg_1852.read());
}

void subconv_1x1_16p_p::thread_h_1_fu_2775_p2() {
    h_1_fu_2775_p2 = (!h4_reg_1817.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h4_reg_1817.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_21_fu_2154_p2() {
    h_21_fu_2154_p2 = (!ap_const_lv5_1.is_01() || !h_mid_fu_2117_p3.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(h_mid_fu_2117_p3.read()));
}

void subconv_1x1_16p_p::thread_h_2_fu_3152_p2() {
    h_2_fu_3152_p2 = (!h8_reg_1852.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h8_reg_1852.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_3_fu_3910_p2() {
    h_3_fu_3910_p2 = (!ap_const_lv5_1.is_01() || !h17_mid_fu_3862_p3.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_1) + sc_biguint<5>(h17_mid_fu_3862_p3.read()));
}

void subconv_1x1_16p_p::thread_h_4_fu_3529_p2() {
    h_4_fu_3529_p2 = (!h12_reg_1887.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h12_reg_1887.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_9_fu_2398_p2() {
    h_9_fu_2398_p2 = (!h1_reg_1782.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h1_reg_1782.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_h_cast_mid2_cast_fu_2245_p1() {
    h_cast_mid2_cast_fu_2245_p1 = esl_zext<11,5>(ap_reg_pp0_iter8_h_cast_mid2_reg_4143.read());
}

void subconv_1x1_16p_p::thread_h_cast_mid2_fu_2173_p3() {
    h_cast_mid2_fu_2173_p3 = (!exitcond54_mid_fu_2148_p2.read()[0].is_01())? sc_lv<5>(): ((exitcond54_mid_fu_2148_p2.read()[0].to_bool())? h_21_fu_2154_p2.read(): h_mid_fu_2117_p3.read());
}

void subconv_1x1_16p_p::thread_h_mid_fu_2117_p3() {
    h_mid_fu_2117_p3 = (!exitcond_flatten8_reg_4116.read()[0].is_01())? sc_lv<5>(): ((exitcond_flatten8_reg_4116.read()[0].to_bool())? ap_const_lv5_1: h_phi_fu_1762_p4.read());
}

void subconv_1x1_16p_p::thread_h_phi_fu_1762_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4107.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        h_phi_fu_1762_p4 = h_cast_mid2_reg_4143.read();
    } else {
        h_phi_fu_1762_p4 = h_reg_1758.read();
    }
}

void subconv_1x1_16p_p::thread_indvar_flatten21_op_fu_3848_p2() {
    indvar_flatten21_op_fu_3848_p2 = (!indvar_flatten6_reg_1944.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten6_reg_1944.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void subconv_1x1_16p_p::thread_indvar_flatten_next1_3_fu_3854_p3() {
    indvar_flatten_next1_3_fu_3854_p3 = (!exitcond_flatten10_fu_3834_p2.read()[0].is_01())? sc_lv<10>(): ((exitcond_flatten10_fu_3834_p2.read()[0].to_bool())? ap_const_lv10_1: indvar_flatten21_op_fu_3848_p2.read());
}

void subconv_1x1_16p_p::thread_indvar_flatten_next1_4_fu_3822_p2() {
    indvar_flatten_next1_4_fu_3822_p2 = (!indvar_flatten5_reg_1922.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(indvar_flatten5_reg_1922.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void subconv_1x1_16p_p::thread_indvar_flatten_next1_fu_2085_p2() {
    indvar_flatten_next1_fu_2085_p2 = (!indvar_flatten4_reg_1724.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(indvar_flatten4_reg_1724.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void subconv_1x1_16p_p::thread_indvar_flatten_next_fu_2103_p3() {
    indvar_flatten_next_fu_2103_p3 = (!exitcond_flatten8_fu_2091_p2.read()[0].is_01())? sc_lv<10>(): ((exitcond_flatten8_fu_2091_p2.read()[0].to_bool())? ap_const_lv10_1: indvar_flatten_op_fu_2097_p2.read());
}

void subconv_1x1_16p_p::thread_indvar_flatten_op_fu_2097_p2() {
    indvar_flatten_op_fu_2097_p2 = (!indvar_flatten_reg_1747.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_1747.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void subconv_1x1_16p_p::thread_input_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read())) {
        input_V_address0 = input_V_addr_7_reg_5042.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        input_V_address0 = input_V_addr_6_reg_4782.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        input_V_address0 = input_V_addr_5_reg_4523.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        input_V_address0 = input_V_addr_reg_4264.read();
    } else {
        input_V_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void subconv_1x1_16p_p::thread_input_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state53.read()))) {
        input_V_ce0 = ap_const_logic_1;
    } else {
        input_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_mul4_fu_3877_p1() {
    mul4_fu_3877_p1 =  (sc_lv<6>) (mul4_fu_3877_p10.read());
}

void subconv_1x1_16p_p::thread_mul4_fu_3877_p10() {
    mul4_fu_3877_p10 = esl_zext<14,6>(arrayNo_mid2_v_reg_5226.read());
}

void subconv_1x1_16p_p::thread_mul4_fu_3877_p2() {
    mul4_fu_3877_p2 = (!ap_const_lv14_56.is_01() || !mul4_fu_3877_p1.read().is_01())? sc_lv<14>(): sc_biguint<14>(ap_const_lv14_56) * sc_biguint<6>(mul4_fu_3877_p1.read());
}

void subconv_1x1_16p_p::thread_mul_fu_2189_p1() {
    mul_fu_2189_p1 =  (sc_lv<6>) (mul_fu_2189_p10.read());
}

void subconv_1x1_16p_p::thread_mul_fu_2189_p10() {
    mul_fu_2189_p10 = esl_zext<14,6>(ap_reg_pp0_iter7_co_cast_mid2_v_reg_4129.read());
}

void subconv_1x1_16p_p::thread_mul_fu_2189_p2() {
    mul_fu_2189_p2 = (!ap_const_lv14_56.is_01() || !mul_fu_2189_p1.read().is_01())? sc_lv<14>(): sc_biguint<14>(ap_const_lv14_56) * sc_biguint<6>(mul_fu_2189_p1.read());
}

void subconv_1x1_16p_p::thread_not_exitcond_flatten_1_fu_3893_p2() {
    not_exitcond_flatten_1_fu_3893_p2 = (exitcond_flatten10_reg_5219.read() ^ ap_const_lv1_1);
}

void subconv_1x1_16p_p::thread_not_exitcond_flatten_fu_2137_p2() {
    not_exitcond_flatten_fu_2137_p2 = (exitcond_flatten8_reg_4116.read() ^ ap_const_lv1_1);
}

void subconv_1x1_16p_p::thread_p_shl10_cast_fu_2697_p1() {
    p_shl10_cast_fu_2697_p1 = esl_zext<10,9>(tmp_378_fu_2689_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl11_cast_fu_2709_p1() {
    p_shl11_cast_fu_2709_p1 = esl_zext<10,6>(tmp_379_fu_2701_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl12_cast_fu_2830_p3() {
    p_shl12_cast_fu_2830_p3 = esl_concat<11,4>(tmp_406_fu_2825_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl13_cast_fu_2846_p1() {
    p_shl13_cast_fu_2846_p1 = esl_zext<15,12>(tmp_546_fu_2838_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl14_cast_fu_2803_p1() {
    p_shl14_cast_fu_2803_p1 = esl_zext<11,10>(tmp_403_fu_2795_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl15_cast_fu_2815_p1() {
    p_shl15_cast_fu_2815_p1 = esl_zext<11,7>(tmp_404_fu_2807_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl16_cast_fu_3074_p1() {
    p_shl16_cast_fu_3074_p1 = esl_zext<10,9>(tmp_384_fu_3066_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl17_cast_fu_3086_p1() {
    p_shl17_cast_fu_3086_p1 = esl_zext<10,6>(tmp_385_fu_3078_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl18_cast_fu_3207_p3() {
    p_shl18_cast_fu_3207_p3 = esl_concat<11,4>(tmp_415_fu_3202_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl19_cast_fu_3223_p1() {
    p_shl19_cast_fu_3223_p1 = esl_zext<15,12>(tmp_559_fu_3215_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl20_cast_fu_3180_p1() {
    p_shl20_cast_fu_3180_p1 = esl_zext<11,10>(tmp_412_fu_3172_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl21_cast_fu_3192_p1() {
    p_shl21_cast_fu_3192_p1 = esl_zext<11,7>(tmp_413_fu_3184_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl22_cast_fu_3451_p1() {
    p_shl22_cast_fu_3451_p1 = esl_zext<10,9>(tmp_397_fu_3443_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl23_cast_fu_3463_p1() {
    p_shl23_cast_fu_3463_p1 = esl_zext<10,6>(tmp_398_fu_3455_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl24_cast_fu_3584_p3() {
    p_shl24_cast_fu_3584_p3 = esl_concat<11,4>(tmp_429_fu_3579_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl25_cast_fu_3600_p1() {
    p_shl25_cast_fu_3600_p1 = esl_zext<15,12>(tmp_578_fu_3592_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl26_cast_fu_3557_p1() {
    p_shl26_cast_fu_3557_p1 = esl_zext<11,10>(tmp_426_fu_3549_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl27_cast_fu_3569_p1() {
    p_shl27_cast_fu_3569_p1 = esl_zext<11,7>(tmp_427_fu_3561_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl2_cast_fu_2220_p1() {
    p_shl2_cast_fu_2220_p1 = esl_zext<11,10>(tmp_s_fu_2216_p1.read());
}

void subconv_1x1_16p_p::thread_p_shl30_cast_fu_3948_p1() {
    p_shl30_cast_fu_3948_p1 = esl_zext<11,10>(tmp_419_fu_3944_p1.read());
}

void subconv_1x1_16p_p::thread_p_shl31_cast_fu_3963_p1() {
    p_shl31_cast_fu_3963_p1 = esl_zext<11,7>(tmp_420_fu_3959_p1.read());
}

void subconv_1x1_16p_p::thread_p_shl3_cast_fu_2235_p1() {
    p_shl3_cast_fu_2235_p1 = esl_zext<11,7>(tmp_368_fu_2231_p1.read());
}

void subconv_1x1_16p_p::thread_p_shl4_cast_fu_2320_p1() {
    p_shl4_cast_fu_2320_p1 = esl_zext<10,9>(tmp_374_fu_2312_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl5_cast_fu_2332_p1() {
    p_shl5_cast_fu_2332_p1 = esl_zext<10,6>(tmp_375_fu_2324_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl6_cast_fu_2453_p3() {
    p_shl6_cast_fu_2453_p3 = esl_concat<11,4>(tmp_393_fu_2448_p2.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_p_shl7_cast_fu_2469_p1() {
    p_shl7_cast_fu_2469_p1 = esl_zext<15,12>(tmp_533_fu_2461_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl8_cast_fu_2426_p1() {
    p_shl8_cast_fu_2426_p1 = esl_zext<11,10>(tmp_390_fu_2418_p3.read());
}

void subconv_1x1_16p_p::thread_p_shl9_cast_fu_2438_p1() {
    p_shl9_cast_fu_2438_p1 = esl_zext<11,7>(tmp_391_fu_2430_p3.read());
}

void subconv_1x1_16p_p::thread_tmp_33_fu_2531_p2() {
    tmp_33_fu_2531_p2 = (!ShuffleConvs_1_Downs_107_reg_4342.read().is_01() || !tmp_534_fu_2527_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_107_reg_4342.read()) + sc_biguint<8>(tmp_534_fu_2527_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_35_fu_2614_p2() {
    tmp_35_fu_2614_p2 = (!ShuffleConvs_1_Downs_23_q0.read().is_01() || !tmp_535_fu_2610_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_23_q0.read()) + sc_biguint<8>(tmp_535_fu_2610_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_368_fu_2231_p1() {
    tmp_368_fu_2231_p1 = esl_sext<7,4>(tmp_530_fu_2224_p3.read());
}

void subconv_1x1_16p_p::thread_tmp_369_fu_2239_p2() {
    tmp_369_fu_2239_p2 = (!p_shl2_cast_fu_2220_p1.read().is_01() || !p_shl3_cast_fu_2235_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl2_cast_fu_2220_p1.read()) + sc_biguint<11>(p_shl3_cast_fu_2235_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_370_fu_2160_p2() {
    tmp_370_fu_2160_p2 = (exitcond54_mid_fu_2148_p2.read() | exitcond_flatten8_reg_4116.read());
}

void subconv_1x1_16p_p::thread_tmp_371_fu_2248_p2() {
    tmp_371_fu_2248_p2 = (!h_cast_mid2_cast_fu_2245_p1.read().is_01() || !tmp_369_fu_2239_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h_cast_mid2_cast_fu_2245_p1.read()) + sc_biguint<11>(tmp_369_fu_2239_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_372_fu_2266_p2() {
    tmp_372_fu_2266_p2 = (!tmp_531_fu_2254_p2.read().is_01() || !tmp_532_fu_2260_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_531_fu_2254_p2.read()) + sc_biguint<11>(tmp_532_fu_2260_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_373_fu_2275_p2() {
    tmp_373_fu_2275_p2 = (!w_cast_cast_fu_2272_p1.read().is_01() || !tmp_372_fu_2266_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w_cast_cast_fu_2272_p1.read()) + sc_biguint<11>(tmp_372_fu_2266_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_374_fu_2312_p3() {
    tmp_374_fu_2312_p3 = esl_concat<5,4>(h1_reg_1782.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_375_fu_2324_p3() {
    tmp_375_fu_2324_p3 = esl_concat<5,1>(h1_reg_1782.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_376_fu_2336_p2() {
    tmp_376_fu_2336_p2 = (!p_shl5_cast_fu_2332_p1.read().is_01() || !p_shl4_cast_fu_2320_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl5_cast_fu_2332_p1.read()) + sc_biguint<10>(p_shl4_cast_fu_2320_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_377_fu_2342_p2() {
    tmp_377_fu_2342_p2 = (!tmp_376_fu_2336_p2.read().is_01() || !ap_const_lv10_144.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_376_fu_2336_p2.read()) + sc_biguint<10>(ap_const_lv10_144));
}

void subconv_1x1_16p_p::thread_tmp_378_fu_2689_p3() {
    tmp_378_fu_2689_p3 = esl_concat<5,4>(h4_reg_1817.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_379_fu_2701_p3() {
    tmp_379_fu_2701_p3 = esl_concat<5,1>(h4_reg_1817.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_37_fu_2908_p2() {
    tmp_37_fu_2908_p2 = (!ShuffleConvs_1_Downs_131_reg_4601.read().is_01() || !tmp_547_fu_2904_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_131_reg_4601.read()) + sc_biguint<8>(tmp_547_fu_2904_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_380_fu_2713_p2() {
    tmp_380_fu_2713_p2 = (!p_shl11_cast_fu_2709_p1.read().is_01() || !p_shl10_cast_fu_2697_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl11_cast_fu_2709_p1.read()) + sc_biguint<10>(p_shl10_cast_fu_2697_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_381_fu_2719_p2() {
    tmp_381_fu_2719_p2 = (!tmp_380_fu_2713_p2.read().is_01() || !ap_const_lv10_144.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_380_fu_2713_p2.read()) + sc_biguint<10>(ap_const_lv10_144));
}

void subconv_1x1_16p_p::thread_tmp_382_fu_2362_p2() {
    tmp_382_fu_2362_p2 = (!tmp_376_reg_4178.read().is_01() || !w2_cast_cast_fu_2358_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_376_reg_4178.read()) + sc_biguint<10>(w2_cast_cast_fu_2358_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_383_fu_2377_p2() {
    tmp_383_fu_2377_p2 = (!tmp_377_reg_4183.read().is_01() || !w2_cast_cast_fu_2358_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_377_reg_4183.read()) + sc_biguint<10>(w2_cast_cast_fu_2358_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_384_fu_3066_p3() {
    tmp_384_fu_3066_p3 = esl_concat<5,4>(h8_reg_1852.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_385_fu_3078_p3() {
    tmp_385_fu_3078_p3 = esl_concat<5,1>(h8_reg_1852.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_386_fu_3090_p2() {
    tmp_386_fu_3090_p2 = (!p_shl17_cast_fu_3086_p1.read().is_01() || !p_shl16_cast_fu_3074_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl17_cast_fu_3086_p1.read()) + sc_biguint<10>(p_shl16_cast_fu_3074_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_387_fu_3096_p2() {
    tmp_387_fu_3096_p2 = (!tmp_386_fu_3090_p2.read().is_01() || !ap_const_lv10_144.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_386_fu_3090_p2.read()) + sc_biguint<10>(ap_const_lv10_144));
}

void subconv_1x1_16p_p::thread_tmp_388_fu_2739_p2() {
    tmp_388_fu_2739_p2 = (!tmp_380_reg_4437.read().is_01() || !w5_cast_cast_fu_2735_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_380_reg_4437.read()) + sc_biguint<10>(w5_cast_cast_fu_2735_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_389_fu_2754_p2() {
    tmp_389_fu_2754_p2 = (!tmp_381_reg_4442.read().is_01() || !w5_cast_cast_fu_2735_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_381_reg_4442.read()) + sc_biguint<10>(w5_cast_cast_fu_2735_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_390_fu_2418_p3() {
    tmp_390_fu_2418_p3 = esl_concat<6,4>(ci_reg_1806.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_391_fu_2430_p3() {
    tmp_391_fu_2430_p3 = esl_concat<6,1>(ci_reg_1806.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_392_fu_2442_p2() {
    tmp_392_fu_2442_p2 = (!p_shl8_cast_fu_2426_p1.read().is_01() || !p_shl9_cast_fu_2438_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl8_cast_fu_2426_p1.read()) + sc_biguint<11>(p_shl9_cast_fu_2438_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_393_fu_2448_p2() {
    tmp_393_fu_2448_p2 = (!h1_cast_cast_reg_4173.read().is_01() || !tmp_392_fu_2442_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h1_cast_cast_reg_4173.read()) + sc_biguint<11>(tmp_392_fu_2442_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_394_fu_2473_p2() {
    tmp_394_fu_2473_p2 = (!p_shl6_cast_fu_2453_p3.read().is_01() || !p_shl7_cast_fu_2469_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl6_cast_fu_2453_p3.read()) + sc_biguint<15>(p_shl7_cast_fu_2469_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_395_fu_2479_p2() {
    tmp_395_fu_2479_p2 = (!w2_cast_cast4_reg_4191.read().is_01() || !tmp_394_fu_2473_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w2_cast_cast4_reg_4191.read()) + sc_biguint<15>(tmp_394_fu_2473_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_396_fu_2489_p2() {
    tmp_396_fu_2489_p2 = (!ci_cast_cast_fu_2414_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(ci_cast_cast_fu_2414_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void subconv_1x1_16p_p::thread_tmp_397_fu_3443_p3() {
    tmp_397_fu_3443_p3 = esl_concat<5,4>(h12_reg_1887.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_398_fu_3455_p3() {
    tmp_398_fu_3455_p3 = esl_concat<5,1>(h12_reg_1887.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_399_fu_3467_p2() {
    tmp_399_fu_3467_p2 = (!p_shl23_cast_fu_3463_p1.read().is_01() || !p_shl22_cast_fu_3451_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(p_shl23_cast_fu_3463_p1.read()) + sc_biguint<10>(p_shl22_cast_fu_3451_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_39_fu_2991_p2() {
    tmp_39_fu_2991_p2 = (!ShuffleConvs_1_Downs_3_q0.read().is_01() || !tmp_548_fu_2987_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_3_q0.read()) + sc_biguint<8>(tmp_548_fu_2987_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_400_fu_3473_p2() {
    tmp_400_fu_3473_p2 = (!tmp_399_fu_3467_p2.read().is_01() || !ap_const_lv10_144.is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_399_fu_3467_p2.read()) + sc_biguint<10>(ap_const_lv10_144));
}

void subconv_1x1_16p_p::thread_tmp_401_fu_3116_p2() {
    tmp_401_fu_3116_p2 = (!tmp_386_reg_4696.read().is_01() || !w9_cast7_cast_fu_3112_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_386_reg_4696.read()) + sc_biguint<10>(w9_cast7_cast_fu_3112_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_402_fu_3131_p2() {
    tmp_402_fu_3131_p2 = (!tmp_387_reg_4701.read().is_01() || !w9_cast7_cast_fu_3112_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_387_reg_4701.read()) + sc_biguint<10>(w9_cast7_cast_fu_3112_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_403_fu_2795_p3() {
    tmp_403_fu_2795_p3 = esl_concat<6,4>(ci6_reg_1841.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_404_fu_2807_p3() {
    tmp_404_fu_2807_p3 = esl_concat<6,1>(ci6_reg_1841.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_405_fu_2819_p2() {
    tmp_405_fu_2819_p2 = (!p_shl14_cast_fu_2803_p1.read().is_01() || !p_shl15_cast_fu_2815_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl14_cast_fu_2803_p1.read()) + sc_biguint<11>(p_shl15_cast_fu_2815_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_406_fu_2825_p2() {
    tmp_406_fu_2825_p2 = (!h4_cast_cast_reg_4432.read().is_01() || !tmp_405_fu_2819_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h4_cast_cast_reg_4432.read()) + sc_biguint<11>(tmp_405_fu_2819_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_407_fu_2850_p2() {
    tmp_407_fu_2850_p2 = (!p_shl12_cast_fu_2830_p3.read().is_01() || !p_shl13_cast_fu_2846_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl12_cast_fu_2830_p3.read()) + sc_biguint<15>(p_shl13_cast_fu_2846_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_408_fu_2856_p2() {
    tmp_408_fu_2856_p2 = (!w5_cast_cast4_reg_4450.read().is_01() || !tmp_407_fu_2850_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w5_cast_cast4_reg_4450.read()) + sc_biguint<15>(tmp_407_fu_2850_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_409_fu_2866_p2() {
    tmp_409_fu_2866_p2 = (!ci6_cast9_cast_fu_2791_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(ci6_cast9_cast_fu_2791_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void subconv_1x1_16p_p::thread_tmp_410_fu_3493_p2() {
    tmp_410_fu_3493_p2 = (!tmp_399_reg_4955.read().is_01() || !w13_cast4_cast_fu_3489_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_399_reg_4955.read()) + sc_biguint<10>(w13_cast4_cast_fu_3489_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_411_fu_3508_p2() {
    tmp_411_fu_3508_p2 = (!tmp_400_reg_4960.read().is_01() || !w13_cast4_cast_fu_3489_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(tmp_400_reg_4960.read()) + sc_biguint<10>(w13_cast4_cast_fu_3489_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_412_fu_3172_p3() {
    tmp_412_fu_3172_p3 = esl_concat<6,4>(ci10_reg_1876.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_413_fu_3184_p3() {
    tmp_413_fu_3184_p3 = esl_concat<6,1>(ci10_reg_1876.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_414_fu_3196_p2() {
    tmp_414_fu_3196_p2 = (!p_shl20_cast_fu_3180_p1.read().is_01() || !p_shl21_cast_fu_3192_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl20_cast_fu_3180_p1.read()) + sc_biguint<11>(p_shl21_cast_fu_3192_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_415_fu_3202_p2() {
    tmp_415_fu_3202_p2 = (!h8_cast8_cast_reg_4691.read().is_01() || !tmp_414_fu_3196_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h8_cast8_cast_reg_4691.read()) + sc_biguint<11>(tmp_414_fu_3196_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_416_fu_3227_p2() {
    tmp_416_fu_3227_p2 = (!p_shl18_cast_fu_3207_p3.read().is_01() || !p_shl19_cast_fu_3223_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl18_cast_fu_3207_p3.read()) + sc_biguint<15>(p_shl19_cast_fu_3223_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_417_fu_3233_p2() {
    tmp_417_fu_3233_p2 = (!w9_cast7_cast1_reg_4709.read().is_01() || !tmp_416_fu_3227_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w9_cast7_cast1_reg_4709.read()) + sc_biguint<15>(tmp_416_fu_3227_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_418_fu_3243_p2() {
    tmp_418_fu_3243_p2 = (!ci10_cast6_cast_fu_3168_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(ci10_cast6_cast_fu_3168_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void subconv_1x1_16p_p::thread_tmp_419_fu_3944_p1() {
    tmp_419_fu_3944_p1 = esl_sext<10,7>(tmp_561_fu_3937_p3.read());
}

void subconv_1x1_16p_p::thread_tmp_41_fu_3285_p2() {
    tmp_41_fu_3285_p2 = (!ShuffleConvs_1_Downs_155_reg_4860.read().is_01() || !tmp_566_fu_3281_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_155_reg_4860.read()) + sc_biguint<8>(tmp_566_fu_3281_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_420_fu_3959_p1() {
    tmp_420_fu_3959_p1 = esl_sext<7,4>(tmp_562_fu_3952_p3.read());
}

void subconv_1x1_16p_p::thread_tmp_421_fu_3967_p2() {
    tmp_421_fu_3967_p2 = (!p_shl30_cast_fu_3948_p1.read().is_01() || !p_shl31_cast_fu_3963_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl30_cast_fu_3948_p1.read()) + sc_biguint<11>(p_shl31_cast_fu_3963_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_422_fu_3916_p2() {
    tmp_422_fu_3916_p2 = (exitcond_mid_fu_3904_p2.read() | exitcond_flatten10_reg_5219.read());
}

void subconv_1x1_16p_p::thread_tmp_423_fu_3976_p2() {
    tmp_423_fu_3976_p2 = (!h17_cast2_mid2_cast_fu_3973_p1.read().is_01() || !tmp_421_fu_3967_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h17_cast2_mid2_cast_fu_3973_p1.read()) + sc_biguint<11>(tmp_421_fu_3967_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_424_fu_3994_p2() {
    tmp_424_fu_3994_p2 = (!tmp_563_fu_3982_p2.read().is_01() || !tmp_564_fu_3988_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_563_fu_3982_p2.read()) + sc_biguint<11>(tmp_564_fu_3988_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_425_fu_4003_p2() {
    tmp_425_fu_4003_p2 = (!w18_cast1_cast_fu_4000_p1.read().is_01() || !tmp_424_fu_3994_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(w18_cast1_cast_fu_4000_p1.read()) + sc_biguint<11>(tmp_424_fu_3994_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_426_fu_3549_p3() {
    tmp_426_fu_3549_p3 = esl_concat<6,4>(ci12_reg_1911.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_427_fu_3561_p3() {
    tmp_427_fu_3561_p3 = esl_concat<6,1>(ci12_reg_1911.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_428_cast_fu_2281_p1() {
    tmp_428_cast_fu_2281_p1 = esl_zext<32,11>(tmp_373_reg_4160.read());
}

void subconv_1x1_16p_p::thread_tmp_428_fu_3573_p2() {
    tmp_428_fu_3573_p2 = (!p_shl26_cast_fu_3557_p1.read().is_01() || !p_shl27_cast_fu_3569_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl26_cast_fu_3557_p1.read()) + sc_biguint<11>(p_shl27_cast_fu_3569_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_429_fu_3579_p2() {
    tmp_429_fu_3579_p2 = (!h12_cast5_cast_reg_4950.read().is_01() || !tmp_428_fu_3573_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(h12_cast5_cast_reg_4950.read()) + sc_biguint<11>(tmp_428_fu_3573_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_430_fu_3604_p2() {
    tmp_430_fu_3604_p2 = (!p_shl24_cast_fu_3584_p3.read().is_01() || !p_shl25_cast_fu_3600_p1.read().is_01())? sc_lv<15>(): (sc_biguint<15>(p_shl24_cast_fu_3584_p3.read()) + sc_biguint<15>(p_shl25_cast_fu_3600_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_431_fu_3610_p2() {
    tmp_431_fu_3610_p2 = (!w13_cast4_cast1_reg_4969.read().is_01() || !tmp_430_fu_3604_p2.read().is_01())? sc_lv<15>(): (sc_biguint<15>(w13_cast4_cast1_reg_4969.read()) + sc_biguint<15>(tmp_430_fu_3604_p2.read()));
}

void subconv_1x1_16p_p::thread_tmp_432_fu_3620_p2() {
    tmp_432_fu_3620_p2 = (!ci12_cast3_cast_fu_3545_p1.read().is_01() || !ap_const_lv7_30.is_01())? sc_lv<7>(): (sc_biguint<7>(ci12_cast3_cast_fu_3545_p1.read()) + sc_biguint<7>(ap_const_lv7_30));
}

void subconv_1x1_16p_p::thread_tmp_437_cast_fu_2367_p1() {
    tmp_437_cast_fu_2367_p1 = esl_zext<32,10>(tmp_382_fu_2362_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_438_cast_fu_2382_p1() {
    tmp_438_cast_fu_2382_p1 = esl_zext<32,10>(tmp_383_fu_2377_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_43_fu_3368_p2() {
    tmp_43_fu_3368_p2 = (!ShuffleConvs_1_Downs_19_q0.read().is_01() || !tmp_567_fu_3364_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_19_q0.read()) + sc_biguint<8>(tmp_567_fu_3364_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_443_cast_fu_2744_p1() {
    tmp_443_cast_fu_2744_p1 = esl_zext<32,10>(tmp_388_fu_2739_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_444_cast_fu_2759_p1() {
    tmp_444_cast_fu_2759_p1 = esl_zext<32,10>(tmp_389_fu_2754_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_452_cast_fu_2484_p1() {
    tmp_452_cast_fu_2484_p1 = esl_zext<32,15>(tmp_395_fu_2479_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_453_cast_fu_2495_p1() {
    tmp_453_cast_fu_2495_p1 = esl_zext<32,7>(tmp_396_fu_2489_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_458_cast_fu_3121_p1() {
    tmp_458_cast_fu_3121_p1 = esl_zext<32,10>(tmp_401_fu_3116_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_459_cast_fu_3136_p1() {
    tmp_459_cast_fu_3136_p1 = esl_zext<32,10>(tmp_402_fu_3131_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_45_fu_3662_p2() {
    tmp_45_fu_3662_p2 = (!ShuffleConvs_1_Downs_179_reg_5120.read().is_01() || !tmp_579_fu_3658_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_179_reg_5120.read()) + sc_biguint<8>(tmp_579_fu_3658_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_467_cast_fu_2861_p1() {
    tmp_467_cast_fu_2861_p1 = esl_zext<32,15>(tmp_408_fu_2856_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_468_cast_fu_2872_p1() {
    tmp_468_cast_fu_2872_p1 = esl_zext<32,7>(tmp_409_fu_2866_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_469_cast_fu_3498_p1() {
    tmp_469_cast_fu_3498_p1 = esl_zext<32,10>(tmp_410_fu_3493_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_470_cast_fu_3513_p1() {
    tmp_470_cast_fu_3513_p1 = esl_zext<32,10>(tmp_411_fu_3508_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_478_cast_fu_3238_p1() {
    tmp_478_cast_fu_3238_p1 = esl_zext<32,15>(tmp_417_fu_3233_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_479_cast_fu_3249_p1() {
    tmp_479_cast_fu_3249_p1 = esl_zext<32,7>(tmp_418_fu_3243_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_47_fu_3745_p2() {
    tmp_47_fu_3745_p2 = (!ShuffleConvs_1_Downs_13_q0.read().is_01() || !tmp_580_fu_3741_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_13_q0.read()) + sc_biguint<8>(tmp_580_fu_3741_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_48_fu_4045_p25() {
    tmp_48_fu_4045_p25 = esl_zext<32,6>(grp_fu_3869_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_490_cast_fu_4014_p1() {
    tmp_490_cast_fu_4014_p1 = esl_zext<32,11>(ap_reg_pp1_iter8_tmp_425_reg_5256.read());
}

void subconv_1x1_16p_p::thread_tmp_498_cast_fu_3615_p1() {
    tmp_498_cast_fu_3615_p1 = esl_zext<32,15>(tmp_431_fu_3610_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_499_cast_fu_3626_p1() {
    tmp_499_cast_fu_3626_p1 = esl_zext<32,7>(tmp_432_fu_3620_p2.read());
}

void subconv_1x1_16p_p::thread_tmp_529_fu_2209_p3() {
    tmp_529_fu_2209_p3 = esl_concat<3,4>(tmp_528_reg_4154.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_530_fu_2224_p3() {
    tmp_530_fu_2224_p3 = esl_concat<3,1>(tmp_528_reg_4154.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_531_fu_2254_p2() {
    tmp_531_fu_2254_p2 = (!ap_const_lv11_4.is_01())? sc_lv<11>(): tmp_371_fu_2248_p2.read() << (unsigned short)ap_const_lv11_4.to_uint();
}

void subconv_1x1_16p_p::thread_tmp_532_fu_2260_p2() {
    tmp_532_fu_2260_p2 = (!ap_const_lv11_1.is_01())? sc_lv<11>(): tmp_371_fu_2248_p2.read() << (unsigned short)ap_const_lv11_1.to_uint();
}

void subconv_1x1_16p_p::thread_tmp_533_fu_2461_p3() {
    tmp_533_fu_2461_p3 = esl_concat<11,1>(tmp_393_fu_2448_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_534_fu_2527_p1() {
    tmp_534_fu_2527_p1 = grp_MUL_DP_fu_1979_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_535_fu_2610_p1() {
    tmp_535_fu_2610_p1 = MUL_DP_ret118_reg_4372_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_536_fu_2541_p1() {
    tmp_536_fu_2541_p1 = grp_MUL_DP_fu_1988_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_537_fu_2623_p1() {
    tmp_537_fu_2623_p1 = MUL_DP_ret119_reg_4377_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_538_fu_2555_p1() {
    tmp_538_fu_2555_p1 = grp_MUL_DP_fu_1997_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_539_fu_2636_p1() {
    tmp_539_fu_2636_p1 = MUL_DP_ret120_reg_4382_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_540_fu_2569_p1() {
    tmp_540_fu_2569_p1 = grp_MUL_DP_fu_2006_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_541_fu_2649_p1() {
    tmp_541_fu_2649_p1 = MUL_DP_ret121_reg_4387_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_542_fu_2583_p1() {
    tmp_542_fu_2583_p1 = grp_MUL_DP_fu_2015_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_543_fu_2662_p1() {
    tmp_543_fu_2662_p1 = MUL_DP_ret122_reg_4392_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_544_fu_2597_p1() {
    tmp_544_fu_2597_p1 = grp_MUL_DP_fu_2024_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_545_fu_2675_p1() {
    tmp_545_fu_2675_p1 = MUL_DP_ret123_reg_4397_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_546_fu_2838_p3() {
    tmp_546_fu_2838_p3 = esl_concat<11,1>(tmp_406_fu_2825_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_547_fu_2904_p1() {
    tmp_547_fu_2904_p1 = grp_MUL_DP_fu_1979_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_548_fu_2987_p1() {
    tmp_548_fu_2987_p1 = MUL_DP_ret124_reg_4631_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_549_fu_2918_p1() {
    tmp_549_fu_2918_p1 = grp_MUL_DP_fu_1988_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_550_fu_3000_p1() {
    tmp_550_fu_3000_p1 = MUL_DP_ret125_reg_4636_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_551_fu_2932_p1() {
    tmp_551_fu_2932_p1 = grp_MUL_DP_fu_1997_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_552_fu_3013_p1() {
    tmp_552_fu_3013_p1 = MUL_DP_ret126_reg_4641_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_553_fu_2946_p1() {
    tmp_553_fu_2946_p1 = grp_MUL_DP_fu_2006_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_554_fu_3026_p1() {
    tmp_554_fu_3026_p1 = MUL_DP_ret127_reg_4646_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_555_fu_2960_p1() {
    tmp_555_fu_2960_p1 = grp_MUL_DP_fu_2015_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_556_fu_3039_p1() {
    tmp_556_fu_3039_p1 = MUL_DP_ret128_reg_4651_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_557_fu_2974_p1() {
    tmp_557_fu_2974_p1 = grp_MUL_DP_fu_2024_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_558_fu_3052_p1() {
    tmp_558_fu_3052_p1 = MUL_DP_ret129_reg_4656_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_559_fu_3215_p3() {
    tmp_559_fu_3215_p3 = esl_concat<11,1>(tmp_415_fu_3202_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_561_fu_3937_p3() {
    tmp_561_fu_3937_p3 = esl_concat<3,4>(tmp_560_reg_5238.read(), ap_const_lv4_0);
}

void subconv_1x1_16p_p::thread_tmp_562_fu_3952_p3() {
    tmp_562_fu_3952_p3 = esl_concat<3,1>(tmp_560_reg_5238.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_563_fu_3982_p2() {
    tmp_563_fu_3982_p2 = (!ap_const_lv11_4.is_01())? sc_lv<11>(): tmp_423_fu_3976_p2.read() << (unsigned short)ap_const_lv11_4.to_uint();
}

void subconv_1x1_16p_p::thread_tmp_564_fu_3988_p2() {
    tmp_564_fu_3988_p2 = (!ap_const_lv11_1.is_01())? sc_lv<11>(): tmp_423_fu_3976_p2.read() << (unsigned short)ap_const_lv11_1.to_uint();
}

void subconv_1x1_16p_p::thread_tmp_565_fu_4099_p3() {
    tmp_565_fu_4099_p3 = tmp_48_fu_4045_p26.read().range(7, 7);
}

void subconv_1x1_16p_p::thread_tmp_566_fu_3281_p1() {
    tmp_566_fu_3281_p1 = grp_MUL_DP_fu_1979_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_567_fu_3364_p1() {
    tmp_567_fu_3364_p1 = MUL_DP_ret130_reg_4890_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_568_fu_3295_p1() {
    tmp_568_fu_3295_p1 = grp_MUL_DP_fu_1988_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_569_fu_3377_p1() {
    tmp_569_fu_3377_p1 = MUL_DP_ret131_reg_4895_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_56_1_fu_2545_p2() {
    tmp_56_1_fu_2545_p2 = (!ShuffleConvs_1_Downs_109_reg_4347.read().is_01() || !tmp_536_fu_2541_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_109_reg_4347.read()) + sc_biguint<8>(tmp_536_fu_2541_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_2_fu_2559_p2() {
    tmp_56_2_fu_2559_p2 = (!ShuffleConvs_1_Downs_111_reg_4352.read().is_01() || !tmp_538_fu_2555_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_111_reg_4352.read()) + sc_biguint<8>(tmp_538_fu_2555_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_3_fu_2573_p2() {
    tmp_56_3_fu_2573_p2 = (!ShuffleConvs_1_Downs_113_reg_4357.read().is_01() || !tmp_540_fu_2569_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_113_reg_4357.read()) + sc_biguint<8>(tmp_540_fu_2569_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_4_fu_2587_p2() {
    tmp_56_4_fu_2587_p2 = (!ShuffleConvs_1_Downs_115_reg_4362.read().is_01() || !tmp_542_fu_2583_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_115_reg_4362.read()) + sc_biguint<8>(tmp_542_fu_2583_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_56_5_fu_2601_p2() {
    tmp_56_5_fu_2601_p2 = (!ShuffleConvs_1_Downs_117_reg_4367.read().is_01() || !tmp_544_fu_2597_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_117_reg_4367.read()) + sc_biguint<8>(tmp_544_fu_2597_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_570_fu_3309_p1() {
    tmp_570_fu_3309_p1 = grp_MUL_DP_fu_1997_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_571_fu_3390_p1() {
    tmp_571_fu_3390_p1 = MUL_DP_ret132_reg_4900_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_572_fu_3323_p1() {
    tmp_572_fu_3323_p1 = grp_MUL_DP_fu_2006_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_573_fu_3403_p1() {
    tmp_573_fu_3403_p1 = MUL_DP_ret133_reg_4905_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_574_fu_3337_p1() {
    tmp_574_fu_3337_p1 = grp_MUL_DP_fu_2015_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_575_fu_3416_p1() {
    tmp_575_fu_3416_p1 = MUL_DP_ret134_reg_4910_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_576_fu_3351_p1() {
    tmp_576_fu_3351_p1 = grp_MUL_DP_fu_2024_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_577_fu_3429_p1() {
    tmp_577_fu_3429_p1 = MUL_DP_ret135_reg_4915_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_578_fu_3592_p3() {
    tmp_578_fu_3592_p3 = esl_concat<11,1>(tmp_429_fu_3579_p2.read(), ap_const_lv1_0);
}

void subconv_1x1_16p_p::thread_tmp_579_fu_3658_p1() {
    tmp_579_fu_3658_p1 = grp_MUL_DP_fu_1979_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_580_fu_3741_p1() {
    tmp_580_fu_3741_p1 = MUL_DP_ret136_reg_5150_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_581_fu_3672_p1() {
    tmp_581_fu_3672_p1 = grp_MUL_DP_fu_1988_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_582_fu_3754_p1() {
    tmp_582_fu_3754_p1 = MUL_DP_ret137_reg_5155_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_583_fu_3686_p1() {
    tmp_583_fu_3686_p1 = grp_MUL_DP_fu_1997_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_584_fu_3767_p1() {
    tmp_584_fu_3767_p1 = MUL_DP_ret138_reg_5160_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_585_fu_3700_p1() {
    tmp_585_fu_3700_p1 = grp_MUL_DP_fu_2006_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_586_fu_3780_p1() {
    tmp_586_fu_3780_p1 = MUL_DP_ret139_reg_5165_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_587_fu_3714_p1() {
    tmp_587_fu_3714_p1 = grp_MUL_DP_fu_2015_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_588_fu_3793_p1() {
    tmp_588_fu_3793_p1 = MUL_DP_ret140_reg_5170_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_589_fu_3728_p1() {
    tmp_589_fu_3728_p1 = grp_MUL_DP_fu_2024_ap_return_0.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_58_1_fu_2627_p2() {
    tmp_58_1_fu_2627_p2 = (!ShuffleConvs_1_Downs_22_q0.read().is_01() || !tmp_537_fu_2623_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_22_q0.read()) + sc_biguint<8>(tmp_537_fu_2623_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_2_fu_2640_p2() {
    tmp_58_2_fu_2640_p2 = (!ShuffleConvs_1_Downs_11_q0.read().is_01() || !tmp_539_fu_2636_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_11_q0.read()) + sc_biguint<8>(tmp_539_fu_2636_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_3_fu_2653_p2() {
    tmp_58_3_fu_2653_p2 = (!ShuffleConvs_1_Downs_6_q0.read().is_01() || !tmp_541_fu_2649_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_6_q0.read()) + sc_biguint<8>(tmp_541_fu_2649_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_4_fu_2666_p2() {
    tmp_58_4_fu_2666_p2 = (!ShuffleConvs_1_Downs_5_q0.read().is_01() || !tmp_543_fu_2662_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_5_q0.read()) + sc_biguint<8>(tmp_543_fu_2662_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_58_5_fu_2679_p2() {
    tmp_58_5_fu_2679_p2 = (!ShuffleConvs_1_Downs_4_q0.read().is_01() || !tmp_545_fu_2675_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_4_q0.read()) + sc_biguint<8>(tmp_545_fu_2675_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_590_fu_3806_p1() {
    tmp_590_fu_3806_p1 = MUL_DP_ret_reg_5175_1.read().range(8-1, 0);
}

void subconv_1x1_16p_p::thread_tmp_61_1_fu_2922_p2() {
    tmp_61_1_fu_2922_p2 = (!ShuffleConvs_1_Downs_133_reg_4606.read().is_01() || !tmp_549_fu_2918_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_133_reg_4606.read()) + sc_biguint<8>(tmp_549_fu_2918_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_2_fu_2936_p2() {
    tmp_61_2_fu_2936_p2 = (!ShuffleConvs_1_Downs_135_reg_4611.read().is_01() || !tmp_551_fu_2932_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_135_reg_4611.read()) + sc_biguint<8>(tmp_551_fu_2932_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_3_fu_2950_p2() {
    tmp_61_3_fu_2950_p2 = (!ShuffleConvs_1_Downs_137_reg_4616.read().is_01() || !tmp_553_fu_2946_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_137_reg_4616.read()) + sc_biguint<8>(tmp_553_fu_2946_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_4_fu_2964_p2() {
    tmp_61_4_fu_2964_p2 = (!ShuffleConvs_1_Downs_139_reg_4621.read().is_01() || !tmp_555_fu_2960_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_139_reg_4621.read()) + sc_biguint<8>(tmp_555_fu_2960_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_61_5_fu_2978_p2() {
    tmp_61_5_fu_2978_p2 = (!ShuffleConvs_1_Downs_141_reg_4626.read().is_01() || !tmp_557_fu_2974_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_141_reg_4626.read()) + sc_biguint<8>(tmp_557_fu_2974_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_1_fu_3004_p2() {
    tmp_63_1_fu_3004_p2 = (!ShuffleConvs_1_Downs_2_q0.read().is_01() || !tmp_550_fu_3000_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_2_q0.read()) + sc_biguint<8>(tmp_550_fu_3000_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_2_fu_3017_p2() {
    tmp_63_2_fu_3017_p2 = (!ShuffleConvs_1_Downs_1_q0.read().is_01() || !tmp_552_fu_3013_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_1_q0.read()) + sc_biguint<8>(tmp_552_fu_3013_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_3_fu_3030_p2() {
    tmp_63_3_fu_3030_p2 = (!ShuffleConvs_1_Downs_q0.read().is_01() || !tmp_554_fu_3026_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_q0.read()) + sc_biguint<8>(tmp_554_fu_3026_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_4_fu_3043_p2() {
    tmp_63_4_fu_3043_p2 = (!ShuffleConvs_1_Downs_21_q0.read().is_01() || !tmp_556_fu_3039_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_21_q0.read()) + sc_biguint<8>(tmp_556_fu_3039_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_63_5_fu_3056_p2() {
    tmp_63_5_fu_3056_p2 = (!ShuffleConvs_1_Downs_20_q0.read().is_01() || !tmp_558_fu_3052_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_20_q0.read()) + sc_biguint<8>(tmp_558_fu_3052_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_1_fu_3299_p2() {
    tmp_66_1_fu_3299_p2 = (!ShuffleConvs_1_Downs_157_reg_4865.read().is_01() || !tmp_568_fu_3295_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_157_reg_4865.read()) + sc_biguint<8>(tmp_568_fu_3295_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_2_fu_3313_p2() {
    tmp_66_2_fu_3313_p2 = (!ShuffleConvs_1_Downs_159_reg_4870.read().is_01() || !tmp_570_fu_3309_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_159_reg_4870.read()) + sc_biguint<8>(tmp_570_fu_3309_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_3_fu_3327_p2() {
    tmp_66_3_fu_3327_p2 = (!ShuffleConvs_1_Downs_161_reg_4875.read().is_01() || !tmp_572_fu_3323_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_161_reg_4875.read()) + sc_biguint<8>(tmp_572_fu_3323_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_4_fu_3341_p2() {
    tmp_66_4_fu_3341_p2 = (!ShuffleConvs_1_Downs_163_reg_4880.read().is_01() || !tmp_574_fu_3337_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_163_reg_4880.read()) + sc_biguint<8>(tmp_574_fu_3337_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_66_5_fu_3355_p2() {
    tmp_66_5_fu_3355_p2 = (!ShuffleConvs_1_Downs_165_reg_4885.read().is_01() || !tmp_576_fu_3351_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_165_reg_4885.read()) + sc_biguint<8>(tmp_576_fu_3351_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_1_fu_3381_p2() {
    tmp_68_1_fu_3381_p2 = (!ShuffleConvs_1_Downs_18_q0.read().is_01() || !tmp_569_fu_3377_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_18_q0.read()) + sc_biguint<8>(tmp_569_fu_3377_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_2_fu_3394_p2() {
    tmp_68_2_fu_3394_p2 = (!ShuffleConvs_1_Downs_17_q0.read().is_01() || !tmp_571_fu_3390_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_17_q0.read()) + sc_biguint<8>(tmp_571_fu_3390_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_3_fu_3407_p2() {
    tmp_68_3_fu_3407_p2 = (!ShuffleConvs_1_Downs_16_q0.read().is_01() || !tmp_573_fu_3403_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_16_q0.read()) + sc_biguint<8>(tmp_573_fu_3403_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_4_fu_3420_p2() {
    tmp_68_4_fu_3420_p2 = (!ShuffleConvs_1_Downs_15_q0.read().is_01() || !tmp_575_fu_3416_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_15_q0.read()) + sc_biguint<8>(tmp_575_fu_3416_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_68_5_fu_3433_p2() {
    tmp_68_5_fu_3433_p2 = (!ShuffleConvs_1_Downs_14_q0.read().is_01() || !tmp_577_fu_3429_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_14_q0.read()) + sc_biguint<8>(tmp_577_fu_3429_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_1_fu_3676_p2() {
    tmp_72_1_fu_3676_p2 = (!ShuffleConvs_1_Downs_181_reg_5125.read().is_01() || !tmp_581_fu_3672_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_181_reg_5125.read()) + sc_biguint<8>(tmp_581_fu_3672_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_2_fu_3690_p2() {
    tmp_72_2_fu_3690_p2 = (!ShuffleConvs_1_Downs_183_reg_5130.read().is_01() || !tmp_583_fu_3686_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_183_reg_5130.read()) + sc_biguint<8>(tmp_583_fu_3686_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_3_fu_3704_p2() {
    tmp_72_3_fu_3704_p2 = (!ShuffleConvs_1_Downs_185_reg_5135.read().is_01() || !tmp_585_fu_3700_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_185_reg_5135.read()) + sc_biguint<8>(tmp_585_fu_3700_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_4_fu_3718_p2() {
    tmp_72_4_fu_3718_p2 = (!ShuffleConvs_1_Downs_187_reg_5140.read().is_01() || !tmp_587_fu_3714_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_187_reg_5140.read()) + sc_biguint<8>(tmp_587_fu_3714_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_72_5_fu_3732_p2() {
    tmp_72_5_fu_3732_p2 = (!ShuffleConvs_1_Downs_189_reg_5145.read().is_01() || !tmp_589_fu_3728_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_189_reg_5145.read()) + sc_biguint<8>(tmp_589_fu_3728_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_1_fu_3758_p2() {
    tmp_74_1_fu_3758_p2 = (!ShuffleConvs_1_Downs_12_q0.read().is_01() || !tmp_582_fu_3754_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_12_q0.read()) + sc_biguint<8>(tmp_582_fu_3754_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_2_fu_3771_p2() {
    tmp_74_2_fu_3771_p2 = (!ShuffleConvs_1_Downs_10_q0.read().is_01() || !tmp_584_fu_3767_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_10_q0.read()) + sc_biguint<8>(tmp_584_fu_3767_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_3_fu_3784_p2() {
    tmp_74_3_fu_3784_p2 = (!ShuffleConvs_1_Downs_9_q0.read().is_01() || !tmp_586_fu_3780_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_9_q0.read()) + sc_biguint<8>(tmp_586_fu_3780_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_4_fu_3797_p2() {
    tmp_74_4_fu_3797_p2 = (!ShuffleConvs_1_Downs_8_q0.read().is_01() || !tmp_588_fu_3793_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_8_q0.read()) + sc_biguint<8>(tmp_588_fu_3793_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_74_5_fu_3810_p2() {
    tmp_74_5_fu_3810_p2 = (!ShuffleConvs_1_Downs_7_q0.read().is_01() || !tmp_590_fu_3806_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ShuffleConvs_1_Downs_7_q0.read()) + sc_biguint<8>(tmp_590_fu_3806_p1.read()));
}

void subconv_1x1_16p_p::thread_tmp_s_fu_2216_p1() {
    tmp_s_fu_2216_p1 = esl_sext<10,7>(tmp_529_fu_2209_p3.read());
}

void subconv_1x1_16p_p::thread_w13_cast4_cast1_fu_3485_p1() {
    w13_cast4_cast1_fu_3485_p1 = esl_zext<15,5>(w13_reg_1899.read());
}

void subconv_1x1_16p_p::thread_w13_cast4_cast_fu_3489_p1() {
    w13_cast4_cast_fu_3489_p1 = esl_zext<10,5>(w13_reg_1899.read());
}

void subconv_1x1_16p_p::thread_w18_cast1_cast_fu_4000_p1() {
    w18_cast1_cast_fu_4000_p1 = esl_zext<11,5>(w18_mid2_reg_5244.read());
}

void subconv_1x1_16p_p::thread_w18_mid2_fu_3921_p3() {
    w18_mid2_fu_3921_p3 = (!tmp_422_fu_3916_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_422_fu_3916_p2.read()[0].to_bool())? ap_const_lv5_1: w18_phi_fu_1971_p4.read());
}

void subconv_1x1_16p_p::thread_w18_phi_fu_1971_p4() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5210.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w18_phi_fu_1971_p4 = w_30_fu_4009_p2.read();
    } else {
        w18_phi_fu_1971_p4 = w18_reg_1967.read();
    }
}

void subconv_1x1_16p_p::thread_w2_cast_cast4_fu_2354_p1() {
    w2_cast_cast4_fu_2354_p1 = esl_zext<15,5>(w2_reg_1794.read());
}

void subconv_1x1_16p_p::thread_w2_cast_cast_fu_2358_p1() {
    w2_cast_cast_fu_2358_p1 = esl_zext<10,5>(w2_reg_1794.read());
}

void subconv_1x1_16p_p::thread_w5_cast_cast4_fu_2731_p1() {
    w5_cast_cast4_fu_2731_p1 = esl_zext<15,5>(w5_reg_1829.read());
}

void subconv_1x1_16p_p::thread_w5_cast_cast_fu_2735_p1() {
    w5_cast_cast_fu_2735_p1 = esl_zext<10,5>(w5_reg_1829.read());
}

void subconv_1x1_16p_p::thread_w9_cast7_cast1_fu_3108_p1() {
    w9_cast7_cast1_fu_3108_p1 = esl_zext<15,5>(w9_reg_1864.read());
}

void subconv_1x1_16p_p::thread_w9_cast7_cast_fu_3112_p1() {
    w9_cast7_cast_fu_3112_p1 = esl_zext<10,5>(w9_reg_1864.read());
}

void subconv_1x1_16p_p::thread_w_25_fu_2181_p2() {
    w_25_fu_2181_p2 = (!w_mid2_reg_4137.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w_mid2_reg_4137.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_26_fu_2517_p2() {
    w_26_fu_2517_p2 = (!w2_reg_1794.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w2_reg_1794.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_27_fu_2894_p2() {
    w_27_fu_2894_p2 = (!w5_reg_1829.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w5_reg_1829.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_28_fu_3271_p2() {
    w_28_fu_3271_p2 = (!w9_reg_1864.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w9_reg_1864.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_29_fu_3648_p2() {
    w_29_fu_3648_p2 = (!w13_reg_1899.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w13_reg_1899.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_30_fu_4009_p2() {
    w_30_fu_4009_p2 = (!w18_mid2_reg_5244.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(w18_mid2_reg_5244.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void subconv_1x1_16p_p::thread_w_cast_cast_fu_2272_p1() {
    w_cast_cast_fu_2272_p1 = esl_zext<11,5>(ap_reg_pp0_iter8_w_mid2_reg_4137.read());
}

void subconv_1x1_16p_p::thread_w_mid2_fu_2165_p3() {
    w_mid2_fu_2165_p3 = (!tmp_370_fu_2160_p2.read()[0].is_01())? sc_lv<5>(): ((tmp_370_fu_2160_p2.read()[0].to_bool())? ap_const_lv5_1: w_phi_fu_1774_p4.read());
}

void subconv_1x1_16p_p::thread_w_phi_fu_1774_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4107.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        w_phi_fu_1774_p4 = w_25_fu_2181_p2.read();
    } else {
        w_phi_fu_1774_p4 = w_reg_1770.read();
    }
}

void subconv_1x1_16p_p::thread_weight_0_V_address0() {
    weight_0_V_address0 = weight_0_V_addr_reg_4269.read();
}

void subconv_1x1_16p_p::thread_weight_0_V_address1() {
    weight_0_V_address1 = weight_0_V_addr_8_reg_4274.read();
}

void subconv_1x1_16p_p::thread_weight_0_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_0_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_0_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_0_V_ce1 = ap_const_logic_1;
    } else {
        weight_0_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_10_V_address0() {
    weight_10_V_address0 = weight_10_V_addr_reg_4568.read();
}

void subconv_1x1_16p_p::thread_weight_10_V_address1() {
    weight_10_V_address1 = weight_10_V_addr_8_reg_4573.read();
}

void subconv_1x1_16p_p::thread_weight_10_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_10_V_ce0 = ap_const_logic_1;
    } else {
        weight_10_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_10_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_10_V_ce1 = ap_const_logic_1;
    } else {
        weight_10_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_11_V_address0() {
    weight_11_V_address0 = weight_11_V_addr_reg_4578.read();
}

void subconv_1x1_16p_p::thread_weight_11_V_address1() {
    weight_11_V_address1 = weight_11_V_addr_8_reg_4583.read();
}

void subconv_1x1_16p_p::thread_weight_11_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_11_V_ce0 = ap_const_logic_1;
    } else {
        weight_11_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_11_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_11_V_ce1 = ap_const_logic_1;
    } else {
        weight_11_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_12_V_address0() {
    weight_12_V_address0 = weight_12_V_addr_reg_4787.read();
}

void subconv_1x1_16p_p::thread_weight_12_V_address1() {
    weight_12_V_address1 = weight_12_V_addr_8_reg_4792.read();
}

void subconv_1x1_16p_p::thread_weight_12_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_12_V_ce0 = ap_const_logic_1;
    } else {
        weight_12_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_12_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_12_V_ce1 = ap_const_logic_1;
    } else {
        weight_12_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_13_V_address0() {
    weight_13_V_address0 = weight_13_V_addr_reg_4797.read();
}

void subconv_1x1_16p_p::thread_weight_13_V_address1() {
    weight_13_V_address1 = weight_13_V_addr_8_reg_4802.read();
}

void subconv_1x1_16p_p::thread_weight_13_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_13_V_ce0 = ap_const_logic_1;
    } else {
        weight_13_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_13_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_13_V_ce1 = ap_const_logic_1;
    } else {
        weight_13_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_14_V_address0() {
    weight_14_V_address0 = weight_14_V_addr_reg_4807.read();
}

void subconv_1x1_16p_p::thread_weight_14_V_address1() {
    weight_14_V_address1 = weight_14_V_addr_8_reg_4812.read();
}

void subconv_1x1_16p_p::thread_weight_14_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_14_V_ce0 = ap_const_logic_1;
    } else {
        weight_14_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_14_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_14_V_ce1 = ap_const_logic_1;
    } else {
        weight_14_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_15_V_address0() {
    weight_15_V_address0 = weight_15_V_addr_reg_4817.read();
}

void subconv_1x1_16p_p::thread_weight_15_V_address1() {
    weight_15_V_address1 = weight_15_V_addr_8_reg_4822.read();
}

void subconv_1x1_16p_p::thread_weight_15_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_15_V_ce0 = ap_const_logic_1;
    } else {
        weight_15_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_15_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_15_V_ce1 = ap_const_logic_1;
    } else {
        weight_15_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_16_V_address0() {
    weight_16_V_address0 = weight_16_V_addr_reg_4827.read();
}

void subconv_1x1_16p_p::thread_weight_16_V_address1() {
    weight_16_V_address1 = weight_16_V_addr_8_reg_4832.read();
}

void subconv_1x1_16p_p::thread_weight_16_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_16_V_ce0 = ap_const_logic_1;
    } else {
        weight_16_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_16_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_16_V_ce1 = ap_const_logic_1;
    } else {
        weight_16_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_17_V_address0() {
    weight_17_V_address0 = weight_17_V_addr_reg_4837.read();
}

void subconv_1x1_16p_p::thread_weight_17_V_address1() {
    weight_17_V_address1 = weight_17_V_addr_8_reg_4842.read();
}

void subconv_1x1_16p_p::thread_weight_17_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_17_V_ce0 = ap_const_logic_1;
    } else {
        weight_17_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_17_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state42.read())) {
        weight_17_V_ce1 = ap_const_logic_1;
    } else {
        weight_17_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_18_V_address0() {
    weight_18_V_address0 = weight_18_V_addr_reg_5047.read();
}

void subconv_1x1_16p_p::thread_weight_18_V_address1() {
    weight_18_V_address1 = weight_18_V_addr_8_reg_5052.read();
}

void subconv_1x1_16p_p::thread_weight_18_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_18_V_ce0 = ap_const_logic_1;
    } else {
        weight_18_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_18_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_18_V_ce1 = ap_const_logic_1;
    } else {
        weight_18_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_19_V_address0() {
    weight_19_V_address0 = weight_19_V_addr_reg_5057.read();
}

void subconv_1x1_16p_p::thread_weight_19_V_address1() {
    weight_19_V_address1 = weight_19_V_addr_8_reg_5062.read();
}

void subconv_1x1_16p_p::thread_weight_19_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_19_V_ce0 = ap_const_logic_1;
    } else {
        weight_19_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_19_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_19_V_ce1 = ap_const_logic_1;
    } else {
        weight_19_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_1_V_address0() {
    weight_1_V_address0 = weight_1_V_addr_reg_4279.read();
}

void subconv_1x1_16p_p::thread_weight_1_V_address1() {
    weight_1_V_address1 = weight_1_V_addr_8_reg_4284.read();
}

void subconv_1x1_16p_p::thread_weight_1_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_1_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_1_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_1_V_ce1 = ap_const_logic_1;
    } else {
        weight_1_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_20_V_address0() {
    weight_20_V_address0 = weight_20_V_addr_reg_5067.read();
}

void subconv_1x1_16p_p::thread_weight_20_V_address1() {
    weight_20_V_address1 = weight_20_V_addr_8_reg_5072.read();
}

void subconv_1x1_16p_p::thread_weight_20_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_20_V_ce0 = ap_const_logic_1;
    } else {
        weight_20_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_20_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_20_V_ce1 = ap_const_logic_1;
    } else {
        weight_20_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_21_V_address0() {
    weight_21_V_address0 = weight_21_V_addr_reg_5077.read();
}

void subconv_1x1_16p_p::thread_weight_21_V_address1() {
    weight_21_V_address1 = weight_21_V_addr_8_reg_5082.read();
}

void subconv_1x1_16p_p::thread_weight_21_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_21_V_ce0 = ap_const_logic_1;
    } else {
        weight_21_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_21_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_21_V_ce1 = ap_const_logic_1;
    } else {
        weight_21_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_22_V_address0() {
    weight_22_V_address0 = weight_22_V_addr_reg_5087.read();
}

void subconv_1x1_16p_p::thread_weight_22_V_address1() {
    weight_22_V_address1 = weight_22_V_addr_8_reg_5092.read();
}

void subconv_1x1_16p_p::thread_weight_22_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_22_V_ce0 = ap_const_logic_1;
    } else {
        weight_22_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_22_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_22_V_ce1 = ap_const_logic_1;
    } else {
        weight_22_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_23_V_address0() {
    weight_23_V_address0 = weight_23_V_addr_reg_5097.read();
}

void subconv_1x1_16p_p::thread_weight_23_V_address1() {
    weight_23_V_address1 = weight_23_V_addr_8_reg_5102.read();
}

void subconv_1x1_16p_p::thread_weight_23_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_23_V_ce0 = ap_const_logic_1;
    } else {
        weight_23_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_23_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state54.read())) {
        weight_23_V_ce1 = ap_const_logic_1;
    } else {
        weight_23_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_2_V_address0() {
    weight_2_V_address0 = weight_2_V_addr_reg_4289.read();
}

void subconv_1x1_16p_p::thread_weight_2_V_address1() {
    weight_2_V_address1 = weight_2_V_addr_8_reg_4294.read();
}

void subconv_1x1_16p_p::thread_weight_2_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_2_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_2_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_2_V_ce1 = ap_const_logic_1;
    } else {
        weight_2_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_3_V_address0() {
    weight_3_V_address0 = weight_3_V_addr_reg_4299.read();
}

void subconv_1x1_16p_p::thread_weight_3_V_address1() {
    weight_3_V_address1 = weight_3_V_addr_8_reg_4304.read();
}

void subconv_1x1_16p_p::thread_weight_3_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_3_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_3_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_3_V_ce1 = ap_const_logic_1;
    } else {
        weight_3_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_4_V_address0() {
    weight_4_V_address0 = weight_4_V_addr_reg_4309.read();
}

void subconv_1x1_16p_p::thread_weight_4_V_address1() {
    weight_4_V_address1 = weight_4_V_addr_8_reg_4314.read();
}

void subconv_1x1_16p_p::thread_weight_4_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_4_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_4_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_4_V_ce1 = ap_const_logic_1;
    } else {
        weight_4_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_5_V_address0() {
    weight_5_V_address0 = weight_5_V_addr_reg_4319.read();
}

void subconv_1x1_16p_p::thread_weight_5_V_address1() {
    weight_5_V_address1 = weight_5_V_addr_8_reg_4324.read();
}

void subconv_1x1_16p_p::thread_weight_5_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_5_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_5_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        weight_5_V_ce1 = ap_const_logic_1;
    } else {
        weight_5_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_6_V_address0() {
    weight_6_V_address0 = weight_6_V_addr_reg_4528.read();
}

void subconv_1x1_16p_p::thread_weight_6_V_address1() {
    weight_6_V_address1 = weight_6_V_addr_8_reg_4533.read();
}

void subconv_1x1_16p_p::thread_weight_6_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_6_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_6_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_6_V_ce1 = ap_const_logic_1;
    } else {
        weight_6_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_7_V_address0() {
    weight_7_V_address0 = weight_7_V_addr_reg_4538.read();
}

void subconv_1x1_16p_p::thread_weight_7_V_address1() {
    weight_7_V_address1 = weight_7_V_addr_8_reg_4543.read();
}

void subconv_1x1_16p_p::thread_weight_7_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_7_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_7_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_7_V_ce1 = ap_const_logic_1;
    } else {
        weight_7_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_8_V_address0() {
    weight_8_V_address0 = weight_8_V_addr_reg_4548.read();
}

void subconv_1x1_16p_p::thread_weight_8_V_address1() {
    weight_8_V_address1 = weight_8_V_addr_8_reg_4553.read();
}

void subconv_1x1_16p_p::thread_weight_8_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_8_V_ce0 = ap_const_logic_1;
    } else {
        weight_8_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_8_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_8_V_ce1 = ap_const_logic_1;
    } else {
        weight_8_V_ce1 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_9_V_address0() {
    weight_9_V_address0 = weight_9_V_addr_reg_4558.read();
}

void subconv_1x1_16p_p::thread_weight_9_V_address1() {
    weight_9_V_address1 = weight_9_V_addr_8_reg_4563.read();
}

void subconv_1x1_16p_p::thread_weight_9_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_9_V_ce0 = ap_const_logic_1;
    } else {
        weight_9_V_ce0 = ap_const_logic_0;
    }
}

void subconv_1x1_16p_p::thread_weight_9_V_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read())) {
        weight_9_V_ce1 = ap_const_logic_1;
    } else {
        weight_9_V_ce1 = ap_const_logic_0;
    }
}

}

