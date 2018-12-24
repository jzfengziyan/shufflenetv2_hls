#include "subconv_1x1_16p_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_16p_p::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state2.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter2 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state42.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state42.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state42.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter2 = ap_enable_reg_pp1_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter3 = ap_enable_reg_pp1_iter2.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
            ap_enable_reg_pp1_iter3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond36_fu_3798_p2.read()))) {
        ci10_reg_2622 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state32.read())) {
        ci10_reg_2622 = ci_11_reg_5388.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond38_fu_4152_p2.read()))) {
        ci12_reg_2657 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state41.read())) {
        ci12_reg_2657 = ci_13_reg_5613.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond33_fu_3444_p2.read()))) {
        ci6_reg_2587 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ci6_reg_2587 = ci_10_reg_5164.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond31_fu_3090_p2.read()))) {
        ci_reg_2552 = ap_const_lv6_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ci_reg_2552 = ci_9_reg_4940.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
        co16_reg_2679 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        co16_reg_2679 = co16_mid2_reg_5705.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4736.read(), ap_const_lv1_0))) {
        co_reg_2481 = co_cast_mid2_v_reg_4758.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        co_reg_2481 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond32_fu_3763_p2.read()))) {
        h12_reg_2633 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond38_fu_4152_p2.read()))) {
        h12_reg_2633 = h_4_fu_4158_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
        h17_reg_2702 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        h17_reg_2702 = h17_cast2_mid2_reg_5717.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        h1_reg_2528 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(exitcond31_fu_3090_p2.read(), ap_const_lv1_1))) {
        h1_reg_2528 = h_9_fu_3096_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond29_fu_3055_p2.read()))) {
        h4_reg_2563 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond33_fu_3444_p2.read()))) {
        h4_reg_2563 = h_1_fu_3450_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond30_fu_3409_p2.read()))) {
        h8_reg_2598 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond36_fu_3798_p2.read()))) {
        h8_reg_2598 = h_2_fu_3804_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4736.read(), ap_const_lv1_0))) {
        h_reg_2504 = h_cast_mid2_reg_4769.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        h_reg_2504 = ap_const_lv5_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_fu_2826_p2.read(), ap_const_lv1_0))) {
        indvar_flatten4_reg_2470 = indvar_flatten_next1_fu_2832_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten4_reg_2470 = ap_const_lv14_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
        indvar_flatten5_reg_2668 = ap_const_lv14_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_4437_p2.read()))) {
        indvar_flatten5_reg_2668 = indvar_flatten_next1_4_fu_4443_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
        indvar_flatten6_reg_2691 = ap_const_lv10_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_4437_p2.read()))) {
        indvar_flatten6_reg_2691 = indvar_flatten_next1_3_fu_4461_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten_fu_2826_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_2493 = indvar_flatten_next_fu_2850_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_2493 = ap_const_lv10_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond35_fu_4117_p2.read()))) {
        w13_reg_2645 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond41_fu_4251_p2.read()))) {
        w13_reg_2645 = w_29_fu_4263_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
        w18_reg_2714 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        w18_reg_2714 = w_30_fu_4622_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond29_fu_3055_p2.read()))) {
        w2_reg_2540 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_fu_3189_p2.read()))) {
        w2_reg_2540 = w_26_fu_3201_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond30_fu_3409_p2.read()))) {
        w5_reg_2575 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond37_fu_3543_p2.read()))) {
        w5_reg_2575 = w_27_fu_3555_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond32_fu_3763_p2.read()))) {
        w9_reg_2610 = ap_const_lv5_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond39_fu_3897_p2.read()))) {
        w9_reg_2610 = w_28_fu_3909_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten_reg_4736.read(), ap_const_lv1_0))) {
        w_reg_2516 = w_25_fu_3016_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        w_reg_2516 = ap_const_lv5_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        ShuffleConvs_1_Downs_191_reg_4804 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_192_reg_4809 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_193_reg_4814 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_194_reg_4819 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_195_reg_4824 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_196_reg_4829 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_197_reg_4834 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_198_reg_4839 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_199_reg_4844 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_200_reg_4849 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_201_reg_4854 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        ShuffleConvs_1_Downs_202_reg_4859 =  (sc_lv<9>) (tmp_338_cast_fu_3074_p1.read());
        w2_cast_cast3_reg_4799 = w2_cast_cast3_fu_3061_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state13.read())) {
        ShuffleConvs_1_Downs_203_reg_4950 = ShuffleConvs_1_Downs_47_q0.read();
        ShuffleConvs_1_Downs_204_reg_4955 = ShuffleConvs_1_Downs_30_q0.read();
        ShuffleConvs_1_Downs_205_reg_4960 = ShuffleConvs_1_Downs_46_q0.read();
        ShuffleConvs_1_Downs_206_reg_4965 = ShuffleConvs_1_Downs_29_q0.read();
        ShuffleConvs_1_Downs_207_reg_4970 = ShuffleConvs_1_Downs_35_q0.read();
        ShuffleConvs_1_Downs_208_reg_4975 = ShuffleConvs_1_Downs_28_q0.read();
        ShuffleConvs_1_Downs_209_reg_4980 = ShuffleConvs_1_Downs_24_q0.read();
        ShuffleConvs_1_Downs_210_reg_4985 = ShuffleConvs_1_Downs_27_q0.read();
        ShuffleConvs_1_Downs_211_reg_4990 = ShuffleConvs_1_Downs_13_q0.read();
        ShuffleConvs_1_Downs_212_reg_4995 = ShuffleConvs_1_Downs_26_q0.read();
        ShuffleConvs_1_Downs_213_reg_5000 = ShuffleConvs_1_Downs_4_q0.read();
        ShuffleConvs_1_Downs_214_reg_5005 = ShuffleConvs_1_Downs_25_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        ShuffleConvs_1_Downs_215_reg_5028 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_216_reg_5033 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_217_reg_5038 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_218_reg_5043 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_219_reg_5048 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_220_reg_5053 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_221_reg_5058 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_222_reg_5063 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_223_reg_5068 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_224_reg_5073 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_225_reg_5078 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        ShuffleConvs_1_Downs_226_reg_5083 =  (sc_lv<9>) (tmp_342_cast_fu_3428_p1.read());
        w5_cast_cast3_reg_5023 = w5_cast_cast3_fu_3415_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read())) {
        ShuffleConvs_1_Downs_227_reg_5174 = ShuffleConvs_1_Downs_3_q0.read();
        ShuffleConvs_1_Downs_228_reg_5179 = ShuffleConvs_1_Downs_23_q0.read();
        ShuffleConvs_1_Downs_229_reg_5184 = ShuffleConvs_1_Downs_2_q0.read();
        ShuffleConvs_1_Downs_230_reg_5189 = ShuffleConvs_1_Downs_22_q0.read();
        ShuffleConvs_1_Downs_231_reg_5194 = ShuffleConvs_1_Downs_1_q0.read();
        ShuffleConvs_1_Downs_232_reg_5199 = ShuffleConvs_1_Downs_21_q0.read();
        ShuffleConvs_1_Downs_233_reg_5204 = ShuffleConvs_1_Downs_q0.read();
        ShuffleConvs_1_Downs_234_reg_5209 = ShuffleConvs_1_Downs_20_q0.read();
        ShuffleConvs_1_Downs_235_reg_5214 = ShuffleConvs_1_Downs_45_q0.read();
        ShuffleConvs_1_Downs_236_reg_5219 = ShuffleConvs_1_Downs_19_q0.read();
        ShuffleConvs_1_Downs_237_reg_5224 = ShuffleConvs_1_Downs_44_q0.read();
        ShuffleConvs_1_Downs_238_reg_5229 = ShuffleConvs_1_Downs_18_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        ShuffleConvs_1_Downs_239_reg_5252 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_240_reg_5257 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_241_reg_5262 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_242_reg_5267 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_243_reg_5272 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_244_reg_5277 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_245_reg_5282 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_246_reg_5287 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_247_reg_5292 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_248_reg_5297 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_249_reg_5302 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        ShuffleConvs_1_Downs_250_reg_5307 =  (sc_lv<9>) (tmp_354_cast_fu_3782_p1.read());
        w9_cast8_cast3_reg_5247 = w9_cast8_cast3_fu_3769_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read())) {
        ShuffleConvs_1_Downs_251_reg_5398 = ShuffleConvs_1_Downs_43_q0.read();
        ShuffleConvs_1_Downs_252_reg_5403 = ShuffleConvs_1_Downs_17_q0.read();
        ShuffleConvs_1_Downs_253_reg_5408 = ShuffleConvs_1_Downs_42_q0.read();
        ShuffleConvs_1_Downs_254_reg_5413 = ShuffleConvs_1_Downs_16_q0.read();
        ShuffleConvs_1_Downs_255_reg_5418 = ShuffleConvs_1_Downs_41_q0.read();
        ShuffleConvs_1_Downs_256_reg_5423 = ShuffleConvs_1_Downs_15_q0.read();
        ShuffleConvs_1_Downs_257_reg_5428 = ShuffleConvs_1_Downs_40_q0.read();
        ShuffleConvs_1_Downs_258_reg_5433 = ShuffleConvs_1_Downs_14_q0.read();
        ShuffleConvs_1_Downs_259_reg_5438 = ShuffleConvs_1_Downs_39_q0.read();
        ShuffleConvs_1_Downs_260_reg_5443 = ShuffleConvs_1_Downs_12_q0.read();
        ShuffleConvs_1_Downs_261_reg_5448 = ShuffleConvs_1_Downs_38_q0.read();
        ShuffleConvs_1_Downs_262_reg_5453 = ShuffleConvs_1_Downs_11_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read())) {
        ShuffleConvs_1_Downs_263_reg_5477 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_264_reg_5482 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_265_reg_5487 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_266_reg_5492 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_267_reg_5497 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_268_reg_5502 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_269_reg_5507 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_270_reg_5512 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_271_reg_5517 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_272_reg_5522 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_273_reg_5527 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        ShuffleConvs_1_Downs_274_reg_5532 =  (sc_lv<9>) (tmp_363_cast_fu_4136_p1.read());
        w13_cast5_cast1_reg_5472 = w13_cast5_cast1_fu_4123_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        ShuffleConvs_1_Downs_275_reg_5623 = ShuffleConvs_1_Downs_37_q0.read();
        ShuffleConvs_1_Downs_276_reg_5628 = ShuffleConvs_1_Downs_10_q0.read();
        ShuffleConvs_1_Downs_277_reg_5633 = ShuffleConvs_1_Downs_36_q0.read();
        ShuffleConvs_1_Downs_278_reg_5638 = ShuffleConvs_1_Downs_9_q0.read();
        ShuffleConvs_1_Downs_279_reg_5643 = ShuffleConvs_1_Downs_34_q0.read();
        ShuffleConvs_1_Downs_280_reg_5648 = ShuffleConvs_1_Downs_8_q0.read();
        ShuffleConvs_1_Downs_281_reg_5653 = ShuffleConvs_1_Downs_33_q0.read();
        ShuffleConvs_1_Downs_282_reg_5658 = ShuffleConvs_1_Downs_7_q0.read();
        ShuffleConvs_1_Downs_283_reg_5663 = ShuffleConvs_1_Downs_32_q0.read();
        ShuffleConvs_1_Downs_284_reg_5668 = ShuffleConvs_1_Downs_6_q0.read();
        ShuffleConvs_1_Downs_285_reg_5673 = ShuffleConvs_1_Downs_31_q0.read();
        ShuffleConvs_1_Downs_286_reg_5678 = ShuffleConvs_1_Downs_5_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_5683.read()))) {
        ShuffleConvs_1_Downs_287_reg_5724 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_288_reg_5730 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_289_reg_5736 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_290_reg_5742 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_291_reg_5748 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_292_reg_5754 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_293_reg_5760 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_294_reg_5766 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_295_reg_5772 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_296_reg_5778 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_297_reg_5784 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_298_reg_5790 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_299_reg_5796 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_300_reg_5802 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_301_reg_5808 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_302_reg_5814 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_303_reg_5820 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_304_reg_5826 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_305_reg_5832 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_306_reg_5838 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_307_reg_5844 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_308_reg_5850 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_309_reg_5856 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_310_reg_5862 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_311_reg_5868 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_312_reg_5874 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_313_reg_5880 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_314_reg_5886 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_315_reg_5892 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_316_reg_5898 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_317_reg_5904 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_318_reg_5910 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_319_reg_5916 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_320_reg_5922 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_321_reg_5928 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_322_reg_5934 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_323_reg_5940 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_324_reg_5946 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_325_reg_5952 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_326_reg_5958 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_327_reg_5964 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_328_reg_5970 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_329_reg_5976 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_330_reg_5982 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_331_reg_5988 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_332_reg_5994 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_333_reg_6000 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
        ShuffleConvs_1_Downs_334_reg_6006 =  (sc_lv<9>) (tmp_376_cast_fu_4570_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        ap_reg_pp0_iter1_exitcond_flatten_reg_4736 = exitcond_flatten_reg_4736.read();
        exitcond_flatten_reg_4736 = exitcond_flatten_fu_2826_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0))) {
        ap_reg_pp1_iter1_exitcond_flatten9_reg_5683 = exitcond_flatten9_reg_5683.read();
        exitcond_flatten9_reg_5683 = exitcond_flatten9_fu_4437_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) {
        ap_reg_pp1_iter2_co16_mid2_reg_5705 = co16_mid2_reg_5705.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ci_10_reg_5164 = ci_10_fu_3549_p2.read();
        input_V_addr_5_reg_5096 =  (sc_lv<14>) (tmp_362_cast_fu_3538_p1.read());
        weight_10_V_addr_reg_5121 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_11_V_addr_reg_5126 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_30_V_addr_reg_5131 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_31_V_addr_reg_5136 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_32_V_addr_reg_5141 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_33_V_addr_reg_5146 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_34_V_addr_reg_5151 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_35_V_addr_reg_5156 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_6_V_addr_reg_5101 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_7_V_addr_reg_5106 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_8_V_addr_reg_5111 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
        weight_9_V_addr_reg_5116 =  (sc_lv<6>) (ci6_cast_fu_3456_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ci_11_reg_5388 = ci_11_fu_3903_p2.read();
        input_V_addr_6_reg_5320 =  (sc_lv<14>) (tmp_371_cast_fu_3892_p1.read());
        weight_12_V_addr_reg_5325 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_13_V_addr_reg_5330 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_14_V_addr_reg_5335 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_15_V_addr_reg_5340 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_16_V_addr_reg_5345 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_17_V_addr_reg_5350 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_36_V_addr_reg_5355 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_37_V_addr_reg_5360 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_38_V_addr_reg_5365 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_39_V_addr_reg_5370 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_40_V_addr_reg_5375 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
        weight_41_V_addr_reg_5380 =  (sc_lv<6>) (ci10_cast7_fu_3810_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        ci_13_reg_5613 = ci_13_fu_4257_p2.read();
        input_V_addr_7_reg_5545 =  (sc_lv<14>) (tmp_384_cast_fu_4246_p1.read());
        weight_18_V_addr_reg_5550 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_19_V_addr_reg_5555 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_20_V_addr_reg_5560 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_21_V_addr_reg_5565 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_22_V_addr_reg_5570 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_23_V_addr_reg_5575 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_42_V_addr_reg_5580 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_43_V_addr_reg_5585 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_44_V_addr_reg_5590 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_45_V_addr_reg_5595 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_46_V_addr_reg_5600 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
        weight_47_V_addr_reg_5605 =  (sc_lv<6>) (ci12_cast4_fu_4164_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ci_9_reg_4940 = ci_9_fu_3195_p2.read();
        input_V_addr_reg_4872 =  (sc_lv<14>) (tmp_350_cast_fu_3184_p1.read());
        weight_0_V_addr_reg_4877 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_1_V_addr_reg_4882 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_24_V_addr_reg_4907 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_25_V_addr_reg_4912 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_26_V_addr_reg_4917 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_27_V_addr_reg_4922 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_28_V_addr_reg_4927 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_29_V_addr_reg_4932 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_2_V_addr_reg_4887 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_3_V_addr_reg_4892 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_4_V_addr_reg_4897 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
        weight_5_V_addr_reg_4902 =  (sc_lv<6>) (ci_cast_fu_3102_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_5683.read()))) {
        co16_mid2_reg_5705 = co16_mid2_fu_4499_p3.read();
        h17_cast2_mid2_reg_5717 = h17_cast2_mid2_fu_4525_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond_flatten_reg_4736.read(), ap_const_lv1_0))) {
        co_cast_mid2_v_reg_4758 = co_cast_mid2_v_fu_2871_p3.read();
        h_cast_mid2_reg_4769 = h_cast_mid2_fu_2919_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_4437_p2.read()))) {
        exitcond_flatten10_reg_5692 = exitcond_flatten10_fu_4449_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_fu_2826_p2.read(), ap_const_lv1_0))) {
        exitcond_flatten8_reg_4745 = exitcond_flatten8_fu_2838_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        h12_cast6_cast_reg_5458 = h12_cast6_cast_fu_4083_p1.read();
        tmp_283_reg_5463 = tmp_283_fu_4111_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        h1_cast_cast_reg_4786 = h1_cast_cast_fu_3021_p1.read();
        tmp_266_reg_4791 = tmp_266_fu_3049_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        h4_cast_cast_reg_5010 = h4_cast_cast_fu_3375_p1.read();
        tmp_269_reg_5015 = tmp_269_fu_3403_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read())) {
        h8_cast9_cast_reg_5234 = h8_cast9_cast_fu_3729_p1.read();
        tmp_273_reg_5239 = tmp_273_fu_3757_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read()))) {
        reg_2816 = input_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_5683.read()))) {
        w18_mid2_reg_5711 = w18_mid2_fu_4517_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_reg_4736.read(), ap_const_lv1_0))) {
        w_mid2_reg_4763 = w_mid2_fu_2911_p3.read();
    }
}

