#include "ShuffleNetV2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void ShuffleNetV2::thread_conv_last_bias_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        conv_last_bias_we0 = ap_const_logic_1;
    } else {
        conv_last_bias_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read())) {
        conv_last_output_address0 = grp_avgpool_fu_7213_conv_last_output_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        conv_last_output_address0 = grp_conv_last_fu_7054_output_r_address0.read();
    } else {
        conv_last_output_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_conv_last_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state699.read())) {
        conv_last_output_ce0 = grp_avgpool_fu_7213_conv_last_output_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        conv_last_output_ce0 = grp_conv_last_fu_7054_output_r_ce0.read();
    } else {
        conv_last_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state697.read())) {
        conv_last_output_we0 = grp_conv_last_fu_7054_output_r_we0.read();
    } else {
        conv_last_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_conv_last_weight_address0() {
    conv_last_weight_address0 = grp_conv_last_fu_7054_weight_address0.read();
}

void ShuffleNetV2::thread_conv_last_weight_ce0() {
    conv_last_weight_ce0 = grp_conv_last_fu_7054_weight_ce0.read();
}

void ShuffleNetV2::thread_downsampleunit0_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read())) {
        downsampleunit0_outp_address0 =  (sc_lv<14>) (tmp_981_cast1_fu_8900_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read())) {
        downsampleunit0_outp_address0 =  (sc_lv<14>) (tmp_800_cast_fu_8290_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        downsampleunit0_outp_address0 = grp_shuffle_24_r_fu_7270_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        downsampleunit0_outp_address0 = grp_shuffle_24_l_fu_7262_output_r_address0.read();
    } else {
        downsampleunit0_outp_address0 =  (sc_lv<14>) ("XXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state47.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state70.read()))) {
        downsampleunit0_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        downsampleunit0_outp_ce0 = grp_shuffle_24_r_fu_7270_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        downsampleunit0_outp_ce0 = grp_shuffle_24_l_fu_7262_output_r_ce0.read();
    } else {
        downsampleunit0_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        downsampleunit0_outp_d0 = grp_shuffle_24_r_fu_7270_output_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        downsampleunit0_outp_d0 = grp_shuffle_24_l_fu_7262_output_r_d0.read();
    } else {
        downsampleunit0_outp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit0_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state44.read())) {
        downsampleunit0_outp_we0 = grp_shuffle_24_r_fu_7270_output_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state29.read())) {
        downsampleunit0_outp_we0 = grp_shuffle_24_l_fu_7262_output_r_we0.read();
    } else {
        downsampleunit0_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read())) {
        downsampleunit1_outp_address0 =  (sc_lv<13>) (tmp_1231_cast_fu_13474_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read())) {
        downsampleunit1_outp_address0 =  (sc_lv<13>) (tmp_1161_cast_fu_12304_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        downsampleunit1_outp_address0 = grp_shuffle_48_r_fu_7286_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        downsampleunit1_outp_address0 = grp_shuffle_48_l_fu_7278_output_r_address0.read();
    } else {
        downsampleunit1_outp_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state189.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state225.read()))) {
        downsampleunit1_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        downsampleunit1_outp_ce0 = grp_shuffle_48_r_fu_7286_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        downsampleunit1_outp_ce0 = grp_shuffle_48_l_fu_7278_output_r_ce0.read();
    } else {
        downsampleunit1_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        downsampleunit1_outp_d0 = grp_shuffle_48_r_fu_7286_output_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        downsampleunit1_outp_d0 = grp_shuffle_48_l_fu_7278_output_r_d0.read();
    } else {
        downsampleunit1_outp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit1_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state186.read())) {
        downsampleunit1_outp_we0 = grp_shuffle_48_r_fu_7286_output_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state162.read())) {
        downsampleunit1_outp_we0 = grp_shuffle_48_l_fu_7278_output_r_we0.read();
    } else {
        downsampleunit1_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read())) {
        downsampleunit2_outp_address0 =  (sc_lv<12>) (tmp_1894_cast_fu_25606_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state575.read())) {
        downsampleunit2_outp_address0 =  (sc_lv<12>) (tmp_1824_cast_fu_24460_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        downsampleunit2_outp_address0 = grp_shuffle_96_r_fu_7302_output_r_address0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        downsampleunit2_outp_address0 = grp_shuffle_96_l_fu_7294_output_r_address0.read();
    } else {
        downsampleunit2_outp_address0 =  (sc_lv<12>) ("XXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state575.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state611.read()))) {
        downsampleunit2_outp_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        downsampleunit2_outp_ce0 = grp_shuffle_96_r_fu_7302_output_r_ce0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        downsampleunit2_outp_ce0 = grp_shuffle_96_l_fu_7294_output_r_ce0.read();
    } else {
        downsampleunit2_outp_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        downsampleunit2_outp_d0 = grp_shuffle_96_r_fu_7302_output_r_d0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        downsampleunit2_outp_d0 = grp_shuffle_96_l_fu_7294_output_r_d0.read();
    } else {
        downsampleunit2_outp_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_downsampleunit2_outp_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state572.read())) {
        downsampleunit2_outp_we0 = grp_shuffle_96_r_fu_7302_output_r_we0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state548.read())) {
        downsampleunit2_outp_we0 = grp_shuffle_96_l_fu_7294_output_r_we0.read();
    } else {
        downsampleunit2_outp_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_exitcond100_fu_22196_p2() {
    exitcond100_fu_22196_p2 = (!ci62_reg_5908.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci62_reg_5908.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond101_fu_22132_p2() {
    exitcond101_fu_22132_p2 = (!co142_reg_5897.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co142_reg_5897.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond102_fu_22046_p2() {
    exitcond102_fu_22046_p2 = (!k45_reg_5886.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k45_reg_5886.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond103_fu_22034_p2() {
    exitcond103_fu_22034_p2 = (!i132_reg_5875.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i132_reg_5875.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond104_fu_21842_p2() {
    exitcond104_fu_21842_p2 = (!i136_reg_5864.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i136_reg_5864.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond105_fu_21822_p2() {
    exitcond105_fu_21822_p2 = (!h91_reg_5853.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h91_reg_5853.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond106_fu_21802_p2() {
    exitcond106_fu_21802_p2 = (!w91_reg_5842.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w91_reg_5842.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond107_fu_21790_p2() {
    exitcond107_fu_21790_p2 = (!co140_reg_5831.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co140_reg_5831.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond108_fu_21700_p2() {
    exitcond108_fu_21700_p2 = (!k43_reg_5820.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k43_reg_5820.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond109_fu_21688_p2() {
    exitcond109_fu_21688_p2 = (!i128_reg_5809.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i128_reg_5809.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond10_fu_27608_p2() {
    exitcond10_fu_27608_p2 = (!i188_reg_6898.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i188_reg_6898.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond110_fu_21499_p2() {
    exitcond110_fu_21499_p2 = (!i130_reg_5798.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i130_reg_5798.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond111_fu_21474_p2() {
    exitcond111_fu_21474_p2 = (!ci60_reg_5787.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci60_reg_5787.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond112_fu_21410_p2() {
    exitcond112_fu_21410_p2 = (!co138_reg_5776.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co138_reg_5776.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond113_fu_21367_p2() {
    exitcond113_fu_21367_p2 = (!w89_reg_5765.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w89_reg_5765.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond114_fu_21321_p2() {
    exitcond114_fu_21321_p2 = (!h89_reg_5754.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h89_reg_5754.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond115_fu_21279_p2() {
    exitcond115_fu_21279_p2 = (!co136_reg_5743.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co136_reg_5743.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond116_fu_21249_p2() {
    exitcond116_fu_21249_p2 = (!w87_reg_5732.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w87_reg_5732.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond117_fu_21216_p2() {
    exitcond117_fu_21216_p2 = (!h87_reg_5721.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h87_reg_5721.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond118_fu_21192_p2() {
    exitcond118_fu_21192_p2 = (!co134_reg_5710.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co134_reg_5710.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond119_fu_21110_p2() {
    exitcond119_fu_21110_p2 = (!k41_reg_5699.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k41_reg_5699.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond11_fu_27418_p2() {
    exitcond11_fu_27418_p2 = (!i192_reg_6887.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i192_reg_6887.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond120_fu_21098_p2() {
    exitcond120_fu_21098_p2 = (!i122_reg_5688.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i122_reg_5688.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond121_fu_20909_p2() {
    exitcond121_fu_20909_p2 = (!i126_reg_5677.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i126_reg_5677.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond122_fu_20884_p2() {
    exitcond122_fu_20884_p2 = (!ci58_reg_5666.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci58_reg_5666.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond123_fu_20820_p2() {
    exitcond123_fu_20820_p2 = (!co132_reg_5655.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co132_reg_5655.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond124_fu_20738_p2() {
    exitcond124_fu_20738_p2 = (!k39_reg_5644.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k39_reg_5644.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond125_fu_20726_p2() {
    exitcond125_fu_20726_p2 = (!i120_reg_5633.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i120_reg_5633.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond126_fu_20526_p2() {
    exitcond126_fu_20526_p2 = (!i124_reg_5622.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i124_reg_5622.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond127_fu_20506_p2() {
    exitcond127_fu_20506_p2 = (!h85_reg_5611.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h85_reg_5611.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond128_fu_20486_p2() {
    exitcond128_fu_20486_p2 = (!w85_reg_5600.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w85_reg_5600.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond129_fu_20474_p2() {
    exitcond129_fu_20474_p2 = (!co130_reg_5589.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co130_reg_5589.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond12_fu_27398_p2() {
    exitcond12_fu_27398_p2 = (!h113_reg_6876.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h113_reg_6876.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond130_fu_20388_p2() {
    exitcond130_fu_20388_p2 = (!k37_reg_5578.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k37_reg_5578.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond131_fu_20376_p2() {
    exitcond131_fu_20376_p2 = (!i116_reg_5567.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i116_reg_5567.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond132_fu_20187_p2() {
    exitcond132_fu_20187_p2 = (!i118_reg_5556.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i118_reg_5556.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond133_fu_20162_p2() {
    exitcond133_fu_20162_p2 = (!ci56_reg_5545.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci56_reg_5545.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond134_fu_20098_p2() {
    exitcond134_fu_20098_p2 = (!co128_reg_5534.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co128_reg_5534.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond135_fu_20055_p2() {
    exitcond135_fu_20055_p2 = (!w83_reg_5523.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w83_reg_5523.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond136_fu_20009_p2() {
    exitcond136_fu_20009_p2 = (!h83_reg_5512.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h83_reg_5512.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond137_fu_19967_p2() {
    exitcond137_fu_19967_p2 = (!co126_reg_5501.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co126_reg_5501.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond138_fu_19937_p2() {
    exitcond138_fu_19937_p2 = (!w81_reg_5490.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w81_reg_5490.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond139_fu_19904_p2() {
    exitcond139_fu_19904_p2 = (!h81_reg_5479.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h81_reg_5479.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond13_fu_27378_p2() {
    exitcond13_fu_27378_p2 = (!w113_reg_6865.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w113_reg_6865.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond140_fu_19880_p2() {
    exitcond140_fu_19880_p2 = (!co124_reg_5468.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co124_reg_5468.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond141_fu_19802_p2() {
    exitcond141_fu_19802_p2 = (!k35_reg_5457.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k35_reg_5457.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond142_fu_19790_p2() {
    exitcond142_fu_19790_p2 = (!i110_reg_5446.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i110_reg_5446.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond143_fu_19609_p2() {
    exitcond143_fu_19609_p2 = (!i114_reg_5435.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i114_reg_5435.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond144_fu_19584_p2() {
    exitcond144_fu_19584_p2 = (!ci54_reg_5424.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci54_reg_5424.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond145_fu_19520_p2() {
    exitcond145_fu_19520_p2 = (!co122_reg_5413.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co122_reg_5413.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond146_fu_19438_p2() {
    exitcond146_fu_19438_p2 = (!k33_reg_5402.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k33_reg_5402.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond147_fu_19426_p2() {
    exitcond147_fu_19426_p2 = (!i108_reg_5391.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i108_reg_5391.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond148_fu_19222_p2() {
    exitcond148_fu_19222_p2 = (!i112_reg_5380.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i112_reg_5380.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond149_fu_19202_p2() {
    exitcond149_fu_19202_p2 = (!h79_reg_5369.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h79_reg_5369.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond14_fu_27366_p2() {
    exitcond14_fu_27366_p2 = (!co180_reg_6854.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co180_reg_6854.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond150_fu_19182_p2() {
    exitcond150_fu_19182_p2 = (!w79_reg_5358.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w79_reg_5358.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond151_fu_19170_p2() {
    exitcond151_fu_19170_p2 = (!co120_reg_5347.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co120_reg_5347.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond152_fu_19084_p2() {
    exitcond152_fu_19084_p2 = (!k31_reg_5336.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k31_reg_5336.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond153_fu_19072_p2() {
    exitcond153_fu_19072_p2 = (!i104_reg_5325.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i104_reg_5325.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond154_fu_18891_p2() {
    exitcond154_fu_18891_p2 = (!i106_reg_5314.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i106_reg_5314.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond155_fu_18866_p2() {
    exitcond155_fu_18866_p2 = (!ci52_reg_5303.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci52_reg_5303.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond156_fu_18802_p2() {
    exitcond156_fu_18802_p2 = (!co118_reg_5292.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co118_reg_5292.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond157_fu_18759_p2() {
    exitcond157_fu_18759_p2 = (!w77_reg_5281.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w77_reg_5281.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond158_fu_18713_p2() {
    exitcond158_fu_18713_p2 = (!h77_reg_5270.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h77_reg_5270.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond159_fu_18671_p2() {
    exitcond159_fu_18671_p2 = (!co116_reg_5259.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co116_reg_5259.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond15_fu_27280_p2() {
    exitcond15_fu_27280_p2 = (!k71_reg_6843.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k71_reg_6843.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond160_fu_18641_p2() {
    exitcond160_fu_18641_p2 = (!w75_reg_5248.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w75_reg_5248.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond161_fu_18608_p2() {
    exitcond161_fu_18608_p2 = (!h75_reg_5237.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h75_reg_5237.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond162_fu_18584_p2() {
    exitcond162_fu_18584_p2 = (!co114_reg_5226.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co114_reg_5226.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond163_fu_18506_p2() {
    exitcond163_fu_18506_p2 = (!k29_reg_5215.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k29_reg_5215.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond164_fu_18494_p2() {
    exitcond164_fu_18494_p2 = (!i98_reg_5204.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i98_reg_5204.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond165_fu_18313_p2() {
    exitcond165_fu_18313_p2 = (!i102_reg_5193.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i102_reg_5193.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond166_fu_18288_p2() {
    exitcond166_fu_18288_p2 = (!ci50_reg_5182.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci50_reg_5182.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond167_fu_18224_p2() {
    exitcond167_fu_18224_p2 = (!co112_reg_5171.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co112_reg_5171.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond168_fu_18142_p2() {
    exitcond168_fu_18142_p2 = (!k27_reg_5160.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k27_reg_5160.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond169_fu_18130_p2() {
    exitcond169_fu_18130_p2 = (!i96_reg_5149.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i96_reg_5149.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond16_fu_27268_p2() {
    exitcond16_fu_27268_p2 = (!i184_reg_6832.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i184_reg_6832.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond170_fu_17926_p2() {
    exitcond170_fu_17926_p2 = (!i100_reg_5138.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i100_reg_5138.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond171_fu_17906_p2() {
    exitcond171_fu_17906_p2 = (!h73_reg_5127.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h73_reg_5127.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond172_fu_17886_p2() {
    exitcond172_fu_17886_p2 = (!w73_reg_5116.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w73_reg_5116.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond173_fu_17874_p2() {
    exitcond173_fu_17874_p2 = (!co110_reg_5105.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co110_reg_5105.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond174_fu_17788_p2() {
    exitcond174_fu_17788_p2 = (!k25_reg_5094.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k25_reg_5094.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond175_fu_17776_p2() {
    exitcond175_fu_17776_p2 = (!i92_reg_5083.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i92_reg_5083.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond176_fu_17595_p2() {
    exitcond176_fu_17595_p2 = (!i94_reg_5072.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i94_reg_5072.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond177_fu_17570_p2() {
    exitcond177_fu_17570_p2 = (!ci48_reg_5061.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci48_reg_5061.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond178_fu_17506_p2() {
    exitcond178_fu_17506_p2 = (!co108_reg_5050.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co108_reg_5050.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond179_fu_17463_p2() {
    exitcond179_fu_17463_p2 = (!w71_reg_5039.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w71_reg_5039.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond17_fu_27101_p2() {
    exitcond17_fu_27101_p2 = (!i186_reg_6821.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i186_reg_6821.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond180_fu_17417_p2() {
    exitcond180_fu_17417_p2 = (!h71_reg_5028.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h71_reg_5028.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond181_fu_17375_p2() {
    exitcond181_fu_17375_p2 = (!co106_reg_5017.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co106_reg_5017.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond182_fu_17345_p2() {
    exitcond182_fu_17345_p2 = (!w69_reg_5006.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w69_reg_5006.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond183_fu_17312_p2() {
    exitcond183_fu_17312_p2 = (!h69_reg_4995.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h69_reg_4995.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond184_fu_17288_p2() {
    exitcond184_fu_17288_p2 = (!co104_reg_4984.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co104_reg_4984.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond185_fu_17210_p2() {
    exitcond185_fu_17210_p2 = (!k23_reg_4973.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k23_reg_4973.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond186_fu_17198_p2() {
    exitcond186_fu_17198_p2 = (!i86_reg_4962.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i86_reg_4962.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond187_fu_17017_p2() {
    exitcond187_fu_17017_p2 = (!i90_reg_4951.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i90_reg_4951.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond188_fu_16992_p2() {
    exitcond188_fu_16992_p2 = (!ci46_reg_4940.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci46_reg_4940.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond189_fu_16928_p2() {
    exitcond189_fu_16928_p2 = (!co102_reg_4929.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co102_reg_4929.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond18_fu_27076_p2() {
    exitcond18_fu_27076_p2 = (!ci78_reg_6810.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci78_reg_6810.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond190_fu_16846_p2() {
    exitcond190_fu_16846_p2 = (!k21_reg_4918.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k21_reg_4918.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond191_fu_16834_p2() {
    exitcond191_fu_16834_p2 = (!i84_reg_4907.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i84_reg_4907.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond192_fu_16638_p2() {
    exitcond192_fu_16638_p2 = (!i88_reg_4896.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i88_reg_4896.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond193_fu_16618_p2() {
    exitcond193_fu_16618_p2 = (!h67_reg_4885.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h67_reg_4885.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond194_fu_16598_p2() {
    exitcond194_fu_16598_p2 = (!w67_reg_4874.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w67_reg_4874.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond195_fu_16586_p2() {
    exitcond195_fu_16586_p2 = (!co100_reg_4863.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co100_reg_4863.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond196_fu_16500_p2() {
    exitcond196_fu_16500_p2 = (!k19_reg_4852.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k19_reg_4852.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond197_fu_16488_p2() {
    exitcond197_fu_16488_p2 = (!i80_reg_4841.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i80_reg_4841.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond198_fu_16307_p2() {
    exitcond198_fu_16307_p2 = (!i82_reg_4830.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i82_reg_4830.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond199_fu_16282_p2() {
    exitcond199_fu_16282_p2 = (!ci44_reg_4819.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci44_reg_4819.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond19_fu_27014_p2() {
    exitcond19_fu_27014_p2 = (!co178_reg_6799.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co178_reg_6799.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond1_fu_28103_p2() {
    exitcond1_fu_28103_p2 = (!w115_reg_6997.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w115_reg_6997.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond1_i_fu_28129_p2() {
    exitcond1_i_fu_28129_p2 = (!co_i_reg_7008.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(co_i_reg_7008.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond200_fu_16218_p2() {
    exitcond200_fu_16218_p2 = (!co98_reg_4808.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co98_reg_4808.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond201_fu_16175_p2() {
    exitcond201_fu_16175_p2 = (!w65_reg_4797.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w65_reg_4797.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond202_fu_16129_p2() {
    exitcond202_fu_16129_p2 = (!h65_reg_4786.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h65_reg_4786.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond203_fu_16087_p2() {
    exitcond203_fu_16087_p2 = (!co96_reg_4775.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co96_reg_4775.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond204_fu_16057_p2() {
    exitcond204_fu_16057_p2 = (!w63_reg_4764.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w63_reg_4764.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond205_fu_16024_p2() {
    exitcond205_fu_16024_p2 = (!h63_reg_4753.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h63_reg_4753.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond206_fu_16000_p2() {
    exitcond206_fu_16000_p2 = (!co94_reg_4742.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co94_reg_4742.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond207_fu_15918_p2() {
    exitcond207_fu_15918_p2 = (!k17_reg_4731.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k17_reg_4731.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond208_fu_15906_p2() {
    exitcond208_fu_15906_p2 = (!i74_reg_4720.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i74_reg_4720.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond209_fu_15725_p2() {
    exitcond209_fu_15725_p2 = (!i78_reg_4709.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i78_reg_4709.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond20_fu_26971_p2() {
    exitcond20_fu_26971_p2 = (!w111_reg_6788.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w111_reg_6788.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond210_fu_15700_p2() {
    exitcond210_fu_15700_p2 = (!ci42_reg_4698.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci42_reg_4698.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond211_fu_15636_p2() {
    exitcond211_fu_15636_p2 = (!co92_reg_4687.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co92_reg_4687.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond212_fu_15550_p2() {
    exitcond212_fu_15550_p2 = (!k15_reg_4676.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k15_reg_4676.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond213_fu_15538_p2() {
    exitcond213_fu_15538_p2 = (!i72_reg_4665.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i72_reg_4665.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond214_fu_15342_p2() {
    exitcond214_fu_15342_p2 = (!i76_reg_4654.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i76_reg_4654.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond215_fu_15322_p2() {
    exitcond215_fu_15322_p2 = (!h61_reg_4643.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h61_reg_4643.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond216_fu_15302_p2() {
    exitcond216_fu_15302_p2 = (!w61_reg_4632.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w61_reg_4632.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond217_fu_15290_p2() {
    exitcond217_fu_15290_p2 = (!co90_reg_4621.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co90_reg_4621.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond218_fu_15200_p2() {
    exitcond218_fu_15200_p2 = (!k13_reg_4610.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k13_reg_4610.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond219_fu_15188_p2() {
    exitcond219_fu_15188_p2 = (!i68_reg_4599.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i68_reg_4599.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond21_fu_26925_p2() {
    exitcond21_fu_26925_p2 = (!h111_reg_6777.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h111_reg_6777.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond220_fu_14999_p2() {
    exitcond220_fu_14999_p2 = (!i70_reg_4588.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i70_reg_4588.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond221_fu_14974_p2() {
    exitcond221_fu_14974_p2 = (!ci40_reg_4577.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci40_reg_4577.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond222_fu_14910_p2() {
    exitcond222_fu_14910_p2 = (!co88_reg_4566.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co88_reg_4566.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond223_fu_14867_p2() {
    exitcond223_fu_14867_p2 = (!w59_reg_4555.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w59_reg_4555.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond224_fu_14821_p2() {
    exitcond224_fu_14821_p2 = (!h59_reg_4544.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h59_reg_4544.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond225_fu_14779_p2() {
    exitcond225_fu_14779_p2 = (!co86_reg_4533.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co86_reg_4533.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond226_fu_14749_p2() {
    exitcond226_fu_14749_p2 = (!w57_reg_4522.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w57_reg_4522.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond227_fu_14716_p2() {
    exitcond227_fu_14716_p2 = (!h57_reg_4511.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h57_reg_4511.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond228_fu_14692_p2() {
    exitcond228_fu_14692_p2 = (!co84_reg_4500.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co84_reg_4500.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond229_fu_14610_p2() {
    exitcond229_fu_14610_p2 = (!k11_reg_4489.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k11_reg_4489.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond22_fu_26883_p2() {
    exitcond22_fu_26883_p2 = (!co176_reg_6766.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co176_reg_6766.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond230_fu_14598_p2() {
    exitcond230_fu_14598_p2 = (!i62_reg_4478.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i62_reg_4478.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond231_fu_14417_p2() {
    exitcond231_fu_14417_p2 = (!i66_reg_4467.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i66_reg_4467.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond232_fu_14392_p2() {
    exitcond232_fu_14392_p2 = (!ci38_reg_4456.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci38_reg_4456.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond233_fu_14328_p2() {
    exitcond233_fu_14328_p2 = (!co82_reg_4445.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co82_reg_4445.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond234_fu_14242_p2() {
    exitcond234_fu_14242_p2 = (!k10_reg_4434.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k10_reg_4434.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond235_fu_14230_p2() {
    exitcond235_fu_14230_p2 = (!i60_reg_4423.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i60_reg_4423.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond236_fu_14034_p2() {
    exitcond236_fu_14034_p2 = (!i64_reg_4412.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i64_reg_4412.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond237_fu_14014_p2() {
    exitcond237_fu_14014_p2 = (!h55_reg_4401.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h55_reg_4401.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond238_fu_13994_p2() {
    exitcond238_fu_13994_p2 = (!w55_reg_4390.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w55_reg_4390.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond239_fu_13982_p2() {
    exitcond239_fu_13982_p2 = (!co80_reg_4379.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co80_reg_4379.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond23_fu_26853_p2() {
    exitcond23_fu_26853_p2 = (!w109_reg_6755.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w109_reg_6755.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond240_fu_13896_p2() {
    exitcond240_fu_13896_p2 = (!k9_reg_4368.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k9_reg_4368.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond241_fu_13884_p2() {
    exitcond241_fu_13884_p2 = (!i56_reg_4357.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i56_reg_4357.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond242_fu_13703_p2() {
    exitcond242_fu_13703_p2 = (!i58_reg_4346.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i58_reg_4346.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond243_fu_13678_p2() {
    exitcond243_fu_13678_p2 = (!ci36_reg_4335.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci36_reg_4335.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond244_fu_13614_p2() {
    exitcond244_fu_13614_p2 = (!co78_reg_4324.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co78_reg_4324.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond245_fu_13571_p2() {
    exitcond245_fu_13571_p2 = (!w53_reg_4313.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w53_reg_4313.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond246_fu_13525_p2() {
    exitcond246_fu_13525_p2 = (!h53_reg_4302.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h53_reg_4302.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond247_fu_13483_p2() {
    exitcond247_fu_13483_p2 = (!co76_reg_4291.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co76_reg_4291.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond248_fu_13453_p2() {
    exitcond248_fu_13453_p2 = (!w51_reg_4280.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w51_reg_4280.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond249_fu_13420_p2() {
    exitcond249_fu_13420_p2 = (!h51_reg_4269.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h51_reg_4269.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond24_fu_26820_p2() {
    exitcond24_fu_26820_p2 = (!h109_reg_6744.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h109_reg_6744.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond250_fu_13396_p2() {
    exitcond250_fu_13396_p2 = (!co74_reg_4258.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co74_reg_4258.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond251_fu_13318_p2() {
    exitcond251_fu_13318_p2 = (!k8_reg_4247.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k8_reg_4247.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond252_fu_13306_p2() {
    exitcond252_fu_13306_p2 = (!i50_reg_4236.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i50_reg_4236.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond253_fu_13125_p2() {
    exitcond253_fu_13125_p2 = (!i54_reg_4225.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i54_reg_4225.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond254_fu_13100_p2() {
    exitcond254_fu_13100_p2 = (!ci34_reg_4214.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci34_reg_4214.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond255_fu_13036_p2() {
    exitcond255_fu_13036_p2 = (!co72_reg_4203.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co72_reg_4203.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond256_fu_12954_p2() {
    exitcond256_fu_12954_p2 = (!k7_reg_4192.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k7_reg_4192.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond257_fu_12942_p2() {
    exitcond257_fu_12942_p2 = (!i48_reg_4181.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i48_reg_4181.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond258_fu_12742_p2() {
    exitcond258_fu_12742_p2 = (!i52_reg_4170.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i52_reg_4170.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond259_fu_12722_p2() {
    exitcond259_fu_12722_p2 = (!h49_reg_4159.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h49_reg_4159.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond25_fu_26796_p2() {
    exitcond25_fu_26796_p2 = (!co174_reg_6733.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co174_reg_6733.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond260_fu_12702_p2() {
    exitcond260_fu_12702_p2 = (!w49_reg_4148.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w49_reg_4148.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond261_fu_12690_p2() {
    exitcond261_fu_12690_p2 = (!co70_reg_4137.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co70_reg_4137.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond262_fu_12604_p2() {
    exitcond262_fu_12604_p2 = (!k6_reg_4126.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k6_reg_4126.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond263_fu_12592_p2() {
    exitcond263_fu_12592_p2 = (!i44_reg_4115.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i44_reg_4115.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond264_fu_12411_p2() {
    exitcond264_fu_12411_p2 = (!i46_reg_4104.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i46_reg_4104.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond265_fu_12386_p2() {
    exitcond265_fu_12386_p2 = (!ci32_reg_4093.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci32_reg_4093.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond266_fu_12322_p2() {
    exitcond266_fu_12322_p2 = (!co68_reg_4082.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co68_reg_4082.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond267_fu_12279_p2() {
    exitcond267_fu_12279_p2 = (!w48_reg_4071.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w48_reg_4071.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond268_fu_12233_p2() {
    exitcond268_fu_12233_p2 = (!h47_reg_4060.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h47_reg_4060.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond269_fu_12191_p2() {
    exitcond269_fu_12191_p2 = (!co66_reg_4049.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co66_reg_4049.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond26_fu_26718_p2() {
    exitcond26_fu_26718_p2 = (!k69_reg_6722.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k69_reg_6722.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond270_fu_12109_p2() {
    exitcond270_fu_12109_p2 = (!k5_reg_4038.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k5_reg_4038.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond271_fu_12097_p2() {
    exitcond271_fu_12097_p2 = (!i39_reg_4027.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i39_reg_4027.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond272_fu_11912_p2() {
    exitcond272_fu_11912_p2 = (!i42_reg_4016.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i42_reg_4016.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond273_fu_11887_p2() {
    exitcond273_fu_11887_p2 = (!ci30_reg_4005.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci30_reg_4005.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond274_fu_11823_p2() {
    exitcond274_fu_11823_p2 = (!co64_reg_3994.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co64_reg_3994.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond275_fu_11741_p2() {
    exitcond275_fu_11741_p2 = (!k4_reg_3983.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k4_reg_3983.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond276_fu_11729_p2() {
    exitcond276_fu_11729_p2 = (!i37_reg_3972.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i37_reg_3972.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond277_fu_11533_p2() {
    exitcond277_fu_11533_p2 = (!i40_reg_3961.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i40_reg_3961.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond278_fu_11513_p2() {
    exitcond278_fu_11513_p2 = (!h45_reg_3950.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h45_reg_3950.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond279_fu_11493_p2() {
    exitcond279_fu_11493_p2 = (!w46_reg_3939.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w46_reg_3939.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond27_fu_26706_p2() {
    exitcond27_fu_26706_p2 = (!i178_reg_6711.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i178_reg_6711.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond280_fu_11481_p2() {
    exitcond280_fu_11481_p2 = (!co62_reg_3928.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co62_reg_3928.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond281_fu_11391_p2() {
    exitcond281_fu_11391_p2 = (!k3_reg_3917.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k3_reg_3917.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond282_fu_11379_p2() {
    exitcond282_fu_11379_p2 = (!i31_reg_3906.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i31_reg_3906.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond283_fu_11198_p2() {
    exitcond283_fu_11198_p2 = (!i35_reg_3895.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i35_reg_3895.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond284_fu_11173_p2() {
    exitcond284_fu_11173_p2 = (!ci28_reg_3884.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci28_reg_3884.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond285_fu_11109_p2() {
    exitcond285_fu_11109_p2 = (!co60_reg_3873.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co60_reg_3873.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond286_fu_11023_p2() {
    exitcond286_fu_11023_p2 = (!k2_reg_3862.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k2_reg_3862.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond287_fu_11011_p2() {
    exitcond287_fu_11011_p2 = (!i29_reg_3851.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i29_reg_3851.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond288_fu_10811_p2() {
    exitcond288_fu_10811_p2 = (!i33_reg_3840.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i33_reg_3840.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond289_fu_10791_p2() {
    exitcond289_fu_10791_p2 = (!h43_reg_3829.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h43_reg_3829.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond28_fu_26539_p2() {
    exitcond28_fu_26539_p2 = (!i182_reg_6700.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i182_reg_6700.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond290_fu_10771_p2() {
    exitcond290_fu_10771_p2 = (!w44_reg_3818.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w44_reg_3818.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond291_fu_10759_p2() {
    exitcond291_fu_10759_p2 = (!co58_reg_3807.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co58_reg_3807.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond292_fu_10673_p2() {
    exitcond292_fu_10673_p2 = (!k1_reg_3796.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k1_reg_3796.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond293_fu_10661_p2() {
    exitcond293_fu_10661_p2 = (!i27_reg_3785.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i27_reg_3785.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond294_fu_10480_p2() {
    exitcond294_fu_10480_p2 = (!i28_reg_3774.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i28_reg_3774.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond295_fu_10455_p2() {
    exitcond295_fu_10455_p2 = (!ci26_reg_3763.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci26_reg_3763.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond296_fu_10391_p2() {
    exitcond296_fu_10391_p2 = (!co56_reg_3752.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co56_reg_3752.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond297_fu_10361_p2() {
    exitcond297_fu_10361_p2 = (!w42_reg_3741.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w42_reg_3741.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond298_fu_10328_p2() {
    exitcond298_fu_10328_p2 = (!h41_reg_3730.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h41_reg_3730.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond299_fu_10304_p2() {
    exitcond299_fu_10304_p2 = (!co54_reg_3719.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co54_reg_3719.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond29_fu_26514_p2() {
    exitcond29_fu_26514_p2 = (!ci76_reg_6689.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci76_reg_6689.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond2_fu_28070_p2() {
    exitcond2_fu_28070_p2 = (!h115_reg_6986.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h115_reg_6986.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond300_fu_10276_p2() {
    exitcond300_fu_10276_p2 = (!i25_reg_3707.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i25_reg_3707.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond301_fu_10233_p2() {
    exitcond301_fu_10233_p2 = (!ci24_reg_3696.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci24_reg_3696.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond302_fu_10145_p2() {
    exitcond302_fu_10145_p2 = (!co52_reg_3685.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co52_reg_3685.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond303_fu_10117_p2() {
    exitcond303_fu_10117_p2 = (!i23_reg_3673.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i23_reg_3673.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond304_fu_10074_p2() {
    exitcond304_fu_10074_p2 = (!h39_reg_3662.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h39_reg_3662.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond305_fu_10010_p2() {
    exitcond305_fu_10010_p2 = (!w40_reg_3651.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w40_reg_3651.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond306_fu_9928_p2() {
    exitcond306_fu_9928_p2 = (!co50_reg_3640.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co50_reg_3640.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond307_fu_9898_p2() {
    exitcond307_fu_9898_p2 = (!i21_reg_3628.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i21_reg_3628.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond308_fu_9859_p2() {
    exitcond308_fu_9859_p2 = (!ci22_reg_3617.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci22_reg_3617.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond309_fu_9777_p2() {
    exitcond309_fu_9777_p2 = (!co48_reg_3606.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co48_reg_3606.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond30_fu_26452_p2() {
    exitcond30_fu_26452_p2 = (!co172_reg_6678.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co172_reg_6678.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond310_fu_9734_p2() {
    exitcond310_fu_9734_p2 = (!w38_reg_3595.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w38_reg_3595.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond311_fu_9688_p2() {
    exitcond311_fu_9688_p2 = (!h37_reg_3584.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h37_reg_3584.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond312_fu_9646_p2() {
    exitcond312_fu_9646_p2 = (!co46_reg_3573.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co46_reg_3573.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond313_fu_9616_p2() {
    exitcond313_fu_9616_p2 = (!w36_reg_3562.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w36_reg_3562.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond314_fu_9583_p2() {
    exitcond314_fu_9583_p2 = (!h35_reg_3551.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h35_reg_3551.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond315_fu_9559_p2() {
    exitcond315_fu_9559_p2 = (!co44_reg_3540.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co44_reg_3540.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond316_fu_9531_p2() {
    exitcond316_fu_9531_p2 = (!i19_reg_3528.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i19_reg_3528.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond317_fu_9488_p2() {
    exitcond317_fu_9488_p2 = (!ci20_reg_3517.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci20_reg_3517.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond318_fu_9406_p2() {
    exitcond318_fu_9406_p2 = (!co42_reg_3506.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co42_reg_3506.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond319_fu_9374_p2() {
    exitcond319_fu_9374_p2 = (!i17_reg_3494.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i17_reg_3494.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond31_fu_26370_p2() {
    exitcond31_fu_26370_p2 = (!k67_reg_6667.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k67_reg_6667.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond320_fu_9331_p2() {
    exitcond320_fu_9331_p2 = (!h33_reg_3483.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h33_reg_3483.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond321_fu_9267_p2() {
    exitcond321_fu_9267_p2 = (!w34_reg_3472.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w34_reg_3472.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond322_fu_9201_p2() {
    exitcond322_fu_9201_p2 = (!co40_reg_3461.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co40_reg_3461.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond323_fu_9165_p2() {
    exitcond323_fu_9165_p2 = (!i15_reg_3449.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i15_reg_3449.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond324_fu_9122_p2() {
    exitcond324_fu_9122_p2 = (!ci18_reg_3438.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci18_reg_3438.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond325_fu_9040_p2() {
    exitcond325_fu_9040_p2 = (!co38_reg_3427.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co38_reg_3427.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond326_fu_8997_p2() {
    exitcond326_fu_8997_p2 = (!w32_reg_3416.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w32_reg_3416.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond327_fu_8951_p2() {
    exitcond327_fu_8951_p2 = (!h31_reg_3405.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h31_reg_3405.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond328_fu_8909_p2() {
    exitcond328_fu_8909_p2 = (!co36_reg_3394.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co36_reg_3394.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond329_fu_8879_p2() {
    exitcond329_fu_8879_p2 = (!w30_reg_3383.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w30_reg_3383.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond32_fu_26358_p2() {
    exitcond32_fu_26358_p2 = (!i176_reg_6656.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i176_reg_6656.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond330_fu_8846_p2() {
    exitcond330_fu_8846_p2 = (!h30_reg_3372.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h30_reg_3372.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond331_fu_8822_p2() {
    exitcond331_fu_8822_p2 = (!co35_reg_3361.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co35_reg_3361.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond332_fu_8788_p2() {
    exitcond332_fu_8788_p2 = (!i13_reg_3349.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i13_reg_3349.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond333_fu_8749_p2() {
    exitcond333_fu_8749_p2 = (!ci16_reg_3338.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci16_reg_3338.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond334_fu_8661_p2() {
    exitcond334_fu_8661_p2 = (!co33_reg_3327.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co33_reg_3327.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond335_fu_8633_p2() {
    exitcond335_fu_8633_p2 = (!i12_reg_3315.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i12_reg_3315.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond336_fu_8590_p2() {
    exitcond336_fu_8590_p2 = (!h28_reg_3304.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h28_reg_3304.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond337_fu_8526_p2() {
    exitcond337_fu_8526_p2 = (!w28_reg_3293.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w28_reg_3293.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond338_fu_8460_p2() {
    exitcond338_fu_8460_p2 = (!co31_reg_3282.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co31_reg_3282.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond339_fu_8428_p2() {
    exitcond339_fu_8428_p2 = (!i11_reg_3270.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i11_reg_3270.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond33_fu_26150_p2() {
    exitcond33_fu_26150_p2 = (!i180_reg_6645.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i180_reg_6645.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond340_fu_8385_p2() {
    exitcond340_fu_8385_p2 = (!ci14_reg_3259.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci14_reg_3259.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond341_fu_8303_p2() {
    exitcond341_fu_8303_p2 = (!co29_reg_3248.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co29_reg_3248.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond342_fu_8260_p2() {
    exitcond342_fu_8260_p2 = (!w26_reg_3237.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(w26_reg_3237.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond343_fu_8214_p2() {
    exitcond343_fu_8214_p2 = (!h26_reg_3226.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(h26_reg_3226.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond344_fu_8172_p2() {
    exitcond344_fu_8172_p2 = (!co26_reg_3215.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co26_reg_3215.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond345_fu_8140_p2() {
    exitcond345_fu_8140_p2 = (!i10_reg_3203.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i10_reg_3203.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond346_fu_8097_p2() {
    exitcond346_fu_8097_p2 = (!ci12_reg_3192.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci12_reg_3192.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond347_fu_8015_p2() {
    exitcond347_fu_8015_p2 = (!co23_reg_3181.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co23_reg_3181.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond348_fu_7977_p2() {
    exitcond348_fu_7977_p2 = (!i9_reg_3169.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i9_reg_3169.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond349_fu_7938_p2() {
    exitcond349_fu_7938_p2 = (!h21_reg_3158.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h21_reg_3158.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond34_fu_26130_p2() {
    exitcond34_fu_26130_p2 = (!h107_reg_6634.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h107_reg_6634.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond350_fu_7878_p2() {
    exitcond350_fu_7878_p2 = (!w20_reg_3147.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w20_reg_3147.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond351_fu_7812_p2() {
    exitcond351_fu_7812_p2 = (!co19_reg_3136.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co19_reg_3136.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond352_fu_7780_p2() {
    exitcond352_fu_7780_p2 = (!i6_reg_3124.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i6_reg_3124.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond353_fu_7737_p2() {
    exitcond353_fu_7737_p2 = (!ci10_reg_3113.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci10_reg_3113.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond354_fu_7655_p2() {
    exitcond354_fu_7655_p2 = (!co16_reg_3102.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co16_reg_3102.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond355_fu_7623_p2() {
    exitcond355_fu_7623_p2 = (!i4_reg_3090.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i4_reg_3090.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond356_fu_7593_p2() {
    exitcond356_fu_7593_p2 = (!h14_reg_3079.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h14_reg_3079.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond357_fu_7550_p2() {
    exitcond357_fu_7550_p2 = (!w13_reg_3068.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w13_reg_3068.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond358_fu_7512_p2() {
    exitcond358_fu_7512_p2 = (!co12_reg_3057.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co12_reg_3057.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond359_fu_7484_p2() {
    exitcond359_fu_7484_p2 = (!i3_reg_3045.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i3_reg_3045.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond35_fu_26110_p2() {
    exitcond35_fu_26110_p2 = (!w107_reg_6623.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w107_reg_6623.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond360_fu_7454_p2() {
    exitcond360_fu_7454_p2 = (!ci9_reg_3034.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci9_reg_3034.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond361_fu_7408_p2() {
    exitcond361_fu_7408_p2 = (!co9_reg_3023.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co9_reg_3023.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond362_fu_7376_p2() {
    exitcond362_fu_7376_p2 = (!i8_reg_3011.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i8_reg_3011.read() == ap_const_lv4_A);
}

void ShuffleNetV2::thread_exitcond363_fu_7340_p2() {
    exitcond363_fu_7340_p2 = (!i7_reg_2999.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i7_reg_2999.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_exitcond36_fu_26098_p2() {
    exitcond36_fu_26098_p2 = (!co170_reg_6612.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co170_reg_6612.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond37_fu_26012_p2() {
    exitcond37_fu_26012_p2 = (!k65_reg_6601.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k65_reg_6601.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond38_fu_26000_p2() {
    exitcond38_fu_26000_p2 = (!i172_reg_6590.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i172_reg_6590.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond39_fu_25833_p2() {
    exitcond39_fu_25833_p2 = (!i174_reg_6579.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i174_reg_6579.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond3_fu_28046_p2() {
    exitcond3_fu_28046_p2 = (!co184_reg_6975.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co184_reg_6975.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond40_fu_25808_p2() {
    exitcond40_fu_25808_p2 = (!ci74_reg_6568.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci74_reg_6568.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond41_fu_25746_p2() {
    exitcond41_fu_25746_p2 = (!co168_reg_6557.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co168_reg_6557.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond42_fu_25703_p2() {
    exitcond42_fu_25703_p2 = (!w105_reg_6546.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w105_reg_6546.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond43_fu_25657_p2() {
    exitcond43_fu_25657_p2 = (!h105_reg_6535.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h105_reg_6535.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond44_fu_25615_p2() {
    exitcond44_fu_25615_p2 = (!co166_reg_6524.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co166_reg_6524.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond45_fu_25585_p2() {
    exitcond45_fu_25585_p2 = (!w103_reg_6513.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w103_reg_6513.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond46_fu_25552_p2() {
    exitcond46_fu_25552_p2 = (!h103_reg_6502.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h103_reg_6502.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond47_fu_25528_p2() {
    exitcond47_fu_25528_p2 = (!co164_reg_6491.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co164_reg_6491.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond48_fu_25450_p2() {
    exitcond48_fu_25450_p2 = (!k63_reg_6480.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k63_reg_6480.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond49_fu_25438_p2() {
    exitcond49_fu_25438_p2 = (!i166_reg_6469.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i166_reg_6469.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond4_fu_27968_p2() {
    exitcond4_fu_27968_p2 = (!k75_reg_6964.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k75_reg_6964.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond50_fu_25259_p2() {
    exitcond50_fu_25259_p2 = (!i170_reg_6458.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i170_reg_6458.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond51_fu_25234_p2() {
    exitcond51_fu_25234_p2 = (!ci72_reg_6447.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci72_reg_6447.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond52_fu_25172_p2() {
    exitcond52_fu_25172_p2 = (!co162_reg_6436.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co162_reg_6436.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond53_fu_25090_p2() {
    exitcond53_fu_25090_p2 = (!k61_reg_6425.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k61_reg_6425.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond54_fu_25078_p2() {
    exitcond54_fu_25078_p2 = (!i164_reg_6414.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i164_reg_6414.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond55_fu_24886_p2() {
    exitcond55_fu_24886_p2 = (!i168_reg_6403.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i168_reg_6403.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond56_fu_24866_p2() {
    exitcond56_fu_24866_p2 = (!h101_reg_6392.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h101_reg_6392.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond57_fu_24846_p2() {
    exitcond57_fu_24846_p2 = (!w101_reg_6381.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w101_reg_6381.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond58_fu_24834_p2() {
    exitcond58_fu_24834_p2 = (!co160_reg_6370.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co160_reg_6370.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond59_fu_24748_p2() {
    exitcond59_fu_24748_p2 = (!k59_reg_6359.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k59_reg_6359.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond5_fu_27956_p2() {
    exitcond5_fu_27956_p2 = (!i190_reg_6953.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i190_reg_6953.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond60_fu_24736_p2() {
    exitcond60_fu_24736_p2 = (!i160_reg_6348.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i160_reg_6348.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond61_fu_24565_p2() {
    exitcond61_fu_24565_p2 = (!i162_reg_6337.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i162_reg_6337.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond62_fu_24540_p2() {
    exitcond62_fu_24540_p2 = (!ci70_reg_6326.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci70_reg_6326.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond63_fu_24478_p2() {
    exitcond63_fu_24478_p2 = (!co158_reg_6315.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co158_reg_6315.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond64_fu_24435_p2() {
    exitcond64_fu_24435_p2 = (!w99_reg_6304.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(w99_reg_6304.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond65_fu_24389_p2() {
    exitcond65_fu_24389_p2 = (!h99_reg_6293.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(h99_reg_6293.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond66_fu_24347_p2() {
    exitcond66_fu_24347_p2 = (!co156_reg_6282.read().is_01() || !ap_const_lv7_60.is_01())? sc_lv<1>(): sc_lv<1>(co156_reg_6282.read() == ap_const_lv7_60);
}

void ShuffleNetV2::thread_exitcond67_fu_24265_p2() {
    exitcond67_fu_24265_p2 = (!k57_reg_6271.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k57_reg_6271.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond68_fu_24253_p2() {
    exitcond68_fu_24253_p2 = (!i154_reg_6260.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i154_reg_6260.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond69_fu_24082_p2() {
    exitcond69_fu_24082_p2 = (!i158_reg_6249.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i158_reg_6249.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond6_fu_27789_p2() {
    exitcond6_fu_27789_p2 = (!i194_reg_6942.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i194_reg_6942.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond70_fu_24057_p2() {
    exitcond70_fu_24057_p2 = (!ci68_reg_6238.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci68_reg_6238.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond71_fu_23995_p2() {
    exitcond71_fu_23995_p2 = (!co154_reg_6227.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co154_reg_6227.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond72_fu_23913_p2() {
    exitcond72_fu_23913_p2 = (!k55_reg_6216.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k55_reg_6216.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond73_fu_23901_p2() {
    exitcond73_fu_23901_p2 = (!i152_reg_6205.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i152_reg_6205.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond74_fu_23709_p2() {
    exitcond74_fu_23709_p2 = (!i156_reg_6194.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i156_reg_6194.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond75_fu_23689_p2() {
    exitcond75_fu_23689_p2 = (!h97_reg_6183.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h97_reg_6183.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond76_fu_23669_p2() {
    exitcond76_fu_23669_p2 = (!w97_reg_6172.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w97_reg_6172.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond77_fu_23657_p2() {
    exitcond77_fu_23657_p2 = (!co152_reg_6161.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co152_reg_6161.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond78_fu_23563_p2() {
    exitcond78_fu_23563_p2 = (!k53_reg_6150.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k53_reg_6150.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond79_fu_23551_p2() {
    exitcond79_fu_23551_p2 = (!i146_reg_6139.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i146_reg_6139.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond7_fu_27764_p2() {
    exitcond7_fu_27764_p2 = (!ci80_reg_6931.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci80_reg_6931.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond80_fu_23380_p2() {
    exitcond80_fu_23380_p2 = (!i150_reg_6128.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i150_reg_6128.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond81_fu_23355_p2() {
    exitcond81_fu_23355_p2 = (!ci66_reg_6117.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci66_reg_6117.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond82_fu_23293_p2() {
    exitcond82_fu_23293_p2 = (!co150_reg_6106.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co150_reg_6106.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond83_fu_23207_p2() {
    exitcond83_fu_23207_p2 = (!k51_reg_6095.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k51_reg_6095.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond84_fu_23195_p2() {
    exitcond84_fu_23195_p2 = (!i144_reg_6084.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i144_reg_6084.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond85_fu_23003_p2() {
    exitcond85_fu_23003_p2 = (!i148_reg_6073.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i148_reg_6073.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond86_fu_22983_p2() {
    exitcond86_fu_22983_p2 = (!h95_reg_6062.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(h95_reg_6062.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond87_fu_22963_p2() {
    exitcond87_fu_22963_p2 = (!w95_reg_6051.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(w95_reg_6051.read() == ap_const_lv2_3);
}

void ShuffleNetV2::thread_exitcond88_fu_22951_p2() {
    exitcond88_fu_22951_p2 = (!co148_reg_6040.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co148_reg_6040.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond89_fu_22861_p2() {
    exitcond89_fu_22861_p2 = (!k49_reg_6029.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k49_reg_6029.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond8_fu_27702_p2() {
    exitcond8_fu_27702_p2 = (!co182_reg_6920.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co182_reg_6920.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond90_fu_22849_p2() {
    exitcond90_fu_22849_p2 = (!i140_reg_6018.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i140_reg_6018.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond91_fu_22678_p2() {
    exitcond91_fu_22678_p2 = (!i142_reg_6007.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i142_reg_6007.read() == ap_const_lv5_10);
}

void ShuffleNetV2::thread_exitcond92_fu_22653_p2() {
    exitcond92_fu_22653_p2 = (!ci64_reg_5996.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(ci64_reg_5996.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond93_fu_22591_p2() {
    exitcond93_fu_22591_p2 = (!co146_reg_5985.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(co146_reg_5985.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond94_fu_22561_p2() {
    exitcond94_fu_22561_p2 = (!w93_reg_5974.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(w93_reg_5974.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond95_fu_22528_p2() {
    exitcond95_fu_22528_p2 = (!h93_reg_5963.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(h93_reg_5963.read() == ap_const_lv4_8);
}

void ShuffleNetV2::thread_exitcond96_fu_22504_p2() {
    exitcond96_fu_22504_p2 = (!co144_reg_5952.read().is_01() || !ap_const_lv6_30.is_01())? sc_lv<1>(): sc_lv<1>(co144_reg_5952.read() == ap_const_lv6_30);
}

void ShuffleNetV2::thread_exitcond97_fu_22422_p2() {
    exitcond97_fu_22422_p2 = (!k47_reg_5941.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(k47_reg_5941.read() == ap_const_lv2_2);
}

void ShuffleNetV2::thread_exitcond98_fu_22410_p2() {
    exitcond98_fu_22410_p2 = (!i134_reg_5930.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i134_reg_5930.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond99_fu_22221_p2() {
    exitcond99_fu_22221_p2 = (!i138_reg_5919.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i138_reg_5919.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond9_fu_27620_p2() {
    exitcond9_fu_27620_p2 = (!k73_reg_6909.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(k73_reg_6909.read() == ap_const_lv3_4);
}

void ShuffleNetV2::thread_exitcond_fu_7319_p2() {
    exitcond_fu_7319_p2 = (!i5_reg_2988.read().is_01() || !ap_const_lv5_18.is_01())? sc_lv<1>(): sc_lv<1>(i5_reg_2988.read() == ap_const_lv5_18);
}

void ShuffleNetV2::thread_exitcond_i_fu_28157_p2() {
    exitcond_i_fu_28157_p2 = (!ci_i_reg_7031.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(ci_i_reg_7031.read() == ap_const_lv10_200);
}

void ShuffleNetV2::thread_fc_bias_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state701.read())) {
        fc_bias_address0 =  (sc_lv<4>) (tmp_i_reg_35441.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        fc_bias_address0 =  (sc_lv<4>) (tmp_129_fu_7403_p1.read());
    } else {
        fc_bias_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void ShuffleNetV2::thread_fc_bias_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state701.read()) || 
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
    fc_output_address0 =  (sc_lv<10>) (tmp_i_reg_35441.read());
}

void ShuffleNetV2::thread_fc_output_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state718.read())) {
        fc_output_ce0 = ap_const_logic_1;
    } else {
        fc_output_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_output_d0() {
    fc_output_d0 = result_reg_35500.read();
}

void ShuffleNetV2::thread_fc_output_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state718.read())) {
        fc_output_we0 = ap_const_logic_1;
    } else {
        fc_output_we0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_fc_weight_address0() {
    fc_weight_address0 =  (sc_lv<13>) (tmp_2023_cast_fu_28183_p1.read());
}

void ShuffleNetV2::thread_fc_weight_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state701.read())) {
        fc_weight_ce0 = ap_const_logic_1;
    } else {
        fc_weight_ce0 = ap_const_logic_0;
    }
}

void ShuffleNetV2::thread_grp_avgpool_fu_7213_ap_start() {
    grp_avgpool_fu_7213_ap_start = ap_reg_grp_avgpool_fu_7213_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv1_fu_7042_ap_start() {
    grp_conv1_fu_7042_ap_start = ap_reg_grp_conv1_fu_7042_ap_start.read();
}

void ShuffleNetV2::thread_grp_conv_last_fu_7054_ap_start() {
    grp_conv_last_fu_7054_ap_start = ap_reg_grp_conv_last_fu_7054_ap_start.read();
}

void ShuffleNetV2::thread_grp_fu_7310_p1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state713.read())) {
        grp_fu_7310_p1 = fc_bias_load_reg_35495.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state707.read())) {
        grp_fu_7310_p1 = tmp_154_i_reg_35485.read();
    } else {
        grp_fu_7310_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_shuffle_24_fu_7221_ap_start() {
    grp_shuffle_24_fu_7221_ap_start = ap_reg_grp_shuffle_24_fu_7221_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_l_fu_7262_ap_start() {
    grp_shuffle_24_l_fu_7262_ap_start = ap_reg_grp_shuffle_24_l_fu_7262_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_24_r_fu_7270_ap_start() {
    grp_shuffle_24_r_fu_7270_ap_start = ap_reg_grp_shuffle_24_r_fu_7270_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_fu_7233_ap_start() {
    grp_shuffle_48_fu_7233_ap_start = ap_reg_grp_shuffle_48_fu_7233_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_l_fu_7278_ap_start() {
    grp_shuffle_48_l_fu_7278_ap_start = ap_reg_grp_shuffle_48_l_fu_7278_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_48_r_fu_7286_ap_start() {
    grp_shuffle_48_r_fu_7286_ap_start = ap_reg_grp_shuffle_48_r_fu_7286_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_fu_7250_ap_start() {
    grp_shuffle_96_fu_7250_ap_start = ap_reg_grp_shuffle_96_fu_7250_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_l_fu_7294_ap_start() {
    grp_shuffle_96_l_fu_7294_ap_start = ap_reg_grp_shuffle_96_l_fu_7294_ap_start.read();
}

void ShuffleNetV2::thread_grp_shuffle_96_r_fu_7302_ap_start() {
    grp_shuffle_96_r_fu_7302_ap_start = ap_reg_grp_shuffle_96_r_fu_7302_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16_fu_7201_ap_start() {
    grp_subconv_1x1_16_fu_7201_ap_start = ap_reg_grp_subconv_1x1_16_fu_7201_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_16p_fu_7078_ap_start() {
    grp_subconv_1x1_16p_fu_7078_ap_start = ap_reg_grp_subconv_1x1_16p_fu_7078_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_32_fu_7090_ap_start() {
    grp_subconv_1x1_32_fu_7090_ap_start = ap_reg_grp_subconv_1x1_32_fu_7090_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_4_fu_7127_ap_start() {
    grp_subconv_1x1_4_fu_7127_ap_start = ap_reg_grp_subconv_1x1_4_fu_7127_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8_fu_7164_ap_start() {
    grp_subconv_1x1_8_fu_7164_ap_start = ap_reg_grp_subconv_1x1_8_fu_7164_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_1x1_8p_fu_7066_ap_start() {
    grp_subconv_1x1_8p_fu_7066_ap_start = ap_reg_grp_subconv_1x1_8p_fu_7066_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_no_re_fu_7115_ap_start() {
    grp_subconv_3x3_16_no_re_fu_7115_ap_start = ap_reg_grp_subconv_3x3_16_no_re_fu_7115_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_7139_ap_start() {
    grp_subconv_3x3_16_strid_fu_7139_ap_start = ap_reg_grp_subconv_3x3_16_strid_fu_7139_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_16_strid_fu_7139_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state174.read())) {
        grp_subconv_3x3_16_strid_fu_7139_input_r_q0 = shuffleunit0_2_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state150.read())) {
        grp_subconv_3x3_16_strid_fu_7139_input_r_q0 = ShuffleConvs_1_Downs_q0.read();
    } else {
        grp_subconv_3x3_16_strid_fu_7139_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_7102_ap_start() {
    grp_subconv_3x3_32_strid_fu_7102_ap_start = ap_reg_grp_subconv_3x3_32_strid_fu_7102_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_32_strid_fu_7102_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state36.read())) {
        grp_subconv_3x3_32_strid_fu_7102_input_r_q0 = conv1_output_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state21.read())) {
        grp_subconv_3x3_32_strid_fu_7102_input_r_q0 = ShuffleConvs_0_Downs_q0.read();
    } else {
        grp_subconv_3x3_32_strid_fu_7102_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_grp_subconv_3x3_4_no_rel_fu_7189_ap_start() {
    grp_subconv_3x3_4_no_rel_fu_7189_ap_start = ap_reg_grp_subconv_3x3_4_no_rel_fu_7189_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_no_rel_fu_7152_ap_start() {
    grp_subconv_3x3_8_no_rel_fu_7152_ap_start = ap_reg_grp_subconv_3x3_8_no_rel_fu_7152_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_7176_ap_start() {
    grp_subconv_3x3_8_stride_fu_7176_ap_start = ap_reg_grp_subconv_3x3_8_stride_fu_7176_ap_start.read();
}

void ShuffleNetV2::thread_grp_subconv_3x3_8_stride_fu_7176_input_r_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state560.read())) {
        grp_subconv_3x3_8_stride_fu_7176_input_r_q0 = shuffleunit1_7_outpu_q0.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state536.read())) {
        grp_subconv_3x3_8_stride_fu_7176_input_r_q0 = ShuffleConvs_2_Downs_q0.read();
    } else {
        grp_subconv_3x3_8_stride_fu_7176_input_r_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void ShuffleNetV2::thread_h_100_fu_24395_p2() {
    h_100_fu_24395_p2 = (!h99_reg_6293.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h99_reg_6293.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_102_fu_24872_p2() {
    h_102_fu_24872_p2 = (!h101_reg_6392.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h101_reg_6392.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_104_fu_25558_p2() {
    h_104_fu_25558_p2 = (!h103_reg_6502.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h103_reg_6502.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_106_fu_25663_p2() {
    h_106_fu_25663_p2 = (!h105_reg_6535.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h105_reg_6535.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_108_fu_26136_p2() {
    h_108_fu_26136_p2 = (!h107_reg_6634.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h107_reg_6634.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_110_fu_26826_p2() {
    h_110_fu_26826_p2 = (!h109_reg_6744.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h109_reg_6744.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_112_fu_26931_p2() {
    h_112_fu_26931_p2 = (!h111_reg_6777.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h111_reg_6777.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_114_fu_27404_p2() {
    h_114_fu_27404_p2 = (!h113_reg_6876.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h113_reg_6876.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_116_fu_28076_p2() {
    h_116_fu_28076_p2 = (!h115_reg_6986.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(h115_reg_6986.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_h_25_fu_7944_p2() {
    h_25_fu_7944_p2 = (!h21_reg_3158.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h21_reg_3158.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_27_fu_8220_p2() {
    h_27_fu_8220_p2 = (!h26_reg_3226.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h26_reg_3226.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_29_fu_8596_p2() {
    h_29_fu_8596_p2 = (!h28_reg_3304.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h28_reg_3304.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_31_fu_8852_p2() {
    h_31_fu_8852_p2 = (!h30_reg_3372.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h30_reg_3372.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_32_fu_8957_p2() {
    h_32_fu_8957_p2 = (!h31_reg_3405.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h31_reg_3405.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_34_fu_9337_p2() {
    h_34_fu_9337_p2 = (!h33_reg_3483.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h33_reg_3483.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_36_fu_9589_p2() {
    h_36_fu_9589_p2 = (!h35_reg_3551.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h35_reg_3551.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_38_fu_9694_p2() {
    h_38_fu_9694_p2 = (!h37_reg_3584.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h37_reg_3584.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_40_fu_10080_p2() {
    h_40_fu_10080_p2 = (!h39_reg_3662.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h39_reg_3662.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_42_fu_10334_p2() {
    h_42_fu_10334_p2 = (!h41_reg_3730.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(h41_reg_3730.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_h_44_fu_10797_p2() {
    h_44_fu_10797_p2 = (!h43_reg_3829.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h43_reg_3829.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_46_fu_11519_p2() {
    h_46_fu_11519_p2 = (!h45_reg_3950.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h45_reg_3950.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_48_fu_12239_p2() {
    h_48_fu_12239_p2 = (!h47_reg_4060.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h47_reg_4060.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_50_fu_12728_p2() {
    h_50_fu_12728_p2 = (!h49_reg_4159.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h49_reg_4159.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_52_fu_13426_p2() {
    h_52_fu_13426_p2 = (!h51_reg_4269.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h51_reg_4269.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_54_fu_13531_p2() {
    h_54_fu_13531_p2 = (!h53_reg_4302.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h53_reg_4302.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_56_fu_14020_p2() {
    h_56_fu_14020_p2 = (!h55_reg_4401.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h55_reg_4401.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_58_fu_14722_p2() {
    h_58_fu_14722_p2 = (!h57_reg_4511.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h57_reg_4511.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_60_fu_14827_p2() {
    h_60_fu_14827_p2 = (!h59_reg_4544.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h59_reg_4544.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_62_fu_15328_p2() {
    h_62_fu_15328_p2 = (!h61_reg_4643.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h61_reg_4643.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_64_fu_16030_p2() {
    h_64_fu_16030_p2 = (!h63_reg_4753.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h63_reg_4753.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_66_fu_16135_p2() {
    h_66_fu_16135_p2 = (!h65_reg_4786.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h65_reg_4786.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_68_fu_16624_p2() {
    h_68_fu_16624_p2 = (!h67_reg_4885.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h67_reg_4885.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_70_fu_17318_p2() {
    h_70_fu_17318_p2 = (!h69_reg_4995.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h69_reg_4995.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_72_fu_17423_p2() {
    h_72_fu_17423_p2 = (!h71_reg_5028.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h71_reg_5028.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_74_fu_17912_p2() {
    h_74_fu_17912_p2 = (!h73_reg_5127.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h73_reg_5127.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_76_fu_18614_p2() {
    h_76_fu_18614_p2 = (!h75_reg_5237.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h75_reg_5237.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_78_fu_18719_p2() {
    h_78_fu_18719_p2 = (!h77_reg_5270.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h77_reg_5270.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_80_fu_19208_p2() {
    h_80_fu_19208_p2 = (!h79_reg_5369.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h79_reg_5369.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_82_fu_19910_p2() {
    h_82_fu_19910_p2 = (!h81_reg_5479.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h81_reg_5479.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_84_fu_20015_p2() {
    h_84_fu_20015_p2 = (!h83_reg_5512.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h83_reg_5512.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_86_fu_20512_p2() {
    h_86_fu_20512_p2 = (!h85_reg_5611.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h85_reg_5611.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_88_fu_21222_p2() {
    h_88_fu_21222_p2 = (!h87_reg_5721.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h87_reg_5721.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_90_fu_21327_p2() {
    h_90_fu_21327_p2 = (!h89_reg_5754.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h89_reg_5754.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_92_fu_21828_p2() {
    h_92_fu_21828_p2 = (!h91_reg_5853.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h91_reg_5853.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_94_fu_22534_p2() {
    h_94_fu_22534_p2 = (!h93_reg_5963.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(h93_reg_5963.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_h_96_fu_22989_p2() {
    h_96_fu_22989_p2 = (!h95_reg_6062.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h95_reg_6062.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_98_fu_23695_p2() {
    h_98_fu_23695_p2 = (!h97_reg_6183.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h97_reg_6183.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_h_fu_7599_p2() {
    h_fu_7599_p2 = (!h14_reg_3079.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(h14_reg_3079.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i105_cast1_fu_19068_p1() {
    i105_cast1_fu_19068_p1 = esl_zext<11,5>(i104_reg_5325.read());
}

void ShuffleNetV2::thread_i105_cast_fu_19064_p1() {
    i105_cast_fu_19064_p1 = esl_zext<7,5>(i104_reg_5325.read());
}

void ShuffleNetV2::thread_i109_cast1_fu_19422_p1() {
    i109_cast1_fu_19422_p1 = esl_zext<11,5>(i108_reg_5391.read());
}

void ShuffleNetV2::thread_i109_cast_fu_19418_p1() {
    i109_cast_fu_19418_p1 = esl_zext<7,5>(i108_reg_5391.read());
}

void ShuffleNetV2::thread_i10_cast_fu_8136_p1() {
    i10_cast_fu_8136_p1 = esl_zext<8,5>(i10_reg_3203.read());
}

void ShuffleNetV2::thread_i111_cast1_fu_19786_p1() {
    i111_cast1_fu_19786_p1 = esl_zext<11,5>(i110_reg_5446.read());
}

void ShuffleNetV2::thread_i111_cast_fu_19782_p1() {
    i111_cast_fu_19782_p1 = esl_zext<7,5>(i110_reg_5446.read());
}

void ShuffleNetV2::thread_i117_cast1_fu_20372_p1() {
    i117_cast1_fu_20372_p1 = esl_zext<11,5>(i116_reg_5567.read());
}

void ShuffleNetV2::thread_i117_cast_fu_20368_p1() {
    i117_cast_fu_20368_p1 = esl_zext<7,5>(i116_reg_5567.read());
}

void ShuffleNetV2::thread_i11_cast_fu_8424_p1() {
    i11_cast_fu_8424_p1 = esl_zext<8,5>(i11_reg_3270.read());
}

void ShuffleNetV2::thread_i121_cast1_fu_20722_p1() {
    i121_cast1_fu_20722_p1 = esl_zext<11,5>(i120_reg_5633.read());
}

void ShuffleNetV2::thread_i121_cast_fu_20718_p1() {
    i121_cast_fu_20718_p1 = esl_zext<7,5>(i120_reg_5633.read());
}

void ShuffleNetV2::thread_i123_cast321_cast_fu_21094_p1() {
    i123_cast321_cast_fu_21094_p1 = esl_zext<10,5>(i122_reg_5688.read());
}

void ShuffleNetV2::thread_i123_cast_fu_21090_p1() {
    i123_cast_fu_21090_p1 = esl_zext<7,5>(i122_reg_5688.read());
}

void ShuffleNetV2::thread_i129_cast302_cast_fu_21684_p1() {
    i129_cast302_cast_fu_21684_p1 = esl_zext<10,5>(i128_reg_5809.read());
}

void ShuffleNetV2::thread_i129_cast_fu_21680_p1() {
    i129_cast_fu_21680_p1 = esl_zext<7,5>(i128_reg_5809.read());
}

void ShuffleNetV2::thread_i12_cast_fu_8629_p1() {
    i12_cast_fu_8629_p1 = esl_zext<8,5>(i12_reg_3315.read());
}

void ShuffleNetV2::thread_i133_cast292_cast_fu_22030_p1() {
    i133_cast292_cast_fu_22030_p1 = esl_zext<10,5>(i132_reg_5875.read());
}

void ShuffleNetV2::thread_i133_cast_fu_22026_p1() {
    i133_cast_fu_22026_p1 = esl_zext<7,5>(i132_reg_5875.read());
}

void ShuffleNetV2::thread_i135_cast279_cast_fu_22406_p1() {
    i135_cast279_cast_fu_22406_p1 = esl_zext<10,5>(i134_reg_5930.read());
}

void ShuffleNetV2::thread_i135_cast_fu_22402_p1() {
    i135_cast_fu_22402_p1 = esl_zext<7,5>(i134_reg_5930.read());
}

void ShuffleNetV2::thread_i141_cast263_cast_fu_22845_p1() {
    i141_cast263_cast_fu_22845_p1 = esl_zext<10,5>(i140_reg_6018.read());
}

void ShuffleNetV2::thread_i141_cast_fu_22841_p1() {
    i141_cast_fu_22841_p1 = esl_zext<8,5>(i140_reg_6018.read());
}

void ShuffleNetV2::thread_i145_cast253_cast_fu_23191_p1() {
    i145_cast253_cast_fu_23191_p1 = esl_zext<9,5>(i144_reg_6084.read());
}

void ShuffleNetV2::thread_i145_cast_fu_23187_p1() {
    i145_cast_fu_23187_p1 = esl_zext<8,5>(i144_reg_6084.read());
}

void ShuffleNetV2::thread_i147_cast1_fu_23547_p1() {
    i147_cast1_fu_23547_p1 = esl_zext<12,5>(i146_reg_6139.read());
}

void ShuffleNetV2::thread_i147_cast_fu_23543_p1() {
    i147_cast_fu_23543_p1 = esl_zext<8,5>(i146_reg_6139.read());
}

void ShuffleNetV2::thread_i153_cast1_fu_23897_p1() {
    i153_cast1_fu_23897_p1 = esl_zext<12,5>(i152_reg_6205.read());
}

void ShuffleNetV2::thread_i153_cast_fu_23893_p1() {
    i153_cast_fu_23893_p1 = esl_zext<8,5>(i152_reg_6205.read());
}

void ShuffleNetV2::thread_i155_cast1_fu_24249_p1() {
    i155_cast1_fu_24249_p1 = esl_zext<12,5>(i154_reg_6260.read());
}

void ShuffleNetV2::thread_i155_cast_fu_24245_p1() {
    i155_cast_fu_24245_p1 = esl_zext<8,5>(i154_reg_6260.read());
}

void ShuffleNetV2::thread_i15_cast706_cast_fu_9161_p1() {
    i15_cast706_cast_fu_9161_p1 = esl_zext<7,5>(i15_reg_3449.read());
}

void ShuffleNetV2::thread_i161_cast1_fu_24732_p1() {
    i161_cast1_fu_24732_p1 = esl_zext<12,5>(i160_reg_6348.read());
}

void ShuffleNetV2::thread_i161_cast_fu_24728_p1() {
    i161_cast_fu_24728_p1 = esl_zext<8,5>(i160_reg_6348.read());
}

void ShuffleNetV2::thread_i165_cast1_fu_25074_p1() {
    i165_cast1_fu_25074_p1 = esl_zext<12,5>(i164_reg_6414.read());
}

void ShuffleNetV2::thread_i165_cast_fu_25070_p1() {
    i165_cast_fu_25070_p1 = esl_zext<8,5>(i164_reg_6414.read());
}

void ShuffleNetV2::thread_i167_cast1_fu_25434_p1() {
    i167_cast1_fu_25434_p1 = esl_zext<12,5>(i166_reg_6469.read());
}

void ShuffleNetV2::thread_i167_cast_fu_25430_p1() {
    i167_cast_fu_25430_p1 = esl_zext<8,5>(i166_reg_6469.read());
}

void ShuffleNetV2::thread_i173_cast1_fu_25996_p1() {
    i173_cast1_fu_25996_p1 = esl_zext<12,5>(i172_reg_6590.read());
}

void ShuffleNetV2::thread_i173_cast_fu_25992_p1() {
    i173_cast_fu_25992_p1 = esl_zext<8,5>(i172_reg_6590.read());
}

void ShuffleNetV2::thread_i177_cast1_fu_26354_p1() {
    i177_cast1_fu_26354_p1 = esl_zext<12,5>(i176_reg_6656.read());
}

void ShuffleNetV2::thread_i177_cast_fu_26350_p1() {
    i177_cast_fu_26350_p1 = esl_zext<8,5>(i176_reg_6656.read());
}

void ShuffleNetV2::thread_i179_cast1_fu_26702_p1() {
    i179_cast1_fu_26702_p1 = esl_zext<12,5>(i178_reg_6711.read());
}

void ShuffleNetV2::thread_i179_cast_fu_26698_p1() {
    i179_cast_fu_26698_p1 = esl_zext<8,5>(i178_reg_6711.read());
}

void ShuffleNetV2::thread_i17_cast_fu_9370_p1() {
    i17_cast_fu_9370_p1 = esl_zext<9,5>(i17_reg_3494.read());
}

void ShuffleNetV2::thread_i185_cast1_fu_27264_p1() {
    i185_cast1_fu_27264_p1 = esl_zext<12,5>(i184_reg_6832.read());
}

void ShuffleNetV2::thread_i185_cast_fu_27260_p1() {
    i185_cast_fu_27260_p1 = esl_zext<8,5>(i184_reg_6832.read());
}

void ShuffleNetV2::thread_i189_cast1_fu_27604_p1() {
    i189_cast1_fu_27604_p1 = esl_zext<12,5>(i188_reg_6898.read());
}

void ShuffleNetV2::thread_i189_cast_fu_27600_p1() {
    i189_cast_fu_27600_p1 = esl_zext<8,5>(i188_reg_6898.read());
}

void ShuffleNetV2::thread_i191_cast1_fu_27952_p1() {
    i191_cast1_fu_27952_p1 = esl_zext<12,5>(i190_reg_6953.read());
}

void ShuffleNetV2::thread_i191_cast_fu_27948_p1() {
    i191_cast_fu_27948_p1 = esl_zext<8,5>(i190_reg_6953.read());
}

void ShuffleNetV2::thread_i19_cast_fu_9527_p1() {
    i19_cast_fu_9527_p1 = esl_zext<9,5>(i19_reg_3528.read());
}

void ShuffleNetV2::thread_i23_cast_fu_10113_p1() {
    i23_cast_fu_10113_p1 = esl_zext<9,5>(i23_reg_3673.read());
}

void ShuffleNetV2::thread_i25_cast_fu_10272_p1() {
    i25_cast_fu_10272_p1 = esl_zext<9,5>(i25_reg_3707.read());
}

void ShuffleNetV2::thread_i27_cast1_fu_10657_p1() {
    i27_cast1_fu_10657_p1 = esl_zext<9,5>(i27_reg_3785.read());
}

void ShuffleNetV2::thread_i27_cast_fu_10653_p1() {
    i27_cast_fu_10653_p1 = esl_zext<7,5>(i27_reg_3785.read());
}

void ShuffleNetV2::thread_i29_cast648_cast_fu_11007_p1() {
    i29_cast648_cast_fu_11007_p1 = esl_zext<8,5>(i29_reg_3851.read());
}

void ShuffleNetV2::thread_i29_cast_fu_11003_p1() {
    i29_cast_fu_11003_p1 = esl_zext<7,5>(i29_reg_3851.read());
}

void ShuffleNetV2::thread_i32_cast635_cast_fu_11375_p1() {
    i32_cast635_cast_fu_11375_p1 = esl_zext<8,5>(i31_reg_3906.read());
}

void ShuffleNetV2::thread_i32_cast_fu_11371_p1() {
    i32_cast_fu_11371_p1 = esl_zext<7,5>(i31_reg_3906.read());
}

void ShuffleNetV2::thread_i37_cast1_fu_11725_p1() {
    i37_cast1_fu_11725_p1 = esl_zext<10,5>(i37_reg_3972.read());
}

void ShuffleNetV2::thread_i37_cast_fu_11721_p1() {
    i37_cast_fu_11721_p1 = esl_zext<7,5>(i37_reg_3972.read());
}

void ShuffleNetV2::thread_i39_cast1_fu_12093_p1() {
    i39_cast1_fu_12093_p1 = esl_zext<10,5>(i39_reg_4027.read());
}

void ShuffleNetV2::thread_i39_cast_fu_12089_p1() {
    i39_cast_fu_12089_p1 = esl_zext<7,5>(i39_reg_4027.read());
}

void ShuffleNetV2::thread_i3_cast_fu_7480_p1() {
    i3_cast_fu_7480_p1 = esl_zext<6,5>(i3_reg_3045.read());
}

void ShuffleNetV2::thread_i45_cast1_fu_12588_p1() {
    i45_cast1_fu_12588_p1 = esl_zext<10,5>(i44_reg_4115.read());
}

void ShuffleNetV2::thread_i45_cast_fu_12584_p1() {
    i45_cast_fu_12584_p1 = esl_zext<7,5>(i44_reg_4115.read());
}

void ShuffleNetV2::thread_i49_cast1_fu_12938_p1() {
    i49_cast1_fu_12938_p1 = esl_zext<10,5>(i48_reg_4181.read());
}

void ShuffleNetV2::thread_i49_cast_fu_12934_p1() {
    i49_cast_fu_12934_p1 = esl_zext<7,5>(i48_reg_4181.read());
}

void ShuffleNetV2::thread_i4_cast_fu_7619_p1() {
    i4_cast_fu_7619_p1 = esl_zext<7,5>(i4_reg_3090.read());
}

void ShuffleNetV2::thread_i51_cast1_fu_13302_p1() {
    i51_cast1_fu_13302_p1 = esl_zext<10,5>(i50_reg_4236.read());
}

void ShuffleNetV2::thread_i51_cast_fu_13298_p1() {
    i51_cast_fu_13298_p1 = esl_zext<7,5>(i50_reg_4236.read());
}

void ShuffleNetV2::thread_i57_cast1_fu_13880_p1() {
    i57_cast1_fu_13880_p1 = esl_zext<10,5>(i56_reg_4357.read());
}

void ShuffleNetV2::thread_i57_cast_fu_13876_p1() {
    i57_cast_fu_13876_p1 = esl_zext<7,5>(i56_reg_4357.read());
}

void ShuffleNetV2::thread_i61_cast544_cast_fu_14226_p1() {
    i61_cast544_cast_fu_14226_p1 = esl_zext<9,5>(i60_reg_4423.read());
}

void ShuffleNetV2::thread_i61_cast_fu_14222_p1() {
    i61_cast_fu_14222_p1 = esl_zext<7,5>(i60_reg_4423.read());
}

void ShuffleNetV2::thread_i63_cast531_cast_fu_14594_p1() {
    i63_cast531_cast_fu_14594_p1 = esl_zext<9,5>(i62_reg_4478.read());
}

void ShuffleNetV2::thread_i63_cast_fu_14590_p1() {
    i63_cast_fu_14590_p1 = esl_zext<7,5>(i62_reg_4478.read());
}

void ShuffleNetV2::thread_i69_cast512_cast_fu_15184_p1() {
    i69_cast512_cast_fu_15184_p1 = esl_zext<9,5>(i68_reg_4599.read());
}

void ShuffleNetV2::thread_i69_cast_fu_15180_p1() {
    i69_cast_fu_15180_p1 = esl_zext<7,5>(i68_reg_4599.read());
}

void ShuffleNetV2::thread_i6_cast_fu_7776_p1() {
    i6_cast_fu_7776_p1 = esl_zext<7,5>(i6_reg_3124.read());
}

void ShuffleNetV2::thread_i73_cast502_cast_fu_15534_p1() {
    i73_cast502_cast_fu_15534_p1 = esl_zext<8,5>(i72_reg_4665.read());
}

void ShuffleNetV2::thread_i73_cast_fu_15530_p1() {
    i73_cast_fu_15530_p1 = esl_zext<7,5>(i72_reg_4665.read());
}

void ShuffleNetV2::thread_i75_cast1_fu_15902_p1() {
    i75_cast1_fu_15902_p1 = esl_zext<11,5>(i74_reg_4720.read());
}

void ShuffleNetV2::thread_i75_cast_fu_15898_p1() {
    i75_cast_fu_15898_p1 = esl_zext<7,5>(i74_reg_4720.read());
}

void ShuffleNetV2::thread_i7_cast760_cast_fu_7336_p1() {
    i7_cast760_cast_fu_7336_p1 = esl_zext<11,10>(i7_reg_2999.read());
}

void ShuffleNetV2::thread_i81_cast1_fu_16484_p1() {
    i81_cast1_fu_16484_p1 = esl_zext<11,5>(i80_reg_4841.read());
}

void ShuffleNetV2::thread_i81_cast_fu_16480_p1() {
    i81_cast_fu_16480_p1 = esl_zext<7,5>(i80_reg_4841.read());
}

void ShuffleNetV2::thread_i85_cast1_fu_16830_p1() {
    i85_cast1_fu_16830_p1 = esl_zext<11,5>(i84_reg_4907.read());
}

void ShuffleNetV2::thread_i85_cast_fu_16826_p1() {
    i85_cast_fu_16826_p1 = esl_zext<7,5>(i84_reg_4907.read());
}

void ShuffleNetV2::thread_i87_cast1_fu_17194_p1() {
    i87_cast1_fu_17194_p1 = esl_zext<11,5>(i86_reg_4962.read());
}

void ShuffleNetV2::thread_i87_cast_fu_17190_p1() {
    i87_cast_fu_17190_p1 = esl_zext<7,5>(i86_reg_4962.read());
}

void ShuffleNetV2::thread_i8_cast758_cast_fu_7372_p1() {
    i8_cast758_cast_fu_7372_p1 = esl_zext<10,4>(i8_reg_3011.read());
}

void ShuffleNetV2::thread_i93_cast1_fu_17772_p1() {
    i93_cast1_fu_17772_p1 = esl_zext<11,5>(i92_reg_5083.read());
}

void ShuffleNetV2::thread_i93_cast_fu_17768_p1() {
    i93_cast_fu_17768_p1 = esl_zext<7,5>(i92_reg_5083.read());
}

void ShuffleNetV2::thread_i97_cast1_fu_18126_p1() {
    i97_cast1_fu_18126_p1 = esl_zext<11,5>(i96_reg_5149.read());
}

void ShuffleNetV2::thread_i97_cast_fu_18122_p1() {
    i97_cast_fu_18122_p1 = esl_zext<7,5>(i96_reg_5149.read());
}

void ShuffleNetV2::thread_i99_cast1_fu_18490_p1() {
    i99_cast1_fu_18490_p1 = esl_zext<11,5>(i98_reg_5204.read());
}

void ShuffleNetV2::thread_i99_cast_fu_18486_p1() {
    i99_cast_fu_18486_p1 = esl_zext<7,5>(i98_reg_5204.read());
}

void ShuffleNetV2::thread_i_101_fu_17932_p2() {
    i_101_fu_17932_p2 = (!i100_reg_5138.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i100_reg_5138.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_103_fu_18319_p2() {
    i_103_fu_18319_p2 = (!i102_reg_5193.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i102_reg_5193.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_105_fu_19078_p2() {
    i_105_fu_19078_p2 = (!i104_reg_5325.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i104_reg_5325.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_107_fu_18897_p2() {
    i_107_fu_18897_p2 = (!i106_reg_5314.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i106_reg_5314.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_109_fu_19432_p2() {
    i_109_fu_19432_p2 = (!i108_reg_5391.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i108_reg_5391.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_111_fu_19796_p2() {
    i_111_fu_19796_p2 = (!i110_reg_5446.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i110_reg_5446.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_113_fu_19228_p2() {
    i_113_fu_19228_p2 = (!i112_reg_5380.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i112_reg_5380.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_115_fu_19615_p2() {
    i_115_fu_19615_p2 = (!i114_reg_5435.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i114_reg_5435.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_117_fu_20382_p2() {
    i_117_fu_20382_p2 = (!i116_reg_5567.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i116_reg_5567.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_119_fu_20193_p2() {
    i_119_fu_20193_p2 = (!i118_reg_5556.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i118_reg_5556.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_121_fu_20732_p2() {
    i_121_fu_20732_p2 = (!i120_reg_5633.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i120_reg_5633.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_123_fu_21104_p2() {
    i_123_fu_21104_p2 = (!i122_reg_5688.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i122_reg_5688.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_125_fu_20532_p2() {
    i_125_fu_20532_p2 = (!i124_reg_5622.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i124_reg_5622.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_127_fu_20915_p2() {
    i_127_fu_20915_p2 = (!i126_reg_5677.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i126_reg_5677.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_129_fu_21694_p2() {
    i_129_fu_21694_p2 = (!i128_reg_5809.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i128_reg_5809.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_131_fu_21505_p2() {
    i_131_fu_21505_p2 = (!i130_reg_5798.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i130_reg_5798.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_133_fu_22040_p2() {
    i_133_fu_22040_p2 = (!i132_reg_5875.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i132_reg_5875.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_135_fu_22416_p2() {
    i_135_fu_22416_p2 = (!i134_reg_5930.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i134_reg_5930.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_137_fu_21848_p2() {
    i_137_fu_21848_p2 = (!i136_reg_5864.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i136_reg_5864.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_139_fu_22227_p2() {
    i_139_fu_22227_p2 = (!i138_reg_5919.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i138_reg_5919.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_141_fu_22855_p2() {
    i_141_fu_22855_p2 = (!i140_reg_6018.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i140_reg_6018.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_143_fu_22684_p2() {
    i_143_fu_22684_p2 = (!i142_reg_6007.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i142_reg_6007.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_145_fu_23201_p2() {
    i_145_fu_23201_p2 = (!i144_reg_6084.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i144_reg_6084.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_147_fu_23557_p2() {
    i_147_fu_23557_p2 = (!i146_reg_6139.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i146_reg_6139.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_149_fu_23009_p2() {
    i_149_fu_23009_p2 = (!i148_reg_6073.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i148_reg_6073.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_14_fu_8794_p2() {
    i_14_fu_8794_p2 = (!i13_reg_3349.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i13_reg_3349.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_151_fu_23386_p2() {
    i_151_fu_23386_p2 = (!i150_reg_6128.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i150_reg_6128.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_153_fu_23907_p2() {
    i_153_fu_23907_p2 = (!i152_reg_6205.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i152_reg_6205.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_155_fu_24259_p2() {
    i_155_fu_24259_p2 = (!i154_reg_6260.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i154_reg_6260.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_157_fu_23715_p2() {
    i_157_fu_23715_p2 = (!i156_reg_6194.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i156_reg_6194.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_159_fu_24088_p2() {
    i_159_fu_24088_p2 = (!i158_reg_6249.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i158_reg_6249.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_161_fu_24742_p2() {
    i_161_fu_24742_p2 = (!i160_reg_6348.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i160_reg_6348.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_163_fu_24571_p2() {
    i_163_fu_24571_p2 = (!i162_reg_6337.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i162_reg_6337.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_165_fu_25084_p2() {
    i_165_fu_25084_p2 = (!i164_reg_6414.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i164_reg_6414.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_167_fu_25444_p2() {
    i_167_fu_25444_p2 = (!i166_reg_6469.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i166_reg_6469.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_169_fu_24892_p2() {
    i_169_fu_24892_p2 = (!i168_reg_6403.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i168_reg_6403.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_16_fu_9171_p2() {
    i_16_fu_9171_p2 = (!i15_reg_3449.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i15_reg_3449.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_171_fu_25265_p2() {
    i_171_fu_25265_p2 = (!i170_reg_6458.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i170_reg_6458.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_173_fu_26006_p2() {
    i_173_fu_26006_p2 = (!i172_reg_6590.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i172_reg_6590.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_175_fu_25839_p2() {
    i_175_fu_25839_p2 = (!i174_reg_6579.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i174_reg_6579.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_177_fu_26364_p2() {
    i_177_fu_26364_p2 = (!i176_reg_6656.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i176_reg_6656.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_179_fu_26712_p2() {
    i_179_fu_26712_p2 = (!i178_reg_6711.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i178_reg_6711.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_181_fu_26156_p2() {
    i_181_fu_26156_p2 = (!i180_reg_6645.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i180_reg_6645.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_183_fu_26545_p2() {
    i_183_fu_26545_p2 = (!i182_reg_6700.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i182_reg_6700.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_185_fu_27274_p2() {
    i_185_fu_27274_p2 = (!i184_reg_6832.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i184_reg_6832.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_187_fu_27107_p2() {
    i_187_fu_27107_p2 = (!i186_reg_6821.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i186_reg_6821.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_189_fu_27614_p2() {
    i_189_fu_27614_p2 = (!i188_reg_6898.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i188_reg_6898.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_18_fu_9380_p2() {
    i_18_fu_9380_p2 = (!i17_reg_3494.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i17_reg_3494.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_191_fu_27962_p2() {
    i_191_fu_27962_p2 = (!i190_reg_6953.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i190_reg_6953.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_193_fu_27424_p2() {
    i_193_fu_27424_p2 = (!i192_reg_6887.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i192_reg_6887.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_195_fu_27795_p2() {
    i_195_fu_27795_p2 = (!i194_reg_6942.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i194_reg_6942.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_1_fu_7346_p2() {
    i_1_fu_7346_p2 = (!i7_reg_2999.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i7_reg_2999.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void ShuffleNetV2::thread_i_20_fu_9537_p2() {
    i_20_fu_9537_p2 = (!i19_reg_3528.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i19_reg_3528.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_22_fu_9904_p2() {
    i_22_fu_9904_p2 = (!i21_reg_3628.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i21_reg_3628.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_24_fu_10123_p2() {
    i_24_fu_10123_p2 = (!i23_reg_3673.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i23_reg_3673.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_26_fu_10282_p2() {
    i_26_fu_10282_p2 = (!i25_reg_3707.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i25_reg_3707.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_28_fu_10667_p2() {
    i_28_fu_10667_p2 = (!i27_reg_3785.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i27_reg_3785.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_29_fu_10486_p2() {
    i_29_fu_10486_p2 = (!i28_reg_3774.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i28_reg_3774.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_2_fu_7382_p2() {
    i_2_fu_7382_p2 = (!i8_reg_3011.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i8_reg_3011.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void ShuffleNetV2::thread_i_30_fu_11017_p2() {
    i_30_fu_11017_p2 = (!i29_reg_3851.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i29_reg_3851.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_32_fu_11385_p2() {
    i_32_fu_11385_p2 = (!i31_reg_3906.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i31_reg_3906.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_34_fu_10817_p2() {
    i_34_fu_10817_p2 = (!i33_reg_3840.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i33_reg_3840.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_36_fu_11204_p2() {
    i_36_fu_11204_p2 = (!i35_reg_3895.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i35_reg_3895.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_38_fu_11735_p2() {
    i_38_fu_11735_p2 = (!i37_reg_3972.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i37_reg_3972.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_3_fu_7490_p2() {
    i_3_fu_7490_p2 = (!i3_reg_3045.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i3_reg_3045.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_40_fu_12103_p2() {
    i_40_fu_12103_p2 = (!i39_reg_4027.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i39_reg_4027.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_41_fu_11539_p2() {
    i_41_fu_11539_p2 = (!i40_reg_3961.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i40_reg_3961.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_43_fu_11918_p2() {
    i_43_fu_11918_p2 = (!i42_reg_4016.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i42_reg_4016.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_45_fu_12598_p2() {
    i_45_fu_12598_p2 = (!i44_reg_4115.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i44_reg_4115.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_47_fu_12417_p2() {
    i_47_fu_12417_p2 = (!i46_reg_4104.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i46_reg_4104.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_49_fu_12948_p2() {
    i_49_fu_12948_p2 = (!i48_reg_4181.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i48_reg_4181.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_4_fu_7629_p2() {
    i_4_fu_7629_p2 = (!i4_reg_3090.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i4_reg_3090.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_51_fu_13312_p2() {
    i_51_fu_13312_p2 = (!i50_reg_4236.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i50_reg_4236.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_53_fu_12748_p2() {
    i_53_fu_12748_p2 = (!i52_reg_4170.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i52_reg_4170.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_55_fu_13131_p2() {
    i_55_fu_13131_p2 = (!i54_reg_4225.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i54_reg_4225.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_57_fu_13890_p2() {
    i_57_fu_13890_p2 = (!i56_reg_4357.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i56_reg_4357.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_59_fu_13709_p2() {
    i_59_fu_13709_p2 = (!i58_reg_4346.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i58_reg_4346.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_5_fu_7786_p2() {
    i_5_fu_7786_p2 = (!i6_reg_3124.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i6_reg_3124.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_61_fu_14236_p2() {
    i_61_fu_14236_p2 = (!i60_reg_4423.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i60_reg_4423.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_63_fu_14604_p2() {
    i_63_fu_14604_p2 = (!i62_reg_4478.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i62_reg_4478.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_65_fu_14040_p2() {
    i_65_fu_14040_p2 = (!i64_reg_4412.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i64_reg_4412.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_67_fu_14423_p2() {
    i_67_fu_14423_p2 = (!i66_reg_4467.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i66_reg_4467.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_69_fu_15194_p2() {
    i_69_fu_15194_p2 = (!i68_reg_4599.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i68_reg_4599.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_6_fu_7983_p2() {
    i_6_fu_7983_p2 = (!i9_reg_3169.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i9_reg_3169.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_71_fu_15005_p2() {
    i_71_fu_15005_p2 = (!i70_reg_4588.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i70_reg_4588.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_73_fu_15544_p2() {
    i_73_fu_15544_p2 = (!i72_reg_4665.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i72_reg_4665.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_75_fu_15912_p2() {
    i_75_fu_15912_p2 = (!i74_reg_4720.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i74_reg_4720.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_77_fu_15348_p2() {
    i_77_fu_15348_p2 = (!i76_reg_4654.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i76_reg_4654.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_79_fu_15731_p2() {
    i_79_fu_15731_p2 = (!i78_reg_4709.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i78_reg_4709.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_7_fu_8146_p2() {
    i_7_fu_8146_p2 = (!i10_reg_3203.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i10_reg_3203.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_81_fu_16494_p2() {
    i_81_fu_16494_p2 = (!i80_reg_4841.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i80_reg_4841.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_83_fu_16313_p2() {
    i_83_fu_16313_p2 = (!i82_reg_4830.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i82_reg_4830.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_85_fu_16840_p2() {
    i_85_fu_16840_p2 = (!i84_reg_4907.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i84_reg_4907.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_87_fu_17204_p2() {
    i_87_fu_17204_p2 = (!i86_reg_4962.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i86_reg_4962.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_89_fu_16644_p2() {
    i_89_fu_16644_p2 = (!i88_reg_4896.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i88_reg_4896.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_i_8_fu_8434_p2() {
    i_8_fu_8434_p2 = (!i11_reg_3270.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i11_reg_3270.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_91_fu_17023_p2() {
    i_91_fu_17023_p2 = (!i90_reg_4951.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i90_reg_4951.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_93_fu_17782_p2() {
    i_93_fu_17782_p2 = (!i92_reg_5083.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i92_reg_5083.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_95_fu_17601_p2() {
    i_95_fu_17601_p2 = (!i94_reg_5072.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i94_reg_5072.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_i_97_fu_18136_p2() {
    i_97_fu_18136_p2 = (!i96_reg_5149.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i96_reg_5149.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_99_fu_18500_p2() {
    i_99_fu_18500_p2 = (!i98_reg_5204.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i98_reg_5204.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_9_fu_8639_p2() {
    i_9_fu_8639_p2 = (!i12_reg_3315.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i12_reg_3315.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_i_fu_7325_p2() {
    i_fu_7325_p2 = (!i5_reg_2988.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i5_reg_2988.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void ShuffleNetV2::thread_image_r_address0() {
    image_r_address0 = grp_conv1_fu_7042_input_r_address0.read();
}

void ShuffleNetV2::thread_image_r_ce0() {
    image_r_ce0 = grp_conv1_fu_7042_input_r_ce0.read();
}

void ShuffleNetV2::thread_k_12_fu_14616_p2() {
    k_12_fu_14616_p2 = (!k11_reg_4489.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k11_reg_4489.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_14_fu_15206_p2() {
    k_14_fu_15206_p2 = (!k13_reg_4610.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k13_reg_4610.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_16_fu_15556_p2() {
    k_16_fu_15556_p2 = (!k15_reg_4676.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k15_reg_4676.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_18_fu_15924_p2() {
    k_18_fu_15924_p2 = (!k17_reg_4731.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k17_reg_4731.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_1_fu_11029_p2() {
    k_1_fu_11029_p2 = (!k2_reg_3862.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k2_reg_3862.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_20_fu_16506_p2() {
    k_20_fu_16506_p2 = (!k19_reg_4852.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k19_reg_4852.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_22_fu_16852_p2() {
    k_22_fu_16852_p2 = (!k21_reg_4918.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k21_reg_4918.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_24_fu_17216_p2() {
    k_24_fu_17216_p2 = (!k23_reg_4973.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k23_reg_4973.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_26_fu_17794_p2() {
    k_26_fu_17794_p2 = (!k25_reg_5094.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k25_reg_5094.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_28_fu_18148_p2() {
    k_28_fu_18148_p2 = (!k27_reg_5160.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k27_reg_5160.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_2_fu_11397_p2() {
    k_2_fu_11397_p2 = (!k3_reg_3917.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k3_reg_3917.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_30_fu_18512_p2() {
    k_30_fu_18512_p2 = (!k29_reg_5215.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k29_reg_5215.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_32_fu_19090_p2() {
    k_32_fu_19090_p2 = (!k31_reg_5336.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k31_reg_5336.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_34_fu_19444_p2() {
    k_34_fu_19444_p2 = (!k33_reg_5402.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k33_reg_5402.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_36_fu_19808_p2() {
    k_36_fu_19808_p2 = (!k35_reg_5457.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k35_reg_5457.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_38_fu_20394_p2() {
    k_38_fu_20394_p2 = (!k37_reg_5578.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k37_reg_5578.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_3_fu_11747_p2() {
    k_3_fu_11747_p2 = (!k4_reg_3983.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k4_reg_3983.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_40_fu_20744_p2() {
    k_40_fu_20744_p2 = (!k39_reg_5644.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k39_reg_5644.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_42_fu_21116_p2() {
    k_42_fu_21116_p2 = (!k41_reg_5699.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k41_reg_5699.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_44_fu_21706_p2() {
    k_44_fu_21706_p2 = (!k43_reg_5820.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k43_reg_5820.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_46_fu_22052_p2() {
    k_46_fu_22052_p2 = (!k45_reg_5886.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k45_reg_5886.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_48_fu_22428_p2() {
    k_48_fu_22428_p2 = (!k47_reg_5941.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k47_reg_5941.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_4_fu_12115_p2() {
    k_4_fu_12115_p2 = (!k5_reg_4038.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k5_reg_4038.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_50_fu_22867_p2() {
    k_50_fu_22867_p2 = (!k49_reg_6029.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k49_reg_6029.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_52_fu_23213_p2() {
    k_52_fu_23213_p2 = (!k51_reg_6095.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k51_reg_6095.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_54_fu_23569_p2() {
    k_54_fu_23569_p2 = (!k53_reg_6150.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k53_reg_6150.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_56_fu_23919_p2() {
    k_56_fu_23919_p2 = (!k55_reg_6216.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k55_reg_6216.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_58_fu_24271_p2() {
    k_58_fu_24271_p2 = (!k57_reg_6271.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k57_reg_6271.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_5_fu_12610_p2() {
    k_5_fu_12610_p2 = (!k6_reg_4126.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k6_reg_4126.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_60_fu_24754_p2() {
    k_60_fu_24754_p2 = (!k59_reg_6359.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k59_reg_6359.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_62_fu_25096_p2() {
    k_62_fu_25096_p2 = (!k61_reg_6425.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k61_reg_6425.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_64_fu_25456_p2() {
    k_64_fu_25456_p2 = (!k63_reg_6480.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k63_reg_6480.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_66_fu_26018_p2() {
    k_66_fu_26018_p2 = (!k65_reg_6601.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k65_reg_6601.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_68_fu_26376_p2() {
    k_68_fu_26376_p2 = (!k67_reg_6667.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k67_reg_6667.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_6_fu_12960_p2() {
    k_6_fu_12960_p2 = (!k7_reg_4192.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k7_reg_4192.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_70_fu_26724_p2() {
    k_70_fu_26724_p2 = (!k69_reg_6722.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k69_reg_6722.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_72_fu_27286_p2() {
    k_72_fu_27286_p2 = (!k71_reg_6843.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k71_reg_6843.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_74_fu_27626_p2() {
    k_74_fu_27626_p2 = (!k73_reg_6909.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k73_reg_6909.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_76_fu_27974_p2() {
    k_76_fu_27974_p2 = (!k75_reg_6964.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(k75_reg_6964.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void ShuffleNetV2::thread_k_7_fu_13324_p2() {
    k_7_fu_13324_p2 = (!k8_reg_4247.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k8_reg_4247.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_8_fu_13902_p2() {
    k_8_fu_13902_p2 = (!k9_reg_4368.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k9_reg_4368.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_9_fu_14248_p2() {
    k_9_fu_14248_p2 = (!k10_reg_4434.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k10_reg_4434.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_k_fu_10679_p2() {
    k_fu_10679_p2 = (!k1_reg_3796.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(k1_reg_3796.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void ShuffleNetV2::thread_p_lshr_f10_cast_fu_16974_p4() {
    p_lshr_f10_cast_fu_16974_p4 = co102_reg_4929.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f11_cast_fu_17552_p4() {
    p_lshr_f11_cast_fu_17552_p4 = co108_reg_5050.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f12_cast_fu_18270_p4() {
    p_lshr_f12_cast_fu_18270_p4 = co112_reg_5171.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f13_cast_fu_18848_p4() {
    p_lshr_f13_cast_fu_18848_p4 = co118_reg_5292.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f14_cast_fu_19566_p4() {
    p_lshr_f14_cast_fu_19566_p4 = co122_reg_5413.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f15_cast_fu_20144_p4() {
    p_lshr_f15_cast_fu_20144_p4 = co128_reg_5534.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f16_cast_fu_20866_p4() {
    p_lshr_f16_cast_fu_20866_p4 = co132_reg_5655.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f17_cast_fu_21456_p4() {
    p_lshr_f17_cast_fu_21456_p4 = co138_reg_5776.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f18_cast_fu_22178_p4() {
    p_lshr_f18_cast_fu_22178_p4 = co142_reg_5897.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f19_cast_fu_22635_p4() {
    p_lshr_f19_cast_fu_22635_p4 = co146_reg_5985.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f1_cast_fu_11155_p4() {
    p_lshr_f1_cast_fu_11155_p4 = co60_reg_3873.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f20_cast_fu_23337_p4() {
    p_lshr_f20_cast_fu_23337_p4 = co150_reg_6106.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f21_cast_fu_24039_p4() {
    p_lshr_f21_cast_fu_24039_p4 = co154_reg_6227.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f22_cast_fu_24522_p4() {
    p_lshr_f22_cast_fu_24522_p4 = co158_reg_6315.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f23_cast_fu_25216_p4() {
    p_lshr_f23_cast_fu_25216_p4 = co162_reg_6436.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f24_cast_fu_25790_p4() {
    p_lshr_f24_cast_fu_25790_p4 = co168_reg_6557.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f25_cast_fu_26496_p4() {
    p_lshr_f25_cast_fu_26496_p4 = co172_reg_6678.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f26_cast_fu_27058_p4() {
    p_lshr_f26_cast_fu_27058_p4 = co178_reg_6799.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f27_cast_fu_27746_p4() {
    p_lshr_f27_cast_fu_27746_p4 = co182_reg_6920.read().range(4, 2);
}

void ShuffleNetV2::thread_p_lshr_f2_cast_fu_11869_p4() {
    p_lshr_f2_cast_fu_11869_p4 = co64_reg_3994.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f3_cast_fu_12368_p4() {
    p_lshr_f3_cast_fu_12368_p4 = co68_reg_4082.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f4_cast_fu_13082_p4() {
    p_lshr_f4_cast_fu_13082_p4 = co72_reg_4203.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f5_cast_fu_13660_p4() {
    p_lshr_f5_cast_fu_13660_p4 = co78_reg_4324.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f6_cast_fu_14374_p4() {
    p_lshr_f6_cast_fu_14374_p4 = co82_reg_4445.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f7_cast_fu_14956_p4() {
    p_lshr_f7_cast_fu_14956_p4 = co88_reg_4566.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f8_cast_fu_15682_p4() {
    p_lshr_f8_cast_fu_15682_p4 = co92_reg_4687.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f9_cast_fu_16264_p4() {
    p_lshr_f9_cast_fu_16264_p4 = co98_reg_4808.read().range(4, 1);
}

void ShuffleNetV2::thread_p_lshr_f_cast_fu_10437_p4() {
    p_lshr_f_cast_fu_10437_p4 = co56_reg_3752.read().range(4, 1);
}

void ShuffleNetV2::thread_p_shl100_cast_fu_16870_p1() {
    p_shl100_cast_fu_16870_p1 = esl_zext<7,6>(p_shl100_fu_16862_p3.read());
}

void ShuffleNetV2::thread_p_shl100_fu_16862_p3() {
    p_shl100_fu_16862_p3 = esl_concat<1,5>(tmp_994_fu_16858_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl101_cast_fu_16882_p1() {
    p_shl101_cast_fu_16882_p1 = esl_zext<7,4>(p_shl101_fu_16874_p3.read());
}

void ShuffleNetV2::thread_p_shl101_fu_16874_p3() {
    p_shl101_fu_16874_p3 = esl_concat<1,3>(tmp_994_fu_16858_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl102_cast_fu_16952_p1() {
    p_shl102_cast_fu_16952_p1 = esl_zext<7,6>(p_shl102_fu_16944_p3.read());
}

void ShuffleNetV2::thread_p_shl102_fu_16944_p3() {
    p_shl102_fu_16944_p3 = esl_concat<1,5>(tmp_993_fu_16940_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl103_cast_fu_16964_p1() {
    p_shl103_cast_fu_16964_p1 = esl_zext<7,4>(p_shl103_fu_16956_p3.read());
}

void ShuffleNetV2::thread_p_shl103_fu_16956_p3() {
    p_shl103_fu_16956_p3 = esl_concat<1,3>(tmp_993_fu_16940_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl104_cast_fu_17234_p1() {
    p_shl104_cast_fu_17234_p1 = esl_zext<7,6>(p_shl104_fu_17226_p3.read());
}

void ShuffleNetV2::thread_p_shl104_fu_17226_p3() {
    p_shl104_fu_17226_p3 = esl_concat<1,5>(tmp_1011_fu_17222_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl105_cast_fu_17246_p1() {
    p_shl105_cast_fu_17246_p1 = esl_zext<7,4>(p_shl105_fu_17238_p3.read());
}

void ShuffleNetV2::thread_p_shl105_fu_17238_p3() {
    p_shl105_fu_17238_p3 = esl_concat<1,3>(tmp_1011_fu_17222_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl106_cast_fu_16662_p1() {
    p_shl106_cast_fu_16662_p1 = esl_zext<7,6>(p_shl106_fu_16654_p3.read());
}

void ShuffleNetV2::thread_p_shl106_fu_16654_p3() {
    p_shl106_fu_16654_p3 = esl_concat<1,5>(tmp_995_fu_16650_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl107_cast_fu_16674_p1() {
    p_shl107_cast_fu_16674_p1 = esl_zext<7,4>(p_shl107_fu_16666_p3.read());
}

void ShuffleNetV2::thread_p_shl107_fu_16666_p3() {
    p_shl107_fu_16666_p3 = esl_concat<1,3>(tmp_995_fu_16650_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl108_cast_fu_17041_p1() {
    p_shl108_cast_fu_17041_p1 = esl_zext<8,7>(p_shl108_fu_17033_p3.read());
}

void ShuffleNetV2::thread_p_shl108_fu_17033_p3() {
    p_shl108_fu_17033_p3 = esl_concat<2,5>(tmp_1012_fu_17029_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl109_cast_fu_17053_p1() {
    p_shl109_cast_fu_17053_p1 = esl_zext<8,5>(p_shl109_fu_17045_p3.read());
}

void ShuffleNetV2::thread_p_shl109_fu_17045_p3() {
    p_shl109_fu_17045_p3 = esl_concat<2,3>(tmp_1012_fu_17029_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl10_cast_fu_11133_p1() {
    p_shl10_cast_fu_11133_p1 = esl_zext<7,6>(p_shl10_fu_11125_p3.read());
}

void ShuffleNetV2::thread_p_shl10_fu_11125_p3() {
    p_shl10_fu_11125_p3 = esl_concat<1,5>(tmp_134_fu_11121_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl110_cast_fu_17086_p1() {
    p_shl110_cast_fu_17086_p1 = esl_zext<7,6>(p_shl110_fu_17078_p3.read());
}

void ShuffleNetV2::thread_p_shl110_fu_17078_p3() {
    p_shl110_fu_17078_p3 = esl_concat<2,4>(tmp_1012_fu_17029_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl111_cast_fu_17098_p1() {
    p_shl111_cast_fu_17098_p1 = esl_zext<7,4>(p_shl111_fu_17090_p3.read());
}

void ShuffleNetV2::thread_p_shl111_fu_17090_p3() {
    p_shl111_fu_17090_p3 = esl_concat<2,2>(tmp_1012_fu_17029_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl112_cast_fu_17530_p1() {
    p_shl112_cast_fu_17530_p1 = esl_zext<7,6>(p_shl112_fu_17522_p3.read());
}

void ShuffleNetV2::thread_p_shl112_fu_17522_p3() {
    p_shl112_fu_17522_p3 = esl_concat<1,5>(tmp_1025_fu_17518_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl113_cast_fu_17542_p1() {
    p_shl113_cast_fu_17542_p1 = esl_zext<7,4>(p_shl113_fu_17534_p3.read());
}

void ShuffleNetV2::thread_p_shl113_fu_17534_p3() {
    p_shl113_fu_17534_p3 = esl_concat<1,3>(tmp_1025_fu_17518_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl114_cast_fu_17812_p1() {
    p_shl114_cast_fu_17812_p1 = esl_zext<7,6>(p_shl114_fu_17804_p3.read());
}

void ShuffleNetV2::thread_p_shl114_fu_17804_p3() {
    p_shl114_fu_17804_p3 = esl_concat<1,5>(tmp_1031_fu_17800_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl115_cast_fu_17824_p1() {
    p_shl115_cast_fu_17824_p1 = esl_zext<7,4>(p_shl115_fu_17816_p3.read());
}

void ShuffleNetV2::thread_p_shl115_fu_17816_p3() {
    p_shl115_fu_17816_p3 = esl_concat<1,3>(tmp_1031_fu_17800_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl116_cast_fu_17619_p1() {
    p_shl116_cast_fu_17619_p1 = esl_zext<8,7>(p_shl116_fu_17611_p3.read());
}

void ShuffleNetV2::thread_p_shl116_fu_17611_p3() {
    p_shl116_fu_17611_p3 = esl_concat<2,5>(tmp_1032_fu_17607_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl117_cast_fu_17631_p1() {
    p_shl117_cast_fu_17631_p1 = esl_zext<8,5>(p_shl117_fu_17623_p3.read());
}

void ShuffleNetV2::thread_p_shl117_fu_17623_p3() {
    p_shl117_fu_17623_p3 = esl_concat<2,3>(tmp_1032_fu_17607_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl118_cast_fu_17664_p1() {
    p_shl118_cast_fu_17664_p1 = esl_zext<7,6>(p_shl118_fu_17656_p3.read());
}

void ShuffleNetV2::thread_p_shl118_fu_17656_p3() {
    p_shl118_fu_17656_p3 = esl_concat<2,4>(tmp_1032_fu_17607_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl119_cast_fu_17676_p1() {
    p_shl119_cast_fu_17676_p1 = esl_zext<7,4>(p_shl119_fu_17668_p3.read());
}

void ShuffleNetV2::thread_p_shl119_fu_17668_p3() {
    p_shl119_fu_17668_p3 = esl_concat<2,2>(tmp_1032_fu_17607_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl11_cast_fu_11145_p1() {
    p_shl11_cast_fu_11145_p1 = esl_zext<7,4>(p_shl11_fu_11137_p3.read());
}

void ShuffleNetV2::thread_p_shl11_fu_11137_p3() {
    p_shl11_fu_11137_p3 = esl_concat<1,3>(tmp_134_fu_11121_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl120_cast_fu_18166_p1() {
    p_shl120_cast_fu_18166_p1 = esl_zext<7,6>(p_shl120_fu_18158_p3.read());
}

void ShuffleNetV2::thread_p_shl120_fu_18158_p3() {
    p_shl120_fu_18158_p3 = esl_concat<1,5>(tmp_1042_fu_18154_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl121_cast_fu_18178_p1() {
    p_shl121_cast_fu_18178_p1 = esl_zext<7,4>(p_shl121_fu_18170_p3.read());
}

void ShuffleNetV2::thread_p_shl121_fu_18170_p3() {
    p_shl121_fu_18170_p3 = esl_concat<1,3>(tmp_1042_fu_18154_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl122_cast_fu_18248_p1() {
    p_shl122_cast_fu_18248_p1 = esl_zext<7,6>(p_shl122_fu_18240_p3.read());
}

void ShuffleNetV2::thread_p_shl122_fu_18240_p3() {
    p_shl122_fu_18240_p3 = esl_concat<1,5>(tmp_1041_fu_18236_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl123_cast_fu_18260_p1() {
    p_shl123_cast_fu_18260_p1 = esl_zext<7,4>(p_shl123_fu_18252_p3.read());
}

void ShuffleNetV2::thread_p_shl123_fu_18252_p3() {
    p_shl123_fu_18252_p3 = esl_concat<1,3>(tmp_1041_fu_18236_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl124_cast_fu_18530_p1() {
    p_shl124_cast_fu_18530_p1 = esl_zext<7,6>(p_shl124_fu_18522_p3.read());
}

void ShuffleNetV2::thread_p_shl124_fu_18522_p3() {
    p_shl124_fu_18522_p3 = esl_concat<1,5>(tmp_1060_fu_18518_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl125_cast_fu_18542_p1() {
    p_shl125_cast_fu_18542_p1 = esl_zext<7,4>(p_shl125_fu_18534_p3.read());
}

void ShuffleNetV2::thread_p_shl125_fu_18534_p3() {
    p_shl125_fu_18534_p3 = esl_concat<1,3>(tmp_1060_fu_18518_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl126_cast_fu_17950_p1() {
    p_shl126_cast_fu_17950_p1 = esl_zext<7,6>(p_shl126_fu_17942_p3.read());
}

void ShuffleNetV2::thread_p_shl126_fu_17942_p3() {
    p_shl126_fu_17942_p3 = esl_concat<1,5>(tmp_1043_fu_17938_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl127_cast_fu_17962_p1() {
    p_shl127_cast_fu_17962_p1 = esl_zext<7,4>(p_shl127_fu_17954_p3.read());
}

void ShuffleNetV2::thread_p_shl127_fu_17954_p3() {
    p_shl127_fu_17954_p3 = esl_concat<1,3>(tmp_1043_fu_17938_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl128_cast_fu_18337_p1() {
    p_shl128_cast_fu_18337_p1 = esl_zext<8,7>(p_shl128_fu_18329_p3.read());
}

void ShuffleNetV2::thread_p_shl128_fu_18329_p3() {
    p_shl128_fu_18329_p3 = esl_concat<2,5>(tmp_1061_fu_18325_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl129_cast_fu_18349_p1() {
    p_shl129_cast_fu_18349_p1 = esl_zext<8,5>(p_shl129_fu_18341_p3.read());
}

void ShuffleNetV2::thread_p_shl129_fu_18341_p3() {
    p_shl129_fu_18341_p3 = esl_concat<2,3>(tmp_1061_fu_18325_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl12_cast_fu_11415_p1() {
    p_shl12_cast_fu_11415_p1 = esl_zext<7,6>(p_shl12_fu_11407_p3.read());
}

void ShuffleNetV2::thread_p_shl12_fu_11407_p3() {
    p_shl12_fu_11407_p3 = esl_concat<1,5>(tmp_151_fu_11403_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl130_cast_fu_18382_p1() {
    p_shl130_cast_fu_18382_p1 = esl_zext<7,6>(p_shl130_fu_18374_p3.read());
}

void ShuffleNetV2::thread_p_shl130_fu_18374_p3() {
    p_shl130_fu_18374_p3 = esl_concat<2,4>(tmp_1061_fu_18325_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl131_cast_fu_18394_p1() {
    p_shl131_cast_fu_18394_p1 = esl_zext<7,4>(p_shl131_fu_18386_p3.read());
}

void ShuffleNetV2::thread_p_shl131_fu_18386_p3() {
    p_shl131_fu_18386_p3 = esl_concat<2,2>(tmp_1061_fu_18325_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl132_cast_fu_18826_p1() {
    p_shl132_cast_fu_18826_p1 = esl_zext<7,6>(p_shl132_fu_18818_p3.read());
}

void ShuffleNetV2::thread_p_shl132_fu_18818_p3() {
    p_shl132_fu_18818_p3 = esl_concat<1,5>(tmp_1074_fu_18814_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl133_cast_fu_18838_p1() {
    p_shl133_cast_fu_18838_p1 = esl_zext<7,4>(p_shl133_fu_18830_p3.read());
}

void ShuffleNetV2::thread_p_shl133_fu_18830_p3() {
    p_shl133_fu_18830_p3 = esl_concat<1,3>(tmp_1074_fu_18814_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl134_cast_fu_19108_p1() {
    p_shl134_cast_fu_19108_p1 = esl_zext<7,6>(p_shl134_fu_19100_p3.read());
}

void ShuffleNetV2::thread_p_shl134_fu_19100_p3() {
    p_shl134_fu_19100_p3 = esl_concat<1,5>(tmp_1080_fu_19096_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl135_cast_fu_19120_p1() {
    p_shl135_cast_fu_19120_p1 = esl_zext<7,4>(p_shl135_fu_19112_p3.read());
}

void ShuffleNetV2::thread_p_shl135_fu_19112_p3() {
    p_shl135_fu_19112_p3 = esl_concat<1,3>(tmp_1080_fu_19096_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl136_cast_fu_18915_p1() {
    p_shl136_cast_fu_18915_p1 = esl_zext<8,7>(p_shl136_fu_18907_p3.read());
}

void ShuffleNetV2::thread_p_shl136_fu_18907_p3() {
    p_shl136_fu_18907_p3 = esl_concat<2,5>(tmp_1081_fu_18903_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl137_cast_fu_18927_p1() {
    p_shl137_cast_fu_18927_p1 = esl_zext<8,5>(p_shl137_fu_18919_p3.read());
}

void ShuffleNetV2::thread_p_shl137_fu_18919_p3() {
    p_shl137_fu_18919_p3 = esl_concat<2,3>(tmp_1081_fu_18903_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl138_cast_fu_18960_p1() {
    p_shl138_cast_fu_18960_p1 = esl_zext<7,6>(p_shl138_fu_18952_p3.read());
}

void ShuffleNetV2::thread_p_shl138_fu_18952_p3() {
    p_shl138_fu_18952_p3 = esl_concat<2,4>(tmp_1081_fu_18903_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl139_cast_fu_18972_p1() {
    p_shl139_cast_fu_18972_p1 = esl_zext<7,4>(p_shl139_fu_18964_p3.read());
}

void ShuffleNetV2::thread_p_shl139_fu_18964_p3() {
    p_shl139_fu_18964_p3 = esl_concat<2,2>(tmp_1081_fu_18903_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl13_cast_fu_11427_p1() {
    p_shl13_cast_fu_11427_p1 = esl_zext<7,4>(p_shl13_fu_11419_p3.read());
}

void ShuffleNetV2::thread_p_shl13_fu_11419_p3() {
    p_shl13_fu_11419_p3 = esl_concat<1,3>(tmp_151_fu_11403_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl140_cast_fu_19462_p1() {
    p_shl140_cast_fu_19462_p1 = esl_zext<7,6>(p_shl140_fu_19454_p3.read());
}

void ShuffleNetV2::thread_p_shl140_fu_19454_p3() {
    p_shl140_fu_19454_p3 = esl_concat<1,5>(tmp_1091_fu_19450_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl141_cast_fu_19474_p1() {
    p_shl141_cast_fu_19474_p1 = esl_zext<7,4>(p_shl141_fu_19466_p3.read());
}

void ShuffleNetV2::thread_p_shl141_fu_19466_p3() {
    p_shl141_fu_19466_p3 = esl_concat<1,3>(tmp_1091_fu_19450_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl142_cast_fu_19544_p1() {
    p_shl142_cast_fu_19544_p1 = esl_zext<7,6>(p_shl142_fu_19536_p3.read());
}

void ShuffleNetV2::thread_p_shl142_fu_19536_p3() {
    p_shl142_fu_19536_p3 = esl_concat<1,5>(tmp_1090_fu_19532_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl143_cast_fu_19556_p1() {
    p_shl143_cast_fu_19556_p1 = esl_zext<7,4>(p_shl143_fu_19548_p3.read());
}

void ShuffleNetV2::thread_p_shl143_fu_19548_p3() {
    p_shl143_fu_19548_p3 = esl_concat<1,3>(tmp_1090_fu_19532_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl144_cast_fu_19826_p1() {
    p_shl144_cast_fu_19826_p1 = esl_zext<7,6>(p_shl144_fu_19818_p3.read());
}

void ShuffleNetV2::thread_p_shl144_fu_19818_p3() {
    p_shl144_fu_19818_p3 = esl_concat<1,5>(tmp_1108_fu_19814_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl145_cast_fu_19838_p1() {
    p_shl145_cast_fu_19838_p1 = esl_zext<7,4>(p_shl145_fu_19830_p3.read());
}

void ShuffleNetV2::thread_p_shl145_fu_19830_p3() {
    p_shl145_fu_19830_p3 = esl_concat<1,3>(tmp_1108_fu_19814_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl146_cast_fu_19246_p1() {
    p_shl146_cast_fu_19246_p1 = esl_zext<7,6>(p_shl146_fu_19238_p3.read());
}

void ShuffleNetV2::thread_p_shl146_fu_19238_p3() {
    p_shl146_fu_19238_p3 = esl_concat<1,5>(tmp_1092_fu_19234_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl147_cast_fu_19258_p1() {
    p_shl147_cast_fu_19258_p1 = esl_zext<7,4>(p_shl147_fu_19250_p3.read());
}

void ShuffleNetV2::thread_p_shl147_fu_19250_p3() {
    p_shl147_fu_19250_p3 = esl_concat<1,3>(tmp_1092_fu_19234_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl148_cast_fu_19633_p1() {
    p_shl148_cast_fu_19633_p1 = esl_zext<8,7>(p_shl148_fu_19625_p3.read());
}

void ShuffleNetV2::thread_p_shl148_fu_19625_p3() {
    p_shl148_fu_19625_p3 = esl_concat<2,5>(tmp_1109_fu_19621_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl149_cast_fu_19645_p1() {
    p_shl149_cast_fu_19645_p1 = esl_zext<8,5>(p_shl149_fu_19637_p3.read());
}

void ShuffleNetV2::thread_p_shl149_fu_19637_p3() {
    p_shl149_fu_19637_p3 = esl_concat<2,3>(tmp_1109_fu_19621_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl14_cast_fu_10835_p1() {
    p_shl14_cast_fu_10835_p1 = esl_zext<7,6>(p_shl14_fu_10827_p3.read());
}

void ShuffleNetV2::thread_p_shl14_fu_10827_p3() {
    p_shl14_fu_10827_p3 = esl_concat<1,5>(tmp_140_fu_10823_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl150_cast_fu_19678_p1() {
    p_shl150_cast_fu_19678_p1 = esl_zext<7,6>(p_shl150_fu_19670_p3.read());
}

void ShuffleNetV2::thread_p_shl150_fu_19670_p3() {
    p_shl150_fu_19670_p3 = esl_concat<2,4>(tmp_1109_fu_19621_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl151_cast_fu_19690_p1() {
    p_shl151_cast_fu_19690_p1 = esl_zext<7,4>(p_shl151_fu_19682_p3.read());
}

void ShuffleNetV2::thread_p_shl151_fu_19682_p3() {
    p_shl151_fu_19682_p3 = esl_concat<2,2>(tmp_1109_fu_19621_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl152_cast_fu_20122_p1() {
    p_shl152_cast_fu_20122_p1 = esl_zext<7,6>(p_shl152_fu_20114_p3.read());
}

void ShuffleNetV2::thread_p_shl152_fu_20114_p3() {
    p_shl152_fu_20114_p3 = esl_concat<1,5>(tmp_1122_fu_20110_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl153_cast_fu_20134_p1() {
    p_shl153_cast_fu_20134_p1 = esl_zext<7,4>(p_shl153_fu_20126_p3.read());
}

void ShuffleNetV2::thread_p_shl153_fu_20126_p3() {
    p_shl153_fu_20126_p3 = esl_concat<1,3>(tmp_1122_fu_20110_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl154_cast_fu_20412_p1() {
    p_shl154_cast_fu_20412_p1 = esl_zext<7,6>(p_shl154_fu_20404_p3.read());
}

void ShuffleNetV2::thread_p_shl154_fu_20404_p3() {
    p_shl154_fu_20404_p3 = esl_concat<1,5>(tmp_1128_fu_20400_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl155_cast_fu_20424_p1() {
    p_shl155_cast_fu_20424_p1 = esl_zext<7,4>(p_shl155_fu_20416_p3.read());
}

void ShuffleNetV2::thread_p_shl155_fu_20416_p3() {
    p_shl155_fu_20416_p3 = esl_concat<1,3>(tmp_1128_fu_20400_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl156_cast_fu_20211_p1() {
    p_shl156_cast_fu_20211_p1 = esl_zext<8,7>(p_shl156_fu_20203_p3.read());
}

void ShuffleNetV2::thread_p_shl156_fu_20203_p3() {
    p_shl156_fu_20203_p3 = esl_concat<2,5>(tmp_1129_fu_20199_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl157_cast_fu_20223_p1() {
    p_shl157_cast_fu_20223_p1 = esl_zext<8,5>(p_shl157_fu_20215_p3.read());
}

void ShuffleNetV2::thread_p_shl157_fu_20215_p3() {
    p_shl157_fu_20215_p3 = esl_concat<2,3>(tmp_1129_fu_20199_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl158_cast_fu_20256_p1() {
    p_shl158_cast_fu_20256_p1 = esl_zext<7,6>(p_shl158_fu_20248_p3.read());
}

void ShuffleNetV2::thread_p_shl158_fu_20248_p3() {
    p_shl158_fu_20248_p3 = esl_concat<2,4>(tmp_1129_fu_20199_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl159_cast_fu_20268_p1() {
    p_shl159_cast_fu_20268_p1 = esl_zext<7,4>(p_shl159_fu_20260_p3.read());
}

void ShuffleNetV2::thread_p_shl159_fu_20260_p3() {
    p_shl159_fu_20260_p3 = esl_concat<2,2>(tmp_1129_fu_20199_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl15_cast_fu_10847_p1() {
    p_shl15_cast_fu_10847_p1 = esl_zext<7,4>(p_shl15_fu_10839_p3.read());
}

void ShuffleNetV2::thread_p_shl15_fu_10839_p3() {
    p_shl15_fu_10839_p3 = esl_concat<1,3>(tmp_140_fu_10823_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl160_cast_fu_20762_p1() {
    p_shl160_cast_fu_20762_p1 = esl_zext<7,6>(p_shl160_fu_20754_p3.read());
}

void ShuffleNetV2::thread_p_shl160_fu_20754_p3() {
    p_shl160_fu_20754_p3 = esl_concat<1,5>(tmp_1141_fu_20750_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl161_cast_fu_20774_p1() {
    p_shl161_cast_fu_20774_p1 = esl_zext<7,4>(p_shl161_fu_20766_p3.read());
}

void ShuffleNetV2::thread_p_shl161_fu_20766_p3() {
    p_shl161_fu_20766_p3 = esl_concat<1,3>(tmp_1141_fu_20750_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl162_cast_fu_20844_p1() {
    p_shl162_cast_fu_20844_p1 = esl_zext<7,6>(p_shl162_fu_20836_p3.read());
}

void ShuffleNetV2::thread_p_shl162_fu_20836_p3() {
    p_shl162_fu_20836_p3 = esl_concat<1,5>(tmp_1140_fu_20832_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl163_cast_fu_20856_p1() {
    p_shl163_cast_fu_20856_p1 = esl_zext<7,4>(p_shl163_fu_20848_p3.read());
}

void ShuffleNetV2::thread_p_shl163_fu_20848_p3() {
    p_shl163_fu_20848_p3 = esl_concat<1,3>(tmp_1140_fu_20832_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl164_cast_fu_21134_p1() {
    p_shl164_cast_fu_21134_p1 = esl_zext<7,6>(p_shl164_fu_21126_p3.read());
}

void ShuffleNetV2::thread_p_shl164_fu_21126_p3() {
    p_shl164_fu_21126_p3 = esl_concat<1,5>(tmp_1158_fu_21122_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl165_cast_fu_21146_p1() {
    p_shl165_cast_fu_21146_p1 = esl_zext<7,4>(p_shl165_fu_21138_p3.read());
}

void ShuffleNetV2::thread_p_shl165_fu_21138_p3() {
    p_shl165_fu_21138_p3 = esl_concat<1,3>(tmp_1158_fu_21122_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl166_cast_fu_20550_p1() {
    p_shl166_cast_fu_20550_p1 = esl_zext<7,6>(p_shl166_fu_20542_p3.read());
}

void ShuffleNetV2::thread_p_shl166_fu_20542_p3() {
    p_shl166_fu_20542_p3 = esl_concat<1,5>(tmp_1142_fu_20538_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl167_cast_fu_20562_p1() {
    p_shl167_cast_fu_20562_p1 = esl_zext<7,4>(p_shl167_fu_20554_p3.read());
}

void ShuffleNetV2::thread_p_shl167_fu_20554_p3() {
    p_shl167_fu_20554_p3 = esl_concat<1,3>(tmp_1142_fu_20538_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl168_cast_fu_20933_p1() {
    p_shl168_cast_fu_20933_p1 = esl_zext<8,7>(p_shl168_fu_20925_p3.read());
}

void ShuffleNetV2::thread_p_shl168_fu_20925_p3() {
    p_shl168_fu_20925_p3 = esl_concat<2,5>(tmp_1159_fu_20921_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl169_cast_fu_20945_p1() {
    p_shl169_cast_fu_20945_p1 = esl_zext<8,5>(p_shl169_fu_20937_p3.read());
}

void ShuffleNetV2::thread_p_shl169_fu_20937_p3() {
    p_shl169_fu_20937_p3 = esl_concat<2,3>(tmp_1159_fu_20921_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl16_cast_fu_11222_p1() {
    p_shl16_cast_fu_11222_p1 = esl_zext<8,7>(p_shl16_fu_11214_p3.read());
}

void ShuffleNetV2::thread_p_shl16_fu_11214_p3() {
    p_shl16_fu_11214_p3 = esl_concat<2,5>(tmp_153_fu_11210_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl170_cast_fu_20978_p1() {
    p_shl170_cast_fu_20978_p1 = esl_zext<7,6>(p_shl170_fu_20970_p3.read());
}

void ShuffleNetV2::thread_p_shl170_fu_20970_p3() {
    p_shl170_fu_20970_p3 = esl_concat<2,4>(tmp_1159_fu_20921_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl171_cast_fu_20990_p1() {
    p_shl171_cast_fu_20990_p1 = esl_zext<7,4>(p_shl171_fu_20982_p3.read());
}

void ShuffleNetV2::thread_p_shl171_fu_20982_p3() {
    p_shl171_fu_20982_p3 = esl_concat<2,2>(tmp_1159_fu_20921_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl172_cast_fu_21434_p1() {
    p_shl172_cast_fu_21434_p1 = esl_zext<7,6>(p_shl172_fu_21426_p3.read());
}

void ShuffleNetV2::thread_p_shl172_fu_21426_p3() {
    p_shl172_fu_21426_p3 = esl_concat<1,5>(tmp_1174_fu_21422_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl173_cast_fu_21446_p1() {
    p_shl173_cast_fu_21446_p1 = esl_zext<7,4>(p_shl173_fu_21438_p3.read());
}

void ShuffleNetV2::thread_p_shl173_fu_21438_p3() {
    p_shl173_fu_21438_p3 = esl_concat<1,3>(tmp_1174_fu_21422_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl174_cast_fu_21724_p1() {
    p_shl174_cast_fu_21724_p1 = esl_zext<7,6>(p_shl174_fu_21716_p3.read());
}

void ShuffleNetV2::thread_p_shl174_fu_21716_p3() {
    p_shl174_fu_21716_p3 = esl_concat<1,5>(tmp_1180_fu_21712_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl175_cast_fu_21736_p1() {
    p_shl175_cast_fu_21736_p1 = esl_zext<7,4>(p_shl175_fu_21728_p3.read());
}

void ShuffleNetV2::thread_p_shl175_fu_21728_p3() {
    p_shl175_fu_21728_p3 = esl_concat<1,3>(tmp_1180_fu_21712_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl176_cast_fu_21523_p1() {
    p_shl176_cast_fu_21523_p1 = esl_zext<8,7>(p_shl176_fu_21515_p3.read());
}

void ShuffleNetV2::thread_p_shl176_fu_21515_p3() {
    p_shl176_fu_21515_p3 = esl_concat<2,5>(tmp_1181_fu_21511_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl177_cast_fu_21535_p1() {
    p_shl177_cast_fu_21535_p1 = esl_zext<8,5>(p_shl177_fu_21527_p3.read());
}

void ShuffleNetV2::thread_p_shl177_fu_21527_p3() {
    p_shl177_fu_21527_p3 = esl_concat<2,3>(tmp_1181_fu_21511_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl178_cast_fu_21568_p1() {
    p_shl178_cast_fu_21568_p1 = esl_zext<7,6>(p_shl178_fu_21560_p3.read());
}

void ShuffleNetV2::thread_p_shl178_fu_21560_p3() {
    p_shl178_fu_21560_p3 = esl_concat<2,4>(tmp_1181_fu_21511_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl179_cast_fu_21580_p1() {
    p_shl179_cast_fu_21580_p1 = esl_zext<7,4>(p_shl179_fu_21572_p3.read());
}

void ShuffleNetV2::thread_p_shl179_fu_21572_p3() {
    p_shl179_fu_21572_p3 = esl_concat<2,2>(tmp_1181_fu_21511_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl17_cast_fu_11234_p1() {
    p_shl17_cast_fu_11234_p1 = esl_zext<8,5>(p_shl17_fu_11226_p3.read());
}

void ShuffleNetV2::thread_p_shl17_fu_11226_p3() {
    p_shl17_fu_11226_p3 = esl_concat<2,3>(tmp_153_fu_11210_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl180_cast_fu_22070_p1() {
    p_shl180_cast_fu_22070_p1 = esl_zext<7,6>(p_shl180_fu_22062_p3.read());
}

void ShuffleNetV2::thread_p_shl180_fu_22062_p3() {
    p_shl180_fu_22062_p3 = esl_concat<1,5>(tmp_1193_fu_22058_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl181_cast_fu_22082_p1() {
    p_shl181_cast_fu_22082_p1 = esl_zext<7,4>(p_shl181_fu_22074_p3.read());
}

void ShuffleNetV2::thread_p_shl181_fu_22074_p3() {
    p_shl181_fu_22074_p3 = esl_concat<1,3>(tmp_1193_fu_22058_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl182_cast_fu_22156_p1() {
    p_shl182_cast_fu_22156_p1 = esl_zext<7,6>(p_shl182_fu_22148_p3.read());
}

void ShuffleNetV2::thread_p_shl182_fu_22148_p3() {
    p_shl182_fu_22148_p3 = esl_concat<1,5>(tmp_1192_fu_22144_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl183_cast_fu_22168_p1() {
    p_shl183_cast_fu_22168_p1 = esl_zext<7,4>(p_shl183_fu_22160_p3.read());
}

void ShuffleNetV2::thread_p_shl183_fu_22160_p3() {
    p_shl183_fu_22160_p3 = esl_concat<1,3>(tmp_1192_fu_22144_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl184_cast_fu_22446_p1() {
    p_shl184_cast_fu_22446_p1 = esl_zext<7,6>(p_shl184_fu_22438_p3.read());
}

void ShuffleNetV2::thread_p_shl184_fu_22438_p3() {
    p_shl184_fu_22438_p3 = esl_concat<1,5>(tmp_1209_fu_22434_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl185_cast_fu_22458_p1() {
    p_shl185_cast_fu_22458_p1 = esl_zext<7,4>(p_shl185_fu_22450_p3.read());
}

void ShuffleNetV2::thread_p_shl185_fu_22450_p3() {
    p_shl185_fu_22450_p3 = esl_concat<1,3>(tmp_1209_fu_22434_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl186_cast_fu_21866_p1() {
    p_shl186_cast_fu_21866_p1 = esl_zext<7,6>(p_shl186_fu_21858_p3.read());
}

void ShuffleNetV2::thread_p_shl186_fu_21858_p3() {
    p_shl186_fu_21858_p3 = esl_concat<1,5>(tmp_1194_fu_21854_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl187_cast_fu_21878_p1() {
    p_shl187_cast_fu_21878_p1 = esl_zext<7,4>(p_shl187_fu_21870_p3.read());
}

void ShuffleNetV2::thread_p_shl187_fu_21870_p3() {
    p_shl187_fu_21870_p3 = esl_concat<1,3>(tmp_1194_fu_21854_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl188_cast_fu_22245_p1() {
    p_shl188_cast_fu_22245_p1 = esl_zext<8,7>(p_shl188_fu_22237_p3.read());
}

void ShuffleNetV2::thread_p_shl188_fu_22237_p3() {
    p_shl188_fu_22237_p3 = esl_concat<2,5>(tmp_1210_fu_22233_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl189_cast_fu_22257_p1() {
    p_shl189_cast_fu_22257_p1 = esl_zext<8,5>(p_shl189_fu_22249_p3.read());
}

void ShuffleNetV2::thread_p_shl189_fu_22249_p3() {
    p_shl189_fu_22249_p3 = esl_concat<2,3>(tmp_1210_fu_22233_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl18_cast_fu_11267_p1() {
    p_shl18_cast_fu_11267_p1 = esl_zext<7,6>(p_shl18_fu_11259_p3.read());
}

void ShuffleNetV2::thread_p_shl18_fu_11259_p3() {
    p_shl18_fu_11259_p3 = esl_concat<2,4>(tmp_153_fu_11210_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl190_cast_fu_22298_p1() {
    p_shl190_cast_fu_22298_p1 = esl_zext<7,6>(p_shl190_fu_22290_p3.read());
}

void ShuffleNetV2::thread_p_shl190_fu_22290_p3() {
    p_shl190_fu_22290_p3 = esl_concat<2,4>(tmp_1210_fu_22233_p1.read(), ap_const_lv4_0);
}

void ShuffleNetV2::thread_p_shl191_cast_fu_22310_p1() {
    p_shl191_cast_fu_22310_p1 = esl_zext<7,4>(p_shl191_fu_22302_p3.read());
}

void ShuffleNetV2::thread_p_shl191_fu_22302_p3() {
    p_shl191_fu_22302_p3 = esl_concat<2,2>(tmp_1210_fu_22233_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl192_cast_fu_22615_p1() {
    p_shl192_cast_fu_22615_p1 = esl_zext<8,7>(p_shl192_fu_22607_p3.read());
}

void ShuffleNetV2::thread_p_shl192_fu_22607_p3() {
    p_shl192_fu_22607_p3 = esl_concat<2,5>(tmp_1219_fu_22603_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl193_cast_fu_22625_p1() {
    p_shl193_cast_fu_22625_p1 = esl_zext<8,5>(tmp_1220_fu_22619_p2.read());
}

void ShuffleNetV2::thread_p_shl193_fu_22877_p3() {
    p_shl193_fu_22877_p3 = esl_concat<2,5>(tmp_1224_fu_22873_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl194_cast_fu_22885_p1() {
    p_shl194_cast_fu_22885_p1 = esl_zext<8,7>(p_shl193_fu_22877_p3.read());
}

void ShuffleNetV2::thread_p_shl194_fu_22889_p3() {
    p_shl194_fu_22889_p3 = esl_concat<2,3>(tmp_1224_fu_22873_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl195_cast_fu_22897_p1() {
    p_shl195_cast_fu_22897_p1 = esl_zext<8,5>(p_shl194_fu_22889_p3.read());
}

void ShuffleNetV2::thread_p_shl195_fu_22694_p3() {
    p_shl195_fu_22694_p3 = esl_concat<4,5>(tmp_1225_fu_22690_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl196_cast_fu_22702_p1() {
    p_shl196_cast_fu_22702_p1 = esl_zext<10,9>(p_shl195_fu_22694_p3.read());
}

void ShuffleNetV2::thread_p_shl196_fu_22706_p3() {
    p_shl196_fu_22706_p3 = esl_concat<4,3>(tmp_1225_fu_22690_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl197_cast1_fu_22714_p1() {
    p_shl197_cast1_fu_22714_p1 = esl_zext<8,7>(p_shl196_fu_22706_p3.read());
}

void ShuffleNetV2::thread_p_shl197_cast_fu_22718_p1() {
    p_shl197_cast_fu_22718_p1 = esl_zext<10,7>(p_shl196_fu_22706_p3.read());
}

void ShuffleNetV2::thread_p_shl197_fu_23309_p3() {
    p_shl197_fu_23309_p3 = esl_concat<2,5>(tmp_1235_fu_23305_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl198_cast_fu_22749_p1() {
    p_shl198_cast_fu_22749_p1 = esl_zext<8,5>(tmp_1230_fu_22743_p2.read());
}

void ShuffleNetV2::thread_p_shl198_fu_23223_p3() {
    p_shl198_fu_23223_p3 = esl_concat<2,5>(tmp_1237_fu_23219_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl199_cast_fu_23231_p1() {
    p_shl199_cast_fu_23231_p1 = esl_zext<8,7>(p_shl198_fu_23223_p3.read());
}

void ShuffleNetV2::thread_p_shl199_fu_23235_p3() {
    p_shl199_fu_23235_p3 = esl_concat<2,3>(tmp_1237_fu_23219_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl19_cast_fu_11279_p1() {
    p_shl19_cast_fu_11279_p1 = esl_zext<7,4>(p_shl19_fu_11271_p3.read());
}

void ShuffleNetV2::thread_p_shl19_fu_11271_p3() {
    p_shl19_fu_11271_p3 = esl_concat<2,2>(tmp_153_fu_11210_p1.read(), ap_const_lv2_0);
}

void ShuffleNetV2::thread_p_shl1_cast_fu_10427_p1() {
    p_shl1_cast_fu_10427_p1 = esl_zext<7,4>(p_shl1_fu_10419_p3.read());
}

void ShuffleNetV2::thread_p_shl1_fu_10419_p3() {
    p_shl1_fu_10419_p3 = esl_concat<1,3>(tmp_122_fu_10403_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl200_cast_fu_23243_p1() {
    p_shl200_cast_fu_23243_p1 = esl_zext<8,5>(p_shl199_fu_23235_p3.read());
}

void ShuffleNetV2::thread_p_shl200_fu_23019_p3() {
    p_shl200_fu_23019_p3 = esl_concat<2,5>(tmp_1238_fu_23015_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl201_cast_fu_23317_p1() {
    p_shl201_cast_fu_23317_p1 = esl_zext<8,7>(p_shl197_fu_23309_p3.read());
}

void ShuffleNetV2::thread_p_shl201_fu_23031_p3() {
    p_shl201_fu_23031_p3 = esl_concat<2,3>(tmp_1238_fu_23015_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl202_cast_fu_23327_p1() {
    p_shl202_cast_fu_23327_p1 = esl_zext<8,5>(tmp_1236_fu_23321_p2.read());
}

void ShuffleNetV2::thread_p_shl202_fu_23579_p3() {
    p_shl202_fu_23579_p3 = esl_concat<2,5>(tmp_1252_fu_23575_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl203_cast_fu_23587_p1() {
    p_shl203_cast_fu_23587_p1 = esl_zext<8,7>(p_shl202_fu_23579_p3.read());
}

void ShuffleNetV2::thread_p_shl203_fu_23591_p3() {
    p_shl203_fu_23591_p3 = esl_concat<2,3>(tmp_1252_fu_23575_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl204_cast_fu_23599_p1() {
    p_shl204_cast_fu_23599_p1 = esl_zext<8,5>(p_shl203_fu_23591_p3.read());
}

void ShuffleNetV2::thread_p_shl204_fu_23396_p3() {
    p_shl204_fu_23396_p3 = esl_concat<4,5>(tmp_1253_fu_23392_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl205_cast_fu_23027_p1() {
    p_shl205_cast_fu_23027_p1 = esl_zext<8,7>(p_shl200_fu_23019_p3.read());
}

void ShuffleNetV2::thread_p_shl205_fu_23408_p3() {
    p_shl205_fu_23408_p3 = esl_concat<4,3>(tmp_1253_fu_23392_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl206_cast_fu_23039_p1() {
    p_shl206_cast_fu_23039_p1 = esl_zext<8,5>(p_shl201_fu_23031_p3.read());
}

void ShuffleNetV2::thread_p_shl206_fu_24011_p3() {
    p_shl206_fu_24011_p3 = esl_concat<2,5>(tmp_1263_fu_24007_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl207_cast_fu_23404_p1() {
    p_shl207_cast_fu_23404_p1 = esl_zext<10,9>(p_shl204_fu_23396_p3.read());
}

void ShuffleNetV2::thread_p_shl207_fu_23929_p3() {
    p_shl207_fu_23929_p3 = esl_concat<2,5>(tmp_1265_fu_23925_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl208_cast1_fu_23416_p1() {
    p_shl208_cast1_fu_23416_p1 = esl_zext<8,7>(p_shl205_fu_23408_p3.read());
}

void ShuffleNetV2::thread_p_shl208_cast_fu_23420_p1() {
    p_shl208_cast_fu_23420_p1 = esl_zext<10,7>(p_shl205_fu_23408_p3.read());
}

void ShuffleNetV2::thread_p_shl208_fu_23941_p3() {
    p_shl208_fu_23941_p3 = esl_concat<2,3>(tmp_1265_fu_23925_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl209_cast_fu_23451_p1() {
    p_shl209_cast_fu_23451_p1 = esl_zext<8,5>(tmp_1258_fu_23445_p2.read());
}

void ShuffleNetV2::thread_p_shl209_fu_23725_p3() {
    p_shl209_fu_23725_p3 = esl_concat<2,5>(tmp_1266_fu_23721_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl20_cast_fu_11765_p1() {
    p_shl20_cast_fu_11765_p1 = esl_zext<7,6>(p_shl20_fu_11757_p3.read());
}

void ShuffleNetV2::thread_p_shl20_fu_11757_p3() {
    p_shl20_fu_11757_p3 = esl_concat<1,5>(tmp_160_fu_11753_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl210_cast_fu_23937_p1() {
    p_shl210_cast_fu_23937_p1 = esl_zext<8,7>(p_shl207_fu_23929_p3.read());
}

void ShuffleNetV2::thread_p_shl210_fu_23737_p3() {
    p_shl210_fu_23737_p3 = esl_concat<2,3>(tmp_1266_fu_23721_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl211_cast_fu_23949_p1() {
    p_shl211_cast_fu_23949_p1 = esl_zext<8,5>(p_shl208_fu_23941_p3.read());
}

void ShuffleNetV2::thread_p_shl211_fu_24281_p3() {
    p_shl211_fu_24281_p3 = esl_concat<2,5>(tmp_1282_fu_24277_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl212_cast_fu_24019_p1() {
    p_shl212_cast_fu_24019_p1 = esl_zext<8,7>(p_shl206_fu_24011_p3.read());
}

void ShuffleNetV2::thread_p_shl212_fu_24293_p3() {
    p_shl212_fu_24293_p3 = esl_concat<2,3>(tmp_1282_fu_24277_p1.read(), ap_const_lv3_0);
}

void ShuffleNetV2::thread_p_shl213_cast_fu_24029_p1() {
    p_shl213_cast_fu_24029_p1 = esl_zext<8,5>(tmp_1264_fu_24023_p2.read());
}

void ShuffleNetV2::thread_p_shl213_fu_24098_p3() {
    p_shl213_fu_24098_p3 = esl_concat<4,5>(tmp_1283_fu_24094_p1.read(), ap_const_lv5_0);
}

void ShuffleNetV2::thread_p_shl214_cast_fu_24289_p1() {
    p_shl214_cast_fu_24289_p1 = esl_zext<8,7>(p_shl211_fu_24281_p3.read());
}

void ShuffleNetV2::thread_p_shl214_fu_24110_p3() {
    p_shl214_fu_24110_p3 = esl_concat<4,3>(tmp_1283_fu_24094_p1.read(), ap_const_lv3_0);
}

}

