#include "subconv_1x1_4_p.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void subconv_1x1_4_p::thread_ap_clk_no_reset_() {
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
        ap_enable_reg_pp0_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter10 = ap_enable_reg_pp0_iter9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter11 = ap_enable_reg_pp0_iter10.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter11 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter4 = ap_enable_reg_pp0_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter5 = ap_enable_reg_pp0_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter6 = ap_enable_reg_pp0_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter7 = ap_enable_reg_pp0_iter6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter8 = ap_enable_reg_pp0_iter7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter9 = ap_enable_reg_pp0_iter8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state39.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state39.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state39.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp1_iter1 = ap_enable_reg_pp1_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter10 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter10 = ap_enable_reg_pp1_iter9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter11 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter11 = ap_enable_reg_pp1_iter10.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
            ap_enable_reg_pp1_iter11 = ap_const_logic_0;
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
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter4 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter4 = ap_enable_reg_pp1_iter3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter5 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter5 = ap_enable_reg_pp1_iter4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter6 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter6 = ap_enable_reg_pp1_iter5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter7 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter7 = ap_enable_reg_pp1_iter6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter8 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter8 = ap_enable_reg_pp1_iter7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter9 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp1_iter9 = ap_enable_reg_pp1_iter8.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond21_fu_4598_p2.read()))) {
        ci6_reg_2577 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state38.read())) {
        ci6_reg_2577 = ci_7_reg_7147.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond20_fu_3607_p2.read()))) {
        ci_reg_2542 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ci_reg_2542 = ci_6_reg_6367.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
        co8_reg_2599 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_7397.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        co8_reg_2599 = arrayNo_cast3_mid2_v_2_reg_7413.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        co_reg_2471 = co_cast_mid2_v_reg_5795.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        co_reg_2471 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        h1_reg_2518 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
                esl_seteq<1,1,1>(exitcond20_fu_3607_p2.read(), ap_const_lv1_1))) {
        h1_reg_2518 = h_4_fu_3613_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond18_fu_3523_p2.read()))) {
        h4_reg_2553 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond21_fu_4598_p2.read()))) {
        h4_reg_2553 = h_6_fu_4604_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
        h9_reg_2621 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_7397.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        h9_reg_2621 = h9_cast2_mid2_reg_7436.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        h_reg_2494 = h_cast_mid2_reg_5808.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        h_reg_2494 = ap_const_lv3_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_3225_p2.read(), ap_const_lv1_0))) {
        indvar_flatten7_reg_2460 = indvar_flatten_next7_fu_3231_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten7_reg_2460 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
        indvar_flatten8_reg_2588 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_5461_p2.read()))) {
        indvar_flatten8_reg_2588 = indvar_flatten_next9_fu_5467_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
        indvar_flatten9_reg_2610 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_5461_p2.read()))) {
        indvar_flatten9_reg_2610 = indvar_flatten_next8_fu_5499_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_3225_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_2483 = indvar_flatten_next_fu_3249_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_2483 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
        w10_reg_2633 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_7397.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        w10_reg_2633 = w_21_reg_7442.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond18_fu_3523_p2.read()))) {
        w2_reg_2530 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond22_fu_3770_p2.read()))) {
        w2_reg_2530 = w_19_fu_3782_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond19_fu_4514_p2.read()))) {
        w5_reg_2565 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond24_fu_4771_p2.read()))) {
        w5_reg_2565 = w_20_fu_4783_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        w_reg_2506 = w_18_reg_5814.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        w_reg_2506 = ap_const_lv3_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state35.read())) {
        MUL_DP_ret100_reg_7182_1 = grp_MUL_DP_fu_2680_ap_return_1.read();
        MUL_DP_ret101_reg_7187_1 = grp_MUL_DP_fu_2687_ap_return_1.read();
        MUL_DP_ret102_reg_7192_1 = grp_MUL_DP_fu_2694_ap_return_1.read();
        MUL_DP_ret103_reg_7197_1 = grp_MUL_DP_fu_2701_ap_return_1.read();
        MUL_DP_ret104_reg_7202_1 = grp_MUL_DP_fu_2708_ap_return_1.read();
        MUL_DP_ret105_reg_7207_1 = grp_MUL_DP_fu_2715_ap_return_1.read();
        MUL_DP_ret106_reg_7212_1 = grp_MUL_DP_fu_2722_ap_return_1.read();
        MUL_DP_ret107_reg_7217_1 = grp_MUL_DP_fu_2729_ap_return_1.read();
        MUL_DP_ret108_reg_7222_1 = grp_MUL_DP_fu_2736_ap_return_1.read();
        MUL_DP_ret109_reg_7227_1 = grp_MUL_DP_fu_2743_ap_return_1.read();
        MUL_DP_ret110_reg_7232_1 = grp_MUL_DP_fu_2750_ap_return_1.read();
        MUL_DP_ret111_reg_7237_1 = grp_MUL_DP_fu_2757_ap_return_1.read();
        MUL_DP_ret112_reg_7242_1 = grp_MUL_DP_fu_2764_ap_return_1.read();
        MUL_DP_ret113_reg_7247_1 = grp_MUL_DP_fu_2771_ap_return_1.read();
        MUL_DP_ret114_reg_7252_1 = grp_MUL_DP_fu_2778_ap_return_1.read();
        MUL_DP_ret115_reg_7257_1 = grp_MUL_DP_fu_2785_ap_return_1.read();
        MUL_DP_ret116_reg_7262_1 = grp_MUL_DP_fu_2792_ap_return_1.read();
        MUL_DP_ret117_reg_7267_1 = grp_MUL_DP_fu_2799_ap_return_1.read();
        MUL_DP_ret95_reg_7157_1 = grp_MUL_DP_fu_2645_ap_return_1.read();
        MUL_DP_ret96_reg_7162_1 = grp_MUL_DP_fu_2652_ap_return_1.read();
        MUL_DP_ret97_reg_7167_1 = grp_MUL_DP_fu_2659_ap_return_1.read();
        MUL_DP_ret98_reg_7172_1 = grp_MUL_DP_fu_2666_ap_return_1.read();
        MUL_DP_ret99_reg_7177_1 = grp_MUL_DP_fu_2673_ap_return_1.read();
        MUL_DP_ret_reg_7272_1 = grp_MUL_DP_fu_2806_ap_return_1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        MUL_DP_ret71_reg_6377_1 = grp_MUL_DP_fu_2645_ap_return_1.read();
        MUL_DP_ret72_reg_6382_1 = grp_MUL_DP_fu_2652_ap_return_1.read();
        MUL_DP_ret73_reg_6387_1 = grp_MUL_DP_fu_2659_ap_return_1.read();
        MUL_DP_ret74_reg_6392_1 = grp_MUL_DP_fu_2666_ap_return_1.read();
        MUL_DP_ret75_reg_6397_1 = grp_MUL_DP_fu_2673_ap_return_1.read();
        MUL_DP_ret76_reg_6402_1 = grp_MUL_DP_fu_2680_ap_return_1.read();
        MUL_DP_ret77_reg_6407_1 = grp_MUL_DP_fu_2687_ap_return_1.read();
        MUL_DP_ret78_reg_6412_1 = grp_MUL_DP_fu_2694_ap_return_1.read();
        MUL_DP_ret79_reg_6417_1 = grp_MUL_DP_fu_2701_ap_return_1.read();
        MUL_DP_ret80_reg_6422_1 = grp_MUL_DP_fu_2708_ap_return_1.read();
        MUL_DP_ret81_reg_6427_1 = grp_MUL_DP_fu_2715_ap_return_1.read();
        MUL_DP_ret82_reg_6432_1 = grp_MUL_DP_fu_2722_ap_return_1.read();
        MUL_DP_ret83_reg_6437_1 = grp_MUL_DP_fu_2729_ap_return_1.read();
        MUL_DP_ret84_reg_6442_1 = grp_MUL_DP_fu_2736_ap_return_1.read();
        MUL_DP_ret85_reg_6447_1 = grp_MUL_DP_fu_2743_ap_return_1.read();
        MUL_DP_ret86_reg_6452_1 = grp_MUL_DP_fu_2750_ap_return_1.read();
        MUL_DP_ret87_reg_6457_1 = grp_MUL_DP_fu_2757_ap_return_1.read();
        MUL_DP_ret88_reg_6462_1 = grp_MUL_DP_fu_2764_ap_return_1.read();
        MUL_DP_ret89_reg_6467_1 = grp_MUL_DP_fu_2771_ap_return_1.read();
        MUL_DP_ret90_reg_6472_1 = grp_MUL_DP_fu_2778_ap_return_1.read();
        MUL_DP_ret91_reg_6477_1 = grp_MUL_DP_fu_2785_ap_return_1.read();
        MUL_DP_ret92_reg_6482_1 = grp_MUL_DP_fu_2792_ap_return_1.read();
        MUL_DP_ret93_reg_6487_1 = grp_MUL_DP_fu_2799_ap_return_1.read();
        MUL_DP_ret94_reg_6492_1 = grp_MUL_DP_fu_2806_ap_return_1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        ap_reg_pp0_iter1_exitcond_flatten7_reg_5773 = exitcond_flatten7_reg_5773.read();
        exitcond_flatten7_reg_5773 = exitcond_flatten7_fu_3225_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) {
        ap_reg_pp0_iter2_co_cast_mid2_v_reg_5795 = co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter2_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter1_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter2_h_cast_mid2_reg_5808 = h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter2_w_mid2_reg_5803 = w_mid2_reg_5803.read();
        ap_reg_pp0_iter3_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter2_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter3_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter2_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter3_h_cast_mid2_reg_5808 = ap_reg_pp0_iter2_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter3_w_mid2_reg_5803 = ap_reg_pp0_iter2_w_mid2_reg_5803.read();
        ap_reg_pp0_iter4_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter3_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter4_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter3_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter4_h_cast_mid2_reg_5808 = ap_reg_pp0_iter3_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter4_w_mid2_reg_5803 = ap_reg_pp0_iter3_w_mid2_reg_5803.read();
        ap_reg_pp0_iter5_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter4_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter5_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter4_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter5_h_cast_mid2_reg_5808 = ap_reg_pp0_iter4_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter5_w_mid2_reg_5803 = ap_reg_pp0_iter4_w_mid2_reg_5803.read();
        ap_reg_pp0_iter6_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter5_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter6_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter5_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter6_h_cast_mid2_reg_5808 = ap_reg_pp0_iter5_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter6_w_mid2_reg_5803 = ap_reg_pp0_iter5_w_mid2_reg_5803.read();
        ap_reg_pp0_iter7_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter6_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter7_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter6_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter7_h_cast_mid2_reg_5808 = ap_reg_pp0_iter6_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter7_w_mid2_reg_5803 = ap_reg_pp0_iter6_w_mid2_reg_5803.read();
        ap_reg_pp0_iter8_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter7_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter8_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter7_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter8_h_cast_mid2_reg_5808 = ap_reg_pp0_iter7_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter8_w_mid2_reg_5803 = ap_reg_pp0_iter7_w_mid2_reg_5803.read();
        ap_reg_pp0_iter9_co_cast_mid2_v_reg_5795 = ap_reg_pp0_iter8_co_cast_mid2_v_reg_5795.read();
        ap_reg_pp0_iter9_exitcond_flatten7_reg_5773 = ap_reg_pp0_iter8_exitcond_flatten7_reg_5773.read();
        ap_reg_pp0_iter9_h_cast_mid2_reg_5808 = ap_reg_pp0_iter8_h_cast_mid2_reg_5808.read();
        ap_reg_pp0_iter9_w_mid2_reg_5803 = ap_reg_pp0_iter8_w_mid2_reg_5803.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0))) {
        ap_reg_pp1_iter1_exitcond_flatten9_reg_7397 = exitcond_flatten9_reg_7397.read();
        exitcond_flatten9_reg_7397 = exitcond_flatten9_fu_5461_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) {
        ap_reg_pp1_iter2_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter1_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter3_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter2_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter3_tmp_342_reg_7447 = tmp_342_reg_7447.read();
        ap_reg_pp1_iter4_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter3_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter4_tmp_342_reg_7447 = ap_reg_pp1_iter3_tmp_342_reg_7447.read();
        ap_reg_pp1_iter5_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter4_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter5_tmp_342_reg_7447 = ap_reg_pp1_iter4_tmp_342_reg_7447.read();
        ap_reg_pp1_iter6_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter5_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter6_tmp_342_reg_7447 = ap_reg_pp1_iter5_tmp_342_reg_7447.read();
        ap_reg_pp1_iter7_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter6_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter7_tmp_342_reg_7447 = ap_reg_pp1_iter6_tmp_342_reg_7447.read();
        ap_reg_pp1_iter8_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter7_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter8_tmp_342_reg_7447 = ap_reg_pp1_iter7_tmp_342_reg_7447.read();
        ap_reg_pp1_iter9_exitcond_flatten9_reg_7397 = ap_reg_pp1_iter8_exitcond_flatten9_reg_7397.read();
        ap_reg_pp1_iter9_tmp_342_reg_7447 = ap_reg_pp1_iter8_tmp_342_reg_7447.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_5461_p2.read()))) {
        arrayNo_cast3_mid2_v_2_reg_7413 = arrayNo_cast3_mid2_v_2_fu_5485_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        buffer1_1_96_4x4_p_V_100_reg_6016 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_101_reg_6021 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_102_reg_6026 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_103_reg_6031 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_104_reg_6036 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_105_reg_6041 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_106_reg_6046 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_107_reg_6051 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_108_reg_6056 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_109_reg_6061 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_110_reg_6066 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_111_reg_6071 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_112_reg_6076 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_113_reg_6081 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_114_reg_6086 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_115_reg_6091 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_116_reg_6096 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_117_reg_6101 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_118_reg_6106 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_71_reg_5871 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_72_reg_5876 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_73_reg_5881 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_74_reg_5886 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_75_reg_5891 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_76_reg_5896 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_77_reg_5901 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_78_reg_5906 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_79_reg_5911 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_80_reg_5916 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_81_reg_5921 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_82_reg_5926 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_83_reg_5931 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_84_reg_5936 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_85_reg_5941 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_86_reg_5946 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_87_reg_5951 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_88_reg_5956 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_89_reg_5961 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_90_reg_5966 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_91_reg_5971 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_92_reg_5976 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_93_reg_5981 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_94_reg_5986 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_95_reg_5991 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_96_reg_5996 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_97_reg_6001 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        buffer1_1_96_4x4_p_V_98_reg_6006 =  (sc_lv<8>) (tmp_359_cast_fu_3579_p1.read());
        buffer1_1_96_4x4_p_V_99_reg_6011 =  (sc_lv<8>) (tmp_358_cast_fu_3546_p1.read());
        w2_cast8_cast1_reg_5861 = w2_cast8_cast1_fu_3529_p1.read();
        w2_cast8_cast2_reg_5866 = w2_cast8_cast2_fu_3533_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        buffer1_1_96_4x4_p_V_167_reg_6651 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_168_reg_6656 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_169_reg_6661 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_170_reg_6666 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_171_reg_6671 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_172_reg_6676 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_173_reg_6681 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_174_reg_6686 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_175_reg_6691 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_176_reg_6696 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_177_reg_6701 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_178_reg_6706 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_179_reg_6711 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_180_reg_6716 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_181_reg_6721 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_182_reg_6726 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_183_reg_6731 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_184_reg_6736 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_185_reg_6741 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_186_reg_6746 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_187_reg_6751 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_188_reg_6756 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_189_reg_6761 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_190_reg_6766 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_191_reg_6771 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_192_reg_6776 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_193_reg_6781 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_194_reg_6786 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_195_reg_6791 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_196_reg_6796 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_197_reg_6801 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_198_reg_6806 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_199_reg_6811 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_200_reg_6816 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_201_reg_6821 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_202_reg_6826 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_203_reg_6831 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_204_reg_6836 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_205_reg_6841 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_206_reg_6846 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_207_reg_6851 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_208_reg_6856 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_209_reg_6861 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_210_reg_6866 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_211_reg_6871 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_212_reg_6876 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        buffer1_1_96_4x4_p_V_213_reg_6881 =  (sc_lv<8>) (tmp_360_cast_fu_4537_p1.read());
        buffer1_1_96_4x4_p_V_214_reg_6886 =  (sc_lv<8>) (tmp_361_cast_fu_4570_p1.read());
        w5_cast5_cast1_reg_6641 = w5_cast5_cast1_fu_4520_p1.read();
        w5_cast5_cast2_reg_6646 = w5_cast5_cast2_fu_4524_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter9_exitcond_flatten9_reg_7397.read()))) {
        buffer1_1_96_4x4_p_V_263_reg_7452 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_264_reg_7458 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_265_reg_7464 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_266_reg_7470 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_267_reg_7476 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_268_reg_7482 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_269_reg_7488 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_270_reg_7494 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_271_reg_7500 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_272_reg_7506 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_273_reg_7512 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_274_reg_7518 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_275_reg_7524 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_276_reg_7530 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_277_reg_7536 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_278_reg_7542 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_279_reg_7548 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_280_reg_7554 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_281_reg_7560 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_282_reg_7566 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_283_reg_7572 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_284_reg_7578 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_285_reg_7584 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
        buffer1_1_96_4x4_p_V_286_reg_7590 =  (sc_lv<8>) (tmp_383_cast_fu_5676_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ci_6_reg_6367 = ci_6_fu_3776_p2.read();
        input_V_addr_reg_6119 =  (sc_lv<12>) (tmp_369_cast_fu_3693_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        ci_7_reg_7147 = ci_7_fu_4777_p2.read();
        input_V_addr_4_reg_6899 =  (sc_lv<12>) (tmp_391_cast_fu_4688_p1.read());
        weight_0_V_addr_6_reg_6904 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_10_V_addr_6_reg_7004 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_11_V_addr_6_reg_7014 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_12_V_addr_6_reg_7024 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_13_V_addr_6_reg_7034 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_14_V_addr_6_reg_7044 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_15_V_addr_6_reg_7054 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_16_V_addr_6_reg_7064 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_17_V_addr_6_reg_7074 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_18_V_addr_6_reg_7084 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_19_V_addr_6_reg_7094 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_1_V_addr_6_reg_6914 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_20_V_addr_6_reg_7104 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_21_V_addr_6_reg_7114 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_22_V_addr_6_reg_7124 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_23_V_addr_6_reg_7134 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_2_V_addr_6_reg_6924 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_3_V_addr_6_reg_6934 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_4_V_addr_6_reg_6944 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_5_V_addr_6_reg_6954 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_6_V_addr_6_reg_6964 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_7_V_addr_6_reg_6974 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_8_V_addr_6_reg_6984 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
        weight_9_V_addr_6_reg_6994 =  (sc_lv<9>) (tmp_394_cast_fu_4709_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        co_cast_mid2_v_reg_5795 = co_cast_mid2_v_fu_3270_p3.read();
        h_cast_mid2_reg_5808 = h_cast_mid2_fu_3319_p3.read();
        w_18_reg_5814 = w_18_fu_3327_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_5461_p2.read()))) {
        exitcond_flatten4_reg_7406 = exitcond_flatten4_fu_5479_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_fu_3225_p2.read(), ap_const_lv1_0))) {
        exitcond_flatten_reg_5782 = exitcond_flatten_fu_3237_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        h1_cast9_cast1_reg_5838 = h1_cast9_cast1_fu_3475_p1.read();
        h1_cast9_cast_reg_5843 = h1_cast9_cast_fu_3479_p1.read();
        tmp_317_reg_5853 = tmp_317_fu_3517_p2.read();
        tmp_351_cast_reg_5848 = tmp_351_cast_fu_3513_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read())) {
        h4_cast6_cast1_reg_6617 = h4_cast6_cast1_fu_4460_p1.read();
        h4_cast6_cast_reg_6622 = h4_cast6_cast_fu_4464_p1.read();
        tmp_321_reg_6627 = tmp_321_fu_4502_p2.read();
        tmp_322_reg_6632 = tmp_322_fu_4508_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_7397.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()))) {
        h9_cast2_mid2_reg_7436 = h9_cast2_mid2_fu_5574_p3.read();
        w_21_reg_7442 = w_21_fu_5582_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state30.read()))) {
        reg_2813 = weight_0_V_q0.read();
        reg_2825 = weight_1_V_q0.read();
        reg_2837 = weight_2_V_q0.read();
        reg_2849 = weight_3_V_q0.read();
        reg_2861 = weight_4_V_q0.read();
        reg_2873 = weight_5_V_q0.read();
        reg_2885 = weight_6_V_q0.read();
        reg_2897 = weight_7_V_q0.read();
        reg_2909 = weight_8_V_q0.read();
        reg_2921 = weight_9_V_q0.read();
        reg_2933 = weight_10_V_q0.read();
        reg_2945 = weight_11_V_q0.read();
        reg_2957 = weight_12_V_q0.read();
        reg_2969 = weight_13_V_q0.read();
        reg_2981 = weight_14_V_q0.read();
        reg_2993 = weight_15_V_q0.read();
        reg_3005 = weight_16_V_q0.read();
        reg_3017 = weight_17_V_q0.read();
        reg_3029 = weight_18_V_q0.read();
        reg_3041 = weight_19_V_q0.read();
        reg_3053 = weight_20_V_q0.read();
        reg_3065 = weight_21_V_q0.read();
        reg_3077 = weight_22_V_q0.read();
        reg_3089 = weight_23_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()))) {
        reg_2819 = weight_0_V_q1.read();
        reg_2831 = weight_1_V_q1.read();
        reg_2843 = weight_2_V_q1.read();
        reg_2855 = weight_3_V_q1.read();
        reg_2867 = weight_4_V_q1.read();
        reg_2879 = weight_5_V_q1.read();
        reg_2891 = weight_6_V_q1.read();
        reg_2903 = weight_7_V_q1.read();
        reg_2915 = weight_8_V_q1.read();
        reg_2927 = weight_9_V_q1.read();
        reg_2939 = weight_10_V_q1.read();
        reg_2951 = weight_11_V_q1.read();
        reg_2963 = weight_12_V_q1.read();
        reg_2975 = weight_13_V_q1.read();
        reg_2987 = weight_14_V_q1.read();
        reg_2999 = weight_15_V_q1.read();
        reg_3011 = weight_16_V_q1.read();
        reg_3023 = weight_17_V_q1.read();
        reg_3035 = weight_18_V_q1.read();
        reg_3047 = weight_19_V_q1.read();
        reg_3059 = weight_20_V_q1.read();
        reg_3071 = weight_21_V_q1.read();
        reg_3083 = weight_22_V_q1.read();
        reg_3095 = weight_23_V_q1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state31.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        reg_3101 = input_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state22.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state34.read()))) {
        reg_3129 = buffer1_1_96_4x4_p_V_24_q0.read();
        reg_3133 = buffer1_1_96_4x4_p_V_1_q0.read();
        reg_3137 = buffer1_1_96_4x4_p_V_2_q0.read();
        reg_3141 = buffer1_1_96_4x4_p_V_3_q0.read();
        reg_3145 = buffer1_1_96_4x4_p_V_4_q0.read();
        reg_3149 = buffer1_1_96_4x4_p_V_5_q0.read();
        reg_3153 = buffer1_1_96_4x4_p_V_6_q0.read();
        reg_3157 = buffer1_1_96_4x4_p_V_7_q0.read();
        reg_3161 = buffer1_1_96_4x4_p_V_8_q0.read();
        reg_3165 = buffer1_1_96_4x4_p_V_9_q0.read();
        reg_3169 = buffer1_1_96_4x4_p_V_10_q0.read();
        reg_3173 = buffer1_1_96_4x4_p_V_11_q0.read();
        reg_3177 = buffer1_1_96_4x4_p_V_12_q0.read();
        reg_3181 = buffer1_1_96_4x4_p_V_13_q0.read();
        reg_3185 = buffer1_1_96_4x4_p_V_14_q0.read();
        reg_3189 = buffer1_1_96_4x4_p_V_15_q0.read();
        reg_3193 = buffer1_1_96_4x4_p_V_16_q0.read();
        reg_3197 = buffer1_1_96_4x4_p_V_17_q0.read();
        reg_3201 = buffer1_1_96_4x4_p_V_18_q0.read();
        reg_3205 = buffer1_1_96_4x4_p_V_19_q0.read();
        reg_3209 = buffer1_1_96_4x4_p_V_20_q0.read();
        reg_3213 = buffer1_1_96_4x4_p_V_21_q0.read();
        reg_3217 = buffer1_1_96_4x4_p_V_22_q0.read();
        reg_3221 = buffer1_1_96_4x4_p_V_23_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        tmp_25_reg_6497 = tmp_25_fu_4155_p2.read();
        tmp_45_10_reg_6552 = tmp_45_10_fu_4298_p2.read();
        tmp_45_11_reg_6557 = tmp_45_11_fu_4311_p2.read();
        tmp_45_12_reg_6562 = tmp_45_12_fu_4324_p2.read();
        tmp_45_13_reg_6567 = tmp_45_13_fu_4337_p2.read();
        tmp_45_14_reg_6572 = tmp_45_14_fu_4350_p2.read();
        tmp_45_15_reg_6577 = tmp_45_15_fu_4363_p2.read();
        tmp_45_16_reg_6582 = tmp_45_16_fu_4376_p2.read();
        tmp_45_17_reg_6587 = tmp_45_17_fu_4389_p2.read();
        tmp_45_18_reg_6592 = tmp_45_18_fu_4402_p2.read();
        tmp_45_19_reg_6597 = tmp_45_19_fu_4415_p2.read();
        tmp_45_1_reg_6502 = tmp_45_1_fu_4168_p2.read();
        tmp_45_20_reg_6602 = tmp_45_20_fu_4428_p2.read();
        tmp_45_21_reg_6607 = tmp_45_21_fu_4441_p2.read();
        tmp_45_22_reg_6612 = tmp_45_22_fu_4454_p2.read();
        tmp_45_2_reg_6507 = tmp_45_2_fu_4181_p2.read();
        tmp_45_3_reg_6512 = tmp_45_3_fu_4194_p2.read();
        tmp_45_4_reg_6517 = tmp_45_4_fu_4207_p2.read();
        tmp_45_5_reg_6522 = tmp_45_5_fu_4220_p2.read();
        tmp_45_6_reg_6527 = tmp_45_6_fu_4233_p2.read();
        tmp_45_7_reg_6532 = tmp_45_7_fu_4246_p2.read();
        tmp_45_8_reg_6537 = tmp_45_8_fu_4259_p2.read();
        tmp_45_9_reg_6542 = tmp_45_9_fu_4272_p2.read();
        tmp_45_s_reg_6547 = tmp_45_s_fu_4285_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state37.read())) {
        tmp_29_reg_7277 = tmp_29_fu_5156_p2.read();
        tmp_51_10_reg_7332 = tmp_51_10_fu_5299_p2.read();
        tmp_51_11_reg_7337 = tmp_51_11_fu_5312_p2.read();
        tmp_51_12_reg_7342 = tmp_51_12_fu_5325_p2.read();
        tmp_51_13_reg_7347 = tmp_51_13_fu_5338_p2.read();
        tmp_51_14_reg_7352 = tmp_51_14_fu_5351_p2.read();
        tmp_51_15_reg_7357 = tmp_51_15_fu_5364_p2.read();
        tmp_51_16_reg_7362 = tmp_51_16_fu_5377_p2.read();
        tmp_51_17_reg_7367 = tmp_51_17_fu_5390_p2.read();
        tmp_51_18_reg_7372 = tmp_51_18_fu_5403_p2.read();
        tmp_51_19_reg_7377 = tmp_51_19_fu_5416_p2.read();
        tmp_51_1_reg_7282 = tmp_51_1_fu_5169_p2.read();
        tmp_51_20_reg_7382 = tmp_51_20_fu_5429_p2.read();
        tmp_51_21_reg_7387 = tmp_51_21_fu_5442_p2.read();
        tmp_51_22_reg_7392 = tmp_51_22_fu_5455_p2.read();
        tmp_51_2_reg_7287 = tmp_51_2_fu_5182_p2.read();
        tmp_51_3_reg_7292 = tmp_51_3_fu_5195_p2.read();
        tmp_51_4_reg_7297 = tmp_51_4_fu_5208_p2.read();
        tmp_51_5_reg_7302 = tmp_51_5_fu_5221_p2.read();
        tmp_51_6_reg_7307 = tmp_51_6_fu_5234_p2.read();
        tmp_51_7_reg_7312 = tmp_51_7_fu_5247_p2.read();
        tmp_51_8_reg_7317 = tmp_51_8_fu_5260_p2.read();
        tmp_51_9_reg_7322 = tmp_51_9_fu_5273_p2.read();
        tmp_51_s_reg_7327 = tmp_51_s_fu_5286_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reg_pp0_iter9_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        tmp_313_reg_5825 = tmp_313_fu_3438_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_7397.read()))) {
        tmp_342_reg_7447 = tmp_342_fu_5670_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reg_pp0_iter8_exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        tmp_367_reg_5819 = mul_fu_3336_p2.read().range(15, 12);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_7397.read()))) {
        tmp_396_reg_7425 = mul3_fu_5522_p2.read().range(15, 12);
        w10_mid2_reg_7431 = w10_mid2_fu_5566_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_reg_5773.read(), ap_const_lv1_0))) {
        w_mid2_reg_5803 = w_mid2_fu_3311_p3.read();
    }
}

void subconv_1x1_4_p::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_fu_3225_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter11.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter10.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond_flatten7_fu_3225_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state14;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond18_fu_3523_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state27;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(exitcond20_fu_3607_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond22_fu_3770_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state16;
            } else {
                ap_NS_fsm = ap_ST_fsm_state18;
            }
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 32768 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state27.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_4514_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state28;
            }
            break;
        case 65536 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond21_fu_4598_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state27;
            } else {
                ap_NS_fsm = ap_ST_fsm_state29;
            }
            break;
        case 131072 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond24_fu_4771_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state28;
            } else {
                ap_NS_fsm = ap_ST_fsm_state30;
            }
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state31;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state32;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state33;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state34;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state35;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state36;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state37;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state38;
            break;
        case 67108864 : 
            ap_NS_fsm = ap_ST_fsm_state29;
            break;
        case 134217728 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter10.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_5461_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter11.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter10.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_5461_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state51;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 268435456 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<29>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

