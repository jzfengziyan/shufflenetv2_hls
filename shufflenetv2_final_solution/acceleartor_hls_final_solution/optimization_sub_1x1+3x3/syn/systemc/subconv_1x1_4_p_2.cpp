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
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state24.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
            ap_enable_reg_pp1_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp1_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp1_exit_iter0_state24.read())) {
                ap_enable_reg_pp1_iter1 = (ap_condition_pp1_exit_iter0_state24.read() ^ ap_const_logic_1);
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
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
            ap_enable_reg_pp1_iter3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond21_fu_6639_p2.read()))) {
        ci6_reg_4925 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state23.read())) {
        ci6_reg_4925 = ci_7_reg_9082.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond20_fu_5639_p2.read()))) {
        ci_reg_4890 = ap_const_lv7_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state14.read())) {
        ci_reg_4890 = ci_6_reg_8547.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
        co8_reg_4947 = ap_const_lv7_0;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        co8_reg_4947 = co8_mid2_reg_9114.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_7974.read(), ap_const_lv1_0))) {
        co_reg_4819 = co_cast_mid2_v_reg_7996.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        co_reg_4819 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        h1_reg_4866 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(exitcond20_fu_5639_p2.read(), ap_const_lv1_1))) {
        h1_reg_4866 = h_4_fu_5645_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond18_fu_5568_p2.read()))) {
        h4_reg_4901 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond21_fu_6639_p2.read()))) {
        h4_reg_4901 = h_6_fu_6645_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
        h9_reg_4970 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        h9_reg_4970 = h9_cast2_mid2_reg_9125.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_7974.read(), ap_const_lv1_0))) {
        h_reg_4842 = h_cast_mid2_reg_8006.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        h_reg_4842 = ap_const_lv3_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_5286_p2.read(), ap_const_lv1_0))) {
        indvar_flatten7_reg_4808 = indvar_flatten_next7_fu_5292_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten7_reg_4808 = ap_const_lv11_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
        indvar_flatten8_reg_4936 = ap_const_lv11_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_7530_p2.read()))) {
        indvar_flatten8_reg_4936 = indvar_flatten_next9_fu_7536_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
        indvar_flatten9_reg_4959 = ap_const_lv6_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_7530_p2.read()))) {
        indvar_flatten9_reg_4959 = indvar_flatten_next8_fu_7554_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_5286_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_4831 = indvar_flatten_next_fu_5310_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_4831 = ap_const_lv6_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
        w10_reg_4982 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter2.read()))) {
        w10_reg_4982 = w_21_reg_9132.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond18_fu_5568_p2.read()))) {
        w2_reg_4878 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond22_fu_5792_p2.read()))) {
        w2_reg_4878 = w_19_fu_5804_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond19_fu_6568_p2.read()))) {
        w5_reg_4913 = ap_const_lv3_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, exitcond24_fu_6792_p2.read()))) {
        w5_reg_4913 = w_20_fu_6804_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_7974.read(), ap_const_lv1_0))) {
        w_reg_4854 = w_18_reg_8018.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        w_reg_4854 = ap_const_lv3_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        ap_reg_pp0_iter1_exitcond_flatten7_reg_7974 = exitcond_flatten7_reg_7974.read();
        exitcond_flatten7_reg_7974 = exitcond_flatten7_fu_5286_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0))) {
        ap_reg_pp1_iter1_exitcond_flatten9_reg_9092 = exitcond_flatten9_reg_9092.read();
        exitcond_flatten9_reg_9092 = exitcond_flatten9_fu_7530_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) {
        ap_reg_pp1_iter2_co8_mid2_reg_9114 = co8_mid2_reg_9114.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        buffer1_1_96_4x4_p_V_287_reg_8051 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_288_reg_8056 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_289_reg_8061 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_290_reg_8066 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_291_reg_8071 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_292_reg_8076 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_293_reg_8081 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_294_reg_8086 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_295_reg_8091 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_296_reg_8096 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_297_reg_8101 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_298_reg_8106 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_299_reg_8111 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_300_reg_8116 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_301_reg_8121 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_302_reg_8126 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_303_reg_8131 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_304_reg_8136 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_305_reg_8141 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_306_reg_8146 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_307_reg_8151 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_308_reg_8156 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_309_reg_8161 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_310_reg_8166 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_311_reg_8171 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_312_reg_8176 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_313_reg_8181 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_314_reg_8186 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_315_reg_8191 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_316_reg_8196 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_317_reg_8201 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_318_reg_8206 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_319_reg_8211 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_320_reg_8216 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_321_reg_8221 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_322_reg_8226 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_323_reg_8231 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_324_reg_8236 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_325_reg_8241 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_326_reg_8246 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_327_reg_8251 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_328_reg_8256 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_329_reg_8261 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_330_reg_8266 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_331_reg_8271 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_332_reg_8276 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_333_reg_8281 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        buffer1_1_96_4x4_p_V_334_reg_8286 =  (sc_lv<6>) (tmp_278_cast_fu_5587_p1.read());
        w2_cast8_cast1_reg_8041 = w2_cast8_cast1_fu_5574_p1.read();
        w2_cast8_cast_reg_8046 = w2_cast8_cast_fu_5578_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read())) {
        buffer1_1_96_4x4_p_V_383_reg_8586 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_384_reg_8591 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_385_reg_8596 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_386_reg_8601 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_387_reg_8606 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_388_reg_8611 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_389_reg_8616 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_390_reg_8621 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_391_reg_8626 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_392_reg_8631 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_393_reg_8636 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_394_reg_8641 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_395_reg_8646 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_396_reg_8651 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_397_reg_8656 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_398_reg_8661 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_399_reg_8666 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_400_reg_8671 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_401_reg_8676 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_402_reg_8681 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_403_reg_8686 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_404_reg_8691 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_405_reg_8696 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_406_reg_8701 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_407_reg_8706 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_408_reg_8711 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_409_reg_8716 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_410_reg_8721 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_411_reg_8726 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_412_reg_8731 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_413_reg_8736 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_414_reg_8741 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_415_reg_8746 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_416_reg_8751 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_417_reg_8756 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_418_reg_8761 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_419_reg_8766 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_420_reg_8771 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_421_reg_8776 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_422_reg_8781 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_423_reg_8786 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_424_reg_8791 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_425_reg_8796 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_426_reg_8801 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_427_reg_8806 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_428_reg_8811 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_429_reg_8816 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        buffer1_1_96_4x4_p_V_430_reg_8821 =  (sc_lv<6>) (tmp_279_cast_fu_6587_p1.read());
        w5_cast5_cast1_reg_8576 = w5_cast5_cast1_fu_6574_p1.read();
        w5_cast5_cast_reg_8581 = w5_cast5_cast_fu_6578_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp1_iter1_exitcond_flatten9_reg_9092.read()))) {
        buffer1_1_96_4x4_p_V_479_reg_9137 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_480_reg_9143 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_481_reg_9149 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_482_reg_9155 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_483_reg_9161 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_484_reg_9167 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_485_reg_9173 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_486_reg_9179 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_487_reg_9185 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_488_reg_9191 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_489_reg_9197 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_490_reg_9203 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_491_reg_9209 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_492_reg_9215 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_493_reg_9221 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_494_reg_9227 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_495_reg_9233 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_496_reg_9239 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_497_reg_9245 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_498_reg_9251 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_499_reg_9257 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_500_reg_9263 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_501_reg_9269 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_502_reg_9275 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_503_reg_9281 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_504_reg_9287 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_505_reg_9293 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_506_reg_9299 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_507_reg_9305 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_508_reg_9311 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_509_reg_9317 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_510_reg_9323 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_511_reg_9329 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_512_reg_9335 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_513_reg_9341 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_514_reg_9347 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_515_reg_9353 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_516_reg_9359 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_517_reg_9365 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_518_reg_9371 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_519_reg_9377 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_520_reg_9383 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_521_reg_9389 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_522_reg_9395 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_523_reg_9401 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_524_reg_9407 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_525_reg_9413 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_526_reg_9419 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_527_reg_9425 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_528_reg_9431 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_529_reg_9437 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_530_reg_9443 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_531_reg_9449 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_532_reg_9455 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_533_reg_9461 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_534_reg_9467 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_535_reg_9473 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_536_reg_9479 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_537_reg_9485 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_538_reg_9491 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_539_reg_9497 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_540_reg_9503 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_541_reg_9509 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_542_reg_9515 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_543_reg_9521 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_544_reg_9527 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_545_reg_9533 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_546_reg_9539 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_547_reg_9545 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_548_reg_9551 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_549_reg_9557 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_550_reg_9563 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_551_reg_9569 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_552_reg_9575 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_553_reg_9581 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_554_reg_9587 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_555_reg_9593 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_556_reg_9599 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_557_reg_9605 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_558_reg_9611 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_559_reg_9617 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_560_reg_9623 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_561_reg_9629 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_562_reg_9635 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_563_reg_9641 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_564_reg_9647 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_565_reg_9653 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_566_reg_9659 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_567_reg_9665 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_568_reg_9671 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_569_reg_9677 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_570_reg_9683 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_571_reg_9689 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_572_reg_9695 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_573_reg_9701 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
        buffer1_1_96_4x4_p_V_574_reg_9707 =  (sc_lv<6>) (tmp_294_cast_fu_7669_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ci_6_reg_8547 = ci_6_fu_5798_p2.read();
        input_V_addr_reg_8299 =  (sc_lv<12>) (tmp_287_cast_fu_5749_p1.read());
        weight_0_V_addr_reg_8304 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_10_V_addr_reg_8354 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_11_V_addr_reg_8359 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_12_V_addr_reg_8364 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_13_V_addr_reg_8369 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_14_V_addr_reg_8374 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_15_V_addr_reg_8379 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_16_V_addr_reg_8384 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_17_V_addr_reg_8389 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_18_V_addr_reg_8394 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_19_V_addr_reg_8399 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_1_V_addr_reg_8309 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_20_V_addr_reg_8404 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_21_V_addr_reg_8409 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_22_V_addr_reg_8414 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_23_V_addr_reg_8419 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_2_V_addr_reg_8314 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_3_V_addr_reg_8319 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_48_V_addr_reg_8424 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_49_V_addr_reg_8429 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_4_V_addr_reg_8324 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_50_V_addr_reg_8434 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_51_V_addr_reg_8439 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_52_V_addr_reg_8444 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_53_V_addr_reg_8449 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_54_V_addr_reg_8454 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_55_V_addr_reg_8459 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_56_V_addr_reg_8464 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_57_V_addr_reg_8469 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_58_V_addr_reg_8474 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_59_V_addr_reg_8479 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_5_V_addr_reg_8329 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_60_V_addr_reg_8484 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_61_V_addr_reg_8489 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_62_V_addr_reg_8494 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_63_V_addr_reg_8499 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_64_V_addr_reg_8504 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_65_V_addr_reg_8509 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_66_V_addr_reg_8514 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_67_V_addr_reg_8519 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_68_V_addr_reg_8524 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_69_V_addr_reg_8529 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_6_V_addr_reg_8334 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_70_V_addr_reg_8534 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_71_V_addr_reg_8539 =  (sc_lv<7>) (ci_cast7_fu_5651_p1.read());
        weight_7_V_addr_reg_8339 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_8_V_addr_reg_8344 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
        weight_9_V_addr_reg_8349 =  (sc_lv<7>) (tmp_289_cast_fu_5764_p1.read());
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read())) {
        ci_7_reg_9082 = ci_7_fu_6798_p2.read();
        input_V_addr_4_reg_8834 =  (sc_lv<12>) (tmp_302_cast_fu_6749_p1.read());
        weight_24_V_addr_reg_8839 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_25_V_addr_reg_8844 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_26_V_addr_reg_8849 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_27_V_addr_reg_8854 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_28_V_addr_reg_8859 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_29_V_addr_reg_8864 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_30_V_addr_reg_8869 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_31_V_addr_reg_8874 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_32_V_addr_reg_8879 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_33_V_addr_reg_8884 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_34_V_addr_reg_8889 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_35_V_addr_reg_8894 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_36_V_addr_reg_8899 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_37_V_addr_reg_8904 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_38_V_addr_reg_8909 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_39_V_addr_reg_8914 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_40_V_addr_reg_8919 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_41_V_addr_reg_8924 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_42_V_addr_reg_8929 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_43_V_addr_reg_8934 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_44_V_addr_reg_8939 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_45_V_addr_reg_8944 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_46_V_addr_reg_8949 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_47_V_addr_reg_8954 =  (sc_lv<7>) (tmp_304_cast_fu_6764_p1.read());
        weight_72_V_addr_reg_8959 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_73_V_addr_reg_8964 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_74_V_addr_reg_8969 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_75_V_addr_reg_8974 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_76_V_addr_reg_8979 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_77_V_addr_reg_8984 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_78_V_addr_reg_8989 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_79_V_addr_reg_8994 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_80_V_addr_reg_8999 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_81_V_addr_reg_9004 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_82_V_addr_reg_9009 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_83_V_addr_reg_9014 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_84_V_addr_reg_9019 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_85_V_addr_reg_9024 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_86_V_addr_reg_9029 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_87_V_addr_reg_9034 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_88_V_addr_reg_9039 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_89_V_addr_reg_9044 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_90_V_addr_reg_9049 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_91_V_addr_reg_9054 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_92_V_addr_reg_9059 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_93_V_addr_reg_9064 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_94_V_addr_reg_9069 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
        weight_95_V_addr_reg_9074 =  (sc_lv<7>) (ci6_cast4_fu_6651_p1.read());
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_9092.read()))) {
        co8_mid2_reg_9114 = co8_mid2_fu_7592_p3.read();
        h9_cast2_mid2_reg_9125 = h9_cast2_mid2_fu_7618_p3.read();
        w_21_reg_9132 = w_21_fu_7626_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(exitcond_flatten7_reg_7974.read(), ap_const_lv1_0))) {
        co_cast_mid2_v_reg_7996 = co_cast_mid2_v_fu_5331_p3.read();
        h_cast_mid2_reg_8006 = h_cast_mid2_fu_5379_p3.read();
        w_18_reg_8018 = w_18_fu_5387_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_fu_7530_p2.read()))) {
        exitcond_flatten4_reg_9101 = exitcond_flatten4_fu_7542_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_fu_5286_p2.read(), ap_const_lv1_0))) {
        exitcond_flatten_reg_7983 = exitcond_flatten_fu_5298_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        h1_cast9_cast1_reg_8023 = h1_cast9_cast1_fu_5530_p1.read();
        h1_cast9_cast_reg_8028 = h1_cast9_cast_fu_5534_p1.read();
        tmp_222_reg_8033 = tmp_222_fu_5562_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read())) {
        h4_cast6_cast1_reg_8557 = h4_cast6_cast1_fu_6530_p1.read();
        h4_cast6_cast_reg_8562 = h4_cast6_cast_fu_6534_p1.read();
        tmp_225_reg_8567 = tmp_225_fu_6562_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read()))) {
        reg_5258 = input_V_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten9_reg_9092.read()))) {
        w10_mid2_reg_9120 = w10_mid2_fu_7610_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_reg_7974.read(), ap_const_lv1_0))) {
        w_mid2_reg_8001 = w_mid2_fu_5371_p3.read();
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
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_fu_5286_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond_flatten7_fu_5286_p2.read(), ap_const_lv1_1) && 
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond18_fu_5568_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(exitcond20_fu_5639_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond22_fu_5792_p2.read()))) {
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
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state15.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond19_fu_6568_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state16;
            }
            break;
        case 8192 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state16.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond21_fu_6639_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state15;
            } else {
                ap_NS_fsm = ap_ST_fsm_state17;
            }
            break;
        case 16384 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state17.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond24_fu_6792_p2.read()))) {
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
            if ((!(esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_7530_p2.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter3.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011011.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten9_fu_7530_p2.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp1_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state28;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            }
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<23>) ("XXXXXXXXXXXXXXXXXXXXXXX");
            break;
    }
}

}

