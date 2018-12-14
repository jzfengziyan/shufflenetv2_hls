#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_conv1_bias_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        conv1_bias_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_bias_ce0 = grp_conv1_p_fu_7194_bias_ce0.read();
    } else {
        conv1_bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        conv1_bias_we0 = ap_const_logic_1;
    } else {
        conv1_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_address0 = grp_subconv_3x3_32_strid_fu_7254_input_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_output_p_address0 = grp_subconv_1x1_32_p_fu_7242_conv1_output_p_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_output_p_address0 = grp_conv1_p_fu_7194_output_r_address0.read();
    } else {
        conv1_output_p_address0 = "XXXXXXXXXXXXXXX";
    }
}

void ShuffleNetV2::thread_conv1_output_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        conv1_output_p_ce0 = grp_subconv_3x3_32_strid_fu_7254_input_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state18.read())) {
        conv1_output_p_ce0 = grp_subconv_1x1_32_p_fu_7242_conv1_output_p_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_output_p_ce0 = grp_conv1_p_fu_7194_output_r_ce0.read();
    } else {
        conv1_output_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_output_p_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        conv1_output_p_we0 = grp_conv1_p_fu_7194_output_r_we0.read();
    } else {
        conv1_output_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv1_weight_address0() {
    conv1_weight_address0 = grp_conv1_p_fu_7194_weight_address0.read();
}

void ShuffleNetV2::thread_conv1_weight_ce0() {
    conv1_weight_ce0 = grp_conv1_p_fu_7194_weight_ce0.read();
}

void ShuffleNetV2::thread_conv_last_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv_last_bias_address0 =  (sc_lv<9>) (tmp_97_fu_7519_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read())) {
        conv_last_bias_address0 = grp_conv_last_fu_7280_bias_address0.read();
    } else {
        conv_last_bias_address0 =  (sc_lv<9>) ("XXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_bias_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv_last_bias_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read())) {
        conv_last_bias_ce0 = grp_conv_last_fu_7280_bias_ce0.read();
    } else {
        conv_last_bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv_last_bias_we0 = ap_const_logic_1;
    } else {
        conv_last_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state706.read())) {
        conv_last_output_address0 = grp_avgpool_fu_7365_conv_last_output_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read())) {
        conv_last_output_address0 = grp_conv_last_fu_7280_output_r_address0.read();
    } else {
        conv_last_output_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state706.read())) {
        conv_last_output_ce0 = grp_avgpool_fu_7365_conv_last_output_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read())) {
        conv_last_output_ce0 = grp_conv_last_fu_7280_output_r_ce0.read();
    } else {
        conv_last_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state704.read())) {
        conv_last_output_we0 = grp_conv_last_fu_7280_output_r_we0.read();
    } else {
        conv_last_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_weight_address0() {
    conv_last_weight_address0 = grp_conv_last_fu_7280_weight_address0.read();
}

void ShuffleNetV2::thread_conv_last_weight_ce0() {
    conv_last_weight_ce0 = grp_conv_last_fu_7280_weight_ce0.read();
}

void ShuffleNetV2::thread_downsampleunit0_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read())) {
        downsampleunit0_outp_address0 =  (sc_lv<14>) (tmp_1000_cast1_fu_9305_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read())) {
        downsampleunit0_outp_address0 =  (sc_lv<14>) (tmp_950_cast_fu_8659_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        downsampleunit0_outp_address0 = grp_shuffle_24_r_p_fu_7422_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        downsampleunit0_outp_address0 = grp_shuffle_24_l_p_fu_7414_output_r_address0.read();
    } else {
        downsampleunit0_outp_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state51.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state74.read()))) {
        downsampleunit0_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        downsampleunit0_outp_ce0 = grp_shuffle_24_r_p_fu_7422_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        downsampleunit0_outp_ce0 = grp_shuffle_24_l_p_fu_7414_output_r_ce0.read();
    } else {
        downsampleunit0_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        downsampleunit0_outp_d0 = grp_shuffle_24_r_p_fu_7422_output_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        downsampleunit0_outp_d0 = grp_shuffle_24_l_p_fu_7414_output_r_d0.read();
    } else {
        downsampleunit0_outp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state48.read())) {
        downsampleunit0_outp_we0 = grp_shuffle_24_r_p_fu_7422_output_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state33.read())) {
        downsampleunit0_outp_we0 = grp_shuffle_24_l_p_fu_7414_output_r_we0.read();
    } else {
        downsampleunit0_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read())) {
        downsampleunit1_outp_address0 =  (sc_lv<14>) (tmp_1268_cast_fu_14211_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read())) {
        downsampleunit1_outp_address0 =  (sc_lv<14>) (tmp_1192_cast_fu_13005_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        downsampleunit1_outp_address0 = grp_shuffle_48_r_p_fu_7454_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        downsampleunit1_outp_address0 = grp_shuffle_48_l_p_fu_7446_output_r_address0.read();
    } else {
        downsampleunit1_outp_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state193.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state229.read()))) {
        downsampleunit1_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        downsampleunit1_outp_ce0 = grp_shuffle_48_r_p_fu_7454_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        downsampleunit1_outp_ce0 = grp_shuffle_48_l_p_fu_7446_output_r_ce0.read();
    } else {
        downsampleunit1_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        downsampleunit1_outp_d0 = grp_shuffle_48_r_p_fu_7454_output_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        downsampleunit1_outp_d0 = grp_shuffle_48_l_p_fu_7446_output_r_d0.read();
    } else {
        downsampleunit1_outp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state190.read())) {
        downsampleunit1_outp_we0 = grp_shuffle_48_r_p_fu_7454_output_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state166.read())) {
        downsampleunit1_outp_we0 = grp_shuffle_48_l_p_fu_7446_output_r_we0.read();
    } else {
        downsampleunit1_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state615.read())) {
        downsampleunit2_outp_address0 =  (sc_lv<13>) (tmp_1979_cast_fu_27275_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read())) {
        downsampleunit2_outp_address0 =  (sc_lv<13>) (tmp_1904_cast_fu_26094_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        downsampleunit2_outp_address0 = grp_shuffle_96_r_p_fu_7438_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        downsampleunit2_outp_address0 = grp_shuffle_96_l_p_fu_7430_output_r_address0.read();
    } else {
        downsampleunit2_outp_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state579.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state615.read()))) {
        downsampleunit2_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        downsampleunit2_outp_ce0 = grp_shuffle_96_r_p_fu_7438_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        downsampleunit2_outp_ce0 = grp_shuffle_96_l_p_fu_7430_output_r_ce0.read();
    } else {
        downsampleunit2_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        downsampleunit2_outp_d0 = grp_shuffle_96_r_p_fu_7438_output_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        downsampleunit2_outp_d0 = grp_shuffle_96_l_p_fu_7430_output_r_d0.read();
    } else {
        downsampleunit2_outp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state576.read())) {
        downsampleunit2_outp_we0 = grp_shuffle_96_r_p_fu_7438_output_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state552.read())) {
        downsampleunit2_outp_we0 = grp_shuffle_96_l_p_fu_7430_output_r_we0.read();
    } else {
        downsampleunit2_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_23935_p2() {
    exitcond100_fu_23935_p2 = (!k48_reg_6060.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k48_reg_6060.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond101_fu_23923_p2() {
    exitcond101_fu_23923_p2 = (!i134_reg_6049.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_6049.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_23734_p2() {
    exitcond102_fu_23734_p2 = (!i138_reg_6038.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_6038.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond103_fu_23709_p2() {
    exitcond103_fu_23709_p2 = (!ci62_reg_6027.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci62_reg_6027.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond104_fu_23645_p2() {
    exitcond104_fu_23645_p2 = (!co140_reg_6016.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co140_reg_6016.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond105_fu_23559_p2() {
    exitcond105_fu_23559_p2 = (!k46_reg_6005.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k46_reg_6005.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond106_fu_23547_p2() {
    exitcond106_fu_23547_p2 = (!i132_reg_5994.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_5994.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond107_fu_23355_p2() {
    exitcond107_fu_23355_p2 = (!i136_reg_5983.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_5983.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond108_fu_23335_p2() {
    exitcond108_fu_23335_p2 = (!h92_reg_5972.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h92_reg_5972.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond109_fu_23315_p2() {
    exitcond109_fu_23315_p2 = (!w91_reg_5961.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w91_reg_5961.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond10_fu_29633_p2() {
    exitcond10_fu_29633_p2 = (!ci80_reg_7050.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci80_reg_7050.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_23303_p2() {
    exitcond110_fu_23303_p2 = (!co138_reg_5950.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co138_reg_5950.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond111_fu_23213_p2() {
    exitcond111_fu_23213_p2 = (!k44_reg_5939.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k44_reg_5939.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond112_fu_23201_p2() {
    exitcond112_fu_23201_p2 = (!i128_reg_5928.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i128_reg_5928.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond113_fu_23012_p2() {
    exitcond113_fu_23012_p2 = (!i130_reg_5917.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i130_reg_5917.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond114_fu_22987_p2() {
    exitcond114_fu_22987_p2 = (!ci60_reg_5906.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci60_reg_5906.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond115_fu_22923_p2() {
    exitcond115_fu_22923_p2 = (!co136_reg_5895.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co136_reg_5895.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond116_fu_22880_p2() {
    exitcond116_fu_22880_p2 = (!w89_reg_5884.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w89_reg_5884.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond117_fu_22790_p2() {
    exitcond117_fu_22790_p2 = (!h90_reg_5873.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h90_reg_5873.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond118_fu_22712_p2() {
    exitcond118_fu_22712_p2 = (!co134_reg_5862.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co134_reg_5862.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond119_fu_22682_p2() {
    exitcond119_fu_22682_p2 = (!w87_reg_5851.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w87_reg_5851.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond11_fu_29571_p2() {
    exitcond11_fu_29571_p2 = (!co180_reg_7039.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co180_reg_7039.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond120_fu_22631_p2() {
    exitcond120_fu_22631_p2 = (!h88_reg_5840.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h88_reg_5840.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond121_fu_22589_p2() {
    exitcond121_fu_22589_p2 = (!co132_reg_5829.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co132_reg_5829.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond122_fu_22507_p2() {
    exitcond122_fu_22507_p2 = (!k42_reg_5818.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k42_reg_5818.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond123_fu_22495_p2() {
    exitcond123_fu_22495_p2 = (!i122_reg_5807.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i122_reg_5807.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond124_fu_22306_p2() {
    exitcond124_fu_22306_p2 = (!i126_reg_5796.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i126_reg_5796.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond125_fu_22281_p2() {
    exitcond125_fu_22281_p2 = (!ci58_reg_5785.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci58_reg_5785.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond126_fu_22217_p2() {
    exitcond126_fu_22217_p2 = (!co130_reg_5774.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co130_reg_5774.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond127_fu_22135_p2() {
    exitcond127_fu_22135_p2 = (!k40_reg_5763.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k40_reg_5763.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond128_fu_22123_p2() {
    exitcond128_fu_22123_p2 = (!i120_reg_5752.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i120_reg_5752.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond129_fu_21923_p2() {
    exitcond129_fu_21923_p2 = (!i124_reg_5741.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i124_reg_5741.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond12_fu_29489_p2() {
    exitcond12_fu_29489_p2 = (!k74_reg_7028.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k74_reg_7028.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond130_fu_21903_p2() {
    exitcond130_fu_21903_p2 = (!h86_reg_5730.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h86_reg_5730.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond131_fu_21883_p2() {
    exitcond131_fu_21883_p2 = (!w85_reg_5719.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w85_reg_5719.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond132_fu_21871_p2() {
    exitcond132_fu_21871_p2 = (!co128_reg_5708.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co128_reg_5708.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond133_fu_21785_p2() {
    exitcond133_fu_21785_p2 = (!k38_reg_5697.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k38_reg_5697.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond134_fu_21773_p2() {
    exitcond134_fu_21773_p2 = (!i116_reg_5686.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_5686.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond135_fu_21584_p2() {
    exitcond135_fu_21584_p2 = (!i118_reg_5675.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_5675.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond136_fu_21559_p2() {
    exitcond136_fu_21559_p2 = (!ci56_reg_5664.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci56_reg_5664.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond137_fu_21495_p2() {
    exitcond137_fu_21495_p2 = (!co126_reg_5653.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co126_reg_5653.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond138_fu_21452_p2() {
    exitcond138_fu_21452_p2 = (!w83_reg_5642.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w83_reg_5642.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond139_fu_21362_p2() {
    exitcond139_fu_21362_p2 = (!h84_reg_5631.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h84_reg_5631.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond13_fu_29477_p2() {
    exitcond13_fu_29477_p2 = (!i188_reg_7017.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i188_reg_7017.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond140_fu_21284_p2() {
    exitcond140_fu_21284_p2 = (!co124_reg_5620.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co124_reg_5620.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond141_fu_21254_p2() {
    exitcond141_fu_21254_p2 = (!w81_reg_5609.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w81_reg_5609.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond142_fu_21203_p2() {
    exitcond142_fu_21203_p2 = (!h82_reg_5598.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h82_reg_5598.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond143_fu_21161_p2() {
    exitcond143_fu_21161_p2 = (!co122_reg_5587.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co122_reg_5587.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond144_fu_21083_p2() {
    exitcond144_fu_21083_p2 = (!k36_reg_5576.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k36_reg_5576.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond145_fu_21071_p2() {
    exitcond145_fu_21071_p2 = (!i110_reg_5565.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_5565.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond146_fu_20890_p2() {
    exitcond146_fu_20890_p2 = (!i114_reg_5554.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_5554.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond147_fu_20865_p2() {
    exitcond147_fu_20865_p2 = (!ci54_reg_5543.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci54_reg_5543.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond148_fu_20801_p2() {
    exitcond148_fu_20801_p2 = (!co120_reg_5532.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co120_reg_5532.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond149_fu_20719_p2() {
    exitcond149_fu_20719_p2 = (!k34_reg_5521.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k34_reg_5521.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond14_fu_29287_p2() {
    exitcond14_fu_29287_p2 = (!i192_reg_7006.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i192_reg_7006.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond150_fu_20707_p2() {
    exitcond150_fu_20707_p2 = (!i108_reg_5510.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i108_reg_5510.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond151_fu_20503_p2() {
    exitcond151_fu_20503_p2 = (!i112_reg_5499.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_5499.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond152_fu_20483_p2() {
    exitcond152_fu_20483_p2 = (!h80_reg_5488.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h80_reg_5488.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond153_fu_20463_p2() {
    exitcond153_fu_20463_p2 = (!w79_reg_5477.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w79_reg_5477.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond154_fu_20451_p2() {
    exitcond154_fu_20451_p2 = (!co118_reg_5466.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co118_reg_5466.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond155_fu_20365_p2() {
    exitcond155_fu_20365_p2 = (!k32_reg_5455.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k32_reg_5455.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond156_fu_20353_p2() {
    exitcond156_fu_20353_p2 = (!i104_reg_5444.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i104_reg_5444.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond157_fu_20172_p2() {
    exitcond157_fu_20172_p2 = (!i106_reg_5433.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i106_reg_5433.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond158_fu_20147_p2() {
    exitcond158_fu_20147_p2 = (!ci52_reg_5422.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci52_reg_5422.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond159_fu_20083_p2() {
    exitcond159_fu_20083_p2 = (!co116_reg_5411.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co116_reg_5411.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond15_fu_29267_p2() {
    exitcond15_fu_29267_p2 = (!h114_reg_6995.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h114_reg_6995.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond160_fu_20040_p2() {
    exitcond160_fu_20040_p2 = (!w77_reg_5400.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w77_reg_5400.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond161_fu_19950_p2() {
    exitcond161_fu_19950_p2 = (!h78_reg_5389.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h78_reg_5389.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond162_fu_19872_p2() {
    exitcond162_fu_19872_p2 = (!co114_reg_5378.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co114_reg_5378.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond163_fu_19842_p2() {
    exitcond163_fu_19842_p2 = (!w75_reg_5367.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w75_reg_5367.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond164_fu_19791_p2() {
    exitcond164_fu_19791_p2 = (!h76_reg_5356.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h76_reg_5356.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond165_fu_19749_p2() {
    exitcond165_fu_19749_p2 = (!co112_reg_5345.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co112_reg_5345.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond166_fu_19671_p2() {
    exitcond166_fu_19671_p2 = (!k30_reg_5334.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k30_reg_5334.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond167_fu_19659_p2() {
    exitcond167_fu_19659_p2 = (!i98_reg_5323.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i98_reg_5323.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond168_fu_19478_p2() {
    exitcond168_fu_19478_p2 = (!i102_reg_5312.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i102_reg_5312.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond169_fu_19453_p2() {
    exitcond169_fu_19453_p2 = (!ci50_reg_5301.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci50_reg_5301.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond16_fu_29247_p2() {
    exitcond16_fu_29247_p2 = (!w113_reg_6984.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w113_reg_6984.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond170_fu_19389_p2() {
    exitcond170_fu_19389_p2 = (!co110_reg_5290.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co110_reg_5290.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond171_fu_19307_p2() {
    exitcond171_fu_19307_p2 = (!k28_reg_5279.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k28_reg_5279.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond172_fu_19295_p2() {
    exitcond172_fu_19295_p2 = (!i96_reg_5268.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_5268.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond173_fu_19091_p2() {
    exitcond173_fu_19091_p2 = (!i100_reg_5257.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i100_reg_5257.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond174_fu_19071_p2() {
    exitcond174_fu_19071_p2 = (!h74_reg_5246.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h74_reg_5246.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond175_fu_19051_p2() {
    exitcond175_fu_19051_p2 = (!w73_reg_5235.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w73_reg_5235.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond176_fu_19039_p2() {
    exitcond176_fu_19039_p2 = (!co108_reg_5224.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co108_reg_5224.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond177_fu_18953_p2() {
    exitcond177_fu_18953_p2 = (!k26_reg_5213.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k26_reg_5213.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond178_fu_18941_p2() {
    exitcond178_fu_18941_p2 = (!i92_reg_5202.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_5202.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond179_fu_18760_p2() {
    exitcond179_fu_18760_p2 = (!i94_reg_5191.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_5191.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond17_fu_29235_p2() {
    exitcond17_fu_29235_p2 = (!co178_reg_6973.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co178_reg_6973.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond180_fu_18735_p2() {
    exitcond180_fu_18735_p2 = (!ci48_reg_5180.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci48_reg_5180.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond181_fu_18671_p2() {
    exitcond181_fu_18671_p2 = (!co106_reg_5169.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co106_reg_5169.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond182_fu_18628_p2() {
    exitcond182_fu_18628_p2 = (!w71_reg_5158.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w71_reg_5158.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond183_fu_18538_p2() {
    exitcond183_fu_18538_p2 = (!h72_reg_5147.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h72_reg_5147.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond184_fu_18460_p2() {
    exitcond184_fu_18460_p2 = (!co104_reg_5136.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co104_reg_5136.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond185_fu_18430_p2() {
    exitcond185_fu_18430_p2 = (!w69_reg_5125.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w69_reg_5125.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond186_fu_18379_p2() {
    exitcond186_fu_18379_p2 = (!h70_reg_5114.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h70_reg_5114.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond187_fu_18337_p2() {
    exitcond187_fu_18337_p2 = (!co102_reg_5103.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co102_reg_5103.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond188_fu_18259_p2() {
    exitcond188_fu_18259_p2 = (!k24_reg_5092.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k24_reg_5092.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond189_fu_18247_p2() {
    exitcond189_fu_18247_p2 = (!i86_reg_5081.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i86_reg_5081.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond18_fu_29149_p2() {
    exitcond18_fu_29149_p2 = (!k72_reg_6962.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k72_reg_6962.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond190_fu_18066_p2() {
    exitcond190_fu_18066_p2 = (!i90_reg_5070.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_5070.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond191_fu_18041_p2() {
    exitcond191_fu_18041_p2 = (!ci46_reg_5059.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci46_reg_5059.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond192_fu_17977_p2() {
    exitcond192_fu_17977_p2 = (!co100_reg_5048.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co100_reg_5048.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond193_fu_17895_p2() {
    exitcond193_fu_17895_p2 = (!k22_reg_5037.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k22_reg_5037.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond194_fu_17883_p2() {
    exitcond194_fu_17883_p2 = (!i84_reg_5026.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i84_reg_5026.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond195_fu_17687_p2() {
    exitcond195_fu_17687_p2 = (!i88_reg_5015.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_5015.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond196_fu_17667_p2() {
    exitcond196_fu_17667_p2 = (!h68_reg_5004.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h68_reg_5004.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond197_fu_17647_p2() {
    exitcond197_fu_17647_p2 = (!w67_reg_4993.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w67_reg_4993.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond198_fu_17635_p2() {
    exitcond198_fu_17635_p2 = (!co98_reg_4982.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co98_reg_4982.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond199_fu_17549_p2() {
    exitcond199_fu_17549_p2 = (!k20_reg_4971.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k20_reg_4971.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond19_fu_29137_p2() {
    exitcond19_fu_29137_p2 = (!i184_reg_6951.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i184_reg_6951.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond1_fu_30160_p2() {
    exitcond1_fu_30160_p2 = (!h118_reg_7149.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h118_reg_7149.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond1_i_fu_30199_p2() {
    exitcond1_i_fu_30199_p2 = (!co_i_reg_7160.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(co_i_reg_7160.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond200_fu_17537_p2() {
    exitcond200_fu_17537_p2 = (!i80_reg_4960.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i80_reg_4960.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond201_fu_17356_p2() {
    exitcond201_fu_17356_p2 = (!i82_reg_4949.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i82_reg_4949.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond202_fu_17331_p2() {
    exitcond202_fu_17331_p2 = (!ci44_reg_4938.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci44_reg_4938.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond203_fu_17267_p2() {
    exitcond203_fu_17267_p2 = (!co96_reg_4927.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co96_reg_4927.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond204_fu_17224_p2() {
    exitcond204_fu_17224_p2 = (!w65_reg_4916.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w65_reg_4916.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond205_fu_17134_p2() {
    exitcond205_fu_17134_p2 = (!h66_reg_4905.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h66_reg_4905.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond206_fu_17056_p2() {
    exitcond206_fu_17056_p2 = (!co94_reg_4894.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co94_reg_4894.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond207_fu_17026_p2() {
    exitcond207_fu_17026_p2 = (!w63_reg_4883.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w63_reg_4883.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond208_fu_16975_p2() {
    exitcond208_fu_16975_p2 = (!h64_reg_4872.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h64_reg_4872.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond209_fu_16933_p2() {
    exitcond209_fu_16933_p2 = (!co92_reg_4861.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co92_reg_4861.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond20_fu_28970_p2() {
    exitcond20_fu_28970_p2 = (!i186_reg_6940.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i186_reg_6940.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond210_fu_16851_p2() {
    exitcond210_fu_16851_p2 = (!k18_reg_4850.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k18_reg_4850.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond211_fu_16839_p2() {
    exitcond211_fu_16839_p2 = (!i74_reg_4839.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_4839.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond212_fu_16658_p2() {
    exitcond212_fu_16658_p2 = (!i78_reg_4828.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i78_reg_4828.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond213_fu_16633_p2() {
    exitcond213_fu_16633_p2 = (!ci42_reg_4817.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci42_reg_4817.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond214_fu_16569_p2() {
    exitcond214_fu_16569_p2 = (!co90_reg_4806.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co90_reg_4806.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond215_fu_16483_p2() {
    exitcond215_fu_16483_p2 = (!k16_reg_4795.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k16_reg_4795.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond216_fu_16471_p2() {
    exitcond216_fu_16471_p2 = (!i72_reg_4784.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_4784.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond217_fu_16275_p2() {
    exitcond217_fu_16275_p2 = (!i76_reg_4773.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i76_reg_4773.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond218_fu_16255_p2() {
    exitcond218_fu_16255_p2 = (!h62_reg_4762.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h62_reg_4762.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond219_fu_16235_p2() {
    exitcond219_fu_16235_p2 = (!w61_reg_4751.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w61_reg_4751.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond21_fu_28945_p2() {
    exitcond21_fu_28945_p2 = (!ci78_reg_6929.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci78_reg_6929.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond220_fu_16223_p2() {
    exitcond220_fu_16223_p2 = (!co88_reg_4740.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co88_reg_4740.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond221_fu_16133_p2() {
    exitcond221_fu_16133_p2 = (!k14_reg_4729.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k14_reg_4729.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond222_fu_16121_p2() {
    exitcond222_fu_16121_p2 = (!i68_reg_4718.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_4718.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond223_fu_15932_p2() {
    exitcond223_fu_15932_p2 = (!i70_reg_4707.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_4707.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond224_fu_15907_p2() {
    exitcond224_fu_15907_p2 = (!ci40_reg_4696.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci40_reg_4696.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond225_fu_15843_p2() {
    exitcond225_fu_15843_p2 = (!co86_reg_4685.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co86_reg_4685.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond226_fu_15800_p2() {
    exitcond226_fu_15800_p2 = (!w59_reg_4674.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w59_reg_4674.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond227_fu_15710_p2() {
    exitcond227_fu_15710_p2 = (!h60_reg_4663.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h60_reg_4663.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond228_fu_15632_p2() {
    exitcond228_fu_15632_p2 = (!co84_reg_4652.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co84_reg_4652.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond229_fu_15602_p2() {
    exitcond229_fu_15602_p2 = (!w57_reg_4641.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w57_reg_4641.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond22_fu_28883_p2() {
    exitcond22_fu_28883_p2 = (!co176_reg_6918.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co176_reg_6918.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond230_fu_15551_p2() {
    exitcond230_fu_15551_p2 = (!h58_reg_4630.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h58_reg_4630.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond231_fu_15509_p2() {
    exitcond231_fu_15509_p2 = (!co82_reg_4619.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co82_reg_4619.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond232_fu_15427_p2() {
    exitcond232_fu_15427_p2 = (!k12_reg_4608.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k12_reg_4608.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond233_fu_15415_p2() {
    exitcond233_fu_15415_p2 = (!i62_reg_4597.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i62_reg_4597.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond234_fu_15234_p2() {
    exitcond234_fu_15234_p2 = (!i66_reg_4586.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_4586.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond235_fu_15209_p2() {
    exitcond235_fu_15209_p2 = (!ci38_reg_4575.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci38_reg_4575.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond236_fu_15145_p2() {
    exitcond236_fu_15145_p2 = (!co80_reg_4564.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co80_reg_4564.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond237_fu_15059_p2() {
    exitcond237_fu_15059_p2 = (!k10_reg_4553.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_4553.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond238_fu_15047_p2() {
    exitcond238_fu_15047_p2 = (!i60_reg_4542.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i60_reg_4542.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond239_fu_14851_p2() {
    exitcond239_fu_14851_p2 = (!i64_reg_4531.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i64_reg_4531.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond23_fu_28840_p2() {
    exitcond23_fu_28840_p2 = (!w111_reg_6907.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w111_reg_6907.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond240_fu_14831_p2() {
    exitcond240_fu_14831_p2 = (!h56_reg_4520.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h56_reg_4520.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond241_fu_14811_p2() {
    exitcond241_fu_14811_p2 = (!w55_reg_4509.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w55_reg_4509.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond242_fu_14799_p2() {
    exitcond242_fu_14799_p2 = (!co78_reg_4498.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co78_reg_4498.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond243_fu_14713_p2() {
    exitcond243_fu_14713_p2 = (!k9_reg_4487.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_4487.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond244_fu_14701_p2() {
    exitcond244_fu_14701_p2 = (!i56_reg_4476.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i56_reg_4476.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond245_fu_14520_p2() {
    exitcond245_fu_14520_p2 = (!i58_reg_4465.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i58_reg_4465.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond246_fu_14495_p2() {
    exitcond246_fu_14495_p2 = (!ci36_reg_4454.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci36_reg_4454.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond247_fu_14431_p2() {
    exitcond247_fu_14431_p2 = (!co76_reg_4443.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co76_reg_4443.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond248_fu_14388_p2() {
    exitcond248_fu_14388_p2 = (!w53_reg_4432.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w53_reg_4432.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond249_fu_14298_p2() {
    exitcond249_fu_14298_p2 = (!h54_reg_4421.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h54_reg_4421.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond24_fu_28758_p2() {
    exitcond24_fu_28758_p2 = (!h112_reg_6896.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h112_reg_6896.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond250_fu_14220_p2() {
    exitcond250_fu_14220_p2 = (!co74_reg_4410.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co74_reg_4410.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond251_fu_14190_p2() {
    exitcond251_fu_14190_p2 = (!w51_reg_4399.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w51_reg_4399.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond252_fu_14139_p2() {
    exitcond252_fu_14139_p2 = (!h52_reg_4388.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h52_reg_4388.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond253_fu_14097_p2() {
    exitcond253_fu_14097_p2 = (!co72_reg_4377.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co72_reg_4377.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond254_fu_14019_p2() {
    exitcond254_fu_14019_p2 = (!k8_reg_4366.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_4366.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond255_fu_14007_p2() {
    exitcond255_fu_14007_p2 = (!i50_reg_4355.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_4355.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond256_fu_13826_p2() {
    exitcond256_fu_13826_p2 = (!i54_reg_4344.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i54_reg_4344.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond257_fu_13801_p2() {
    exitcond257_fu_13801_p2 = (!ci34_reg_4333.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci34_reg_4333.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond258_fu_13737_p2() {
    exitcond258_fu_13737_p2 = (!co70_reg_4322.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co70_reg_4322.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond259_fu_13655_p2() {
    exitcond259_fu_13655_p2 = (!k7_reg_4311.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k7_reg_4311.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond25_fu_28672_p2() {
    exitcond25_fu_28672_p2 = (!co174_reg_6885.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co174_reg_6885.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond260_fu_13643_p2() {
    exitcond260_fu_13643_p2 = (!i48_reg_4300.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_4300.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond261_fu_13443_p2() {
    exitcond261_fu_13443_p2 = (!i52_reg_4289.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_4289.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond262_fu_13423_p2() {
    exitcond262_fu_13423_p2 = (!h50_reg_4278.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h50_reg_4278.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond263_fu_13403_p2() {
    exitcond263_fu_13403_p2 = (!w49_reg_4267.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w49_reg_4267.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond264_fu_13391_p2() {
    exitcond264_fu_13391_p2 = (!co68_reg_4256.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co68_reg_4256.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond265_fu_13305_p2() {
    exitcond265_fu_13305_p2 = (!k6_reg_4245.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k6_reg_4245.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond266_fu_13293_p2() {
    exitcond266_fu_13293_p2 = (!i44_reg_4234.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_4234.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond267_fu_13112_p2() {
    exitcond267_fu_13112_p2 = (!i46_reg_4223.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_4223.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond268_fu_13087_p2() {
    exitcond268_fu_13087_p2 = (!ci32_reg_4212.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci32_reg_4212.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond269_fu_13023_p2() {
    exitcond269_fu_13023_p2 = (!co66_reg_4201.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co66_reg_4201.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond26_fu_28642_p2() {
    exitcond26_fu_28642_p2 = (!w109_reg_6874.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w109_reg_6874.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond270_fu_12980_p2() {
    exitcond270_fu_12980_p2 = (!w48_reg_4190.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w48_reg_4190.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond271_fu_12890_p2() {
    exitcond271_fu_12890_p2 = (!h48_reg_4179.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h48_reg_4179.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond272_fu_12812_p2() {
    exitcond272_fu_12812_p2 = (!co64_reg_4168.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co64_reg_4168.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond273_fu_12730_p2() {
    exitcond273_fu_12730_p2 = (!k5_reg_4157.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k5_reg_4157.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond274_fu_12718_p2() {
    exitcond274_fu_12718_p2 = (!i39_reg_4146.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_4146.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond275_fu_12533_p2() {
    exitcond275_fu_12533_p2 = (!i42_reg_4135.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i42_reg_4135.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond276_fu_12508_p2() {
    exitcond276_fu_12508_p2 = (!ci30_reg_4124.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci30_reg_4124.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond277_fu_12444_p2() {
    exitcond277_fu_12444_p2 = (!co62_reg_4113.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co62_reg_4113.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond278_fu_12362_p2() {
    exitcond278_fu_12362_p2 = (!k4_reg_4102.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k4_reg_4102.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond279_fu_12350_p2() {
    exitcond279_fu_12350_p2 = (!i37_reg_4091.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_4091.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond27_fu_28591_p2() {
    exitcond27_fu_28591_p2 = (!h110_reg_6863.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h110_reg_6863.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond280_fu_12154_p2() {
    exitcond280_fu_12154_p2 = (!i40_reg_4080.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i40_reg_4080.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond281_fu_12134_p2() {
    exitcond281_fu_12134_p2 = (!h46_reg_4069.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h46_reg_4069.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond282_fu_12114_p2() {
    exitcond282_fu_12114_p2 = (!w46_reg_4058.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w46_reg_4058.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond283_fu_12102_p2() {
    exitcond283_fu_12102_p2 = (!co60_reg_4047.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co60_reg_4047.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond284_fu_12012_p2() {
    exitcond284_fu_12012_p2 = (!k3_reg_4036.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k3_reg_4036.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond285_fu_12000_p2() {
    exitcond285_fu_12000_p2 = (!i31_reg_4025.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i31_reg_4025.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond286_fu_11819_p2() {
    exitcond286_fu_11819_p2 = (!i35_reg_4014.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i35_reg_4014.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond287_fu_11794_p2() {
    exitcond287_fu_11794_p2 = (!ci28_reg_4003.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci28_reg_4003.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond288_fu_11730_p2() {
    exitcond288_fu_11730_p2 = (!co58_reg_3992.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co58_reg_3992.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond289_fu_11644_p2() {
    exitcond289_fu_11644_p2 = (!k2_reg_3981.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k2_reg_3981.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond28_fu_28545_p2() {
    exitcond28_fu_28545_p2 = (!co172_reg_6852.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co172_reg_6852.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond290_fu_11632_p2() {
    exitcond290_fu_11632_p2 = (!i29_reg_3970.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i29_reg_3970.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond291_fu_11432_p2() {
    exitcond291_fu_11432_p2 = (!i33_reg_3959.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i33_reg_3959.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond292_fu_11412_p2() {
    exitcond292_fu_11412_p2 = (!h44_reg_3948.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h44_reg_3948.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond293_fu_11392_p2() {
    exitcond293_fu_11392_p2 = (!w44_reg_3937.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w44_reg_3937.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond294_fu_11380_p2() {
    exitcond294_fu_11380_p2 = (!co56_reg_3926.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co56_reg_3926.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond295_fu_11294_p2() {
    exitcond295_fu_11294_p2 = (!k_reg_3915.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_3915.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond296_fu_11282_p2() {
    exitcond296_fu_11282_p2 = (!i27_reg_3904.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i27_reg_3904.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond297_fu_11101_p2() {
    exitcond297_fu_11101_p2 = (!i28_reg_3893.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i28_reg_3893.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond298_fu_11076_p2() {
    exitcond298_fu_11076_p2 = (!ci26_reg_3882.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci26_reg_3882.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond299_fu_11012_p2() {
    exitcond299_fu_11012_p2 = (!co54_reg_3871.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co54_reg_3871.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond29_fu_28467_p2() {
    exitcond29_fu_28467_p2 = (!k70_reg_6841.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k70_reg_6841.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond2_fu_30096_p2() {
    exitcond2_fu_30096_p2 = (!w115_reg_7138.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w115_reg_7138.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond300_fu_10982_p2() {
    exitcond300_fu_10982_p2 = (!w42_reg_3860.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_3860.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond301_fu_10931_p2() {
    exitcond301_fu_10931_p2 = (!h42_reg_3849.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h42_reg_3849.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond302_fu_10889_p2() {
    exitcond302_fu_10889_p2 = (!co52_reg_3838.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co52_reg_3838.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond303_fu_10861_p2() {
    exitcond303_fu_10861_p2 = (!i25_reg_3826.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_3826.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond304_fu_10818_p2() {
    exitcond304_fu_10818_p2 = (!ci24_reg_3815.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci24_reg_3815.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond305_fu_10730_p2() {
    exitcond305_fu_10730_p2 = (!co50_reg_3804.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co50_reg_3804.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond306_fu_10702_p2() {
    exitcond306_fu_10702_p2 = (!i23_reg_3792.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_3792.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond307_fu_10659_p2() {
    exitcond307_fu_10659_p2 = (!h40_reg_3781.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h40_reg_3781.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond308_fu_10595_p2() {
    exitcond308_fu_10595_p2 = (!w40_reg_3770.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w40_reg_3770.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond309_fu_10513_p2() {
    exitcond309_fu_10513_p2 = (!co48_reg_3759.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co48_reg_3759.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond30_fu_28455_p2() {
    exitcond30_fu_28455_p2 = (!i178_reg_6830.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_6830.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_10483_p2() {
    exitcond310_fu_10483_p2 = (!i21_reg_3747.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i21_reg_3747.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond311_fu_10444_p2() {
    exitcond311_fu_10444_p2 = (!ci22_reg_3736.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci22_reg_3736.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond312_fu_10362_p2() {
    exitcond312_fu_10362_p2 = (!co46_reg_3725.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co46_reg_3725.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond313_fu_10319_p2() {
    exitcond313_fu_10319_p2 = (!w38_reg_3714.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w38_reg_3714.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond314_fu_10237_p2() {
    exitcond314_fu_10237_p2 = (!h38_reg_3703.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h38_reg_3703.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond315_fu_10159_p2() {
    exitcond315_fu_10159_p2 = (!co44_reg_3692.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co44_reg_3692.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_10129_p2() {
    exitcond316_fu_10129_p2 = (!w36_reg_3681.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w36_reg_3681.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond317_fu_10078_p2() {
    exitcond317_fu_10078_p2 = (!h36_reg_3670.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h36_reg_3670.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond318_fu_10036_p2() {
    exitcond318_fu_10036_p2 = (!co42_reg_3659.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co42_reg_3659.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond319_fu_10008_p2() {
    exitcond319_fu_10008_p2 = (!i19_reg_3647.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i19_reg_3647.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond31_fu_28288_p2() {
    exitcond31_fu_28288_p2 = (!i182_reg_6819.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i182_reg_6819.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond320_fu_9965_p2() {
    exitcond320_fu_9965_p2 = (!ci20_reg_3636.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci20_reg_3636.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond321_fu_9883_p2() {
    exitcond321_fu_9883_p2 = (!co40_reg_3625.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co40_reg_3625.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond322_fu_9851_p2() {
    exitcond322_fu_9851_p2 = (!i17_reg_3613.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i17_reg_3613.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond323_fu_9808_p2() {
    exitcond323_fu_9808_p2 = (!h34_reg_3602.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h34_reg_3602.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond324_fu_9744_p2() {
    exitcond324_fu_9744_p2 = (!w34_reg_3591.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_3591.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond325_fu_9678_p2() {
    exitcond325_fu_9678_p2 = (!co38_reg_3580.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_3580.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond326_fu_9642_p2() {
    exitcond326_fu_9642_p2 = (!i15_reg_3568.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i15_reg_3568.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond327_fu_9599_p2() {
    exitcond327_fu_9599_p2 = (!ci18_reg_3557.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci18_reg_3557.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond328_fu_9517_p2() {
    exitcond328_fu_9517_p2 = (!co36_reg_3546.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co36_reg_3546.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond329_fu_9474_p2() {
    exitcond329_fu_9474_p2 = (!w32_reg_3535.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w32_reg_3535.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond32_fu_28263_p2() {
    exitcond32_fu_28263_p2 = (!ci76_reg_6808.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci76_reg_6808.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond330_fu_9392_p2() {
    exitcond330_fu_9392_p2 = (!h32_reg_3524.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h32_reg_3524.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond331_fu_9314_p2() {
    exitcond331_fu_9314_p2 = (!co34_reg_3513.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co34_reg_3513.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond332_fu_9284_p2() {
    exitcond332_fu_9284_p2 = (!w30_reg_3502.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w30_reg_3502.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond333_fu_9233_p2() {
    exitcond333_fu_9233_p2 = (!h30_reg_3491.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h30_reg_3491.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond334_fu_9191_p2() {
    exitcond334_fu_9191_p2 = (!co32_reg_3480.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co32_reg_3480.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond335_fu_9157_p2() {
    exitcond335_fu_9157_p2 = (!i13_reg_3468.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i13_reg_3468.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond336_fu_9118_p2() {
    exitcond336_fu_9118_p2 = (!ci16_reg_3457.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci16_reg_3457.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond337_fu_9030_p2() {
    exitcond337_fu_9030_p2 = (!co29_reg_3446.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_3446.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond338_fu_9002_p2() {
    exitcond338_fu_9002_p2 = (!i11_reg_3434.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_3434.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond339_fu_8959_p2() {
    exitcond339_fu_8959_p2 = (!h27_reg_3423.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h27_reg_3423.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond33_fu_28201_p2() {
    exitcond33_fu_28201_p2 = (!co170_reg_6797.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co170_reg_6797.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond340_fu_8895_p2() {
    exitcond340_fu_8895_p2 = (!w26_reg_3412.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_3412.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond341_fu_8829_p2() {
    exitcond341_fu_8829_p2 = (!co25_reg_3401.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co25_reg_3401.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond342_fu_8797_p2() {
    exitcond342_fu_8797_p2 = (!i10_reg_3389.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i10_reg_3389.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond343_fu_8754_p2() {
    exitcond343_fu_8754_p2 = (!ci14_reg_3378.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci14_reg_3378.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond344_fu_8672_p2() {
    exitcond344_fu_8672_p2 = (!co22_reg_3367.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co22_reg_3367.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond345_fu_8629_p2() {
    exitcond345_fu_8629_p2 = (!w21_reg_3356.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w21_reg_3356.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond346_fu_8547_p2() {
    exitcond346_fu_8547_p2 = (!h20_reg_3345.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h20_reg_3345.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond347_fu_8469_p2() {
    exitcond347_fu_8469_p2 = (!co19_reg_3334.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_3334.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond348_fu_8437_p2() {
    exitcond348_fu_8437_p2 = (!i9_reg_3322.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i9_reg_3322.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond349_fu_8394_p2() {
    exitcond349_fu_8394_p2 = (!ci12_reg_3311.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci12_reg_3311.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond34_fu_28119_p2() {
    exitcond34_fu_28119_p2 = (!k68_reg_6786.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k68_reg_6786.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond350_fu_8312_p2() {
    exitcond350_fu_8312_p2 = (!co16_reg_3300.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_3300.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond351_fu_8274_p2() {
    exitcond351_fu_8274_p2 = (!i7_reg_3288.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i7_reg_3288.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond352_fu_8235_p2() {
    exitcond352_fu_8235_p2 = (!h14_reg_3277.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_3277.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond353_fu_8175_p2() {
    exitcond353_fu_8175_p2 = (!w13_reg_3266.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_3266.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond354_fu_8109_p2() {
    exitcond354_fu_8109_p2 = (!co12_reg_3255.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_3255.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond355_fu_8077_p2() {
    exitcond355_fu_8077_p2 = (!i6_reg_3243.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i6_reg_3243.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_8034_p2() {
    exitcond356_fu_8034_p2 = (!ci10_reg_3232.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_3232.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond357_fu_7952_p2() {
    exitcond357_fu_7952_p2 = (!co9_reg_3221.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_3221.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond358_fu_7920_p2() {
    exitcond358_fu_7920_p2 = (!i8_reg_3209.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_3209.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond359_fu_7890_p2() {
    exitcond359_fu_7890_p2 = (!h7_reg_3198.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h7_reg_3198.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond35_fu_28107_p2() {
    exitcond35_fu_28107_p2 = (!i176_reg_6775.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_6775.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond360_fu_7847_p2() {
    exitcond360_fu_7847_p2 = (!w6_reg_3187.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w6_reg_3187.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond361_fu_7809_p2() {
    exitcond361_fu_7809_p2 = (!co5_reg_3176.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co5_reg_3176.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond362_fu_7781_p2() {
    exitcond362_fu_7781_p2 = (!i4_reg_3164.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_3164.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond363_fu_7751_p2() {
    exitcond363_fu_7751_p2 = (!ci3_reg_3153.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci3_reg_3153.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond364_fu_7705_p2() {
    exitcond364_fu_7705_p2 = (!co_reg_3142.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co_reg_3142.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond365_fu_7666_p2() {
    exitcond365_fu_7666_p2 = (!h_reg_3131.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(h_reg_3131.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond366_fu_7602_p2() {
    exitcond366_fu_7602_p2 = (!w_reg_3120.read().is_01() || !ap_const_lv6_20.is_01())? sc_lv<1>(): sc_lv<1>(w_reg_3120.read() == ap_const_lv6_20);
}

void ShuffleNetV2::thread_exitcond367_fu_7560_p2() {
    exitcond367_fu_7560_p2 = (!ci_reg_3109.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(ci_reg_3109.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond368_fu_7528_p2() {
    exitcond368_fu_7528_p2 = (!i2_reg_3097.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_3097.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond369_fu_7492_p2() {
    exitcond369_fu_7492_p2 = (!i1_reg_3085.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_3085.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond36_fu_27899_p2() {
    exitcond36_fu_27899_p2 = (!i180_reg_6764.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_6764.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond37_fu_27879_p2() {
    exitcond37_fu_27879_p2 = (!h108_reg_6753.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h108_reg_6753.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond38_fu_27859_p2() {
    exitcond38_fu_27859_p2 = (!w107_reg_6742.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w107_reg_6742.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond39_fu_27847_p2() {
    exitcond39_fu_27847_p2 = (!co168_reg_6731.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co168_reg_6731.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond3_fu_30038_p2() {
    exitcond3_fu_30038_p2 = (!ci82_reg_7127.read().is_01() || !ap_const_lv8_C0.is_01())? sc_lv<1>(): sc_lv<1>(ci82_reg_7127.read() == ap_const_lv8_C0);
}

void ShuffleNetV2::thread_exitcond40_fu_27761_p2() {
    exitcond40_fu_27761_p2 = (!k66_reg_6720.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k66_reg_6720.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond41_fu_27749_p2() {
    exitcond41_fu_27749_p2 = (!i172_reg_6709.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_6709.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond42_fu_27582_p2() {
    exitcond42_fu_27582_p2 = (!i174_reg_6698.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_6698.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond43_fu_27557_p2() {
    exitcond43_fu_27557_p2 = (!ci74_reg_6687.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci74_reg_6687.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond44_fu_27495_p2() {
    exitcond44_fu_27495_p2 = (!co166_reg_6676.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co166_reg_6676.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond45_fu_27452_p2() {
    exitcond45_fu_27452_p2 = (!w105_reg_6665.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w105_reg_6665.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond46_fu_27370_p2() {
    exitcond46_fu_27370_p2 = (!h106_reg_6654.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h106_reg_6654.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond47_fu_27284_p2() {
    exitcond47_fu_27284_p2 = (!co164_reg_6643.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co164_reg_6643.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond48_fu_27254_p2() {
    exitcond48_fu_27254_p2 = (!w103_reg_6632.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w103_reg_6632.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond49_fu_27203_p2() {
    exitcond49_fu_27203_p2 = (!h104_reg_6621.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h104_reg_6621.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond4_fu_30012_p2() {
    exitcond4_fu_30012_p2 = (!w116_reg_7116.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w116_reg_7116.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond50_fu_27157_p2() {
    exitcond50_fu_27157_p2 = (!co162_reg_6610.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co162_reg_6610.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond51_fu_27079_p2() {
    exitcond51_fu_27079_p2 = (!k64_reg_6599.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k64_reg_6599.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond52_fu_27067_p2() {
    exitcond52_fu_27067_p2 = (!i166_reg_6588.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i166_reg_6588.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond53_fu_26888_p2() {
    exitcond53_fu_26888_p2 = (!i170_reg_6577.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i170_reg_6577.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond54_fu_26863_p2() {
    exitcond54_fu_26863_p2 = (!ci72_reg_6566.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci72_reg_6566.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond55_fu_26801_p2() {
    exitcond55_fu_26801_p2 = (!co160_reg_6555.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co160_reg_6555.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond56_fu_26719_p2() {
    exitcond56_fu_26719_p2 = (!k62_reg_6544.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k62_reg_6544.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond57_fu_26707_p2() {
    exitcond57_fu_26707_p2 = (!i164_reg_6533.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i164_reg_6533.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond58_fu_26515_p2() {
    exitcond58_fu_26515_p2 = (!i168_reg_6522.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i168_reg_6522.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond59_fu_26495_p2() {
    exitcond59_fu_26495_p2 = (!h102_reg_6511.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h102_reg_6511.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond5_fu_29961_p2() {
    exitcond5_fu_29961_p2 = (!h116_reg_7105.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h116_reg_7105.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond60_fu_26475_p2() {
    exitcond60_fu_26475_p2 = (!w101_reg_6500.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w101_reg_6500.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond61_fu_26463_p2() {
    exitcond61_fu_26463_p2 = (!co158_reg_6489.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co158_reg_6489.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond62_fu_26377_p2() {
    exitcond62_fu_26377_p2 = (!k60_reg_6478.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k60_reg_6478.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond63_fu_26365_p2() {
    exitcond63_fu_26365_p2 = (!i160_reg_6467.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i160_reg_6467.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond64_fu_26194_p2() {
    exitcond64_fu_26194_p2 = (!i162_reg_6456.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i162_reg_6456.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond65_fu_26169_p2() {
    exitcond65_fu_26169_p2 = (!ci70_reg_6445.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci70_reg_6445.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond66_fu_26107_p2() {
    exitcond66_fu_26107_p2 = (!co156_reg_6434.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co156_reg_6434.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond67_fu_26064_p2() {
    exitcond67_fu_26064_p2 = (!w99_reg_6423.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w99_reg_6423.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond68_fu_25982_p2() {
    exitcond68_fu_25982_p2 = (!h100_reg_6412.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h100_reg_6412.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond69_fu_25896_p2() {
    exitcond69_fu_25896_p2 = (!co154_reg_6401.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co154_reg_6401.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond6_fu_29915_p2() {
    exitcond6_fu_29915_p2 = (!co182_reg_7094.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co182_reg_7094.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond70_fu_25814_p2() {
    exitcond70_fu_25814_p2 = (!k58_reg_6390.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k58_reg_6390.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond71_fu_25802_p2() {
    exitcond71_fu_25802_p2 = (!i154_reg_6379.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_6379.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond72_fu_25631_p2() {
    exitcond72_fu_25631_p2 = (!i158_reg_6368.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_6368.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond73_fu_25606_p2() {
    exitcond73_fu_25606_p2 = (!ci68_reg_6357.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci68_reg_6357.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond74_fu_25544_p2() {
    exitcond74_fu_25544_p2 = (!co152_reg_6346.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co152_reg_6346.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond75_fu_25462_p2() {
    exitcond75_fu_25462_p2 = (!k56_reg_6335.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k56_reg_6335.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond76_fu_25450_p2() {
    exitcond76_fu_25450_p2 = (!i152_reg_6324.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_6324.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond77_fu_25258_p2() {
    exitcond77_fu_25258_p2 = (!i156_reg_6313.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_6313.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond78_fu_25238_p2() {
    exitcond78_fu_25238_p2 = (!h98_reg_6302.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h98_reg_6302.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond79_fu_25218_p2() {
    exitcond79_fu_25218_p2 = (!w97_reg_6291.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w97_reg_6291.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond7_fu_29837_p2() {
    exitcond7_fu_29837_p2 = (!k76_reg_7083.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k76_reg_7083.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond80_fu_25206_p2() {
    exitcond80_fu_25206_p2 = (!co150_reg_6280.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co150_reg_6280.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond81_fu_25112_p2() {
    exitcond81_fu_25112_p2 = (!k54_reg_6269.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k54_reg_6269.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond82_fu_25100_p2() {
    exitcond82_fu_25100_p2 = (!i146_reg_6258.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i146_reg_6258.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond83_fu_24929_p2() {
    exitcond83_fu_24929_p2 = (!i150_reg_6247.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_6247.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond84_fu_24904_p2() {
    exitcond84_fu_24904_p2 = (!ci66_reg_6236.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci66_reg_6236.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond85_fu_24842_p2() {
    exitcond85_fu_24842_p2 = (!co148_reg_6225.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co148_reg_6225.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond86_fu_24756_p2() {
    exitcond86_fu_24756_p2 = (!k52_reg_6214.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k52_reg_6214.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond87_fu_24744_p2() {
    exitcond87_fu_24744_p2 = (!i144_reg_6203.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i144_reg_6203.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond88_fu_24552_p2() {
    exitcond88_fu_24552_p2 = (!i148_reg_6192.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i148_reg_6192.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond89_fu_24532_p2() {
    exitcond89_fu_24532_p2 = (!h96_reg_6181.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h96_reg_6181.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond8_fu_29825_p2() {
    exitcond8_fu_29825_p2 = (!i190_reg_7072.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i190_reg_7072.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond90_fu_24512_p2() {
    exitcond90_fu_24512_p2 = (!w95_reg_6170.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w95_reg_6170.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond91_fu_24500_p2() {
    exitcond91_fu_24500_p2 = (!co146_reg_6159.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co146_reg_6159.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond92_fu_24410_p2() {
    exitcond92_fu_24410_p2 = (!k50_reg_6148.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k50_reg_6148.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond93_fu_24398_p2() {
    exitcond93_fu_24398_p2 = (!i140_reg_6137.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_6137.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_24227_p2() {
    exitcond94_fu_24227_p2 = (!i142_reg_6126.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i142_reg_6126.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond95_fu_24202_p2() {
    exitcond95_fu_24202_p2 = (!ci64_reg_6115.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci64_reg_6115.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond96_fu_24140_p2() {
    exitcond96_fu_24140_p2 = (!co144_reg_6104.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co144_reg_6104.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond97_fu_24110_p2() {
    exitcond97_fu_24110_p2 = (!w93_reg_6093.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w93_reg_6093.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond98_fu_24059_p2() {
    exitcond98_fu_24059_p2 = (!h94_reg_6082.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h94_reg_6082.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond99_fu_24017_p2() {
    exitcond99_fu_24017_p2 = (!co142_reg_6071.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co142_reg_6071.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond9_fu_29658_p2() {
    exitcond9_fu_29658_p2 = (!i194_reg_7061.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i194_reg_7061.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond_fu_7471_p2() {
    exitcond_fu_7471_p2 = (!i_reg_3074.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_3074.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_i_fu_30227_p2() {
    exitcond_i_fu_30227_p2 = (!ci_i_reg_7183.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(ci_i_reg_7183.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_fc_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        fc_bias_address0 =  (sc_lv<4>) (tmp_i_reg_37619.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        fc_bias_address0 =  (sc_lv<4>) (tmp_100_fu_7555_p1.read());
    } else {
        fc_bias_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        fc_bias_ce0 = ap_const_logic_1;
    } else {
        fc_bias_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        fc_bias_we0 = ap_const_logic_1;
    } else {
        fc_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_output_address0() {
    fc_output_address0 =  (sc_lv<10>) (tmp_i_reg_37619.read());
}

void ShuffleNetV2::thread_fc_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state725.read())) {
        fc_output_ce0 = ap_const_logic_1;
    } else {
        fc_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_output_d0() {
    fc_output_d0 = result_reg_37678.read();
}

void ShuffleNetV2::thread_fc_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state725.read())) {
        fc_output_we0 = ap_const_logic_1;
    } else {
        fc_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_weight_address0() {
    fc_weight_address0 =  (sc_lv<13>) (tmp_2129_cast_fu_30253_p1.read());
}

void ShuffleNetV2::thread_fc_weight_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state708.read())) {
        fc_weight_ce0 = ap_const_logic_1;
    } else {
        fc_weight_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_7365_ap_start() {
    grp_avgpool_fu_7365_ap_start = ap_reg_grp_avgpool_fu_7365_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_p_fu_7194_ap_start() {
    grp_conv1_p_fu_7194_ap_start = ap_reg_grp_conv1_p_fu_7194_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_7280_ap_start() {
    grp_conv_last_fu_7280_ap_start = ap_reg_grp_conv_last_fu_7280_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_7462_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state720.read())) {
        grp_fu_7462_p1 = fc_bias_load_reg_37673.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state714.read())) {
        grp_fu_7462_p1 = tmp_127_i_reg_37663.read();
    } else {
        grp_fu_7462_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_shuffle_24_l_p_fu_7414_ap_start() {
    grp_shuffle_24_l_p_fu_7414_ap_start = ap_reg_grp_shuffle_24_l_p_fu_7414_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_p_fu_7373_ap_start() {
    grp_shuffle_24_p_fu_7373_ap_start = ap_reg_grp_shuffle_24_p_fu_7373_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_p_fu_7422_ap_start() {
    grp_shuffle_24_r_p_fu_7422_ap_start = ap_reg_grp_shuffle_24_r_p_fu_7422_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_p_fu_7446_ap_start() {
    grp_shuffle_48_l_p_fu_7446_ap_start = ap_reg_grp_shuffle_48_l_p_fu_7446_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_p_fu_7397_ap_start() {
    grp_shuffle_48_p_fu_7397_ap_start = ap_reg_grp_shuffle_48_p_fu_7397_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_p_fu_7454_ap_start() {
    grp_shuffle_48_r_p_fu_7454_ap_start = ap_reg_grp_shuffle_48_r_p_fu_7454_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_p_fu_7430_ap_start() {
    grp_shuffle_96_l_p_fu_7430_ap_start = ap_reg_grp_shuffle_96_l_p_fu_7430_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_p_fu_7385_ap_start() {
    grp_shuffle_96_p_fu_7385_ap_start = ap_reg_grp_shuffle_96_p_fu_7385_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_p_fu_7438_ap_start() {
    grp_shuffle_96_r_p_fu_7438_ap_start = ap_reg_grp_shuffle_96_r_p_fu_7438_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_p_fu_7353_ap_start() {
    grp_subconv_1x1_16_p_fu_7353_ap_start = ap_reg_grp_subconv_1x1_16_p_fu_7353_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_p_fu_7230_ap_start() {
    grp_subconv_1x1_16p_p_fu_7230_ap_start = ap_reg_grp_subconv_1x1_16p_p_fu_7230_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_p_fu_7242_ap_start() {
    grp_subconv_1x1_32_p_fu_7242_ap_start = ap_reg_grp_subconv_1x1_32_p_fu_7242_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_p_fu_7206_ap_start() {
    grp_subconv_1x1_4_p_fu_7206_ap_start = ap_reg_grp_subconv_1x1_4_p_fu_7206_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_p_fu_7305_ap_start() {
    grp_subconv_1x1_8_p_fu_7305_ap_start = ap_reg_grp_subconv_1x1_8_p_fu_7305_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_p_fu_7218_ap_start() {
    grp_subconv_1x1_8p_p_fu_7218_ap_start = ap_reg_grp_subconv_1x1_8p_p_fu_7218_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_7341_ap_start() {
    grp_subconv_3x3_16_no_re_fu_7341_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_7341_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_7292_ap_start() {
    grp_subconv_3x3_16_strid_fu_7292_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_7292_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_7292_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state178.read())) {
        grp_subconv_3x3_16_strid_fu_7292_input_r_q0 = shuffleunit0_2_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state154.read())) {
        grp_subconv_3x3_16_strid_fu_7292_input_r_q0 = ShuffleConvs_1_Downs_q0.read();
    } else {
        grp_subconv_3x3_16_strid_fu_7292_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_7254_ap_start() {
    grp_subconv_3x3_32_strid_fu_7254_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_7254_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_7254_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state40.read())) {
        grp_subconv_3x3_32_strid_fu_7254_input_r_q0 = conv1_output_p_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state25.read())) {
        grp_subconv_3x3_32_strid_fu_7254_input_r_q0 = ShuffleConvs_0_Downs_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_7254_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_4_no_rel_fu_7317_ap_start() {
    grp_subconv_3x3_4_no_rel_fu_7317_ap_start = ap_reg_grp_subconv_3x3_4_no_rel_fu_7317_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_no_rel_fu_7329_ap_start() {
    grp_subconv_3x3_8_no_rel_fu_7329_ap_start = ap_reg_grp_subconv_3x3_8_no_rel_fu_7329_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_7267_ap_start() {
    grp_subconv_3x3_8_stride_fu_7267_ap_start = ap_reg_grp_subconv_3x3_8_stride_fu_7267_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_7267_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state564.read())) {
        grp_subconv_3x3_8_stride_fu_7267_input_r_q0 = shuffleunit1_7_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state540.read())) {
        grp_subconv_3x3_8_stride_fu_7267_input_r_q0 = ShuffleConvs_2_Downs_q0.read();
    } else {
        grp_subconv_3x3_8_stride_fu_7267_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_h_101_fu_25988_p2() {
    h_101_fu_25988_p2 = (!h100_reg_6412.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h100_reg_6412.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_103_fu_26501_p2() {
    h_103_fu_26501_p2 = (!h102_reg_6511.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h102_reg_6511.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_105_fu_27209_p2() {
    h_105_fu_27209_p2 = (!h104_reg_6621.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h104_reg_6621.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_107_fu_27376_p2() {
    h_107_fu_27376_p2 = (!h106_reg_6654.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h106_reg_6654.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_109_fu_27885_p2() {
    h_109_fu_27885_p2 = (!h108_reg_6753.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h108_reg_6753.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_111_fu_28597_p2() {
    h_111_fu_28597_p2 = (!h110_reg_6863.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h110_reg_6863.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_113_fu_28764_p2() {
    h_113_fu_28764_p2 = (!h112_reg_6896.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h112_reg_6896.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_115_fu_29273_p2() {
    h_115_fu_29273_p2 = (!h114_reg_6995.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h114_reg_6995.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_117_fu_29967_p2() {
    h_117_fu_29967_p2 = (!h116_reg_7105.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h116_reg_7105.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_119_fu_30166_p2() {
    h_119_fu_30166_p2 = (!h118_reg_7149.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h118_reg_7149.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_25_fu_7672_p2() {
    h_25_fu_7672_p2 = (!h_reg_3131.read().is_01() || !ap_const_lv6_1.is_01())? sc_lv<6>(): (sc_biguint<6>(h_reg_3131.read()) + sc_biguint<6>(ap_const_lv6_1));
}

void ShuffleNetV2::thread_h_26_fu_7896_p2() {
    h_26_fu_7896_p2 = (!h7_reg_3198.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h7_reg_3198.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_27_fu_8241_p2() {
    h_27_fu_8241_p2 = (!h14_reg_3277.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h14_reg_3277.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_28_fu_8553_p2() {
    h_28_fu_8553_p2 = (!h20_reg_3345.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h20_reg_3345.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_29_fu_8965_p2() {
    h_29_fu_8965_p2 = (!h27_reg_3423.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h27_reg_3423.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_31_fu_9239_p2() {
    h_31_fu_9239_p2 = (!h30_reg_3491.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h30_reg_3491.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_33_fu_9398_p2() {
    h_33_fu_9398_p2 = (!h32_reg_3524.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h32_reg_3524.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_35_fu_9814_p2() {
    h_35_fu_9814_p2 = (!h34_reg_3602.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h34_reg_3602.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_37_fu_10084_p2() {
    h_37_fu_10084_p2 = (!h36_reg_3670.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h36_reg_3670.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_39_fu_10243_p2() {
    h_39_fu_10243_p2 = (!h38_reg_3703.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h38_reg_3703.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_41_fu_10665_p2() {
    h_41_fu_10665_p2 = (!h40_reg_3781.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h40_reg_3781.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_43_fu_10937_p2() {
    h_43_fu_10937_p2 = (!h42_reg_3849.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h42_reg_3849.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_45_fu_11418_p2() {
    h_45_fu_11418_p2 = (!h44_reg_3948.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h44_reg_3948.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_47_fu_12140_p2() {
    h_47_fu_12140_p2 = (!h46_reg_4069.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h46_reg_4069.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_49_fu_12896_p2() {
    h_49_fu_12896_p2 = (!h48_reg_4179.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h48_reg_4179.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_51_fu_13429_p2() {
    h_51_fu_13429_p2 = (!h50_reg_4278.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h50_reg_4278.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_53_fu_14145_p2() {
    h_53_fu_14145_p2 = (!h52_reg_4388.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h52_reg_4388.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_55_fu_14304_p2() {
    h_55_fu_14304_p2 = (!h54_reg_4421.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h54_reg_4421.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_57_fu_14837_p2() {
    h_57_fu_14837_p2 = (!h56_reg_4520.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h56_reg_4520.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_59_fu_15557_p2() {
    h_59_fu_15557_p2 = (!h58_reg_4630.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h58_reg_4630.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_61_fu_15716_p2() {
    h_61_fu_15716_p2 = (!h60_reg_4663.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h60_reg_4663.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_63_fu_16261_p2() {
    h_63_fu_16261_p2 = (!h62_reg_4762.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h62_reg_4762.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_65_fu_16981_p2() {
    h_65_fu_16981_p2 = (!h64_reg_4872.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h64_reg_4872.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_67_fu_17140_p2() {
    h_67_fu_17140_p2 = (!h66_reg_4905.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h66_reg_4905.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_69_fu_17673_p2() {
    h_69_fu_17673_p2 = (!h68_reg_5004.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h68_reg_5004.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_71_fu_18385_p2() {
    h_71_fu_18385_p2 = (!h70_reg_5114.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h70_reg_5114.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_73_fu_18544_p2() {
    h_73_fu_18544_p2 = (!h72_reg_5147.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h72_reg_5147.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_75_fu_19077_p2() {
    h_75_fu_19077_p2 = (!h74_reg_5246.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h74_reg_5246.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_77_fu_19797_p2() {
    h_77_fu_19797_p2 = (!h76_reg_5356.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h76_reg_5356.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_79_fu_19956_p2() {
    h_79_fu_19956_p2 = (!h78_reg_5389.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h78_reg_5389.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_81_fu_20489_p2() {
    h_81_fu_20489_p2 = (!h80_reg_5488.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h80_reg_5488.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_83_fu_21209_p2() {
    h_83_fu_21209_p2 = (!h82_reg_5598.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h82_reg_5598.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_85_fu_21368_p2() {
    h_85_fu_21368_p2 = (!h84_reg_5631.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h84_reg_5631.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_87_fu_21909_p2() {
    h_87_fu_21909_p2 = (!h86_reg_5730.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h86_reg_5730.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_89_fu_22637_p2() {
    h_89_fu_22637_p2 = (!h88_reg_5840.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h88_reg_5840.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_91_fu_22796_p2() {
    h_91_fu_22796_p2 = (!h90_reg_5873.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h90_reg_5873.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_93_fu_23341_p2() {
    h_93_fu_23341_p2 = (!h92_reg_5972.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h92_reg_5972.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_95_fu_24065_p2() {
    h_95_fu_24065_p2 = (!h94_reg_6082.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h94_reg_6082.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_97_fu_24538_p2() {
    h_97_fu_24538_p2 = (!h96_reg_6181.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h96_reg_6181.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_99_fu_25244_p2() {
    h_99_fu_25244_p2 = (!h98_reg_6302.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h98_reg_6302.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i105_cast1_fu_20349_p1() {
    i105_cast1_fu_20349_p1 = esl_zext<11,5>(i104_reg_5444.read());
}

void ShuffleNetV2::thread_i105_cast_fu_20345_p1() {
    i105_cast_fu_20345_p1 = esl_zext<7,5>(i104_reg_5444.read());
}

void ShuffleNetV2::thread_i109_cast1_fu_20703_p1() {
    i109_cast1_fu_20703_p1 = esl_zext<11,5>(i108_reg_5510.read());
}

void ShuffleNetV2::thread_i109_cast_fu_20699_p1() {
    i109_cast_fu_20699_p1 = esl_zext<7,5>(i108_reg_5510.read());
}

void ShuffleNetV2::thread_i10_cast_fu_8793_p1() {
    i10_cast_fu_8793_p1 = esl_zext<8,5>(i10_reg_3389.read());
}

void ShuffleNetV2::thread_i111_cast1_fu_21067_p1() {
    i111_cast1_fu_21067_p1 = esl_zext<11,5>(i110_reg_5565.read());
}

void ShuffleNetV2::thread_i111_cast_fu_21063_p1() {
    i111_cast_fu_21063_p1 = esl_zext<7,5>(i110_reg_5565.read());
}

void ShuffleNetV2::thread_i117_cast1_fu_21769_p1() {
    i117_cast1_fu_21769_p1 = esl_zext<11,5>(i116_reg_5686.read());
}

void ShuffleNetV2::thread_i117_cast_fu_21765_p1() {
    i117_cast_fu_21765_p1 = esl_zext<7,5>(i116_reg_5686.read());
}

void ShuffleNetV2::thread_i11_cast_fu_8998_p1() {
    i11_cast_fu_8998_p1 = esl_zext<8,5>(i11_reg_3434.read());
}

void ShuffleNetV2::thread_i121_cast1_fu_22119_p1() {
    i121_cast1_fu_22119_p1 = esl_zext<11,5>(i120_reg_5752.read());
}

void ShuffleNetV2::thread_i121_cast_fu_22115_p1() {
    i121_cast_fu_22115_p1 = esl_zext<7,5>(i120_reg_5752.read());
}

void ShuffleNetV2::thread_i123_cast306_cast_fu_22491_p1() {
    i123_cast306_cast_fu_22491_p1 = esl_zext<10,5>(i122_reg_5807.read());
}

void ShuffleNetV2::thread_i123_cast_fu_22487_p1() {
    i123_cast_fu_22487_p1 = esl_zext<7,5>(i122_reg_5807.read());
}

void ShuffleNetV2::thread_i129_cast291_cast_fu_23197_p1() {
    i129_cast291_cast_fu_23197_p1 = esl_zext<10,5>(i128_reg_5928.read());
}

void ShuffleNetV2::thread_i129_cast_fu_23193_p1() {
    i129_cast_fu_23193_p1 = esl_zext<7,5>(i128_reg_5928.read());
}

void ShuffleNetV2::thread_i133_cast281_cast_fu_23543_p1() {
    i133_cast281_cast_fu_23543_p1 = esl_zext<10,5>(i132_reg_5994.read());
}

void ShuffleNetV2::thread_i133_cast_fu_23539_p1() {
    i133_cast_fu_23539_p1 = esl_zext<7,5>(i132_reg_5994.read());
}

void ShuffleNetV2::thread_i135_cast268_cast_fu_23919_p1() {
    i135_cast268_cast_fu_23919_p1 = esl_zext<10,5>(i134_reg_6049.read());
}

void ShuffleNetV2::thread_i135_cast_fu_23915_p1() {
    i135_cast_fu_23915_p1 = esl_zext<7,5>(i134_reg_6049.read());
}

void ShuffleNetV2::thread_i141_cast254_cast_fu_24394_p1() {
    i141_cast254_cast_fu_24394_p1 = esl_zext<10,5>(i140_reg_6137.read());
}

void ShuffleNetV2::thread_i141_cast_fu_24390_p1() {
    i141_cast_fu_24390_p1 = esl_zext<8,5>(i140_reg_6137.read());
}

void ShuffleNetV2::thread_i145_cast244_cast_fu_24740_p1() {
    i145_cast244_cast_fu_24740_p1 = esl_zext<9,5>(i144_reg_6203.read());
}

void ShuffleNetV2::thread_i145_cast_fu_24736_p1() {
    i145_cast_fu_24736_p1 = esl_zext<8,5>(i144_reg_6203.read());
}

void ShuffleNetV2::thread_i147_cast1_fu_25096_p1() {
    i147_cast1_fu_25096_p1 = esl_zext<12,5>(i146_reg_6258.read());
}

void ShuffleNetV2::thread_i147_cast_fu_25092_p1() {
    i147_cast_fu_25092_p1 = esl_zext<8,5>(i146_reg_6258.read());
}

void ShuffleNetV2::thread_i153_cast1_fu_25446_p1() {
    i153_cast1_fu_25446_p1 = esl_zext<12,5>(i152_reg_6324.read());
}

void ShuffleNetV2::thread_i153_cast_fu_25442_p1() {
    i153_cast_fu_25442_p1 = esl_zext<8,5>(i152_reg_6324.read());
}

void ShuffleNetV2::thread_i155_cast1_fu_25798_p1() {
    i155_cast1_fu_25798_p1 = esl_zext<12,5>(i154_reg_6379.read());
}

void ShuffleNetV2::thread_i155_cast_fu_25794_p1() {
    i155_cast_fu_25794_p1 = esl_zext<8,5>(i154_reg_6379.read());
}

void ShuffleNetV2::thread_i15_cast659_cast_fu_9638_p1() {
    i15_cast659_cast_fu_9638_p1 = esl_zext<7,5>(i15_reg_3568.read());
}

void ShuffleNetV2::thread_i161_cast1_fu_26361_p1() {
    i161_cast1_fu_26361_p1 = esl_zext<12,5>(i160_reg_6467.read());
}

void ShuffleNetV2::thread_i161_cast_fu_26357_p1() {
    i161_cast_fu_26357_p1 = esl_zext<8,5>(i160_reg_6467.read());
}

void ShuffleNetV2::thread_i165_cast1_fu_26703_p1() {
    i165_cast1_fu_26703_p1 = esl_zext<12,5>(i164_reg_6533.read());
}

void ShuffleNetV2::thread_i165_cast_fu_26699_p1() {
    i165_cast_fu_26699_p1 = esl_zext<8,5>(i164_reg_6533.read());
}

void ShuffleNetV2::thread_i167_cast1_fu_27063_p1() {
    i167_cast1_fu_27063_p1 = esl_zext<12,5>(i166_reg_6588.read());
}

void ShuffleNetV2::thread_i167_cast_fu_27059_p1() {
    i167_cast_fu_27059_p1 = esl_zext<8,5>(i166_reg_6588.read());
}

void ShuffleNetV2::thread_i173_cast1_fu_27745_p1() {
    i173_cast1_fu_27745_p1 = esl_zext<12,5>(i172_reg_6709.read());
}

void ShuffleNetV2::thread_i173_cast_fu_27741_p1() {
    i173_cast_fu_27741_p1 = esl_zext<8,5>(i172_reg_6709.read());
}

void ShuffleNetV2::thread_i177_cast1_fu_28103_p1() {
    i177_cast1_fu_28103_p1 = esl_zext<12,5>(i176_reg_6775.read());
}

void ShuffleNetV2::thread_i177_cast_fu_28099_p1() {
    i177_cast_fu_28099_p1 = esl_zext<8,5>(i176_reg_6775.read());
}

void ShuffleNetV2::thread_i179_cast1_fu_28451_p1() {
    i179_cast1_fu_28451_p1 = esl_zext<12,5>(i178_reg_6830.read());
}

void ShuffleNetV2::thread_i179_cast_fu_28447_p1() {
    i179_cast_fu_28447_p1 = esl_zext<8,5>(i178_reg_6830.read());
}

void ShuffleNetV2::thread_i17_cast_fu_9847_p1() {
    i17_cast_fu_9847_p1 = esl_zext<9,5>(i17_reg_3613.read());
}

void ShuffleNetV2::thread_i185_cast1_fu_29133_p1() {
    i185_cast1_fu_29133_p1 = esl_zext<12,5>(i184_reg_6951.read());
}

void ShuffleNetV2::thread_i185_cast_fu_29129_p1() {
    i185_cast_fu_29129_p1 = esl_zext<8,5>(i184_reg_6951.read());
}

void ShuffleNetV2::thread_i189_cast1_fu_29473_p1() {
    i189_cast1_fu_29473_p1 = esl_zext<12,5>(i188_reg_7017.read());
}

void ShuffleNetV2::thread_i189_cast_fu_29469_p1() {
    i189_cast_fu_29469_p1 = esl_zext<8,5>(i188_reg_7017.read());
}

void ShuffleNetV2::thread_i191_cast1_fu_29821_p1() {
    i191_cast1_fu_29821_p1 = esl_zext<12,5>(i190_reg_7072.read());
}

void ShuffleNetV2::thread_i191_cast_fu_29817_p1() {
    i191_cast_fu_29817_p1 = esl_zext<8,5>(i190_reg_7072.read());
}

void ShuffleNetV2::thread_i19_cast_fu_10004_p1() {
    i19_cast_fu_10004_p1 = esl_zext<9,5>(i19_reg_3647.read());
}

void ShuffleNetV2::thread_i1_cast710_cast_fu_7488_p1() {
    i1_cast710_cast_fu_7488_p1 = esl_zext<11,10>(i1_reg_3085.read());
}

void ShuffleNetV2::thread_i23_cast_fu_10698_p1() {
    i23_cast_fu_10698_p1 = esl_zext<9,5>(i23_reg_3792.read());
}

void ShuffleNetV2::thread_i25_cast_fu_10857_p1() {
    i25_cast_fu_10857_p1 = esl_zext<9,5>(i25_reg_3826.read());
}

void ShuffleNetV2::thread_i27_cast1_fu_11278_p1() {
    i27_cast1_fu_11278_p1 = esl_zext<9,5>(i27_reg_3904.read());
}

void ShuffleNetV2::thread_i27_cast_fu_11274_p1() {
    i27_cast_fu_11274_p1 = esl_zext<7,5>(i27_reg_3904.read());
}

void ShuffleNetV2::thread_i29_cast607_cast_fu_11628_p1() {
    i29_cast607_cast_fu_11628_p1 = esl_zext<8,5>(i29_reg_3970.read());
}

void ShuffleNetV2::thread_i29_cast_fu_11624_p1() {
    i29_cast_fu_11624_p1 = esl_zext<7,5>(i29_reg_3970.read());
}

void ShuffleNetV2::thread_i2_cast708_cast_fu_7524_p1() {
    i2_cast708_cast_fu_7524_p1 = esl_zext<10,4>(i2_reg_3097.read());
}

void ShuffleNetV2::thread_i32_cast594_cast_fu_11996_p1() {
    i32_cast594_cast_fu_11996_p1 = esl_zext<8,5>(i31_reg_4025.read());
}

void ShuffleNetV2::thread_i32_cast_fu_11992_p1() {
    i32_cast_fu_11992_p1 = esl_zext<7,5>(i31_reg_4025.read());
}

void ShuffleNetV2::thread_i37_cast1_fu_12346_p1() {
    i37_cast1_fu_12346_p1 = esl_zext<10,5>(i37_reg_4091.read());
}

void ShuffleNetV2::thread_i37_cast_fu_12342_p1() {
    i37_cast_fu_12342_p1 = esl_zext<7,5>(i37_reg_4091.read());
}

void ShuffleNetV2::thread_i39_cast1_fu_12714_p1() {
    i39_cast1_fu_12714_p1 = esl_zext<10,5>(i39_reg_4146.read());
}

void ShuffleNetV2::thread_i39_cast_fu_12710_p1() {
    i39_cast_fu_12710_p1 = esl_zext<7,5>(i39_reg_4146.read());
}

void ShuffleNetV2::thread_i45_cast1_fu_13289_p1() {
    i45_cast1_fu_13289_p1 = esl_zext<10,5>(i44_reg_4234.read());
}

void ShuffleNetV2::thread_i45_cast_fu_13285_p1() {
    i45_cast_fu_13285_p1 = esl_zext<7,5>(i44_reg_4234.read());
}

void ShuffleNetV2::thread_i49_cast1_fu_13639_p1() {
    i49_cast1_fu_13639_p1 = esl_zext<10,5>(i48_reg_4300.read());
}

void ShuffleNetV2::thread_i49_cast_fu_13635_p1() {
    i49_cast_fu_13635_p1 = esl_zext<7,5>(i48_reg_4300.read());
}

void ShuffleNetV2::thread_i4_cast_fu_7777_p1() {
    i4_cast_fu_7777_p1 = esl_zext<6,5>(i4_reg_3164.read());
}

void ShuffleNetV2::thread_i51_cast1_fu_14003_p1() {
    i51_cast1_fu_14003_p1 = esl_zext<10,5>(i50_reg_4355.read());
}

void ShuffleNetV2::thread_i51_cast_fu_13999_p1() {
    i51_cast_fu_13999_p1 = esl_zext<7,5>(i50_reg_4355.read());
}

void ShuffleNetV2::thread_i57_cast1_fu_14697_p1() {
    i57_cast1_fu_14697_p1 = esl_zext<10,5>(i56_reg_4476.read());
}

void ShuffleNetV2::thread_i57_cast_fu_14693_p1() {
    i57_cast_fu_14693_p1 = esl_zext<7,5>(i56_reg_4476.read());
}

void ShuffleNetV2::thread_i61_cast509_cast_fu_15043_p1() {
    i61_cast509_cast_fu_15043_p1 = esl_zext<9,5>(i60_reg_4542.read());
}

void ShuffleNetV2::thread_i61_cast_fu_15039_p1() {
    i61_cast_fu_15039_p1 = esl_zext<7,5>(i60_reg_4542.read());
}

void ShuffleNetV2::thread_i63_cast496_cast_fu_15411_p1() {
    i63_cast496_cast_fu_15411_p1 = esl_zext<9,5>(i62_reg_4597.read());
}

void ShuffleNetV2::thread_i63_cast_fu_15407_p1() {
    i63_cast_fu_15407_p1 = esl_zext<7,5>(i62_reg_4597.read());
}

void ShuffleNetV2::thread_i69_cast481_cast_fu_16117_p1() {
    i69_cast481_cast_fu_16117_p1 = esl_zext<9,5>(i68_reg_4718.read());
}

void ShuffleNetV2::thread_i69_cast_fu_16113_p1() {
    i69_cast_fu_16113_p1 = esl_zext<7,5>(i68_reg_4718.read());
}

void ShuffleNetV2::thread_i6_cast_fu_8073_p1() {
    i6_cast_fu_8073_p1 = esl_zext<7,5>(i6_reg_3243.read());
}

void ShuffleNetV2::thread_i73_cast471_cast_fu_16467_p1() {
    i73_cast471_cast_fu_16467_p1 = esl_zext<8,5>(i72_reg_4784.read());
}

void ShuffleNetV2::thread_i73_cast_fu_16463_p1() {
    i73_cast_fu_16463_p1 = esl_zext<7,5>(i72_reg_4784.read());
}

void ShuffleNetV2::thread_i75_cast1_fu_16835_p1() {
    i75_cast1_fu_16835_p1 = esl_zext<11,5>(i74_reg_4839.read());
}

void ShuffleNetV2::thread_i75_cast_fu_16831_p1() {
    i75_cast_fu_16831_p1 = esl_zext<7,5>(i74_reg_4839.read());
}

void ShuffleNetV2::thread_i81_cast1_fu_17533_p1() {
    i81_cast1_fu_17533_p1 = esl_zext<11,5>(i80_reg_4960.read());
}

void ShuffleNetV2::thread_i81_cast_fu_17529_p1() {
    i81_cast_fu_17529_p1 = esl_zext<7,5>(i80_reg_4960.read());
}

void ShuffleNetV2::thread_i85_cast1_fu_17879_p1() {
    i85_cast1_fu_17879_p1 = esl_zext<11,5>(i84_reg_5026.read());
}

void ShuffleNetV2::thread_i85_cast_fu_17875_p1() {
    i85_cast_fu_17875_p1 = esl_zext<7,5>(i84_reg_5026.read());
}

void ShuffleNetV2::thread_i87_cast1_fu_18243_p1() {
    i87_cast1_fu_18243_p1 = esl_zext<11,5>(i86_reg_5081.read());
}

void ShuffleNetV2::thread_i87_cast_fu_18239_p1() {
    i87_cast_fu_18239_p1 = esl_zext<7,5>(i86_reg_5081.read());
}

void ShuffleNetV2::thread_i8_cast_fu_7916_p1() {
    i8_cast_fu_7916_p1 = esl_zext<7,5>(i8_reg_3209.read());
}

void ShuffleNetV2::thread_i93_cast1_fu_18937_p1() {
    i93_cast1_fu_18937_p1 = esl_zext<11,5>(i92_reg_5202.read());
}

void ShuffleNetV2::thread_i93_cast_fu_18933_p1() {
    i93_cast_fu_18933_p1 = esl_zext<7,5>(i92_reg_5202.read());
}

void ShuffleNetV2::thread_i97_cast1_fu_19291_p1() {
    i97_cast1_fu_19291_p1 = esl_zext<11,5>(i96_reg_5268.read());
}

void ShuffleNetV2::thread_i97_cast_fu_19287_p1() {
    i97_cast_fu_19287_p1 = esl_zext<7,5>(i96_reg_5268.read());
}

void ShuffleNetV2::thread_i99_cast1_fu_19655_p1() {
    i99_cast1_fu_19655_p1 = esl_zext<11,5>(i98_reg_5323.read());
}

void ShuffleNetV2::thread_i99_cast_fu_19651_p1() {
    i99_cast_fu_19651_p1 = esl_zext<7,5>(i98_reg_5323.read());
}

void ShuffleNetV2::thread_i9_cast_fu_8433_p1() {
    i9_cast_fu_8433_p1 = esl_zext<8,5>(i9_reg_3322.read());
}

void ShuffleNetV2::thread_i_101_fu_19097_p2() {
    i_101_fu_19097_p2 = (!i100_reg_5257.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i100_reg_5257.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_103_fu_19484_p2() {
    i_103_fu_19484_p2 = (!i102_reg_5312.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i102_reg_5312.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_105_fu_20359_p2() {
    i_105_fu_20359_p2 = (!i104_reg_5444.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i104_reg_5444.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_107_fu_20178_p2() {
    i_107_fu_20178_p2 = (!i106_reg_5433.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i106_reg_5433.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_109_fu_20713_p2() {
    i_109_fu_20713_p2 = (!i108_reg_5510.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i108_reg_5510.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_111_fu_21077_p2() {
    i_111_fu_21077_p2 = (!i110_reg_5565.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i110_reg_5565.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_113_fu_20509_p2() {
    i_113_fu_20509_p2 = (!i112_reg_5499.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i112_reg_5499.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_115_fu_20896_p2() {
    i_115_fu_20896_p2 = (!i114_reg_5554.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i114_reg_5554.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_117_fu_21779_p2() {
    i_117_fu_21779_p2 = (!i116_reg_5686.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i116_reg_5686.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_119_fu_21590_p2() {
    i_119_fu_21590_p2 = (!i118_reg_5675.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i118_reg_5675.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_121_fu_22129_p2() {
    i_121_fu_22129_p2 = (!i120_reg_5752.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i120_reg_5752.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_123_fu_22501_p2() {
    i_123_fu_22501_p2 = (!i122_reg_5807.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i122_reg_5807.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_125_fu_21929_p2() {
    i_125_fu_21929_p2 = (!i124_reg_5741.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i124_reg_5741.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_127_fu_22312_p2() {
    i_127_fu_22312_p2 = (!i126_reg_5796.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i126_reg_5796.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_129_fu_23207_p2() {
    i_129_fu_23207_p2 = (!i128_reg_5928.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i128_reg_5928.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_12_fu_9008_p2() {
    i_12_fu_9008_p2 = (!i11_reg_3434.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i11_reg_3434.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_131_fu_23018_p2() {
    i_131_fu_23018_p2 = (!i130_reg_5917.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i130_reg_5917.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_133_fu_23553_p2() {
    i_133_fu_23553_p2 = (!i132_reg_5994.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i132_reg_5994.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_135_fu_23929_p2() {
    i_135_fu_23929_p2 = (!i134_reg_6049.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i134_reg_6049.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_137_fu_23361_p2() {
    i_137_fu_23361_p2 = (!i136_reg_5983.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i136_reg_5983.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_139_fu_23740_p2() {
    i_139_fu_23740_p2 = (!i138_reg_6038.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i138_reg_6038.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_141_fu_24404_p2() {
    i_141_fu_24404_p2 = (!i140_reg_6137.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i140_reg_6137.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_143_fu_24233_p2() {
    i_143_fu_24233_p2 = (!i142_reg_6126.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i142_reg_6126.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_145_fu_24750_p2() {
    i_145_fu_24750_p2 = (!i144_reg_6203.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i144_reg_6203.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_147_fu_25106_p2() {
    i_147_fu_25106_p2 = (!i146_reg_6258.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i146_reg_6258.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_149_fu_24558_p2() {
    i_149_fu_24558_p2 = (!i148_reg_6192.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i148_reg_6192.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_14_fu_9163_p2() {
    i_14_fu_9163_p2 = (!i13_reg_3468.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i13_reg_3468.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_151_fu_24935_p2() {
    i_151_fu_24935_p2 = (!i150_reg_6247.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i150_reg_6247.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_153_fu_25456_p2() {
    i_153_fu_25456_p2 = (!i152_reg_6324.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i152_reg_6324.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_155_fu_25808_p2() {
    i_155_fu_25808_p2 = (!i154_reg_6379.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i154_reg_6379.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_157_fu_25264_p2() {
    i_157_fu_25264_p2 = (!i156_reg_6313.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i156_reg_6313.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_159_fu_25637_p2() {
    i_159_fu_25637_p2 = (!i158_reg_6368.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i158_reg_6368.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_161_fu_26371_p2() {
    i_161_fu_26371_p2 = (!i160_reg_6467.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i160_reg_6467.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_163_fu_26200_p2() {
    i_163_fu_26200_p2 = (!i162_reg_6456.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i162_reg_6456.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_165_fu_26713_p2() {
    i_165_fu_26713_p2 = (!i164_reg_6533.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i164_reg_6533.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_167_fu_27073_p2() {
    i_167_fu_27073_p2 = (!i166_reg_6588.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i166_reg_6588.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_169_fu_26521_p2() {
    i_169_fu_26521_p2 = (!i168_reg_6522.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i168_reg_6522.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_16_fu_9648_p2() {
    i_16_fu_9648_p2 = (!i15_reg_3568.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i15_reg_3568.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_171_fu_26894_p2() {
    i_171_fu_26894_p2 = (!i170_reg_6577.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i170_reg_6577.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_173_fu_27755_p2() {
    i_173_fu_27755_p2 = (!i172_reg_6709.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i172_reg_6709.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_175_fu_27588_p2() {
    i_175_fu_27588_p2 = (!i174_reg_6698.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i174_reg_6698.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_177_fu_28113_p2() {
    i_177_fu_28113_p2 = (!i176_reg_6775.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i176_reg_6775.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_179_fu_28461_p2() {
    i_179_fu_28461_p2 = (!i178_reg_6830.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i178_reg_6830.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_181_fu_27905_p2() {
    i_181_fu_27905_p2 = (!i180_reg_6764.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i180_reg_6764.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_183_fu_28294_p2() {
    i_183_fu_28294_p2 = (!i182_reg_6819.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i182_reg_6819.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_185_fu_29143_p2() {
    i_185_fu_29143_p2 = (!i184_reg_6951.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i184_reg_6951.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_187_fu_28976_p2() {
    i_187_fu_28976_p2 = (!i186_reg_6940.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i186_reg_6940.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_189_fu_29483_p2() {
    i_189_fu_29483_p2 = (!i188_reg_7017.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i188_reg_7017.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_18_fu_9857_p2() {
    i_18_fu_9857_p2 = (!i17_reg_3613.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i17_reg_3613.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_191_fu_29831_p2() {
    i_191_fu_29831_p2 = (!i190_reg_7072.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i190_reg_7072.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_193_fu_29293_p2() {
    i_193_fu_29293_p2 = (!i192_reg_7006.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i192_reg_7006.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_195_fu_29664_p2() {
    i_195_fu_29664_p2 = (!i194_reg_7061.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i194_reg_7061.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_1_fu_7477_p2() {
    i_1_fu_7477_p2 = (!i_reg_3074.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_reg_3074.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_20_fu_10014_p2() {
    i_20_fu_10014_p2 = (!i19_reg_3647.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i19_reg_3647.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_22_fu_10489_p2() {
    i_22_fu_10489_p2 = (!i21_reg_3747.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i21_reg_3747.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_24_fu_10708_p2() {
    i_24_fu_10708_p2 = (!i23_reg_3792.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i23_reg_3792.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_26_fu_10867_p2() {
    i_26_fu_10867_p2 = (!i25_reg_3826.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i25_reg_3826.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_28_fu_11288_p2() {
    i_28_fu_11288_p2 = (!i27_reg_3904.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i27_reg_3904.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_29_fu_11107_p2() {
    i_29_fu_11107_p2 = (!i28_reg_3893.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i28_reg_3893.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_2_fu_7498_p2() {
    i_2_fu_7498_p2 = (!i1_reg_3085.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i1_reg_3085.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_i_30_fu_11638_p2() {
    i_30_fu_11638_p2 = (!i29_reg_3970.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i29_reg_3970.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_32_fu_12006_p2() {
    i_32_fu_12006_p2 = (!i31_reg_4025.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i31_reg_4025.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_34_fu_11438_p2() {
    i_34_fu_11438_p2 = (!i33_reg_3959.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i33_reg_3959.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_36_fu_11825_p2() {
    i_36_fu_11825_p2 = (!i35_reg_4014.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i35_reg_4014.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_38_fu_12356_p2() {
    i_38_fu_12356_p2 = (!i37_reg_4091.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i37_reg_4091.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_3_fu_7534_p2() {
    i_3_fu_7534_p2 = (!i2_reg_3097.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i2_reg_3097.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_i_40_fu_12724_p2() {
    i_40_fu_12724_p2 = (!i39_reg_4146.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i39_reg_4146.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_41_fu_12160_p2() {
    i_41_fu_12160_p2 = (!i40_reg_4080.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i40_reg_4080.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_43_fu_12539_p2() {
    i_43_fu_12539_p2 = (!i42_reg_4135.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i42_reg_4135.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_45_fu_13299_p2() {
    i_45_fu_13299_p2 = (!i44_reg_4234.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i44_reg_4234.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_47_fu_13118_p2() {
    i_47_fu_13118_p2 = (!i46_reg_4223.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i46_reg_4223.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_49_fu_13649_p2() {
    i_49_fu_13649_p2 = (!i48_reg_4300.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i48_reg_4300.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_4_fu_7787_p2() {
    i_4_fu_7787_p2 = (!i4_reg_3164.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i4_reg_3164.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_51_fu_14013_p2() {
    i_51_fu_14013_p2 = (!i50_reg_4355.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i50_reg_4355.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_53_fu_13449_p2() {
    i_53_fu_13449_p2 = (!i52_reg_4289.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i52_reg_4289.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_55_fu_13832_p2() {
    i_55_fu_13832_p2 = (!i54_reg_4344.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i54_reg_4344.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_57_fu_14707_p2() {
    i_57_fu_14707_p2 = (!i56_reg_4476.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i56_reg_4476.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_59_fu_14526_p2() {
    i_59_fu_14526_p2 = (!i58_reg_4465.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i58_reg_4465.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_5_fu_7926_p2() {
    i_5_fu_7926_p2 = (!i8_reg_3209.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i8_reg_3209.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_61_fu_15053_p2() {
    i_61_fu_15053_p2 = (!i60_reg_4542.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i60_reg_4542.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_63_fu_15421_p2() {
    i_63_fu_15421_p2 = (!i62_reg_4597.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i62_reg_4597.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_65_fu_14857_p2() {
    i_65_fu_14857_p2 = (!i64_reg_4531.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i64_reg_4531.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_67_fu_15240_p2() {
    i_67_fu_15240_p2 = (!i66_reg_4586.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i66_reg_4586.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_69_fu_16127_p2() {
    i_69_fu_16127_p2 = (!i68_reg_4718.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i68_reg_4718.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_6_fu_8083_p2() {
    i_6_fu_8083_p2 = (!i6_reg_3243.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i6_reg_3243.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_71_fu_15938_p2() {
    i_71_fu_15938_p2 = (!i70_reg_4707.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i70_reg_4707.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_73_fu_16477_p2() {
    i_73_fu_16477_p2 = (!i72_reg_4784.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i72_reg_4784.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_75_fu_16845_p2() {
    i_75_fu_16845_p2 = (!i74_reg_4839.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i74_reg_4839.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_77_fu_16281_p2() {
    i_77_fu_16281_p2 = (!i76_reg_4773.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i76_reg_4773.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_79_fu_16664_p2() {
    i_79_fu_16664_p2 = (!i78_reg_4828.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i78_reg_4828.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_7_fu_8280_p2() {
    i_7_fu_8280_p2 = (!i7_reg_3288.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i7_reg_3288.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_81_fu_17543_p2() {
    i_81_fu_17543_p2 = (!i80_reg_4960.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i80_reg_4960.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_83_fu_17362_p2() {
    i_83_fu_17362_p2 = (!i82_reg_4949.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i82_reg_4949.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_85_fu_17889_p2() {
    i_85_fu_17889_p2 = (!i84_reg_5026.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i84_reg_5026.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_87_fu_18253_p2() {
    i_87_fu_18253_p2 = (!i86_reg_5081.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i86_reg_5081.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_89_fu_17693_p2() {
    i_89_fu_17693_p2 = (!i88_reg_5015.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i88_reg_5015.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_8_fu_8443_p2() {
    i_8_fu_8443_p2 = (!i9_reg_3322.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i9_reg_3322.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_91_fu_18072_p2() {
    i_91_fu_18072_p2 = (!i90_reg_5070.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i90_reg_5070.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_93_fu_18947_p2() {
    i_93_fu_18947_p2 = (!i92_reg_5202.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i92_reg_5202.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_95_fu_18766_p2() {
    i_95_fu_18766_p2 = (!i94_reg_5191.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i94_reg_5191.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_97_fu_19301_p2() {
    i_97_fu_19301_p2 = (!i96_reg_5268.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i96_reg_5268.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_99_fu_19665_p2() {
    i_99_fu_19665_p2 = (!i98_reg_5323.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i98_reg_5323.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_9_fu_8803_p2() {
    i_9_fu_8803_p2 = (!i10_reg_3389.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i10_reg_3389.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_image_p_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        image_p_address0 =  (sc_lv<12>) (tmp_566_cast_fu_7701_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        image_p_address0 = grp_conv1_p_fu_7194_input_r_address0.read();
    } else {
        image_p_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_image_p_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        image_p_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state12.read())) {
        image_p_ce0 = grp_conv1_p_fu_7194_input_r_ce0.read();
    } else {
        image_p_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_image_p_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state11.read())) {
        image_p_we0 = ap_const_logic_1;
    } else {
        image_p_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_image_r_address0() {
    image_r_address0 =  (sc_lv<12>) (tmp_565_cast_fu_7687_p1.read());
}

void ShuffleNetV2::thread_image_r_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        image_r_ce0 = ap_const_logic_1;
    } else {
        image_r_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_k_11_fu_15065_p2() {
    k_11_fu_15065_p2 = (!k10_reg_4553.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k10_reg_4553.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_13_fu_15433_p2() {
    k_13_fu_15433_p2 = (!k12_reg_4608.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k12_reg_4608.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_15_fu_16139_p2() {
    k_15_fu_16139_p2 = (!k14_reg_4729.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k14_reg_4729.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_17_fu_16489_p2() {
    k_17_fu_16489_p2 = (!k16_reg_4795.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k16_reg_4795.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_19_fu_16857_p2() {
    k_19_fu_16857_p2 = (!k18_reg_4850.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k18_reg_4850.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_1_fu_11300_p2() {
    k_1_fu_11300_p2 = (!k_reg_3915.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k_reg_3915.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_21_fu_17555_p2() {
    k_21_fu_17555_p2 = (!k20_reg_4971.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k20_reg_4971.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_23_fu_17901_p2() {
    k_23_fu_17901_p2 = (!k22_reg_5037.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k22_reg_5037.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_25_fu_18265_p2() {
    k_25_fu_18265_p2 = (!k24_reg_5092.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k24_reg_5092.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_27_fu_18959_p2() {
    k_27_fu_18959_p2 = (!k26_reg_5213.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k26_reg_5213.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_29_fu_19313_p2() {
    k_29_fu_19313_p2 = (!k28_reg_5279.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k28_reg_5279.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_2_fu_11650_p2() {
    k_2_fu_11650_p2 = (!k2_reg_3981.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k2_reg_3981.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_31_fu_19677_p2() {
    k_31_fu_19677_p2 = (!k30_reg_5334.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k30_reg_5334.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_33_fu_20371_p2() {
    k_33_fu_20371_p2 = (!k32_reg_5455.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k32_reg_5455.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_35_fu_20725_p2() {
    k_35_fu_20725_p2 = (!k34_reg_5521.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k34_reg_5521.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_37_fu_21089_p2() {
    k_37_fu_21089_p2 = (!k36_reg_5576.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k36_reg_5576.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_39_fu_21791_p2() {
    k_39_fu_21791_p2 = (!k38_reg_5697.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k38_reg_5697.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_3_fu_12018_p2() {
    k_3_fu_12018_p2 = (!k3_reg_4036.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k3_reg_4036.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_41_fu_22141_p2() {
    k_41_fu_22141_p2 = (!k40_reg_5763.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k40_reg_5763.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_43_fu_22513_p2() {
    k_43_fu_22513_p2 = (!k42_reg_5818.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k42_reg_5818.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_45_fu_23219_p2() {
    k_45_fu_23219_p2 = (!k44_reg_5939.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k44_reg_5939.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_47_fu_23565_p2() {
    k_47_fu_23565_p2 = (!k46_reg_6005.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k46_reg_6005.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_49_fu_23941_p2() {
    k_49_fu_23941_p2 = (!k48_reg_6060.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k48_reg_6060.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_4_fu_12368_p2() {
    k_4_fu_12368_p2 = (!k4_reg_4102.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k4_reg_4102.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_51_fu_24416_p2() {
    k_51_fu_24416_p2 = (!k50_reg_6148.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k50_reg_6148.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_53_fu_24762_p2() {
    k_53_fu_24762_p2 = (!k52_reg_6214.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k52_reg_6214.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_55_fu_25118_p2() {
    k_55_fu_25118_p2 = (!k54_reg_6269.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k54_reg_6269.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_57_fu_25468_p2() {
    k_57_fu_25468_p2 = (!k56_reg_6335.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k56_reg_6335.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_59_fu_25820_p2() {
    k_59_fu_25820_p2 = (!k58_reg_6390.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k58_reg_6390.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_5_fu_12736_p2() {
    k_5_fu_12736_p2 = (!k5_reg_4157.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k5_reg_4157.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_61_fu_26383_p2() {
    k_61_fu_26383_p2 = (!k60_reg_6478.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k60_reg_6478.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_63_fu_26725_p2() {
    k_63_fu_26725_p2 = (!k62_reg_6544.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k62_reg_6544.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_65_fu_27085_p2() {
    k_65_fu_27085_p2 = (!k64_reg_6599.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k64_reg_6599.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_67_fu_27767_p2() {
    k_67_fu_27767_p2 = (!k66_reg_6720.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k66_reg_6720.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_69_fu_28125_p2() {
    k_69_fu_28125_p2 = (!k68_reg_6786.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k68_reg_6786.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_6_fu_13311_p2() {
    k_6_fu_13311_p2 = (!k6_reg_4245.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k6_reg_4245.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_71_fu_28473_p2() {
    k_71_fu_28473_p2 = (!k70_reg_6841.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k70_reg_6841.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_73_fu_29155_p2() {
    k_73_fu_29155_p2 = (!k72_reg_6962.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k72_reg_6962.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_75_fu_29495_p2() {
    k_75_fu_29495_p2 = (!k74_reg_7028.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k74_reg_7028.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_77_fu_29843_p2() {
    k_77_fu_29843_p2 = (!k76_reg_7083.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k76_reg_7083.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_7_fu_13661_p2() {
    k_7_fu_13661_p2 = (!k7_reg_4311.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k7_reg_4311.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_8_fu_14025_p2() {
    k_8_fu_14025_p2 = (!k8_reg_4366.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k8_reg_4366.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_9_fu_14719_p2() {
    k_9_fu_14719_p2 = (!k9_reg_4487.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k9_reg_4487.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_p_lshr_f10_cast_fu_18023_p4() {
    p_lshr_f10_cast_fu_18023_p4 = co100_reg_5048.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f11_cast_fu_18717_p4() {
    p_lshr_f11_cast_fu_18717_p4 = co106_reg_5169.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f12_cast_fu_19435_p4() {
    p_lshr_f12_cast_fu_19435_p4 = co110_reg_5290.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f13_cast_fu_20129_p4() {
    p_lshr_f13_cast_fu_20129_p4 = co116_reg_5411.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f14_cast_fu_20847_p4() {
    p_lshr_f14_cast_fu_20847_p4 = co120_reg_5532.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f15_cast_fu_21541_p4() {
    p_lshr_f15_cast_fu_21541_p4 = co126_reg_5653.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f16_cast_fu_22263_p4() {
    p_lshr_f16_cast_fu_22263_p4 = co130_reg_5774.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f17_cast_fu_22969_p4() {
    p_lshr_f17_cast_fu_22969_p4 = co136_reg_5895.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f18_cast_fu_23691_p4() {
    p_lshr_f18_cast_fu_23691_p4 = co140_reg_6016.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f19_cast_fu_24184_p4() {
    p_lshr_f19_cast_fu_24184_p4 = co144_reg_6104.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f1_cast_fu_11776_p4() {
    p_lshr_f1_cast_fu_11776_p4 = co58_reg_3992.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f20_cast_fu_24886_p4() {
    p_lshr_f20_cast_fu_24886_p4 = co148_reg_6225.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f21_cast_fu_25588_p4() {
    p_lshr_f21_cast_fu_25588_p4 = co152_reg_6346.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f22_cast_fu_26151_p4() {
    p_lshr_f22_cast_fu_26151_p4 = co156_reg_6434.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f23_cast_fu_26845_p4() {
    p_lshr_f23_cast_fu_26845_p4 = co160_reg_6555.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f24_cast_fu_27539_p4() {
    p_lshr_f24_cast_fu_27539_p4 = co166_reg_6676.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f25_cast_fu_28245_p4() {
    p_lshr_f25_cast_fu_28245_p4 = co170_reg_6797.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f26_cast_fu_28927_p4() {
    p_lshr_f26_cast_fu_28927_p4 = co176_reg_6918.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f27_cast_fu_29615_p4() {
    p_lshr_f27_cast_fu_29615_p4 = co180_reg_7039.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f2_cast_fu_12490_p4() {
    p_lshr_f2_cast_fu_12490_p4 = co62_reg_4113.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f3_cast_fu_13069_p4() {
    p_lshr_f3_cast_fu_13069_p4 = co66_reg_4201.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f4_cast_fu_13783_p4() {
    p_lshr_f4_cast_fu_13783_p4 = co70_reg_4322.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f5_cast_fu_14477_p4() {
    p_lshr_f5_cast_fu_14477_p4 = co76_reg_4443.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f6_cast_fu_15191_p4() {
    p_lshr_f6_cast_fu_15191_p4 = co80_reg_4564.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f7_cast_fu_15889_p4() {
    p_lshr_f7_cast_fu_15889_p4 = co86_reg_4685.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f8_cast_fu_16615_p4() {
    p_lshr_f8_cast_fu_16615_p4 = co90_reg_4806.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f9_cast_fu_17313_p4() {
    p_lshr_f9_cast_fu_17313_p4 = co96_reg_4927.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f_cast_fu_11058_p4() {
    p_lshr_f_cast_fu_11058_p4 = co54_reg_3871.read().range(4, 1);
}

void ShuffleNetV2::thread_p_shl100_cast_fu_17919_p1() {
    p_shl100_cast_fu_17919_p1 = esl_zext<7,6>(p_shl100_fu_17911_p3.read());
}

void ShuffleNetV2::thread_p_shl100_fu_17911_p3() {
    p_shl100_fu_17911_p3 = esl_concat<1,5>(tmp_1084_fu_17907_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl101_cast_fu_17931_p1() {
    p_shl101_cast_fu_17931_p1 = esl_zext<7,4>(p_shl101_fu_17923_p3.read());
}

void ShuffleNetV2::thread_p_shl101_fu_17923_p3() {
    p_shl101_fu_17923_p3 = esl_concat<1,3>(tmp_1084_fu_17907_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl102_cast_fu_18001_p1() {
    p_shl102_cast_fu_18001_p1 = esl_zext<7,6>(p_shl102_fu_17993_p3.read());
}

void ShuffleNetV2::thread_p_shl102_fu_17993_p3() {
    p_shl102_fu_17993_p3 = esl_concat<1,5>(tmp_1083_fu_17989_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl103_cast_fu_18013_p1() {
    p_shl103_cast_fu_18013_p1 = esl_zext<7,4>(p_shl103_fu_18005_p3.read());
}

void ShuffleNetV2::thread_p_shl103_fu_18005_p3() {
    p_shl103_fu_18005_p3 = esl_concat<1,3>(tmp_1083_fu_17989_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl104_cast_fu_18283_p1() {
    p_shl104_cast_fu_18283_p1 = esl_zext<7,6>(p_shl104_fu_18275_p3.read());
}

void ShuffleNetV2::thread_p_shl104_fu_18275_p3() {
    p_shl104_fu_18275_p3 = esl_concat<1,5>(tmp_1103_fu_18271_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl105_cast_fu_18295_p1() {
    p_shl105_cast_fu_18295_p1 = esl_zext<7,4>(p_shl105_fu_18287_p3.read());
}

void ShuffleNetV2::thread_p_shl105_fu_18287_p3() {
    p_shl105_fu_18287_p3 = esl_concat<1,3>(tmp_1103_fu_18271_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl106_cast_fu_17711_p1() {
    p_shl106_cast_fu_17711_p1 = esl_zext<7,6>(p_shl106_fu_17703_p3.read());
}

void ShuffleNetV2::thread_p_shl106_fu_17703_p3() {
    p_shl106_fu_17703_p3 = esl_concat<1,5>(tmp_1085_fu_17699_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl107_cast_fu_17723_p1() {
    p_shl107_cast_fu_17723_p1 = esl_zext<7,4>(p_shl107_fu_17715_p3.read());
}

void ShuffleNetV2::thread_p_shl107_fu_17715_p3() {
    p_shl107_fu_17715_p3 = esl_concat<1,3>(tmp_1085_fu_17699_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl108_cast_fu_18090_p1() {
    p_shl108_cast_fu_18090_p1 = esl_zext<8,7>(p_shl108_fu_18082_p3.read());
}

void ShuffleNetV2::thread_p_shl108_fu_18082_p3() {
    p_shl108_fu_18082_p3 = esl_concat<2,5>(tmp_1104_fu_18078_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl109_cast_fu_18102_p1() {
    p_shl109_cast_fu_18102_p1 = esl_zext<8,5>(p_shl109_fu_18094_p3.read());
}

void ShuffleNetV2::thread_p_shl109_fu_18094_p3() {
    p_shl109_fu_18094_p3 = esl_concat<2,3>(tmp_1104_fu_18078_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl10_cast_fu_11754_p1() {
    p_shl10_cast_fu_11754_p1 = esl_zext<7,6>(p_shl10_fu_11746_p3.read());
}

void ShuffleNetV2::thread_p_shl10_fu_11746_p3() {
    p_shl10_fu_11746_p3 = esl_concat<1,5>(tmp_179_fu_11742_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl110_cast_fu_18135_p1() {
    p_shl110_cast_fu_18135_p1 = esl_zext<7,6>(p_shl110_fu_18127_p3.read());
}

void ShuffleNetV2::thread_p_shl110_fu_18127_p3() {
    p_shl110_fu_18127_p3 = esl_concat<2,4>(tmp_1104_fu_18078_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl111_cast_fu_18147_p1() {
    p_shl111_cast_fu_18147_p1 = esl_zext<7,4>(p_shl111_fu_18139_p3.read());
}

void ShuffleNetV2::thread_p_shl111_fu_18139_p3() {
    p_shl111_fu_18139_p3 = esl_concat<2,2>(tmp_1104_fu_18078_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl112_cast_fu_18695_p1() {
    p_shl112_cast_fu_18695_p1 = esl_zext<7,6>(p_shl112_fu_18687_p3.read());
}

void ShuffleNetV2::thread_p_shl112_fu_18687_p3() {
    p_shl112_fu_18687_p3 = esl_concat<1,5>(tmp_1123_fu_18683_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl113_cast_fu_18707_p1() {
    p_shl113_cast_fu_18707_p1 = esl_zext<7,4>(p_shl113_fu_18699_p3.read());
}

void ShuffleNetV2::thread_p_shl113_fu_18699_p3() {
    p_shl113_fu_18699_p3 = esl_concat<1,3>(tmp_1123_fu_18683_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl114_cast_fu_18977_p1() {
    p_shl114_cast_fu_18977_p1 = esl_zext<7,6>(p_shl114_fu_18969_p3.read());
}

void ShuffleNetV2::thread_p_shl114_fu_18969_p3() {
    p_shl114_fu_18969_p3 = esl_concat<1,5>(tmp_1135_fu_18965_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl115_cast_fu_18989_p1() {
    p_shl115_cast_fu_18989_p1 = esl_zext<7,4>(p_shl115_fu_18981_p3.read());
}

void ShuffleNetV2::thread_p_shl115_fu_18981_p3() {
    p_shl115_fu_18981_p3 = esl_concat<1,3>(tmp_1135_fu_18965_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl116_cast_fu_18784_p1() {
    p_shl116_cast_fu_18784_p1 = esl_zext<8,7>(p_shl116_fu_18776_p3.read());
}

void ShuffleNetV2::thread_p_shl116_fu_18776_p3() {
    p_shl116_fu_18776_p3 = esl_concat<2,5>(tmp_1136_fu_18772_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl117_cast_fu_18796_p1() {
    p_shl117_cast_fu_18796_p1 = esl_zext<8,5>(p_shl117_fu_18788_p3.read());
}

void ShuffleNetV2::thread_p_shl117_fu_18788_p3() {
    p_shl117_fu_18788_p3 = esl_concat<2,3>(tmp_1136_fu_18772_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl118_cast_fu_18829_p1() {
    p_shl118_cast_fu_18829_p1 = esl_zext<7,6>(p_shl118_fu_18821_p3.read());
}

void ShuffleNetV2::thread_p_shl118_fu_18821_p3() {
    p_shl118_fu_18821_p3 = esl_concat<2,4>(tmp_1136_fu_18772_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl119_cast_fu_18841_p1() {
    p_shl119_cast_fu_18841_p1 = esl_zext<7,4>(p_shl119_fu_18833_p3.read());
}

void ShuffleNetV2::thread_p_shl119_fu_18833_p3() {
    p_shl119_fu_18833_p3 = esl_concat<2,2>(tmp_1136_fu_18772_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl11_cast_fu_11766_p1() {
    p_shl11_cast_fu_11766_p1 = esl_zext<7,4>(p_shl11_fu_11758_p3.read());
}

void ShuffleNetV2::thread_p_shl11_fu_11758_p3() {
    p_shl11_fu_11758_p3 = esl_concat<1,3>(tmp_179_fu_11742_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl120_cast_fu_19331_p1() {
    p_shl120_cast_fu_19331_p1 = esl_zext<7,6>(p_shl120_fu_19323_p3.read());
}

void ShuffleNetV2::thread_p_shl120_fu_19323_p3() {
    p_shl120_fu_19323_p3 = esl_concat<1,5>(tmp_1146_fu_19319_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl121_cast_fu_19343_p1() {
    p_shl121_cast_fu_19343_p1 = esl_zext<7,4>(p_shl121_fu_19335_p3.read());
}

void ShuffleNetV2::thread_p_shl121_fu_19335_p3() {
    p_shl121_fu_19335_p3 = esl_concat<1,3>(tmp_1146_fu_19319_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl122_cast_fu_19413_p1() {
    p_shl122_cast_fu_19413_p1 = esl_zext<7,6>(p_shl122_fu_19405_p3.read());
}

void ShuffleNetV2::thread_p_shl122_fu_19405_p3() {
    p_shl122_fu_19405_p3 = esl_concat<1,5>(tmp_1145_fu_19401_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl123_cast_fu_19425_p1() {
    p_shl123_cast_fu_19425_p1 = esl_zext<7,4>(p_shl123_fu_19417_p3.read());
}

void ShuffleNetV2::thread_p_shl123_fu_19417_p3() {
    p_shl123_fu_19417_p3 = esl_concat<1,3>(tmp_1145_fu_19401_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl124_cast_fu_19695_p1() {
    p_shl124_cast_fu_19695_p1 = esl_zext<7,6>(p_shl124_fu_19687_p3.read());
}

void ShuffleNetV2::thread_p_shl124_fu_19687_p3() {
    p_shl124_fu_19687_p3 = esl_concat<1,5>(tmp_1166_fu_19683_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl125_cast_fu_19707_p1() {
    p_shl125_cast_fu_19707_p1 = esl_zext<7,4>(p_shl125_fu_19699_p3.read());
}

void ShuffleNetV2::thread_p_shl125_fu_19699_p3() {
    p_shl125_fu_19699_p3 = esl_concat<1,3>(tmp_1166_fu_19683_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl126_cast_fu_19115_p1() {
    p_shl126_cast_fu_19115_p1 = esl_zext<7,6>(p_shl126_fu_19107_p3.read());
}

void ShuffleNetV2::thread_p_shl126_fu_19107_p3() {
    p_shl126_fu_19107_p3 = esl_concat<1,5>(tmp_1147_fu_19103_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl127_cast_fu_19127_p1() {
    p_shl127_cast_fu_19127_p1 = esl_zext<7,4>(p_shl127_fu_19119_p3.read());
}

void ShuffleNetV2::thread_p_shl127_fu_19119_p3() {
    p_shl127_fu_19119_p3 = esl_concat<1,3>(tmp_1147_fu_19103_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl128_cast_fu_19502_p1() {
    p_shl128_cast_fu_19502_p1 = esl_zext<8,7>(p_shl128_fu_19494_p3.read());
}

void ShuffleNetV2::thread_p_shl128_fu_19494_p3() {
    p_shl128_fu_19494_p3 = esl_concat<2,5>(tmp_1167_fu_19490_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl129_cast_fu_19514_p1() {
    p_shl129_cast_fu_19514_p1 = esl_zext<8,5>(p_shl129_fu_19506_p3.read());
}

void ShuffleNetV2::thread_p_shl129_fu_19506_p3() {
    p_shl129_fu_19506_p3 = esl_concat<2,3>(tmp_1167_fu_19490_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl12_cast_fu_12036_p1() {
    p_shl12_cast_fu_12036_p1 = esl_zext<7,6>(p_shl12_fu_12028_p3.read());
}

void ShuffleNetV2::thread_p_shl12_fu_12028_p3() {
    p_shl12_fu_12028_p3 = esl_concat<1,5>(tmp_192_fu_12024_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl130_cast_fu_19547_p1() {
    p_shl130_cast_fu_19547_p1 = esl_zext<7,6>(p_shl130_fu_19539_p3.read());
}

void ShuffleNetV2::thread_p_shl130_fu_19539_p3() {
    p_shl130_fu_19539_p3 = esl_concat<2,4>(tmp_1167_fu_19490_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl131_cast_fu_19559_p1() {
    p_shl131_cast_fu_19559_p1 = esl_zext<7,4>(p_shl131_fu_19551_p3.read());
}

void ShuffleNetV2::thread_p_shl131_fu_19551_p3() {
    p_shl131_fu_19551_p3 = esl_concat<2,2>(tmp_1167_fu_19490_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl132_cast_fu_20107_p1() {
    p_shl132_cast_fu_20107_p1 = esl_zext<7,6>(p_shl132_fu_20099_p3.read());
}

void ShuffleNetV2::thread_p_shl132_fu_20099_p3() {
    p_shl132_fu_20099_p3 = esl_concat<1,5>(tmp_1186_fu_20095_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl133_cast_fu_20119_p1() {
    p_shl133_cast_fu_20119_p1 = esl_zext<7,4>(p_shl133_fu_20111_p3.read());
}

void ShuffleNetV2::thread_p_shl133_fu_20111_p3() {
    p_shl133_fu_20111_p3 = esl_concat<1,3>(tmp_1186_fu_20095_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl134_cast_fu_20389_p1() {
    p_shl134_cast_fu_20389_p1 = esl_zext<7,6>(p_shl134_fu_20381_p3.read());
}

void ShuffleNetV2::thread_p_shl134_fu_20381_p3() {
    p_shl134_fu_20381_p3 = esl_concat<1,5>(tmp_1198_fu_20377_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl135_cast_fu_20401_p1() {
    p_shl135_cast_fu_20401_p1 = esl_zext<7,4>(p_shl135_fu_20393_p3.read());
}

void ShuffleNetV2::thread_p_shl135_fu_20393_p3() {
    p_shl135_fu_20393_p3 = esl_concat<1,3>(tmp_1198_fu_20377_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl136_cast_fu_20196_p1() {
    p_shl136_cast_fu_20196_p1 = esl_zext<8,7>(p_shl136_fu_20188_p3.read());
}

void ShuffleNetV2::thread_p_shl136_fu_20188_p3() {
    p_shl136_fu_20188_p3 = esl_concat<2,5>(tmp_1199_fu_20184_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl137_cast_fu_20208_p1() {
    p_shl137_cast_fu_20208_p1 = esl_zext<8,5>(p_shl137_fu_20200_p3.read());
}

void ShuffleNetV2::thread_p_shl137_fu_20200_p3() {
    p_shl137_fu_20200_p3 = esl_concat<2,3>(tmp_1199_fu_20184_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl138_cast_fu_20241_p1() {
    p_shl138_cast_fu_20241_p1 = esl_zext<7,6>(p_shl138_fu_20233_p3.read());
}

void ShuffleNetV2::thread_p_shl138_fu_20233_p3() {
    p_shl138_fu_20233_p3 = esl_concat<2,4>(tmp_1199_fu_20184_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl139_cast_fu_20253_p1() {
    p_shl139_cast_fu_20253_p1 = esl_zext<7,4>(p_shl139_fu_20245_p3.read());
}

void ShuffleNetV2::thread_p_shl139_fu_20245_p3() {
    p_shl139_fu_20245_p3 = esl_concat<2,2>(tmp_1199_fu_20184_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl13_cast_fu_12048_p1() {
    p_shl13_cast_fu_12048_p1 = esl_zext<7,4>(p_shl13_fu_12040_p3.read());
}

void ShuffleNetV2::thread_p_shl13_fu_12040_p3() {
    p_shl13_fu_12040_p3 = esl_concat<1,3>(tmp_192_fu_12024_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl140_cast_fu_20743_p1() {
    p_shl140_cast_fu_20743_p1 = esl_zext<7,6>(p_shl140_fu_20735_p3.read());
}

void ShuffleNetV2::thread_p_shl140_fu_20735_p3() {
    p_shl140_fu_20735_p3 = esl_concat<1,5>(tmp_1209_fu_20731_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl141_cast_fu_20755_p1() {
    p_shl141_cast_fu_20755_p1 = esl_zext<7,4>(p_shl141_fu_20747_p3.read());
}

void ShuffleNetV2::thread_p_shl141_fu_20747_p3() {
    p_shl141_fu_20747_p3 = esl_concat<1,3>(tmp_1209_fu_20731_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl142_cast_fu_20825_p1() {
    p_shl142_cast_fu_20825_p1 = esl_zext<7,6>(p_shl142_fu_20817_p3.read());
}

void ShuffleNetV2::thread_p_shl142_fu_20817_p3() {
    p_shl142_fu_20817_p3 = esl_concat<1,5>(tmp_1208_fu_20813_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl143_cast_fu_20837_p1() {
    p_shl143_cast_fu_20837_p1 = esl_zext<7,4>(p_shl143_fu_20829_p3.read());
}

void ShuffleNetV2::thread_p_shl143_fu_20829_p3() {
    p_shl143_fu_20829_p3 = esl_concat<1,3>(tmp_1208_fu_20813_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl144_cast_fu_21107_p1() {
    p_shl144_cast_fu_21107_p1 = esl_zext<7,6>(p_shl144_fu_21099_p3.read());
}

void ShuffleNetV2::thread_p_shl144_fu_21099_p3() {
    p_shl144_fu_21099_p3 = esl_concat<1,5>(tmp_1228_fu_21095_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl145_cast_fu_21119_p1() {
    p_shl145_cast_fu_21119_p1 = esl_zext<7,4>(p_shl145_fu_21111_p3.read());
}

void ShuffleNetV2::thread_p_shl145_fu_21111_p3() {
    p_shl145_fu_21111_p3 = esl_concat<1,3>(tmp_1228_fu_21095_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl146_cast_fu_20527_p1() {
    p_shl146_cast_fu_20527_p1 = esl_zext<7,6>(p_shl146_fu_20519_p3.read());
}

void ShuffleNetV2::thread_p_shl146_fu_20519_p3() {
    p_shl146_fu_20519_p3 = esl_concat<1,5>(tmp_1210_fu_20515_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl147_cast_fu_20539_p1() {
    p_shl147_cast_fu_20539_p1 = esl_zext<7,4>(p_shl147_fu_20531_p3.read());
}

void ShuffleNetV2::thread_p_shl147_fu_20531_p3() {
    p_shl147_fu_20531_p3 = esl_concat<1,3>(tmp_1210_fu_20515_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl148_cast_fu_20914_p1() {
    p_shl148_cast_fu_20914_p1 = esl_zext<8,7>(p_shl148_fu_20906_p3.read());
}

void ShuffleNetV2::thread_p_shl148_fu_20906_p3() {
    p_shl148_fu_20906_p3 = esl_concat<2,5>(tmp_1229_fu_20902_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl149_cast_fu_20926_p1() {
    p_shl149_cast_fu_20926_p1 = esl_zext<8,5>(p_shl149_fu_20918_p3.read());
}

void ShuffleNetV2::thread_p_shl149_fu_20918_p3() {
    p_shl149_fu_20918_p3 = esl_concat<2,3>(tmp_1229_fu_20902_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl14_cast_fu_11456_p1() {
    p_shl14_cast_fu_11456_p1 = esl_zext<7,6>(p_shl14_fu_11448_p3.read());
}

void ShuffleNetV2::thread_p_shl14_fu_11448_p3() {
    p_shl14_fu_11448_p3 = esl_concat<1,5>(tmp_184_fu_11444_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl150_cast_fu_20959_p1() {
    p_shl150_cast_fu_20959_p1 = esl_zext<7,6>(p_shl150_fu_20951_p3.read());
}

void ShuffleNetV2::thread_p_shl150_fu_20951_p3() {
    p_shl150_fu_20951_p3 = esl_concat<2,4>(tmp_1229_fu_20902_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl151_cast_fu_20971_p1() {
    p_shl151_cast_fu_20971_p1 = esl_zext<7,4>(p_shl151_fu_20963_p3.read());
}

void ShuffleNetV2::thread_p_shl151_fu_20963_p3() {
    p_shl151_fu_20963_p3 = esl_concat<2,2>(tmp_1229_fu_20902_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl152_cast_fu_21519_p1() {
    p_shl152_cast_fu_21519_p1 = esl_zext<7,6>(p_shl152_fu_21511_p3.read());
}

void ShuffleNetV2::thread_p_shl152_fu_21511_p3() {
    p_shl152_fu_21511_p3 = esl_concat<1,5>(tmp_1248_fu_21507_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl153_cast_fu_21531_p1() {
    p_shl153_cast_fu_21531_p1 = esl_zext<7,4>(p_shl153_fu_21523_p3.read());
}

void ShuffleNetV2::thread_p_shl153_fu_21523_p3() {
    p_shl153_fu_21523_p3 = esl_concat<1,3>(tmp_1248_fu_21507_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl154_cast_fu_21809_p1() {
    p_shl154_cast_fu_21809_p1 = esl_zext<7,6>(p_shl154_fu_21801_p3.read());
}

void ShuffleNetV2::thread_p_shl154_fu_21801_p3() {
    p_shl154_fu_21801_p3 = esl_concat<1,5>(tmp_1260_fu_21797_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl155_cast_fu_21821_p1() {
    p_shl155_cast_fu_21821_p1 = esl_zext<7,4>(p_shl155_fu_21813_p3.read());
}

void ShuffleNetV2::thread_p_shl155_fu_21813_p3() {
    p_shl155_fu_21813_p3 = esl_concat<1,3>(tmp_1260_fu_21797_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl156_cast_fu_21608_p1() {
    p_shl156_cast_fu_21608_p1 = esl_zext<8,7>(p_shl156_fu_21600_p3.read());
}

void ShuffleNetV2::thread_p_shl156_fu_21600_p3() {
    p_shl156_fu_21600_p3 = esl_concat<2,5>(tmp_1261_fu_21596_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl157_cast_fu_21620_p1() {
    p_shl157_cast_fu_21620_p1 = esl_zext<8,5>(p_shl157_fu_21612_p3.read());
}

void ShuffleNetV2::thread_p_shl157_fu_21612_p3() {
    p_shl157_fu_21612_p3 = esl_concat<2,3>(tmp_1261_fu_21596_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl158_cast_fu_21653_p1() {
    p_shl158_cast_fu_21653_p1 = esl_zext<7,6>(p_shl158_fu_21645_p3.read());
}

void ShuffleNetV2::thread_p_shl158_fu_21645_p3() {
    p_shl158_fu_21645_p3 = esl_concat<2,4>(tmp_1261_fu_21596_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl159_cast_fu_21665_p1() {
    p_shl159_cast_fu_21665_p1 = esl_zext<7,4>(p_shl159_fu_21657_p3.read());
}

void ShuffleNetV2::thread_p_shl159_fu_21657_p3() {
    p_shl159_fu_21657_p3 = esl_concat<2,2>(tmp_1261_fu_21596_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl15_cast_fu_11468_p1() {
    p_shl15_cast_fu_11468_p1 = esl_zext<7,4>(p_shl15_fu_11460_p3.read());
}

void ShuffleNetV2::thread_p_shl15_fu_11460_p3() {
    p_shl15_fu_11460_p3 = esl_concat<1,3>(tmp_184_fu_11444_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl160_cast_fu_22159_p1() {
    p_shl160_cast_fu_22159_p1 = esl_zext<7,6>(p_shl160_fu_22151_p3.read());
}

void ShuffleNetV2::thread_p_shl160_fu_22151_p3() {
    p_shl160_fu_22151_p3 = esl_concat<1,5>(tmp_1273_fu_22147_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl161_cast_fu_22171_p1() {
    p_shl161_cast_fu_22171_p1 = esl_zext<7,4>(p_shl161_fu_22163_p3.read());
}

void ShuffleNetV2::thread_p_shl161_fu_22163_p3() {
    p_shl161_fu_22163_p3 = esl_concat<1,3>(tmp_1273_fu_22147_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl162_cast_fu_22241_p1() {
    p_shl162_cast_fu_22241_p1 = esl_zext<7,6>(p_shl162_fu_22233_p3.read());
}

void ShuffleNetV2::thread_p_shl162_fu_22233_p3() {
    p_shl162_fu_22233_p3 = esl_concat<1,5>(tmp_1272_fu_22229_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl163_cast_fu_22253_p1() {
    p_shl163_cast_fu_22253_p1 = esl_zext<7,4>(p_shl163_fu_22245_p3.read());
}

void ShuffleNetV2::thread_p_shl163_fu_22245_p3() {
    p_shl163_fu_22245_p3 = esl_concat<1,3>(tmp_1272_fu_22229_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl164_cast_fu_22531_p1() {
    p_shl164_cast_fu_22531_p1 = esl_zext<7,6>(p_shl164_fu_22523_p3.read());
}

void ShuffleNetV2::thread_p_shl164_fu_22523_p3() {
    p_shl164_fu_22523_p3 = esl_concat<1,5>(tmp_1292_fu_22519_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl165_cast_fu_22543_p1() {
    p_shl165_cast_fu_22543_p1 = esl_zext<7,4>(p_shl165_fu_22535_p3.read());
}

void ShuffleNetV2::thread_p_shl165_fu_22535_p3() {
    p_shl165_fu_22535_p3 = esl_concat<1,3>(tmp_1292_fu_22519_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl166_cast_fu_21947_p1() {
    p_shl166_cast_fu_21947_p1 = esl_zext<7,6>(p_shl166_fu_21939_p3.read());
}

void ShuffleNetV2::thread_p_shl166_fu_21939_p3() {
    p_shl166_fu_21939_p3 = esl_concat<1,5>(tmp_1274_fu_21935_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl167_cast_fu_21959_p1() {
    p_shl167_cast_fu_21959_p1 = esl_zext<7,4>(p_shl167_fu_21951_p3.read());
}

void ShuffleNetV2::thread_p_shl167_fu_21951_p3() {
    p_shl167_fu_21951_p3 = esl_concat<1,3>(tmp_1274_fu_21935_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl168_cast_fu_22330_p1() {
    p_shl168_cast_fu_22330_p1 = esl_zext<8,7>(p_shl168_fu_22322_p3.read());
}

void ShuffleNetV2::thread_p_shl168_fu_22322_p3() {
    p_shl168_fu_22322_p3 = esl_concat<2,5>(tmp_1293_fu_22318_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl169_cast_fu_22342_p1() {
    p_shl169_cast_fu_22342_p1 = esl_zext<8,5>(p_shl169_fu_22334_p3.read());
}

void ShuffleNetV2::thread_p_shl169_fu_22334_p3() {
    p_shl169_fu_22334_p3 = esl_concat<2,3>(tmp_1293_fu_22318_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl16_cast_fu_11843_p1() {
    p_shl16_cast_fu_11843_p1 = esl_zext<8,7>(p_shl16_fu_11835_p3.read());
}

void ShuffleNetV2::thread_p_shl16_fu_11835_p3() {
    p_shl16_fu_11835_p3 = esl_concat<2,5>(tmp_193_fu_11831_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl170_cast_fu_22375_p1() {
    p_shl170_cast_fu_22375_p1 = esl_zext<7,6>(p_shl170_fu_22367_p3.read());
}

void ShuffleNetV2::thread_p_shl170_fu_22367_p3() {
    p_shl170_fu_22367_p3 = esl_concat<2,4>(tmp_1293_fu_22318_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl171_cast_fu_22387_p1() {
    p_shl171_cast_fu_22387_p1 = esl_zext<7,4>(p_shl171_fu_22379_p3.read());
}

void ShuffleNetV2::thread_p_shl171_fu_22379_p3() {
    p_shl171_fu_22379_p3 = esl_concat<2,2>(tmp_1293_fu_22318_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl172_cast_fu_22947_p1() {
    p_shl172_cast_fu_22947_p1 = esl_zext<7,6>(p_shl172_fu_22939_p3.read());
}

void ShuffleNetV2::thread_p_shl172_fu_22939_p3() {
    p_shl172_fu_22939_p3 = esl_concat<1,5>(tmp_1314_fu_22935_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl173_cast_fu_22959_p1() {
    p_shl173_cast_fu_22959_p1 = esl_zext<7,4>(p_shl173_fu_22951_p3.read());
}

void ShuffleNetV2::thread_p_shl173_fu_22951_p3() {
    p_shl173_fu_22951_p3 = esl_concat<1,3>(tmp_1314_fu_22935_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl174_cast_fu_23237_p1() {
    p_shl174_cast_fu_23237_p1 = esl_zext<7,6>(p_shl174_fu_23229_p3.read());
}

void ShuffleNetV2::thread_p_shl174_fu_23229_p3() {
    p_shl174_fu_23229_p3 = esl_concat<1,5>(tmp_1326_fu_23225_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl175_cast_fu_23249_p1() {
    p_shl175_cast_fu_23249_p1 = esl_zext<7,4>(p_shl175_fu_23241_p3.read());
}

void ShuffleNetV2::thread_p_shl175_fu_23241_p3() {
    p_shl175_fu_23241_p3 = esl_concat<1,3>(tmp_1326_fu_23225_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl176_cast_fu_23036_p1() {
    p_shl176_cast_fu_23036_p1 = esl_zext<8,7>(p_shl176_fu_23028_p3.read());
}

void ShuffleNetV2::thread_p_shl176_fu_23028_p3() {
    p_shl176_fu_23028_p3 = esl_concat<2,5>(tmp_1327_fu_23024_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl177_cast_fu_23048_p1() {
    p_shl177_cast_fu_23048_p1 = esl_zext<8,5>(p_shl177_fu_23040_p3.read());
}

void ShuffleNetV2::thread_p_shl177_fu_23040_p3() {
    p_shl177_fu_23040_p3 = esl_concat<2,3>(tmp_1327_fu_23024_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl178_cast_fu_23081_p1() {
    p_shl178_cast_fu_23081_p1 = esl_zext<7,6>(p_shl178_fu_23073_p3.read());
}

void ShuffleNetV2::thread_p_shl178_fu_23073_p3() {
    p_shl178_fu_23073_p3 = esl_concat<2,4>(tmp_1327_fu_23024_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl179_cast_fu_23093_p1() {
    p_shl179_cast_fu_23093_p1 = esl_zext<7,4>(p_shl179_fu_23085_p3.read());
}

void ShuffleNetV2::thread_p_shl179_fu_23085_p3() {
    p_shl179_fu_23085_p3 = esl_concat<2,2>(tmp_1327_fu_23024_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl17_cast_fu_11855_p1() {
    p_shl17_cast_fu_11855_p1 = esl_zext<8,5>(p_shl17_fu_11847_p3.read());
}

void ShuffleNetV2::thread_p_shl17_fu_11847_p3() {
    p_shl17_fu_11847_p3 = esl_concat<2,3>(tmp_193_fu_11831_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl180_cast_fu_23583_p1() {
    p_shl180_cast_fu_23583_p1 = esl_zext<7,6>(p_shl180_fu_23575_p3.read());
}

void ShuffleNetV2::thread_p_shl180_fu_23575_p3() {
    p_shl180_fu_23575_p3 = esl_concat<1,5>(tmp_1339_fu_23571_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl181_cast_fu_23595_p1() {
    p_shl181_cast_fu_23595_p1 = esl_zext<7,4>(p_shl181_fu_23587_p3.read());
}

void ShuffleNetV2::thread_p_shl181_fu_23587_p3() {
    p_shl181_fu_23587_p3 = esl_concat<1,3>(tmp_1339_fu_23571_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl182_cast_fu_23669_p1() {
    p_shl182_cast_fu_23669_p1 = esl_zext<7,6>(p_shl182_fu_23661_p3.read());
}

void ShuffleNetV2::thread_p_shl182_fu_23661_p3() {
    p_shl182_fu_23661_p3 = esl_concat<1,5>(tmp_1338_fu_23657_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl183_cast_fu_23681_p1() {
    p_shl183_cast_fu_23681_p1 = esl_zext<7,4>(p_shl183_fu_23673_p3.read());
}

void ShuffleNetV2::thread_p_shl183_fu_23673_p3() {
    p_shl183_fu_23673_p3 = esl_concat<1,3>(tmp_1338_fu_23657_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl184_cast_fu_23959_p1() {
    p_shl184_cast_fu_23959_p1 = esl_zext<7,6>(p_shl184_fu_23951_p3.read());
}

void ShuffleNetV2::thread_p_shl184_fu_23951_p3() {
    p_shl184_fu_23951_p3 = esl_concat<1,5>(tmp_1357_fu_23947_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl185_cast_fu_23971_p1() {
    p_shl185_cast_fu_23971_p1 = esl_zext<7,4>(p_shl185_fu_23963_p3.read());
}

void ShuffleNetV2::thread_p_shl185_fu_23963_p3() {
    p_shl185_fu_23963_p3 = esl_concat<1,3>(tmp_1357_fu_23947_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl186_cast_fu_23379_p1() {
    p_shl186_cast_fu_23379_p1 = esl_zext<7,6>(p_shl186_fu_23371_p3.read());
}

void ShuffleNetV2::thread_p_shl186_fu_23371_p3() {
    p_shl186_fu_23371_p3 = esl_concat<1,5>(tmp_1340_fu_23367_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl187_cast_fu_23391_p1() {
    p_shl187_cast_fu_23391_p1 = esl_zext<7,4>(p_shl187_fu_23383_p3.read());
}

void ShuffleNetV2::thread_p_shl187_fu_23383_p3() {
    p_shl187_fu_23383_p3 = esl_concat<1,3>(tmp_1340_fu_23367_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl188_cast_fu_23758_p1() {
    p_shl188_cast_fu_23758_p1 = esl_zext<8,7>(p_shl188_fu_23750_p3.read());
}

void ShuffleNetV2::thread_p_shl188_fu_23750_p3() {
    p_shl188_fu_23750_p3 = esl_concat<2,5>(tmp_1358_fu_23746_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl189_cast_fu_23770_p1() {
    p_shl189_cast_fu_23770_p1 = esl_zext<8,5>(p_shl189_fu_23762_p3.read());
}

void ShuffleNetV2::thread_p_shl189_fu_23762_p3() {
    p_shl189_fu_23762_p3 = esl_concat<2,3>(tmp_1358_fu_23746_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl18_cast_fu_11888_p1() {
    p_shl18_cast_fu_11888_p1 = esl_zext<7,6>(p_shl18_fu_11880_p3.read());
}

void ShuffleNetV2::thread_p_shl18_fu_11880_p3() {
    p_shl18_fu_11880_p3 = esl_concat<2,4>(tmp_193_fu_11831_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl190_cast_fu_23811_p1() {
    p_shl190_cast_fu_23811_p1 = esl_zext<7,6>(p_shl190_fu_23803_p3.read());
}

void ShuffleNetV2::thread_p_shl190_fu_23803_p3() {
    p_shl190_fu_23803_p3 = esl_concat<2,4>(tmp_1358_fu_23746_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl191_cast_fu_23823_p1() {
    p_shl191_cast_fu_23823_p1 = esl_zext<7,4>(p_shl191_fu_23815_p3.read());
}

void ShuffleNetV2::thread_p_shl191_fu_23815_p3() {
    p_shl191_fu_23815_p3 = esl_concat<2,2>(tmp_1358_fu_23746_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl192_cast_fu_24164_p1() {
    p_shl192_cast_fu_24164_p1 = esl_zext<8,7>(p_shl192_fu_24156_p3.read());
}

void ShuffleNetV2::thread_p_shl192_fu_24156_p3() {
    p_shl192_fu_24156_p3 = esl_concat<2,5>(tmp_1367_fu_24152_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl193_cast_fu_24174_p1() {
    p_shl193_cast_fu_24174_p1 = esl_zext<8,5>(tmp_1368_fu_24168_p2.read());
}

void ShuffleNetV2::thread_p_shl193_fu_24426_p3() {
    p_shl193_fu_24426_p3 = esl_concat<2,5>(tmp_1374_fu_24422_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl194_cast_fu_24434_p1() {
    p_shl194_cast_fu_24434_p1 = esl_zext<8,7>(p_shl193_fu_24426_p3.read());
}

void ShuffleNetV2::thread_p_shl194_fu_24438_p3() {
    p_shl194_fu_24438_p3 = esl_concat<2,3>(tmp_1374_fu_24422_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl195_cast_fu_24446_p1() {
    p_shl195_cast_fu_24446_p1 = esl_zext<8,5>(p_shl194_fu_24438_p3.read());
}

void ShuffleNetV2::thread_p_shl195_fu_24243_p3() {
    p_shl195_fu_24243_p3 = esl_concat<4,5>(tmp_1375_fu_24239_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl196_cast_fu_24251_p1() {
    p_shl196_cast_fu_24251_p1 = esl_zext<10,9>(p_shl195_fu_24243_p3.read());
}

void ShuffleNetV2::thread_p_shl196_fu_24255_p3() {
    p_shl196_fu_24255_p3 = esl_concat<4,3>(tmp_1375_fu_24239_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl197_cast1_fu_24263_p1() {
    p_shl197_cast1_fu_24263_p1 = esl_zext<8,7>(p_shl196_fu_24255_p3.read());
}

void ShuffleNetV2::thread_p_shl197_cast_fu_24267_p1() {
    p_shl197_cast_fu_24267_p1 = esl_zext<10,7>(p_shl196_fu_24255_p3.read());
}

void ShuffleNetV2::thread_p_shl197_fu_24858_p3() {
    p_shl197_fu_24858_p3 = esl_concat<2,5>(tmp_1385_fu_24854_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl198_cast_fu_24298_p1() {
    p_shl198_cast_fu_24298_p1 = esl_zext<8,5>(tmp_1380_fu_24292_p2.read());
}

void ShuffleNetV2::thread_p_shl198_fu_24772_p3() {
    p_shl198_fu_24772_p3 = esl_concat<2,5>(tmp_1387_fu_24768_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl199_cast_fu_24780_p1() {
    p_shl199_cast_fu_24780_p1 = esl_zext<8,7>(p_shl198_fu_24772_p3.read());
}

void ShuffleNetV2::thread_p_shl199_fu_24784_p3() {
    p_shl199_fu_24784_p3 = esl_concat<2,3>(tmp_1387_fu_24768_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl19_cast_fu_11900_p1() {
    p_shl19_cast_fu_11900_p1 = esl_zext<7,4>(p_shl19_fu_11892_p3.read());
}

void ShuffleNetV2::thread_p_shl19_fu_11892_p3() {
    p_shl19_fu_11892_p3 = esl_concat<2,2>(tmp_193_fu_11831_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl1_cast_fu_11048_p1() {
    p_shl1_cast_fu_11048_p1 = esl_zext<7,4>(p_shl1_fu_11040_p3.read());
}

void ShuffleNetV2::thread_p_shl1_fu_11040_p3() {
    p_shl1_fu_11040_p3 = esl_concat<1,3>(tmp_165_fu_11024_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl200_cast_fu_24792_p1() {
    p_shl200_cast_fu_24792_p1 = esl_zext<8,5>(p_shl199_fu_24784_p3.read());
}

void ShuffleNetV2::thread_p_shl200_fu_24568_p3() {
    p_shl200_fu_24568_p3 = esl_concat<2,5>(tmp_1388_fu_24564_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl201_cast_fu_24866_p1() {
    p_shl201_cast_fu_24866_p1 = esl_zext<8,7>(p_shl197_fu_24858_p3.read());
}

void ShuffleNetV2::thread_p_shl201_fu_24580_p3() {
    p_shl201_fu_24580_p3 = esl_concat<2,3>(tmp_1388_fu_24564_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl202_cast_fu_24876_p1() {
    p_shl202_cast_fu_24876_p1 = esl_zext<8,5>(tmp_1386_fu_24870_p2.read());
}

void ShuffleNetV2::thread_p_shl202_fu_25128_p3() {
    p_shl202_fu_25128_p3 = esl_concat<2,5>(tmp_1402_fu_25124_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl203_cast_fu_25136_p1() {
    p_shl203_cast_fu_25136_p1 = esl_zext<8,7>(p_shl202_fu_25128_p3.read());
}

void ShuffleNetV2::thread_p_shl203_fu_25140_p3() {
    p_shl203_fu_25140_p3 = esl_concat<2,3>(tmp_1402_fu_25124_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl204_cast_fu_25148_p1() {
    p_shl204_cast_fu_25148_p1 = esl_zext<8,5>(p_shl203_fu_25140_p3.read());
}

void ShuffleNetV2::thread_p_shl204_fu_24945_p3() {
    p_shl204_fu_24945_p3 = esl_concat<4,5>(tmp_1403_fu_24941_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl205_cast_fu_24576_p1() {
    p_shl205_cast_fu_24576_p1 = esl_zext<8,7>(p_shl200_fu_24568_p3.read());
}

void ShuffleNetV2::thread_p_shl205_fu_24957_p3() {
    p_shl205_fu_24957_p3 = esl_concat<4,3>(tmp_1403_fu_24941_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl206_cast_fu_24588_p1() {
    p_shl206_cast_fu_24588_p1 = esl_zext<8,5>(p_shl201_fu_24580_p3.read());
}

}

