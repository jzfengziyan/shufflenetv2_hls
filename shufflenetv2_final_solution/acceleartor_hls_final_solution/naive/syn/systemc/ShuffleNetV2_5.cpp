#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_ap_block_state281_ignore_call0() {
    ap_block_state281_ignore_call0 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond50_fu_9260_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state301() {
    ap_block_state301 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond59_fu_9700_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, p3X3_1X1_WEIGHTS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state323() {
    ap_block_state323 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond65_fu_9939_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, p3X3_1X1_WEIGHTS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state332() {
    ap_block_state332 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_9964_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state332_ignore_call0() {
    ap_block_state332_ignore_call0 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond62_fu_9964_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state343() {
    ap_block_state343 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond67_fu_10099_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, p3X3_1X1_WEIGHTS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state352() {
    ap_block_state352 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_10124_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state352_ignore_call0() {
    ap_block_state352_ignore_call0 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond66_fu_10124_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state38() {
    ap_block_state38 = (esl_seteq<1,1,1>(exitcond7_fu_6881_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_INPUT_OUTPUT_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state49() {
    ap_block_state49 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_fu_6985_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, p3X3_1X1_WEIGHTS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state58() {
    ap_block_state58 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_fu_7010_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state58_ignore_call0() {
    ap_block_state58_ignore_call0 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_fu_7010_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state70() {
    ap_block_state70 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond13_fu_7134_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, p3X3_1X1_WEIGHTS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state79() {
    ap_block_state79 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_fu_7155_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state79_ignore_call0() {
    ap_block_state79_ignore_call0 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_fu_7155_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state9() {
    ap_block_state9 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_6681_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state90() {
    ap_block_state90 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond15_fu_7288_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, p3X3_1X1_WEIGHTS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state99() {
    ap_block_state99 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond14_fu_7313_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_block_state99_ignore_call0() {
    ap_block_state99_ignore_call0 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond14_fu_7313_p2.read()) && esl_seteq<1,1,1>(ap_const_logic_0, DATA_BIAS_RVALID.read()));
}

void ShuffleNetV2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1623.read()) && 
         esl_seteq<1,1,1>(grp_fc_fu_6528_ap_done.read(), ap_const_logic_1))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1623.read()) && 
         esl_seteq<1,1,1>(grp_fc_fu_6528_ap_done.read(), ap_const_logic_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ap_return() {
    ap_return = ap_const_lv32_0;
}

void ShuffleNetV2::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void ShuffleNetV2::thread_ap_sig_ioackin_DATA_BIAS_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_BIAS_ARREADY.read())) {
        ap_sig_ioackin_DATA_BIAS_ARREADY = DATA_BIAS_ARREADY.read();
    } else {
        ap_sig_ioackin_DATA_BIAS_ARREADY = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_ap_sig_ioackin_DATA_INPUT_OUTPUT_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_DATA_INPUT_OUTPUT_ARREADY.read())) {
        ap_sig_ioackin_DATA_INPUT_OUTPUT_ARREADY = DATA_INPUT_OUTPUT_ARREADY.read();
    } else {
        ap_sig_ioackin_DATA_INPUT_OUTPUT_ARREADY = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_ap_sig_ioackin_p3X3_1X1_WEIGHTS_ARREADY() {
    if (esl_seteq<1,1,1>(ap_const_logic_0, ap_reg_ioackin_p3X3_1X1_WEIGHTS_ARREADY.read())) {
        ap_sig_ioackin_p3X3_1X1_WEIGHTS_ARREADY = p3X3_1X1_WEIGHTS_ARREADY.read();
    } else {
        ap_sig_ioackin_p3X3_1X1_WEIGHTS_ARREADY = ap_const_logic_1;
    }
}

void ShuffleNetV2::thread_avgpool_output_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1621.read())) {
        avgpool_output_V_address0 = grp_avgpool_fu_6631_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1623.read())) {
        avgpool_output_V_address0 = grp_fc_fu_6528_avgpool_output_V_address0.read();
    } else {
        avgpool_output_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_avgpool_output_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1621.read())) {
        avgpool_output_V_ce0 = grp_avgpool_fu_6631_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1623.read())) {
        avgpool_output_V_ce0 = grp_fc_fu_6528_avgpool_output_V_ce0.read();
    } else {
        avgpool_output_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_avgpool_output_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1621.read())) {
        avgpool_output_V_we0 = grp_avgpool_fu_6631_output_V_we0.read();
    } else {
        avgpool_output_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_323_fu_10136_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_318_fu_9976_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_310_fu_9764_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_301_fu_9272_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_295_fu_9114_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_287_fu_8914_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_278_fu_8434_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_273_fu_8258_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_265_fu_8058_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_258_fu_7697_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_252_fu_7539_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_245_fu_7325_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_239_fu_7167_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read())) {
        bias_24_V_address0 =  (sc_lv<5>) (tmp_232_fu_7022_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        bias_24_V_address0 = grp_subconv_1x1_16_p_fu_6516_bias_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        bias_24_V_address0 = grp_subconv_1x1_32_p_fu_6492_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        bias_24_V_address0 = grp_subconv_3x3_16_no_re_fu_6431_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        bias_24_V_address0 = grp_subconv_3x3_32_strid_fu_6368_bias_V_address0.read();
    } else {
        bias_24_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_bias_24_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()))) {
        bias_24_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        bias_24_V_ce0 = grp_subconv_1x1_16_p_fu_6516_bias_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        bias_24_V_ce0 = grp_subconv_1x1_32_p_fu_6492_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        bias_24_V_ce0 = grp_subconv_3x3_16_no_re_fu_6431_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        bias_24_V_ce0 = grp_subconv_3x3_32_strid_fu_6368_bias_V_ce0.read();
    } else {
        bias_24_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_24_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state59.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state80.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state100.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state144.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state170.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state191.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state212.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state241.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state282.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state312.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state333.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state353.read()))) {
        bias_24_V_we0 = ap_const_logic_1;
    } else {
        bias_24_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_48_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1203.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_769_fu_24002_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_753_fu_23598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_738_fu_23229_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_719_fu_22495_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_703_fu_22091_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1060.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_688_fu_21722_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1025.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_669_fu_20992_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state999.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_653_fu_20600_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_638_fu_20223_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_619_fu_19501_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state910.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_603_fu_19109_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state882.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_588_fu_18736_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state847.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_569_fu_18014_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state821.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_553_fu_17622_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_538_fu_17257_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state758.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_519_fu_16535_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_503_fu_16139_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_488_fu_15770_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_469_fu_15036_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_455_fu_14640_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state615.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_444_fu_14267_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_426_fu_13545_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_412_fu_13153_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_401_fu_12780_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_386_fu_12177_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_371_fu_11781_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_360_fu_11416_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_346_fu_11020_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state384.read())) {
        bias_48_V_address0 =  (sc_lv<6>) (tmp_335_fu_10647_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        bias_48_V_address0 = grp_subconv_1x1_8_p_fu_6504_bias_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        bias_48_V_address0 = grp_subconv_1x1_16p_p_fu_6480_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        bias_48_V_address0 = grp_subconv_3x3_8_no_rel_fu_6419_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        bias_48_V_address0 = grp_subconv_3x3_16_strid_fu_6394_bias_V_address0.read();
    } else {
        bias_48_V_address0 =  (sc_lv<6>) ("XXXXXX");
    }
}

void ShuffleNetV2::thread_bias_48_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state615.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state758.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state821.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state847.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state882.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state910.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1025.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1060.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1203.read()))) {
        bias_48_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        bias_48_V_ce0 = grp_subconv_1x1_8_p_fu_6504_bias_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state385.read())) {
        bias_48_V_ce0 = grp_subconv_1x1_16p_p_fu_6480_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        bias_48_V_ce0 = grp_subconv_3x3_8_no_rel_fu_6419_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        bias_48_V_ce0 = grp_subconv_3x3_16_strid_fu_6394_bias_V_ce0.read();
    } else {
        bias_48_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_48_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state384.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state412.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state438.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state468.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state494.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state526.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state554.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state580.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state615.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state643.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state669.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state732.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state758.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state793.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state821.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state847.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state882.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state910.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state936.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state971.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state999.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1025.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1060.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1088.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1114.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1149.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1177.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1203.read()))) {
        bias_48_V_we0 = ap_const_logic_1;
    } else {
        bias_48_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_96_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1608.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_988_fu_30285_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_972_fu_29905_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1554.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_957_fu_29536_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_938_fu_28822_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1493.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_922_fu_28442_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1465.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_909_fu_28065_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1430.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_889_fu_27351_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1404.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_873_fu_26963_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_862_fu_26598_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1344.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_845_fu_26007_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1318.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_827_fu_25627_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1288.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_816_fu_25262_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1262.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_800_fu_24874_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1234.read())) {
        bias_96_V_address0 =  (sc_lv<7>) (tmp_785_fu_24505_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        bias_96_V_address0 = grp_subconv_1x1_8p_p_fu_6468_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        bias_96_V_address0 = grp_subconv_1x1_4_p_fu_6443_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        bias_96_V_address0 = grp_subconv_3x3_4_no_rel_fu_6407_bias_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        bias_96_V_address0 = grp_subconv_3x3_8_stride_fu_6381_bias_V_address0.read();
    } else {
        bias_96_V_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void ShuffleNetV2::thread_bias_96_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1288.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1465.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1554.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1608.read()))) {
        bias_96_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1235.read())) {
        bias_96_V_ce0 = grp_subconv_1x1_8p_p_fu_6468_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        bias_96_V_ce0 = grp_subconv_1x1_4_p_fu_6443_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        bias_96_V_ce0 = grp_subconv_3x3_4_no_rel_fu_6407_bias_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        bias_96_V_ce0 = grp_subconv_3x3_8_stride_fu_6381_bias_V_ce0.read();
    } else {
        bias_96_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_96_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1234.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1262.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1288.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1318.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1344.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1376.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1404.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1430.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1465.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1493.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1519.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1554.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1582.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1608.read()))) {
        bias_96_V_we0 = ap_const_logic_1;
    } else {
        bias_96_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_bias_V14_sum10_fu_15018_p2() {
    bias_V14_sum10_fu_15018_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_471_cast_fu_15014_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_471_cast_fu_15014_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum11_fu_15752_p2() {
    bias_V14_sum11_fu_15752_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_491_cast_fu_15748_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_491_cast_fu_15748_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum12_fu_16121_p2() {
    bias_V14_sum12_fu_16121_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_505_cast_fu_16117_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_505_cast_fu_16117_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum13_fu_16517_p2() {
    bias_V14_sum13_fu_16517_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_521_cast_fu_16514_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_521_cast_fu_16514_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum14_fu_17239_p2() {
    bias_V14_sum14_fu_17239_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_541_cast_fu_17236_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_541_cast_fu_17236_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum15_fu_17604_p2() {
    bias_V14_sum15_fu_17604_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_555_cast_fu_17601_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_555_cast_fu_17601_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum16_fu_17996_p2() {
    bias_V14_sum16_fu_17996_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_571_cast_fu_17993_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_571_cast_fu_17993_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum17_cast_fu_10634_p1() {
    bias_V14_sum17_cast_fu_10634_p1 = esl_sext<64,33>(bias_V14_sum_fu_10629_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum17_fu_18718_p2() {
    bias_V14_sum17_fu_18718_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_591_cast_fu_18715_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_591_cast_fu_18715_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum18_cast_fu_11007_p1() {
    bias_V14_sum18_cast_fu_11007_p1 = esl_sext<64,33>(bias_V14_sum1_fu_11002_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum18_fu_19091_p2() {
    bias_V14_sum18_fu_19091_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_605_cast_fu_19088_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_605_cast_fu_19088_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum19_cast_fu_11403_p1() {
    bias_V14_sum19_cast_fu_11403_p1 = esl_sext<64,33>(bias_V14_sum2_fu_11398_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum19_fu_19483_p2() {
    bias_V14_sum19_fu_19483_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_621_cast_fu_19480_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_621_cast_fu_19480_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum1_fu_11002_p2() {
    bias_V14_sum1_fu_11002_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_348_cast_fu_10998_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_348_cast_fu_10998_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum20_cast_fu_11768_p1() {
    bias_V14_sum20_cast_fu_11768_p1 = esl_sext<64,33>(bias_V14_sum3_fu_11763_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum20_fu_20205_p2() {
    bias_V14_sum20_fu_20205_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_641_cast_fu_20202_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_641_cast_fu_20202_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum21_cast_fu_12164_p1() {
    bias_V14_sum21_cast_fu_12164_p1 = esl_sext<64,33>(bias_V14_sum4_fu_12159_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum21_fu_20582_p2() {
    bias_V14_sum21_fu_20582_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_655_cast_fu_20579_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_655_cast_fu_20579_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum22_cast_fu_12767_p1() {
    bias_V14_sum22_cast_fu_12767_p1 = esl_sext<64,33>(bias_V14_sum5_fu_12762_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum22_fu_20974_p2() {
    bias_V14_sum22_fu_20974_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_671_cast_fu_20971_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_671_cast_fu_20971_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum23_cast_fu_13140_p1() {
    bias_V14_sum23_cast_fu_13140_p1 = esl_sext<64,33>(bias_V14_sum6_fu_13135_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum23_fu_21704_p2() {
    bias_V14_sum23_fu_21704_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_691_cast_fu_21701_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_691_cast_fu_21701_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum24_cast_fu_13532_p1() {
    bias_V14_sum24_cast_fu_13532_p1 = esl_sext<64,33>(bias_V14_sum7_fu_13527_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum24_fu_22073_p2() {
    bias_V14_sum24_fu_22073_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_705_cast1_fu_22070_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_705_cast1_fu_22070_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum25_cast_fu_14254_p1() {
    bias_V14_sum25_cast_fu_14254_p1 = esl_sext<64,33>(bias_V14_sum8_fu_14249_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum25_fu_22477_p2() {
    bias_V14_sum25_fu_22477_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_721_cast_fu_22473_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_721_cast_fu_22473_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum26_cast_fu_14627_p1() {
    bias_V14_sum26_cast_fu_14627_p1 = esl_sext<64,33>(bias_V14_sum9_fu_14622_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum26_fu_23211_p2() {
    bias_V14_sum26_fu_23211_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_741_cast_fu_23207_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_741_cast_fu_23207_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum27_cast_fu_15023_p1() {
    bias_V14_sum27_cast_fu_15023_p1 = esl_sext<64,33>(bias_V14_sum10_fu_15018_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum27_fu_23580_p2() {
    bias_V14_sum27_fu_23580_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_755_cast1_fu_23576_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_755_cast1_fu_23576_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum28_cast_fu_15757_p1() {
    bias_V14_sum28_cast_fu_15757_p1 = esl_sext<64,33>(bias_V14_sum11_fu_15752_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum28_fu_23984_p2() {
    bias_V14_sum28_fu_23984_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_771_cast_fu_23980_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_771_cast_fu_23980_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum29_cast_fu_16126_p1() {
    bias_V14_sum29_cast_fu_16126_p1 = esl_sext<64,33>(bias_V14_sum12_fu_16121_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum29_fu_24487_p2() {
    bias_V14_sum29_fu_24487_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_787_cast_fu_24483_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_787_cast_fu_24483_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum2_fu_11398_p2() {
    bias_V14_sum2_fu_11398_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_362_cast_fu_11394_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_362_cast_fu_11394_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum30_cast_fu_16522_p1() {
    bias_V14_sum30_cast_fu_16522_p1 = esl_sext<64,33>(bias_V14_sum13_fu_16517_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum30_fu_24856_p2() {
    bias_V14_sum30_fu_24856_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_802_cast_fu_24852_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_802_cast_fu_24852_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum31_cast_fu_17244_p1() {
    bias_V14_sum31_cast_fu_17244_p1 = esl_sext<64,33>(bias_V14_sum14_fu_17239_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum31_fu_25244_p2() {
    bias_V14_sum31_fu_25244_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_818_cast_fu_25241_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_818_cast_fu_25241_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum32_cast_fu_17609_p1() {
    bias_V14_sum32_cast_fu_17609_p1 = esl_sext<64,33>(bias_V14_sum15_fu_17604_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum32_fu_25609_p2() {
    bias_V14_sum32_fu_25609_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_829_cast_fu_25606_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_829_cast_fu_25606_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum33_cast_fu_18001_p1() {
    bias_V14_sum33_cast_fu_18001_p1 = esl_sext<64,33>(bias_V14_sum16_fu_17996_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum33_fu_25989_p2() {
    bias_V14_sum33_fu_25989_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_847_cast_fu_25986_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_847_cast_fu_25986_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum34_cast_fu_18723_p1() {
    bias_V14_sum34_cast_fu_18723_p1 = esl_sext<64,33>(bias_V14_sum17_fu_18718_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum34_fu_26580_p2() {
    bias_V14_sum34_fu_26580_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_864_cast_fu_26577_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_864_cast_fu_26577_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum35_cast_fu_19096_p1() {
    bias_V14_sum35_cast_fu_19096_p1 = esl_sext<64,33>(bias_V14_sum18_fu_19091_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum35_fu_26945_p2() {
    bias_V14_sum35_fu_26945_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_875_cast1_fu_26942_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_875_cast1_fu_26942_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum36_cast_fu_19488_p1() {
    bias_V14_sum36_cast_fu_19488_p1 = esl_sext<64,33>(bias_V14_sum19_fu_19483_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum36_fu_27333_p2() {
    bias_V14_sum36_fu_27333_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_891_cast_fu_27330_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_891_cast_fu_27330_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum37_cast_fu_20210_p1() {
    bias_V14_sum37_cast_fu_20210_p1 = esl_sext<64,33>(bias_V14_sum20_fu_20205_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum37_fu_28047_p2() {
    bias_V14_sum37_fu_28047_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_911_cast_fu_28044_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_911_cast_fu_28044_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum38_cast_fu_20587_p1() {
    bias_V14_sum38_cast_fu_20587_p1 = esl_sext<64,33>(bias_V14_sum21_fu_20582_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum38_fu_28424_p2() {
    bias_V14_sum38_fu_28424_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_924_cast_fu_28421_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_924_cast_fu_28421_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum39_cast_fu_20979_p1() {
    bias_V14_sum39_cast_fu_20979_p1 = esl_sext<64,33>(bias_V14_sum22_fu_20974_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum39_fu_28804_p2() {
    bias_V14_sum39_fu_28804_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_940_cast_fu_28801_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_940_cast_fu_28801_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum3_fu_11763_p2() {
    bias_V14_sum3_fu_11763_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_373_cast_fu_11760_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_373_cast_fu_11760_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum40_cast_fu_21709_p1() {
    bias_V14_sum40_cast_fu_21709_p1 = esl_sext<64,33>(bias_V14_sum23_fu_21704_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum40_fu_29518_p2() {
    bias_V14_sum40_fu_29518_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_960_cast_fu_29515_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_960_cast_fu_29515_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum41_cast_fu_22078_p1() {
    bias_V14_sum41_cast_fu_22078_p1 = esl_sext<64,33>(bias_V14_sum24_fu_22073_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum41_fu_29887_p2() {
    bias_V14_sum41_fu_29887_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_974_cast_fu_29884_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_974_cast_fu_29884_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum42_cast_fu_22482_p1() {
    bias_V14_sum42_cast_fu_22482_p1 = esl_sext<64,33>(bias_V14_sum25_fu_22477_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum42_fu_30267_p2() {
    bias_V14_sum42_fu_30267_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_990_cast_fu_30264_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_990_cast_fu_30264_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum43_cast_fu_23216_p1() {
    bias_V14_sum43_cast_fu_23216_p1 = esl_sext<64,33>(bias_V14_sum26_fu_23211_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum44_cast_fu_23585_p1() {
    bias_V14_sum44_cast_fu_23585_p1 = esl_sext<64,33>(bias_V14_sum27_fu_23580_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum45_cast_fu_23989_p1() {
    bias_V14_sum45_cast_fu_23989_p1 = esl_sext<64,33>(bias_V14_sum28_fu_23984_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum46_cast_fu_24492_p1() {
    bias_V14_sum46_cast_fu_24492_p1 = esl_sext<64,33>(bias_V14_sum29_fu_24487_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum47_cast_fu_24861_p1() {
    bias_V14_sum47_cast_fu_24861_p1 = esl_sext<64,33>(bias_V14_sum30_fu_24856_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum48_cast_fu_25249_p1() {
    bias_V14_sum48_cast_fu_25249_p1 = esl_sext<64,33>(bias_V14_sum31_fu_25244_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum49_cast_fu_25614_p1() {
    bias_V14_sum49_cast_fu_25614_p1 = esl_sext<64,33>(bias_V14_sum32_fu_25609_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum4_fu_12159_p2() {
    bias_V14_sum4_fu_12159_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_388_cast_fu_12156_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_388_cast_fu_12156_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum50_cast_fu_25994_p1() {
    bias_V14_sum50_cast_fu_25994_p1 = esl_sext<64,33>(bias_V14_sum33_fu_25989_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum51_cast_fu_26585_p1() {
    bias_V14_sum51_cast_fu_26585_p1 = esl_sext<64,33>(bias_V14_sum34_fu_26580_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum52_cast_fu_26950_p1() {
    bias_V14_sum52_cast_fu_26950_p1 = esl_sext<64,33>(bias_V14_sum35_fu_26945_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum53_cast_fu_27338_p1() {
    bias_V14_sum53_cast_fu_27338_p1 = esl_sext<64,33>(bias_V14_sum36_fu_27333_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum54_cast_fu_28052_p1() {
    bias_V14_sum54_cast_fu_28052_p1 = esl_sext<64,33>(bias_V14_sum37_fu_28047_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum55_cast_fu_28429_p1() {
    bias_V14_sum55_cast_fu_28429_p1 = esl_sext<64,33>(bias_V14_sum38_fu_28424_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum56_cast_fu_28809_p1() {
    bias_V14_sum56_cast_fu_28809_p1 = esl_sext<64,33>(bias_V14_sum39_fu_28804_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum57_cast_fu_29523_p1() {
    bias_V14_sum57_cast_fu_29523_p1 = esl_sext<64,33>(bias_V14_sum40_fu_29518_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum58_cast_fu_29892_p1() {
    bias_V14_sum58_cast_fu_29892_p1 = esl_sext<64,33>(bias_V14_sum41_fu_29887_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum59_cast_fu_30272_p1() {
    bias_V14_sum59_cast_fu_30272_p1 = esl_sext<64,33>(bias_V14_sum42_fu_30267_p2.read());
}

void ShuffleNetV2::thread_bias_V14_sum5_fu_12762_p2() {
    bias_V14_sum5_fu_12762_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_403_cast_fu_12759_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_403_cast_fu_12759_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum6_fu_13135_p2() {
    bias_V14_sum6_fu_13135_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_414_cast_fu_13132_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_414_cast_fu_13132_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum7_fu_13527_p2() {
    bias_V14_sum7_fu_13527_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_428_cast_fu_13524_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_428_cast_fu_13524_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum8_fu_14249_p2() {
    bias_V14_sum8_fu_14249_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_446_cast1_fu_14246_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_446_cast1_fu_14246_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum9_fu_14622_p2() {
    bias_V14_sum9_fu_14622_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_457_cast_fu_14618_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_457_cast_fu_14618_p1.read()));
}

void ShuffleNetV2::thread_bias_V14_sum_fu_10629_p2() {
    bias_V14_sum_fu_10629_p2 = (!tmp_482_cast_reg_30621.read().is_01() || !tmp_337_cast_fu_10626_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_482_cast_reg_30621.read()) + sc_biguint<33>(tmp_337_cast_fu_10626_p1.read()));
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1208_cast_reg_31887.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1174_cast_fu_9595_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1171_cast_reg_31627.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1122_cast1_fu_8757_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1119_cast_reg_31367.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read())) {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) (tmp_1062_cast_fu_7901_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_shuffle_24_p_fu_6542_left_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_1x1_16_p_fu_6516_input_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_3x3_16_no_re_fu_6431_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        buffer0_1_24_16x16_p_address0 = grp_subconv_3x3_32_strid_fu_6368_output_V_address0.read();
    } else {
        buffer0_1_24_16x16_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()))) {
        buffer0_1_24_16x16_p_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_shuffle_24_p_fu_6542_left_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_1x1_16_p_fu_6516_input_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_3x3_16_no_re_fu_6431_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        buffer0_1_24_16x16_p_ce0 = grp_subconv_3x3_32_strid_fu_6368_output_V_ce0.read();
    } else {
        buffer0_1_24_16x16_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()))) {
        buffer0_1_24_16x16_p_d0 = shuffleunit0_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()))) {
        buffer0_1_24_16x16_p_d0 = shuffleunit0_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()))) {
        buffer0_1_24_16x16_p_d0 = downsampleunit0_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        buffer0_1_24_16x16_p_d0 = grp_subconv_3x3_16_no_re_fu_6431_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        buffer0_1_24_16x16_p_d0 = grp_subconv_3x3_32_strid_fu_6368_output_V_d0.read();
    } else {
        buffer0_1_24_16x16_p_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_24_16x16_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state151.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state217.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state222.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state287.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state292.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state358.read()))) {
        buffer0_1_24_16x16_p_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        buffer0_1_24_16x16_p_we0 = grp_subconv_3x3_16_no_re_fu_6431_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read()))) {
        buffer0_1_24_16x16_p_we0 = grp_subconv_3x3_32_strid_fu_6368_output_V_we0.read();
    } else {
        buffer0_1_24_16x16_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1208.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1922_cast_reg_36153.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1124.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1858_cast_fu_22826_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1119.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1857_cast_reg_35696.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1035.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1777_cast_fu_21323_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1030.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1776_cast_reg_35239.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state946.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1700_cast_fu_19832_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1698_cast_reg_34782.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state857.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1621_cast_fu_18345_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1620_cast_reg_34325.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1545_cast_fu_16866_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1543_cast_reg_33868.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1465_cast_fu_15367_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1464_cast_reg_33411.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1389_cast_fu_13876_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1387_cast_reg_32954.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read())) {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) (tmp_1312_cast_fu_12389_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read()))) {
        buffer0_1_48_8x8_p_V_address0 = grp_shuffle_48_p_fu_6566_left_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        buffer0_1_48_8x8_p_V_address0 = grp_subconv_1x1_8_p_fu_6504_input_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        buffer0_1_48_8x8_p_V_address0 = grp_subconv_3x3_8_no_rel_fu_6419_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        buffer0_1_48_8x8_p_V_address0 = grp_subconv_3x3_16_strid_fu_6394_output_V_address0.read();
    } else {
        buffer0_1_48_8x8_p_V_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state857.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state946.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1030.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1035.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1208.read()))) {
        buffer0_1_48_8x8_p_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read()))) {
        buffer0_1_48_8x8_p_V_ce0 = grp_shuffle_48_p_fu_6566_left_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        buffer0_1_48_8x8_p_V_ce0 = grp_subconv_1x1_8_p_fu_6504_input_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        buffer0_1_48_8x8_p_V_ce0 = grp_subconv_3x3_8_no_rel_fu_6419_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        buffer0_1_48_8x8_p_V_ce0 = grp_subconv_3x3_16_strid_fu_6394_output_V_ce0.read();
    } else {
        buffer0_1_48_8x8_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1208.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_6_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1035.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1119.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_5_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state946.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1030.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_4_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state857.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_3_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_2_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()))) {
        buffer0_1_48_8x8_p_V_d0 = shuffleunit1_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()))) {
        buffer0_1_48_8x8_p_V_d0 = downsampleunit1_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        buffer0_1_48_8x8_p_V_d0 = grp_subconv_3x3_8_no_rel_fu_6419_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        buffer0_1_48_8x8_p_V_d0 = grp_subconv_3x3_16_strid_fu_6394_output_V_d0.read();
    } else {
        buffer0_1_48_8x8_p_V_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_48_8x8_p_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state501.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state585.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state590.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state674.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state679.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state763.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state768.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state852.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state857.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state941.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state946.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1030.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1035.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1119.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1124.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1208.read()))) {
        buffer0_1_48_8x8_p_V_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        buffer0_1_48_8x8_p_V_we0 = grp_subconv_3x3_8_no_rel_fu_6419_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read()))) {
        buffer0_1_48_8x8_p_V_we0 = grp_subconv_3x3_16_strid_fu_6394_output_V_we0.read();
    } else {
        buffer0_1_48_8x8_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1613.read())) {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) (tmp_2245_cast_reg_38134.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read())) {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) (tmp_2176_cast_fu_29157_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1524.read())) {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) (tmp_2174_cast_reg_37677.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1440.read())) {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) (tmp_2100_cast_fu_27686_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read())) {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) (tmp_2098_cast_reg_37220.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1351.read())) {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) (tmp_2022_cast_fu_26219_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()))) {
        buffer0_1_96_4x4_p_V_address0 = grp_shuffle_96_p_fu_6554_left_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        buffer0_1_96_4x4_p_V_address0 = grp_subconv_1x1_4_p_fu_6443_input_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        buffer0_1_96_4x4_p_V_address0 = grp_subconv_3x3_4_no_rel_fu_6407_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        buffer0_1_96_4x4_p_V_address0 = grp_subconv_3x3_8_stride_fu_6381_output_V_address0.read();
    } else {
        buffer0_1_96_4x4_p_V_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1351.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1524.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1613.read()))) {
        buffer0_1_96_4x4_p_V_ce0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()))) {
        buffer0_1_96_4x4_p_V_ce0 = grp_shuffle_96_p_fu_6554_left_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        buffer0_1_96_4x4_p_V_ce0 = grp_subconv_1x1_4_p_fu_6443_input_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        buffer0_1_96_4x4_p_V_ce0 = grp_subconv_3x3_4_no_rel_fu_6407_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        buffer0_1_96_4x4_p_V_ce0 = grp_subconv_3x3_8_stride_fu_6381_output_V_ce0.read();
    } else {
        buffer0_1_96_4x4_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_V_d0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1613.read()))) {
        buffer0_1_96_4x4_p_V_d0 = shuffleunit2_1_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1440.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1524.read()))) {
        buffer0_1_96_4x4_p_V_d0 = shuffleunit2_0_outpu_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1351.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()))) {
        buffer0_1_96_4x4_p_V_d0 = downsampleunit2_outp_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        buffer0_1_96_4x4_p_V_d0 = grp_subconv_3x3_4_no_rel_fu_6407_output_V_d0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        buffer0_1_96_4x4_p_V_d0 = grp_subconv_3x3_8_stride_fu_6381_output_V_d0.read();
    } else {
        buffer0_1_96_4x4_p_V_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer0_1_96_4x4_p_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1351.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1435.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1440.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1524.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1529.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1613.read()))) {
        buffer0_1_96_4x4_p_V_we0 = ap_const_logic_1;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        buffer0_1_96_4x4_p_V_we0 = grp_subconv_3x3_4_no_rel_fu_6407_output_V_we0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read()))) {
        buffer0_1_96_4x4_p_V_we0 = grp_subconv_3x3_8_stride_fu_6381_output_V_we0.read();
    } else {
        buffer0_1_96_4x4_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_r_p_fu_6591_right_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_l_p_fu_6583_left_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_shuffle_24_p_fu_6542_buffer1_1_24_16x16_p_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_subconv_1x1_16_p_fu_6516_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        buffer1_1_24_16x16_p_address0 = grp_subconv_3x3_16_no_re_fu_6431_input_V_address0.read();
    } else {
        buffer1_1_24_16x16_p_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_r_p_fu_6591_right_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_l_p_fu_6583_left_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state218.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state288.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state359.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_shuffle_24_p_fu_6542_buffer1_1_24_16x16_p_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_subconv_1x1_16_p_fu_6516_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state192.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state263.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state334.read()))) {
        buffer1_1_24_16x16_p_ce0 = grp_subconv_3x3_16_no_re_fu_6431_input_V_ce0.read();
    } else {
        buffer1_1_24_16x16_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_24_16x16_p_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state171.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state213.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state242.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state283.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state313.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state354.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state101.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state145.read()))) {
        buffer1_1_24_16x16_p_we0 = grp_subconv_1x1_16_p_fu_6516_output_V_we0.read();
    } else {
        buffer1_1_24_16x16_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        buffer1_1_48_8x8_p_V_address0 = grp_shuffle_48_r_p_fu_6623_right_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        buffer1_1_48_8x8_p_V_address0 = grp_shuffle_48_l_p_fu_6615_left_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read()))) {
        buffer1_1_48_8x8_p_V_address0 = grp_shuffle_48_p_fu_6566_buffer1_1_48_8x8_p_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        buffer1_1_48_8x8_p_V_address0 = grp_subconv_1x1_8_p_fu_6504_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        buffer1_1_48_8x8_p_V_address0 = grp_subconv_3x3_8_no_rel_fu_6419_input_V_address0.read();
    } else {
        buffer1_1_48_8x8_p_V_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        buffer1_1_48_8x8_p_V_ce0 = grp_shuffle_48_r_p_fu_6623_right_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        buffer1_1_48_8x8_p_V_ce0 = grp_shuffle_48_l_p_fu_6615_left_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state586.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state675.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state764.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state853.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state942.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1031.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1120.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1209.read()))) {
        buffer1_1_48_8x8_p_V_ce0 = grp_shuffle_48_p_fu_6566_buffer1_1_48_8x8_p_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        buffer1_1_48_8x8_p_V_ce0 = grp_subconv_1x1_8_p_fu_6504_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state644.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state733.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state822.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state911.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1000.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1089.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1178.read()))) {
        buffer1_1_48_8x8_p_V_ce0 = grp_subconv_3x3_8_no_rel_fu_6419_input_V_ce0.read();
    } else {
        buffer1_1_48_8x8_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_48_8x8_p_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state527.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state581.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state616.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state670.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state705.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state759.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state794.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state848.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state883.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state937.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state972.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1026.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1061.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1115.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1204.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state439.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state495.read()))) {
        buffer1_1_48_8x8_p_V_we0 = grp_subconv_1x1_8_p_fu_6504_output_V_we0.read();
    } else {
        buffer1_1_48_8x8_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read())) {
        buffer1_1_96_4x4_p_V_address0 = grp_shuffle_96_r_p_fu_6607_right_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        buffer1_1_96_4x4_p_V_address0 = grp_shuffle_96_l_p_fu_6599_left_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()))) {
        buffer1_1_96_4x4_p_V_address0 = grp_shuffle_96_p_fu_6554_buffer1_1_96_4x4_p_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        buffer1_1_96_4x4_p_V_address0 = grp_subconv_1x1_4_p_fu_6443_output_V_address0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        buffer1_1_96_4x4_p_V_address0 = grp_subconv_3x3_4_no_rel_fu_6407_input_V_address0.read();
    } else {
        buffer1_1_96_4x4_p_V_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read())) {
        buffer1_1_96_4x4_p_V_ce0 = grp_shuffle_96_r_p_fu_6607_right_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        buffer1_1_96_4x4_p_V_ce0 = grp_shuffle_96_l_p_fu_6599_left_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1436.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1525.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1614.read()))) {
        buffer1_1_96_4x4_p_V_ce0 = grp_shuffle_96_p_fu_6554_buffer1_1_96_4x4_p_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        buffer1_1_96_4x4_p_V_ce0 = grp_subconv_1x1_4_p_fu_6443_output_V_ce0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1405.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1494.read()) || 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1583.read()))) {
        buffer1_1_96_4x4_p_V_ce0 = grp_subconv_3x3_4_no_rel_fu_6407_input_V_ce0.read();
    } else {
        buffer1_1_96_4x4_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_buffer1_1_96_4x4_p_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1377.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1431.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1466.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1520.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1555.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1609.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1289.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1345.read()))) {
        buffer1_1_96_4x4_p_V_we0 = grp_subconv_1x1_4_p_fu_6443_output_V_we0.read();
    } else {
        buffer1_1_96_4x4_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_ci27_cast_fu_10324_p1() {
    ci27_cast_fu_10324_p1 = esl_zext<7,5>(ci27_reg_3077.read());
}

void ShuffleNetV2::thread_ci29_cast_fu_11089_p1() {
    ci29_cast_fu_11089_p1 = esl_zext<7,5>(ci29_reg_3198.read());
}

void ShuffleNetV2::thread_ci31_cast_fu_11850_p1() {
    ci31_cast_fu_11850_p1 = esl_zext<7,5>(ci31_reg_3319.read());
}

void ShuffleNetV2::thread_ci33_cast_fu_12457_p1() {
    ci33_cast_fu_12457_p1 = esl_zext<7,5>(ci33_reg_3407.read());
}

void ShuffleNetV2::thread_ci35_cast_fu_13222_p1() {
    ci35_cast_fu_13222_p1 = esl_zext<7,5>(ci35_reg_3528.read());
}

void ShuffleNetV2::thread_ci37_cast_fu_13944_p1() {
    ci37_cast_fu_13944_p1 = esl_zext<7,5>(ci37_reg_3649.read());
}

void ShuffleNetV2::thread_ci39_cast_fu_14709_p1() {
    ci39_cast_fu_14709_p1 = esl_zext<7,5>(ci39_reg_3770.read());
}

void ShuffleNetV2::thread_ci41_cast_fu_15435_p1() {
    ci41_cast_fu_15435_p1 = esl_zext<7,5>(ci41_reg_3891.read());
}

void ShuffleNetV2::thread_ci43_cast_fu_16208_p1() {
    ci43_cast_fu_16208_p1 = esl_zext<7,5>(ci43_reg_4012.read());
}

void ShuffleNetV2::thread_ci45_cast_fu_16934_p1() {
    ci45_cast_fu_16934_p1 = esl_zext<7,5>(ci45_reg_4133.read());
}

void ShuffleNetV2::thread_ci47_cast_fu_17691_p1() {
    ci47_cast_fu_17691_p1 = esl_zext<7,5>(ci47_reg_4254.read());
}

void ShuffleNetV2::thread_ci49_cast_fu_18413_p1() {
    ci49_cast_fu_18413_p1 = esl_zext<7,5>(ci49_reg_4375.read());
}

void ShuffleNetV2::thread_ci51_cast_fu_19178_p1() {
    ci51_cast_fu_19178_p1 = esl_zext<7,5>(ci51_reg_4496.read());
}

void ShuffleNetV2::thread_ci53_cast_fu_19900_p1() {
    ci53_cast_fu_19900_p1 = esl_zext<7,5>(ci53_reg_4617.read());
}

void ShuffleNetV2::thread_ci55_cast_fu_20669_p1() {
    ci55_cast_fu_20669_p1 = esl_zext<7,5>(ci55_reg_4738.read());
}

void ShuffleNetV2::thread_ci57_cast_fu_21391_p1() {
    ci57_cast_fu_21391_p1 = esl_zext<7,5>(ci57_reg_4859.read());
}

void ShuffleNetV2::thread_ci59_cast_fu_22160_p1() {
    ci59_cast_fu_22160_p1 = esl_zext<7,5>(ci59_reg_4980.read());
}

void ShuffleNetV2::thread_ci61_cast_fu_22894_p1() {
    ci61_cast_fu_22894_p1 = esl_zext<7,5>(ci61_reg_5101.read());
}

void ShuffleNetV2::thread_ci63_cast_fu_23667_p1() {
    ci63_cast_fu_23667_p1 = esl_zext<7,5>(ci63_reg_5222.read());
}

void ShuffleNetV2::thread_ci65_cast_fu_24188_p1() {
    ci65_cast_fu_24188_p1 = esl_zext<8,5>(ci65_reg_5310.read());
}

void ShuffleNetV2::thread_ci67_cast_fu_24941_p1() {
    ci67_cast_fu_24941_p1 = esl_zext<8,5>(ci67_reg_5431.read());
}

void ShuffleNetV2::thread_ci69_cast_fu_25694_p1() {
    ci69_cast_fu_25694_p1 = esl_zext<8,5>(ci69_reg_5552.read());
}

void ShuffleNetV2::thread_ci71_cast_fu_26285_p1() {
    ci71_cast_fu_26285_p1 = esl_zext<8,5>(ci71_reg_5640.read());
}

void ShuffleNetV2::thread_ci73_cast_fu_27030_p1() {
    ci73_cast_fu_27030_p1 = esl_zext<8,5>(ci73_reg_5761.read());
}

void ShuffleNetV2::thread_ci75_cast_fu_27752_p1() {
    ci75_cast_fu_27752_p1 = esl_zext<8,5>(ci75_reg_5882.read());
}

void ShuffleNetV2::thread_ci77_cast_fu_28509_p1() {
    ci77_cast_fu_28509_p1 = esl_zext<8,5>(ci77_reg_6003.read());
}

void ShuffleNetV2::thread_ci79_cast_fu_29223_p1() {
    ci79_cast_fu_29223_p1 = esl_zext<8,5>(ci79_reg_6124.read());
}

void ShuffleNetV2::thread_ci81_cast_fu_29972_p1() {
    ci81_cast_fu_29972_p1 = esl_zext<8,5>(ci81_reg_6245.read());
}

void ShuffleNetV2::thread_ci_10_fu_6768_p2() {
    ci_10_fu_6768_p2 = (!ci_reg_2296.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(ci_reg_2296.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_ci_11_fu_6991_p2() {
    ci_11_fu_6991_p2 = (!ci3_reg_2340.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci3_reg_2340.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_12_fu_7294_p2() {
    ci_12_fu_7294_p2 = (!ci10_reg_2420.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci10_reg_2420.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_14_fu_7666_p2() {
    ci_14_fu_7666_p2 = (!ci13_reg_2500.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci13_reg_2500.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_16_fu_8027_p2() {
    ci_16_fu_8027_p2 = (!ci15_reg_2568.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci15_reg_2568.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_18_fu_8372_p2() {
    ci_18_fu_8372_p2 = (!ci17_reg_2648.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci17_reg_2648.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_20_fu_8883_p2() {
    ci_20_fu_8883_p2 = (!ci19_reg_2749.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci19_reg_2749.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_22_fu_9241_p2() {
    ci_22_fu_9241_p2 = (!ci21_reg_2829.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci21_reg_2829.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_24_fu_9706_p2() {
    ci_24_fu_9706_p2 = (!ci23_reg_2930.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci23_reg_2930.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_26_fu_10105_p2() {
    ci_26_fu_10105_p2 = (!ci25_reg_3010.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci25_reg_3010.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_28_fu_10334_p2() {
    ci_28_fu_10334_p2 = (!ci27_reg_3077.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci27_reg_3077.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_30_fu_11099_p2() {
    ci_30_fu_11099_p2 = (!ci29_reg_3198.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci29_reg_3198.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_32_fu_11860_p2() {
    ci_32_fu_11860_p2 = (!ci31_reg_3319.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci31_reg_3319.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_34_fu_12467_p2() {
    ci_34_fu_12467_p2 = (!ci33_reg_3407.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci33_reg_3407.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_36_fu_13232_p2() {
    ci_36_fu_13232_p2 = (!ci35_reg_3528.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci35_reg_3528.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_38_fu_13954_p2() {
    ci_38_fu_13954_p2 = (!ci37_reg_3649.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci37_reg_3649.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_40_fu_14719_p2() {
    ci_40_fu_14719_p2 = (!ci39_reg_3770.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci39_reg_3770.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_42_fu_15445_p2() {
    ci_42_fu_15445_p2 = (!ci41_reg_3891.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci41_reg_3891.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_44_fu_16218_p2() {
    ci_44_fu_16218_p2 = (!ci43_reg_4012.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci43_reg_4012.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_46_fu_16944_p2() {
    ci_46_fu_16944_p2 = (!ci45_reg_4133.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci45_reg_4133.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_48_fu_17701_p2() {
    ci_48_fu_17701_p2 = (!ci47_reg_4254.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci47_reg_4254.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_50_fu_18423_p2() {
    ci_50_fu_18423_p2 = (!ci49_reg_4375.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci49_reg_4375.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_52_fu_19188_p2() {
    ci_52_fu_19188_p2 = (!ci51_reg_4496.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci51_reg_4496.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_54_fu_19910_p2() {
    ci_54_fu_19910_p2 = (!ci53_reg_4617.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci53_reg_4617.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_56_fu_20679_p2() {
    ci_56_fu_20679_p2 = (!ci55_reg_4738.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci55_reg_4738.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_58_fu_21401_p2() {
    ci_58_fu_21401_p2 = (!ci57_reg_4859.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci57_reg_4859.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_60_fu_22170_p2() {
    ci_60_fu_22170_p2 = (!ci59_reg_4980.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci59_reg_4980.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_62_fu_22904_p2() {
    ci_62_fu_22904_p2 = (!ci61_reg_5101.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci61_reg_5101.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_64_fu_23677_p2() {
    ci_64_fu_23677_p2 = (!ci63_reg_5222.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci63_reg_5222.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_66_fu_24198_p2() {
    ci_66_fu_24198_p2 = (!ci65_reg_5310.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci65_reg_5310.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_68_fu_24951_p2() {
    ci_68_fu_24951_p2 = (!ci67_reg_5431.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci67_reg_5431.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_70_fu_25704_p2() {
    ci_70_fu_25704_p2 = (!ci69_reg_5552.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci69_reg_5552.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_72_fu_26295_p2() {
    ci_72_fu_26295_p2 = (!ci71_reg_5640.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci71_reg_5640.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_74_fu_27040_p2() {
    ci_74_fu_27040_p2 = (!ci73_reg_5761.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci73_reg_5761.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_76_fu_27762_p2() {
    ci_76_fu_27762_p2 = (!ci75_reg_5882.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci75_reg_5882.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_78_fu_28519_p2() {
    ci_78_fu_28519_p2 = (!ci77_reg_6003.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci77_reg_6003.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_80_fu_29233_p2() {
    ci_80_fu_29233_p2 = (!ci79_reg_6124.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci79_reg_6124.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_82_fu_29982_p2() {
    ci_82_fu_29982_p2 = (!ci81_reg_6245.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(ci81_reg_6245.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_ci_83_fu_30419_p2() {
    ci_83_fu_30419_p2 = (!ci82_reg_6322.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(ci82_reg_6322.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void ShuffleNetV2::thread_co101_cast_fu_17627_p1() {
    co101_cast_fu_17627_p1 = esl_zext<11,5>(co100_reg_4243.read());
}

void ShuffleNetV2::thread_co104_cast_fu_18138_p1() {
    co104_cast_fu_18138_p1 = esl_zext<7,6>(co104_reg_4331.read());
}

void ShuffleNetV2::thread_co106_cast_fu_18349_p1() {
    co106_cast_fu_18349_p1 = esl_zext<11,5>(co106_reg_4364.read());
}

void ShuffleNetV2::thread_co109_cast400_cast_fu_18741_p1() {
    co109_cast400_cast_fu_18741_p1 = esl_zext<8,5>(co108_reg_4419.read());
}

void ShuffleNetV2::thread_co109_cast_fu_18745_p1() {
    co109_cast_fu_18745_p1 = esl_zext<7,5>(co108_reg_4419.read());
}

void ShuffleNetV2::thread_co111_cast_fu_19114_p1() {
    co111_cast_fu_19114_p1 = esl_zext<11,5>(co110_reg_4485.read());
}

void ShuffleNetV2::thread_co114_cast_fu_19625_p1() {
    co114_cast_fu_19625_p1 = esl_zext<7,6>(co114_reg_4573.read());
}

void ShuffleNetV2::thread_co116_cast_fu_19836_p1() {
    co116_cast_fu_19836_p1 = esl_zext<11,5>(co116_reg_4606.read());
}

void ShuffleNetV2::thread_co119_cast362_cast_fu_20228_p1() {
    co119_cast362_cast_fu_20228_p1 = esl_zext<8,5>(co118_reg_4661.read());
}

void ShuffleNetV2::thread_co119_cast_fu_20232_p1() {
    co119_cast_fu_20232_p1 = esl_zext<7,5>(co118_reg_4661.read());
}

void ShuffleNetV2::thread_co121_cast_fu_20605_p1() {
    co121_cast_fu_20605_p1 = esl_zext<11,5>(co120_reg_4727.read());
}

void ShuffleNetV2::thread_co124_cast_fu_21116_p1() {
    co124_cast_fu_21116_p1 = esl_zext<7,6>(co124_reg_4815.read());
}

void ShuffleNetV2::thread_co126_cast337_cast_fu_21327_p1() {
    co126_cast337_cast_fu_21327_p1 = esl_zext<10,5>(co126_reg_4848.read());
}

void ShuffleNetV2::thread_co129_cast1_fu_21731_p1() {
    co129_cast1_fu_21731_p1 = esl_zext<7,5>(co128_reg_4903.read());
}

void ShuffleNetV2::thread_co129_cast_fu_21727_p1() {
    co129_cast_fu_21727_p1 = esl_zext<10,5>(co128_reg_4903.read());
}

void ShuffleNetV2::thread_co12_cast_fu_7330_p1() {
    co12_cast_fu_7330_p1 = esl_zext<6,5>(co12_reg_2443.read());
}

void ShuffleNetV2::thread_co131_cast314_cast_fu_22096_p1() {
    co131_cast314_cast_fu_22096_p1 = esl_zext<10,5>(co130_reg_4969.read());
}

void ShuffleNetV2::thread_co134_cast_fu_22619_p1() {
    co134_cast_fu_22619_p1 = esl_zext<7,6>(co134_reg_5057.read());
}

void ShuffleNetV2::thread_co136_cast299_cast_fu_22830_p1() {
    co136_cast299_cast_fu_22830_p1 = esl_zext<9,5>(co136_reg_5090.read());
}

void ShuffleNetV2::thread_co139_cast1_fu_23238_p1() {
    co139_cast1_fu_23238_p1 = esl_zext<7,5>(co138_reg_5145.read());
}

void ShuffleNetV2::thread_co139_cast_fu_23234_p1() {
    co139_cast_fu_23234_p1 = esl_zext<10,5>(co138_reg_5145.read());
}

void ShuffleNetV2::thread_co141_cast_fu_23603_p1() {
    co141_cast_fu_23603_p1 = esl_zext<12,5>(co140_reg_5211.read());
}

void ShuffleNetV2::thread_co144_cast_fu_24126_p1() {
    co144_cast_fu_24126_p1 = esl_zext<12,5>(co144_reg_5299.read());
}

void ShuffleNetV2::thread_co147_cast1_fu_24514_p1() {
    co147_cast1_fu_24514_p1 = esl_zext<8,5>(co146_reg_5354.read());
}

void ShuffleNetV2::thread_co147_cast_fu_24510_p1() {
    co147_cast_fu_24510_p1 = esl_zext<10,5>(co146_reg_5354.read());
}

void ShuffleNetV2::thread_co149_cast_fu_24879_p1() {
    co149_cast_fu_24879_p1 = esl_zext<12,5>(co148_reg_5420.read());
}

void ShuffleNetV2::thread_co151_cast1_fu_25271_p1() {
    co151_cast1_fu_25271_p1 = esl_zext<8,5>(co150_reg_5475.read());
}

void ShuffleNetV2::thread_co151_cast_fu_25267_p1() {
    co151_cast_fu_25267_p1 = esl_zext<10,5>(co150_reg_5475.read());
}

void ShuffleNetV2::thread_co153_cast_fu_25632_p1() {
    co153_cast_fu_25632_p1 = esl_zext<12,5>(co152_reg_5541.read());
}

void ShuffleNetV2::thread_co155_cast_fu_26012_p1() {
    co155_cast_fu_26012_p1 = esl_zext<8,7>(co154_reg_5596.read());
}

void ShuffleNetV2::thread_co156_cast_fu_26223_p1() {
    co156_cast_fu_26223_p1 = esl_zext<12,5>(co156_reg_5629.read());
}

void ShuffleNetV2::thread_co159_cast1_fu_26607_p1() {
    co159_cast1_fu_26607_p1 = esl_zext<8,5>(co158_reg_5684.read());
}

void ShuffleNetV2::thread_co159_cast_fu_26603_p1() {
    co159_cast_fu_26603_p1 = esl_zext<10,5>(co158_reg_5684.read());
}

void ShuffleNetV2::thread_co161_cast179_cast_fu_26968_p1() {
    co161_cast179_cast_fu_26968_p1 = esl_zext<11,5>(co160_reg_5750.read());
}

void ShuffleNetV2::thread_co164_cast_fu_27479_p1() {
    co164_cast_fu_27479_p1 = esl_zext<8,7>(co164_reg_5838.read());
}

void ShuffleNetV2::thread_co166_cast_fu_27690_p1() {
    co166_cast_fu_27690_p1 = esl_zext<13,5>(co166_reg_5871.read());
}

void ShuffleNetV2::thread_co169_cast151_cast_fu_28070_p1() {
    co169_cast151_cast_fu_28070_p1 = esl_zext<9,5>(co168_reg_5926.read());
}

void ShuffleNetV2::thread_co169_cast_fu_28074_p1() {
    co169_cast_fu_28074_p1 = esl_zext<8,5>(co168_reg_5926.read());
}

void ShuffleNetV2::thread_co16_cast_fu_7544_p1() {
    co16_cast_fu_7544_p1 = esl_zext<7,5>(co16_reg_2488.read());
}

void ShuffleNetV2::thread_co171_cast_fu_28447_p1() {
    co171_cast_fu_28447_p1 = esl_zext<13,5>(co170_reg_5992.read());
}

void ShuffleNetV2::thread_co174_cast_fu_28950_p1() {
    co174_cast_fu_28950_p1 = esl_zext<8,7>(co174_reg_6080.read());
}

void ShuffleNetV2::thread_co176_cast_fu_29161_p1() {
    co176_cast_fu_29161_p1 = esl_zext<13,5>(co176_reg_6113.read());
}

void ShuffleNetV2::thread_co179_cast1_fu_29545_p1() {
    co179_cast1_fu_29545_p1 = esl_zext<8,5>(co178_reg_6168.read());
}

void ShuffleNetV2::thread_co179_cast_fu_29541_p1() {
    co179_cast_fu_29541_p1 = esl_zext<11,5>(co178_reg_6168.read());
}

void ShuffleNetV2::thread_co181_cast_fu_29910_p1() {
    co181_cast_fu_29910_p1 = esl_zext<13,5>(co180_reg_6234.read());
}

void ShuffleNetV2::thread_co19_cast_fu_7702_p1() {
    co19_cast_fu_7702_p1 = esl_zext<6,5>(co19_reg_2523.read());
}

void ShuffleNetV2::thread_co22_cast_fu_7905_p1() {
    co22_cast_fu_7905_p1 = esl_zext<7,5>(co22_reg_2556.read());
}

void ShuffleNetV2::thread_co25_cast_fu_8063_p1() {
    co25_cast_fu_8063_p1 = esl_zext<7,5>(co25_reg_2591.read());
}

void ShuffleNetV2::thread_co35_cast_fu_8558_p1() {
    co35_cast_fu_8558_p1 = esl_zext<6,5>(co35_reg_2704.read());
}

void ShuffleNetV2::thread_co36_cast_fu_8761_p1() {
    co36_cast_fu_8761_p1 = esl_zext<8,5>(co36_reg_2737.read());
}

void ShuffleNetV2::thread_co39_cast_fu_8919_p1() {
    co39_cast_fu_8919_p1 = esl_zext<7,5>(co38_reg_2772.read());
}

void ShuffleNetV2::thread_co41_cast_fu_9119_p1() {
    co41_cast_fu_9119_p1 = esl_zext<8,5>(co40_reg_2817.read());
}

void ShuffleNetV2::thread_co44_cast_fu_9396_p1() {
    co44_cast_fu_9396_p1 = esl_zext<6,5>(co44_reg_2885.read());
}

void ShuffleNetV2::thread_co46_cast_fu_9599_p1() {
    co46_cast_fu_9599_p1 = esl_zext<8,5>(co46_reg_2918.read());
}

void ShuffleNetV2::thread_co54_cast_fu_10260_p1() {
    co54_cast_fu_10260_p1 = esl_zext<9,5>(co54_reg_3066.read());
}

void ShuffleNetV2::thread_co57_cast1_fu_10656_p1() {
    co57_cast1_fu_10656_p1 = esl_zext<7,5>(co56_reg_3121.read());
}

void ShuffleNetV2::thread_co57_cast_fu_10652_p1() {
    co57_cast_fu_10652_p1 = esl_zext<8,5>(co56_reg_3121.read());
}

void ShuffleNetV2::thread_co59_cast_fu_11025_p1() {
    co59_cast_fu_11025_p1 = esl_zext<9,5>(co58_reg_3187.read());
}

void ShuffleNetV2::thread_co61_cast1_fu_11425_p1() {
    co61_cast1_fu_11425_p1 = esl_zext<7,5>(co60_reg_3242.read());
}

void ShuffleNetV2::thread_co61_cast_fu_11421_p1() {
    co61_cast_fu_11421_p1 = esl_zext<8,5>(co60_reg_3242.read());
}

void ShuffleNetV2::thread_co63_cast_fu_11786_p1() {
    co63_cast_fu_11786_p1 = esl_zext<10,5>(co62_reg_3308.read());
}

void ShuffleNetV2::thread_co65_cast_fu_12182_p1() {
    co65_cast_fu_12182_p1 = esl_zext<7,6>(co64_reg_3363.read());
}

void ShuffleNetV2::thread_co66_cast_fu_12393_p1() {
    co66_cast_fu_12393_p1 = esl_zext<10,5>(co66_reg_3396.read());
}

void ShuffleNetV2::thread_co69_cast1_fu_12789_p1() {
    co69_cast1_fu_12789_p1 = esl_zext<7,5>(co68_reg_3451.read());
}

void ShuffleNetV2::thread_co69_cast_fu_12785_p1() {
    co69_cast_fu_12785_p1 = esl_zext<9,5>(co68_reg_3451.read());
}

void ShuffleNetV2::thread_co71_cast_fu_13158_p1() {
    co71_cast_fu_13158_p1 = esl_zext<10,5>(co70_reg_3517.read());
}

void ShuffleNetV2::thread_co74_cast_fu_13669_p1() {
    co74_cast_fu_13669_p1 = esl_zext<7,6>(co74_reg_3605.read());
}

void ShuffleNetV2::thread_co76_cast_fu_13880_p1() {
    co76_cast_fu_13880_p1 = esl_zext<10,5>(co76_reg_3638.read());
}

void ShuffleNetV2::thread_co79_cast1_fu_14276_p1() {
    co79_cast1_fu_14276_p1 = esl_zext<7,5>(co78_reg_3693.read());
}

void ShuffleNetV2::thread_co79_cast_fu_14272_p1() {
    co79_cast_fu_14272_p1 = esl_zext<9,5>(co78_reg_3693.read());
}

void ShuffleNetV2::thread_co81_cast_fu_14645_p1() {
    co81_cast_fu_14645_p1 = esl_zext<10,5>(co80_reg_3759.read());
}

void ShuffleNetV2::thread_co84_cast_fu_15160_p1() {
    co84_cast_fu_15160_p1 = esl_zext<7,6>(co84_reg_3847.read());
}

void ShuffleNetV2::thread_co86_cast489_cast_fu_15371_p1() {
    co86_cast489_cast_fu_15371_p1 = esl_zext<9,5>(co86_reg_3880.read());
}

void ShuffleNetV2::thread_co89_cast1_fu_15779_p1() {
    co89_cast1_fu_15779_p1 = esl_zext<7,5>(co88_reg_3935.read());
}

void ShuffleNetV2::thread_co89_cast_fu_15775_p1() {
    co89_cast_fu_15775_p1 = esl_zext<9,5>(co88_reg_3935.read());
}

void ShuffleNetV2::thread_co91_cast_fu_16144_p1() {
    co91_cast_fu_16144_p1 = esl_zext<11,5>(co90_reg_4001.read());
}

void ShuffleNetV2::thread_co94_cast_fu_16659_p1() {
    co94_cast_fu_16659_p1 = esl_zext<7,6>(co94_reg_4089.read());
}

void ShuffleNetV2::thread_co96_cast_fu_16870_p1() {
    co96_cast_fu_16870_p1 = esl_zext<11,5>(co96_reg_4122.read());
}

void ShuffleNetV2::thread_co99_cast1_fu_17266_p1() {
    co99_cast1_fu_17266_p1 = esl_zext<7,5>(co98_reg_4177.read());
}

void ShuffleNetV2::thread_co99_cast_fu_17262_p1() {
    co99_cast_fu_17262_p1 = esl_zext<9,5>(co98_reg_4177.read());
}

void ShuffleNetV2::thread_co9_cast_fu_7172_p1() {
    co9_cast_fu_7172_p1 = esl_zext<6,5>(co9_reg_2408.read());
}

void ShuffleNetV2::thread_co_101_fu_17637_p2() {
    co_101_fu_17637_p2 = (!co100_reg_4243.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co100_reg_4243.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_103_fu_18025_p2() {
    co_103_fu_18025_p2 = (!co102_reg_4298.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co102_reg_4298.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_105_fu_18148_p2() {
    co_105_fu_18148_p2 = (!co104_reg_4331.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co104_reg_4331.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_107_fu_18359_p2() {
    co_107_fu_18359_p2 = (!co106_reg_4364.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co106_reg_4364.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_109_fu_18755_p2() {
    co_109_fu_18755_p2 = (!co108_reg_4419.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co108_reg_4419.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_111_fu_19124_p2() {
    co_111_fu_19124_p2 = (!co110_reg_4485.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co110_reg_4485.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_113_fu_19512_p2() {
    co_113_fu_19512_p2 = (!co112_reg_4540.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co112_reg_4540.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_115_fu_19635_p2() {
    co_115_fu_19635_p2 = (!co114_reg_4573.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co114_reg_4573.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_117_fu_19846_p2() {
    co_117_fu_19846_p2 = (!co116_reg_4606.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co116_reg_4606.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_119_fu_20242_p2() {
    co_119_fu_20242_p2 = (!co118_reg_4661.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co118_reg_4661.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_121_fu_20615_p2() {
    co_121_fu_20615_p2 = (!co120_reg_4727.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co120_reg_4727.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_123_fu_21003_p2() {
    co_123_fu_21003_p2 = (!co122_reg_4782.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co122_reg_4782.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_125_fu_21126_p2() {
    co_125_fu_21126_p2 = (!co124_reg_4815.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co124_reg_4815.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_127_fu_21337_p2() {
    co_127_fu_21337_p2 = (!co126_reg_4848.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co126_reg_4848.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_129_fu_21741_p2() {
    co_129_fu_21741_p2 = (!co128_reg_4903.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co128_reg_4903.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_131_fu_22106_p2() {
    co_131_fu_22106_p2 = (!co130_reg_4969.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co130_reg_4969.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_133_fu_22506_p2() {
    co_133_fu_22506_p2 = (!co132_reg_5024.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co132_reg_5024.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_135_fu_22629_p2() {
    co_135_fu_22629_p2 = (!co134_reg_5057.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co134_reg_5057.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_137_fu_22840_p2() {
    co_137_fu_22840_p2 = (!co136_reg_5090.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co136_reg_5090.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_139_fu_23248_p2() {
    co_139_fu_23248_p2 = (!co138_reg_5145.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co138_reg_5145.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_141_fu_23613_p2() {
    co_141_fu_23613_p2 = (!co140_reg_5211.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co140_reg_5211.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_143_fu_24013_p2() {
    co_143_fu_24013_p2 = (!co142_reg_5266.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co142_reg_5266.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_145_fu_24136_p2() {
    co_145_fu_24136_p2 = (!co144_reg_5299.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co144_reg_5299.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_147_fu_24524_p2() {
    co_147_fu_24524_p2 = (!co146_reg_5354.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co146_reg_5354.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_149_fu_24889_p2() {
    co_149_fu_24889_p2 = (!co148_reg_5420.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co148_reg_5420.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_151_fu_25281_p2() {
    co_151_fu_25281_p2 = (!co150_reg_5475.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co150_reg_5475.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_153_fu_25642_p2() {
    co_153_fu_25642_p2 = (!co152_reg_5541.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co152_reg_5541.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_155_fu_26022_p2() {
    co_155_fu_26022_p2 = (!co154_reg_5596.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co154_reg_5596.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_157_fu_26233_p2() {
    co_157_fu_26233_p2 = (!co156_reg_5629.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co156_reg_5629.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_159_fu_26617_p2() {
    co_159_fu_26617_p2 = (!co158_reg_5684.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co158_reg_5684.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_161_fu_26978_p2() {
    co_161_fu_26978_p2 = (!co160_reg_5750.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co160_reg_5750.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_163_fu_27362_p2() {
    co_163_fu_27362_p2 = (!co162_reg_5805.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co162_reg_5805.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_165_fu_27489_p2() {
    co_165_fu_27489_p2 = (!co164_reg_5838.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co164_reg_5838.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_167_fu_27700_p2() {
    co_167_fu_27700_p2 = (!co166_reg_5871.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co166_reg_5871.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_169_fu_28084_p2() {
    co_169_fu_28084_p2 = (!co168_reg_5926.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co168_reg_5926.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_171_fu_28457_p2() {
    co_171_fu_28457_p2 = (!co170_reg_5992.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co170_reg_5992.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_173_fu_28833_p2() {
    co_173_fu_28833_p2 = (!co172_reg_6047.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co172_reg_6047.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_175_fu_28960_p2() {
    co_175_fu_28960_p2 = (!co174_reg_6080.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co174_reg_6080.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_177_fu_29171_p2() {
    co_177_fu_29171_p2 = (!co176_reg_6113.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co176_reg_6113.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_179_fu_29555_p2() {
    co_179_fu_29555_p2 = (!co178_reg_6168.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co178_reg_6168.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_181_fu_29920_p2() {
    co_181_fu_29920_p2 = (!co180_reg_6234.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co180_reg_6234.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_183_fu_30296_p2() {
    co_183_fu_30296_p2 = (!co182_reg_6289.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(co182_reg_6289.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void ShuffleNetV2::thread_co_26_fu_6912_p2() {
    co_26_fu_6912_p2 = (!co_reg_2329.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co_reg_2329.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_27_fu_7033_p2() {
    co_27_fu_7033_p2 = (!co5_reg_2363.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co5_reg_2363.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_28_fu_7182_p2() {
    co_28_fu_7182_p2 = (!co9_reg_2408.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co9_reg_2408.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_29_fu_7340_p2() {
    co_29_fu_7340_p2 = (!co12_reg_2443.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co12_reg_2443.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_30_fu_7554_p2() {
    co_30_fu_7554_p2 = (!co16_reg_2488.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co16_reg_2488.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_31_fu_7712_p2() {
    co_31_fu_7712_p2 = (!co19_reg_2523.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co19_reg_2523.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_32_fu_7915_p2() {
    co_32_fu_7915_p2 = (!co22_reg_2556.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co22_reg_2556.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_33_fu_8073_p2() {
    co_33_fu_8073_p2 = (!co25_reg_2591.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co25_reg_2591.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_34_fu_8269_p2() {
    co_34_fu_8269_p2 = (!co29_reg_2636.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co29_reg_2636.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_35_fu_8445_p2() {
    co_35_fu_8445_p2 = (!co32_reg_2671.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co32_reg_2671.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_36_fu_8568_p2() {
    co_36_fu_8568_p2 = (!co35_reg_2704.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co35_reg_2704.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_37_fu_8771_p2() {
    co_37_fu_8771_p2 = (!co36_reg_2737.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co36_reg_2737.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_39_fu_8929_p2() {
    co_39_fu_8929_p2 = (!co38_reg_2772.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co38_reg_2772.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_41_fu_9129_p2() {
    co_41_fu_9129_p2 = (!co40_reg_2817.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co40_reg_2817.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_43_fu_9283_p2() {
    co_43_fu_9283_p2 = (!co42_reg_2852.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co42_reg_2852.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_45_fu_9406_p2() {
    co_45_fu_9406_p2 = (!co44_reg_2885.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co44_reg_2885.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_47_fu_9609_p2() {
    co_47_fu_9609_p2 = (!co46_reg_2918.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co46_reg_2918.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_49_fu_9775_p2() {
    co_49_fu_9775_p2 = (!co48_reg_2953.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co48_reg_2953.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_51_fu_9987_p2() {
    co_51_fu_9987_p2 = (!co50_reg_2998.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co50_reg_2998.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_53_fu_10147_p2() {
    co_53_fu_10147_p2 = (!co52_reg_3033.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co52_reg_3033.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_55_fu_10270_p2() {
    co_55_fu_10270_p2 = (!co54_reg_3066.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co54_reg_3066.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_57_fu_10666_p2() {
    co_57_fu_10666_p2 = (!co56_reg_3121.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co56_reg_3121.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_59_fu_11035_p2() {
    co_59_fu_11035_p2 = (!co58_reg_3187.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co58_reg_3187.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_61_fu_11435_p2() {
    co_61_fu_11435_p2 = (!co60_reg_3242.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co60_reg_3242.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_63_fu_11796_p2() {
    co_63_fu_11796_p2 = (!co62_reg_3308.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co62_reg_3308.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_65_fu_12192_p2() {
    co_65_fu_12192_p2 = (!co64_reg_3363.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co64_reg_3363.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_67_fu_12403_p2() {
    co_67_fu_12403_p2 = (!co66_reg_3396.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co66_reg_3396.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_69_fu_12799_p2() {
    co_69_fu_12799_p2 = (!co68_reg_3451.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co68_reg_3451.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_71_fu_13168_p2() {
    co_71_fu_13168_p2 = (!co70_reg_3517.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co70_reg_3517.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_73_fu_13556_p2() {
    co_73_fu_13556_p2 = (!co72_reg_3572.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co72_reg_3572.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_75_fu_13679_p2() {
    co_75_fu_13679_p2 = (!co74_reg_3605.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co74_reg_3605.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_77_fu_13890_p2() {
    co_77_fu_13890_p2 = (!co76_reg_3638.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co76_reg_3638.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_79_fu_14286_p2() {
    co_79_fu_14286_p2 = (!co78_reg_3693.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co78_reg_3693.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_81_fu_14655_p2() {
    co_81_fu_14655_p2 = (!co80_reg_3759.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co80_reg_3759.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_83_fu_15047_p2() {
    co_83_fu_15047_p2 = (!co82_reg_3814.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co82_reg_3814.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_85_fu_15170_p2() {
    co_85_fu_15170_p2 = (!co84_reg_3847.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co84_reg_3847.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_87_fu_15381_p2() {
    co_87_fu_15381_p2 = (!co86_reg_3880.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co86_reg_3880.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_89_fu_15789_p2() {
    co_89_fu_15789_p2 = (!co88_reg_3935.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co88_reg_3935.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_91_fu_16154_p2() {
    co_91_fu_16154_p2 = (!co90_reg_4001.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co90_reg_4001.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_93_fu_16546_p2() {
    co_93_fu_16546_p2 = (!co92_reg_4056.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co92_reg_4056.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_95_fu_16669_p2() {
    co_95_fu_16669_p2 = (!co94_reg_4089.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(co94_reg_4089.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_co_97_fu_16880_p2() {
    co_97_fu_16880_p2 = (!co96_reg_4122.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co96_reg_4122.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_co_99_fu_17276_p2() {
    co_99_fu_17276_p2 = (!co98_reg_4177.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(co98_reg_4177.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_conv1_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_address0 =  (sc_lv<5>) (tmp_fu_6708_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_address0 = grp_conv1_p_fu_6355_bias_V_address0.read();
    } else {
        conv1_bias_V_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void ShuffleNetV2::thread_conv1_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_bias_V_ce0 = grp_conv1_p_fu_6355_bias_V_ce0.read();
    } else {
        conv1_bias_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_bias_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        conv1_bias_V_we0 = ap_const_logic_1;
    } else {
        conv1_bias_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        conv1_output_p_V_address0 = grp_subconv_1x1_32_p_fu_6492_conv1_output_p_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        conv1_output_p_V_address0 = grp_subconv_3x3_32_strid_fu_6368_input_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_address0 = grp_conv1_p_fu_6355_output_V_address0.read();
    } else {
        conv1_output_p_V_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state60.read())) {
        conv1_output_p_V_ce0 = grp_subconv_1x1_32_p_fu_6492_conv1_output_p_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        conv1_output_p_V_ce0 = grp_subconv_3x3_32_strid_fu_6368_input_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_ce0 = grp_conv1_p_fu_6355_output_V_ce0.read();
    } else {
        conv1_output_p_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_V_we0 = grp_conv1_p_fu_6355_output_V_we0.read();
    } else {
        conv1_output_p_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_address0 =  (sc_lv<9>) (tmp_s_fu_6740_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        conv_last_bias_V_address0 = grp_conv_last_fu_6455_bias_V_address0.read();
    } else {
        conv_last_bias_V_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        conv_last_bias_V_ce0 = grp_conv_last_fu_6455_bias_V_ce0.read();
    } else {
        conv_last_bias_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state19.read())) {
        conv_last_bias_V_we0 = ap_const_logic_1;
    } else {
        conv_last_bias_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1621.read())) {
        conv_last_output_V_address0 = grp_avgpool_fu_6631_conv_last_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        conv_last_output_V_address0 = grp_conv_last_fu_6455_output_V_address0.read();
    } else {
        conv_last_output_V_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1621.read())) {
        conv_last_output_V_ce0 = grp_avgpool_fu_6631_conv_last_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        conv_last_output_V_ce0 = grp_conv_last_fu_6455_output_V_ce0.read();
    } else {
        conv_last_output_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1619.read())) {
        conv_last_output_V_we0 = grp_conv_last_fu_6455_output_V_we0.read();
    } else {
        conv_last_output_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read())) {
        downsampleunit0_outp_address0 =  (sc_lv<14>) (tmp_1119_cast_fu_8553_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        downsampleunit0_outp_address0 =  (sc_lv<14>) (tmp_1063_cast_fu_7896_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        downsampleunit0_outp_address0 = grp_shuffle_24_r_p_fu_6591_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        downsampleunit0_outp_address0 = grp_shuffle_24_l_p_fu_6583_output_V_address0.read();
    } else {
        downsampleunit0_outp_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state216.read()))) {
        downsampleunit0_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        downsampleunit0_outp_ce0 = grp_shuffle_24_r_p_fu_6591_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        downsampleunit0_outp_ce0 = grp_shuffle_24_l_p_fu_6583_output_V_ce0.read();
    } else {
        downsampleunit0_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        downsampleunit0_outp_d0 = grp_shuffle_24_r_p_fu_6591_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        downsampleunit0_outp_d0 = grp_shuffle_24_l_p_fu_6583_output_V_d0.read();
    } else {
        downsampleunit0_outp_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state147.read())) {
        downsampleunit0_outp_we0 = grp_shuffle_24_r_p_fu_6591_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state103.read())) {
        downsampleunit0_outp_we0 = grp_shuffle_24_l_p_fu_6583_output_V_we0.read();
    } else {
        downsampleunit0_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state584.read())) {
        downsampleunit1_outp_address0 =  (sc_lv<14>) (tmp_1387_cast_fu_13664_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read())) {
        downsampleunit1_outp_address0 =  (sc_lv<14>) (tmp_1311_cast_fu_12379_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        downsampleunit1_outp_address0 = grp_shuffle_48_r_p_fu_6623_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        downsampleunit1_outp_address0 = grp_shuffle_48_l_p_fu_6615_output_V_address0.read();
    } else {
        downsampleunit1_outp_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state500.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state584.read()))) {
        downsampleunit1_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        downsampleunit1_outp_ce0 = grp_shuffle_48_r_p_fu_6623_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        downsampleunit1_outp_ce0 = grp_shuffle_48_l_p_fu_6615_output_V_ce0.read();
    } else {
        downsampleunit1_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        downsampleunit1_outp_d0 = grp_shuffle_48_r_p_fu_6623_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        downsampleunit1_outp_d0 = grp_shuffle_48_l_p_fu_6615_output_V_d0.read();
    } else {
        downsampleunit1_outp_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state497.read())) {
        downsampleunit1_outp_we0 = grp_shuffle_48_r_p_fu_6623_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state441.read())) {
        downsampleunit1_outp_we0 = grp_shuffle_48_l_p_fu_6615_output_V_we0.read();
    } else {
        downsampleunit1_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1434.read())) {
        downsampleunit2_outp_address0 =  (sc_lv<13>) (tmp_2098_cast_fu_27474_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1350.read())) {
        downsampleunit2_outp_address0 =  (sc_lv<13>) (tmp_2023_cast_fu_26214_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read())) {
        downsampleunit2_outp_address0 = grp_shuffle_96_r_p_fu_6607_output_V_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        downsampleunit2_outp_address0 = grp_shuffle_96_l_p_fu_6599_output_V_address0.read();
    } else {
        downsampleunit2_outp_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1350.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1434.read()))) {
        downsampleunit2_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read())) {
        downsampleunit2_outp_ce0 = grp_shuffle_96_r_p_fu_6607_output_V_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        downsampleunit2_outp_ce0 = grp_shuffle_96_l_p_fu_6599_output_V_ce0.read();
    } else {
        downsampleunit2_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read())) {
        downsampleunit2_outp_d0 = grp_shuffle_96_r_p_fu_6607_output_V_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        downsampleunit2_outp_d0 = grp_shuffle_96_l_p_fu_6599_output_V_d0.read();
    } else {
        downsampleunit2_outp_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1347.read())) {
        downsampleunit2_outp_we0 = grp_shuffle_96_r_p_fu_6607_output_V_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1291.read())) {
        downsampleunit2_outp_we0 = grp_shuffle_96_l_p_fu_6599_output_V_we0.read();
    } else {
        downsampleunit2_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_12264_p2() {
    exitcond100_fu_12264_p2 = (!h48_reg_3374.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h48_reg_3374.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond101_fu_12681_p2() {
    exitcond101_fu_12681_p2 = (!i44_reg_3429.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_3429.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_12461_p2() {
    exitcond102_fu_12461_p2 = (!ci33_reg_3407.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci33_reg_3407.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond103_fu_12354_p2() {
    exitcond103_fu_12354_p2 = (!w48_reg_3385.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w48_reg_3385.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond104_fu_12793_p2() {
    exitcond104_fu_12793_p2 = (!co68_reg_3451.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co68_reg_3451.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond105_fu_12693_p2() {
    exitcond105_fu_12693_p2 = (!k6_reg_3440.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k6_reg_3440.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond106_fu_12486_p2() {
    exitcond106_fu_12486_p2 = (!i46_reg_3418.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_3418.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond107_fu_13054_p2() {
    exitcond107_fu_13054_p2 = (!i48_reg_3495.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_3495.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond108_fu_12805_p2() {
    exitcond108_fu_12805_p2 = (!w49_reg_3462.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w49_reg_3462.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond109_fu_13162_p2() {
    exitcond109_fu_13162_p2 = (!co70_reg_3517.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co70_reg_3517.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond10_fu_7155_p2() {
    exitcond10_fu_7155_p2 = (!i8_reg_2396.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_2396.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_13066_p2() {
    exitcond110_fu_13066_p2 = (!k7_reg_3506.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k7_reg_3506.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond111_fu_12825_p2() {
    exitcond111_fu_12825_p2 = (!h50_reg_3473.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h50_reg_3473.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond112_fu_13446_p2() {
    exitcond112_fu_13446_p2 = (!i50_reg_3550.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_3550.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond113_fu_13226_p2() {
    exitcond113_fu_13226_p2 = (!ci35_reg_3528.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci35_reg_3528.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond114_fu_12845_p2() {
    exitcond114_fu_12845_p2 = (!i52_reg_3484.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_3484.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond115_fu_13550_p2() {
    exitcond115_fu_13550_p2 = (!co72_reg_3572.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co72_reg_3572.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond116_fu_13458_p2() {
    exitcond116_fu_13458_p2 = (!k8_reg_3561.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_3561.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond117_fu_13251_p2() {
    exitcond117_fu_13251_p2 = (!i54_reg_3539.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i54_reg_3539.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond118_fu_13673_p2() {
    exitcond118_fu_13673_p2 = (!co74_reg_3605.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co74_reg_3605.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond119_fu_13592_p2() {
    exitcond119_fu_13592_p2 = (!h52_reg_3583.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h52_reg_3583.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond11_fu_7080_p2() {
    exitcond11_fu_7080_p2 = (!w6_reg_2374.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w6_reg_2374.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond120_fu_13884_p2() {
    exitcond120_fu_13884_p2 = (!co76_reg_3638.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co76_reg_3638.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond121_fu_13751_p2() {
    exitcond121_fu_13751_p2 = (!h54_reg_3616.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h54_reg_3616.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond122_fu_13643_p2() {
    exitcond122_fu_13643_p2 = (!w51_reg_3594.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w51_reg_3594.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond123_fu_14168_p2() {
    exitcond123_fu_14168_p2 = (!i56_reg_3671.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i56_reg_3671.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond124_fu_13948_p2() {
    exitcond124_fu_13948_p2 = (!ci37_reg_3649.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci37_reg_3649.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond125_fu_13841_p2() {
    exitcond125_fu_13841_p2 = (!w53_reg_3627.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w53_reg_3627.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond126_fu_14280_p2() {
    exitcond126_fu_14280_p2 = (!co78_reg_3693.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co78_reg_3693.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond127_fu_14180_p2() {
    exitcond127_fu_14180_p2 = (!k9_reg_3682.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_3682.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond128_fu_13973_p2() {
    exitcond128_fu_13973_p2 = (!i58_reg_3660.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i58_reg_3660.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond129_fu_14537_p2() {
    exitcond129_fu_14537_p2 = (!i60_reg_3737.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i60_reg_3737.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond12_fu_7176_p2() {
    exitcond12_fu_7176_p2 = (!co9_reg_2408.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_2408.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond130_fu_14292_p2() {
    exitcond130_fu_14292_p2 = (!w55_reg_3704.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w55_reg_3704.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond131_fu_14649_p2() {
    exitcond131_fu_14649_p2 = (!co80_reg_3759.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co80_reg_3759.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond132_fu_14549_p2() {
    exitcond132_fu_14549_p2 = (!k10_reg_3748.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_3748.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond133_fu_14312_p2() {
    exitcond133_fu_14312_p2 = (!h56_reg_3715.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h56_reg_3715.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond134_fu_14933_p2() {
    exitcond134_fu_14933_p2 = (!i62_reg_3792.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i62_reg_3792.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond135_fu_14713_p2() {
    exitcond135_fu_14713_p2 = (!ci39_reg_3770.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci39_reg_3770.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond136_fu_14332_p2() {
    exitcond136_fu_14332_p2 = (!i64_reg_3726.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i64_reg_3726.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond137_fu_15041_p2() {
    exitcond137_fu_15041_p2 = (!co82_reg_3814.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co82_reg_3814.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond138_fu_14945_p2() {
    exitcond138_fu_14945_p2 = (!k12_reg_3803.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k12_reg_3803.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond139_fu_14738_p2() {
    exitcond139_fu_14738_p2 = (!i66_reg_3781.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_3781.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond13_fu_7134_p2() {
    exitcond13_fu_7134_p2 = (!h7_reg_2385.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h7_reg_2385.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond140_fu_15164_p2() {
    exitcond140_fu_15164_p2 = (!co84_reg_3847.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co84_reg_3847.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond141_fu_15083_p2() {
    exitcond141_fu_15083_p2 = (!h58_reg_3825.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h58_reg_3825.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond142_fu_15375_p2() {
    exitcond142_fu_15375_p2 = (!co86_reg_3880.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co86_reg_3880.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond143_fu_15242_p2() {
    exitcond143_fu_15242_p2 = (!h60_reg_3858.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h60_reg_3858.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond144_fu_15134_p2() {
    exitcond144_fu_15134_p2 = (!w57_reg_3836.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w57_reg_3836.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond145_fu_15667_p2() {
    exitcond145_fu_15667_p2 = (!i68_reg_3913.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_3913.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond146_fu_15439_p2() {
    exitcond146_fu_15439_p2 = (!ci41_reg_3891.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci41_reg_3891.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond147_fu_15332_p2() {
    exitcond147_fu_15332_p2 = (!w59_reg_3869.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w59_reg_3869.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond148_fu_15783_p2() {
    exitcond148_fu_15783_p2 = (!co88_reg_3935.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co88_reg_3935.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond149_fu_15679_p2() {
    exitcond149_fu_15679_p2 = (!k14_reg_3924.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k14_reg_3924.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond14_fu_7313_p2() {
    exitcond14_fu_7313_p2 = (!i6_reg_2431.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i6_reg_2431.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond150_fu_15464_p2() {
    exitcond150_fu_15464_p2 = (!i70_reg_3902.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_3902.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond151_fu_16036_p2() {
    exitcond151_fu_16036_p2 = (!i72_reg_3979.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_3979.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond152_fu_15795_p2() {
    exitcond152_fu_15795_p2 = (!w61_reg_3946.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w61_reg_3946.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond153_fu_16148_p2() {
    exitcond153_fu_16148_p2 = (!co90_reg_4001.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co90_reg_4001.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond154_fu_16048_p2() {
    exitcond154_fu_16048_p2 = (!k16_reg_3990.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k16_reg_3990.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond155_fu_15815_p2() {
    exitcond155_fu_15815_p2 = (!h62_reg_3957.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h62_reg_3957.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond156_fu_16432_p2() {
    exitcond156_fu_16432_p2 = (!i74_reg_4034.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_4034.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond157_fu_16212_p2() {
    exitcond157_fu_16212_p2 = (!ci43_reg_4012.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci43_reg_4012.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond158_fu_15835_p2() {
    exitcond158_fu_15835_p2 = (!i76_reg_3968.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i76_reg_3968.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond159_fu_16540_p2() {
    exitcond159_fu_16540_p2 = (!co92_reg_4056.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co92_reg_4056.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond15_fu_7288_p2() {
    exitcond15_fu_7288_p2 = (!ci10_reg_2420.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_2420.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond160_fu_16444_p2() {
    exitcond160_fu_16444_p2 = (!k18_reg_4045.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k18_reg_4045.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond161_fu_16237_p2() {
    exitcond161_fu_16237_p2 = (!i78_reg_4023.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i78_reg_4023.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond162_fu_16663_p2() {
    exitcond162_fu_16663_p2 = (!co94_reg_4089.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co94_reg_4089.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond163_fu_16582_p2() {
    exitcond163_fu_16582_p2 = (!h64_reg_4067.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h64_reg_4067.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond164_fu_16874_p2() {
    exitcond164_fu_16874_p2 = (!co96_reg_4122.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co96_reg_4122.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond165_fu_16741_p2() {
    exitcond165_fu_16741_p2 = (!h66_reg_4100.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h66_reg_4100.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond166_fu_16633_p2() {
    exitcond166_fu_16633_p2 = (!w63_reg_4078.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w63_reg_4078.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond167_fu_17158_p2() {
    exitcond167_fu_17158_p2 = (!i80_reg_4155.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i80_reg_4155.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond168_fu_16938_p2() {
    exitcond168_fu_16938_p2 = (!ci45_reg_4133.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci45_reg_4133.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond169_fu_16831_p2() {
    exitcond169_fu_16831_p2 = (!w65_reg_4111.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w65_reg_4111.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond16_fu_7334_p2() {
    exitcond16_fu_7334_p2 = (!co12_reg_2443.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_2443.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond170_fu_17270_p2() {
    exitcond170_fu_17270_p2 = (!co98_reg_4177.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co98_reg_4177.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond171_fu_17170_p2() {
    exitcond171_fu_17170_p2 = (!k20_reg_4166.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k20_reg_4166.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond172_fu_16963_p2() {
    exitcond172_fu_16963_p2 = (!i82_reg_4144.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i82_reg_4144.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond173_fu_17523_p2() {
    exitcond173_fu_17523_p2 = (!i84_reg_4221.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i84_reg_4221.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond174_fu_17282_p2() {
    exitcond174_fu_17282_p2 = (!w67_reg_4188.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w67_reg_4188.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond175_fu_17631_p2() {
    exitcond175_fu_17631_p2 = (!co100_reg_4243.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co100_reg_4243.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond176_fu_17535_p2() {
    exitcond176_fu_17535_p2 = (!k22_reg_4232.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k22_reg_4232.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond177_fu_17302_p2() {
    exitcond177_fu_17302_p2 = (!h68_reg_4199.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h68_reg_4199.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond178_fu_17915_p2() {
    exitcond178_fu_17915_p2 = (!i86_reg_4276.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i86_reg_4276.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond179_fu_17695_p2() {
    exitcond179_fu_17695_p2 = (!ci47_reg_4254.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci47_reg_4254.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond17_fu_7496_p2() {
    exitcond17_fu_7496_p2 = (!tmp_357_reg_2476.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_357_reg_2476.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond180_fu_17322_p2() {
    exitcond180_fu_17322_p2 = (!i88_reg_4210.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_4210.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond181_fu_18019_p2() {
    exitcond181_fu_18019_p2 = (!co102_reg_4298.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co102_reg_4298.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond182_fu_17927_p2() {
    exitcond182_fu_17927_p2 = (!k24_reg_4287.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k24_reg_4287.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond183_fu_17720_p2() {
    exitcond183_fu_17720_p2 = (!i90_reg_4265.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_4265.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond184_fu_18142_p2() {
    exitcond184_fu_18142_p2 = (!co104_reg_4331.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co104_reg_4331.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond185_fu_18061_p2() {
    exitcond185_fu_18061_p2 = (!h70_reg_4309.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h70_reg_4309.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond186_fu_18353_p2() {
    exitcond186_fu_18353_p2 = (!co106_reg_4364.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co106_reg_4364.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond187_fu_18220_p2() {
    exitcond187_fu_18220_p2 = (!h72_reg_4342.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h72_reg_4342.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond188_fu_18112_p2() {
    exitcond188_fu_18112_p2 = (!w69_reg_4320.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w69_reg_4320.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond189_fu_18637_p2() {
    exitcond189_fu_18637_p2 = (!i92_reg_4397.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_4397.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond18_fu_7400_p2() {
    exitcond18_fu_7400_p2 = (!w13_reg_2454.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_2454.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond190_fu_18417_p2() {
    exitcond190_fu_18417_p2 = (!ci49_reg_4375.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci49_reg_4375.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond191_fu_18310_p2() {
    exitcond191_fu_18310_p2 = (!w71_reg_4353.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w71_reg_4353.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond192_fu_18749_p2() {
    exitcond192_fu_18749_p2 = (!co108_reg_4419.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co108_reg_4419.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond193_fu_18649_p2() {
    exitcond193_fu_18649_p2 = (!k26_reg_4408.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k26_reg_4408.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond194_fu_18442_p2() {
    exitcond194_fu_18442_p2 = (!i94_reg_4386.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_4386.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond195_fu_19010_p2() {
    exitcond195_fu_19010_p2 = (!i96_reg_4463.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_4463.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond196_fu_18761_p2() {
    exitcond196_fu_18761_p2 = (!w73_reg_4430.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w73_reg_4430.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond197_fu_19118_p2() {
    exitcond197_fu_19118_p2 = (!co110_reg_4485.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co110_reg_4485.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond198_fu_19022_p2() {
    exitcond198_fu_19022_p2 = (!k28_reg_4474.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k28_reg_4474.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond199_fu_18781_p2() {
    exitcond199_fu_18781_p2 = (!h74_reg_4441.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h74_reg_4441.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond19_fu_7548_p2() {
    exitcond19_fu_7548_p2 = (!co16_reg_2488.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_2488.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond1_fu_6745_p2() {
    exitcond1_fu_6745_p2 = (!i2_reg_2284.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_2284.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond200_fu_19402_p2() {
    exitcond200_fu_19402_p2 = (!i98_reg_4518.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i98_reg_4518.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond201_fu_19182_p2() {
    exitcond201_fu_19182_p2 = (!ci51_reg_4496.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci51_reg_4496.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond202_fu_18801_p2() {
    exitcond202_fu_18801_p2 = (!i100_reg_4452.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i100_reg_4452.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond203_fu_19506_p2() {
    exitcond203_fu_19506_p2 = (!co112_reg_4540.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co112_reg_4540.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond204_fu_19414_p2() {
    exitcond204_fu_19414_p2 = (!k30_reg_4529.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k30_reg_4529.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond205_fu_19207_p2() {
    exitcond205_fu_19207_p2 = (!i102_reg_4507.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i102_reg_4507.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond206_fu_19629_p2() {
    exitcond206_fu_19629_p2 = (!co114_reg_4573.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co114_reg_4573.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond207_fu_19548_p2() {
    exitcond207_fu_19548_p2 = (!h76_reg_4551.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h76_reg_4551.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond208_fu_19840_p2() {
    exitcond208_fu_19840_p2 = (!co116_reg_4606.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co116_reg_4606.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond209_fu_19707_p2() {
    exitcond209_fu_19707_p2 = (!h78_reg_4584.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h78_reg_4584.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond20_fu_7471_p2() {
    exitcond20_fu_7471_p2 = (!h14_reg_2465.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_2465.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond210_fu_19599_p2() {
    exitcond210_fu_19599_p2 = (!w75_reg_4562.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w75_reg_4562.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond211_fu_20124_p2() {
    exitcond211_fu_20124_p2 = (!i104_reg_4639.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i104_reg_4639.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond212_fu_19904_p2() {
    exitcond212_fu_19904_p2 = (!ci53_reg_4617.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci53_reg_4617.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond213_fu_19797_p2() {
    exitcond213_fu_19797_p2 = (!w77_reg_4595.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w77_reg_4595.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond214_fu_20236_p2() {
    exitcond214_fu_20236_p2 = (!co118_reg_4661.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co118_reg_4661.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond215_fu_20136_p2() {
    exitcond215_fu_20136_p2 = (!k32_reg_4650.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k32_reg_4650.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond216_fu_19929_p2() {
    exitcond216_fu_19929_p2 = (!i106_reg_4628.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i106_reg_4628.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond217_fu_20501_p2() {
    exitcond217_fu_20501_p2 = (!i108_reg_4705.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i108_reg_4705.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond218_fu_20248_p2() {
    exitcond218_fu_20248_p2 = (!w79_reg_4672.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w79_reg_4672.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond219_fu_20609_p2() {
    exitcond219_fu_20609_p2 = (!co120_reg_4727.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co120_reg_4727.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond21_fu_7685_p2() {
    exitcond21_fu_7685_p2 = (!i9_reg_2511.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i9_reg_2511.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond220_fu_20513_p2() {
    exitcond220_fu_20513_p2 = (!k34_reg_4716.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k34_reg_4716.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond221_fu_20268_p2() {
    exitcond221_fu_20268_p2 = (!h80_reg_4683.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h80_reg_4683.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond222_fu_20893_p2() {
    exitcond222_fu_20893_p2 = (!i110_reg_4760.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_4760.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond223_fu_20673_p2() {
    exitcond223_fu_20673_p2 = (!ci55_reg_4738.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci55_reg_4738.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond224_fu_20288_p2() {
    exitcond224_fu_20288_p2 = (!i112_reg_4694.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_4694.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond225_fu_20997_p2() {
    exitcond225_fu_20997_p2 = (!co122_reg_4782.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co122_reg_4782.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond226_fu_20905_p2() {
    exitcond226_fu_20905_p2 = (!k36_reg_4771.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k36_reg_4771.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond227_fu_20698_p2() {
    exitcond227_fu_20698_p2 = (!i114_reg_4749.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_4749.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond228_fu_21120_p2() {
    exitcond228_fu_21120_p2 = (!co124_reg_4815.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co124_reg_4815.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond229_fu_21039_p2() {
    exitcond229_fu_21039_p2 = (!h82_reg_4793.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h82_reg_4793.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond22_fu_7660_p2() {
    exitcond22_fu_7660_p2 = (!ci13_reg_2500.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci13_reg_2500.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond230_fu_21331_p2() {
    exitcond230_fu_21331_p2 = (!co126_reg_4848.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co126_reg_4848.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond231_fu_21198_p2() {
    exitcond231_fu_21198_p2 = (!h84_reg_4826.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h84_reg_4826.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond232_fu_21090_p2() {
    exitcond232_fu_21090_p2 = (!w81_reg_4804.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w81_reg_4804.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond233_fu_21623_p2() {
    exitcond233_fu_21623_p2 = (!i116_reg_4881.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_4881.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond234_fu_21395_p2() {
    exitcond234_fu_21395_p2 = (!ci57_reg_4859.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci57_reg_4859.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond235_fu_21288_p2() {
    exitcond235_fu_21288_p2 = (!w83_reg_4837.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w83_reg_4837.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond236_fu_21735_p2() {
    exitcond236_fu_21735_p2 = (!co128_reg_4903.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co128_reg_4903.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond237_fu_21635_p2() {
    exitcond237_fu_21635_p2 = (!k38_reg_4892.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k38_reg_4892.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond238_fu_21420_p2() {
    exitcond238_fu_21420_p2 = (!i118_reg_4870.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_4870.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond239_fu_21992_p2() {
    exitcond239_fu_21992_p2 = (!i120_reg_4947.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i120_reg_4947.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond23_fu_7706_p2() {
    exitcond23_fu_7706_p2 = (!co19_reg_2523.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_2523.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond240_fu_21747_p2() {
    exitcond240_fu_21747_p2 = (!w85_reg_4914.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w85_reg_4914.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond241_fu_22100_p2() {
    exitcond241_fu_22100_p2 = (!co130_reg_4969.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co130_reg_4969.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond242_fu_22004_p2() {
    exitcond242_fu_22004_p2 = (!k40_reg_4958.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k40_reg_4958.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond243_fu_21767_p2() {
    exitcond243_fu_21767_p2 = (!h86_reg_4925.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h86_reg_4925.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond244_fu_22392_p2() {
    exitcond244_fu_22392_p2 = (!i122_reg_5002.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i122_reg_5002.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond245_fu_22164_p2() {
    exitcond245_fu_22164_p2 = (!ci59_reg_4980.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci59_reg_4980.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond246_fu_21787_p2() {
    exitcond246_fu_21787_p2 = (!i124_reg_4936.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i124_reg_4936.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond247_fu_22500_p2() {
    exitcond247_fu_22500_p2 = (!co132_reg_5024.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co132_reg_5024.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond248_fu_22404_p2() {
    exitcond248_fu_22404_p2 = (!k42_reg_5013.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k42_reg_5013.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond249_fu_22189_p2() {
    exitcond249_fu_22189_p2 = (!i126_reg_4991.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i126_reg_4991.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond24_fu_7909_p2() {
    exitcond24_fu_7909_p2 = (!co22_reg_2556.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co22_reg_2556.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond250_fu_22623_p2() {
    exitcond250_fu_22623_p2 = (!co134_reg_5057.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co134_reg_5057.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond251_fu_22542_p2() {
    exitcond251_fu_22542_p2 = (!h88_reg_5035.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h88_reg_5035.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond252_fu_22834_p2() {
    exitcond252_fu_22834_p2 = (!co136_reg_5090.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co136_reg_5090.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond253_fu_22701_p2() {
    exitcond253_fu_22701_p2 = (!h90_reg_5068.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h90_reg_5068.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond254_fu_22593_p2() {
    exitcond254_fu_22593_p2 = (!w87_reg_5046.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w87_reg_5046.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond255_fu_23126_p2() {
    exitcond255_fu_23126_p2 = (!i128_reg_5123.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i128_reg_5123.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond256_fu_22898_p2() {
    exitcond256_fu_22898_p2 = (!ci61_reg_5101.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci61_reg_5101.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond257_fu_22791_p2() {
    exitcond257_fu_22791_p2 = (!w89_reg_5079.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w89_reg_5079.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond258_fu_23242_p2() {
    exitcond258_fu_23242_p2 = (!co138_reg_5145.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co138_reg_5145.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond259_fu_23138_p2() {
    exitcond259_fu_23138_p2 = (!k44_reg_5134.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k44_reg_5134.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond25_fu_7784_p2() {
    exitcond25_fu_7784_p2 = (!h20_reg_2534.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h20_reg_2534.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond260_fu_22923_p2() {
    exitcond260_fu_22923_p2 = (!i130_reg_5112.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i130_reg_5112.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond261_fu_23495_p2() {
    exitcond261_fu_23495_p2 = (!i132_reg_5189.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_5189.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond262_fu_23254_p2() {
    exitcond262_fu_23254_p2 = (!w91_reg_5156.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w91_reg_5156.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond263_fu_23607_p2() {
    exitcond263_fu_23607_p2 = (!co140_reg_5211.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co140_reg_5211.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond264_fu_23507_p2() {
    exitcond264_fu_23507_p2 = (!k46_reg_5200.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k46_reg_5200.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond265_fu_23274_p2() {
    exitcond265_fu_23274_p2 = (!h92_reg_5167.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h92_reg_5167.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond266_fu_23899_p2() {
    exitcond266_fu_23899_p2 = (!i134_reg_5244.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_5244.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond267_fu_23671_p2() {
    exitcond267_fu_23671_p2 = (!ci63_reg_5222.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci63_reg_5222.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond268_fu_23294_p2() {
    exitcond268_fu_23294_p2 = (!i136_reg_5178.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_5178.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond269_fu_24007_p2() {
    exitcond269_fu_24007_p2 = (!co142_reg_5266.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co142_reg_5266.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond26_fu_8046_p2() {
    exitcond26_fu_8046_p2 = (!i10_reg_2579.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i10_reg_2579.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond270_fu_23911_p2() {
    exitcond270_fu_23911_p2 = (!k48_reg_5255.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k48_reg_5255.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond271_fu_23696_p2() {
    exitcond271_fu_23696_p2 = (!i138_reg_5233.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_5233.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond272_fu_24130_p2() {
    exitcond272_fu_24130_p2 = (!co144_reg_5299.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co144_reg_5299.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond273_fu_24049_p2() {
    exitcond273_fu_24049_p2 = (!h94_reg_5277.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h94_reg_5277.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond274_fu_24402_p2() {
    exitcond274_fu_24402_p2 = (!i140_reg_5332.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_5332.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond275_fu_24192_p2() {
    exitcond275_fu_24192_p2 = (!ci65_reg_5310.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci65_reg_5310.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond276_fu_24100_p2() {
    exitcond276_fu_24100_p2 = (!w93_reg_5288.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w93_reg_5288.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond277_fu_24518_p2() {
    exitcond277_fu_24518_p2 = (!co146_reg_5354.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co146_reg_5354.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond278_fu_24414_p2() {
    exitcond278_fu_24414_p2 = (!k50_reg_5343.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k50_reg_5343.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond279_fu_24217_p2() {
    exitcond279_fu_24217_p2 = (!i142_reg_5321.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i142_reg_5321.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond27_fu_8021_p2() {
    exitcond27_fu_8021_p2 = (!ci15_reg_2568.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci15_reg_2568.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond280_fu_24771_p2() {
    exitcond280_fu_24771_p2 = (!i144_reg_5398.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i144_reg_5398.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond281_fu_24530_p2() {
    exitcond281_fu_24530_p2 = (!w95_reg_5365.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w95_reg_5365.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond282_fu_24883_p2() {
    exitcond282_fu_24883_p2 = (!co148_reg_5420.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co148_reg_5420.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond283_fu_24783_p2() {
    exitcond283_fu_24783_p2 = (!k52_reg_5409.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k52_reg_5409.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond284_fu_24550_p2() {
    exitcond284_fu_24550_p2 = (!h96_reg_5376.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h96_reg_5376.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond285_fu_25155_p2() {
    exitcond285_fu_25155_p2 = (!i146_reg_5453.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i146_reg_5453.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond286_fu_24945_p2() {
    exitcond286_fu_24945_p2 = (!ci67_reg_5431.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci67_reg_5431.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond287_fu_24570_p2() {
    exitcond287_fu_24570_p2 = (!i148_reg_5387.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i148_reg_5387.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond288_fu_25275_p2() {
    exitcond288_fu_25275_p2 = (!co150_reg_5475.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co150_reg_5475.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond289_fu_25167_p2() {
    exitcond289_fu_25167_p2 = (!k54_reg_5464.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k54_reg_5464.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond28_fu_7866_p2() {
    exitcond28_fu_7866_p2 = (!w21_reg_2545.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w21_reg_2545.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond290_fu_24970_p2() {
    exitcond290_fu_24970_p2 = (!i150_reg_5442.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_5442.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond291_fu_25528_p2() {
    exitcond291_fu_25528_p2 = (!i152_reg_5519.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_5519.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond292_fu_25287_p2() {
    exitcond292_fu_25287_p2 = (!w97_reg_5486.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w97_reg_5486.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond293_fu_25636_p2() {
    exitcond293_fu_25636_p2 = (!co152_reg_5541.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co152_reg_5541.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond294_fu_25540_p2() {
    exitcond294_fu_25540_p2 = (!k56_reg_5530.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k56_reg_5530.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond295_fu_30535_p2() {
    exitcond295_fu_30535_p2 = (!h118_reg_6344.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h118_reg_6344.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond296_fu_30471_p2() {
    exitcond296_fu_30471_p2 = (!w115_reg_6333.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w115_reg_6333.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond297_fu_30413_p2() {
    exitcond297_fu_30413_p2 = (!ci82_reg_6322.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ci82_reg_6322.read() == ap_const_lv8_C0);
}

void ShuffleNetV2::thread_exitcond298_fu_30387_p2() {
    exitcond298_fu_30387_p2 = (!w116_reg_6311.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w116_reg_6311.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond299_fu_30336_p2() {
    exitcond299_fu_30336_p2 = (!h116_reg_6300.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h116_reg_6300.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond29_fu_8067_p2() {
    exitcond29_fu_8067_p2 = (!co25_reg_2591.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co25_reg_2591.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond2_fu_6762_p2() {
    exitcond2_fu_6762_p2 = (!ci_reg_2296.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_2296.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond300_fu_30290_p2() {
    exitcond300_fu_30290_p2 = (!co182_reg_6289.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co182_reg_6289.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond301_fu_30198_p2() {
    exitcond301_fu_30198_p2 = (!k76_reg_6278.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k76_reg_6278.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond302_fu_30186_p2() {
    exitcond302_fu_30186_p2 = (!i190_reg_6267.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i190_reg_6267.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond303_fu_30001_p2() {
    exitcond303_fu_30001_p2 = (!i194_reg_6256.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i194_reg_6256.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond304_fu_29976_p2() {
    exitcond304_fu_29976_p2 = (!ci81_reg_6245.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci81_reg_6245.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond305_fu_29914_p2() {
    exitcond305_fu_29914_p2 = (!co180_reg_6234.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co180_reg_6234.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond306_fu_29818_p2() {
    exitcond306_fu_29818_p2 = (!k74_reg_6223.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k74_reg_6223.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond307_fu_29806_p2() {
    exitcond307_fu_29806_p2 = (!i188_reg_6212.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i188_reg_6212.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond308_fu_29601_p2() {
    exitcond308_fu_29601_p2 = (!i192_reg_6201.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i192_reg_6201.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond309_fu_29581_p2() {
    exitcond309_fu_29581_p2 = (!h114_reg_6190.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h114_reg_6190.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond30_fu_8246_p2() {
    exitcond30_fu_8246_p2 = (!i11_reg_2624.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_2624.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_29561_p2() {
    exitcond310_fu_29561_p2 = (!w113_reg_6179.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w113_reg_6179.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond311_fu_29549_p2() {
    exitcond311_fu_29549_p2 = (!co178_reg_6168.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co178_reg_6168.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond312_fu_29449_p2() {
    exitcond312_fu_29449_p2 = (!k72_reg_6157.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k72_reg_6157.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond313_fu_29437_p2() {
    exitcond313_fu_29437_p2 = (!i184_reg_6146.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i184_reg_6146.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond314_fu_29252_p2() {
    exitcond314_fu_29252_p2 = (!i186_reg_6135.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i186_reg_6135.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond315_fu_29227_p2() {
    exitcond315_fu_29227_p2 = (!ci79_reg_6124.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci79_reg_6124.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_29165_p2() {
    exitcond316_fu_29165_p2 = (!co176_reg_6113.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co176_reg_6113.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond317_fu_29122_p2() {
    exitcond317_fu_29122_p2 = (!w111_reg_6102.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w111_reg_6102.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond318_fu_29040_p2() {
    exitcond318_fu_29040_p2 = (!h112_reg_6091.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h112_reg_6091.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond319_fu_28954_p2() {
    exitcond319_fu_28954_p2 = (!co174_reg_6080.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co174_reg_6080.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond31_fu_8148_p2() {
    exitcond31_fu_8148_p2 = (!w26_reg_2602.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_2602.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond320_fu_28924_p2() {
    exitcond320_fu_28924_p2 = (!w109_reg_6069.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w109_reg_6069.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond321_fu_28873_p2() {
    exitcond321_fu_28873_p2 = (!h110_reg_6058.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h110_reg_6058.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond322_fu_28827_p2() {
    exitcond322_fu_28827_p2 = (!co172_reg_6047.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co172_reg_6047.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond323_fu_28735_p2() {
    exitcond323_fu_28735_p2 = (!k70_reg_6036.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k70_reg_6036.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond324_fu_28723_p2() {
    exitcond324_fu_28723_p2 = (!i178_reg_6025.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_6025.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond325_fu_28538_p2() {
    exitcond325_fu_28538_p2 = (!i182_reg_6014.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i182_reg_6014.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond326_fu_28513_p2() {
    exitcond326_fu_28513_p2 = (!ci77_reg_6003.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci77_reg_6003.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond327_fu_28451_p2() {
    exitcond327_fu_28451_p2 = (!co170_reg_5992.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co170_reg_5992.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond328_fu_28355_p2() {
    exitcond328_fu_28355_p2 = (!k68_reg_5981.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k68_reg_5981.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond329_fu_28343_p2() {
    exitcond329_fu_28343_p2 = (!i176_reg_5970.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_5970.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond32_fu_8263_p2() {
    exitcond32_fu_8263_p2 = (!co29_reg_2636.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_2636.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond330_fu_28130_p2() {
    exitcond330_fu_28130_p2 = (!i180_reg_5959.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_5959.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond331_fu_28110_p2() {
    exitcond331_fu_28110_p2 = (!h108_reg_5948.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h108_reg_5948.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond332_fu_28090_p2() {
    exitcond332_fu_28090_p2 = (!w107_reg_5937.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w107_reg_5937.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond333_fu_28078_p2() {
    exitcond333_fu_28078_p2 = (!co168_reg_5926.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co168_reg_5926.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond334_fu_27978_p2() {
    exitcond334_fu_27978_p2 = (!k66_reg_5915.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k66_reg_5915.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond335_fu_27966_p2() {
    exitcond335_fu_27966_p2 = (!i172_reg_5904.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_5904.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond336_fu_27781_p2() {
    exitcond336_fu_27781_p2 = (!i174_reg_5893.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_5893.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond337_fu_27756_p2() {
    exitcond337_fu_27756_p2 = (!ci75_reg_5882.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci75_reg_5882.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond338_fu_27694_p2() {
    exitcond338_fu_27694_p2 = (!co166_reg_5871.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co166_reg_5871.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond339_fu_27651_p2() {
    exitcond339_fu_27651_p2 = (!w105_reg_5860.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w105_reg_5860.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond33_fu_8221_p2() {
    exitcond33_fu_8221_p2 = (!h27_reg_2613.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h27_reg_2613.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond340_fu_27569_p2() {
    exitcond340_fu_27569_p2 = (!h106_reg_5849.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h106_reg_5849.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond341_fu_27483_p2() {
    exitcond341_fu_27483_p2 = (!co164_reg_5838.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co164_reg_5838.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond342_fu_27453_p2() {
    exitcond342_fu_27453_p2 = (!w103_reg_5827.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w103_reg_5827.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond343_fu_27402_p2() {
    exitcond343_fu_27402_p2 = (!h104_reg_5816.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h104_reg_5816.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond344_fu_27356_p2() {
    exitcond344_fu_27356_p2 = (!co162_reg_5805.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co162_reg_5805.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond345_fu_27264_p2() {
    exitcond345_fu_27264_p2 = (!k64_reg_5794.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k64_reg_5794.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond346_fu_27252_p2() {
    exitcond346_fu_27252_p2 = (!i166_reg_5783.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i166_reg_5783.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond347_fu_27059_p2() {
    exitcond347_fu_27059_p2 = (!i170_reg_5772.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i170_reg_5772.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond348_fu_27034_p2() {
    exitcond348_fu_27034_p2 = (!ci73_reg_5761.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci73_reg_5761.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond349_fu_26972_p2() {
    exitcond349_fu_26972_p2 = (!co160_reg_5750.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co160_reg_5750.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond34_fu_8391_p2() {
    exitcond34_fu_8391_p2 = (!tmp_644_reg_2659.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_644_reg_2659.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond350_fu_26876_p2() {
    exitcond350_fu_26876_p2 = (!k62_reg_5739.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k62_reg_5739.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond351_fu_26864_p2() {
    exitcond351_fu_26864_p2 = (!i164_reg_5728.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i164_reg_5728.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond352_fu_26663_p2() {
    exitcond352_fu_26663_p2 = (!i168_reg_5717.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i168_reg_5717.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond353_fu_26643_p2() {
    exitcond353_fu_26643_p2 = (!h102_reg_5706.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h102_reg_5706.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond354_fu_26623_p2() {
    exitcond354_fu_26623_p2 = (!w101_reg_5695.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w101_reg_5695.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond355_fu_26611_p2() {
    exitcond355_fu_26611_p2 = (!co158_reg_5684.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co158_reg_5684.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_26511_p2() {
    exitcond356_fu_26511_p2 = (!k60_reg_5673.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k60_reg_5673.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond357_fu_26499_p2() {
    exitcond357_fu_26499_p2 = (!i160_reg_5662.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i160_reg_5662.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond358_fu_26314_p2() {
    exitcond358_fu_26314_p2 = (!i162_reg_5651.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i162_reg_5651.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond359_fu_26289_p2() {
    exitcond359_fu_26289_p2 = (!ci71_reg_5640.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci71_reg_5640.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond35_fu_8366_p2() {
    exitcond35_fu_8366_p2 = (!ci17_reg_2648.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci17_reg_2648.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond360_fu_26227_p2() {
    exitcond360_fu_26227_p2 = (!co156_reg_5629.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co156_reg_5629.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond361_fu_26184_p2() {
    exitcond361_fu_26184_p2 = (!w99_reg_5618.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w99_reg_5618.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond362_fu_26102_p2() {
    exitcond362_fu_26102_p2 = (!h100_reg_5607.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h100_reg_5607.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond363_fu_26016_p2() {
    exitcond363_fu_26016_p2 = (!co154_reg_5596.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co154_reg_5596.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond364_fu_25920_p2() {
    exitcond364_fu_25920_p2 = (!k58_reg_5585.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k58_reg_5585.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond365_fu_25908_p2() {
    exitcond365_fu_25908_p2 = (!i154_reg_5574.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_5574.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond366_fu_25723_p2() {
    exitcond366_fu_25723_p2 = (!i158_reg_5563.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_5563.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond367_fu_25698_p2() {
    exitcond367_fu_25698_p2 = (!ci69_reg_5552.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci69_reg_5552.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond368_fu_25307_p2() {
    exitcond368_fu_25307_p2 = (!h98_reg_5497.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h98_reg_5497.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond369_fu_25327_p2() {
    exitcond369_fu_25327_p2 = (!i156_reg_5508.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_5508.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond36_fu_8439_p2() {
    exitcond36_fu_8439_p2 = (!co32_reg_2671.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co32_reg_2671.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond37_fu_8562_p2() {
    exitcond37_fu_8562_p2 = (!co35_reg_2704.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co35_reg_2704.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond38_fu_8481_p2() {
    exitcond38_fu_8481_p2 = (!h30_reg_2682.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h30_reg_2682.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond39_fu_8765_p2() {
    exitcond39_fu_8765_p2 = (!co36_reg_2737.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co36_reg_2737.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond3_fu_6906_p2() {
    exitcond3_fu_6906_p2 = (!co_reg_2329.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_2329.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond40_fu_8640_p2() {
    exitcond40_fu_8640_p2 = (!h32_reg_2715.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h32_reg_2715.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond41_fu_8532_p2() {
    exitcond41_fu_8532_p2 = (!w30_reg_2693.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w30_reg_2693.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond42_fu_8902_p2() {
    exitcond42_fu_8902_p2 = (!i14_reg_2760.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i14_reg_2760.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond43_fu_8877_p2() {
    exitcond43_fu_8877_p2 = (!ci19_reg_2749.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci19_reg_2749.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond44_fu_8722_p2() {
    exitcond44_fu_8722_p2 = (!w32_reg_2726.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w32_reg_2726.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond45_fu_8923_p2() {
    exitcond45_fu_8923_p2 = (!co38_reg_2772.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_2772.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond46_fu_9102_p2() {
    exitcond46_fu_9102_p2 = (!i16_reg_2805.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i16_reg_2805.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond47_fu_9004_p2() {
    exitcond47_fu_9004_p2 = (!w34_reg_2783.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_2783.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond48_fu_9123_p2() {
    exitcond48_fu_9123_p2 = (!co40_reg_2817.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co40_reg_2817.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond49_fu_9077_p2() {
    exitcond49_fu_9077_p2 = (!h34_reg_2794.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h34_reg_2794.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond4_fu_6804_p2() {
    exitcond4_fu_6804_p2 = (!w_reg_2307.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_2307.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond50_fu_9260_p2() {
    exitcond50_fu_9260_p2 = (!i18_reg_2840.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i18_reg_2840.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond51_fu_9235_p2() {
    exitcond51_fu_9235_p2 = (!ci21_reg_2829.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci21_reg_2829.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond52_fu_9277_p2() {
    exitcond52_fu_9277_p2 = (!co42_reg_2852.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co42_reg_2852.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond53_fu_9400_p2() {
    exitcond53_fu_9400_p2 = (!co44_reg_2885.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co44_reg_2885.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond54_fu_9319_p2() {
    exitcond54_fu_9319_p2 = (!h36_reg_2863.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h36_reg_2863.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond55_fu_9603_p2() {
    exitcond55_fu_9603_p2 = (!co46_reg_2918.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co46_reg_2918.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond56_fu_9478_p2() {
    exitcond56_fu_9478_p2 = (!h38_reg_2896.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h38_reg_2896.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond57_fu_9370_p2() {
    exitcond57_fu_9370_p2 = (!w36_reg_2874.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w36_reg_2874.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond58_fu_9725_p2() {
    exitcond58_fu_9725_p2 = (!tmp_887_reg_2941.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(tmp_887_reg_2941.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond59_fu_9700_p2() {
    exitcond59_fu_9700_p2 = (!ci23_reg_2930.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci23_reg_2930.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond5_fu_7010_p2() {
    exitcond5_fu_7010_p2 = (!i4_reg_2351.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_2351.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond60_fu_9560_p2() {
    exitcond60_fu_9560_p2 = (!w38_reg_2907.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w38_reg_2907.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond61_fu_9769_p2() {
    exitcond61_fu_9769_p2 = (!co48_reg_2953.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co48_reg_2953.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond62_fu_9964_p2() {
    exitcond62_fu_9964_p2 = (!i21_reg_2986.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i21_reg_2986.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond63_fu_9866_p2() {
    exitcond63_fu_9866_p2 = (!w40_reg_2964.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w40_reg_2964.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond64_fu_9981_p2() {
    exitcond64_fu_9981_p2 = (!co50_reg_2998.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co50_reg_2998.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond65_fu_9939_p2() {
    exitcond65_fu_9939_p2 = (!h40_reg_2975.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h40_reg_2975.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond66_fu_10124_p2() {
    exitcond66_fu_10124_p2 = (!i23_reg_3021.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_3021.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond67_fu_10099_p2() {
    exitcond67_fu_10099_p2 = (!ci25_reg_3010.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci25_reg_3010.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond68_fu_10141_p2() {
    exitcond68_fu_10141_p2 = (!co52_reg_3033.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co52_reg_3033.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond69_fu_10264_p2() {
    exitcond69_fu_10264_p2 = (!co54_reg_3066.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co54_reg_3066.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond6_fu_6985_p2() {
    exitcond6_fu_6985_p2 = (!ci3_reg_2340.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_2340.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond70_fu_10183_p2() {
    exitcond70_fu_10183_p2 = (!h42_reg_3044.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h42_reg_3044.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond71_fu_10548_p2() {
    exitcond71_fu_10548_p2 = (!i25_reg_3099.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_3099.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond72_fu_10328_p2() {
    exitcond72_fu_10328_p2 = (!ci27_reg_3077.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci27_reg_3077.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond73_fu_10234_p2() {
    exitcond73_fu_10234_p2 = (!w42_reg_3055.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_3055.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond74_fu_10660_p2() {
    exitcond74_fu_10660_p2 = (!co56_reg_3121.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co56_reg_3121.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond75_fu_10560_p2() {
    exitcond75_fu_10560_p2 = (!k_reg_3110.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_3110.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond76_fu_10353_p2() {
    exitcond76_fu_10353_p2 = (!i27_reg_3088.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i27_reg_3088.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond77_fu_10917_p2() {
    exitcond77_fu_10917_p2 = (!i29_reg_3165.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i29_reg_3165.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond78_fu_10672_p2() {
    exitcond78_fu_10672_p2 = (!w44_reg_3132.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w44_reg_3132.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond79_fu_11029_p2() {
    exitcond79_fu_11029_p2 = (!co58_reg_3187.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co58_reg_3187.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond7_fu_6881_p2() {
    exitcond7_fu_6881_p2 = (!h_reg_2318.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_2318.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond80_fu_10929_p2() {
    exitcond80_fu_10929_p2 = (!k2_reg_3176.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k2_reg_3176.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond81_fu_10692_p2() {
    exitcond81_fu_10692_p2 = (!h44_reg_3143.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h44_reg_3143.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond82_fu_11313_p2() {
    exitcond82_fu_11313_p2 = (!i31_reg_3220.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i31_reg_3220.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond83_fu_11093_p2() {
    exitcond83_fu_11093_p2 = (!ci29_reg_3198.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci29_reg_3198.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond84_fu_10712_p2() {
    exitcond84_fu_10712_p2 = (!i33_reg_3154.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i33_reg_3154.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond85_fu_11429_p2() {
    exitcond85_fu_11429_p2 = (!co60_reg_3242.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co60_reg_3242.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond86_fu_11325_p2() {
    exitcond86_fu_11325_p2 = (!k3_reg_3231.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k3_reg_3231.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond87_fu_11118_p2() {
    exitcond87_fu_11118_p2 = (!i35_reg_3209.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i35_reg_3209.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond88_fu_11682_p2() {
    exitcond88_fu_11682_p2 = (!i37_reg_3286.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_3286.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond89_fu_11441_p2() {
    exitcond89_fu_11441_p2 = (!w46_reg_3253.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w46_reg_3253.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond8_fu_7027_p2() {
    exitcond8_fu_7027_p2 = (!co5_reg_2363.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co5_reg_2363.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond90_fu_11790_p2() {
    exitcond90_fu_11790_p2 = (!co62_reg_3308.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co62_reg_3308.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond91_fu_11694_p2() {
    exitcond91_fu_11694_p2 = (!k4_reg_3297.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k4_reg_3297.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond92_fu_11461_p2() {
    exitcond92_fu_11461_p2 = (!h46_reg_3264.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h46_reg_3264.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond93_fu_12078_p2() {
    exitcond93_fu_12078_p2 = (!i39_reg_3341.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_3341.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_11854_p2() {
    exitcond94_fu_11854_p2 = (!ci31_reg_3319.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci31_reg_3319.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond95_fu_11481_p2() {
    exitcond95_fu_11481_p2 = (!i40_reg_3275.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i40_reg_3275.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond96_fu_12186_p2() {
    exitcond96_fu_12186_p2 = (!co64_reg_3363.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co64_reg_3363.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond97_fu_12090_p2() {
    exitcond97_fu_12090_p2 = (!k5_reg_3352.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k5_reg_3352.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond98_fu_11879_p2() {
    exitcond98_fu_11879_p2 = (!i42_reg_3330.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i42_reg_3330.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond99_fu_12397_p2() {
    exitcond99_fu_12397_p2 = (!co66_reg_3396.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co66_reg_3396.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond9_fu_6713_p2() {
    exitcond9_fu_6713_p2 = (!i1_reg_2272.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_2272.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond_fu_6681_p2() {
    exitcond_fu_6681_p2 = (!i_reg_2260.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_2260.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_fc_bias_V_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_address0 =  (sc_lv<4>) (tmp_227_fu_6757_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1623.read())) {
        fc_bias_V_address0 = grp_fc_fu_6528_bias_V_address0.read();
    } else {
        fc_bias_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_V_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1623.read())) {
        fc_bias_V_ce0 = grp_fc_fu_6528_bias_V_ce0.read();
    } else {
        fc_bias_V_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_bias_V_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state28.read())) {
        fc_bias_V_we0 = ap_const_logic_1;
    } else {
        fc_bias_V_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_6631_ap_start() {
    grp_avgpool_fu_6631_ap_start = ap_reg_grp_avgpool_fu_6631_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_p_fu_6355_ap_start() {
    grp_conv1_p_fu_6355_ap_start = ap_reg_grp_conv1_p_fu_6355_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_6455_ap_start() {
    grp_conv_last_fu_6455_ap_start = ap_reg_grp_conv_last_fu_6455_ap_start.read();
}

void ShuffleNetV2::thread_grp_fc_fu_6528_ap_start() {
    grp_fc_fu_6528_ap_start = ap_reg_grp_fc_fu_6528_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_l_p_fu_6583_ap_start() {
    grp_shuffle_24_l_p_fu_6583_ap_start = ap_reg_grp_shuffle_24_l_p_fu_6583_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_p_fu_6542_ap_start() {
    grp_shuffle_24_p_fu_6542_ap_start = ap_reg_grp_shuffle_24_p_fu_6542_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_p_fu_6591_ap_start() {
    grp_shuffle_24_r_p_fu_6591_ap_start = ap_reg_grp_shuffle_24_r_p_fu_6591_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_p_fu_6615_ap_start() {
    grp_shuffle_48_l_p_fu_6615_ap_start = ap_reg_grp_shuffle_48_l_p_fu_6615_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_p_fu_6566_ap_start() {
    grp_shuffle_48_p_fu_6566_ap_start = ap_reg_grp_shuffle_48_p_fu_6566_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_p_fu_6623_ap_start() {
    grp_shuffle_48_r_p_fu_6623_ap_start = ap_reg_grp_shuffle_48_r_p_fu_6623_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_p_fu_6599_ap_start() {
    grp_shuffle_96_l_p_fu_6599_ap_start = ap_reg_grp_shuffle_96_l_p_fu_6599_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_p_fu_6554_ap_start() {
    grp_shuffle_96_p_fu_6554_ap_start = ap_reg_grp_shuffle_96_p_fu_6554_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_p_fu_6607_ap_start() {
    grp_shuffle_96_r_p_fu_6607_ap_start = ap_reg_grp_shuffle_96_r_p_fu_6607_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_p_fu_6516_ap_start() {
    grp_subconv_1x1_16_p_fu_6516_ap_start = ap_reg_grp_subconv_1x1_16_p_fu_6516_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_p_fu_6480_ap_start() {
    grp_subconv_1x1_16p_p_fu_6480_ap_start = ap_reg_grp_subconv_1x1_16p_p_fu_6480_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_p_fu_6492_ap_start() {
    grp_subconv_1x1_32_p_fu_6492_ap_start = ap_reg_grp_subconv_1x1_32_p_fu_6492_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_p_fu_6443_ap_start() {
    grp_subconv_1x1_4_p_fu_6443_ap_start = ap_reg_grp_subconv_1x1_4_p_fu_6443_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_p_fu_6504_ap_start() {
    grp_subconv_1x1_8_p_fu_6504_ap_start = ap_reg_grp_subconv_1x1_8_p_fu_6504_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_p_fu_6468_ap_start() {
    grp_subconv_1x1_8p_p_fu_6468_ap_start = ap_reg_grp_subconv_1x1_8p_p_fu_6468_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_6431_ap_start() {
    grp_subconv_3x3_16_no_re_fu_6431_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_6431_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_6394_ap_start() {
    grp_subconv_3x3_16_strid_fu_6394_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_6394_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_6394_input_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state469.read())) {
        grp_subconv_3x3_16_strid_fu_6394_input_V_q0 = shuffleunit0_2_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state413.read())) {
        grp_subconv_3x3_16_strid_fu_6394_input_V_q0 = ShuffleConvs_1_Downs_q0.read();
    } else {
        grp_subconv_3x3_16_strid_fu_6394_input_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_6368_ap_start() {
    grp_subconv_3x3_32_strid_fu_6368_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_6368_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_6368_input_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state125.read())) {
        grp_subconv_3x3_32_strid_fu_6368_input_V_q0 = conv1_output_p_V_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state81.read())) {
        grp_subconv_3x3_32_strid_fu_6368_input_V_q0 = ShuffleConvs_0_Downs_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_6368_input_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_4_no_rel_fu_6407_ap_start() {
    grp_subconv_3x3_4_no_rel_fu_6407_ap_start = ap_reg_grp_subconv_3x3_4_no_rel_fu_6407_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_no_rel_fu_6419_ap_start() {
    grp_subconv_3x3_8_no_rel_fu_6419_ap_start = ap_reg_grp_subconv_3x3_8_no_rel_fu_6419_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_6381_ap_start() {
    grp_subconv_3x3_8_stride_fu_6381_ap_start = ap_reg_grp_subconv_3x3_8_stride_fu_6381_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_6381_input_V_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1319.read())) {
        grp_subconv_3x3_8_stride_fu_6381_input_V_q0 = shuffleunit1_7_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1263.read())) {
        grp_subconv_3x3_8_stride_fu_6381_input_V_q0 = ShuffleConvs_2_Downs_q0.read();
    } else {
        grp_subconv_3x3_8_stride_fu_6381_input_V_q0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void ShuffleNetV2::thread_h_101_fu_26108_p2() {
    h_101_fu_26108_p2 = (!h100_reg_5607.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h100_reg_5607.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_103_fu_26649_p2() {
    h_103_fu_26649_p2 = (!h102_reg_5706.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h102_reg_5706.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_105_fu_27408_p2() {
    h_105_fu_27408_p2 = (!h104_reg_5816.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h104_reg_5816.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_107_fu_27575_p2() {
    h_107_fu_27575_p2 = (!h106_reg_5849.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h106_reg_5849.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_109_fu_28116_p2() {
    h_109_fu_28116_p2 = (!h108_reg_5948.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h108_reg_5948.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_111_fu_28879_p2() {
    h_111_fu_28879_p2 = (!h110_reg_6058.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h110_reg_6058.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_113_fu_29046_p2() {
    h_113_fu_29046_p2 = (!h112_reg_6091.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h112_reg_6091.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_115_fu_29587_p2() {
    h_115_fu_29587_p2 = (!h114_reg_6190.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h114_reg_6190.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_117_fu_30342_p2() {
    h_117_fu_30342_p2 = (!h116_reg_6300.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h116_reg_6300.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_119_fu_30541_p2() {
    h_119_fu_30541_p2 = (!h118_reg_6344.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h118_reg_6344.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_25_fu_6887_p2() {
    h_25_fu_6887_p2 = (!h_reg_2318.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(h_reg_2318.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_h_26_fu_7140_p2() {
    h_26_fu_7140_p2 = (!h7_reg_2385.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h7_reg_2385.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_27_fu_7477_p2() {
    h_27_fu_7477_p2 = (!h14_reg_2465.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h14_reg_2465.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_28_fu_7790_p2() {
    h_28_fu_7790_p2 = (!h20_reg_2534.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h20_reg_2534.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_29_fu_8227_p2() {
    h_29_fu_8227_p2 = (!h27_reg_2613.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h27_reg_2613.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_31_fu_8487_p2() {
    h_31_fu_8487_p2 = (!h30_reg_2682.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h30_reg_2682.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_33_fu_8646_p2() {
    h_33_fu_8646_p2 = (!h32_reg_2715.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h32_reg_2715.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_35_fu_9083_p2() {
    h_35_fu_9083_p2 = (!h34_reg_2794.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h34_reg_2794.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_37_fu_9325_p2() {
    h_37_fu_9325_p2 = (!h36_reg_2863.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h36_reg_2863.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_39_fu_9484_p2() {
    h_39_fu_9484_p2 = (!h38_reg_2896.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h38_reg_2896.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_41_fu_9945_p2() {
    h_41_fu_9945_p2 = (!h40_reg_2975.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h40_reg_2975.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_43_fu_10189_p2() {
    h_43_fu_10189_p2 = (!h42_reg_3044.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h42_reg_3044.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_45_fu_10698_p2() {
    h_45_fu_10698_p2 = (!h44_reg_3143.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h44_reg_3143.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_47_fu_11467_p2() {
    h_47_fu_11467_p2 = (!h46_reg_3264.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h46_reg_3264.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_49_fu_12270_p2() {
    h_49_fu_12270_p2 = (!h48_reg_3374.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h48_reg_3374.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_51_fu_12831_p2() {
    h_51_fu_12831_p2 = (!h50_reg_3473.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h50_reg_3473.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_53_fu_13598_p2() {
    h_53_fu_13598_p2 = (!h52_reg_3583.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h52_reg_3583.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_55_fu_13757_p2() {
    h_55_fu_13757_p2 = (!h54_reg_3616.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h54_reg_3616.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_57_fu_14318_p2() {
    h_57_fu_14318_p2 = (!h56_reg_3715.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h56_reg_3715.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_59_fu_15089_p2() {
    h_59_fu_15089_p2 = (!h58_reg_3825.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h58_reg_3825.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_61_fu_15248_p2() {
    h_61_fu_15248_p2 = (!h60_reg_3858.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h60_reg_3858.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_63_fu_15821_p2() {
    h_63_fu_15821_p2 = (!h62_reg_3957.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h62_reg_3957.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_65_fu_16588_p2() {
    h_65_fu_16588_p2 = (!h64_reg_4067.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h64_reg_4067.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_67_fu_16747_p2() {
    h_67_fu_16747_p2 = (!h66_reg_4100.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h66_reg_4100.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_69_fu_17308_p2() {
    h_69_fu_17308_p2 = (!h68_reg_4199.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h68_reg_4199.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_71_fu_18067_p2() {
    h_71_fu_18067_p2 = (!h70_reg_4309.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h70_reg_4309.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_73_fu_18226_p2() {
    h_73_fu_18226_p2 = (!h72_reg_4342.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h72_reg_4342.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_75_fu_18787_p2() {
    h_75_fu_18787_p2 = (!h74_reg_4441.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h74_reg_4441.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_77_fu_19554_p2() {
    h_77_fu_19554_p2 = (!h76_reg_4551.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h76_reg_4551.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_79_fu_19713_p2() {
    h_79_fu_19713_p2 = (!h78_reg_4584.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h78_reg_4584.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_81_fu_20274_p2() {
    h_81_fu_20274_p2 = (!h80_reg_4683.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h80_reg_4683.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_83_fu_21045_p2() {
    h_83_fu_21045_p2 = (!h82_reg_4793.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h82_reg_4793.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_85_fu_21204_p2() {
    h_85_fu_21204_p2 = (!h84_reg_4826.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h84_reg_4826.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_87_fu_21773_p2() {
    h_87_fu_21773_p2 = (!h86_reg_4925.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h86_reg_4925.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_89_fu_22548_p2() {
    h_89_fu_22548_p2 = (!h88_reg_5035.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h88_reg_5035.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_91_fu_22707_p2() {
    h_91_fu_22707_p2 = (!h90_reg_5068.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h90_reg_5068.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_93_fu_23280_p2() {
    h_93_fu_23280_p2 = (!h92_reg_5167.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h92_reg_5167.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_95_fu_24055_p2() {
    h_95_fu_24055_p2 = (!h94_reg_5277.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h94_reg_5277.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_97_fu_24556_p2() {
    h_97_fu_24556_p2 = (!h96_reg_5376.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h96_reg_5376.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_99_fu_25313_p2() {
    h_99_fu_25313_p2 = (!h98_reg_5497.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h98_reg_5497.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i105_cast1_fu_20120_p1() {
    i105_cast1_fu_20120_p1 = esl_zext<7,5>(i104_reg_4639.read());
}

void ShuffleNetV2::thread_i105_cast_fu_20116_p1() {
    i105_cast_fu_20116_p1 = esl_zext<11,5>(i104_reg_4639.read());
}

void ShuffleNetV2::thread_i109_cast1_fu_20497_p1() {
    i109_cast1_fu_20497_p1 = esl_zext<7,5>(i108_reg_4705.read());
}

void ShuffleNetV2::thread_i109_cast_fu_20493_p1() {
    i109_cast_fu_20493_p1 = esl_zext<11,5>(i108_reg_4705.read());
}

void ShuffleNetV2::thread_i111_cast1_fu_20889_p1() {
    i111_cast1_fu_20889_p1 = esl_zext<7,5>(i110_reg_4760.read());
}

void ShuffleNetV2::thread_i111_cast_fu_20885_p1() {
    i111_cast_fu_20885_p1 = esl_zext<11,5>(i110_reg_4760.read());
}

void ShuffleNetV2::thread_i117_cast1_fu_21619_p1() {
    i117_cast1_fu_21619_p1 = esl_zext<7,5>(i116_reg_4881.read());
}

void ShuffleNetV2::thread_i117_cast_fu_21615_p1() {
    i117_cast_fu_21615_p1 = esl_zext<11,5>(i116_reg_4881.read());
}

void ShuffleNetV2::thread_i121_cast1_fu_21988_p1() {
    i121_cast1_fu_21988_p1 = esl_zext<7,5>(i120_reg_4947.read());
}

void ShuffleNetV2::thread_i121_cast_fu_21984_p1() {
    i121_cast_fu_21984_p1 = esl_zext<11,5>(i120_reg_4947.read());
}

void ShuffleNetV2::thread_i123_cast305_cast_fu_22384_p1() {
    i123_cast305_cast_fu_22384_p1 = esl_zext<10,5>(i122_reg_5002.read());
}

void ShuffleNetV2::thread_i123_cast_fu_22388_p1() {
    i123_cast_fu_22388_p1 = esl_zext<7,5>(i122_reg_5002.read());
}

void ShuffleNetV2::thread_i129_cast290_cast_fu_23118_p1() {
    i129_cast290_cast_fu_23118_p1 = esl_zext<10,5>(i128_reg_5123.read());
}

void ShuffleNetV2::thread_i129_cast_fu_23122_p1() {
    i129_cast_fu_23122_p1 = esl_zext<7,5>(i128_reg_5123.read());
}

void ShuffleNetV2::thread_i133_cast280_cast_fu_23487_p1() {
    i133_cast280_cast_fu_23487_p1 = esl_zext<10,5>(i132_reg_5189.read());
}

void ShuffleNetV2::thread_i133_cast_fu_23491_p1() {
    i133_cast_fu_23491_p1 = esl_zext<7,5>(i132_reg_5189.read());
}

void ShuffleNetV2::thread_i135_cast267_cast_fu_23891_p1() {
    i135_cast267_cast_fu_23891_p1 = esl_zext<10,5>(i134_reg_5244.read());
}

void ShuffleNetV2::thread_i135_cast_fu_23895_p1() {
    i135_cast_fu_23895_p1 = esl_zext<7,5>(i134_reg_5244.read());
}

void ShuffleNetV2::thread_i141_cast253_cast_fu_24394_p1() {
    i141_cast253_cast_fu_24394_p1 = esl_zext<10,5>(i140_reg_5332.read());
}

void ShuffleNetV2::thread_i141_cast_fu_24398_p1() {
    i141_cast_fu_24398_p1 = esl_zext<8,5>(i140_reg_5332.read());
}

void ShuffleNetV2::thread_i145_cast243_cast_fu_24763_p1() {
    i145_cast243_cast_fu_24763_p1 = esl_zext<9,5>(i144_reg_5398.read());
}

void ShuffleNetV2::thread_i145_cast_fu_24767_p1() {
    i145_cast_fu_24767_p1 = esl_zext<8,5>(i144_reg_5398.read());
}

void ShuffleNetV2::thread_i147_cast1_fu_25151_p1() {
    i147_cast1_fu_25151_p1 = esl_zext<8,5>(i146_reg_5453.read());
}

void ShuffleNetV2::thread_i147_cast_fu_25147_p1() {
    i147_cast_fu_25147_p1 = esl_zext<12,5>(i146_reg_5453.read());
}

void ShuffleNetV2::thread_i153_cast1_fu_25524_p1() {
    i153_cast1_fu_25524_p1 = esl_zext<8,5>(i152_reg_5519.read());
}

void ShuffleNetV2::thread_i153_cast_fu_25520_p1() {
    i153_cast_fu_25520_p1 = esl_zext<12,5>(i152_reg_5519.read());
}

void ShuffleNetV2::thread_i155_cast1_fu_25904_p1() {
    i155_cast1_fu_25904_p1 = esl_zext<8,5>(i154_reg_5574.read());
}

void ShuffleNetV2::thread_i155_cast_fu_25900_p1() {
    i155_cast_fu_25900_p1 = esl_zext<12,5>(i154_reg_5574.read());
}

void ShuffleNetV2::thread_i161_cast1_fu_26495_p1() {
    i161_cast1_fu_26495_p1 = esl_zext<8,5>(i160_reg_5662.read());
}

void ShuffleNetV2::thread_i161_cast_fu_26491_p1() {
    i161_cast_fu_26491_p1 = esl_zext<12,5>(i160_reg_5662.read());
}

void ShuffleNetV2::thread_i165_cast1_fu_26860_p1() {
    i165_cast1_fu_26860_p1 = esl_zext<8,5>(i164_reg_5728.read());
}

void ShuffleNetV2::thread_i165_cast_fu_26856_p1() {
    i165_cast_fu_26856_p1 = esl_zext<12,5>(i164_reg_5728.read());
}

void ShuffleNetV2::thread_i167_cast1_fu_27248_p1() {
    i167_cast1_fu_27248_p1 = esl_zext<8,5>(i166_reg_5783.read());
}

void ShuffleNetV2::thread_i167_cast_fu_27244_p1() {
    i167_cast_fu_27244_p1 = esl_zext<12,5>(i166_reg_5783.read());
}

void ShuffleNetV2::thread_i173_cast1_fu_27962_p1() {
    i173_cast1_fu_27962_p1 = esl_zext<8,5>(i172_reg_5904.read());
}

void ShuffleNetV2::thread_i173_cast_fu_27958_p1() {
    i173_cast_fu_27958_p1 = esl_zext<12,5>(i172_reg_5904.read());
}

void ShuffleNetV2::thread_i177_cast1_fu_28339_p1() {
    i177_cast1_fu_28339_p1 = esl_zext<8,5>(i176_reg_5970.read());
}

void ShuffleNetV2::thread_i177_cast_fu_28335_p1() {
    i177_cast_fu_28335_p1 = esl_zext<12,5>(i176_reg_5970.read());
}

void ShuffleNetV2::thread_i179_cast1_fu_28719_p1() {
    i179_cast1_fu_28719_p1 = esl_zext<8,5>(i178_reg_6025.read());
}

void ShuffleNetV2::thread_i179_cast_fu_28715_p1() {
    i179_cast_fu_28715_p1 = esl_zext<12,5>(i178_reg_6025.read());
}

void ShuffleNetV2::thread_i185_cast1_fu_29433_p1() {
    i185_cast1_fu_29433_p1 = esl_zext<8,5>(i184_reg_6146.read());
}

void ShuffleNetV2::thread_i185_cast_fu_29429_p1() {
    i185_cast_fu_29429_p1 = esl_zext<12,5>(i184_reg_6146.read());
}

void ShuffleNetV2::thread_i189_cast1_fu_29802_p1() {
    i189_cast1_fu_29802_p1 = esl_zext<8,5>(i188_reg_6212.read());
}

void ShuffleNetV2::thread_i189_cast_fu_29798_p1() {
    i189_cast_fu_29798_p1 = esl_zext<12,5>(i188_reg_6212.read());
}

void ShuffleNetV2::thread_i191_cast1_fu_30182_p1() {
    i191_cast1_fu_30182_p1 = esl_zext<8,5>(i190_reg_6267.read());
}

void ShuffleNetV2::thread_i191_cast_fu_30178_p1() {
    i191_cast_fu_30178_p1 = esl_zext<12,5>(i190_reg_6267.read());
}

void ShuffleNetV2::thread_i27_cast1_fu_10544_p1() {
    i27_cast1_fu_10544_p1 = esl_zext<7,5>(i25_reg_3099.read());
}

void ShuffleNetV2::thread_i27_cast_fu_10540_p1() {
    i27_cast_fu_10540_p1 = esl_zext<9,5>(i25_reg_3099.read());
}

void ShuffleNetV2::thread_i29_cast606_cast_fu_10909_p1() {
    i29_cast606_cast_fu_10909_p1 = esl_zext<8,5>(i29_reg_3165.read());
}

void ShuffleNetV2::thread_i29_cast_fu_10913_p1() {
    i29_cast_fu_10913_p1 = esl_zext<7,5>(i29_reg_3165.read());
}

void ShuffleNetV2::thread_i32_cast593_cast_fu_11305_p1() {
    i32_cast593_cast_fu_11305_p1 = esl_zext<8,5>(i31_reg_3220.read());
}

void ShuffleNetV2::thread_i32_cast_fu_11309_p1() {
    i32_cast_fu_11309_p1 = esl_zext<7,5>(i31_reg_3220.read());
}

void ShuffleNetV2::thread_i37_cast1_fu_11678_p1() {
    i37_cast1_fu_11678_p1 = esl_zext<7,5>(i37_reg_3286.read());
}

void ShuffleNetV2::thread_i37_cast_fu_11674_p1() {
    i37_cast_fu_11674_p1 = esl_zext<10,5>(i37_reg_3286.read());
}

void ShuffleNetV2::thread_i39_cast1_fu_12074_p1() {
    i39_cast1_fu_12074_p1 = esl_zext<7,5>(i39_reg_3341.read());
}

void ShuffleNetV2::thread_i39_cast_fu_12070_p1() {
    i39_cast_fu_12070_p1 = esl_zext<10,5>(i39_reg_3341.read());
}

void ShuffleNetV2::thread_i45_cast1_fu_12677_p1() {
    i45_cast1_fu_12677_p1 = esl_zext<7,5>(i44_reg_3429.read());
}

void ShuffleNetV2::thread_i45_cast_fu_12673_p1() {
    i45_cast_fu_12673_p1 = esl_zext<10,5>(i44_reg_3429.read());
}

void ShuffleNetV2::thread_i49_cast1_fu_13050_p1() {
    i49_cast1_fu_13050_p1 = esl_zext<7,5>(i48_reg_3495.read());
}

void ShuffleNetV2::thread_i49_cast_fu_13046_p1() {
    i49_cast_fu_13046_p1 = esl_zext<10,5>(i48_reg_3495.read());
}

void ShuffleNetV2::thread_i51_cast1_fu_13442_p1() {
    i51_cast1_fu_13442_p1 = esl_zext<7,5>(i50_reg_3550.read());
}

void ShuffleNetV2::thread_i51_cast_fu_13438_p1() {
    i51_cast_fu_13438_p1 = esl_zext<10,5>(i50_reg_3550.read());
}

void ShuffleNetV2::thread_i57_cast1_fu_14164_p1() {
    i57_cast1_fu_14164_p1 = esl_zext<7,5>(i56_reg_3671.read());
}

void ShuffleNetV2::thread_i57_cast_fu_14160_p1() {
    i57_cast_fu_14160_p1 = esl_zext<10,5>(i56_reg_3671.read());
}

void ShuffleNetV2::thread_i61_cast508_cast_fu_14529_p1() {
    i61_cast508_cast_fu_14529_p1 = esl_zext<9,5>(i60_reg_3737.read());
}

void ShuffleNetV2::thread_i61_cast_fu_14533_p1() {
    i61_cast_fu_14533_p1 = esl_zext<7,5>(i60_reg_3737.read());
}

void ShuffleNetV2::thread_i63_cast495_cast_fu_14925_p1() {
    i63_cast495_cast_fu_14925_p1 = esl_zext<9,5>(i62_reg_3792.read());
}

void ShuffleNetV2::thread_i63_cast_fu_14929_p1() {
    i63_cast_fu_14929_p1 = esl_zext<7,5>(i62_reg_3792.read());
}

void ShuffleNetV2::thread_i69_cast480_cast_fu_15659_p1() {
    i69_cast480_cast_fu_15659_p1 = esl_zext<9,5>(i68_reg_3913.read());
}

void ShuffleNetV2::thread_i69_cast_fu_15663_p1() {
    i69_cast_fu_15663_p1 = esl_zext<7,5>(i68_reg_3913.read());
}

void ShuffleNetV2::thread_i73_cast470_cast_fu_16028_p1() {
    i73_cast470_cast_fu_16028_p1 = esl_zext<8,5>(i72_reg_3979.read());
}

void ShuffleNetV2::thread_i73_cast_fu_16032_p1() {
    i73_cast_fu_16032_p1 = esl_zext<7,5>(i72_reg_3979.read());
}

void ShuffleNetV2::thread_i75_cast1_fu_16428_p1() {
    i75_cast1_fu_16428_p1 = esl_zext<7,5>(i74_reg_4034.read());
}

void ShuffleNetV2::thread_i75_cast_fu_16424_p1() {
    i75_cast_fu_16424_p1 = esl_zext<11,5>(i74_reg_4034.read());
}

void ShuffleNetV2::thread_i81_cast1_fu_17154_p1() {
    i81_cast1_fu_17154_p1 = esl_zext<7,5>(i80_reg_4155.read());
}

void ShuffleNetV2::thread_i81_cast_fu_17150_p1() {
    i81_cast_fu_17150_p1 = esl_zext<11,5>(i80_reg_4155.read());
}

void ShuffleNetV2::thread_i85_cast1_fu_17519_p1() {
    i85_cast1_fu_17519_p1 = esl_zext<7,5>(i84_reg_4221.read());
}

void ShuffleNetV2::thread_i85_cast_fu_17515_p1() {
    i85_cast_fu_17515_p1 = esl_zext<11,5>(i84_reg_4221.read());
}

void ShuffleNetV2::thread_i87_cast1_fu_17911_p1() {
    i87_cast1_fu_17911_p1 = esl_zext<7,5>(i86_reg_4276.read());
}

void ShuffleNetV2::thread_i87_cast_fu_17907_p1() {
    i87_cast_fu_17907_p1 = esl_zext<11,5>(i86_reg_4276.read());
}

void ShuffleNetV2::thread_i93_cast1_fu_18633_p1() {
    i93_cast1_fu_18633_p1 = esl_zext<7,5>(i92_reg_4397.read());
}

void ShuffleNetV2::thread_i93_cast_fu_18629_p1() {
    i93_cast_fu_18629_p1 = esl_zext<11,5>(i92_reg_4397.read());
}

void ShuffleNetV2::thread_i97_cast1_fu_19006_p1() {
    i97_cast1_fu_19006_p1 = esl_zext<7,5>(i96_reg_4463.read());
}

void ShuffleNetV2::thread_i97_cast_fu_19002_p1() {
    i97_cast_fu_19002_p1 = esl_zext<11,5>(i96_reg_4463.read());
}

void ShuffleNetV2::thread_i99_cast1_fu_19398_p1() {
    i99_cast1_fu_19398_p1 = esl_zext<7,5>(i98_reg_4518.read());
}

void ShuffleNetV2::thread_i99_cast_fu_19394_p1() {
    i99_cast_fu_19394_p1 = esl_zext<11,5>(i98_reg_4518.read());
}

void ShuffleNetV2::thread_i_101_fu_18807_p2() {
    i_101_fu_18807_p2 = (!i100_reg_4452.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i100_reg_4452.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_103_fu_19213_p2() {
    i_103_fu_19213_p2 = (!i102_reg_4507.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i102_reg_4507.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_105_fu_20130_p2() {
    i_105_fu_20130_p2 = (!i104_reg_4639.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i104_reg_4639.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_107_fu_19935_p2() {
    i_107_fu_19935_p2 = (!i106_reg_4628.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i106_reg_4628.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_109_fu_20507_p2() {
    i_109_fu_20507_p2 = (!i108_reg_4705.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i108_reg_4705.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_111_fu_20899_p2() {
    i_111_fu_20899_p2 = (!i110_reg_4760.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i110_reg_4760.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_113_fu_20294_p2() {
    i_113_fu_20294_p2 = (!i112_reg_4694.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i112_reg_4694.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_115_fu_20704_p2() {
    i_115_fu_20704_p2 = (!i114_reg_4749.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i114_reg_4749.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_117_fu_21629_p2() {
    i_117_fu_21629_p2 = (!i116_reg_4881.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i116_reg_4881.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_119_fu_21426_p2() {
    i_119_fu_21426_p2 = (!i118_reg_4870.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i118_reg_4870.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_121_fu_21998_p2() {
    i_121_fu_21998_p2 = (!i120_reg_4947.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i120_reg_4947.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_123_fu_22398_p2() {
    i_123_fu_22398_p2 = (!i122_reg_5002.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i122_reg_5002.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_125_fu_21793_p2() {
    i_125_fu_21793_p2 = (!i124_reg_4936.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i124_reg_4936.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_127_fu_22195_p2() {
    i_127_fu_22195_p2 = (!i126_reg_4991.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i126_reg_4991.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_129_fu_23132_p2() {
    i_129_fu_23132_p2 = (!i128_reg_5123.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i128_reg_5123.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_12_fu_8252_p2() {
    i_12_fu_8252_p2 = (!i11_reg_2624.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i11_reg_2624.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_131_fu_22929_p2() {
    i_131_fu_22929_p2 = (!i130_reg_5112.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i130_reg_5112.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_133_fu_23501_p2() {
    i_133_fu_23501_p2 = (!i132_reg_5189.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i132_reg_5189.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_135_fu_23905_p2() {
    i_135_fu_23905_p2 = (!i134_reg_5244.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i134_reg_5244.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_137_fu_23300_p2() {
    i_137_fu_23300_p2 = (!i136_reg_5178.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i136_reg_5178.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_139_fu_23702_p2() {
    i_139_fu_23702_p2 = (!i138_reg_5233.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i138_reg_5233.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_13_fu_8397_p2() {
    i_13_fu_8397_p2 = (!tmp_644_reg_2659.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_644_reg_2659.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_141_fu_24408_p2() {
    i_141_fu_24408_p2 = (!i140_reg_5332.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i140_reg_5332.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_143_fu_24223_p2() {
    i_143_fu_24223_p2 = (!i142_reg_5321.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i142_reg_5321.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_145_fu_24777_p2() {
    i_145_fu_24777_p2 = (!i144_reg_5398.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i144_reg_5398.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_147_fu_25161_p2() {
    i_147_fu_25161_p2 = (!i146_reg_5453.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i146_reg_5453.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_149_fu_24576_p2() {
    i_149_fu_24576_p2 = (!i148_reg_5387.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i148_reg_5387.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_151_fu_24976_p2() {
    i_151_fu_24976_p2 = (!i150_reg_5442.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i150_reg_5442.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_153_fu_25534_p2() {
    i_153_fu_25534_p2 = (!i152_reg_5519.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i152_reg_5519.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_155_fu_25914_p2() {
    i_155_fu_25914_p2 = (!i154_reg_5574.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i154_reg_5574.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_157_fu_25333_p2() {
    i_157_fu_25333_p2 = (!i156_reg_5508.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i156_reg_5508.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_159_fu_25729_p2() {
    i_159_fu_25729_p2 = (!i158_reg_5563.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i158_reg_5563.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_15_fu_8908_p2() {
    i_15_fu_8908_p2 = (!i14_reg_2760.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i14_reg_2760.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_161_fu_26505_p2() {
    i_161_fu_26505_p2 = (!i160_reg_5662.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i160_reg_5662.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_163_fu_26320_p2() {
    i_163_fu_26320_p2 = (!i162_reg_5651.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i162_reg_5651.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_165_fu_26870_p2() {
    i_165_fu_26870_p2 = (!i164_reg_5728.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i164_reg_5728.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_167_fu_27258_p2() {
    i_167_fu_27258_p2 = (!i166_reg_5783.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i166_reg_5783.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_169_fu_26669_p2() {
    i_169_fu_26669_p2 = (!i168_reg_5717.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i168_reg_5717.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_171_fu_27065_p2() {
    i_171_fu_27065_p2 = (!i170_reg_5772.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i170_reg_5772.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_173_fu_27972_p2() {
    i_173_fu_27972_p2 = (!i172_reg_5904.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i172_reg_5904.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_175_fu_27787_p2() {
    i_175_fu_27787_p2 = (!i174_reg_5893.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i174_reg_5893.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_177_fu_28349_p2() {
    i_177_fu_28349_p2 = (!i176_reg_5970.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i176_reg_5970.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_179_fu_28729_p2() {
    i_179_fu_28729_p2 = (!i178_reg_6025.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i178_reg_6025.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_17_fu_9108_p2() {
    i_17_fu_9108_p2 = (!i16_reg_2805.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i16_reg_2805.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_181_fu_28136_p2() {
    i_181_fu_28136_p2 = (!i180_reg_5959.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i180_reg_5959.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_183_fu_28544_p2() {
    i_183_fu_28544_p2 = (!i182_reg_6014.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i182_reg_6014.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_185_fu_29443_p2() {
    i_185_fu_29443_p2 = (!i184_reg_6146.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i184_reg_6146.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_187_fu_29258_p2() {
    i_187_fu_29258_p2 = (!i186_reg_6135.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i186_reg_6135.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_189_fu_29812_p2() {
    i_189_fu_29812_p2 = (!i188_reg_6212.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i188_reg_6212.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_191_fu_30192_p2() {
    i_191_fu_30192_p2 = (!i190_reg_6267.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i190_reg_6267.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_193_fu_29607_p2() {
    i_193_fu_29607_p2 = (!i192_reg_6201.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i192_reg_6201.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_195_fu_30007_p2() {
    i_195_fu_30007_p2 = (!i194_reg_6256.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i194_reg_6256.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_19_fu_9266_p2() {
    i_19_fu_9266_p2 = (!i18_reg_2840.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i18_reg_2840.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_1_fu_6687_p2() {
    i_1_fu_6687_p2 = (!i_reg_2260.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_reg_2260.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_20_fu_9731_p2() {
    i_20_fu_9731_p2 = (!tmp_887_reg_2941.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(tmp_887_reg_2941.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_22_fu_9970_p2() {
    i_22_fu_9970_p2 = (!i21_reg_2986.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i21_reg_2986.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_24_fu_10130_p2() {
    i_24_fu_10130_p2 = (!i23_reg_3021.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i23_reg_3021.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_26_fu_10554_p2() {
    i_26_fu_10554_p2 = (!i25_reg_3099.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i25_reg_3099.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_28_fu_10359_p2() {
    i_28_fu_10359_p2 = (!i27_reg_3088.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i27_reg_3088.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_2_fu_6719_p2() {
    i_2_fu_6719_p2 = (!i1_reg_2272.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i1_reg_2272.read()) + sc_biguint<10>(ap_const_lv10_1));
}

}