void subconv_1x1_16p_p::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten_fu_2826_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond_flatten_fu_2826_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond29_fu_3055_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(exitcond31_fu_3090_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond34_fu_3189_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state9;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 4096 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond30_fu_3409_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state24;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond33_fu_3444_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond37_fu_3543_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state16;
            } else {
                ap_NS_fsm = ap_ST_fsm_state18;
            }
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 2097152 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state24.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond32_fu_3763_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state33;
            } else {
                ap_NS_fsm = ap_ST_fsm_state25;
            }
            break;
        case 4194304 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond36_fu_3798_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state24;
            } else {
                ap_NS_fsm = ap_ST_fsm_state26;
            }
            break;
        case 8388608 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond39_fu_3897_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state25;
            } else {
                ap_NS_fsm = ap_ST_fsm_state27;
            }
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state28;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state30;
            break;
        case 134217728 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 536870912 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 1073741824 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond35_fu_4117_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state34;
            }
            break;
        case 2147483648 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond38_fu_4152_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state33;
            } else {
                ap_NS_fsm = ap_ST_fsm_state35;
            }
            break;
        case 4294967296 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond41_fu_4251_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state34;
            } else {
                ap_NS_fsm = ap_ST_fsm_state36;
            }
            break;
        case 8589934592 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 17179869184 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 34359738368 : 
            ap_NS_fsm = ap_ST_fsm_state39;
            break;
        case 68719476736 : 
            ap_NS_fsm = ap_ST_fsm_state40;
            break;
        case 137438953472 : 
            ap_NS_fsm = ap_ST_fsm_state41;
            break;
        case 274877906944 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 549755813888 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_4437_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_4437_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state46;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 1099511627776 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<41>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

